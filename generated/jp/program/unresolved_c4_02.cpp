// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/C4/C47044.asm (unresolved).
bool execute_unresolved_c4_c47044_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47044.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44DC8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47044.asm:11 END_STACK_VARS
    case 0xC44DCA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C47044.asm:11 END_STACK_VARS
    case 0xC44DCB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47044.asm:11 END_STACK_VARS
    case 0xC44DCC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47044.asm:11 END_STACK_VARS
    case 0xC44DCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47044.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC44DCD.
    case 0xC44DCF: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47044.asm:11 END_STACK_VARS
    case 0xC44DD0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C47044.asm:11 END_STACK_VARS
    case 0xC44DD1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:12 STA @VIRTUAL04
    case 0xC44DD2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47044.asm:12 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC44DCF.
    case 0xC44DD3: cpu.execute_instruction<0x04>(0x0000AD, 2); return true;
    // src/unknown/C4/C47044.asm:13 LDA CURRENT_ENTITY_SLOT
    case 0xC44DD4: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C47044.asm:13 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC44DD3.
    case 0xC44DD5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:13 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC44DD5.
    case 0xC44DD6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:14 STA @VIRTUAL02
    case 0xC44DD7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47044.asm:15 ASL
    case 0xC44DD9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:16 TAY
    case 0xC44DDA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:17 STY @LOCAL03
    case 0xC44DDB: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C47044.asm:18 LDA ENTITY_MOVEMENT_SPEEDS,Y
    case 0xC44DDD: cpu.execute_instruction<0xB9>(0x002F30, 3); return true;
    // src/unknown/C4/C47044.asm:19 TAX
    case 0xC44DE0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:20 LDA @VIRTUAL04
    case 0xC44DE1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C47044.asm:21 JSL UNKNOWN_C41FFF
    case 0xC44DE3: cpu.execute_instruction<0x22>(0xC41F4B, 4); return true;
    // src/unknown/C4/C47044.asm:21 JSL UNKNOWN_C41FFF
    // Overlapping static entry reached from 0xC44DF3.
    case 0xC44DE5: cpu.execute_instruction<0x1F>(0x06A5C4, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47044.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44DE7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47044.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44DE9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47044.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44DEB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47044.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44DED: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:23 STA @LOCAL02
    case 0xC44DEF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:24 AND #$8000
    case 0xC44DF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C4/C47044.asm:24 AND #$8000
    // Overlapping static entry reached from 0xC44DF1.
    case 0xC44DF3: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C4/C47044.asm:25 BEQ @UNKNOWN0
    case 0xC44DF4: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C4/C47044.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC44DF6: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:27 LDY #8
    case 0xC44DF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/unknown/C4/C47044.asm:28 LDA @LOCAL02
    case 0xC44DFA: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:28 LDA @LOCAL02
    // Overlapping static entry reached from 0xC44DF8.
    case 0xC44DFB: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/unknown/C4/C47044.asm:29 JSL ASR8_UNKNOWN1
    case 0xC44DFC: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C4/C47044.asm:29 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC44DFB.
    case 0xC44DFD: cpu.execute_instruction<0x33>(0x000092, 2); return true;
    // src/unknown/C4/C47044.asm:29 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC44DFD.
    case 0xC44DFF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000009, 2); else cpu.execute_instruction<0xC0>(0x000009, 3); return true;
    // src/unknown/C4/C47044.asm:30 ORA #$FF00
    case 0xC44E00: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/unknown/C4/C47044.asm:30 ORA #$FF00
    // Overlapping static entry reached from 0xC44DFF.
    case 0xC44E01: cpu.execute_instruction<0x00>(0x0000FF, 2); return true;
    // src/unknown/C4/C47044.asm:30 ORA #$FF00
    // Overlapping static entry reached from 0xC44E00.
    case 0xC44E02: cpu.execute_instruction<0xFF>(0xA410C2, 4); return true;
    // src/unknown/C4/C47044.asm:31 REP #PROC_FLAGS::INDEX8
    case 0xC44E03: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:32 LDY @LOCAL03
    case 0xC44E05: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C47044.asm:32 LDY @LOCAL03
    // Overlapping static entry reached from 0xC44E02.
    case 0xC44E06: cpu.execute_instruction<0x16>(0x000099, 2); return true;
    // src/unknown/C4/C47044.asm:33 STA ENTITY_DELTA_X_TABLE,Y
    case 0xC44E07: cpu.execute_instruction<0x99>(0x000CEC, 3); return true;
    // src/unknown/C4/C47044.asm:33 STA ENTITY_DELTA_X_TABLE,Y
    // Overlapping static entry reached from 0xC44E06.
    case 0xC44E08: cpu.execute_instruction<0xEC>(0x00E20C, 3); return true;
    // src/unknown/C4/C47044.asm:34 SEP #PROC_FLAGS::INDEX8
    case 0xC44E0A: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:34 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC44E08.
    case 0xC44E0B: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/unknown/C4/C47044.asm:35 LDY #8
    case 0xC44E0C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/unknown/C4/C47044.asm:35 LDY #8
    // Overlapping static entry reached from 0xC44E0B.
    case 0xC44E0D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:36 LDA @LOCAL02
    case 0xC44E0E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:36 LDA @LOCAL02
    // Overlapping static entry reached from 0xC44E0C.
    case 0xC44E0F: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/unknown/C4/C47044.asm:37 JSL ASL16_ENTRY2
    case 0xC44E10: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/unknown/C4/C47044.asm:37 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC44E0F.
    case 0xC44E11: cpu.execute_instruction<0x20>(0x00C092, 3); return true;
    // src/unknown/C4/C47044.asm:38 ORA #$00FF
    case 0xC44E14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/unknown/C4/C47044.asm:38 ORA #$00FF
    // Overlapping static entry reached from 0xC44E14.
    case 0xC44E16: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C47044.asm:39 REP #PROC_FLAGS::INDEX8
    case 0xC44E17: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:40 LDY @LOCAL03
    case 0xC44E19: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C47044.asm:41 STA ENTITY_DELTA_X_FRACTION_TABLE,Y
    case 0xC44E1B: cpu.execute_instruction<0x99>(0x000DA0, 3); return true;
    // src/unknown/C4/C47044.asm:42 BRA @UNKNOWN1
    case 0xC44E1E: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C4/C47044.asm:42 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC44E75.
    case 0xC44E1F: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:44 SEP #PROC_FLAGS::INDEX8
    case 0xC44E20: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:45 LDY #8
    case 0xC44E22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/unknown/C4/C47044.asm:46 LDA @LOCAL02
    case 0xC44E24: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:46 LDA @LOCAL02
    // Overlapping static entry reached from 0xC44E22.
    case 0xC44E25: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/unknown/C4/C47044.asm:47 JSL ASR8_UNKNOWN1
    case 0xC44E26: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C4/C47044.asm:47 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC44E25.
    case 0xC44E27: cpu.execute_instruction<0x33>(0x000092, 2); return true;
    // src/unknown/C4/C47044.asm:47 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC44E27.
    case 0xC44E29: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000029, 2); else cpu.execute_instruction<0xC0>(0x00FF29, 3); return true;
    // src/unknown/C4/C47044.asm:48 AND #$00FF
    case 0xC44E2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47044.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC44E29.
    case 0xC44E2B: cpu.execute_instruction<0xFF>(0x10C200, 4); return true;
    // src/unknown/C4/C47044.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC44E2A.
    case 0xC44E2C: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C47044.asm:49 REP #PROC_FLAGS::INDEX8
    case 0xC44E2D: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:50 LDY @LOCAL03
    case 0xC44E2F: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C47044.asm:51 STA ENTITY_DELTA_X_TABLE,Y
    case 0xC44E31: cpu.execute_instruction<0x99>(0x000CEC, 3); return true;
    // src/unknown/C4/C47044.asm:52 SEP #PROC_FLAGS::INDEX8
    case 0xC44E34: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:53 LDY #8
    case 0xC44E36: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/unknown/C4/C47044.asm:54 LDA @LOCAL02
    case 0xC44E38: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:54 LDA @LOCAL02
    // Overlapping static entry reached from 0xC44E36.
    case 0xC44E39: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/unknown/C4/C47044.asm:55 JSL ASL16_ENTRY2
    case 0xC44E3A: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/unknown/C4/C47044.asm:55 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC44E39.
    case 0xC44E3B: cpu.execute_instruction<0x20>(0x00C092, 3); return true;
    // src/unknown/C4/C47044.asm:56 AND #$FF00
    case 0xC44E3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C47044.asm:56 AND #$FF00
    // Overlapping static entry reached from 0xC44E3E.
    case 0xC44E40: cpu.execute_instruction<0xFF>(0xA410C2, 4); return true;
    // src/unknown/C4/C47044.asm:57 REP #PROC_FLAGS::INDEX8
    case 0xC44E41: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:58 LDY @LOCAL03
    case 0xC44E43: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C47044.asm:58 LDY @LOCAL03
    // Overlapping static entry reached from 0xC44E40.
    case 0xC44E44: cpu.execute_instruction<0x16>(0x000099, 2); return true;
    // src/unknown/C4/C47044.asm:59 STA ENTITY_DELTA_X_FRACTION_TABLE,Y
    case 0xC44E45: cpu.execute_instruction<0x99>(0x000DA0, 3); return true;
    // src/unknown/C4/C47044.asm:59 STA ENTITY_DELTA_X_FRACTION_TABLE,Y
    // Overlapping static entry reached from 0xC44E44.
    case 0xC44E46: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000D, 2); else cpu.execute_instruction<0xA0>(0x00A50D, 3); return true;
    // src/unknown/C4/C47044.asm:61 LDA @LOCAL00 + fixed_point::fraction
    case 0xC44E48: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C47044.asm:61 LDA @LOCAL00 + fixed_point::fraction
    // Overlapping static entry reached from 0xC44E46.
    case 0xC44E49: cpu.execute_instruction<0x0E>(0x001485, 3); return true;
    // src/unknown/C4/C47044.asm:62 STA @LOCAL02
    case 0xC44E4A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:63 AND #$8000
    case 0xC44E4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C4/C47044.asm:63 AND #$8000
    // Overlapping static entry reached from 0xC44E4C.
    case 0xC44E4E: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C4/C47044.asm:64 BEQ @UNKNOWN2
    case 0xC44E4F: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/unknown/C4/C47044.asm:65 LDA @VIRTUAL02
    case 0xC44E51: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47044.asm:66 ASL
    case 0xC44E53: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:67 TAX
    case 0xC44E54: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:68 STX @LOCAL01
    case 0xC44E55: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C47044.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC44E57: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:70 LDA #8
    case 0xC44E59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/unknown/C4/C47044.asm:71 SEP #PROC_FLAGS::INDEX8
    case 0xC44E5B: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:71 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC44E59.
    case 0xC44E5C: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C4/C47044.asm:72 TAY
    case 0xC44E5D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC44E5E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:74 LDA @LOCAL02
    case 0xC44E60: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:75 JSL ASR8_UNKNOWN1
    case 0xC44E62: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C4/C47044.asm:76 ORA #$FF00
    case 0xC44E66: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/unknown/C4/C47044.asm:76 ORA #$FF00
    // Overlapping static entry reached from 0xC44E66.
    case 0xC44E68: cpu.execute_instruction<0xFF>(0xA610C2, 4); return true;
    // src/unknown/C4/C47044.asm:77 REP #PROC_FLAGS::INDEX8
    case 0xC44E69: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:78 LDX @LOCAL01
    case 0xC44E6B: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47044.asm:78 LDX @LOCAL01
    // Overlapping static entry reached from 0xC44E68.
    case 0xC44E6C: cpu.execute_instruction<0x12>(0x00009D, 2); return true;
    // src/unknown/C4/C47044.asm:79 STA ENTITY_DELTA_Y_TABLE,X
    case 0xC44E6D: cpu.execute_instruction<0x9D>(0x000D28, 3); return true;
    // src/unknown/C4/C47044.asm:79 STA ENTITY_DELTA_Y_TABLE,X
    // Overlapping static entry reached from 0xC44E6C.
    case 0xC44E6E: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:79 STA ENTITY_DELTA_Y_TABLE,X
    // Overlapping static entry reached from 0xC44E6E.
    case 0xC44E6F: cpu.execute_instruction<0x0D>(0x0020E2, 3); return true;
    // src/unknown/C4/C47044.asm:80 SEP #PROC_FLAGS::ACCUM8
    case 0xC44E70: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:81 LDA #8
    case 0xC44E72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/unknown/C4/C47044.asm:82 SEP #PROC_FLAGS::INDEX8
    case 0xC44E74: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:82 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC44E72.
    case 0xC44E75: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C4/C47044.asm:83 TAY
    case 0xC44E76: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC44E77: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:85 LDA @LOCAL02
    case 0xC44E79: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:86 JSL ASL16_ENTRY2
    case 0xC44E7B: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/unknown/C4/C47044.asm:87 ORA #$00FF
    case 0xC44E7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000FF, 2); else cpu.execute_instruction<0x09>(0x0000FF, 3); return true;
    // src/unknown/C4/C47044.asm:87 ORA #$00FF
    // Overlapping static entry reached from 0xC44E7F.
    case 0xC44E81: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C47044.asm:88 REP #PROC_FLAGS::INDEX8
    case 0xC44E82: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:89 LDX @LOCAL01
    case 0xC44E84: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47044.asm:90 STA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC44E86: cpu.execute_instruction<0x9D>(0x000DDC, 3); return true;
    // src/unknown/C4/C47044.asm:91 BRA @UNKNOWN3
    case 0xC44E89: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C4/C47044.asm:93 LDA @VIRTUAL02
    case 0xC44E8B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47044.asm:94 ASL
    case 0xC44E8D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:95 TAX
    case 0xC44E8E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:96 STX @LOCAL01
    case 0xC44E8F: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C47044.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC44E91: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:98 LDA #8
    case 0xC44E93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/unknown/C4/C47044.asm:99 SEP #PROC_FLAGS::INDEX8
    case 0xC44E95: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:99 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC44E93.
    case 0xC44E96: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C4/C47044.asm:100 TAY
    case 0xC44E97: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:101 REP #PROC_FLAGS::ACCUM8
    case 0xC44E98: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:102 LDA @LOCAL02
    case 0xC44E9A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:103 JSL ASR8_UNKNOWN1
    case 0xC44E9C: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C4/C47044.asm:104 AND #$00FF
    case 0xC44EA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47044.asm:104 AND #$00FF
    // Overlapping static entry reached from 0xC44EA0.
    case 0xC44EA2: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C47044.asm:105 REP #PROC_FLAGS::INDEX8
    case 0xC44EA3: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:106 LDX @LOCAL01
    case 0xC44EA5: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47044.asm:107 STA ENTITY_DELTA_Y_TABLE,X
    case 0xC44EA7: cpu.execute_instruction<0x9D>(0x000D28, 3); return true;
    // src/unknown/C4/C47044.asm:108 SEP #PROC_FLAGS::ACCUM8
    case 0xC44EAA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:109 LDA #8
    case 0xC44EAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/unknown/C4/C47044.asm:110 SEP #PROC_FLAGS::INDEX8
    case 0xC44EAE: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:110 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC44EAC.
    case 0xC44EAF: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C4/C47044.asm:111 TAY
    case 0xC44EB0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47044.asm:112 REP #PROC_FLAGS::ACCUM8
    case 0xC44EB1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47044.asm:113 LDA @LOCAL02
    case 0xC44EB3: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47044.asm:114 JSL ASL16_ENTRY2
    case 0xC44EB5: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/unknown/C4/C47044.asm:115 AND #$FF00
    case 0xC44EB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C47044.asm:115 AND #$FF00
    // Overlapping static entry reached from 0xC44EB9.
    case 0xC44EBB: cpu.execute_instruction<0xFF>(0xA610C2, 4); return true;
    // src/unknown/C4/C47044.asm:116 REP #PROC_FLAGS::INDEX8
    case 0xC44EBC: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C47044.asm:117 LDX @LOCAL01
    case 0xC44EBE: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47044.asm:117 LDX @LOCAL01
    // Overlapping static entry reached from 0xC44EBB.
    case 0xC44EBF: cpu.execute_instruction<0x12>(0x00009D, 2); return true;
    // src/unknown/C4/C47044.asm:118 STA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC44EC0: cpu.execute_instruction<0x9D>(0x000DDC, 3); return true;
    // src/unknown/C4/C47044.asm:118 STA ENTITY_DELTA_Y_FRACTION_TABLE,X
    // Overlapping static entry reached from 0xC44EBF.
    case 0xC44EC1: cpu.execute_instruction<0xDC>(0x00A50D, 3); return true;
    // src/unknown/C4/C47044.asm:120 LDA @VIRTUAL04
    case 0xC44EC3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47044.asm:121 END_C_FUNCTION
    case 0xC44EC5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47044.asm:121 END_C_FUNCTION
    case 0xC44EC6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47143.asm (unresolved).
bool execute_unresolved_c4_c47143_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47143.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44EC7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47143.asm:13 END_STACK_VARS
    case 0xC44EC9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C47143.asm:13 END_STACK_VARS
    case 0xC44ECA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47143.asm:13 END_STACK_VARS
    case 0xC44ECB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47143.asm:13 END_STACK_VARS
    case 0xC44ECC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47143.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC44ECC.
    case 0xC44ECE: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47143.asm:13 END_STACK_VARS
    case 0xC44ECF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C47143.asm:13 END_STACK_VARS
    case 0xC44ED0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:14 TXY
    case 0xC44ED1: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:15 STY @LOCAL04
    case 0xC44ED2: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C47143.asm:16 STA @VIRTUAL04
    case 0xC44ED4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47143.asm:17 LDA CURRENT_ENTITY_SLOT
    case 0xC44ED6: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C47143.asm:18 STA @VIRTUAL02
    case 0xC44ED9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:19 STA @LOCAL03
    case 0xC44EDB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C47143.asm:20 LDA @VIRTUAL02
    case 0xC44EDD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:21 ASL
    case 0xC44EDF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:22 TAX
    case 0xC44EE0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:23 LDA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC44EE1: cpu.execute_instruction<0xBD>(0x000FBC, 3); return true;
    // src/unknown/C4/C47143.asm:24 SEC
    case 0xC44EE4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:25 SBC ENTITY_ABS_X_TABLE,X
    case 0xC44EE5: cpu.execute_instruction<0xFD>(0x000B84, 3); return true;
    // src/unknown/C4/C47143.asm:26 STA @LOCAL02
    case 0xC44EE8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:27 STA @VIRTUAL02
    case 0xC44EEA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:28 LDA #0
    case 0xC44EEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47143.asm:28 LDA #0
    // Overlapping static entry reached from 0xC44EEC.
    case 0xC44EEE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C47143.asm:29 CLC
    case 0xC44EEF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:30 SBC @VIRTUAL02
    case 0xC44EF0: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C47143.asm:31 BRANCHLTEQS @UNKNOWN2
    case 0xC44EF2: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C47143.asm:31 BRANCHLTEQS @UNKNOWN2
    case 0xC44EF4: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C47143.asm:31 BRANCHLTEQS @UNKNOWN2
    case 0xC44EF6: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C47143.asm:31 BRANCHLTEQS @UNKNOWN2
    case 0xC44EF8: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C4/C47143.asm:32 LDA @LOCAL02
    case 0xC44EFA: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:33 EOR #$FFFF
    case 0xC44EFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C47143.asm:33 EOR #$FFFF
    // Overlapping static entry reached from 0xC44EFC.
    case 0xC44EFE: cpu.execute_instruction<0xFF>(0x12851A, 4); return true;
    // src/unknown/C4/C47143.asm:34 INC
    case 0xC44EFF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:35 STA @LOCAL02
    case 0xC44F00: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:36 BRA @UNKNOWN3
    case 0xC44F02: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C47143.asm:38 LDA @LOCAL02
    case 0xC44F04: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:39 STA @LOCAL02
    case 0xC44F06: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:41 LDA @LOCAL03
    case 0xC44F08: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47143.asm:42 STA @VIRTUAL02
    case 0xC44F0A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:43 ASL
    case 0xC44F0C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:44 TAX
    case 0xC44F0D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:45 LDA @LOCAL02
    case 0xC44F0E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:46 CMP ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC44F10: cpu.execute_instruction<0xDD>(0x000F80, 3); return true;
    // src/unknown/C4/C47143.asm:47 BCS @UNKNOWN8
    case 0xC44F13: cpu.execute_instruction<0xB0>(0x000039, 2); return true;
    // src/unknown/C4/C47143.asm:48 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC44F15: cpu.execute_instruction<0xBD>(0x000FF8, 3); return true;
    // src/unknown/C4/C47143.asm:49 SEC
    case 0xC44F18: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:50 SBC ENTITY_ABS_Y_TABLE,X
    case 0xC44F19: cpu.execute_instruction<0xFD>(0x000BC0, 3); return true;
    // src/unknown/C4/C47143.asm:51 STA @LOCAL02
    case 0xC44F1C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:52 STA @VIRTUAL02
    case 0xC44F1E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:53 LDA #0
    case 0xC44F20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47143.asm:53 LDA #0
    // Overlapping static entry reached from 0xC44F20.
    case 0xC44F22: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C47143.asm:54 CLC
    case 0xC44F23: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:55 SBC @VIRTUAL02
    case 0xC44F24: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C47143.asm:56 BRANCHLTEQS @UNKNOWN6
    case 0xC44F26: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C47143.asm:56 BRANCHLTEQS @UNKNOWN6
    case 0xC44F28: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C47143.asm:56 BRANCHLTEQS @UNKNOWN6
    case 0xC44F2A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C47143.asm:56 BRANCHLTEQS @UNKNOWN6
    case 0xC44F2C: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C4/C47143.asm:57 LDA @LOCAL02
    case 0xC44F2E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:58 EOR #$FFFF
    case 0xC44F30: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C47143.asm:58 EOR #$FFFF
    // Overlapping static entry reached from 0xC44F30.
    case 0xC44F32: cpu.execute_instruction<0xFF>(0x12851A, 4); return true;
    // src/unknown/C4/C47143.asm:59 INC
    case 0xC44F33: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:60 STA @LOCAL02
    case 0xC44F34: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:61 BRA @UNKNOWN7
    case 0xC44F36: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C47143.asm:63 LDA @LOCAL02
    case 0xC44F38: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:64 STA @LOCAL02
    case 0xC44F3A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:66 LDA @LOCAL03
    case 0xC44F3C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47143.asm:67 STA @VIRTUAL02
    case 0xC44F3E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:68 ASL
    case 0xC44F40: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:69 TAX
    case 0xC44F41: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:70 LDA @LOCAL02
    case 0xC44F42: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:71 CMP ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC44F44: cpu.execute_instruction<0xDD>(0x000F80, 3); return true;
    // src/unknown/C4/C47143.asm:72 BCS @UNKNOWN8
    case 0xC44F47: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C47143.asm:73 LDA #TRUE
    case 0xC44F49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C47143.asm:73 LDA #TRUE
    // Overlapping static entry reached from 0xC44F49.
    case 0xC44F4B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C47143.asm:74 BRA @UNKNOWN11
    case 0xC44F4C: cpu.execute_instruction<0x80>(0x000059, 2); return true;
    // src/unknown/C4/C47143.asm:76 JSL UNKNOWN_C46ADB
    case 0xC44F4E: cpu.execute_instruction<0x22>(0xC44857, 4); return true;
    // src/unknown/C4/C47143.asm:77 TAX
    case 0xC44F52: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:78 STX @LOCAL02
    case 0xC44F53: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:79 TXA
    case 0xC44F55: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:80 JSL UNKNOWN_C47044
    case 0xC44F56: cpu.execute_instruction<0x22>(0xC44DC8, 4); return true;
    // src/unknown/C4/C47143.asm:81 LDY @LOCAL04
    case 0xC44F5A: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C47143.asm:82 BNE @UNKNOWN10
    case 0xC44F5C: cpu.execute_instruction<0xD0>(0x000046, 2); return true;
    // src/unknown/C4/C47143.asm:83 LDX @LOCAL02
    case 0xC44F5E: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47143.asm:84 TXA
    case 0xC44F60: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:85 JSL UNKNOWN_C46B0A
    case 0xC44F61: cpu.execute_instruction<0x22>(0xC44886, 4); return true;
    // src/unknown/C4/C47143.asm:86 TAX
    case 0xC44F65: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:87 STX @LOCAL01
    case 0xC44F66: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C47143.asm:88 LDA @VIRTUAL04
    case 0xC44F68: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C47143.asm:89 BEQ @UNKNOWN9
    case 0xC44F6A: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C4/C47143.asm:90 TXA
    case 0xC44F6C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:91 JSL UNKNOWN_C46B37
    case 0xC44F6D: cpu.execute_instruction<0x22>(0xC448B3, 4); return true;
    // src/unknown/C4/C47143.asm:92 TAX
    case 0xC44F71: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:93 STX @LOCAL01
    case 0xC44F72: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C47143.asm:95 LDA @VIRTUAL02
    case 0xC44F74: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:96 ASL
    case 0xC44F76: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:97 CLC
    case 0xC44F77: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:98 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC44F78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x002EF4, 3); return true;
    // src/unknown/C4/C47143.asm:98 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC44F78.
    case 0xC44F7A: cpu.execute_instruction<0x2E>(0x00B9A8, 3); return true;
    // src/unknown/C4/C47143.asm:99 TAY
    case 0xC44F7B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:100 LDA __BSS_START__,Y
    case 0xC44F7C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C47143.asm:100 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC44F7A.
    case 0xC44F7D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C47143.asm:101 STA @LOCAL00
    case 0xC44F7F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C47143.asm:102 TXA
    case 0xC44F81: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:103 STA __BSS_START__,Y
    case 0xC44F82: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C47143.asm:104 LDA @LOCAL00
    case 0xC44F85: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C47143.asm:105 JSL UNKNOWN_C46AA3
    case 0xC44F87: cpu.execute_instruction<0x22>(0xC4481F, 4); return true;
    // src/unknown/C4/C47143.asm:106 TAY
    case 0xC44F8B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:107 STY @LOCAL04
    case 0xC44F8C: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C47143.asm:108 LDX @LOCAL01
    case 0xC44F8E: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C47143.asm:109 TXA
    case 0xC44F90: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:110 JSL UNKNOWN_C46AA3
    case 0xC44F91: cpu.execute_instruction<0x22>(0xC4481F, 4); return true;
    // src/unknown/C4/C47143.asm:111 STA @VIRTUAL04
    case 0xC44F95: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47143.asm:112 LDY @LOCAL04
    case 0xC44F97: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C47143.asm:113 TYA
    case 0xC44F99: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47143.asm:114 CMP @VIRTUAL04
    case 0xC44F9A: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C47143.asm:115 BEQ @UNKNOWN10
    case 0xC44F9C: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C4/C47143.asm:116 LDA @VIRTUAL02
    case 0xC44F9E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47143.asm:117 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC44FA0: cpu.execute_instruction<0x22>(0xC0A46E, 4); return true;
    // src/unknown/C4/C47143.asm:119 LDA #FALSE
    case 0xC44FA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47143.asm:119 LDA #FALSE
    // Overlapping static entry reached from 0xC44FA4.
    case 0xC44FA6: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47143.asm:121 END_C_FUNCTION
    case 0xC44FA7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47143.asm:121 END_C_FUNCTION
    case 0xC44FA8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47225.asm (unresolved).
bool execute_unresolved_c4_c47225_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47225.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44FA9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47225.asm:7 END_STACK_VARS
    case 0xC44FAB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C47225.asm:7 END_STACK_VARS
    case 0xC44FAC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47225.asm:7 END_STACK_VARS
    case 0xC44FAD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47225.asm:7 END_STACK_VARS
    case 0xC44FAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47225.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC44FAE.
    case 0xC44FB0: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47225.asm:7 END_STACK_VARS
    case 0xC44FB1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C47225.asm:7 END_STACK_VARS
    case 0xC44FB2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:8 STX @VIRTUAL02
    case 0xC44FB3: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C47225.asm:8 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC44FB0.
    case 0xC44FB4: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C47225.asm:9 STA @VIRTUAL04
    case 0xC44FB5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47225.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC44FB7: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C47225.asm:11 ASL
    case 0xC44FBA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:12 TAY
    case 0xC44FBB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:13 CLC
    case 0xC44FBC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:14 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    case 0xC44FBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000084, 2); else cpu.execute_instruction<0x69>(0x000B84, 3); return true;
    // src/unknown/C4/C47225.asm:14 ADC #.LOWORD(ENTITY_ABS_X_TABLE)
    // Overlapping static entry reached from 0xC44FBD.
    case 0xC44FBF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:15 TAX
    case 0xC44FC0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:16 LDA __BSS_START__,X
    case 0xC44FC1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C47225.asm:17 SEC
    case 0xC44FC4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:18 SBC @VIRTUAL02
    case 0xC44FC5: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C47225.asm:19 STA ENTITY_SCRIPT_VAR0_TABLE,Y
    case 0xC44FC7: cpu.execute_instruction<0x99>(0x000E54, 3); return true;
    // src/unknown/C4/C47225.asm:20 LDA __BSS_START__,X
    case 0xC44FCA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C47225.asm:21 CLC
    case 0xC44FCD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:22 ADC @VIRTUAL02
    case 0xC44FCE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C47225.asm:23 STA ENTITY_SCRIPT_VAR1_TABLE,Y
    case 0xC44FD0: cpu.execute_instruction<0x99>(0x000E90, 3); return true;
    // src/unknown/C4/C47225.asm:24 TYA
    case 0xC44FD3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:25 CLC
    case 0xC44FD4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:26 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC44FD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C0, 2); else cpu.execute_instruction<0x69>(0x000BC0, 3); return true;
    // src/unknown/C4/C47225.asm:26 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC44FD5.
    case 0xC44FD7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:27 TAX
    case 0xC44FD8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:28 LDA __BSS_START__,X
    case 0xC44FD9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C47225.asm:29 SEC
    case 0xC44FDC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:30 SBC @VIRTUAL04
    case 0xC44FDD: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C4/C47225.asm:31 STA ENTITY_SCRIPT_VAR2_TABLE,Y
    case 0xC44FDF: cpu.execute_instruction<0x99>(0x000ECC, 3); return true;
    // src/unknown/C4/C47225.asm:32 LDA __BSS_START__,X
    case 0xC44FE2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C47225.asm:33 CLC
    case 0xC44FE5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47225.asm:34 ADC @VIRTUAL04
    case 0xC44FE6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C47225.asm:35 STA ENTITY_SCRIPT_VAR3_TABLE,Y
    case 0xC44FE8: cpu.execute_instruction<0x99>(0x000F08, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47225.asm:36 END_C_FUNCTION
    case 0xC44FEB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47225.asm:36 END_C_FUNCTION
    case 0xC44FEC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47269.asm (unresolved).
bool execute_unresolved_c4_c47269_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47269.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44FED: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C47269.asm:6 LDA CURRENT_ENTITY_SLOT
    case 0xC44FEF: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C47269.asm:7 ASL
    case 0xC44FF2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47269.asm:8 TAX
    case 0xC44FF3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47269.asm:9 LDA ENTITY_ABS_X_TABLE,X
    case 0xC44FF4: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C47269.asm:10 LDY ENTITY_ABS_Y_TABLE,X
    case 0xC44FF7: cpu.execute_instruction<0xBC>(0x000BC0, 3); return true;
    // src/unknown/C4/C47269.asm:11 CMP ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC44FFA: cpu.execute_instruction<0xDD>(0x000E54, 3); return true;
    // src/unknown/C4/C47269.asm:12 BCS @UNKNOWN0
    case 0xC44FFD: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C47269.asm:13 LDA #3
    case 0xC44FFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C4/C47269.asm:13 LDA #3
    // Overlapping static entry reached from 0xC44FFF.
    case 0xC45001: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C47269.asm:14 BRA @UNKNOWN4
    case 0xC45002: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // src/unknown/C4/C47269.asm:16 CMP ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC45004: cpu.execute_instruction<0xDD>(0x000E90, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C47269.asm:17 BLTEQ @UNKNOWN1
    case 0xC45007: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C47269.asm:17 BLTEQ @UNKNOWN1
    case 0xC45009: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C47269.asm:18 LDA #7
    case 0xC4500B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C4/C47269.asm:18 LDA #7
    // Overlapping static entry reached from 0xC4500B.
    case 0xC4500D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C47269.asm:19 BRA @UNKNOWN4
    case 0xC4500E: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C4/C47269.asm:21 TYA
    case 0xC45010: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47269.asm:22 CMP ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC45011: cpu.execute_instruction<0xDD>(0x000ECC, 3); return true;
    // src/unknown/C4/C47269.asm:23 BCS @UNKNOWN2
    case 0xC45014: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C47269.asm:24 LDA #5
    case 0xC45016: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C4/C47269.asm:24 LDA #5
    // Overlapping static entry reached from 0xC45016.
    case 0xC45018: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C47269.asm:25 BRA @UNKNOWN4
    case 0xC45019: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C4/C47269.asm:27 TYA
    case 0xC4501B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47269.asm:28 CMP ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC4501C: cpu.execute_instruction<0xDD>(0x000F08, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C47269.asm:29 BLTEQ @UNKNOWN3
    case 0xC4501F: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C47269.asm:29 BLTEQ @UNKNOWN3
    case 0xC45021: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C47269.asm:30 LDA #1
    case 0xC45023: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C47269.asm:30 LDA #1
    // Overlapping static entry reached from 0xC45023.
    case 0xC45025: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C47269.asm:31 BRA @UNKNOWN4
    case 0xC45026: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C47269.asm:33 LDA #0
    case 0xC45028: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47269.asm:33 LDA #0
    // Overlapping static entry reached from 0xC45028.
    case 0xC4502A: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47269.asm:35 END_C_FUNCTION
    case 0xC4502B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C472A8.asm (unresolved).
bool execute_unresolved_c4_c472a8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C472A8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4502C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C472A8.asm:9 END_STACK_VARS
    case 0xC4502E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C472A8.asm:9 END_STACK_VARS
    case 0xC4502F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C472A8.asm:9 END_STACK_VARS
    case 0xC45030: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C472A8.asm:9 END_STACK_VARS
    case 0xC45031: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C472A8.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC45031.
    case 0xC45033: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C472A8.asm:9 END_STACK_VARS
    case 0xC45034: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C472A8.asm:9 END_STACK_VARS
    case 0xC45035: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:10 TAX
    case 0xC45036: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:11 STX @LOCAL02
    case 0xC45037: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C472A8.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xC45039: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C472A8.asm:13 STA @VIRTUAL02
    case 0xC4503C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C472A8.asm:14 ASL
    case 0xC4503E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:15 TAX
    case 0xC4503F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:16 LDY ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC45040: cpu.execute_instruction<0xBC>(0x000E54, 3); return true;
    // src/unknown/C4/C472A8.asm:17 STY @LOCAL01
    case 0xC45043: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C472A8.asm:18 TYA
    case 0xC45045: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:19 JSL UNKNOWN_C47044
    case 0xC45046: cpu.execute_instruction<0x22>(0xC44DC8, 4); return true;
    // src/unknown/C4/C472A8.asm:20 LDY @LOCAL01
    case 0xC4504A: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C472A8.asm:21 TYA
    case 0xC4504C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:22 JSL UNKNOWN_C46B51
    case 0xC4504D: cpu.execute_instruction<0x22>(0xC448CD, 4); return true;
    // src/unknown/C4/C472A8.asm:23 TAY
    case 0xC45051: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:24 STY @LOCAL01
    case 0xC45052: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C472A8.asm:25 LDX @LOCAL02
    case 0xC45054: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C472A8.asm:26 BEQ @UNKNOWN0
    case 0xC45056: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C4/C472A8.asm:27 TYA
    case 0xC45058: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:28 JSL UNKNOWN_C46B37
    case 0xC45059: cpu.execute_instruction<0x22>(0xC448B3, 4); return true;
    // src/unknown/C4/C472A8.asm:29 TAY
    case 0xC4505D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:30 STY @LOCAL01
    case 0xC4505E: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C472A8.asm:32 LDA @VIRTUAL02
    case 0xC45060: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C472A8.asm:33 ASL
    case 0xC45062: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:34 CLC
    case 0xC45063: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:35 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC45064: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x002EF4, 3); return true;
    // src/unknown/C4/C472A8.asm:35 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC45064.
    case 0xC45066: cpu.execute_instruction<0x2E>(0x00BDAA, 3); return true;
    // src/unknown/C4/C472A8.asm:36 TAX
    case 0xC45067: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:37 LDA __BSS_START__,X
    case 0xC45068: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C472A8.asm:37 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC45066.
    case 0xC45069: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C472A8.asm:38 STA @LOCAL00
    case 0xC4506B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C472A8.asm:39 TYA
    case 0xC4506D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:40 STA __BSS_START__,X
    case 0xC4506E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C472A8.asm:41 LDA @LOCAL00
    case 0xC45071: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C472A8.asm:42 JSL UNKNOWN_C46AA3
    case 0xC45073: cpu.execute_instruction<0x22>(0xC4481F, 4); return true;
    // src/unknown/C4/C472A8.asm:43 TAX
    case 0xC45077: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:44 STX @LOCAL02
    case 0xC45078: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C472A8.asm:45 LDY @LOCAL01
    case 0xC4507A: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C472A8.asm:46 TYA
    case 0xC4507C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:47 JSL UNKNOWN_C46AA3
    case 0xC4507D: cpu.execute_instruction<0x22>(0xC4481F, 4); return true;
    // src/unknown/C4/C472A8.asm:48 STA @VIRTUAL04
    case 0xC45081: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C472A8.asm:49 LDX @LOCAL02
    case 0xC45083: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C472A8.asm:50 TXA
    case 0xC45085: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C472A8.asm:51 CMP @VIRTUAL04
    case 0xC45086: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C472A8.asm:52 BEQ @UNKNOWN1
    case 0xC45088: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C4/C472A8.asm:53 LDA @VIRTUAL02
    case 0xC4508A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C472A8.asm:54 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC4508C: cpu.execute_instruction<0x22>(0xC0A46E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C472A8.asm:56 END_C_FUNCTION
    case 0xC45090: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C472A8.asm:56 END_C_FUNCTION
    case 0xC45091: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4730E.asm (unresolved).
bool execute_unresolved_c4_c4730e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4730E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45092: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4730E.asm:6 END_STACK_VARS
    case 0xC45094: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4730E.asm:6 END_STACK_VARS
    case 0xC45095: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4730E.asm:6 END_STACK_VARS
    case 0xC45096: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4730E.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC45096.
    case 0xC45098: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4730E.asm:6 END_STACK_VARS
    case 0xC45099: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4730E.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC4509A: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C4730E.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC45098.
    case 0xC4509C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4730E.asm:8 ASL
    case 0xC4509D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4730E.asm:9 CLC
    case 0xC4509E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4730E.asm:10 ADC #.LOWORD(ENTITY_DELTA_Y_TABLE)
    case 0xC4509F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000D28, 3); return true;
    // src/unknown/C4/C4730E.asm:10 ADC #.LOWORD(ENTITY_DELTA_Y_TABLE)
    // Overlapping static entry reached from 0xC4509F.
    case 0xC450A1: cpu.execute_instruction<0x0D>(0x00BDAA, 3); return true;
    // src/unknown/C4/C4730E.asm:11 TAX
    case 0xC450A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4730E.asm:12 LDA __BSS_START__,X
    case 0xC450A3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4730E.asm:12 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC450A1.
    case 0xC450A4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4730E.asm:13 STA @LOCAL00
    case 0xC450A6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4730E.asm:14 AND #$8000
    case 0xC450A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C4/C4730E.asm:14 AND #$8000
    // Overlapping static entry reached from 0xC450A8.
    case 0xC450AA: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // src/unknown/C4/C4730E.asm:15 STA @VIRTUAL02
    case 0xC450AB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4730E.asm:16 LDA @LOCAL00
    case 0xC450AD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4730E.asm:17 LSR
    case 0xC450AF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4730E.asm:18 ORA @VIRTUAL02
    case 0xC450B0: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C4730E.asm:19 STA __BSS_START__,X
    case 0xC450B2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4730E.asm:20 END_C_FUNCTION
    case 0xC450B5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4730E.asm:20 END_C_FUNCTION
    case 0xC450B6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47333.asm (unresolved).
bool execute_unresolved_c4_c47333_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47333.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC450B7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C47333.asm:6 LDA GAME_STATE+game_state::party_count
    case 0xC450B9: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C4/C47333.asm:7 AND #$00FF
    case 0xC450BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47333.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC450BC.
    case 0xC450BE: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47333.asm:8 END_C_FUNCTION
    case 0xC450BF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4733C.asm (unresolved).
bool execute_unresolved_c4_c4733c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4733C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC450C0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4733C.asm:5 LDA LOADED_MAP_TILE_COMBO
    case 0xC450C2: cpu.execute_instruction<0xAD>(0x0046F4, 3); return true;
    // src/unknown/C4/C4733C.asm:6 ASL
    case 0xC450C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4733C.asm:7 TAX
    case 0xC450C6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4733C.asm:8 LDA f:TILESET_TABLE,X
    case 0xC450C7: cpu.execute_instruction<0xBF>(0xEF621D, 4); return true;
    // src/unknown/C4/C4733C.asm:9 JSL LOAD_MAP_BLOCK_EVENT_CHANGES
    case 0xC450CB: cpu.execute_instruction<0x22>(0xC00702, 4); return true;
    // src/unknown/C4/C4733C.asm:9 JSL LOAD_MAP_BLOCK_EVENT_CHANGES
    // Overlapping static entry reached from 0xC4513A.
    case 0xC450CC: cpu.execute_instruction<0x02>(0x000007, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4733C.asm:10 END_C_FUNCTION
    case 0xC450CF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4734C.asm (unresolved).
bool execute_unresolved_c4_c4734c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4734C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC450D0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4734C.asm:8 END_STACK_VARS
    case 0xC450D2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4734C.asm:8 END_STACK_VARS
    case 0xC450D3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4734C.asm:8 END_STACK_VARS
    case 0xC450D4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4734C.asm:8 END_STACK_VARS
    case 0xC450D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4734C.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC450D5.
    case 0xC450D7: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4734C.asm:8 END_STACK_VARS
    case 0xC450D8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4734C.asm:8 END_STACK_VARS
    case 0xC450D9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4734C.asm:9 TAY
    case 0xC450DA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4734C.asm:10 STY @LOCAL00
    case 0xC450DB: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4734C.asm:11 TYX
    case 0xC450DD: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4734C.asm:12 LDA BG1_X_POS
    case 0xC450DE: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/C4/C4734C.asm:13 LSR
    case 0xC450E1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4734C.asm:14 LSR
    case 0xC450E2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4734C.asm:15 LSR
    case 0xC450E3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4734C.asm:16 JSL UNKNOWN_C01A63
    case 0xC450E4: cpu.execute_instruction<0x22>(0xC01A79, 4); return true;
    // src/unknown/C4/C4734C.asm:17 LDY @LOCAL00
    case 0xC450E8: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4734C.asm:18 TYA
    case 0xC450EA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4734C.asm:19 END_C_FUNCTION
    case 0xC450EB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4734C.asm:19 END_C_FUNCTION
    case 0xC450EC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47369.asm (unresolved).
bool execute_unresolved_c4_c47369_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47369.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC450ED: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C47369.asm:5 JSL UNKNOWN_C019E2
    case 0xC450EF: cpu.execute_instruction<0x22>(0xC019F8, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47369.asm:6 END_C_FUNCTION
    case 0xC450F3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C473B2.asm (unresolved).
bool execute_unresolved_c4_c473b2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C473B2.asm:3 BEGIN_C_FUNCTION
    case 0xC45136: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C473B2.asm:7 CMP #$8000
    case 0xC45138: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C4/C473B2.asm:7 CMP #$8000
    // Overlapping static entry reached from 0xC45138.
    case 0xC4513A: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C473B2.asm:8 BLTEQ @UNKNOWN0
    case 0xC4513B: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C473B2.asm:8 BLTEQ @UNKNOWN0
    case 0xC4513D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C473B2.asm:9 LDA #0
    case 0xC4513F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C473B2.asm:9 LDA #0
    // Overlapping static entry reached from 0xC4513F.
    case 0xC45141: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C473B2.asm:10 BRA @UNKNOWN2
    case 0xC45142: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C4/C473B2.asm:12 CMP #31
    case 0xC45144: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/unknown/C4/C473B2.asm:12 CMP #31
    // Overlapping static entry reached from 0xC45144.
    case 0xC45146: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C473B2.asm:13 BLTEQ @UNKNOWN1
    case 0xC45147: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C473B2.asm:13 BLTEQ @UNKNOWN1
    case 0xC45149: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C473B2.asm:14 LDA #31
    case 0xC4514B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/unknown/C4/C473B2.asm:14 LDA #31
    // Overlapping static entry reached from 0xC4514B.
    case 0xC4514D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C473B2.asm:15 BRA @UNKNOWN2
    case 0xC4514E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C473B2.asm:17 AND #$001F
    case 0xC45150: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C473B2.asm:17 AND #$001F
    // Overlapping static entry reached from 0xC45150.
    case 0xC45152: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C473B2.asm:19 END_C_FUNCTION
    case 0xC45153: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C473D0.asm (unresolved).
bool execute_unresolved_c4_c473d0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C473D0.asm:3 BEGIN_C_FUNCTION
    case 0xC45154: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C473D0.asm:14 END_STACK_VARS
    case 0xC45156: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C473D0.asm:14 END_STACK_VARS
    case 0xC45157: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C473D0.asm:14 END_STACK_VARS
    case 0xC45158: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C473D0.asm:14 END_STACK_VARS
    case 0xC45159: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C473D0.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC45159.
    case 0xC4515B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C473D0.asm:14 END_STACK_VARS
    case 0xC4515C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C473D0.asm:14 END_STACK_VARS
    case 0xC4515D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:15 STX @LOCAL06
    case 0xC4515E: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C4/C473D0.asm:15 STX @LOCAL06
    // Overlapping static entry reached from 0xC4515B.
    case 0xC4515F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:16 ASL
    case 0xC45160: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:17 ASL
    case 0xC45161: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:18 ASL
    case 0xC45162: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:19 ASL
    case 0xC45163: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:20 ASL
    case 0xC45164: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:21 STA @LOCAL05
    case 0xC45165: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:22 CLC
    case 0xC45167: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:23 ADC #.LOWORD(MAP_PALETTE_BACKUP)
    case 0xC45168: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FC, 2); else cpu.execute_instruction<0x69>(0x0047FC, 3); return true;
    // src/unknown/C4/C473D0.asm:23 ADC #.LOWORD(MAP_PALETTE_BACKUP)
    // Overlapping static entry reached from 0xC45168.
    case 0xC4516A: cpu.execute_instruction<0x47>(0x000085, 2); return true;
    // src/unknown/C4/C473D0.asm:24 STA @LOCAL04
    case 0xC4516B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C473D0.asm:24 STA @LOCAL04
    // Overlapping static entry reached from 0xC4516A.
    case 0xC4516C: cpu.execute_instruction<0x16>(0x0000A5, 2); return true;
    // src/unknown/C4/C473D0.asm:25 LDA @LOCAL05
    case 0xC4516D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:25 LDA @LOCAL05
    // Overlapping static entry reached from 0xC4516C.
    case 0xC4516E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:26 CLC
    case 0xC4516F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:27 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC45170: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000240, 3); return true;
    // src/unknown/C4/C473D0.asm:27 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC45170.
    case 0xC45172: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C473D0.asm:28 STA @LOCAL05
    case 0xC45173: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:29 LDA #0
    case 0xC45175: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C473D0.asm:29 LDA #0
    // Overlapping static entry reached from 0xC45175.
    case 0xC45177: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C473D0.asm:30 STA @VIRTUAL04
    case 0xC45178: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C473D0.asm:31 BRA @UNKNOWN1
    case 0xC4517A: cpu.execute_instruction<0x80>(0x00006A, 2); return true;
    // src/unknown/C4/C473D0.asm:33 LDA (@LOCAL04)
    case 0xC4517C: cpu.execute_instruction<0xB2>(0x000016, 2); return true;
    // src/unknown/C4/C473D0.asm:34 TAY
    case 0xC4517E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:35 AND #$001F
    case 0xC4517F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C473D0.asm:35 AND #$001F
    // Overlapping static entry reached from 0xC4517F.
    case 0xC45181: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:36 CLC
    case 0xC45182: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:37 ADC @LOCAL06
    case 0xC45183: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/unknown/C4/C473D0.asm:38 STA @LOCAL03
    case 0xC45185: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C473D0.asm:39 TYA
    case 0xC45187: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:40 LSR
    case 0xC45188: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:41 LSR
    case 0xC45189: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:42 LSR
    case 0xC4518A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:43 LSR
    case 0xC4518B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:44 LSR
    case 0xC4518C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:45 AND #$001F
    case 0xC4518D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C473D0.asm:45 AND #$001F
    // Overlapping static entry reached from 0xC4518D.
    case 0xC4518F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:46 CLC
    case 0xC45190: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:47 ADC @LOCAL06
    case 0xC45191: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/unknown/C4/C473D0.asm:48 TAX
    case 0xC45193: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:49 STX @LOCAL02
    case 0xC45194: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C473D0.asm:50 TYA
    case 0xC45196: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:51 XBA
    case 0xC45197: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:52 AND #$00FF
    case 0xC45198: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C473D0.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC45198.
    case 0xC4519A: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C4/C473D0.asm:53 LSR
    case 0xC4519B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:54 LSR
    case 0xC4519C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:55 AND #$001F
    case 0xC4519D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C473D0.asm:55 AND #$001F
    // Overlapping static entry reached from 0xC4519D.
    case 0xC4519F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:56 CLC
    case 0xC451A0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:57 ADC @LOCAL06
    case 0xC451A1: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/unknown/C4/C473D0.asm:58 TAY
    case 0xC451A3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:59 STY @LOCAL01
    case 0xC451A4: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C473D0.asm:60 LDA @LOCAL03
    case 0xC451A6: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C473D0.asm:61 JSR UNKNOWN_C473B2
    case 0xC451A8: cpu.execute_instruction<0x20>(0x005136, 3); return true;
    // src/unknown/C4/C473D0.asm:62 STA @VIRTUAL02
    case 0xC451AB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C473D0.asm:63 STA @LOCAL00
    case 0xC451AD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C473D0.asm:64 LDX @LOCAL02
    case 0xC451AF: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C473D0.asm:65 TXA
    case 0xC451B1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:66 JSR UNKNOWN_C473B2
    case 0xC451B2: cpu.execute_instruction<0x20>(0x005136, 3); return true;
    // src/unknown/C4/C473D0.asm:67 TAX
    case 0xC451B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:68 STX @LOCAL02
    case 0xC451B6: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C473D0.asm:69 LDY @LOCAL01
    case 0xC451B8: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C473D0.asm:70 TYA
    case 0xC451BA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:71 JSR UNKNOWN_C473B2
    case 0xC451BB: cpu.execute_instruction<0x20>(0x005136, 3); return true;
    // src/unknown/C4/C473D0.asm:72 STA @LOCAL01
    case 0xC451BE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C473D0.asm:73 INC @LOCAL04
    case 0xC451C0: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/unknown/C4/C473D0.asm:74 INC @LOCAL04
    case 0xC451C2: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/unknown/C4/C473D0.asm:75 LDX @LOCAL02
    case 0xC451C4: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C473D0.asm:76 TXA
    case 0xC451C6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:77 ASL
    case 0xC451C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:78 ASL
    case 0xC451C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:79 ASL
    case 0xC451C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:80 ASL
    case 0xC451CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:81 ASL
    case 0xC451CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:82 STA @VIRTUAL02
    case 0xC451CC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C473D0.asm:83 LDA @LOCAL01
    case 0xC451CE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C473D0.asm:84 XBA
    case 0xC451D0: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:85 AND #$FF00
    case 0xC451D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C473D0.asm:85 AND #$FF00
    // Overlapping static entry reached from 0xC451D1.
    case 0xC451D3: cpu.execute_instruction<0xFF>(0x050A0A, 4); return true;
    // src/unknown/C4/C473D0.asm:86 ASL
    case 0xC451D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:87 ASL
    case 0xC451D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C473D0.asm:88 ORA @VIRTUAL02
    case 0xC451D6: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C473D0.asm:88 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC451D3.
    case 0xC451D7: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/unknown/C4/C473D0.asm:89 LDX @LOCAL00
    case 0xC451D8: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C473D0.asm:90 STX @VIRTUAL02
    case 0xC451DA: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C473D0.asm:91 ORA @VIRTUAL02
    case 0xC451DC: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C473D0.asm:92 STA (@LOCAL05)
    case 0xC451DE: cpu.execute_instruction<0x92>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:93 INC @LOCAL05
    case 0xC451E0: cpu.execute_instruction<0xE6>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:94 INC @LOCAL05
    case 0xC451E2: cpu.execute_instruction<0xE6>(0x000018, 2); return true;
    // src/unknown/C4/C473D0.asm:95 INC @VIRTUAL04
    case 0xC451E4: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C473D0.asm:97 LDA @VIRTUAL04
    case 0xC451E6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C473D0.asm:98 CMP #16
    case 0xC451E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C4/C473D0.asm:98 CMP #16
    // Overlapping static entry reached from 0xC451E8.
    case 0xC451EA: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C473D0.asm:99 BCC @UNKNOWN0
    case 0xC451EB: cpu.execute_instruction<0x90>(0x00008F, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C473D0.asm:100 END_C_FUNCTION
    case 0xC451ED: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C473D0.asm:100 END_C_FUNCTION
    case 0xC451EE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4746B.asm (unresolved).
bool execute_unresolved_c4_c4746b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4746B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC451EF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4746B.asm:7 END_STACK_VARS
    case 0xC451F1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4746B.asm:7 END_STACK_VARS
    case 0xC451F2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4746B.asm:7 END_STACK_VARS
    case 0xC451F3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4746B.asm:7 END_STACK_VARS
    case 0xC451F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4746B.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC451F4.
    case 0xC451F6: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4746B.asm:7 END_STACK_VARS
    case 0xC451F7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4746B.asm:7 END_STACK_VARS
    case 0xC451F8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4746B.asm:8 STA @VIRTUAL02
    case 0xC451F9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4746B.asm:8 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC451F6.
    case 0xC451FA: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/C4/C4746B.asm:9 LDY #0
    case 0xC451FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4746B.asm:9 LDY #0
    // Overlapping static entry reached from 0xC451FB.
    case 0xC451FD: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4746B.asm:10 STY @LOCAL00
    case 0xC451FE: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4746B.asm:11 BRA @UNKNOWN1
    case 0xC45200: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C4/C4746B.asm:13 LDX @VIRTUAL02
    case 0xC45202: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4746B.asm:14 TYA
    case 0xC45204: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4746B.asm:15 JSR UNKNOWN_C473D0
    case 0xC45205: cpu.execute_instruction<0x20>(0x005154, 3); return true;
    // src/unknown/C4/C4746B.asm:16 LDY @LOCAL00
    case 0xC45208: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4746B.asm:17 INY
    case 0xC4520A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4746B.asm:18 STY @LOCAL00
    case 0xC4520B: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4746B.asm:20 CPY #16
    case 0xC4520D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000010, 2); else cpu.execute_instruction<0xC0>(0x000010, 3); return true;
    // src/unknown/C4/C4746B.asm:20 CPY #16
    // Overlapping static entry reached from 0xC4520D.
    case 0xC4520F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4746B.asm:21 BCC @UNKNOWN0
    case 0xC45210: cpu.execute_instruction<0x90>(0x0000F0, 2); return true;
    // src/unknown/C4/C4746B.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC45212: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4746B.asm:23 LDA #PALETTE_UPLOAD::FULL
    case 0xC45214: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C4/C4746B.asm:24 STA PALETTE_UPLOAD_MODE
    case 0xC45216: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C4/C4746B.asm:24 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC45214.
    case 0xC45217: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C4/C4746B.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC45219: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4746B.asm:26 END_C_FUNCTION
    case 0xC4521B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4746B.asm:26 END_C_FUNCTION
    case 0xC4521C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47499.asm (unresolved).
bool execute_unresolved_c4_c47499_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47499.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4521D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C47499.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC4521F: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C47499.asm:6 ASL
    case 0xC45222: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47499.asm:7 TAX
    case 0xC45223: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47499.asm:8 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC45224: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C4/C47499.asm:9 JSL UNKNOWN_C4746B
    case 0xC45227: cpu.execute_instruction<0x22>(0xC451EF, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47499.asm:10 END_C_FUNCTION
    case 0xC4522B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C474A8.asm (unresolved).
bool execute_unresolved_c4_c474a8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C474A8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4522C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C474A8.asm:6 END_STACK_VARS
    case 0xC4522E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C474A8.asm:6 END_STACK_VARS
    case 0xC4522F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C474A8.asm:6 END_STACK_VARS
    case 0xC45230: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C474A8.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC45230.
    case 0xC45232: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C474A8.asm:6 END_STACK_VARS
    case 0xC45233: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC45234: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C474A8.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC45232.
    case 0xC45236: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:8 ASL
    case 0xC45237: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:9 TAX
    case 0xC45238: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:10 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC45239: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C4/C474A8.asm:11 STA @LOCAL00
    case 0xC4523C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C474A8.asm:12 STA @VIRTUAL02
    case 0xC4523E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C474A8.asm:13 LDA #0
    case 0xC45240: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C474A8.asm:13 LDA #0
    // Overlapping static entry reached from 0xC45240.
    case 0xC45242: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C474A8.asm:14 CLC
    case 0xC45243: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:15 SBC @VIRTUAL02
    case 0xC45244: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C474A8.asm:16 BRANCHGTS @UNKNOWN2
    case 0xC45246: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C474A8.asm:16 BRANCHGTS @UNKNOWN2
    case 0xC45248: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C474A8.asm:16 BRANCHGTS @UNKNOWN2
    case 0xC4524A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C474A8.asm:16 BRANCHGTS @UNKNOWN2
    case 0xC4524C: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C4/C474A8.asm:17 LDA @LOCAL00
    case 0xC4524E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C474A8.asm:18 TAX
    case 0xC45250: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:19 BRA @UNKNOWN3
    case 0xC45251: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C4/C474A8.asm:21 LDA @LOCAL00
    case 0xC45253: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C474A8.asm:22 EOR #$FFFF
    case 0xC45255: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C474A8.asm:22 EOR #$FFFF
    // Overlapping static entry reached from 0xC45255.
    case 0xC45257: cpu.execute_instruction<0xFF>(0xA5AA1A, 4); return true;
    // src/unknown/C4/C474A8.asm:23 INC
    case 0xC45258: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:24 TAX
    case 0xC45259: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:26 LDA @LOCAL00
    case 0xC4525A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C474A8.asm:26 LDA @LOCAL00
    // Overlapping static entry reached from 0xC45257.
    case 0xC4525B: cpu.execute_instruction<0x0E>(0x000285, 3); return true;
    // src/unknown/C4/C474A8.asm:27 STA @VIRTUAL02
    case 0xC4525C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C474A8.asm:28 LDA #0
    case 0xC4525E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C474A8.asm:28 LDA #0
    // Overlapping static entry reached from 0xC4525E.
    case 0xC45260: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C474A8.asm:29 CLC
    case 0xC45261: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C474A8.asm:30 SBC @VIRTUAL02
    case 0xC45262: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C474A8.asm:31 BRANCHGTS @UNKNOWN6
    case 0xC45264: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C474A8.asm:31 BRANCHGTS @UNKNOWN6
    case 0xC45266: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C474A8.asm:31 BRANCHGTS @UNKNOWN6
    case 0xC45268: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C474A8.asm:31 BRANCHGTS @UNKNOWN6
    case 0xC4526A: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C4/C474A8.asm:32 LDA #$33
    case 0xC4526C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000033, 2); else cpu.execute_instruction<0xA9>(0x000033, 3); return true;
    // src/unknown/C4/C474A8.asm:32 LDA #$33
    // Overlapping static entry reached from 0xC4526C.
    case 0xC4526E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C474A8.asm:33 BRA @UNKNOWN7
    case 0xC4526F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C474A8.asm:35 LDA #$B3
    case 0xC45271: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x0000B3, 3); return true;
    // src/unknown/C4/C474A8.asm:35 LDA #$B3
    // Overlapping static entry reached from 0xC45271.
    case 0xC45273: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C474A8.asm:37 JSL UNKNOWN_C4249A
    case 0xC45274: cpu.execute_instruction<0x22>(0xC423D8, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C474A8.asm:38 END_C_FUNCTION
    case 0xC45278: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C474A8.asm:38 END_C_FUNCTION
    case 0xC45279: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47501.asm (unresolved).
bool execute_unresolved_c4_c47501_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47501.asm:3 BEGIN_C_FUNCTION
    case 0xC45285: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47501.asm:9 END_STACK_VARS
    case 0xC45287: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47501.asm:9 END_STACK_VARS
    case 0xC45288: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47501.asm:9 END_STACK_VARS
    case 0xC45289: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47501.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC45289.
    case 0xC4528B: cpu.execute_instruction<0xFF>(0x22A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47501.asm:9 END_STACK_VARS
    case 0xC4528C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47501.asm:10 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC4528D: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47501.asm:10 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC4528F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47501.asm:10 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC45291: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47501.asm:10 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC45293: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47501.asm:11 LDA CURRENT_ENTITY_SLOT
    case 0xC45295: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C47501.asm:12 STA @VIRTUAL02
    case 0xC45298: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:13 ASL
    case 0xC4529A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:14 TAX
    case 0xC4529B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:15 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC4529C: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C47501.asm:16 SEC
    case 0xC4529F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:17 SBC BG1_Y_POS
    case 0xC452A0: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C4/C47501.asm:18 TAY
    case 0xC452A3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:19 INY
    case 0xC452A4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:20 INY
    case 0xC452A5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:21 INY
    case 0xC452A6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:22 INY
    case 0xC452A7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:23 CPY #$8000
    case 0xC452A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008000, 3); return true;
    // src/unknown/C4/C47501.asm:23 CPY #$8000
    // Overlapping static entry reached from 0xC452A8.
    case 0xC452AA: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // src/unknown/C4/C47501.asm:24 BCC @UNKNOWN0
    case 0xC452AB: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C4/C47501.asm:25 JMP @UNKNOWN4
    case 0xC452AD: cpu.execute_instruction<0x4C>(0x00532E, 3); return true;
    // src/unknown/C4/C47501.asm:27 TYA
    case 0xC452B0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC452B1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:29 INC
    case 0xC452B3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:30 STA [@VIRTUAL06]
    case 0xC452B4: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC452B6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:32 INC @VIRTUAL06
    case 0xC452B8: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:33 LDA ENTITY_ABS_X_TABLE,X
    case 0xC452BA: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C47501.asm:34 STA @LOCAL02
    case 0xC452BD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47501.asm:35 SEC
    case 0xC452BF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:36 SBC #16
    case 0xC452C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/C4/C47501.asm:36 SBC #16
    // Overlapping static entry reached from 0xC452C0.
    case 0xC452C2: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C47501.asm:37 SEC
    case 0xC452C3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:38 SBC BG1_X_POS
    case 0xC452C4: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C4/C47501.asm:39 TAX
    case 0xC452C7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:40 LDA @LOCAL02
    case 0xC452C8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47501.asm:41 CLC
    case 0xC452CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:42 ADC #16
    case 0xC452CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C47501.asm:42 ADC #16
    // Overlapping static entry reached from 0xC452CB.
    case 0xC452CD: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C47501.asm:43 SEC
    case 0xC452CE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:44 SBC BG1_X_POS
    case 0xC452CF: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C4/C47501.asm:45 STA @LOCAL02
    case 0xC452D2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47501.asm:46 CPX #256
    case 0xC452D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000100, 3); return true;
    // src/unknown/C4/C47501.asm:46 CPX #256
    // Overlapping static entry reached from 0xC452D4.
    case 0xC452D6: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C4/C47501.asm:47 BCS @UNKNOWN2
    case 0xC452D7: cpu.execute_instruction<0xB0>(0x000026, 2); return true;
    // src/unknown/C4/C47501.asm:47 BCS @UNKNOWN2
    // Overlapping static entry reached from 0xC452D6.
    case 0xC452D8: cpu.execute_instruction<0x26>(0x00008A, 2); return true;
    // src/unknown/C4/C47501.asm:48 TXA
    case 0xC452D9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC452DA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:50 STA [@VIRTUAL06]
    case 0xC452DC: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC452DE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:52 INC @VIRTUAL06
    case 0xC452E0: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:53 LDA @LOCAL02
    case 0xC452E2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47501.asm:54 CMP #256
    case 0xC452E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C47501.asm:54 CMP #256
    // Overlapping static entry reached from 0xC452E4.
    case 0xC452E6: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C4/C47501.asm:55 BCS @UNKNOWN1
    case 0xC452E7: cpu.execute_instruction<0xB0>(0x00000A, 2); return true;
    // src/unknown/C4/C47501.asm:55 BCS @UNKNOWN1
    // Overlapping static entry reached from 0xC452E6.
    case 0xC452E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC452E9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:57 STA [@VIRTUAL06]
    case 0xC452EB: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC452ED: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:59 INC @VIRTUAL06
    case 0xC452EF: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:60 BRA @UNKNOWN4
    case 0xC452F1: cpu.execute_instruction<0x80>(0x00003B, 2); return true;
    // src/unknown/C4/C47501.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC452F3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:63 LDA #<-1
    case 0xC452F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C47501.asm:64 STA [@VIRTUAL06]
    case 0xC452F7: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:64 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC452F5.
    case 0xC452F8: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC452F9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:65 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC452F8.
    case 0xC452FA: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:66 INC @VIRTUAL06
    case 0xC452FB: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:67 BRA @UNKNOWN4
    case 0xC452FD: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C4/C47501.asm:69 CMP #256
    case 0xC452FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C47501.asm:69 CMP #256
    // Overlapping static entry reached from 0xC452FF.
    case 0xC45301: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C4/C47501.asm:70 BCS @UNKNOWN3
    case 0xC45302: cpu.execute_instruction<0xB0>(0x000016, 2); return true;
    // src/unknown/C4/C47501.asm:70 BCS @UNKNOWN3
    // Overlapping static entry reached from 0xC45301.
    case 0xC45303: cpu.execute_instruction<0x16>(0x0000E2, 2); return true;
    // src/unknown/C4/C47501.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC45304: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:71 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC45303.
    case 0xC45305: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C4/C47501.asm:72 LDA #0
    case 0xC45306: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C47501.asm:73 STA [@VIRTUAL06]
    case 0xC45308: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:73 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC45306.
    case 0xC45309: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC4530A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:74 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC45309.
    case 0xC4530B: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:75 INC @VIRTUAL06
    case 0xC4530C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:76 LDA @LOCAL02
    case 0xC4530E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47501.asm:77 SEP #PROC_FLAGS::ACCUM8
    case 0xC45310: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:78 STA [@VIRTUAL06]
    case 0xC45312: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC45314: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:80 INC @VIRTUAL06
    case 0xC45316: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:81 BRA @UNKNOWN4
    case 0xC45318: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C4/C47501.asm:83 SEP #PROC_FLAGS::ACCUM8
    case 0xC4531A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:84 LDA #128
    case 0xC4531C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008780, 3); return true;
    // src/unknown/C4/C47501.asm:85 STA [@VIRTUAL06]
    case 0xC4531E: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:85 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4531C.
    case 0xC4531F: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC45320: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:86 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4531F.
    case 0xC45321: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:87 INC @VIRTUAL06
    case 0xC45322: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:88 SEP #PROC_FLAGS::ACCUM8
    case 0xC45324: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:89 LDA #127
    case 0xC45326: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00877F, 3); return true;
    // src/unknown/C4/C47501.asm:90 STA [@VIRTUAL06]
    case 0xC45328: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:90 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC45326.
    case 0xC45329: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC4532A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:91 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC45329.
    case 0xC4532B: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:92 INC @VIRTUAL06
    case 0xC4532C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:94 LDA @VIRTUAL02
    case 0xC4532E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:95 ASL
    case 0xC45330: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:96 TAX
    case 0xC45331: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:97 LDA ENTITY_ABS_X_TABLE,X
    case 0xC45332: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C47501.asm:98 SEC
    case 0xC45335: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:99 SBC BG1_X_POS
    case 0xC45336: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C4/C47501.asm:100 STA @VIRTUAL04
    case 0xC45339: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47501.asm:101 TYA
    case 0xC4533B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:102 CLC
    case 0xC4533C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:103 ADC #11
    case 0xC4533D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/unknown/C4/C47501.asm:103 ADC #11
    // Overlapping static entry reached from 0xC4533D.
    case 0xC4533F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C47501.asm:104 CMP #$8000
    case 0xC45340: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C4/C47501.asm:104 CMP #$8000
    // Overlapping static entry reached from 0xC45340.
    case 0xC45342: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // src/unknown/C4/C47501.asm:105 BCC @UNKNOWN5
    case 0xC45343: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C4/C47501.asm:106 JMP @UNKNOWN14
    case 0xC45345: cpu.execute_instruction<0x4C>(0x005401, 3); return true;
    // src/unknown/C4/C47501.asm:108 CMP #10
    case 0xC45348: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C4/C47501.asm:108 CMP #10
    // Overlapping static entry reached from 0xC45348.
    case 0xC4534A: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C47501.asm:109 BCS @UNKNOWN6
    case 0xC4534B: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C4/C47501.asm:110 TAX
    case 0xC4534D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:111 BRA @UNKNOWN7
    case 0xC4534E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C47501.asm:113 LDX #10
    case 0xC45350: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/C4/C47501.asm:113 LDX #10
    // Overlapping static entry reached from 0xC45350.
    case 0xC45352: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C47501.asm:115 STX @VIRTUAL02
    case 0xC45353: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47501.asm:116 LOADPTR UNKNOWN_C474F6, @VIRTUAL0A
    case 0xC45355: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x00527A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47501.asm:116 LOADPTR UNKNOWN_C474F6, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45355.
    case 0xC45357: cpu.execute_instruction<0x52>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47501.asm:116 LOADPTR UNKNOWN_C474F6, @VIRTUAL0A
    case 0xC45358: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47501.asm:116 LOADPTR UNKNOWN_C474F6, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45357.
    case 0xC45359: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47501.asm:116 LOADPTR UNKNOWN_C474F6, @VIRTUAL0A
    case 0xC4535A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47501.asm:116 LOADPTR UNKNOWN_C474F6, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4535A.
    case 0xC4535C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47501.asm:116 LOADPTR UNKNOWN_C474F6, @VIRTUAL0A
    case 0xC4535D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C47501.asm:117 LDA #10
    case 0xC4535F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C4/C47501.asm:117 LDA #10
    // Overlapping static entry reached from 0xC4535F.
    case 0xC45361: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C47501.asm:118 SEC
    case 0xC45362: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:119 SBC @VIRTUAL02
    case 0xC45363: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:120 CLC
    case 0xC45365: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:121 ADC @VIRTUAL0A
    case 0xC45366: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C47501.asm:122 STA @VIRTUAL0A
    case 0xC45368: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C47501.asm:123 LDY @VIRTUAL02
    case 0xC4536A: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:124 INY
    case 0xC4536C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:125 LDA #0
    case 0xC4536D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47501.asm:125 LDA #0
    // Overlapping static entry reached from 0xC4536D.
    case 0xC4536F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C47501.asm:126 STA @LOCAL01
    case 0xC45370: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47501.asm:127 JMP @UNKNOWN13
    case 0xC45372: cpu.execute_instruction<0x4C>(0x0053F6, 3); return true;
    // src/unknown/C4/C47501.asm:129 SEP #PROC_FLAGS::ACCUM8
    case 0xC45375: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:130 LDA #1
    case 0xC45377: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008701, 3); return true;
    // src/unknown/C4/C47501.asm:131 STA [@VIRTUAL06]
    case 0xC45379: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:131 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC45377.
    case 0xC4537A: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC4537B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:132 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4537A.
    case 0xC4537C: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:133 INC @VIRTUAL06
    case 0xC4537D: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:134 LDA [@VIRTUAL0A]
    case 0xC4537F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C47501.asm:135 AND #$00FF
    case 0xC45381: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47501.asm:135 AND #$00FF
    // Overlapping static entry reached from 0xC45381.
    case 0xC45383: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C47501.asm:136 STA @VIRTUAL02
    case 0xC45384: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:137 LDA @VIRTUAL04
    case 0xC45386: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C47501.asm:138 SEC
    case 0xC45388: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:139 SBC @VIRTUAL02
    case 0xC45389: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:140 STA @LOCAL00
    case 0xC4538B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C47501.asm:141 LDA @VIRTUAL04
    case 0xC4538D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C47501.asm:142 CLC
    case 0xC4538F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:143 ADC @VIRTUAL02
    case 0xC45390: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:144 TAX
    case 0xC45392: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:145 DEX
    case 0xC45393: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:146 INC @VIRTUAL0A
    case 0xC45394: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C47501.asm:147 LDA @LOCAL00
    case 0xC45396: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C47501.asm:148 CMP #256
    case 0xC45398: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C47501.asm:148 CMP #256
    // Overlapping static entry reached from 0xC45398.
    case 0xC4539A: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C4/C47501.asm:149 BCS @UNKNOWN10
    case 0xC4539B: cpu.execute_instruction<0xB0>(0x000026, 2); return true;
    // src/unknown/C4/C47501.asm:149 BCS @UNKNOWN10
    // Overlapping static entry reached from 0xC4539A.
    case 0xC4539C: cpu.execute_instruction<0x26>(0x0000A5, 2); return true;
    // src/unknown/C4/C47501.asm:150 LDA @LOCAL00
    case 0xC4539D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C47501.asm:150 LDA @LOCAL00
    // Overlapping static entry reached from 0xC4539C.
    case 0xC4539E: cpu.execute_instruction<0x0E>(0x0020E2, 3); return true;
    // src/unknown/C4/C47501.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC4539F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:152 STA [@VIRTUAL06]
    case 0xC453A1: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:153 REP #PROC_FLAGS::ACCUM8
    case 0xC453A3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:154 INC @VIRTUAL06
    case 0xC453A5: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:155 CPX #256
    case 0xC453A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000100, 3); return true;
    // src/unknown/C4/C47501.asm:155 CPX #256
    // Overlapping static entry reached from 0xC453A7.
    case 0xC453A9: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C4/C47501.asm:156 BCS @UNKNOWN9
    case 0xC453AA: cpu.execute_instruction<0xB0>(0x00000B, 2); return true;
    // src/unknown/C4/C47501.asm:156 BCS @UNKNOWN9
    // Overlapping static entry reached from 0xC453A9.
    case 0xC453AB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:157 TXA
    case 0xC453AC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC453AD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:159 STA [@VIRTUAL06]
    case 0xC453AF: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:160 REP #PROC_FLAGS::ACCUM8
    case 0xC453B1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:161 INC @VIRTUAL06
    case 0xC453B3: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:162 BRA @UNKNOWN12
    case 0xC453B5: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C4/C47501.asm:164 SEP #PROC_FLAGS::ACCUM8
    case 0xC453B7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:165 LDA #<-1
    case 0xC453B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C47501.asm:166 STA [@VIRTUAL06]
    case 0xC453BB: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:166 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC453B9.
    case 0xC453BC: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC453BD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:167 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC453BC.
    case 0xC453BE: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:168 INC @VIRTUAL06
    case 0xC453BF: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:169 BRA @UNKNOWN12
    case 0xC453C1: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C4/C47501.asm:171 CPX #256
    case 0xC453C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000100, 3); return true;
    // src/unknown/C4/C47501.asm:171 CPX #256
    // Overlapping static entry reached from 0xC453C3.
    case 0xC453C5: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C4/C47501.asm:172 BCS @UNKNOWN11
    case 0xC453C6: cpu.execute_instruction<0xB0>(0x000015, 2); return true;
    // src/unknown/C4/C47501.asm:172 BCS @UNKNOWN11
    // Overlapping static entry reached from 0xC453C5.
    case 0xC453C7: cpu.execute_instruction<0x15>(0x0000E2, 2); return true;
    // src/unknown/C4/C47501.asm:173 SEP #PROC_FLAGS::ACCUM8
    case 0xC453C8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:173 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC453C7.
    case 0xC453C9: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C4/C47501.asm:174 LDA #0
    case 0xC453CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C47501.asm:175 STA [@VIRTUAL06]
    case 0xC453CC: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:175 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC453CA.
    case 0xC453CD: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:176 REP #PROC_FLAGS::ACCUM8
    case 0xC453CE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:176 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC453CD.
    case 0xC453CF: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:177 INC @VIRTUAL06
    case 0xC453D0: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:178 TXA
    case 0xC453D2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:179 SEP #PROC_FLAGS::ACCUM8
    case 0xC453D3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:180 STA [@VIRTUAL06]
    case 0xC453D5: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:181 REP #PROC_FLAGS::ACCUM8
    case 0xC453D7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:182 INC @VIRTUAL06
    case 0xC453D9: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:183 BRA @UNKNOWN12
    case 0xC453DB: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C4/C47501.asm:185 SEP #PROC_FLAGS::ACCUM8
    case 0xC453DD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:186 LDA #128
    case 0xC453DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008780, 3); return true;
    // src/unknown/C4/C47501.asm:187 STA [@VIRTUAL06]
    case 0xC453E1: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:187 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC453DF.
    case 0xC453E2: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:188 REP #PROC_FLAGS::ACCUM8
    case 0xC453E3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:188 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC453E2.
    case 0xC453E4: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:189 INC @VIRTUAL06
    case 0xC453E5: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:190 SEP #PROC_FLAGS::ACCUM8
    case 0xC453E7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:191 LDA #127
    case 0xC453E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00877F, 3); return true;
    // src/unknown/C4/C47501.asm:192 STA [@VIRTUAL06]
    case 0xC453EB: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:192 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC453E9.
    case 0xC453EC: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:193 REP #PROC_FLAGS::ACCUM8
    case 0xC453ED: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:193 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC453EC.
    case 0xC453EE: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:194 INC @VIRTUAL06
    case 0xC453EF: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:196 LDA @LOCAL01
    case 0xC453F1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C47501.asm:197 INC
    case 0xC453F3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47501.asm:198 STA @LOCAL01
    case 0xC453F4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47501.asm:200 STY @VIRTUAL02
    case 0xC453F6: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C47501.asm:201 CMP @VIRTUAL02
    case 0xC453F8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C47501.asm:202 BCCL @UNKNOWN8
    case 0xC453FA: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C47501.asm:202 BCCL @UNKNOWN8
    case 0xC453FC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C47501.asm:202 BCCL @UNKNOWN8
    case 0xC453FE: cpu.execute_instruction<0x4C>(0x005375, 3); return true;
    // src/unknown/C4/C47501.asm:204 SEP #PROC_FLAGS::ACCUM8
    case 0xC45401: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:205 LDA #1
    case 0xC45403: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008701, 3); return true;
    // src/unknown/C4/C47501.asm:206 STA [@VIRTUAL06]
    case 0xC45405: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:206 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC45403.
    case 0xC45406: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:207 REP #PROC_FLAGS::ACCUM8
    case 0xC45407: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:207 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC45406.
    case 0xC45408: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:208 INC @VIRTUAL06
    case 0xC45409: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:209 SEP #PROC_FLAGS::ACCUM8
    case 0xC4540B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:210 LDA #128
    case 0xC4540D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008780, 3); return true;
    // src/unknown/C4/C47501.asm:211 STA [@VIRTUAL06]
    case 0xC4540F: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:211 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4540D.
    case 0xC45410: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:212 REP #PROC_FLAGS::ACCUM8
    case 0xC45411: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:212 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC45410.
    case 0xC45412: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:213 INC @VIRTUAL06
    case 0xC45413: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:214 SEP #PROC_FLAGS::ACCUM8
    case 0xC45415: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:215 LDA #127
    case 0xC45417: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00877F, 3); return true;
    // src/unknown/C4/C47501.asm:216 STA [@VIRTUAL06]
    case 0xC45419: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:216 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC45417.
    case 0xC4541A: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:217 REP #PROC_FLAGS::ACCUM8
    case 0xC4541B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:217 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4541A.
    case 0xC4541C: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47501.asm:218 INC @VIRTUAL06
    case 0xC4541D: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:219 SEP #PROC_FLAGS::ACCUM8
    case 0xC4541F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:220 LDA #0
    case 0xC45421: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C47501.asm:221 STA [@VIRTUAL06]
    case 0xC45423: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47501.asm:221 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC45421.
    case 0xC45424: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47501.asm:222 REP #PROC_FLAGS::ACCUM8
    case 0xC45425: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47501.asm:222 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC45424.
    case 0xC45426: cpu.execute_instruction<0x20>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47501.asm:223 END_C_FUNCTION
    case 0xC45427: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C47501.asm:223 END_C_FUNCTION
    case 0xC45428: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C476A5.asm (unresolved).
bool execute_unresolved_c4_c476a5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C476A5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45429: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C476A5.asm:9 END_STACK_VARS
    case 0xC4542B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C476A5.asm:9 END_STACK_VARS
    case 0xC4542C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C476A5.asm:9 END_STACK_VARS
    case 0xC4542D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C476A5.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4542D.
    case 0xC4542F: cpu.execute_instruction<0xFF>(0x38AC5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C476A5.asm:9 END_STACK_VARS
    case 0xC45430: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:10 LDY CURRENT_ENTITY_SLOT
    case 0xC45431: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C4/C476A5.asm:10 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4542F.
    case 0xC45433: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:11 STY @LOCAL03
    case 0xC45434: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C4/C476A5.asm:12 TYA
    case 0xC45436: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:13 ASL
    case 0xC45437: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:14 TAX
    case 0xC45438: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:15 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC45439: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C4/C476A5.asm:16 AND #$0001
    case 0xC4543C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C476A5.asm:16 AND #$0001
    // Overlapping static entry reached from 0xC4543C.
    case 0xC4543E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C476A5.asm:17 BEQ @UNKNOWN0
    case 0xC4543F: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C476A5.asm:18 LDA #0
    case 0xC45441: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C476A5.asm:18 LDA #0
    // Overlapping static entry reached from 0xC45441.
    case 0xC45443: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C476A5.asm:19 STA @LOCAL02
    case 0xC45444: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C476A5.asm:20 BRA @UNKNOWN1
    case 0xC45446: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C476A5.asm:22 LDA #$02FE
    case 0xC45448: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x0002FE, 3); return true;
    // src/unknown/C4/C476A5.asm:22 LDA #$02FE
    // Overlapping static entry reached from 0xC45448.
    case 0xC4544A: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C476A5.asm:23 STA @LOCAL02
    case 0xC4544B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C476A5.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4544D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C476A5.asm:25 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4544D.
    case 0xC4544F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C476A5.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC45450: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C476A5.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC45452: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C476A5.asm:25 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC45452.
    case 0xC45454: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C476A5.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC45455: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C476A5.asm:26 LDA @LOCAL02
    case 0xC45457: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C476A5.asm:27 CLC
    case 0xC45459: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:28 ADC @VIRTUAL06
    case 0xC4545A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C476A5.asm:29 STA @VIRTUAL06
    case 0xC4545C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C476A5.asm:30 STA @LOCAL01
    case 0xC4545E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C476A5.asm:31 LDA @VIRTUAL06+2
    case 0xC45460: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C476A5.asm:32 STA @LOCAL01+2
    case 0xC45462: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C476A5.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45464: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C476A5.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45466: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C476A5.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45468: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C476A5.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4546A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C476A5.asm:34 JSR UNKNOWN_C47501
    case 0xC4546C: cpu.execute_instruction<0x20>(0x005285, 3); return true;
    // src/unknown/C4/C476A5.asm:35 LDX @LOCAL01
    case 0xC4546F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C476A5.asm:36 LDA @LOCAL01+2
    case 0xC45471: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C476A5.asm:37 JSL UNKNOWN_C425CC
    case 0xC45473: cpu.execute_instruction<0x22>(0xC4250A, 4); return true;
    // src/unknown/C4/C476A5.asm:38 LDY @LOCAL03
    case 0xC45477: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C4/C476A5.asm:39 TYA
    case 0xC45479: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:40 ASL
    case 0xC4547A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:41 CLC
    case 0xC4547B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:42 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    case 0xC4547C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000054, 2); else cpu.execute_instruction<0x69>(0x000E54, 3); return true;
    // src/unknown/C4/C476A5.asm:42 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    // Overlapping static entry reached from 0xC4547C.
    case 0xC4547E: cpu.execute_instruction<0x0E>(0x00BDAA, 3); return true;
    // src/unknown/C4/C476A5.asm:43 TAX
    case 0xC4547F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:44 LDA __BSS_START__,X
    case 0xC45480: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C476A5.asm:44 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4547E.
    case 0xC45481: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C476A5.asm:45 INC
    case 0xC45483: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C476A5.asm:46 STA __BSS_START__,X
    case 0xC45484: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C476A5.asm:47 END_C_FUNCTION
    case 0xC45487: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C476A5.asm:47 END_C_FUNCTION
    case 0xC45488: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47705.asm (unresolved).
bool execute_unresolved_c4_c47705_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47705.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45489: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47705.asm:9 END_STACK_VARS
    case 0xC4548B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47705.asm:9 END_STACK_VARS
    case 0xC4548C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47705.asm:9 END_STACK_VARS
    case 0xC4548D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47705.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4548D.
    case 0xC4548F: cpu.execute_instruction<0xFF>(0x38AC5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47705.asm:9 END_STACK_VARS
    case 0xC45490: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:10 LDY CURRENT_ENTITY_SLOT
    case 0xC45491: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C4/C47705.asm:10 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4548F.
    case 0xC45493: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:11 STY @LOCAL03
    case 0xC45494: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C4/C47705.asm:12 TYA
    case 0xC45496: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:13 ASL
    case 0xC45497: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:14 TAX
    case 0xC45498: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:15 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC45499: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C4/C47705.asm:16 AND #$0001
    case 0xC4549C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C47705.asm:16 AND #$0001
    // Overlapping static entry reached from 0xC4549C.
    case 0xC4549E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C47705.asm:17 BEQ @UNKNOWN0
    case 0xC4549F: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C47705.asm:18 LDA #$05FC
    case 0xC454A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0005FC, 3); return true;
    // src/unknown/C4/C47705.asm:18 LDA #$05FC
    // Overlapping static entry reached from 0xC454A1.
    case 0xC454A3: cpu.execute_instruction<0x05>(0x000085, 2); return true;
    // src/unknown/C4/C47705.asm:19 STA @LOCAL02
    case 0xC454A4: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C47705.asm:19 STA @LOCAL02
    // Overlapping static entry reached from 0xC454A3.
    case 0xC454A5: cpu.execute_instruction<0x16>(0x000080, 2); return true;
    // src/unknown/C4/C47705.asm:20 BRA @UNKNOWN1
    case 0xC454A6: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C47705.asm:20 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC454A5.
    case 0xC454A7: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/unknown/C4/C47705.asm:22 LDA #$08FA
    case 0xC454A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x0008FA, 3); return true;
    // src/unknown/C4/C47705.asm:22 LDA #$08FA
    // Overlapping static entry reached from 0xC454A7.
    case 0xC454A9: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:22 LDA #$08FA
    // Overlapping static entry reached from 0xC454A8.
    case 0xC454AA: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:23 STA @LOCAL02
    case 0xC454AB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47705.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC454AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47705.asm:25 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC454AD.
    case 0xC454AF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47705.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC454B0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47705.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC454B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47705.asm:25 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC454B2.
    case 0xC454B4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47705.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC454B5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47705.asm:26 LDA @LOCAL02
    case 0xC454B7: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C47705.asm:27 CLC
    case 0xC454B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:28 ADC @VIRTUAL06
    case 0xC454BA: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C47705.asm:29 STA @VIRTUAL06
    case 0xC454BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C47705.asm:30 STA @LOCAL01
    case 0xC454BE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47705.asm:31 LDA @VIRTUAL06+2
    case 0xC454C0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C47705.asm:32 STA @LOCAL01+2
    case 0xC454C2: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47705.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC454C4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47705.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC454C6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47705.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC454C8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47705.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC454CA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47705.asm:34 JSR UNKNOWN_C47501
    case 0xC454CC: cpu.execute_instruction<0x20>(0x005285, 3); return true;
    // src/unknown/C4/C47705.asm:35 LDX @LOCAL01
    case 0xC454CF: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47705.asm:36 LDA @LOCAL01+2
    case 0xC454D1: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47705.asm:37 JSL UNKNOWN_C425FD
    case 0xC454D3: cpu.execute_instruction<0x22>(0xC4253B, 4); return true;
    // src/unknown/C4/C47705.asm:38 LDY @LOCAL03
    case 0xC454D7: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C4/C47705.asm:39 TYA
    case 0xC454D9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:40 ASL
    case 0xC454DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:41 CLC
    case 0xC454DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:42 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    case 0xC454DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000054, 2); else cpu.execute_instruction<0x69>(0x000E54, 3); return true;
    // src/unknown/C4/C47705.asm:42 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    // Overlapping static entry reached from 0xC454DC.
    case 0xC454DE: cpu.execute_instruction<0x0E>(0x00BDAA, 3); return true;
    // src/unknown/C4/C47705.asm:43 TAX
    case 0xC454DF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:44 LDA __BSS_START__,X
    case 0xC454E0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C47705.asm:44 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC454DE.
    case 0xC454E1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C47705.asm:45 INC
    case 0xC454E3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47705.asm:46 STA __BSS_START__,X
    case 0xC454E4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47705.asm:47 END_C_FUNCTION
    case 0xC454E7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47705.asm:47 END_C_FUNCTION
    case 0xC454E8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47765.asm (unresolved).
bool execute_unresolved_c4_c47765_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47765.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC454E9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47765.asm:11 END_STACK_VARS
    case 0xC454EB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C47765.asm:11 END_STACK_VARS
    case 0xC454EC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47765.asm:11 END_STACK_VARS
    case 0xC454ED: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47765.asm:11 END_STACK_VARS
    case 0xC454EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47765.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC454EE.
    case 0xC454F0: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47765.asm:11 END_STACK_VARS
    case 0xC454F1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C47765.asm:11 END_STACK_VARS
    case 0xC454F2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:12 STY @VIRTUAL02
    case 0xC454F3: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C47765.asm:12 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC454F0.
    case 0xC454F4: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C4/C47765.asm:13 TAY
    case 0xC454F5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:14 LOADPTR BUFFER + $900 + 760, @VIRTUAL0A
    case 0xC454F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F8, 2); else cpu.execute_instruction<0xA9>(0x000BF8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:14 LOADPTR BUFFER + $900 + 760, @VIRTUAL0A
    // Overlapping static entry reached from 0xC454F6.
    case 0xC454F8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47765.asm:14 LOADPTR BUFFER + $900 + 760, @VIRTUAL0A
    case 0xC454F9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:14 LOADPTR BUFFER + $900 + 760, @VIRTUAL0A
    case 0xC454FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:14 LOADPTR BUFFER + $900 + 760, @VIRTUAL0A
    // Overlapping static entry reached from 0xC454FB.
    case 0xC454FD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47765.asm:14 LOADPTR BUFFER + $900 + 760, @VIRTUAL0A
    case 0xC454FE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47765.asm:15 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45500: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47765.asm:15 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45502: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47765.asm:15 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45504: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47765.asm:15 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45506: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47765.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45508: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47765.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4550A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47765.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4550C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47765.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4550E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47765.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45510: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47765.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45512: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47765.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45514: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47765.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC45516: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47765.asm:18 TXA
    case 0xC45518: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:19 SEC
    case 0xC45519: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:20 SBC BG1_Y_POS
    case 0xC4551A: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C4/C47765.asm:21 STA @LOCAL02
    case 0xC4551D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C47765.asm:22 CMP #127
    case 0xC4551F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00007F, 2); else cpu.execute_instruction<0xC9>(0x00007F, 3); return true;
    // src/unknown/C4/C47765.asm:22 CMP #127
    // Overlapping static entry reached from 0xC4551F.
    case 0xC45521: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C47765.asm:23 BLTEQ @UNKNOWN0
    case 0xC45522: cpu.execute_instruction<0x90>(0x00003E, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C47765.asm:23 BLTEQ @UNKNOWN0
    case 0xC45524: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/C4/C47765.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC45526: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:25 LDA #127
    case 0xC45528: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00877F, 3); return true;
    // src/unknown/C4/C47765.asm:26 STA [@VIRTUAL0A]
    case 0xC4552A: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C47765.asm:26 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC45528.
    case 0xC4552B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC4552C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:28 LOADPTR BUFFER + $900 + 761, @VIRTUAL06
    case 0xC4552E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F9, 2); else cpu.execute_instruction<0xA9>(0x000BF9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:28 LOADPTR BUFFER + $900 + 761, @VIRTUAL06
    // Overlapping static entry reached from 0xC4552E.
    case 0xC45530: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47765.asm:28 LOADPTR BUFFER + $900 + 761, @VIRTUAL06
    case 0xC45531: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:28 LOADPTR BUFFER + $900 + 761, @VIRTUAL06
    case 0xC45533: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:28 LOADPTR BUFFER + $900 + 761, @VIRTUAL06
    // Overlapping static entry reached from 0xC45533.
    case 0xC45535: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47765.asm:28 LOADPTR BUFFER + $900 + 761, @VIRTUAL06
    case 0xC45536: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47765.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC45538: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:30 LDA #0
    case 0xC4553A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C47765.asm:31 STA [@VIRTUAL06]
    case 0xC4553C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:31 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4553A.
    case 0xC4553D: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC4553E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:32 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4553D.
    case 0xC4553F: cpu.execute_instruction<0x20>(0x00FAA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:33 LOADPTR BUFFER + $900 + 762, @VIRTUAL06
    case 0xC45540: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x000BFA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:33 LOADPTR BUFFER + $900 + 762, @VIRTUAL06
    // Overlapping static entry reached from 0xC45540.
    case 0xC45542: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47765.asm:33 LOADPTR BUFFER + $900 + 762, @VIRTUAL06
    case 0xC45543: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:33 LOADPTR BUFFER + $900 + 762, @VIRTUAL06
    case 0xC45545: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:33 LOADPTR BUFFER + $900 + 762, @VIRTUAL06
    // Overlapping static entry reached from 0xC45545.
    case 0xC45547: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47765.asm:33 LOADPTR BUFFER + $900 + 762, @VIRTUAL06
    case 0xC45548: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47765.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC4554A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:35 LDA #<-1
    case 0xC4554C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C47765.asm:36 STA [@VIRTUAL06]
    case 0xC4554E: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:36 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4554C.
    case 0xC4554F: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC45550: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:37 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4554F.
    case 0xC45551: cpu.execute_instruction<0x20>(0x00FBA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:38 LOADPTR BUFFER + $900 + 763, @VIRTUAL06
    case 0xC45552: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x000BFB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:38 LOADPTR BUFFER + $900 + 763, @VIRTUAL06
    // Overlapping static entry reached from 0xC45552.
    case 0xC45554: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47765.asm:38 LOADPTR BUFFER + $900 + 763, @VIRTUAL06
    case 0xC45555: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:38 LOADPTR BUFFER + $900 + 763, @VIRTUAL06
    case 0xC45557: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47765.asm:38 LOADPTR BUFFER + $900 + 763, @VIRTUAL06
    // Overlapping static entry reached from 0xC45557.
    case 0xC45559: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47765.asm:38 LOADPTR BUFFER + $900 + 763, @VIRTUAL06
    case 0xC4555A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47765.asm:39 LDA @LOCAL02
    case 0xC4555C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47765.asm:40 SEC
    case 0xC4555E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:41 SBC #127
    case 0xC4555F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00007F, 2); else cpu.execute_instruction<0xE9>(0x00007F, 3); return true;
    // src/unknown/C4/C47765.asm:41 SBC #127
    // Overlapping static entry reached from 0xC4555F.
    case 0xC45561: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C47765.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC45562: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:44 STA [@VIRTUAL06]
    case 0xC45564: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC45566: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:46 INC @VIRTUAL06
    case 0xC45568: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC4556A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:48 LDA #0
    case 0xC4556C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C47765.asm:49 STA [@VIRTUAL06]
    case 0xC4556E: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:49 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4556C.
    case 0xC4556F: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC45570: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:50 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4556F.
    case 0xC45571: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47765.asm:51 INC @VIRTUAL06
    case 0xC45572: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC45574: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:53 LDA #<-1
    case 0xC45576: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C47765.asm:54 STA [@VIRTUAL06]
    case 0xC45578: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:54 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC45576.
    case 0xC45579: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC4557A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:55 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC45579.
    case 0xC4557B: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47765.asm:56 INC @VIRTUAL06
    case 0xC4557C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:57 TYA
    case 0xC4557E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:58 SEC
    case 0xC4557F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:59 SBC BG1_X_POS
    case 0xC45580: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C4/C47765.asm:60 TAY
    case 0xC45583: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:61 LDA @VIRTUAL02
    case 0xC45584: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47765.asm:62 SEC
    case 0xC45586: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:63 SBC BG1_X_POS
    case 0xC45587: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C4/C47765.asm:64 STA @LOCAL01
    case 0xC4558A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47765.asm:65 LDX #0
    case 0xC4558C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C47765.asm:65 LDX #0
    // Overlapping static entry reached from 0xC4558C.
    case 0xC4558E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C47765.asm:66 BRA @UNKNOWN2
    case 0xC4558F: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C4/C47765.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC45591: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:69 LDA #1
    case 0xC45593: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008701, 3); return true;
    // src/unknown/C4/C47765.asm:70 STA [@VIRTUAL06]
    case 0xC45595: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:70 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC45593.
    case 0xC45596: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC45597: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:71 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC45596.
    case 0xC45598: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47765.asm:72 INC @VIRTUAL06
    case 0xC45599: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:73 TYA
    case 0xC4559B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC4559C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:75 STA [@VIRTUAL06]
    case 0xC4559E: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:76 REP #PROC_FLAGS::ACCUM8
    case 0xC455A0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:77 INC @VIRTUAL06
    case 0xC455A2: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:78 INY
    case 0xC455A4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:79 LDA @LOCAL01
    case 0xC455A5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47765.asm:80 SEP #PROC_FLAGS::ACCUM8
    case 0xC455A7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:81 STA [@VIRTUAL06]
    case 0xC455A9: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC455AB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:83 INC @VIRTUAL06
    case 0xC455AD: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:84 LDA @LOCAL01
    case 0xC455AF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C47765.asm:85 DEC
    case 0xC455B1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:86 STA @LOCAL01
    case 0xC455B2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47765.asm:87 INX
    case 0xC455B4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C47765.asm:89 CPX #16
    case 0xC455B5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/unknown/C4/C47765.asm:89 CPX #16
    // Overlapping static entry reached from 0xC455B5.
    case 0xC455B7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C47765.asm:90 BCC @UNKNOWN1
    case 0xC455B8: cpu.execute_instruction<0x90>(0x0000D7, 2); return true;
    // src/unknown/C4/C47765.asm:91 SEP #PROC_FLAGS::ACCUM8
    case 0xC455BA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:92 LDA #1
    case 0xC455BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008701, 3); return true;
    // src/unknown/C4/C47765.asm:93 STA [@VIRTUAL06]
    case 0xC455BE: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:93 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC455BC.
    case 0xC455BF: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:94 REP #PROC_FLAGS::ACCUM8
    case 0xC455C0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:94 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC455BF.
    case 0xC455C1: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47765.asm:95 INC @VIRTUAL06
    case 0xC455C2: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:96 SEP #PROC_FLAGS::ACCUM8
    case 0xC455C4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:97 LDA #128
    case 0xC455C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008780, 3); return true;
    // src/unknown/C4/C47765.asm:98 STA [@VIRTUAL06]
    case 0xC455C8: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:98 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC455C6.
    case 0xC455C9: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC455CA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:99 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC455C9.
    case 0xC455CB: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47765.asm:100 INC @VIRTUAL06
    case 0xC455CC: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:101 SEP #PROC_FLAGS::ACCUM8
    case 0xC455CE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:102 LDA #127
    case 0xC455D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00877F, 3); return true;
    // src/unknown/C4/C47765.asm:103 STA [@VIRTUAL06]
    case 0xC455D2: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:103 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC455D0.
    case 0xC455D3: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C47765.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC455D4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:104 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC455D3.
    case 0xC455D5: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C47765.asm:105 INC @VIRTUAL06
    case 0xC455D6: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xC455D8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:107 LDA #0
    case 0xC455DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C47765.asm:108 STA [@VIRTUAL06]
    case 0xC455DC: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47765.asm:108 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC455DA.
    case 0xC455DD: cpu.execute_instruction<0x06>(0x0000A6, 2); return true;
    // src/unknown/C4/C47765.asm:109 LDX @LOCAL00
    case 0xC455DE: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C47765.asm:109 LDX @LOCAL00
    // Overlapping static entry reached from 0xC455DD.
    case 0xC455DF: cpu.execute_instruction<0x0E>(0x0020C2, 3); return true;
    // src/unknown/C4/C47765.asm:110 REP #PROC_FLAGS::ACCUM8
    case 0xC455E0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47765.asm:111 LDA @LOCAL00+2
    case 0xC455E2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C47765.asm:112 JSL UNKNOWN_C42542
    case 0xC455E4: cpu.execute_instruction<0x22>(0xC42480, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47765.asm:113 END_C_FUNCTION
    case 0xC455E8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47765.asm:113 END_C_FUNCTION
    case 0xC455E9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47866.asm (unresolved).
bool execute_unresolved_c4_c47866_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47866.asm:3 BEGIN_C_FUNCTION
    case 0xC455EA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47866.asm:9 END_STACK_VARS
    case 0xC455EC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C47866.asm:9 END_STACK_VARS
    case 0xC455ED: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47866.asm:9 END_STACK_VARS
    case 0xC455EE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47866.asm:9 END_STACK_VARS
    case 0xC455EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47866.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC455EF.
    case 0xC455F1: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47866.asm:9 END_STACK_VARS
    case 0xC455F2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C47866.asm:9 END_STACK_VARS
    case 0xC455F3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C47866.asm:10 STX @VIRTUAL02
    case 0xC455F4: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C47866.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC455F1.
    case 0xC455F5: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C47866.asm:11 STA @LOCAL00
    case 0xC455F6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C47866.asm:12 STA @VIRTUAL04
    case 0xC455F8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47866.asm:13 LDA #0
    case 0xC455FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47866.asm:13 LDA #0
    // Overlapping static entry reached from 0xC455FA.
    case 0xC455FC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C47866.asm:14 CLC
    case 0xC455FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47866.asm:15 SBC @VIRTUAL04
    case 0xC455FE: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C47866.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC45600: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C47866.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC45602: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C47866.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC45604: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C47866.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC45606: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C4/C47866.asm:17 LDA #0
    case 0xC45608: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47866.asm:17 LDA #0
    // Overlapping static entry reached from 0xC45608.
    case 0xC4560A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C47866.asm:18 STA @LOCAL00
    case 0xC4560B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C47866.asm:20 LDA @LOCAL00
    case 0xC4560D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C47866.asm:21 CLC
    case 0xC4560F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47866.asm:22 SBC @VIRTUAL02
    case 0xC45610: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C47866.asm:23 BRANCHLTEQS @UNKNOWN5
    case 0xC45612: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C47866.asm:23 BRANCHLTEQS @UNKNOWN5
    case 0xC45614: cpu.execute_instruction<0x10>(0x000008, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C47866.asm:23 BRANCHLTEQS @UNKNOWN5
    case 0xC45616: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C47866.asm:23 BRANCHLTEQS @UNKNOWN5
    case 0xC45618: cpu.execute_instruction<0x30>(0x000004, 2); return true;
    // src/unknown/C4/C47866.asm:24 LDA @VIRTUAL02
    case 0xC4561A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47866.asm:25 STA @LOCAL00
    case 0xC4561C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C47866.asm:27 LDA @LOCAL00
    case 0xC4561E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47866.asm:28 END_C_FUNCTION
    case 0xC45620: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C47866.asm:28 END_C_FUNCTION
    case 0xC45621: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4789E.asm (unresolved).
bool execute_unresolved_c4_c4789e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4789E.asm:3 BEGIN_C_FUNCTION
    case 0xC45622: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4789E.asm:12 END_STACK_VARS
    case 0xC45624: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4789E.asm:12 END_STACK_VARS
    case 0xC45625: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4789E.asm:12 END_STACK_VARS
    case 0xC45626: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4789E.asm:12 END_STACK_VARS
    case 0xC45627: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EF, 2); else cpu.execute_instruction<0x69>(0x00FFEF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4789E.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC45627.
    case 0xC45629: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4789E.asm:12 END_STACK_VARS
    case 0xC4562A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4789E.asm:12 END_STACK_VARS
    case 0xC4562B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4789E.asm:13 STY @VIRTUAL02
    case 0xC4562C: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4789E.asm:13 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC45629.
    case 0xC4562D: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C4/C4789E.asm:14 TXY
    case 0xC4562E: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4789E.asm:15 TAX
    case 0xC4562F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4789E.asm:16 STX @LOCAL01
    case 0xC45630: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4789E.asm:17 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC45632: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4789E.asm:17 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC45634: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4789E.asm:17 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC45636: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4789E.asm:17 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC45638: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4789E.asm:18 CPX #0
    case 0xC4563A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C4/C4789E.asm:18 CPX #0
    // Overlapping static entry reached from 0xC4563A.
    case 0xC4563C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4789E.asm:19 BEQ @UNKNOWN1
    case 0xC4563D: cpu.execute_instruction<0xF0>(0x00006B, 2); return true;
    // src/unknown/C4/C4789E.asm:20 CPX #128
    case 0xC4563F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x000080, 3); return true;
    // src/unknown/C4/C4789E.asm:20 CPX #128
    // Overlapping static entry reached from 0xC4563F.
    case 0xC45641: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C4789E.asm:21 BCS @UNKNOWN0
    case 0xC45642: cpu.execute_instruction<0xB0>(0x00001E, 2); return true;
    // src/unknown/C4/C4789E.asm:22 TXA
    case 0xC45644: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4789E.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC45645: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:24 STA [@VIRTUAL06]
    case 0xC45647: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC45649: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:26 INC @VIRTUAL06
    case 0xC4564B: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:27 TYA
    case 0xC4564D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4789E.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC4564E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:29 STA [@VIRTUAL06]
    case 0xC45650: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC45652: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:31 INC @VIRTUAL06
    case 0xC45654: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:32 LDA @VIRTUAL02
    case 0xC45656: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4789E.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC45658: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:34 STA [@VIRTUAL06]
    case 0xC4565A: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC4565C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:36 INC @VIRTUAL06
    case 0xC4565E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:37 BRA @UNKNOWN1
    case 0xC45660: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/unknown/C4/C4789E.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC45662: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:40 LDA #127
    case 0xC45664: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00877F, 3); return true;
    // src/unknown/C4/C4789E.asm:41 STA [@VIRTUAL06]
    case 0xC45666: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:41 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC45664.
    case 0xC45667: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4789E.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC45668: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:42 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC45667.
    case 0xC45669: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C4789E.asm:43 INC @VIRTUAL06
    case 0xC4566A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:44 SEP #PROC_FLAGS::INDEX8
    case 0xC4566C: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C4789E.asm:45 STY @VIRTUAL00
    case 0xC4566E: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C4/C4789E.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC45670: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:47 LDA @VIRTUAL00
    case 0xC45672: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4789E.asm:48 STA [@VIRTUAL06]
    case 0xC45674: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC45676: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:50 INC @VIRTUAL06
    case 0xC45678: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:51 LDA @VIRTUAL02
    case 0xC4567A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4789E.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC4567C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:53 STA @LOCAL00
    case 0xC4567E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4789E.asm:54 STA [@VIRTUAL06]
    case 0xC45680: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC45682: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:56 INC @VIRTUAL06
    case 0xC45684: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:57 REP #PROC_FLAGS::INDEX8
    case 0xC45686: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C4789E.asm:58 LDX @LOCAL01
    case 0xC45688: cpu.execute_instruction<0xA6>(0x00000F, 2); return true;
    // src/unknown/C4/C4789E.asm:59 TXA
    case 0xC4568A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4789E.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC4568B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:61 SEC
    case 0xC4568D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4789E.asm:62 SBC #127
    case 0xC4568E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00007F, 2); else cpu.execute_instruction<0xE9>(0x00877F, 3); return true;
    // src/unknown/C4/C4789E.asm:63 STA [@VIRTUAL06]
    case 0xC45690: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:63 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4568E.
    case 0xC45691: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4789E.asm:64 REP #PROC_FLAGS::ACCUM8
    case 0xC45692: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:64 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC45691.
    case 0xC45693: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C4789E.asm:65 INC @VIRTUAL06
    case 0xC45694: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC45696: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:67 LDA @VIRTUAL00
    case 0xC45698: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4789E.asm:68 STA [@VIRTUAL06]
    case 0xC4569A: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC4569C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:70 INC @VIRTUAL06
    case 0xC4569E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC456A0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:72 LDA @LOCAL00
    case 0xC456A2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4789E.asm:73 STA [@VIRTUAL06]
    case 0xC456A4: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4789E.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC456A6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4789E.asm:75 INC @VIRTUAL06
    case 0xC456A8: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4789E.asm:77 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC456AA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4789E.asm:77 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC456AC: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4789E.asm:77 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC456AE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4789E.asm:77 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC456B0: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4789E.asm:78 END_C_FUNCTION
    case 0xC456B2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4789E.asm:78 END_C_FUNCTION
    case 0xC456B3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47930-jp.asm (unresolved).
bool execute_unresolved_c4_c47930_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47930-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC456B4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47930-jp.asm:14 END_STACK_VARS
    case 0xC456B6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C47930-jp.asm:14 END_STACK_VARS
    case 0xC456B7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47930-jp.asm:14 END_STACK_VARS
    case 0xC456B8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47930-jp.asm:14 END_STACK_VARS
    case 0xC456B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47930-jp.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC456B9.
    case 0xC456BB: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47930-jp.asm:14 END_STACK_VARS
    case 0xC456BC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C47930-jp.asm:14 END_STACK_VARS
    case 0xC456BD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C47930-jp.asm:15 STY @LOCAL04
    case 0xC456BE: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C4/C47930-jp.asm:15 STY @LOCAL04
    // Overlapping static entry reached from 0xC456BB.
    case 0xC456BF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47930-jp.asm:16 TXY
    case 0xC456C0: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C47930-jp.asm:17 STA @VIRTUAL04
    case 0xC456C1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47930-jp.asm:18 LDX @PARAM03
    case 0xC456C3: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C4/C47930-jp.asm:19 STX @VIRTUAL02
    case 0xC456C5: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C47930-jp.asm:20 LDA RECTANGLE_WINDOW_BUFFER_INDEX
    case 0xC456C7: cpu.execute_instruction<0xAD>(0x00A040, 3); return true;
    // src/unknown/C4/C47930-jp.asm:21 AND #$0001
    case 0xC456CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C47930-jp.asm:21 AND #$0001
    // Overlapping static entry reached from 0xC456CA.
    case 0xC456CC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C47930-jp.asm:22 BEQ @UNKNOWN0
    case 0xC456CD: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C47930-jp.asm:23 LDA #0
    case 0xC456CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47930-jp.asm:23 LDA #0
    // Overlapping static entry reached from 0xC456CF.
    case 0xC456D1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C47930-jp.asm:24 STA @LOCAL03
    case 0xC456D2: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C47930-jp.asm:25 BRA @UNKNOWN1
    case 0xC456D4: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C47930-jp.asm:27 LDA #766
    case 0xC456D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x0002FE, 3); return true;
    // src/unknown/C4/C47930-jp.asm:27 LDA #766
    // Overlapping static entry reached from 0xC456D6.
    case 0xC456D8: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C47930-jp.asm:28 STA @LOCAL03
    case 0xC456D9: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47930-jp.asm:30 LOADPTR BUFFER, @VIRTUAL06
    case 0xC456DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47930-jp.asm:30 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC456DB.
    case 0xC456DD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47930-jp.asm:30 LOADPTR BUFFER, @VIRTUAL06
    case 0xC456DE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47930-jp.asm:30 LOADPTR BUFFER, @VIRTUAL06
    case 0xC456E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47930-jp.asm:30 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC456E0.
    case 0xC456E2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47930-jp.asm:30 LOADPTR BUFFER, @VIRTUAL06
    case 0xC456E3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47930-jp.asm:31 LDA @LOCAL03
    case 0xC456E5: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C47930-jp.asm:32 CLC
    case 0xC456E7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47930-jp.asm:33 ADC @VIRTUAL06
    case 0xC456E8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C47930-jp.asm:34 STA @VIRTUAL06
    case 0xC456EA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C47930-jp.asm:35 STA @LOCAL01
    case 0xC456EC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C47930-jp.asm:36 LDA @VIRTUAL06+2
    case 0xC456EE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C47930-jp.asm:37 STA @LOCAL01+2
    case 0xC456F0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C47930-jp.asm:38 LDX #224
    case 0xC456F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0000E0, 3); return true;
    // src/unknown/C4/C47930-jp.asm:38 LDX #224
    // Overlapping static entry reached from 0xC456F2.
    case 0xC456F4: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C4/C47930-jp.asm:39 TYA
    case 0xC456F5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47930-jp.asm:40 JSR UNKNOWN_C47866
    case 0xC456F6: cpu.execute_instruction<0x20>(0x0055EA, 3); return true;
    // src/unknown/C4/C47930-jp.asm:41 STA @LOCAL02
    case 0xC456F9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C47930-jp.asm:42 LDX #224
    case 0xC456FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0000E0, 3); return true;
    // src/unknown/C4/C47930-jp.asm:42 LDX #224
    // Overlapping static entry reached from 0xC456FB.
    case 0xC456FD: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C47930-jp.asm:43 LDA @VIRTUAL02
    case 0xC456FE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47930-jp.asm:44 JSR UNKNOWN_C47866
    case 0xC45700: cpu.execute_instruction<0x20>(0x0055EA, 3); return true;
    // src/unknown/C4/C47930-jp.asm:45 STA @LOCAL03
    case 0xC45703: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C47930-jp.asm:46 LDX #256
    case 0xC45705: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/unknown/C4/C47930-jp.asm:46 LDX #256
    // Overlapping static entry reached from 0xC45705.
    case 0xC45707: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/unknown/C4/C47930-jp.asm:47 LDA @VIRTUAL04
    case 0xC45708: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C47930-jp.asm:47 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC45707.
    case 0xC45709: cpu.execute_instruction<0x04>(0x000020, 2); return true;
    // src/unknown/C4/C47930-jp.asm:48 JSR UNKNOWN_C47866
    case 0xC4570A: cpu.execute_instruction<0x20>(0x0055EA, 3); return true;
    // src/unknown/C4/C47930-jp.asm:48 JSR UNKNOWN_C47866
    // Overlapping static entry reached from 0xC45709.
    case 0xC4570B: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C47930-jp.asm:48 JSR UNKNOWN_C47866
    // Overlapping static entry reached from 0xC4570B.
    case 0xC4570C: cpu.execute_instruction<0x55>(0x000085, 2); return true;
    // src/unknown/C4/C47930-jp.asm:49 STA @VIRTUAL04
    case 0xC4570D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47930-jp.asm:49 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC4570C.
    case 0xC4570E: cpu.execute_instruction<0x04>(0x0000A2, 2); return true;
    // src/unknown/C4/C47930-jp.asm:50 LDX #256
    case 0xC4570F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/unknown/C4/C47930-jp.asm:50 LDX #256
    // Overlapping static entry reached from 0xC4570E.
    case 0xC45710: cpu.execute_instruction<0x00>(0x000001, 2); return true;
    // src/unknown/C4/C47930-jp.asm:50 LDX #256
    // Overlapping static entry reached from 0xC4570F.
    case 0xC45711: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/unknown/C4/C47930-jp.asm:51 LDA @LOCAL04
    case 0xC45712: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C47930-jp.asm:51 LDA @LOCAL04
    // Overlapping static entry reached from 0xC45711.
    case 0xC45713: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47930-jp.asm:52 JSR UNKNOWN_C47866
    case 0xC45714: cpu.execute_instruction<0x20>(0x0055EA, 3); return true;
    // src/unknown/C4/C47930-jp.asm:53 STA @VIRTUAL02
    case 0xC45717: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47930-jp.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45719: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47930-jp.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4571B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47930-jp.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4571D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47930-jp.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4571F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47930-jp.asm:55 LDY #127
    case 0xC45721: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00007F, 2); else cpu.execute_instruction<0xA0>(0x00007F, 3); return true;
    // src/unknown/C4/C47930-jp.asm:55 LDY #127
    // Overlapping static entry reached from 0xC45721.
    case 0xC45723: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C47930-jp.asm:56 LDX #128
    case 0xC45724: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000080, 3); return true;
    // src/unknown/C4/C47930-jp.asm:56 LDX #128
    // Overlapping static entry reached from 0xC45724.
    case 0xC45726: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C47930-jp.asm:57 LDA @LOCAL02
    case 0xC45727: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C47930-jp.asm:58 JSR UNKNOWN_C4789E
    case 0xC45729: cpu.execute_instruction<0x20>(0x005622, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47930-jp.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4572C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47930-jp.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4572E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47930-jp.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45730: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47930-jp.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45732: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47930-jp.asm:60 LDY @VIRTUAL02
    case 0xC45734: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C47930-jp.asm:61 LDX @VIRTUAL04
    case 0xC45736: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C47930-jp.asm:62 LDA @LOCAL03
    case 0xC45738: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C47930-jp.asm:63 SEC
    case 0xC4573A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47930-jp.asm:64 SBC @LOCAL02
    case 0xC4573B: cpu.execute_instruction<0xE5>(0x000016, 2); return true;
    // src/unknown/C4/C47930-jp.asm:65 JSR UNKNOWN_C4789E
    case 0xC4573D: cpu.execute_instruction<0x20>(0x005622, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47930-jp.asm:66 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45740: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47930-jp.asm:66 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45742: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47930-jp.asm:66 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45744: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47930-jp.asm:66 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45746: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47930-jp.asm:67 LDY #127
    case 0xC45748: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00007F, 2); else cpu.execute_instruction<0xA0>(0x00007F, 3); return true;
    // src/unknown/C4/C47930-jp.asm:67 LDY #127
    // Overlapping static entry reached from 0xC45748.
    case 0xC4574A: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C47930-jp.asm:68 LDX #128
    case 0xC4574B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000080, 3); return true;
    // src/unknown/C4/C47930-jp.asm:68 LDX #128
    // Overlapping static entry reached from 0xC4574B.
    case 0xC4574D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C47930-jp.asm:69 LDA #224
    case 0xC4574E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // src/unknown/C4/C47930-jp.asm:69 LDA #224
    // Overlapping static entry reached from 0xC4574E.
    case 0xC45750: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C47930-jp.asm:70 SEC
    case 0xC45751: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47930-jp.asm:71 SBC @LOCAL03
    case 0xC45752: cpu.execute_instruction<0xE5>(0x000018, 2); return true;
    // src/unknown/C4/C47930-jp.asm:72 DEC
    case 0xC45754: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C47930-jp.asm:73 JSR UNKNOWN_C4789E
    case 0xC45755: cpu.execute_instruction<0x20>(0x005622, 3); return true;
    // src/unknown/C4/C47930-jp.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC45758: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47930-jp.asm:75 LDA #0
    case 0xC4575A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C47930-jp.asm:76 STA [@VIRTUAL06]
    case 0xC4575C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C47930-jp.asm:76 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4575A.
    case 0xC4575D: cpu.execute_instruction<0x06>(0x0000A6, 2); return true;
    // src/unknown/C4/C47930-jp.asm:77 LDX @LOCAL01
    case 0xC4575E: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47930-jp.asm:77 LDX @LOCAL01
    // Overlapping static entry reached from 0xC4575D.
    case 0xC4575F: cpu.execute_instruction<0x12>(0x0000C2, 2); return true;
    // src/unknown/C4/C47930-jp.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC45760: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47930-jp.asm:78 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4575F.
    case 0xC45761: cpu.execute_instruction<0x20>(0x0014A5, 3); return true;
    // src/unknown/C4/C47930-jp.asm:79 LDA @LOCAL01+2
    case 0xC45762: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C47930-jp.asm:80 JSL UNKNOWN_C4245D
    case 0xC45764: cpu.execute_instruction<0x22>(0xC4239B, 4); return true;
    // src/unknown/C4/C47930-jp.asm:81 INC RECTANGLE_WINDOW_BUFFER_INDEX
    case 0xC45768: cpu.execute_instruction<0xEE>(0x00A040, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47930-jp.asm:82 END_C_FUNCTION
    case 0xC4576B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47930-jp.asm:82 END_C_FUNCTION
    case 0xC4576C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C479E9.asm (unresolved).
bool execute_unresolved_c4_c479e9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C479E9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4576D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C479E9.asm:8 END_STACK_VARS
    case 0xC4576F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C479E9.asm:8 END_STACK_VARS
    case 0xC45770: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C479E9.asm:8 END_STACK_VARS
    case 0xC45771: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C479E9.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC45771.
    case 0xC45773: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C479E9.asm:8 END_STACK_VARS
    case 0xC45774: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC45775: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C479E9.asm:9 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC45773.
    case 0xC45777: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:10 ASL
    case 0xC45778: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:11 TAX
    case 0xC45779: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:12 LDA ENTITY_ABS_X_TABLE,X
    case 0xC4577A: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C479E9.asm:13 SEC
    case 0xC4577D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:14 SBC BG1_X_POS
    case 0xC4577E: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C4/C479E9.asm:15 STA @VIRTUAL04
    case 0xC45781: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C479E9.asm:16 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC45783: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C479E9.asm:17 SEC
    case 0xC45786: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:18 SBC BG1_Y_POS
    case 0xC45787: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C4/C479E9.asm:19 STA @LOCAL02
    case 0xC4578A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C479E9.asm:20 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4578C: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C4/C479E9.asm:21 STA @VIRTUAL02
    case 0xC4578F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C479E9.asm:22 LDA @LOCAL02
    case 0xC45791: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C479E9.asm:23 CLC
    case 0xC45793: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:24 ADC @VIRTUAL02
    case 0xC45794: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C479E9.asm:25 STA @LOCAL00
    case 0xC45796: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C479E9.asm:26 LDA @VIRTUAL04
    case 0xC45798: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C479E9.asm:27 CLC
    case 0xC4579A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:28 ADC @VIRTUAL02
    case 0xC4579B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C479E9.asm:29 TAY
    case 0xC4579D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:30 LDX @LOCAL01
    case 0xC4579E: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C479E9.asm:31 LDA @VIRTUAL04
    case 0xC457A0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C479E9.asm:32 SEC
    case 0xC457A2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C479E9.asm:33 SBC @VIRTUAL02
    case 0xC457A3: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C479E9.asm:34 JSL UNKNOWN_C47930
    case 0xC457A5: cpu.execute_instruction<0x22>(0xC456B4, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C479E9.asm:35 END_C_FUNCTION
    case 0xC457A9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C479E9.asm:35 END_C_FUNCTION
    case 0xC457AA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47A27.asm (unresolved).
bool execute_unresolved_c4_c47a27_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47A27.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC457AB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47A27.asm:8 END_STACK_VARS
    case 0xC457AD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47A27.asm:8 END_STACK_VARS
    case 0xC457AE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47A27.asm:8 END_STACK_VARS
    case 0xC457AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47A27.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC457AF.
    case 0xC457B1: cpu.execute_instruction<0xFF>(0x3AAE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47A27.asm:8 END_STACK_VARS
    case 0xC457B2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:9 LDX GAME_STATE+game_state::current_party_members
    case 0xC457B3: cpu.execute_instruction<0xAE>(0x009B3A, 3); return true;
    // src/unknown/C4/C47A27.asm:9 LDX GAME_STATE+game_state::current_party_members
    // Overlapping static entry reached from 0xC457B1.
    case 0xC457B5: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:10 STX @LOCAL02
    case 0xC457B6: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C47A27.asm:11 LDA CURRENT_ENTITY_SLOT
    case 0xC457B8: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C47A27.asm:12 ASL
    case 0xC457BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:13 TAX
    case 0xC457BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:14 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC457BD: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C47A27.asm:15 SEC
    case 0xC457C0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:16 SBC #112
    case 0xC457C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000070, 2); else cpu.execute_instruction<0xE9>(0x000070, 3); return true;
    // src/unknown/C4/C47A27.asm:16 SBC #112
    // Overlapping static entry reached from 0xC457C1.
    case 0xC457C3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C47A27.asm:17 STA BG1_Y_POS
    case 0xC457C4: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/unknown/C4/C47A27.asm:18 STA @VIRTUAL02
    case 0xC457C7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47A27.asm:19 LDX @LOCAL02
    case 0xC457C9: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47A27.asm:20 TXA
    case 0xC457CB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:21 ASL
    case 0xC457CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:22 TAX
    case 0xC457CD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:23 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC457CE: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C47A27.asm:24 SEC
    case 0xC457D1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:25 SBC @VIRTUAL02
    case 0xC457D2: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C47A27.asm:26 STA @LOCAL01
    case 0xC457D4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47A27.asm:27 CLC
    case 0xC457D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:28 ADC #96
    case 0xC457D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x000060, 3); return true;
    // src/unknown/C4/C47A27.asm:28 ADC #96
    // Overlapping static entry reached from 0xC457D7.
    case 0xC457D9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C47A27.asm:29 STA @LOCAL00
    case 0xC457DA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C47A27.asm:30 LDY #240
    case 0xC457DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x0000F0, 3); return true;
    // src/unknown/C4/C47A27.asm:30 LDY #240
    // Overlapping static entry reached from 0xC457DC.
    case 0xC457DE: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C47A27.asm:31 LDA @LOCAL01
    case 0xC457DF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C47A27.asm:32 SEC
    case 0xC457E1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:33 SBC #96
    case 0xC457E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000060, 2); else cpu.execute_instruction<0xE9>(0x000060, 3); return true;
    // src/unknown/C4/C47A27.asm:33 SBC #96
    // Overlapping static entry reached from 0xC457E2.
    case 0xC457E4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C47A27.asm:34 TAX
    case 0xC457E5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:35 LDA #16
    case 0xC457E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C47A27.asm:35 LDA #16
    // Overlapping static entry reached from 0xC457E6.
    case 0xC457E8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C47A27.asm:36 JSL UNKNOWN_C47930
    case 0xC457E9: cpu.execute_instruction<0x22>(0xC456B4, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47A27.asm:37 END_C_FUNCTION
    case 0xC457ED: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47A27.asm:37 END_C_FUNCTION
    case 0xC457EE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47A6B.asm (unresolved).
bool execute_unresolved_c4_c47a6b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47A6B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC457EF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47A6B.asm:7 END_STACK_VARS
    case 0xC457F1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47A6B.asm:7 END_STACK_VARS
    case 0xC457F2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47A6B.asm:7 END_STACK_VARS
    case 0xC457F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47A6B.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC457F3.
    case 0xC457F5: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47A6B.asm:7 END_STACK_VARS
    case 0xC457F6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC457F7: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C47A6B.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC457F5.
    case 0xC457F9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:9 ASL
    case 0xC457FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:10 STA @LOCAL01
    case 0xC457FB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47A6B.asm:11 CLC
    case 0xC457FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:12 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC457FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C0, 2); else cpu.execute_instruction<0x69>(0x000BC0, 3); return true;
    // src/unknown/C4/C47A6B.asm:12 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC457FE.
    case 0xC45800: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:13 TAX
    case 0xC45801: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:14 STX @LOCAL00
    case 0xC45802: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C47A6B.asm:15 LDA @LOCAL01
    case 0xC45804: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C47A6B.asm:16 TAX
    case 0xC45806: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:17 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC45807: cpu.execute_instruction<0xBD>(0x000FF8, 3); return true;
    // src/unknown/C4/C47A6B.asm:18 STA @LOCAL01
    case 0xC4580A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47A6B.asm:19 STA @VIRTUAL04
    case 0xC4580C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47A6B.asm:20 LDX @LOCAL00
    case 0xC4580E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C47A6B.asm:21 LDA __BSS_START__,X
    case 0xC45810: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C47A6B.asm:22 SEC
    case 0xC45813: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:23 SBC @VIRTUAL04
    case 0xC45814: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C4/C47A6B.asm:24 STA @VIRTUAL02
    case 0xC45816: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47A6B.asm:25 LDA @LOCAL01
    case 0xC45818: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C47A6B.asm:26 SEC
    case 0xC4581A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:27 SBC @VIRTUAL02
    case 0xC4581B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C47A6B.asm:28 STA __BSS_START__,X
    case 0xC4581D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47A6B.asm:29 END_C_FUNCTION
    case 0xC45820: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47A6B.asm:29 END_C_FUNCTION
    case 0xC45821: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47A9E.asm (unresolved).
bool execute_unresolved_c4_c47a9e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47A9E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45822: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47A9E.asm:9 END_STACK_VARS
    case 0xC45824: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47A9E.asm:9 END_STACK_VARS
    case 0xC45825: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47A9E.asm:9 END_STACK_VARS
    case 0xC45826: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47A9E.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC45826.
    case 0xC45828: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47A9E.asm:9 END_STACK_VARS
    case 0xC45829: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC4582A: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C47A9E.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC45828.
    case 0xC4582C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:11 ASL
    case 0xC4582D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:12 TAX
    case 0xC4582E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:13 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4582F: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C4/C47A9E.asm:14 STA @LOCAL03
    case 0xC45832: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:15 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC45834: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F8, 2); else cpu.execute_instruction<0xA9>(0x002EF8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:15 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC45834.
    case 0xC45836: cpu.execute_instruction<0x2E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47A9E.asm:15 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC45837: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:15 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC45839: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0000CC, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:15 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC45839.
    case 0xC4583B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47A9E.asm:15 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC4583C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47A9E.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4583E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC45840: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC45842: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC45844: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C47A9E.asm:17 LDA @LOCAL03
    case 0xC45846: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C47A9E.asm:18 ASL
    case 0xC45848: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:19 ASL
    case 0xC45849: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:20 ASL
    case 0xC4584A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:21 STA @LOCAL03
    case 0xC4584B: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:22 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC4584D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:22 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4584D.
    case 0xC4584F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47A9E.asm:22 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC45850: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:22 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC45852: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:22 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45852.
    case 0xC45854: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47A9E.asm:22 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC45855: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C47A9E.asm:23 LDA @LOCAL03
    case 0xC45857: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C47A9E.asm:24 CLC
    case 0xC45859: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:25 ADC @VIRTUAL06
    case 0xC4585A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C47A9E.asm:26 STA @VIRTUAL06
    case 0xC4585C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C47A9E.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4585E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C47A9E.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC4585E.
    case 0xC45860: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C47A9E.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC45861: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C47A9E.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC45863: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C47A9E.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC45864: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC45866: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC45868: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47A9E.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4586A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4586C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4586E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC45870: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47A9E.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC45872: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC45874: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC45876: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC45878: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C47A9E.asm:35 JSL DECOMP
    case 0xC4587A: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/unknown/C4/C47A9E.asm:36 LDA @LOCAL03
    case 0xC4587E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C47A9E.asm:37 INC
    case 0xC45880: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:38 INC
    case 0xC45881: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:39 INC
    case 0xC45882: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:40 INC
    case 0xC45883: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C47A9E.asm:41 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC45884: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C47A9E.asm:41 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC45886: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:41 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC45888: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:41 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC4588A: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C47A9E.asm:42 CLC
    case 0xC4588C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:43 ADC @VIRTUAL06
    case 0xC4588D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C47A9E.asm:44 STA @VIRTUAL06
    case 0xC4588F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47A9E.asm:46 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45891: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:46 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45893: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:46 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45895: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:46 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45897: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47A9E.asm:54 LDY #VRAM::TEXT_LAYER_TILES
    case 0xC45899: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/unknown/C4/C47A9E.asm:54 LDY #VRAM::TEXT_LAYER_TILES
    // Overlapping static entry reached from 0xC45899.
    case 0xC4589B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:58 LDA [@VIRTUAL06]
    case 0xC4589C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C47A9E.asm:59 TAX
    case 0xC4589E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC4589F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47A9E.asm:61 LDA #0
    case 0xC458A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C47A9E.asm:62 JSL TRANSFER_TO_VRAM
    case 0xC458A3: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // src/unknown/C4/C47A9E.asm:62 JSL TRANSFER_TO_VRAM
    // Overlapping static entry reached from 0xC458A1.
    case 0xC458A4: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // src/unknown/C4/C47A9E.asm:62 JSL TRANSFER_TO_VRAM
    // Overlapping static entry reached from 0xC458A4.
    case 0xC458A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A7, 2); else cpu.execute_instruction<0xC0>(0x0006A7, 3); return true;
    // src/unknown/C4/C47A9E.asm:64 LDA [@VIRTUAL06]
    case 0xC458A7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C47A9E.asm:64 LDA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC458A6.
    case 0xC458A8: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:65 STORE_INT1632 @VIRTUAL06
    case 0xC458A9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:65 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC458A8.
    case 0xC458AA: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:65 STORE_INT1632 @VIRTUAL06
    case 0xC458AB: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:65 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC458AA.
    case 0xC458AC: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:66 CLC
    case 0xC458AD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C4/C47A9E.asm:67 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC458AE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C4/C47A9E.asm:67 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC458B0: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:67 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC458B2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C4/C47A9E.asm:67 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC458B4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C4/C47A9E.asm:67 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC458B6: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:67 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC458B8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47A9E.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC458BA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC458BC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC458BE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC458C0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47A9E.asm:69 LDX #BPP2PALETTE_SIZE
    case 0xC458C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C4/C47A9E.asm:69 LDX #BPP2PALETTE_SIZE
    // Overlapping static entry reached from 0xC458C2.
    case 0xC458C4: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C47A9E.asm:70 LDA #.LOWORD(PALETTES)
    case 0xC458C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C47A9E.asm:70 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC458C5.
    case 0xC458C7: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C47A9E.asm:71 JSL MEMCPY16
    case 0xC458C8: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C4/C47A9E.asm:72 SEP #PROC_FLAGS::ACCUM8
    case 0xC458CC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47A9E.asm:73 LDA #PALETTE_UPLOAD::FULL
    case 0xC458CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C4/C47A9E.asm:74 STA PALETTE_UPLOAD_MODE
    case 0xC458D0: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C4/C47A9E.asm:74 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC458CE.
    case 0xC458D1: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C4/C47A9E.asm:75 REP #PROC_FLAGS::ACCUM8
    case 0xC458D3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47A9E.asm:76 LDA #.LOWORD(-1)
    case 0xC458D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C47A9E.asm:76 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC458D5.
    case 0xC458D7: cpu.execute_instruction<0xFF>(0x003B8D, 4); return true;
    // src/unknown/C4/C47A9E.asm:77 STA BG3_Y_POS
    case 0xC458D8: cpu.execute_instruction<0x8D>(0x00003B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47A9E.asm:78 END_C_FUNCTION
    case 0xC458DB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47A9E.asm:78 END_C_FUNCTION
    case 0xC458DC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47B77-jp.asm (unresolved).
bool execute_unresolved_c4_c47b77_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47B77-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC458DD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47B77-jp.asm:9 END_STACK_VARS
    case 0xC458DF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47B77-jp.asm:9 END_STACK_VARS
    case 0xC458E0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47B77-jp.asm:9 END_STACK_VARS
    case 0xC458E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47B77-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC458E1.
    case 0xC458E3: cpu.execute_instruction<0xFF>(0xFFA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47B77-jp.asm:9 END_STACK_VARS
    case 0xC458E4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:10 LDA #.LOWORD(-1)
    case 0xC458E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C47B77-jp.asm:10 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC458E5.
    case 0xC458E7: cpu.execute_instruction<0xFF>(0x003B8D, 4); return true;
    // src/unknown/C4/C47B77-jp.asm:11 STA BG3_Y_POS
    case 0xC458E8: cpu.execute_instruction<0x8D>(0x00003B, 3); return true;
    // src/unknown/C4/C47B77-jp.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xC458EB: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C47B77-jp.asm:13 ASL
    case 0xC458EE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:14 TAX
    case 0xC458EF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:15 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC458F0: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C4/C47B77-jp.asm:16 STA @LOCAL02
    case 0xC458F3: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:17 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC458F5: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/unknown/C4/C47B77-jp.asm:18 STA @VIRTUAL04
    case 0xC458F8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47B77-jp.asm:19 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC458FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F8, 2); else cpu.execute_instruction<0xA9>(0x002EF8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47B77-jp.asm:19 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC458FA.
    case 0xC458FC: cpu.execute_instruction<0x2E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47B77-jp.asm:19 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC458FD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47B77-jp.asm:19 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC458FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0000CC, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47B77-jp.asm:19 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC458FF.
    case 0xC45901: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:19 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC45902: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47B77-jp.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC45904: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47B77-jp.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC45906: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC45908: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4590A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:21 LDA @LOCAL02
    case 0xC4590C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:22 ASL
    case 0xC4590E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:23 ASL
    case 0xC4590F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:24 ASL
    case 0xC45910: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:25 STA @VIRTUAL02
    case 0xC45911: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:26 INC
    case 0xC45913: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:27 INC
    case 0xC45914: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:28 INC
    case 0xC45915: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:29 INC
    case 0xC45916: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C47B77-jp.asm:30 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC45917: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C47B77-jp.asm:30 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC45919: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:30 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4591B: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:30 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4591D: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:31 CLC
    case 0xC4591F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:32 ADC @VIRTUAL0A
    case 0xC45920: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:33 STA @VIRTUAL0A
    case 0xC45922: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:34 LDA [@VIRTUAL0A]
    case 0xC45924: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C47B77-jp.asm:35 STORE_INT1632 @VIRTUAL0A
    case 0xC45926: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:35 STORE_INT1632 @VIRTUAL0A
    case 0xC45928: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:36 LDY #1792
    case 0xC4592A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000700, 3); return true;
    // src/unknown/C4/C47B77-jp.asm:36 LDY #1792
    // Overlapping static entry reached from 0xC4592A.
    case 0xC4592C: cpu.execute_instruction<0x07>(0x0000A5, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:37 LDA @VIRTUAL04
    case 0xC4592D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:37 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC4592C.
    case 0xC4592E: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:38 JSL MULT16
    case 0xC4592F: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C47B77-jp.asm:38 JSL MULT16
    // Overlapping static entry reached from 0xC4592E.
    case 0xC45930: cpu.execute_instruction<0x14>(0x000090, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:38 JSL MULT16
    // Overlapping static entry reached from 0xC45930.
    case 0xC45932: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C47B77-jp.asm:39 STORE_INT1632 @VIRTUAL06
    case 0xC45933: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C47B77-jp.asm:39 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC45932.
    case 0xC45934: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:39 STORE_INT1632 @VIRTUAL06
    case 0xC45935: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:39 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC45934.
    case 0xC45936: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:40 CLC
    case 0xC45937: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C4/C47B77-jp.asm:41 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC45938: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:41 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4593A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C4/C47B77-jp.asm:41 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4593C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:41 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4593E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:41 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC45940: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:41 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC45942: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:42 CLC
    case 0xC45944: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C4/C47B77-jp.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL0A
    case 0xC45945: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C47B77-jp.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL0A
    case 0xC45947: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C47B77-jp.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45947.
    case 0xC45949: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C47B77-jp.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL0A
    case 0xC4594A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL0A
    case 0xC4594C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C47B77-jp.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL0A
    case 0xC4594E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C47B77-jp.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4594E.
    case 0xC45950: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL0A
    case 0xC45951: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47B77-jp.asm:44 COPY_TO_VRAM1P @VIRTUAL0A, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC45953: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47B77-jp.asm:44 COPY_TO_VRAM1P @VIRTUAL0A, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC45955: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:44 COPY_TO_VRAM1P @VIRTUAL0A, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC45957: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:44 COPY_TO_VRAM1P @VIRTUAL0A, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC45959: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C47B77-jp.asm:44 COPY_TO_VRAM1P @VIRTUAL0A, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC4595B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C47B77-jp.asm:44 COPY_TO_VRAM1P @VIRTUAL0A, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    // Overlapping static entry reached from 0xC4595B.
    case 0xC4595D: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C47B77-jp.asm:44 COPY_TO_VRAM1P @VIRTUAL0A, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC4595E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000700, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C47B77-jp.asm:44 COPY_TO_VRAM1P @VIRTUAL0A, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    // Overlapping static entry reached from 0xC4595E.
    case 0xC45960: cpu.execute_instruction<0x07>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C47B77-jp.asm:44 COPY_TO_VRAM1P @VIRTUAL0A, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC45961: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C47B77-jp.asm:44 COPY_TO_VRAM1P @VIRTUAL0A, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    // Overlapping static entry reached from 0xC45960.
    case 0xC45962: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C47B77-jp.asm:44 COPY_TO_VRAM1P @VIRTUAL0A, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC45963: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C47B77-jp.asm:44 COPY_TO_VRAM1P @VIRTUAL0A, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC45965: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C47B77-jp.asm:44 COPY_TO_VRAM1P @VIRTUAL0A, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    // Overlapping static entry reached from 0xC45963.
    case 0xC45966: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C47B77-jp.asm:44 COPY_TO_VRAM1P @VIRTUAL0A, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    // Overlapping static entry reached from 0xC45966.
    case 0xC45968: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0002A5, 3); return true;
    // src/unknown/C4/C47B77-jp.asm:46 LDA @VIRTUAL02
    case 0xC45969: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:46 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC45968.
    case 0xC4596A: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:47 CLC
    case 0xC4596B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:48 ADC #6
    case 0xC4596C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C4/C47B77-jp.asm:48 ADC #6
    // Overlapping static entry reached from 0xC4596C.
    case 0xC4596E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C47B77-jp.asm:49 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC4596F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C47B77-jp.asm:49 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC45971: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:49 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC45973: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:49 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC45975: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C47B77-jp.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC45977: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C47B77-jp.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC45979: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4597B: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C47B77-jp.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4597D: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:51 CLC
    case 0xC4597F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:52 ADC @VIRTUAL0A
    case 0xC45980: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:52 ADC @VIRTUAL0A
    // Overlapping static entry reached from 0xC459FA.
    case 0xC45981: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:53 STA @VIRTUAL0A
    case 0xC45982: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:54 LDA [@VIRTUAL0A]
    case 0xC45984: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:55 AND #$00FF
    case 0xC45986: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47B77-jp.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC45986.
    case 0xC45988: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:56 PHA
    case 0xC45989: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:57 LDA @VIRTUAL04
    case 0xC4598A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:58 INC
    case 0xC4598C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:59 PLY
    case 0xC4598D: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:60 STY @VIRTUAL04
    case 0xC4598E: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:61 CMP @VIRTUAL04
    case 0xC45990: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:62 BNE @UNKNOWN0
    case 0xC45992: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:63 LDA #0
    case 0xC45994: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47B77-jp.asm:63 LDA #0
    // Overlapping static entry reached from 0xC45994.
    case 0xC45996: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:64 BRA @UNKNOWN1
    case 0xC45997: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:66 LDA @VIRTUAL02
    case 0xC45999: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:67 CLC
    case 0xC4599B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:68 ADC #7
    case 0xC4599C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C4/C47B77-jp.asm:68 ADC #7
    // Overlapping static entry reached from 0xC4599C.
    case 0xC4599E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:69 CLC
    case 0xC4599F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47B77-jp.asm:70 ADC @VIRTUAL06
    case 0xC459A0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:71 STA @VIRTUAL06
    case 0xC459A2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:72 LDA [@VIRTUAL06]
    case 0xC459A4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C47B77-jp.asm:73 AND #$00FF
    case 0xC459A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47B77-jp.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC459A6.
    case 0xC459A8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47B77-jp.asm:75 END_C_FUNCTION
    case 0xC459A9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47B77-jp.asm:75 END_C_FUNCTION
    case 0xC459AA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47F87-jp.asm (unresolved).
bool execute_unresolved_c4_c47f87_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47F87-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45C1A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47F87-jp.asm:6 END_STACK_VARS
    case 0xC45C1C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47F87-jp.asm:6 END_STACK_VARS
    case 0xC45C1D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47F87-jp.asm:6 END_STACK_VARS
    case 0xC45C1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47F87-jp.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC45C1E.
    case 0xC45C20: cpu.execute_instruction<0xFF>(0x55AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47F87-jp.asm:6 END_STACK_VARS
    case 0xC45C21: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C47F87-jp.asm:7 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC45C22: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:7 LDA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC45C20.
    case 0xC45C24: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C47F87-jp.asm:8 AND #$00FF
    case 0xC45C25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC45C25.
    case 0xC45C27: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:9 DEC
    case 0xC45C28: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C47F87-jp.asm:10 CLC
    case 0xC45C29: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47F87-jp.asm:11 ADC #.LOWORD(GAME_STATE)
    case 0xC45C2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:11 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC45C2A.
    case 0xC45C2C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C47F87-jp.asm:12 TAX
    case 0xC45C2D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47F87-jp.asm:13 LDA a:game_state::player_controlled_party_members,X
    case 0xC45C2E: cpu.execute_instruction<0xBD>(0x000099, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:14 AND #$00FF
    case 0xC45C31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC45C31.
    case 0xC45C33: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:15 ASL
    case 0xC45C34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47F87-jp.asm:16 TAX
    case 0xC45C35: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47F87-jp.asm:17 LDA CHOSEN_FOUR_PTRS,X
    case 0xC45C36: cpu.execute_instruction<0xBD>(0x00514E, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:18 TAX
    case 0xC45C39: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47F87-jp.asm:19 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC45C3A: cpu.execute_instruction<0xBD>(0x00000D, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:20 AND #$00FF
    case 0xC45C3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC45C3D.
    case 0xC45C3F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:21 TAX
    case 0xC45C40: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47F87-jp.asm:22 CPX #STATUS_0::UNCONSCIOUS
    case 0xC45C41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:22 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC45C41.
    case 0xC45C43: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:23 BEQ @UNKNOWN0
    case 0xC45C44: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:24 CPX #STATUS_0::DIAMONDIZED
    case 0xC45C46: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:24 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC45C46.
    case 0xC45C48: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:25 BNE @UNKNOWN1
    case 0xC45C49: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:27 LDA DISABLED_TRANSITIONS
    case 0xC45C4B: cpu.execute_instruction<0xAD>(0x00B68A, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:28 BNE @UNKNOWN1
    case 0xC45C4E: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC45C50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005D, 2); else cpu.execute_instruction<0xA9>(0x00205D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    // Overlapping static entry reached from 0xC45C50.
    case 0xC45C52: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47F87-jp.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC45C53: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC45C55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    // Overlapping static entry reached from 0xC45C55.
    case 0xC45C57: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47F87-jp.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC45C58: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:30 LDX #BPP4PALETTE_SIZE * 2
    case 0xC45C5A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:30 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC45C5A.
    case 0xC45C5C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:31 LDA #.LOWORD(PALETTES)
    case 0xC45C5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:31 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC45C5D.
    case 0xC45C5F: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:32 JSL MEMCPY16
    case 0xC45C60: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C4/C47F87-jp.asm:33 BRA @UNKNOWN2
    case 0xC45C64: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC45C66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x001F1D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC45C66.
    case 0xC45C68: cpu.execute_instruction<0x1F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC45C69: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC45C6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC45C68.
    case 0xC45C6C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC45C6B.
    case 0xC45C6D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC45C6E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC45C6C.
    case 0xC45C6F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C47F87-jp.asm:36 LDA GAME_STATE+game_state::text_flavour
    case 0xC45C70: cpu.execute_instruction<0xAD>(0x009C7E, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:37 AND #$00FF
    case 0xC45C73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC45C73.
    case 0xC45C75: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:38 DEC
    case 0xC45C76: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C47F87-jp.asm:39 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC45C77: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C47F87-jp.asm:39 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC45C79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C47F87-jp.asm:39 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC45C7A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:40 TAX
    case 0xC45C7C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47F87-jp.asm:41 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC45C7D: cpu.execute_instruction<0xBF>(0xE01F0E, 4); return true;
    // src/unknown/C4/C47F87-jp.asm:42 CLC
    case 0xC45C81: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47F87-jp.asm:43 ADC @VIRTUAL06
    case 0xC45C82: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:44 STA @VIRTUAL06
    case 0xC45C84: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:45 STA @LOCAL00
    case 0xC45C86: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:46 LDA @VIRTUAL06+2
    case 0xC45C88: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:47 STA @LOCAL00+2
    case 0xC45C8A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:48 LDX #BPP4PALETTE_SIZE * 2
    case 0xC45C8C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:48 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC45C8C.
    case 0xC45C8E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:49 LDA #.LOWORD(PALETTES)
    case 0xC45C8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:49 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC45C8F.
    case 0xC45C91: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:50 JSL MEMCPY16
    case 0xC45C92: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C4/C47F87-jp.asm:52 STZ PALETTES
    case 0xC45C96: cpu.execute_instruction<0x9C>(0x000200, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:53 LDA #8
    case 0xC45C99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C47F87-jp.asm:53 LDA #8
    // Overlapping static entry reached from 0xC45C99.
    case 0xC45C9B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C47F87-jp.asm:54 JSL UNKNOWN_C0856B
    case 0xC45C9C: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47F87-jp.asm:55 END_C_FUNCTION
    case 0xC45CA0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47F87-jp.asm:55 END_C_FUNCTION
    case 0xC45CA1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4810E.asm (unresolved).
bool execute_unresolved_c4_c4810e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4810E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45D4A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4810E.asm:12 END_STACK_VARS
    case 0xC45D4C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4810E.asm:12 END_STACK_VARS
    case 0xC45D4D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4810E.asm:12 END_STACK_VARS
    case 0xC45D4E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4810E.asm:12 END_STACK_VARS
    case 0xC45D4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00FFEB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4810E.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC45D4F.
    case 0xC45D51: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4810E.asm:12 END_STACK_VARS
    case 0xC45D52: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4810E.asm:12 END_STACK_VARS
    case 0xC45D53: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:13 STA @LOCAL03
    case 0xC45D54: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:13 STA @LOCAL03
    // Overlapping static entry reached from 0xC45D51.
    case 0xC45D55: cpu.execute_instruction<0x13>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4810E.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC45D56: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4810E.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45D55.
    case 0xC45D57: cpu.execute_instruction<0x23>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4810E.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC45D58: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4810E.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45D57.
    case 0xC45D59: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4810E.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC45D5A: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4810E.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC45D5C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4810E.asm:15 LOADPTR BUFFER, @VIRTUAL06
    case 0xC45D5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4810E.asm:15 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC45D5E.
    case 0xC45D60: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4810E.asm:15 LOADPTR BUFFER, @VIRTUAL06
    case 0xC45D61: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4810E.asm:15 LOADPTR BUFFER, @VIRTUAL06
    case 0xC45D63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4810E.asm:15 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC45D63.
    case 0xC45D65: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4810E.asm:15 LOADPTR BUFFER, @VIRTUAL06
    case 0xC45D66: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4810E.asm:16 LDA @LOCAL03
    case 0xC45D68: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:17 AND #$000F
    case 0xC45D6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C4/C4810E.asm:17 AND #$000F
    // Overlapping static entry reached from 0xC45D6A.
    case 0xC45D6C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4810E.asm:18 STA @VIRTUAL02
    case 0xC45D6D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:19 LDA @LOCAL03
    case 0xC45D6F: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:20 AND #$FFF0
    case 0xC45D71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/unknown/C4/C4810E.asm:20 AND #$FFF0
    // Overlapping static entry reached from 0xC45D71.
    case 0xC45D73: cpu.execute_instruction<0xFF>(0x65180A, 4); return true;
    // src/unknown/C4/C4810E.asm:21 ASL
    case 0xC45D74: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:22 CLC
    case 0xC45D75: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:23 ADC @VIRTUAL02
    case 0xC45D76: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:23 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC45D73.
    case 0xC45D77: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:24 ASL
    case 0xC45D78: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:25 ASL
    case 0xC45D79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:26 ASL
    case 0xC45D7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:27 ASL
    case 0xC45D7B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:28 CLC
    case 0xC45D7C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:29 ADC @VIRTUAL06
    case 0xC45D7D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:30 STA @VIRTUAL06
    case 0xC45D7F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:31 LDY #6
    case 0xC45D81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C4/C4810E.asm:31 LDY #6
    // Overlapping static entry reached from 0xC45D81.
    case 0xC45D83: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4810E.asm:32 STY @LOCAL03
    case 0xC45D84: cpu.execute_instruction<0x84>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:33 JMP @UNKNOWN7
    case 0xC45D86: cpu.execute_instruction<0x4C>(0x005EA3, 3); return true;
    // src/unknown/C4/C4810E.asm:35 LDX #0
    case 0xC45D89: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4810E.asm:35 LDX #0
    // Overlapping static entry reached from 0xC45D89.
    case 0xC45D8B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4810E.asm:36 STX @LOCAL02
    case 0xC45D8C: cpu.execute_instruction<0x86>(0x000011, 2); return true;
    // src/unknown/C4/C4810E.asm:37 BRA @UNKNOWN2
    case 0xC45D8E: cpu.execute_instruction<0x80>(0x00006F, 2); return true;
    // src/unknown/C4/C4810E.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC45D90: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:40 LDA [@VIRTUAL06]
    case 0xC45D92: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:41 STA @LOCAL01
    case 0xC45D94: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:42 STA @VIRTUAL00
    case 0xC45D96: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:43 LDY #1
    case 0xC45D98: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4810E.asm:43 LDY #1
    // Overlapping static entry reached from 0xC45D98.
    case 0xC45D9A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4810E.asm:44 LDA [@VIRTUAL06],Y
    case 0xC45D9B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:45 STA @VIRTUAL01
    case 0xC45D9D: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:46 LDA @LOCAL01
    case 0xC45D9F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:47 EOR @VIRTUAL01
    case 0xC45DA1: cpu.execute_instruction<0x45>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:48 AND @VIRTUAL00
    case 0xC45DA3: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC45DA5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:50 AND #$00FF
    case 0xC45DA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4810E.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC45DA7.
    case 0xC45DA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4810E.asm:51 STA @LOCAL00
    case 0xC45DAA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4810E.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC45DAC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:53 LDY #2
    case 0xC45DAE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4810E.asm:53 LDY #2
    // Overlapping static entry reached from 0xC45DAE.
    case 0xC45DB0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4810E.asm:54 LDA [@VIRTUAL06],Y
    case 0xC45DB1: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:55 STA @VIRTUAL00
    case 0xC45DB3: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:56 LDY #3
    case 0xC45DB5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C4/C4810E.asm:56 LDY #3
    // Overlapping static entry reached from 0xC45DB5.
    case 0xC45DB7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4810E.asm:57 LDA [@VIRTUAL06],Y
    case 0xC45DB8: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:58 STA @VIRTUAL01
    case 0xC45DBA: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:59 LDA @VIRTUAL00
    case 0xC45DBC: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:60 EOR @VIRTUAL01
    case 0xC45DBE: cpu.execute_instruction<0x45>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:61 AND @VIRTUAL00
    case 0xC45DC0: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC45DC2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:63 AND #$00FF
    case 0xC45DC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4810E.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC45DC4.
    case 0xC45DC6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4810E.asm:64 STA @VIRTUAL02
    case 0xC45DC7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:65 LDY @LOCAL03
    case 0xC45DC9: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:66 SEP #PROC_FLAGS::INDEX8
    case 0xC45DCB: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:67 STY @VIRTUAL00
    case 0xC45DCD: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:68 LDA @VIRTUAL02
    case 0xC45DCF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:69 JSL ASR8_UNKNOWN1
    case 0xC45DD1: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C4/C4810E.asm:70 AND #$0003
    case 0xC45DD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C4/C4810E.asm:70 AND #$0003
    // Overlapping static entry reached from 0xC45DD5.
    case 0xC45DD7: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:71 ASL
    case 0xC45DD8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:72 ASL
    case 0xC45DD9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:73 STA @VIRTUAL02
    case 0xC45DDA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:74 LDY @VIRTUAL00
    case 0xC45DDC: cpu.execute_instruction<0xA4>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:75 LDA @LOCAL00
    case 0xC45DDE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4810E.asm:76 JSL ASR8_UNKNOWN1
    case 0xC45DE0: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C4/C4810E.asm:77 AND #$0003
    case 0xC45DE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C4/C4810E.asm:77 AND #$0003
    // Overlapping static entry reached from 0xC45DE4.
    case 0xC45DE6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4810E.asm:78 CLC
    case 0xC45DE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:79 ADC @VIRTUAL02
    case 0xC45DE8: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:80 STA [@VIRTUAL0A]
    case 0xC45DEA: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:81 INC @VIRTUAL0A
    case 0xC45DEC: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:82 INC @VIRTUAL0A
    case 0xC45DEE: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:83 LDA #4
    case 0xC45DF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C4810E.asm:83 LDA #4
    // Overlapping static entry reached from 0xC45DF0.
    case 0xC45DF2: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4810E.asm:84 CLC
    case 0xC45DF3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:85 ADC @VIRTUAL06
    case 0xC45DF4: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:86 STA @VIRTUAL06
    case 0xC45DF6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:87 REP #PROC_FLAGS::INDEX8
    case 0xC45DF8: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:88 LDX @LOCAL02
    case 0xC45DFA: cpu.execute_instruction<0xA6>(0x000011, 2); return true;
    // src/unknown/C4/C4810E.asm:89 INX
    case 0xC45DFC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:90 STX @LOCAL02
    case 0xC45DFD: cpu.execute_instruction<0x86>(0x000011, 2); return true;
    // src/unknown/C4/C4810E.asm:92 CPX #4
    case 0xC45DFF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C4/C4810E.asm:92 CPX #4
    // Overlapping static entry reached from 0xC45DFF.
    case 0xC45E01: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4810E.asm:93 BCCL @UNKNOWN1
    case 0xC45E02: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4810E.asm:93 BCCL @UNKNOWN1
    case 0xC45E04: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4810E.asm:93 BCCL @UNKNOWN1
    case 0xC45E06: cpu.execute_instruction<0x4C>(0x005D90, 3); return true;
    // src/unknown/C4/C4810E.asm:94 LDA #240
    case 0xC45E09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x0000F0, 3); return true;
    // src/unknown/C4/C4810E.asm:94 LDA #240
    // Overlapping static entry reached from 0xC45E09.
    case 0xC45E0B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4810E.asm:95 CLC
    case 0xC45E0C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:96 ADC @VIRTUAL06
    case 0xC45E0D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:97 STA @VIRTUAL06
    case 0xC45E0F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:98 LDX #0
    case 0xC45E11: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4810E.asm:98 LDX #0
    // Overlapping static entry reached from 0xC45E11.
    case 0xC45E13: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4810E.asm:99 STX @LOCAL02
    case 0xC45E14: cpu.execute_instruction<0x86>(0x000011, 2); return true;
    // src/unknown/C4/C4810E.asm:100 BRA @UNKNOWN5
    case 0xC45E16: cpu.execute_instruction<0x80>(0x00006F, 2); return true;
    // src/unknown/C4/C4810E.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC45E18: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:103 LDA [@VIRTUAL06]
    case 0xC45E1A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:104 STA @LOCAL01
    case 0xC45E1C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:105 STA @VIRTUAL00
    case 0xC45E1E: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:106 LDY #1
    case 0xC45E20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4810E.asm:106 LDY #1
    // Overlapping static entry reached from 0xC45E20.
    case 0xC45E22: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4810E.asm:107 LDA [@VIRTUAL06],Y
    case 0xC45E23: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:108 STA @VIRTUAL01
    case 0xC45E25: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:109 LDA @LOCAL01
    case 0xC45E27: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:110 EOR @VIRTUAL01
    case 0xC45E29: cpu.execute_instruction<0x45>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:111 AND @VIRTUAL00
    case 0xC45E2B: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:112 REP #PROC_FLAGS::ACCUM8
    case 0xC45E2D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:113 AND #$00FF
    case 0xC45E2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4810E.asm:113 AND #$00FF
    // Overlapping static entry reached from 0xC45E2F.
    case 0xC45E31: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4810E.asm:114 STA @LOCAL00
    case 0xC45E32: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4810E.asm:115 SEP #PROC_FLAGS::ACCUM8
    case 0xC45E34: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:116 LDY #2
    case 0xC45E36: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4810E.asm:116 LDY #2
    // Overlapping static entry reached from 0xC45E36.
    case 0xC45E38: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4810E.asm:117 LDA [@VIRTUAL06],Y
    case 0xC45E39: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:118 STA @VIRTUAL00
    case 0xC45E3B: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:119 LDY #3
    case 0xC45E3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C4/C4810E.asm:119 LDY #3
    // Overlapping static entry reached from 0xC45E3D.
    case 0xC45E3F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4810E.asm:120 LDA [@VIRTUAL06],Y
    case 0xC45E40: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:121 STA @VIRTUAL01
    case 0xC45E42: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:122 LDA @VIRTUAL00
    case 0xC45E44: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:123 EOR @VIRTUAL01
    case 0xC45E46: cpu.execute_instruction<0x45>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:124 AND @VIRTUAL00
    case 0xC45E48: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:125 REP #PROC_FLAGS::ACCUM8
    case 0xC45E4A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:126 AND #$00FF
    case 0xC45E4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4810E.asm:126 AND #$00FF
    // Overlapping static entry reached from 0xC45E4C.
    case 0xC45E4E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4810E.asm:127 STA @VIRTUAL02
    case 0xC45E4F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:128 LDY @LOCAL03
    case 0xC45E51: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:129 SEP #PROC_FLAGS::INDEX8
    case 0xC45E53: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:130 STY @VIRTUAL00
    case 0xC45E55: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:131 LDA @VIRTUAL02
    case 0xC45E57: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:132 JSL ASR8_UNKNOWN1
    case 0xC45E59: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C4/C4810E.asm:133 AND #$0003
    case 0xC45E5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C4/C4810E.asm:133 AND #$0003
    // Overlapping static entry reached from 0xC45E5D.
    case 0xC45E5F: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:134 ASL
    case 0xC45E60: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:135 ASL
    case 0xC45E61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:136 STA @VIRTUAL02
    case 0xC45E62: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:137 LDY @VIRTUAL00
    case 0xC45E64: cpu.execute_instruction<0xA4>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:138 LDA @LOCAL00
    case 0xC45E66: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4810E.asm:139 JSL ASR8_UNKNOWN1
    case 0xC45E68: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C4/C4810E.asm:140 AND #$0003
    case 0xC45E6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C4/C4810E.asm:140 AND #$0003
    // Overlapping static entry reached from 0xC45E6C.
    case 0xC45E6E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4810E.asm:141 CLC
    case 0xC45E6F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:142 ADC @VIRTUAL02
    case 0xC45E70: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:143 STA [@VIRTUAL0A]
    case 0xC45E72: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:144 INC @VIRTUAL0A
    case 0xC45E74: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:145 INC @VIRTUAL0A
    case 0xC45E76: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:146 LDA #4
    case 0xC45E78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C4810E.asm:146 LDA #4
    // Overlapping static entry reached from 0xC45E78.
    case 0xC45E7A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4810E.asm:147 CLC
    case 0xC45E7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:148 ADC @VIRTUAL06
    case 0xC45E7C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:149 STA @VIRTUAL06
    case 0xC45E7E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:150 REP #PROC_FLAGS::INDEX8
    case 0xC45E80: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:151 LDX @LOCAL02
    case 0xC45E82: cpu.execute_instruction<0xA6>(0x000011, 2); return true;
    // src/unknown/C4/C4810E.asm:152 INX
    case 0xC45E84: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:153 STX @LOCAL02
    case 0xC45E85: cpu.execute_instruction<0x86>(0x000011, 2); return true;
    // src/unknown/C4/C4810E.asm:155 CPX #4
    case 0xC45E87: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C4/C4810E.asm:155 CPX #4
    // Overlapping static entry reached from 0xC45E87.
    case 0xC45E89: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4810E.asm:156 BCCL @UNKNOWN4
    case 0xC45E8A: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4810E.asm:156 BCCL @UNKNOWN4
    case 0xC45E8C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4810E.asm:156 BCCL @UNKNOWN4
    case 0xC45E8E: cpu.execute_instruction<0x4C>(0x005E18, 3); return true;
    // src/unknown/C4/C4810E.asm:157 LDA #272
    case 0xC45E91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000110, 3); return true;
    // src/unknown/C4/C4810E.asm:157 LDA #272
    // Overlapping static entry reached from 0xC45E91.
    case 0xC45E93: cpu.execute_instruction<0x01>(0x000049, 2); return true;
    // src/unknown/C4/C4810E.asm:158 EOR #$FFFF
    case 0xC45E94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4810E.asm:158 EOR #$FFFF
    // Overlapping static entry reached from 0xC45E93.
    case 0xC45E95: cpu.execute_instruction<0xFF>(0x181AFF, 4); return true;
    // src/unknown/C4/C4810E.asm:158 EOR #$FFFF
    // Overlapping static entry reached from 0xC45E94.
    case 0xC45E96: cpu.execute_instruction<0xFF>(0x65181A, 4); return true;
    // src/unknown/C4/C4810E.asm:159 INC
    case 0xC45E97: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:160 CLC
    case 0xC45E98: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:161 ADC @VIRTUAL06
    case 0xC45E99: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:161 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC45E96.
    case 0xC45E9A: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // src/unknown/C4/C4810E.asm:162 STA @VIRTUAL06
    case 0xC45E9B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:162 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC45E9A.
    case 0xC45E9C: cpu.execute_instruction<0x06>(0x0000A4, 2); return true;
    // src/unknown/C4/C4810E.asm:163 LDY @LOCAL03
    case 0xC45E9D: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:163 LDY @LOCAL03
    // Overlapping static entry reached from 0xC45E9C.
    case 0xC45E9E: cpu.execute_instruction<0x13>(0x000088, 2); return true;
    // src/unknown/C4/C4810E.asm:164 DEY
    case 0xC45E9F: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:165 DEY
    case 0xC45EA0: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:166 STY @LOCAL03
    case 0xC45EA1: cpu.execute_instruction<0x84>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:168 CPY #7
    case 0xC45EA3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000007, 2); else cpu.execute_instruction<0xC0>(0x000007, 3); return true;
    // src/unknown/C4/C4810E.asm:168 CPY #7
    // Overlapping static entry reached from 0xC45EA3.
    case 0xC45EA5: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4810E.asm:169 BCCL @UNKNOWN0
    case 0xC45EA6: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4810E.asm:169 BCCL @UNKNOWN0
    case 0xC45EA8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4810E.asm:169 BCCL @UNKNOWN0
    case 0xC45EAA: cpu.execute_instruction<0x4C>(0x005D89, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4810E.asm:170 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC45EAD: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4810E.asm:170 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC45EAF: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4810E.asm:170 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC45EB1: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4810E.asm:170 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC45EB3: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4810E.asm:171 END_C_FUNCTION
    case 0xC45EB5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4810E.asm:171 END_C_FUNCTION
    case 0xC45EB6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4880C-jp.asm (unresolved).
bool execute_unresolved_c4_c4880c_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4880C-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45EB7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4880C-jp.asm:13 END_STACK_VARS
    case 0xC45EB9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4880C-jp.asm:13 END_STACK_VARS
    case 0xC45EBA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4880C-jp.asm:13 END_STACK_VARS
    case 0xC45EBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DA, 2); else cpu.execute_instruction<0x69>(0x00FFDA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4880C-jp.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC45EBB.
    case 0xC45EBD: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4880C-jp.asm:13 END_STACK_VARS
    case 0xC45EBE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:14 LDY #0
    case 0xC45EBF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:14 LDY #0
    // Overlapping static entry reached from 0xC45EBF.
    case 0xC45EC1: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:15 STY @LOCAL07
    case 0xC45EC2: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:16 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC45EC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:16 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC45EC4.
    case 0xC45EC6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4880C-jp.asm:16 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC45EC7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:16 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC45EC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:16 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC45EC9.
    case 0xC45ECB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:16 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC45ECC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:17 LOADPTR BUFFER, @LOCAL01
    case 0xC45ECE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:17 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC45ECE.
    case 0xC45ED0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4880C-jp.asm:17 LOADPTR BUFFER, @LOCAL01
    case 0xC45ED1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:17 LOADPTR BUFFER, @LOCAL01
    case 0xC45ED3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:17 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC45ED3.
    case 0xC45ED5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:17 LOADPTR BUFFER, @LOCAL01
    case 0xC45ED6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:18 JSL DECOMP
    case 0xC45ED8: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:19 LOADPTR BUFFER + $4000, @VIRTUAL0A
    case 0xC45EDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:19 LOADPTR BUFFER + $4000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45EDC.
    case 0xC45EDE: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4880C-jp.asm:19 LOADPTR BUFFER + $4000, @VIRTUAL0A
    case 0xC45EDF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:19 LOADPTR BUFFER + $4000, @VIRTUAL0A
    case 0xC45EE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:19 LOADPTR BUFFER + $4000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45EE1.
    case 0xC45EE3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:19 LOADPTR BUFFER + $4000, @VIRTUAL0A
    case 0xC45EE4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:20 LDX #0
    case 0xC45EE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:20 LDX #0
    // Overlapping static entry reached from 0xC45EE6.
    case 0xC45EE8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:21 BRA @UNKNOWN3
    case 0xC45EE9: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:23 LDA #0
    case 0xC45EEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:23 LDA #0
    // Overlapping static entry reached from 0xC45EEB.
    case 0xC45EED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:24 STA @LOCAL06
    case 0xC45EEE: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:25 BRA @UNKNOWN2
    case 0xC45EF0: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:27 LDA #0
    case 0xC45EF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:27 LDA #0
    // Overlapping static entry reached from 0xC45EF2.
    case 0xC45EF4: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:28 STA [@VIRTUAL0A]
    case 0xC45EF5: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:29 INC @VIRTUAL0A
    case 0xC45EF7: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:30 INC @VIRTUAL0A
    case 0xC45EF9: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:31 LDA @LOCAL06
    case 0xC45EFB: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:32 INC
    case 0xC45EFD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:33 STA @LOCAL06
    case 0xC45EFE: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:35 CMP #8
    case 0xC45F00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:35 CMP #8
    // Overlapping static entry reached from 0xC45F00.
    case 0xC45F02: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:36 BCC @UNKNOWN1
    case 0xC45F03: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:37 INX
    case 0xC45F05: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:39 CPX #29
    case 0xC45F06: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001D, 2); else cpu.execute_instruction<0xE0>(0x00001D, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:39 CPX #29
    // Overlapping static entry reached from 0xC45F06.
    case 0xC45F08: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:40 BCC @UNKNOWN0
    case 0xC45F09: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:41 LDY @LOCAL07
    case 0xC45F0B: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:42 TYA
    case 0xC45F0D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:43 CLC
    case 0xC45F0E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:44 ADC #30
    case 0xC45F0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00001E, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:44 ADC #30
    // Overlapping static entry reached from 0xC45F0F.
    case 0xC45F11: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:45 TAY
    case 0xC45F12: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:46 STY @LOCAL07
    case 0xC45F13: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:47 LDX #0
    case 0xC45F15: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:47 LDX #0
    // Overlapping static entry reached from 0xC45F15.
    case 0xC45F17: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:48 STX @LOCAL05
    case 0xC45F18: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:49 BRA @UNKNOWN5
    case 0xC45F1A: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C-jp.asm:51 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45F1C: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:51 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45F1E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:51 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45F20: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:51 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45F22: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:52 LDA f:LUMINE_HALL_TEXT,X
    case 0xC45F24: cpu.execute_instruction<0xBF>(0xC45CE6, 4); return true;
    // src/unknown/C4/C4880C-jp.asm:53 AND #$00FF
    case 0xC45F28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC45F28.
    case 0xC45F2A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:54 JSL UNKNOWN_C4810E
    case 0xC45F2B: cpu.execute_instruction<0x22>(0xC45D4A, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C-jp.asm:55 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC45F2F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:55 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC45F31: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:55 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC45F33: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:55 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC45F35: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:56 LDY @LOCAL07
    case 0xC45F37: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:57 INY
    case 0xC45F39: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:58 INY
    case 0xC45F3A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:59 INY
    case 0xC45F3B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:60 INY
    case 0xC45F3C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:61 STY @LOCAL07
    case 0xC45F3D: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:62 LDX @LOCAL05
    case 0xC45F3F: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:63 INX
    case 0xC45F41: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:64 STX @LOCAL05
    case 0xC45F42: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:66 CPX #3
    case 0xC45F44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:66 CPX #3
    // Overlapping static entry reached from 0xC45F44.
    case 0xC45F46: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:67 BCC @UNKNOWN4
    case 0xC45F47: cpu.execute_instruction<0x90>(0x0000D3, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:68 LDX #4
    case 0xC45F49: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:68 LDX #4
    // Overlapping static entry reached from 0xC45F49.
    case 0xC45F4B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:69 STX @LOCAL05
    case 0xC45F4C: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:70 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC45F4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x009C7F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:70 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    // Overlapping static entry reached from 0xC45F4E.
    case 0xC45F50: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:70 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC45F51: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4880C-jp.asm:70 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC45F53: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4880C-jp.asm:70 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC45F54: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4880C-jp.asm:70 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC45F56: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:70 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC45F57: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4880C-jp.asm:70 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC45F59: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC45F5B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C-jp.asm:72 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC45F5D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:72 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC45F5F: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:72 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC45F61: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:72 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC45F63: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:73 BRA @UNKNOWN8
    case 0xC45F65: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:75 DEX
    case 0xC45F67: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:76 STX @LOCAL05
    case 0xC45F68: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:77 AND #$00FF
    case 0xC45F6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC45F6A.
    case 0xC45F6C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:78 STA @LOCAL03
    case 0xC45F6D: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:79 INC @VIRTUAL06
    case 0xC45F6F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C-jp.asm:80 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC45F71: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:80 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC45F73: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:80 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC45F75: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:80 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC45F77: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C-jp.asm:81 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45F79: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:81 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45F7B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:81 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45F7D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:81 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45F7F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:82 LDA @LOCAL03
    case 0xC45F81: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:83 JSL UNKNOWN_C4810E
    case 0xC45F83: cpu.execute_instruction<0x22>(0xC45D4A, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C-jp.asm:84 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC45F87: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:84 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC45F89: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:84 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC45F8B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:84 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC45F8D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:85 LDY @LOCAL07
    case 0xC45F8F: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:86 INY
    case 0xC45F91: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:87 INY
    case 0xC45F92: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:88 INY
    case 0xC45F93: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:89 INY
    case 0xC45F94: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:90 STY @LOCAL07
    case 0xC45F95: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C-jp.asm:92 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC45F97: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:92 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC45F99: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:92 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC45F9B: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:92 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC45F9D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:93 LDA [@VIRTUAL06]
    case 0xC45F9F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:94 AND #$00FF
    case 0xC45FA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC45FA1.
    case 0xC45FA3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:95 BEQ @UNKNOWN9
    case 0xC45FA4: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:96 LDX @LOCAL05
    case 0xC45FA6: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:97 BNE @UNKNOWN7
    case 0xC45FA8: cpu.execute_instruction<0xD0>(0x0000BD, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:99 LDX #0
    case 0xC45FAA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:99 LDX #0
    // Overlapping static entry reached from 0xC45FAA.
    case 0xC45FAC: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:100 STX @LOCAL05
    case 0xC45FAD: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:101 BRA @UNKNOWN10
    case 0xC45FAF: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C-jp.asm:103 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45FB1: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:103 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45FB3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:103 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45FB5: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:103 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC45FB7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:104 LDA f:LUMINE_HALL_TEXT+3,X
    case 0xC45FB9: cpu.execute_instruction<0xBF>(0xC45CE9, 4); return true;
    // src/unknown/C4/C4880C-jp.asm:105 AND #$00FF
    case 0xC45FBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC45FBD.
    case 0xC45FBF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:106 JSL UNKNOWN_C4810E
    case 0xC45FC0: cpu.execute_instruction<0x22>(0xC45D4A, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C-jp.asm:107 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC45FC4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:107 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC45FC6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:107 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC45FC8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:107 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC45FCA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:108 LDY @LOCAL07
    case 0xC45FCC: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:109 INY
    case 0xC45FCE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:110 INY
    case 0xC45FCF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:111 INY
    case 0xC45FD0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:112 INY
    case 0xC45FD1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:113 STY @LOCAL07
    case 0xC45FD2: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:114 LDX @LOCAL05
    case 0xC45FD4: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:115 INX
    case 0xC45FD6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:116 STX @LOCAL05
    case 0xC45FD7: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:118 CPX #97
    case 0xC45FD9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000061, 2); else cpu.execute_instruction<0xE0>(0x000061, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:118 CPX #97
    // Overlapping static entry reached from 0xC45FD9.
    case 0xC45FDB: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:119 BCC @UNKNOWN9_
    case 0xC45FDC: cpu.execute_instruction<0x90>(0x0000D3, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:120 LDX #0
    case 0xC45FDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:120 LDX #0
    // Overlapping static entry reached from 0xC45FDE.
    case 0xC45FE0: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:121 BRA @UNKNOWN16
    case 0xC45FE1: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:125 LDA #0
    case 0xC45FE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:125 LDA #0
    // Overlapping static entry reached from 0xC45FE3.
    case 0xC45FE5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:126 STA @LOCAL06
    case 0xC45FE6: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:127 BRA @UNKNOWN15
    case 0xC45FE8: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:129 LDA #0
    case 0xC45FEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:129 LDA #0
    // Overlapping static entry reached from 0xC45FEA.
    case 0xC45FEC: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:130 STA [@VIRTUAL0A]
    case 0xC45FED: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:131 INC @VIRTUAL0A
    case 0xC45FEF: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:132 INC @VIRTUAL0A
    case 0xC45FF1: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:133 LDA @LOCAL06
    case 0xC45FF3: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:134 INC
    case 0xC45FF5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:135 STA @LOCAL06
    case 0xC45FF6: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:137 CMP #8
    case 0xC45FF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:137 CMP #8
    // Overlapping static entry reached from 0xC45FF8.
    case 0xC45FFA: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:138 BCC @UNKNOWN14
    case 0xC45FFB: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:139 INX
    case 0xC45FFD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:141 CPX #30
    case 0xC45FFE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:141 CPX #30
    // Overlapping static entry reached from 0xC45FFE.
    case 0xC46000: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:142 BCC @UNKNOWN13
    case 0xC46001: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:143 LOADPTR BUFFER + $2000, @VIRTUAL0A
    case 0xC46003: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:143 LOADPTR BUFFER + $2000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC46003.
    case 0xC46005: cpu.execute_instruction<0x20>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4880C-jp.asm:143 LOADPTR BUFFER + $2000, @VIRTUAL0A
    case 0xC46006: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:143 LOADPTR BUFFER + $2000, @VIRTUAL0A
    case 0xC46008: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:143 LOADPTR BUFFER + $2000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC46008.
    case 0xC4600A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:143 LOADPTR BUFFER + $2000, @VIRTUAL0A
    case 0xC4600B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:144 LOADPTR BUFFER + $4000, @LOCAL02
    case 0xC4600D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:144 LOADPTR BUFFER + $4000, @LOCAL02
    // Overlapping static entry reached from 0xC4600D.
    case 0xC4600F: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4880C-jp.asm:144 LOADPTR BUFFER + $4000, @LOCAL02
    case 0xC46010: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:144 LOADPTR BUFFER + $4000, @LOCAL02
    case 0xC46012: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C-jp.asm:144 LOADPTR BUFFER + $4000, @LOCAL02
    // Overlapping static entry reached from 0xC46012.
    case 0xC46014: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:144 LOADPTR BUFFER + $4000, @LOCAL02
    case 0xC46015: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:145 LDA #0
    case 0xC46017: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:145 LDA #0
    // Overlapping static entry reached from 0xC46017.
    case 0xC46019: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:146 STA @LOCAL06
    case 0xC4601A: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:147 BRA @UNKNOWN18
    case 0xC4601C: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:149 LDA #$0C10
    case 0xC4601E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000C10, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:149 LDA #$0C10
    // Overlapping static entry reached from 0xC4601E.
    case 0xC46020: cpu.execute_instruction<0x0C>(0x000A87, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:150 STA [@VIRTUAL0A]
    case 0xC46021: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:151 INC @VIRTUAL0A
    case 0xC46023: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:152 INC @VIRTUAL0A
    case 0xC46025: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:153 LDA @LOCAL06
    case 0xC46027: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:154 INC
    case 0xC46029: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:155 STA @LOCAL06
    case 0xC4602A: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:155 STA @LOCAL06
    // Overlapping static entry reached from 0xC45426.
    case 0xC4602B: cpu.execute_instruction<0x22>(0x0008C9, 4); return true;
    // src/unknown/C4/C4880C-jp.asm:157 CMP #8
    case 0xC4602C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:157 CMP #8
    // Overlapping static entry reached from 0xC4602C.
    case 0xC4602E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:158 BCC @UNKNOWN17
    case 0xC4602F: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:159 LDA #0
    case 0xC46031: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:159 LDA #0
    // Overlapping static entry reached from 0xC46031.
    case 0xC46033: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:160 STA @LOCAL06
    case 0xC46034: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:161 BRA @UNKNOWN22
    case 0xC46036: cpu.execute_instruction<0x80>(0x00005F, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:163 LDX #0
    case 0xC46038: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:163 LDX #0
    // Overlapping static entry reached from 0xC46038.
    case 0xC4603A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:164 BRA @UNKNOWN21
    case 0xC4603B: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:166 LDY #16
    case 0xC4603D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:166 LDY #16
    // Overlapping static entry reached from 0xC4603D.
    case 0xC4603F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:167 LDA [@LOCAL02],Y
    case 0xC46040: cpu.execute_instruction<0xB7>(0x000016, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:168 LSR
    case 0xC46042: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:169 AND #$0005
    case 0xC46043: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000005, 2); else cpu.execute_instruction<0x29>(0x000005, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:169 AND #$0005
    // Overlapping static entry reached from 0xC46043.
    case 0xC46045: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:170 STA @VIRTUAL04
    case 0xC46046: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:171 LDA [@LOCAL02]
    case 0xC46048: cpu.execute_instruction<0xA7>(0x000016, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:172 ASL
    case 0xC4604A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:173 AND #$000A
    case 0xC4604B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000A, 2); else cpu.execute_instruction<0x29>(0x00000A, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:173 AND #$000A
    // Overlapping static entry reached from 0xC4604B.
    case 0xC4604D: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:174 ORA @VIRTUAL04
    case 0xC4604E: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:175 STA @VIRTUAL02
    case 0xC46050: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:176 STA [@VIRTUAL0A]
    case 0xC46052: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C-jp.asm:177 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC46054: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:177 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC46056: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:177 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC46058: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:177 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4605A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:178 LDA @VIRTUAL02
    case 0xC4605C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:179 CLC
    case 0xC4605E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:180 ADC #$0C10
    case 0xC4605F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000C10, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:180 ADC #$0C10
    // Overlapping static entry reached from 0xC4605F.
    case 0xC46061: cpu.execute_instruction<0x0C>(0x000687, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:181 STA [@VIRTUAL06]
    case 0xC46062: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C-jp.asm:182 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46064: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:182 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46066: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:182 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46068: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:182 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4606A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:183 LDA [@VIRTUAL06]
    case 0xC4606C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:184 CLC
    case 0xC4606E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:185 ADC #$0C10
    case 0xC4606F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000C10, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:185 ADC #$0C10
    // Overlapping static entry reached from 0xC4606F.
    case 0xC46071: cpu.execute_instruction<0x0C>(0x000687, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:186 STA [@VIRTUAL06]
    case 0xC46072: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:187 INC @VIRTUAL0A
    case 0xC46074: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:188 INC @VIRTUAL0A
    case 0xC46076: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C-jp.asm:189 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46078: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:189 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4607A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:189 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4607C: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:189 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4607E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:190 INC @VIRTUAL06
    case 0xC46080: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:191 INC @VIRTUAL06
    case 0xC46082: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C-jp.asm:192 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC46084: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C-jp.asm:192 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC46086: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:192 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC46088: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C-jp.asm:192 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4608A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:193 INX
    case 0xC4608C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:195 CPX #8
    case 0xC4608D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:195 CPX #8
    // Overlapping static entry reached from 0xC4608D.
    case 0xC4608F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:196 BCC @UNKNOWN20
    case 0xC46090: cpu.execute_instruction<0x90>(0x0000AB, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:197 LDA @LOCAL06
    case 0xC46092: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:198 INC
    case 0xC46094: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:199 STA @LOCAL06
    case 0xC46095: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:201 LDY @LOCAL07
    case 0xC46097: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:202 TYA
    case 0xC46099: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:203 CLC
    case 0xC4609A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:204 ADC #30
    case 0xC4609B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00001E, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:204 ADC #30
    // Overlapping static entry reached from 0xC4609B.
    case 0xC4609D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:205 STA @VIRTUAL02
    case 0xC4609E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:206 LDA @LOCAL06
    case 0xC460A0: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:207 CMP @VIRTUAL02
    case 0xC460A2: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:208 BCC @UNKNOWN19
    case 0xC460A4: cpu.execute_instruction<0x90>(0x000092, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:209 LDA CURRENT_ENTITY_SLOT
    case 0xC460A6: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:210 ASL
    case 0xC460A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:211 TAX
    case 0xC460AA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:212 TYA
    case 0xC460AB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:213 ASL
    case 0xC460AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C-jp.asm:214 STA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC460AD: cpu.execute_instruction<0x9D>(0x000E54, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:215 SEP #PROC_FLAGS::ACCUM8
    case 0xC460B0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:216 LDA #8
    case 0xC460B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x008F08, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:217 STA BUFFER
    case 0xC460B4: cpu.execute_instruction<0x8F>(0x7F0000, 4); return true;
    // src/unknown/C4/C4880C-jp.asm:217 STA BUFFER
    // Overlapping static entry reached from 0xC460B2.
    case 0xC460B5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:218 LDA #30
    case 0xC460B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008F1E, 3); return true;
    // src/unknown/C4/C4880C-jp.asm:219 STA BUFFER+1
    case 0xC460BA: cpu.execute_instruction<0x8F>(0x7F0001, 4); return true;
    // src/unknown/C4/C4880C-jp.asm:219 STA BUFFER+1
    // Overlapping static entry reached from 0xC460B8.
    case 0xC460BB: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C4/C4880C-jp.asm:219 STA BUFFER+1
    // Overlapping static entry reached from 0xC460BB.
    case 0xC460BD: cpu.execute_instruction<0x7F>(0x2B20C2, 4); return true;
    // src/unknown/C4/C4880C-jp.asm:220 REP #PROC_FLAGS::ACCUM8
    case 0xC460BE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4880C-jp.asm:221 END_C_FUNCTION
    case 0xC460C0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4880C-jp.asm:221 END_C_FUNCTION
    case 0xC460C1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48A6D-jp.asm (unresolved).
bool execute_unresolved_c4_c48a6d_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC460C2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:8 END_STACK_VARS
    case 0xC460C4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:8 END_STACK_VARS
    case 0xC460C5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:8 END_STACK_VARS
    case 0xC460C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC460C6.
    case 0xC460C8: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:8 END_STACK_VARS
    case 0xC460C9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC460CA: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:9 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC460C8.
    case 0xC460CC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:10 STA @VIRTUAL02
    case 0xC460CD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:11 ASL
    case 0xC460CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:12 TAX
    case 0xC460D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:13 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC460D1: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:14 STA @LOCAL01
    case 0xC460D4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:15 LSR
    case 0xC460D6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:16 ASL
    case 0xC460D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:17 ASL
    case 0xC460D8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:18 ASL
    case 0xC460D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:19 ASL
    case 0xC460DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:20 STORE_INT1632 @VIRTUAL06
    case 0xC460DB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:20 STORE_INT1632 @VIRTUAL06
    case 0xC460DD: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:21 CLC
    case 0xC460DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:22 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL06
    case 0xC460E0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:22 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL06
    case 0xC460E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:22 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL06
    // Overlapping static entry reached from 0xC460E2.
    case 0xC460E4: cpu.execute_instruction<0x20>(0x000685, 3); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:22 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL06
    case 0xC460E5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:22 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL06
    case 0xC460E7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:22 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL06
    case 0xC460E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:22 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL06
    // Overlapping static entry reached from 0xC460E9.
    case 0xC460EB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:22 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL06
    case 0xC460EC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:23 LDA @LOCAL01
    case 0xC460EE: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:24 AND #$0001
    case 0xC460F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:24 AND #$0001
    // Overlapping static entry reached from 0xC460F0.
    case 0xC460F2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:25 BEQ @UNKNOWN1
    case 0xC460F3: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:26 LDA #$2000
    case 0xC460F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002000, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:26 LDA #$2000
    // Overlapping static entry reached from 0xC460F5.
    case 0xC460F7: cpu.execute_instruction<0x20>(0x006518, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:27 CLC
    case 0xC460F8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:28 ADC @VIRTUAL06
    case 0xC460F9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:28 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC460F7.
    case 0xC460FA: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:29 STA @VIRTUAL06
    case 0xC460FB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:29 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC460FA.
    case 0xC460FC: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:31 LOADPTR BUFFER+2, @VIRTUAL0A
    case 0xC460FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:31 LOADPTR BUFFER+2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC460FC.
    case 0xC460FE: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:31 LOADPTR BUFFER+2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC460FD.
    case 0xC460FF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:31 LOADPTR BUFFER+2, @VIRTUAL0A
    case 0xC46100: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:31 LOADPTR BUFFER+2, @VIRTUAL0A
    case 0xC46102: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:31 LOADPTR BUFFER+2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC46102.
    case 0xC46104: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:31 LOADPTR BUFFER+2, @VIRTUAL0A
    case 0xC46105: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:32 LDY #0
    case 0xC46107: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:32 LDY #0
    // Overlapping static entry reached from 0xC46107.
    case 0xC46109: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:33 BRA @UNKNOWN5
    case 0xC4610A: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:35 LDX #0
    case 0xC4610C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:35 LDX #0
    // Overlapping static entry reached from 0xC4610C.
    case 0xC4610E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:36 BRA @UNKNOWN4
    case 0xC4610F: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:38 LDA [@VIRTUAL06]
    case 0xC46111: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:39 STA [@VIRTUAL0A]
    case 0xC46113: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:40 INC @VIRTUAL0A
    case 0xC46115: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:41 INC @VIRTUAL0A
    case 0xC46117: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:42 LDA #16
    case 0xC46119: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:42 LDA #16
    // Overlapping static entry reached from 0xC46119.
    case 0xC4611B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:43 CLC
    case 0xC4611C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:44 ADC @VIRTUAL06
    case 0xC4611D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:45 STA @VIRTUAL06
    case 0xC4611F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:46 INX
    case 0xC46121: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:48 CPX #30
    case 0xC46122: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:48 CPX #30
    // Overlapping static entry reached from 0xC46122.
    case 0xC46124: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:49 BCC @UNKNOWN3
    case 0xC46125: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:50 LDA #478
    case 0xC46127: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DE, 2); else cpu.execute_instruction<0xA9>(0x0001DE, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:50 LDA #478
    // Overlapping static entry reached from 0xC46127.
    case 0xC46129: cpu.execute_instruction<0x01>(0x000049, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:51 EOR #$FFFF
    case 0xC4612A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:51 EOR #$FFFF
    // Overlapping static entry reached from 0xC46129.
    case 0xC4612B: cpu.execute_instruction<0xFF>(0x181AFF, 4); return true;
    // src/unknown/C4/C48A6D-jp.asm:51 EOR #$FFFF
    // Overlapping static entry reached from 0xC4612A.
    case 0xC4612C: cpu.execute_instruction<0xFF>(0x65181A, 4); return true;
    // src/unknown/C4/C48A6D-jp.asm:52 INC
    case 0xC4612D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:53 CLC
    case 0xC4612E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:54 ADC @VIRTUAL06
    case 0xC4612F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:54 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC4612C.
    case 0xC46130: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:55 STA @VIRTUAL06
    case 0xC46131: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:55 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC46130.
    case 0xC46132: cpu.execute_instruction<0x06>(0x0000C8, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:56 INY
    case 0xC46133: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:58 CPY #8
    case 0xC46134: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:58 CPY #8
    // Overlapping static entry reached from 0xC46134.
    case 0xC46136: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:59 BCC @UNKNOWN2
    case 0xC46137: cpu.execute_instruction<0x90>(0x0000D3, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:60 LOADPTR BUFFER, @LOCAL00
    case 0xC46139: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:60 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC46139.
    case 0xC4613B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:60 LOADPTR BUFFER, @LOCAL00
    case 0xC4613C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:60 LOADPTR BUFFER, @LOCAL00
    case 0xC4613E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:60 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC4613E.
    case 0xC46140: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:60 LOADPTR BUFFER, @LOCAL00
    case 0xC46141: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:61 LDX #588
    case 0xC46143: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004C, 2); else cpu.execute_instruction<0xA2>(0x00024C, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:61 LDX #588
    // Overlapping static entry reached from 0xC46143.
    case 0xC46145: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:62 LDA #808
    case 0xC46146: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000328, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:62 LDA #808
    // Overlapping static entry reached from 0xC46146.
    case 0xC46148: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:63 JSL UNKNOWN_C3F705
    case 0xC46149: cpu.execute_instruction<0x22>(0xC3F24A, 4); return true;
    // src/unknown/C4/C48A6D-jp.asm:63 JSL UNKNOWN_C3F705
    // Overlapping static entry reached from 0xC46148.
    case 0xC4614A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:63 JSL UNKNOWN_C3F705
    // Overlapping static entry reached from 0xC4614A.
    case 0xC4614B: cpu.execute_instruction<0xF2>(0x0000C3, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:64 LDA @VIRTUAL02
    case 0xC4614D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:65 ASL
    case 0xC4614F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:66 TAY
    case 0xC46150: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:67 CLC
    case 0xC46151: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:68 ADC #.LOWORD(ENTITY_SCRIPT_VAR1_TABLE)
    case 0xC46152: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000090, 2); else cpu.execute_instruction<0x69>(0x000E90, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:68 ADC #.LOWORD(ENTITY_SCRIPT_VAR1_TABLE)
    // Overlapping static entry reached from 0xC46152.
    case 0xC46154: cpu.execute_instruction<0x0E>(0x00BDAA, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:69 TAX
    case 0xC46155: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:70 LDA __BSS_START__,X
    case 0xC46156: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:70 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC46154.
    case 0xC46157: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:71 INC
    case 0xC46159: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D-jp.asm:72 STA __BSS_START__,X
    case 0xC4615A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:73 LDX #0
    case 0xC4615D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:73 LDX #0
    // Overlapping static entry reached from 0xC4615D.
    case 0xC4615F: cpu.execute_instruction<0x00>(0x0000D9, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:74 CMP ENTITY_SCRIPT_VAR0_TABLE,Y
    case 0xC46160: cpu.execute_instruction<0xD9>(0x000E54, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:75 BLTEQ @UNKNOWN6
    case 0xC46163: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:75 BLTEQ @UNKNOWN6
    case 0xC46165: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:76 LDX #1
    case 0xC46167: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C48A6D-jp.asm:76 LDX #1
    // Overlapping static entry reached from 0xC46167.
    case 0xC46169: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C48A6D-jp.asm:78 TXA
    case 0xC4616A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:79 END_C_FUNCTION
    case 0xC4616B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48A6D-jp.asm:79 END_C_FUNCTION
    case 0xC4616C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48B2C.asm (unresolved).
bool execute_unresolved_c4_c48b2c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48B2C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4616D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C48B2C.asm:5 LDA #5
    case 0xC4616F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C4/C48B2C.asm:5 LDA #5
    // Overlapping static entry reached from 0xC4616F.
    case 0xC46171: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C48B2C.asm:6 STA PSI_TELEPORT_STYLE
    case 0xC46172: cpu.execute_instruction<0x8D>(0x00A143, 3); return true;
    // src/unknown/C4/C48B2C.asm:7 LDA #2
    case 0xC46175: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C48B2C.asm:7 LDA #2
    // Overlapping static entry reached from 0xC46175.
    case 0xC46177: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C48B2C.asm:8 STA GAME_STATE+game_state::leader_direction
    case 0xC46178: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48B2C.asm:9 END_C_FUNCTION
    case 0xC4617B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48C69.asm (unresolved).
bool execute_unresolved_c4_c48c69_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48C69.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC462B3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C48C69.asm:6 END_STACK_VARS
    case 0xC462B5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C48C69.asm:6 END_STACK_VARS
    case 0xC462B6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48C69.asm:6 END_STACK_VARS
    case 0xC462B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48C69.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC462B7.
    case 0xC462B9: cpu.execute_instruction<0xFF>(0x1E9C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C48C69.asm:6 END_STACK_VARS
    case 0xC462BA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C48C69.asm:7 STZ AUTO_MOVEMENT_DEMO_INDEX
    case 0xC462BB: cpu.execute_instruction<0x9C>(0x00A11E, 3); return true;
    // src/unknown/C4/C48C69.asm:7 STZ AUTO_MOVEMENT_DEMO_INDEX
    // Overlapping static entry reached from 0xC462B9.
    case 0xC462BD: cpu.execute_instruction<0xA1>(0x0000A9, 2); return true;
    // src/unknown/C4/C48C69.asm:8 LDA #0
    case 0xC462BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C48C69.asm:8 LDA #0
    // Overlapping static entry reached from 0xC462BD.
    case 0xC462BF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C48C69.asm:8 LDA #0
    // Overlapping static entry reached from 0xC462BE.
    case 0xC462C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C48C69.asm:9 STA @LOCAL00
    case 0xC462C1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C48C69.asm:10 BRA @UNKNOWN1
    case 0xC462C3: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C48C69.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC462C5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C48C69.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC462C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C48C69.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC462C8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C48C69.asm:13 TAX
    case 0xC462CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48C69.asm:14 STZ AUTO_MOVEMENT_DEMO_BUFFER+1,X
    case 0xC462CB: cpu.execute_instruction<0x9E>(0x00A05F, 3); return true;
    // src/unknown/C4/C48C69.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC462CE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C48C69.asm:16 STZ AUTO_MOVEMENT_DEMO_BUFFER,X
    case 0xC462D0: cpu.execute_instruction<0x9E>(0x00A05E, 3); return true;
    // src/unknown/C4/C48C69.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC462D3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C48C69.asm:18 LDA @LOCAL00
    case 0xC462D5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C48C69.asm:19 INC
    case 0xC462D7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48C69.asm:20 STA @LOCAL00
    case 0xC462D8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C48C69.asm:22 CMP #64
    case 0xC462DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C4/C48C69.asm:22 CMP #64
    // Overlapping static entry reached from 0xC462DA.
    case 0xC462DC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C48C69.asm:23 BCC @UNKNOWN0
    case 0xC462DD: cpu.execute_instruction<0x90>(0x0000E6, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C48C69.asm:24 END_C_FUNCTION
    case 0xC462DF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48C69.asm:24 END_C_FUNCTION
    case 0xC462E0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48C97.asm (unresolved).
bool execute_unresolved_c4_c48c97_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48C97.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC462E1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C48C97.asm:8 END_STACK_VARS
    case 0xC462E3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C48C97.asm:8 END_STACK_VARS
    case 0xC462E4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C48C97.asm:8 END_STACK_VARS
    case 0xC462E5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48C97.asm:8 END_STACK_VARS
    case 0xC462E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48C97.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC462E6.
    case 0xC462E8: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C48C97.asm:8 END_STACK_VARS
    case 0xC462E9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C48C97.asm:8 END_STACK_VARS
    case 0xC462EA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:9 STA @VIRTUAL04
    case 0xC462EB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:9 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC462E8.
    case 0xC462EC: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C4/C48C97.asm:10 STA @LOCAL01
    case 0xC462ED: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C48C97.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC462EC.
    case 0xC462EE: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C4/C48C97.asm:11 LDA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC462EF: cpu.execute_instruction<0xAD>(0x00A11E, 3); return true;
    // src/unknown/C4/C48C97.asm:11 LDA AUTO_MOVEMENT_DEMO_INDEX
    // Overlapping static entry reached from 0xC462EE.
    case 0xC462F0: cpu.execute_instruction<0x1E>(0x00D0A1, 3); return true;
    // src/unknown/C4/C48C97.asm:12 BNE @UNKNOWN0
    case 0xC462F2: cpu.execute_instruction<0xD0>(0x00002A, 2); return true;
    // src/unknown/C4/C48C97.asm:12 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC462F0.
    case 0xC462F3: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:13 LDX #.LOWORD(AUTO_MOVEMENT_DEMO_BUFFER+1)
    case 0xC462F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00005F, 2); else cpu.execute_instruction<0xA2>(0x00A05F, 3); return true;
    // src/unknown/C4/C48C97.asm:13 LDX #.LOWORD(AUTO_MOVEMENT_DEMO_BUFFER+1)
    // Overlapping static entry reached from 0xC462F4.
    case 0xC462F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000086, 2); else cpu.execute_instruction<0xA0>(0x000E86, 3); return true;
    // src/unknown/C4/C48C97.asm:14 STX @LOCAL00
    case 0xC462F7: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C48C97.asm:14 STX @LOCAL00
    // Overlapping static entry reached from 0xC462F6.
    case 0xC462F8: cpu.execute_instruction<0x0E>(0x000286, 3); return true;
    // src/unknown/C4/C48C97.asm:15 STX @VIRTUAL02
    case 0xC462F9: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C48C97.asm:16 LDA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC462FB: cpu.execute_instruction<0xAD>(0x00A11E, 3); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C48C97.asm:17 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC462FE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C48C97.asm:17 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC46300: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C48C97.asm:17 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC46301: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:18 CLC
    case 0xC46303: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:19 ADC @VIRTUAL02
    case 0xC46304: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C48C97.asm:20 TAX
    case 0xC46306: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:21 LDA __BSS_START__,X
    case 0xC46307: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C48C97.asm:22 BNE @UNKNOWN0
    case 0xC4630A: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C4/C48C97.asm:23 LDA @LOCAL01
    case 0xC4630C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C48C97.asm:24 STA @VIRTUAL04
    case 0xC4630E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:25 LDX @LOCAL00
    case 0xC46310: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C48C97.asm:26 STA __BSS_START__,X
    case 0xC46312: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C48C97.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC46315: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C48C97.asm:28 LDA #1
    case 0xC46317: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C48C97.asm:29 STA AUTO_MOVEMENT_DEMO_BUFFER
    case 0xC46319: cpu.execute_instruction<0x8D>(0x00A05E, 3); return true;
    // src/unknown/C4/C48C97.asm:29 STA AUTO_MOVEMENT_DEMO_BUFFER
    // Overlapping static entry reached from 0xC46317.
    case 0xC4631A: cpu.execute_instruction<0x5E>(0x0080A0, 3); return true;
    // src/unknown/C4/C48C97.asm:30 BRA @UNKNOWN4
    case 0xC4631C: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/unknown/C4/C48C97.asm:30 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC4631A.
    case 0xC4631D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:33 LDA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC4631E: cpu.execute_instruction<0xAD>(0x00A11E, 3); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C48C97.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC46321: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C48C97.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC46323: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C48C97.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC46324: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:35 STA @LOCAL00
    case 0xC46326: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C48C97.asm:36 LDA #.LOWORD(AUTO_MOVEMENT_DEMO_BUFFER+1)
    case 0xC46328: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005F, 2); else cpu.execute_instruction<0xA9>(0x00A05F, 3); return true;
    // src/unknown/C4/C48C97.asm:36 LDA #.LOWORD(AUTO_MOVEMENT_DEMO_BUFFER+1)
    // Overlapping static entry reached from 0xC46328.
    case 0xC4632A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000085, 2); else cpu.execute_instruction<0xA0>(0x000285, 3); return true;
    // src/unknown/C4/C48C97.asm:37 STA @VIRTUAL02
    case 0xC4632B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C48C97.asm:37 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4632A.
    case 0xC4632C: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unknown/C4/C48C97.asm:38 LDA @LOCAL01
    case 0xC4632D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C48C97.asm:39 STA @VIRTUAL04
    case 0xC4632F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:40 LDA @LOCAL00
    case 0xC46331: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C48C97.asm:41 CLC
    case 0xC46333: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:42 ADC @VIRTUAL02
    case 0xC46334: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C48C97.asm:43 TAX
    case 0xC46336: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:44 LDA __BSS_START__,X
    case 0xC46337: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C48C97.asm:45 CMP @VIRTUAL04
    case 0xC4633A: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:46 BNE @UNKNOWN1
    case 0xC4633C: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C4/C48C97.asm:47 LDA @LOCAL00
    case 0xC4633E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C48C97.asm:48 CLC
    case 0xC46340: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:49 ADC #.LOWORD(AUTO_MOVEMENT_DEMO_BUFFER)
    case 0xC46341: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005E, 2); else cpu.execute_instruction<0x69>(0x00A05E, 3); return true;
    // src/unknown/C4/C48C97.asm:49 ADC #.LOWORD(AUTO_MOVEMENT_DEMO_BUFFER)
    // Overlapping static entry reached from 0xC46341.
    case 0xC46343: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AA, 2); else cpu.execute_instruction<0xA0>(0x00E2AA, 3); return true;
    // src/unknown/C4/C48C97.asm:50 TAX
    case 0xC46344: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC46345: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C48C97.asm:51 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC46343.
    case 0xC46346: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C4/C48C97.asm:52 LDA __BSS_START__,X
    case 0xC46347: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C48C97.asm:52 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC46346.
    case 0xC46349: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/C4/C48C97.asm:53 INC
    case 0xC4634A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:54 STA __BSS_START__,X
    case 0xC4634B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C48C97.asm:55 BRA @UNKNOWN4
    case 0xC4634E: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C4/C48C97.asm:57 LDA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC46350: cpu.execute_instruction<0xAD>(0x00A11E, 3); return true;
    // src/unknown/C4/C48C97.asm:58 INC
    case 0xC46353: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:59 STA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC46354: cpu.execute_instruction<0x8D>(0x00A11E, 3); return true;
    // src/unknown/C4/C48C97.asm:60 CMP #64
    case 0xC46357: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C4/C48C97.asm:61 BRK
    case 0xC46359: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C48C97.asm:62 BNE @UNKNOWN3
    case 0xC4635A: cpu.execute_instruction<0xD0>(0x000002, 2); return true;
    // src/unknown/C4/C48C97.asm:64 BRA @UNKNOWN2
    case 0xC4635C: cpu.execute_instruction<0x80>(0x0000FE, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C48C97.asm:66 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4635E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C48C97.asm:66 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC46360: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C48C97.asm:66 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC46361: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:67 CLC
    case 0xC46363: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:68 ADC @VIRTUAL02
    case 0xC46364: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C48C97.asm:69 TAX
    case 0xC46366: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:70 LDA @LOCAL01
    case 0xC46367: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C48C97.asm:71 STA @VIRTUAL04
    case 0xC46369: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:72 STA __BSS_START__,X
    case 0xC4636B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C48C97.asm:73 LDA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC4636E: cpu.execute_instruction<0xAD>(0x00A11E, 3); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C48C97.asm:74 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC46371: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C48C97.asm:74 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC46373: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C48C97.asm:74 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC46374: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:75 TAX
    case 0xC46376: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:76 SEP #PROC_FLAGS::ACCUM8
    case 0xC46377: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C48C97.asm:77 LDA #1
    case 0xC46379: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/unknown/C4/C48C97.asm:78 STA AUTO_MOVEMENT_DEMO_BUFFER,X
    case 0xC4637B: cpu.execute_instruction<0x9D>(0x00A05E, 3); return true;
    // src/unknown/C4/C48C97.asm:78 STA AUTO_MOVEMENT_DEMO_BUFFER,X
    // Overlapping static entry reached from 0xC46379.
    case 0xC4637C: cpu.execute_instruction<0x5E>(0x00C2A0, 3); return true;
    // src/unknown/C4/C48C97.asm:80 REP #PROC_FLAGS::ACCUM8
    case 0xC4637E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C48C97.asm:80 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4637C.
    case 0xC4637F: cpu.execute_instruction<0x20>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C48C97.asm:81 END_C_FUNCTION
    case 0xC46380: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48C97.asm:81 END_C_FUNCTION
    case 0xC46381: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48D58-jp.asm (unresolved).
bool execute_unresolved_c4_c48d58_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48D58-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC463A2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C48D58-jp.asm:17 END_STACK_VARS
    case 0xC463A4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C48D58-jp.asm:17 END_STACK_VARS
    case 0xC463A5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C48D58-jp.asm:17 END_STACK_VARS
    case 0xC463A6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48D58-jp.asm:17 END_STACK_VARS
    case 0xC463A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48D58-jp.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC463A7.
    case 0xC463A9: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C48D58-jp.asm:17 END_STACK_VARS
    case 0xC463AA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C48D58-jp.asm:17 END_STACK_VARS
    case 0xC463AB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:18 STY @LOCAL06
    case 0xC463AC: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:18 STY @LOCAL06
    // Overlapping static entry reached from 0xC463A9.
    case 0xC463AD: cpu.execute_instruction<0x1E>(0x000286, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:19 STX @VIRTUAL02
    case 0xC463AE: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:20 TAX
    case 0xC463B0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:21 LDY @PARAM03
    case 0xC463B1: cpu.execute_instruction<0xA4>(0x00002E, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:22 STY @LOCAL05
    case 0xC463B3: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:23 LDA #0
    case 0xC463B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:23 LDA #0
    // Overlapping static entry reached from 0xC463B5.
    case 0xC463B7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:24 STA @VIRTUAL04
    case 0xC463B8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:25 STX @LOCAL01 + fixed_point::integer
    case 0xC463BA: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:26 LDA @VIRTUAL02
    case 0xC463BC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:27 STA @LOCAL02 + fixed_point::integer
    case 0xC463BE: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:29 LDA @LOCAL01 + fixed_point::integer
    case 0xC463C0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:30 SEC
    case 0xC463C2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:31 SBC @LOCAL06
    case 0xC463C3: cpu.execute_instruction<0xE5>(0x00001E, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:32 STA @LOCAL04
    case 0xC463C5: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:33 LDA @LOCAL02 + fixed_point::integer
    case 0xC463C7: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:34 SEC
    case 0xC463C9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:35 SBC @LOCAL05
    case 0xC463CA: cpu.execute_instruction<0xE5>(0x00001C, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:36 STA @VIRTUAL02
    case 0xC463CC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:37 STA @LOCAL03
    case 0xC463CE: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:38 LDA @LOCAL04
    case 0xC463D0: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:39 STA @VIRTUAL02
    case 0xC463D2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:40 LDA #0
    case 0xC463D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:40 LDA #0
    // Overlapping static entry reached from 0xC463D4.
    case 0xC463D6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:41 CLC
    case 0xC463D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:42 SBC @VIRTUAL02
    case 0xC463D8: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C48D58-jp.asm:43 BRANCHLTEQS @UNKNOWN3
    case 0xC463DA: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:43 BRANCHLTEQS @UNKNOWN3
    case 0xC463DC: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C48D58-jp.asm:43 BRANCHLTEQS @UNKNOWN3
    case 0xC463DE: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:43 BRANCHLTEQS @UNKNOWN3
    case 0xC463E0: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:44 LDA @LOCAL04
    case 0xC463E2: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:45 EOR #$FFFF
    case 0xC463E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:45 EOR #$FFFF
    // Overlapping static entry reached from 0xC463E4.
    case 0xC463E6: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C4/C48D58-jp.asm:46 INC
    case 0xC463E7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:47 BRA @UNKNOWN4
    case 0xC463E8: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:49 LDA @LOCAL04
    case 0xC463EA: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:51 CLC
    case 0xC463EC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:52 SBC #1
    case 0xC463ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000001, 2); else cpu.execute_instruction<0xE9>(0x000001, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:52 SBC #1
    // Overlapping static entry reached from 0xC463ED.
    case 0xC463EF: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C48D58-jp.asm:53 BRANCHGTS @UNKNOWN12
    case 0xC463F0: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:53 BRANCHGTS @UNKNOWN12
    case 0xC463F2: cpu.execute_instruction<0x10>(0x000030, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C48D58-jp.asm:53 BRANCHGTS @UNKNOWN12
    case 0xC463F4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:53 BRANCHGTS @UNKNOWN12
    case 0xC463F6: cpu.execute_instruction<0x30>(0x00002C, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:54 LDA @LOCAL03
    case 0xC463F8: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:55 STA @VIRTUAL02
    case 0xC463FA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:56 LDA #0
    case 0xC463FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:56 LDA #0
    // Overlapping static entry reached from 0xC463FC.
    case 0xC463FE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:57 CLC
    case 0xC463FF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:58 SBC @VIRTUAL02
    case 0xC46400: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C48D58-jp.asm:59 BRANCHLTEQS @UNKNOWN9
    case 0xC46402: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:59 BRANCHLTEQS @UNKNOWN9
    case 0xC46404: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C48D58-jp.asm:59 BRANCHLTEQS @UNKNOWN9
    case 0xC46406: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:59 BRANCHLTEQS @UNKNOWN9
    case 0xC46408: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:60 LDA @VIRTUAL02
    case 0xC4640A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:61 EOR #$FFFF
    case 0xC4640C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:61 EOR #$FFFF
    // Overlapping static entry reached from 0xC4640C.
    case 0xC4640E: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C4/C48D58-jp.asm:62 INC
    case 0xC4640F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:63 BRA @UNKNOWN10
    case 0xC46410: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:65 LDA @VIRTUAL02
    case 0xC46412: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:67 CLC
    case 0xC46414: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:68 SBC #1
    case 0xC46415: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000001, 2); else cpu.execute_instruction<0xE9>(0x000001, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:68 SBC #1
    // Overlapping static entry reached from 0xC46415.
    case 0xC46417: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C4/C48D58-jp.asm:69 JUMPLTEQS @UNKNOWN13
    case 0xC46418: cpu.execute_instruction<0x50>(0x000005, 2); return true;
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C4/C48D58-jp.asm:69 JUMPLTEQS @UNKNOWN13
    case 0xC4641A: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:69 JUMPLTEQS @UNKNOWN13
    case 0xC4641C: cpu.execute_instruction<0x4C>(0x0064B1, 3); return true;
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C4/C48D58-jp.asm:69 JUMPLTEQS @UNKNOWN13
    case 0xC4641F: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:69 JUMPLTEQS @UNKNOWN13
    case 0xC46421: cpu.execute_instruction<0x4C>(0x0064B1, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:71 LDA @LOCAL05
    case 0xC46424: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:72 STA @LOCAL00
    case 0xC46426: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:73 LDY @LOCAL06
    case 0xC46428: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:74 LDX @LOCAL02 + fixed_point::integer
    case 0xC4642A: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:75 LDA @LOCAL01 + fixed_point::integer
    case 0xC4642C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:76 JSL UNKNOWN_C41EFF
    case 0xC4642E: cpu.execute_instruction<0x22>(0xC41E4B, 4); return true;
    // src/unknown/C4/C48D58-jp.asm:77 LDY #$2000
    case 0xC46432: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:77 LDY #$2000
    // Overlapping static entry reached from 0xC46432.
    case 0xC46434: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:78 CLC
    case 0xC46435: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:79 ADC #$1000
    case 0xC46436: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:79 ADC #$1000
    // Overlapping static entry reached from 0xC46434.
    case 0xC46437: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:79 ADC #$1000
    // Overlapping static entry reached from 0xC46436.
    case 0xC46438: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:80 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC46439: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C4/C48D58-jp.asm:80 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC46438.
    case 0xC4643A: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:81 TAX
    case 0xC4643D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:82 STX @LOCAL04
    case 0xC4643E: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:83 TXA
    case 0xC46440: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:84 ASL
    case 0xC46441: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:85 TAX
    case 0xC46442: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:86 LDA f:UNKNOWN_C48C59,X
    case 0xC46443: cpu.execute_instruction<0xBF>(0xC462A3, 4); return true;
    // src/unknown/C4/C48D58-jp.asm:87 JSL UNKNOWN_C48C97
    case 0xC46447: cpu.execute_instruction<0x22>(0xC462E1, 4); return true;
    // src/unknown/C4/C48D58-jp.asm:88 LDX @LOCAL04
    case 0xC4644B: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:89 TXA
    case 0xC4644D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:90 ASL
    case 0xC4644E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:91 ASL
    case 0xC4644F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:92 STA @LOCAL04
    case 0xC46450: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:93 CLC
    case 0xC46452: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:94 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC46453: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00515C, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:94 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC46453.
    case 0xC46455: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:95 TAY
    case 0xC46456: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C48D58-jp.asm:96 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC46457: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:96 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC4645A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C48D58-jp.asm:96 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC4645C: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:96 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC4645F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C48D58-jp.asm:97 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC46461: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:97 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC46463: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:97 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC46465: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:97 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC46467: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:98 CLC
    case 0xC46469: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C4/C48D58-jp.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4646A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4646C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4646E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC46470: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC46472: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC46474: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C48D58-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC46476: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC46478: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4647A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4647C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:101 LDA @LOCAL04
    case 0xC4647E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:102 CLC
    case 0xC46480: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48D58-jp.asm:103 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC46481: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00531C, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:103 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC46481.
    case 0xC46483: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:104 TAY
    case 0xC46484: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C48D58-jp.asm:105 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC46485: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:105 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC46488: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C48D58-jp.asm:105 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC4648A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:105 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC4648D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C48D58-jp.asm:106 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4648F: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:106 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46491: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:106 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46493: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:106 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46495: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:107 CLC
    case 0xC46497: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C4/C48D58-jp.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC46498: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4649A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4649C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4649E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC464A0: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC464A2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C48D58-jp.asm:109 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC464A4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C48D58-jp.asm:109 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC464A6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:109 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC464A8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C48D58-jp.asm:109 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC464AA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:110 INC @VIRTUAL04
    case 0xC464AC: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C48D58-jp.asm:111 JMP @UNKNOWN0
    case 0xC464AE: cpu.execute_instruction<0x4C>(0x0063C0, 3); return true;
    // src/unknown/C4/C48D58-jp.asm:113 LDA @VIRTUAL04
    case 0xC464B1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C48D58-jp.asm:114 END_C_FUNCTION
    case 0xC464B3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48D58-jp.asm:114 END_C_FUNCTION
    case 0xC464B4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48E6B.asm (unresolved).
bool execute_unresolved_c4_c48e6b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48E6B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC464B5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C48E6B.asm:9 END_STACK_VARS
    case 0xC464B7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C48E6B.asm:9 END_STACK_VARS
    case 0xC464B8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C48E6B.asm:9 END_STACK_VARS
    case 0xC464B9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48E6B.asm:9 END_STACK_VARS
    case 0xC464BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48E6B.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC464BA.
    case 0xC464BC: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C48E6B.asm:9 END_STACK_VARS
    case 0xC464BD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C48E6B.asm:9 END_STACK_VARS
    case 0xC464BE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C48E6B.asm:10 STX @LOCAL01
    case 0xC464BF: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C48E6B.asm:10 STX @LOCAL01
    // Overlapping static entry reached from 0xC464BC.
    case 0xC464C0: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C4/C48E6B.asm:11 TAY
    case 0xC464C1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C48E6B.asm:12 STY @LOCAL00
    case 0xC464C2: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C48E6B.asm:13 BRA @UNKNOWN1
    case 0xC464C4: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C48E6B.asm:15 LDY @LOCAL00
    case 0xC464C6: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C48E6B.asm:16 TYA
    case 0xC464C8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C48E6B.asm:17 ASL
    case 0xC464C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48E6B.asm:18 TAX
    case 0xC464CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48E6B.asm:19 LDA f:UNKNOWN_C48C59,X
    case 0xC464CB: cpu.execute_instruction<0xBF>(0xC462A3, 4); return true;
    // src/unknown/C4/C48E6B.asm:20 JSL UNKNOWN_C48C97
    case 0xC464CF: cpu.execute_instruction<0x22>(0xC462E1, 4); return true;
    // src/unknown/C4/C48E6B.asm:21 LDX @LOCAL01
    case 0xC464D3: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C48E6B.asm:22 DEX
    case 0xC464D5: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C48E6B.asm:23 STX @LOCAL01
    case 0xC464D6: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C48E6B.asm:25 CPX #0
    case 0xC464D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C4/C48E6B.asm:25 CPX #0
    // Overlapping static entry reached from 0xC464D8.
    case 0xC464DA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C48E6B.asm:26 BNE @UNKNOWN0
    case 0xC464DB: cpu.execute_instruction<0xD0>(0x0000E9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C48E6B.asm:27 END_C_FUNCTION
    case 0xC464DD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48E6B.asm:27 END_C_FUNCTION
    case 0xC464DE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48E95.asm (unresolved).
bool execute_unresolved_c4_c48e95_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48E95.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC464DF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C48E95.asm:7 END_STACK_VARS
    case 0xC464E1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C48E95.asm:7 END_STACK_VARS
    case 0xC464E2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48E95.asm:7 END_STACK_VARS
    case 0xC464E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48E95.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC464E3.
    case 0xC464E5: cpu.execute_instruction<0xFF>(0x1EAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C48E95.asm:7 END_STACK_VARS
    case 0xC464E6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C48E95.asm:8 LDA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC464E7: cpu.execute_instruction<0xAD>(0x00A11E, 3); return true;
    // src/unknown/C4/C48E95.asm:8 LDA AUTO_MOVEMENT_DEMO_INDEX
    // Overlapping static entry reached from 0xC464E5.
    case 0xC464E9: cpu.execute_instruction<0xA1>(0x00001A, 2); return true;
    // src/unknown/C4/C48E95.asm:9 INC
    case 0xC464EA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48E95.asm:10 STA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC464EB: cpu.execute_instruction<0x8D>(0x00A11E, 3); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C48E95.asm:11 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC464EE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C48E95.asm:11 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC464F0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C48E95.asm:11 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC464F1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C48E95.asm:12 TAX
    case 0xC464F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48E95.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC464F4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C48E95.asm:14 STZ AUTO_MOVEMENT_DEMO_BUFFER,X
    case 0xC464F6: cpu.execute_instruction<0x9E>(0x00A05E, 3); return true;
    // src/unknown/C4/C48E95.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC464F9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    case 0xC464FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005E, 2); else cpu.execute_instruction<0xA9>(0x00A05E, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC464FB.
    case 0xC464FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000085, 2); else cpu.execute_instruction<0xA0>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    case 0xC464FE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC464FD.
    case 0xC464FF: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    case 0xC46500: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    case 0xC46501: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    case 0xC46503: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    case 0xC46504: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    case 0xC46506: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C48E95.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC46508: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C48E95.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4650A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C48E95.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4650C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C48E95.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4650E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C48E95.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46510: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C48E95.asm:19 JSL UNKNOWN_C0402B
    case 0xC46512: cpu.execute_instruction<0x22>(0xC042B2, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C48E95.asm:20 END_C_FUNCTION
    case 0xC46516: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48E95.asm:20 END_C_FUNCTION
    case 0xC46517: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48F98.asm (unresolved).
bool execute_unresolved_c4_c48f98_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48F98.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC465E2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C48F98.asm:7 END_STACK_VARS
    case 0xC465E4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C48F98.asm:7 END_STACK_VARS
    case 0xC465E5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C48F98.asm:7 END_STACK_VARS
    case 0xC465E6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48F98.asm:7 END_STACK_VARS
    case 0xC465E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48F98.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC465E7.
    case 0xC465E9: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C48F98.asm:7 END_STACK_VARS
    case 0xC465EA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C48F98.asm:7 END_STACK_VARS
    case 0xC465EB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C48F98.asm:8 TAX
    case 0xC465EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48F98.asm:9 STX @LOCAL00
    case 0xC465ED: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C48F98.asm:10 TXA
    case 0xC465EF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C48F98.asm:11 JSL IS_VALID_ITEM_TRANSFORMATION
    case 0xC465F0: cpu.execute_instruction<0x22>(0xC46518, 4); return true;
    // src/unknown/C4/C48F98.asm:12 CMP #0
    case 0xC465F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C48F98.asm:12 CMP #0
    // Overlapping static entry reached from 0xC465F4.
    case 0xC465F6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C48F98.asm:13 BEQ @UNKNOWN0
    case 0xC465F7: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C4/C48F98.asm:14 DEC ITEM_TRANSFORMATIONS_LOADED
    case 0xC465F9: cpu.execute_instruction<0xCE>(0x00A130, 3); return true;
    // src/unknown/C4/C48F98.asm:15 LDX @LOCAL00
    case 0xC465FC: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C48F98.asm:16 TXA
    case 0xC465FE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/unknown/C4/C48F98.asm:17 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC465FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/unknown/C4/C48F98.asm:17 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC46600: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48F98.asm:18 TAX
    case 0xC46601: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48F98.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC46602: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C48F98.asm:20 STZ LOADED_TIMED_ITEM_TRANSFORMATIONS + loaded_timed_item_transformation::sfx_frequency,X
    case 0xC46604: cpu.execute_instruction<0x9E>(0x00A121, 3); return true;
    // src/unknown/C4/C48F98.asm:21 STZ LOADED_TIMED_ITEM_TRANSFORMATIONS + loaded_timed_item_transformation::transformation_countdown,X
    case 0xC46607: cpu.execute_instruction<0x9E>(0x00A123, 3); return true;
    // src/unknown/C4/C48F98.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC4660A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C48F98.asm:24 END_C_FUNCTION
    case 0xC4660C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48F98.asm:24 END_C_FUNCTION
    case 0xC4660D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C492D2.asm (unresolved).
bool execute_unresolved_c4_c492d2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C492D2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4691C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C492D2.asm:8 END_STACK_VARS
    case 0xC4691E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C492D2.asm:8 END_STACK_VARS
    case 0xC4691F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C492D2.asm:8 END_STACK_VARS
    case 0xC46920: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C492D2.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46920.
    case 0xC46922: cpu.execute_instruction<0xFF>(0x40A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C492D2.asm:8 END_STACK_VARS
    case 0xC46923: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:9 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC46924: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/unknown/C4/C492D2.asm:9 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC46924.
    case 0xC46926: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C492D2.asm:10 STA @LOCAL02
    case 0xC46927: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C492D2.asm:11 LDA #0
    case 0xC46929: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C492D2.asm:11 LDA #0
    // Overlapping static entry reached from 0xC46929.
    case 0xC4692B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C492D2.asm:12 STA @VIRTUAL04
    case 0xC4692C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C492D2.asm:13 JMP @UNKNOWN1
    case 0xC4692E: cpu.execute_instruction<0x4C>(0x0069D1, 3); return true;
    // src/unknown/C4/C492D2.asm:15 LDA @VIRTUAL04
    case 0xC46931: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C492D2.asm:16 ASL
    case 0xC46933: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:17 STA @LOCAL01
    case 0xC46934: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:18 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC46936: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007C00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:18 LOADPTR BUFFER + $7C00, @VIRTUAL06
    // Overlapping static entry reached from 0xC46936.
    case 0xC46938: cpu.execute_instruction<0x7C>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C492D2.asm:18 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC46939: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:18 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC4693B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:18 LOADPTR BUFFER + $7C00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4693B.
    case 0xC4693D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C492D2.asm:18 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC4693E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C492D2.asm:19 LDA @LOCAL01
    case 0xC46940: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:20 CLC
    case 0xC46942: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:21 ADC @VIRTUAL06
    case 0xC46943: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:22 STA @VIRTUAL06
    case 0xC46945: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:23 LDA @LOCAL01
    case 0xC46947: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:24 TAX
    case 0xC46949: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:25 LDA [@VIRTUAL06]
    case 0xC4694A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:26 CLC
    case 0xC4694C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:27 ADC BUFFER + $7900,X
    case 0xC4694D: cpu.execute_instruction<0x7F>(0x7F7900, 4); return true;
    // src/unknown/C4/C492D2.asm:28 TAY
    case 0xC46951: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:29 STA [@VIRTUAL06]
    case 0xC46952: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:30 LOADPTR BUFFER + $7D00, @VIRTUAL06
    case 0xC46954: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007D00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:30 LOADPTR BUFFER + $7D00, @VIRTUAL06
    // Overlapping static entry reached from 0xC46954.
    case 0xC46956: cpu.execute_instruction<0x7D>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C492D2.asm:30 LOADPTR BUFFER + $7D00, @VIRTUAL06
    case 0xC46957: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:30 LOADPTR BUFFER + $7D00, @VIRTUAL06
    case 0xC46959: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:30 LOADPTR BUFFER + $7D00, @VIRTUAL06
    // Overlapping static entry reached from 0xC46959.
    case 0xC4695B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C492D2.asm:30 LOADPTR BUFFER + $7D00, @VIRTUAL06
    case 0xC4695C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C492D2.asm:31 LDA @LOCAL01
    case 0xC4695E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:32 CLC
    case 0xC46960: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:33 ADC @VIRTUAL06
    case 0xC46961: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:34 STA @VIRTUAL06
    case 0xC46963: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:35 LDA @LOCAL01
    case 0xC46965: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:36 TAX
    case 0xC46967: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:37 LDA [@VIRTUAL06]
    case 0xC46968: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:38 CLC
    case 0xC4696A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:39 ADC BUFFER + $7A00,X
    case 0xC4696B: cpu.execute_instruction<0x7F>(0x7F7A00, 4); return true;
    // src/unknown/C4/C492D2.asm:40 STA @VIRTUAL02
    case 0xC4696F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C492D2.asm:41 STA [@VIRTUAL06]
    case 0xC46971: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:42 LOADPTR BUFFER + $7E00, @VIRTUAL06
    case 0xC46973: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007E00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:42 LOADPTR BUFFER + $7E00, @VIRTUAL06
    // Overlapping static entry reached from 0xC46973.
    case 0xC46975: cpu.execute_instruction<0x7E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C492D2.asm:42 LOADPTR BUFFER + $7E00, @VIRTUAL06
    case 0xC46976: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:42 LOADPTR BUFFER + $7E00, @VIRTUAL06
    case 0xC46978: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:42 LOADPTR BUFFER + $7E00, @VIRTUAL06
    // Overlapping static entry reached from 0xC46978.
    case 0xC4697A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C492D2.asm:42 LOADPTR BUFFER + $7E00, @VIRTUAL06
    case 0xC4697B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C492D2.asm:43 LDA @LOCAL01
    case 0xC4697D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:44 CLC
    case 0xC4697F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:45 ADC @VIRTUAL06
    case 0xC46980: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:46 STA @VIRTUAL06
    case 0xC46982: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:47 LDA @LOCAL01
    case 0xC46984: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:48 TAX
    case 0xC46986: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:49 LDA [@VIRTUAL06]
    case 0xC46987: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:50 CLC
    case 0xC46989: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:51 ADC BUFFER + $7B00,X
    case 0xC4698A: cpu.execute_instruction<0x7F>(0x7F7B00, 4); return true;
    // src/unknown/C4/C492D2.asm:52 TAX
    case 0xC4698E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:53 STA [@VIRTUAL06]
    case 0xC4698F: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:54 TYA
    case 0xC46991: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:55 XBA
    case 0xC46992: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:56 AND #$00FF
    case 0xC46993: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C492D2.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC46993.
    case 0xC46995: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C492D2.asm:57 AND #$001F
    case 0xC46996: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C492D2.asm:57 AND #$001F
    // Overlapping static entry reached from 0xC46996.
    case 0xC46998: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C492D2.asm:58 TAY
    case 0xC46999: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:59 LDA @VIRTUAL02
    case 0xC4699A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C492D2.asm:60 XBA
    case 0xC4699C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:61 AND #$00FF
    case 0xC4699D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C492D2.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC4699D.
    case 0xC4699F: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C492D2.asm:62 AND #$001F
    case 0xC469A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C492D2.asm:62 AND #$001F
    // Overlapping static entry reached from 0xC469A0.
    case 0xC469A2: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C492D2.asm:63 ASL
    case 0xC469A3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:64 ASL
    case 0xC469A4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:65 ASL
    case 0xC469A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:66 ASL
    case 0xC469A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:67 ASL
    case 0xC469A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:68 STA @LOCAL01
    case 0xC469A8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:69 TXA
    case 0xC469AA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:70 XBA
    case 0xC469AB: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:71 AND #$00FF
    case 0xC469AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C492D2.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC469AC.
    case 0xC469AE: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C492D2.asm:72 AND #$001F
    case 0xC469AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C492D2.asm:72 AND #$001F
    // Overlapping static entry reached from 0xC469AF.
    case 0xC469B1: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/unknown/C4/C492D2.asm:73 XBA
    case 0xC469B2: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:74 AND #$FF00
    case 0xC469B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C492D2.asm:74 AND #$FF00
    // Overlapping static entry reached from 0xC469B3.
    case 0xC469B5: cpu.execute_instruction<0xFF>(0x850A0A, 4); return true;
    // src/unknown/C4/C492D2.asm:75 ASL
    case 0xC469B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:76 ASL
    case 0xC469B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:77 STA @VIRTUAL02
    case 0xC469B8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C492D2.asm:77 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC469B5.
    case 0xC469B9: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C492D2.asm:78 STA @LOCAL00
    case 0xC469BA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C492D2.asm:79 LDA @LOCAL01
    case 0xC469BC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:80 STA @VIRTUAL02
    case 0xC469BE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C492D2.asm:81 TYA
    case 0xC469C0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:82 ORA @VIRTUAL02
    case 0xC469C1: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C492D2.asm:83 LDX @LOCAL00
    case 0xC469C3: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C492D2.asm:84 STX @VIRTUAL02
    case 0xC469C5: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C492D2.asm:85 ORA @VIRTUAL02
    case 0xC469C7: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C492D2.asm:86 STA (@LOCAL02)
    case 0xC469C9: cpu.execute_instruction<0x92>(0x000012, 2); return true;
    // src/unknown/C4/C492D2.asm:87 INC @LOCAL02
    case 0xC469CB: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/unknown/C4/C492D2.asm:88 INC @LOCAL02
    case 0xC469CD: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/unknown/C4/C492D2.asm:89 INC @VIRTUAL04
    case 0xC469CF: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C492D2.asm:91 LDA @VIRTUAL04
    case 0xC469D1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C492D2.asm:92 CMP #BPP4PALETTE_SIZE * 3
    case 0xC469D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000060, 2); else cpu.execute_instruction<0xC9>(0x000060, 3); return true;
    // src/unknown/C4/C492D2.asm:92 CMP #BPP4PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC469D3.
    case 0xC469D5: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C492D2.asm:93 BCCL @UNKNOWN0
    case 0xC469D6: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C492D2.asm:93 BCCL @UNKNOWN0
    case 0xC469D8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C492D2.asm:93 BCCL @UNKNOWN0
    case 0xC469DA: cpu.execute_instruction<0x4C>(0x006931, 3); return true;
    // src/unknown/C4/C492D2.asm:94 LDA #8
    case 0xC469DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C492D2.asm:94 LDA #8
    // Overlapping static entry reached from 0xC469DD.
    case 0xC469DF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C492D2.asm:95 JSL UNKNOWN_C0856B
    case 0xC469E0: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C492D2.asm:96 END_C_FUNCTION
    case 0xC469E4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C492D2.asm:96 END_C_FUNCTION
    case 0xC469E5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4939C.asm (unresolved).
bool execute_unresolved_c4_c4939c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4939C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC469E6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4939C.asm:13 END_STACK_VARS
    case 0xC469E8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4939C.asm:13 END_STACK_VARS
    case 0xC469E9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4939C.asm:13 END_STACK_VARS
    case 0xC469EA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4939C.asm:13 END_STACK_VARS
    case 0xC469EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E3, 2); else cpu.execute_instruction<0x69>(0x00FFE3, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4939C.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC469EB.
    case 0xC469ED: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4939C.asm:13 END_STACK_VARS
    case 0xC469EE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4939C.asm:13 END_STACK_VARS
    case 0xC469EF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC469F0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4939C.asm:14 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC469ED.
    case 0xC469F1: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/unknown/C4/C4939C.asm:15 STA @VIRTUAL00
    case 0xC469F2: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4939C.asm:16 LDA @PARAM02
    case 0xC469F4: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/unknown/C4/C4939C.asm:17 STA @VIRTUAL01
    case 0xC469F6: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C4939C.asm:18 LDA @PARAM01
    case 0xC469F8: cpu.execute_instruction<0xA5>(0x00002B, 2); return true;
    // src/unknown/C4/C4939C.asm:19 STA @LOCAL04
    case 0xC469FA: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4939C.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC469FC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4939C.asm:21 STZ MAP_PALETTE_ANIMATION_LOADED
    case 0xC469FE: cpu.execute_instruction<0x9C>(0x0047FA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:22 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC46A01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0062FD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:22 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46A01.
    case 0xC46A03: cpu.execute_instruction<0x62>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4939C.asm:22 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC46A04: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:22 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC46A06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:22 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46A06.
    case 0xC46A08: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4939C.asm:22 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC46A09: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4939C.asm:23 LDA @VIRTUAL00
    case 0xC46A0B: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4939C.asm:24 AND #$00FF
    case 0xC46A0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4939C.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC46A0D.
    case 0xC46A0F: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4939C.asm:25 ASL
    case 0xC46A10: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:26 ASL
    case 0xC46A11: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:27 CLC
    case 0xC46A12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:28 ADC @VIRTUAL06
    case 0xC46A13: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4939C.asm:29 STA @VIRTUAL06
    case 0xC46A15: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4939C.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC46A17: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4939C.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC46A17.
    case 0xC46A19: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4939C.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC46A1A: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4939C.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC46A1C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4939C.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC46A1D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4939C.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC46A1F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4939C.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC46A21: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4939C.asm:31 LDA @LOCAL04
    case 0xC46A23: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4939C.asm:32 AND #$00FF
    case 0xC46A25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4939C.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC46A25.
    case 0xC46A27: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C4939C.asm:33 LDY #192
    case 0xC46A28: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000C0, 2); else cpu.execute_instruction<0xA0>(0x0000C0, 3); return true;
    // src/unknown/C4/C4939C.asm:33 LDY #192
    // Overlapping static entry reached from 0xC46A28.
    case 0xC46A2A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4939C.asm:34 JSL MULT168
    case 0xC46A2B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C4939C.asm:35 CLC
    case 0xC46A2F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:36 ADC @VIRTUAL06
    case 0xC46A30: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4939C.asm:37 STA @VIRTUAL06
    case 0xC46A32: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4939C.asm:38 STA @LOCAL02
    case 0xC46A34: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4939C.asm:39 LDA @VIRTUAL06+2
    case 0xC46A36: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4939C.asm:40 STA @LOCAL02+2
    case 0xC46A38: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4939C.asm:41 LDA @VIRTUAL01
    case 0xC46A3A: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C4/C4939C.asm:42 AND #$00FF
    case 0xC46A3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4939C.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC46A3C.
    case 0xC46A3E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4939C.asm:43 BNE @UNKNOWN0
    case 0xC46A3F: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4939C.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46A41: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4939C.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46A43: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4939C.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46A45: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4939C.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46A47: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4939C.asm:45 LDX #MAP_PALETTES_SIZE
    case 0xC46A49: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/unknown/C4/C4939C.asm:45 LDX #MAP_PALETTES_SIZE
    // Overlapping static entry reached from 0xC46A49.
    case 0xC46A4B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4939C.asm:46 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC46A4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/unknown/C4/C4939C.asm:46 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC46A4C.
    case 0xC46A4E: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4939C.asm:47 JSL MEMCPY16
    case 0xC46A4F: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C4/C4939C.asm:48 JMP @UNKNOWN4
    case 0xC46A53: cpu.execute_instruction<0x4C>(0x006ADE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:50 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC46A56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:50 LOADPTR BUFFER + $7800, @LOCAL00
    // Overlapping static entry reached from 0xC46A56.
    case 0xC46A58: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4939C.asm:50 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC46A59: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:50 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC46A5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:50 LOADPTR BUFFER + $7800, @LOCAL00
    // Overlapping static entry reached from 0xC46A5B.
    case 0xC46A5D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4939C.asm:50 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC46A5E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4939C.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC46A60: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4939C.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC46A62: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4939C.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC46A64: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4939C.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC46A66: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4939C.asm:52 LDA #192
    case 0xC46A68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // src/unknown/C4/C4939C.asm:52 LDA #192
    // Overlapping static entry reached from 0xC46A68.
    case 0xC46A6A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4939C.asm:53 JSL MEMCPY24
    case 0xC46A6B: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/unknown/C4/C4939C.asm:54 LDA @VIRTUAL01
    case 0xC46A6F: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C4/C4939C.asm:55 AND #$00FF
    case 0xC46A71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4939C.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC46A71.
    case 0xC46A73: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4939C.asm:56 JSL INITIALIZE_MAP_PALETTE_FADE
    case 0xC46A74: cpu.execute_instruction<0x22>(0xC46852, 4); return true;
    // src/unknown/C4/C4939C.asm:57 LDA #0
    case 0xC46A78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4939C.asm:57 LDA #0
    // Overlapping static entry reached from 0xC46A78.
    case 0xC46A7A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4939C.asm:58 STA @LOCAL03
    case 0xC46A7B: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4939C.asm:59 BRA @UNKNOWN2
    case 0xC46A7D: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C4939C.asm:61 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC46A7F: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C4/C4939C.asm:62 JSL UNKNOWN_C492D2
    case 0xC46A83: cpu.execute_instruction<0x22>(0xC4691C, 4); return true;
    // src/unknown/C4/C4939C.asm:63 LDA @LOCAL03
    case 0xC46A87: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4939C.asm:64 INC
    case 0xC46A89: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:65 STA @LOCAL03
    case 0xC46A8A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4939C.asm:67 LDA @VIRTUAL01
    case 0xC46A8C: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C4/C4939C.asm:68 AND #$00FF
    case 0xC46A8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4939C.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC46A8E.
    case 0xC46A90: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4939C.asm:69 STA @VIRTUAL02
    case 0xC46A91: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4939C.asm:70 LDA @LOCAL03
    case 0xC46A93: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4939C.asm:71 CMP @VIRTUAL02
    case 0xC46A95: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4939C.asm:72 BCC @UNKNOWN1
    case 0xC46A97: cpu.execute_instruction<0x90>(0x0000E6, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4939C.asm:73 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46A99: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4939C.asm:73 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46A9B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4939C.asm:73 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46A9D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4939C.asm:73 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46A9F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4939C.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46AA1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4939C.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46AA3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4939C.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46AA5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4939C.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46AA7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4939C.asm:75 LDX #MAP_PALETTES_SIZE
    case 0xC46AA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/unknown/C4/C4939C.asm:75 LDX #MAP_PALETTES_SIZE
    // Overlapping static entry reached from 0xC46AA9.
    case 0xC46AAB: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4939C.asm:76 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC46AAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/unknown/C4/C4939C.asm:76 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC46AAC.
    case 0xC46AAE: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4939C.asm:77 JSL MEMCPY16
    case 0xC46AAF: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC46AB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC46AB3.
    case 0xC46AB5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4939C.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC46AB6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC46AB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC46AB8.
    case 0xC46ABA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4939C.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC46ABB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4939C.asm:79 LDX #SPRITE_PALETTES_SIZE
    case 0xC46ABD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/unknown/C4/C4939C.asm:79 LDX #SPRITE_PALETTES_SIZE
    // Overlapping static entry reached from 0xC46ABD.
    case 0xC46ABF: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/unknown/C4/C4939C.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC46AC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/unknown/C4/C4939C.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC46ABF.
    case 0xC46AC1: cpu.execute_instruction<0x00>(0x000003, 2); return true;
    // src/unknown/C4/C4939C.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC46AC0.
    case 0xC46AC2: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C4/C4939C.asm:81 JSL MEMCPY16
    case 0xC46AC3: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C4/C4939C.asm:81 JSL MEMCPY16
    // Overlapping static entry reached from 0xC46AC2.
    case 0xC46AC4: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/unknown/C4/C4939C.asm:81 JSL MEMCPY16
    // Overlapping static entry reached from 0xC46AC4.
    case 0xC46AC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x009022, 3); return true;
    // src/unknown/C4/C4939C.asm:82 JSL ADJUST_SPRITE_PALETTES_BY_AVERAGE
    case 0xC46AC7: cpu.execute_instruction<0x22>(0xC00490, 4); return true;
    // src/unknown/C4/C4939C.asm:82 JSL ADJUST_SPRITE_PALETTES_BY_AVERAGE
    // Overlapping static entry reached from 0xC46B1E.
    case 0xC46AC8: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/unknown/C4/C4939C.asm:82 JSL ADJUST_SPRITE_PALETTES_BY_AVERAGE
    // Overlapping static entry reached from 0xC46AC6.
    case 0xC46AC9: cpu.execute_instruction<0x04>(0x0000C0, 2); return true;
    // src/unknown/C4/C4939C.asm:82 JSL ADJUST_SPRITE_PALETTES_BY_AVERAGE
    // Overlapping static entry reached from 0xC46AC8.
    case 0xC46ACA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x008822, 3); return true;
    // src/unknown/C4/C4939C.asm:83 JSL LOAD_SPECIAL_SPRITE_PALETTE
    case 0xC46ACB: cpu.execute_instruction<0x22>(0xC00788, 4); return true;
    // src/unknown/C4/C4939C.asm:83 JSL LOAD_SPECIAL_SPRITE_PALETTE
    // Overlapping static entry reached from 0xC46ACA.
    case 0xC46ACC: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:83 JSL LOAD_SPECIAL_SPRITE_PALETTE
    // Overlapping static entry reached from 0xC46ACA.
    case 0xC46ACD: cpu.execute_instruction<0x07>(0x0000C0, 2); return true;
    // src/unknown/C4/C4939C.asm:83 JSL LOAD_SPECIAL_SPRITE_PALETTE
    // Overlapping static entry reached from 0xC46AC8.
    case 0xC46ACE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0018A9, 3); return true;
    // src/unknown/C4/C4939C.asm:84 LDA #24
    case 0xC46ACF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C4939C.asm:84 LDA #24
    // Overlapping static entry reached from 0xC46ACE.
    case 0xC46AD0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:84 LDA #24
    // Overlapping static entry reached from 0xC46ACF.
    case 0xC46AD1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4939C.asm:85 JSL UNKNOWN_C0856B
    case 0xC46AD2: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C4/C4939C.asm:87 LDA PALETTE_UPLOAD_MODE
    case 0xC46AD6: cpu.execute_instruction<0xAD>(0x000030, 3); return true;
    // src/unknown/C4/C4939C.asm:88 AND #$00FF
    case 0xC46AD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4939C.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC46AD9.
    case 0xC46ADB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4939C.asm:89 BNE @UNKNOWN3
    case 0xC46ADC: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4939C.asm:91 END_C_FUNCTION
    case 0xC46ADE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4939C.asm:91 END_C_FUNCTION
    case 0xC46ADF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49496.asm (unresolved).
bool execute_unresolved_c4_c49496_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49496.asm:3 BEGIN_C_FUNCTION
    case 0xC46AE0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49496.asm:10 END_STACK_VARS
    case 0xC46AE2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49496.asm:10 END_STACK_VARS
    case 0xC46AE3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49496.asm:10 END_STACK_VARS
    case 0xC46AE4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49496.asm:10 END_STACK_VARS
    case 0xC46AE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49496.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC46AE5.
    case 0xC46AE7: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49496.asm:10 END_STACK_VARS
    case 0xC46AE8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49496.asm:10 END_STACK_VARS
    case 0xC46AE9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:11 STA @LOCAL02
    case 0xC46AEA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:11 STA @LOCAL02
    // Overlapping static entry reached from 0xC46AE7.
    case 0xC46AEB: cpu.execute_instruction<0x12>(0x0000E0, 2); return true;
    // src/unknown/C4/C49496.asm:12 CPX #50
    case 0xC46AEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000032, 2); else cpu.execute_instruction<0xE0>(0x000032, 3); return true;
    // src/unknown/C4/C49496.asm:12 CPX #50
    // Overlapping static entry reached from 0xC46AEB.
    case 0xC46AED: cpu.execute_instruction<0x32>(0x000000, 2); return true;
    // src/unknown/C4/C49496.asm:12 CPX #50
    // Overlapping static entry reached from 0xC46AEC.
    case 0xC46AEE: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C49496.asm:13 BCS @UNKNOWN2
    case 0xC46AEF: cpu.execute_instruction<0xB0>(0x00006E, 2); return true;
    // src/unknown/C4/C49496.asm:14 TXA
    case 0xC46AF1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/unknown/C4/C49496.asm:15 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC46AF2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/unknown/C4/C49496.asm:15 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC46AF4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/unknown/C4/C49496.asm:15 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC46AF5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/unknown/C4/C49496.asm:15 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC46AF6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C49496.asm:16 TAY
    case 0xC46AF8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:17 STY @LOCAL01
    case 0xC46AF9: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C49496.asm:18 LDA @LOCAL02
    case 0xC46AFB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:19 AND #$001F
    case 0xC46AFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C49496.asm:19 AND #$001F
    // Overlapping static entry reached from 0xC46AFD.
    case 0xC46AFF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49496.asm:20 JSL MULT16
    case 0xC46B00: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C49496.asm:21 STA @VIRTUAL02
    case 0xC46B04: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49496.asm:22 LDY @LOCAL01
    case 0xC46B06: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C49496.asm:23 LDA @LOCAL02
    case 0xC46B08: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:24 LSR
    case 0xC46B0A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:25 LSR
    case 0xC46B0B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:26 LSR
    case 0xC46B0C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:27 LSR
    case 0xC46B0D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:28 LSR
    case 0xC46B0E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:29 AND #$001F
    case 0xC46B0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C49496.asm:29 AND #$001F
    // Overlapping static entry reached from 0xC46B0F.
    case 0xC46B11: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49496.asm:30 JSL MULT16
    case 0xC46B12: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C49496.asm:31 TAX
    case 0xC46B16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:32 STX @LOCAL00
    case 0xC46B17: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C49496.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC46B19: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49496.asm:34 LDA #10
    case 0xC46B1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00E20A, 3); return true;
    // src/unknown/C4/C49496.asm:35 SEP #PROC_FLAGS::INDEX8
    case 0xC46B1D: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C49496.asm:35 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC46B1B.
    case 0xC46B1E: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C4/C49496.asm:36 TAY
    case 0xC46B1F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC46B20: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49496.asm:38 LDA @LOCAL02
    case 0xC46B22: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:39 JSL ASR8_UNKNOWN1
    case 0xC46B24: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C4/C49496.asm:40 AND #$001F
    case 0xC46B28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C49496.asm:40 AND #$001F
    // Overlapping static entry reached from 0xC46B28.
    case 0xC46B2A: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C49496.asm:41 REP #PROC_FLAGS::INDEX8
    case 0xC46B2B: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C49496.asm:42 LDY @LOCAL01
    case 0xC46B2D: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C49496.asm:43 JSL MULT16
    case 0xC46B2F: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C49496.asm:44 STA @LOCAL02
    case 0xC46B33: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:45 LDA @VIRTUAL02
    case 0xC46B35: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C49496.asm:46 CMP #$1E45
    case 0xC46B37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000045, 2); else cpu.execute_instruction<0xC9>(0x001E45, 3); return true;
    // src/unknown/C4/C49496.asm:46 CMP #$1E45
    // Overlapping static entry reached from 0xC46B37.
    case 0xC46B39: cpu.execute_instruction<0x1E>(0x000790, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C49496.asm:47 BLTEQ @UNKNOWN0
    case 0xC46B3A: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C49496.asm:47 BLTEQ @UNKNOWN0
    case 0xC46B3C: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C49496.asm:48 LDA #$1F00
    case 0xC46B3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001F00, 3); return true;
    // src/unknown/C4/C49496.asm:48 LDA #$1F00
    // Overlapping static entry reached from 0xC46B3E.
    case 0xC46B40: cpu.execute_instruction<0x1F>(0xA60285, 4); return true;
    // src/unknown/C4/C49496.asm:49 STA @VIRTUAL02
    case 0xC46B41: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49496.asm:51 LDX @LOCAL00
    case 0xC46B43: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C49496.asm:51 LDX @LOCAL00
    // Overlapping static entry reached from 0xC46B40.
    case 0xC46B44: cpu.execute_instruction<0x0E>(0x0045E0, 3); return true;
    // src/unknown/C4/C49496.asm:52 CPX #$1E45
    case 0xC46B45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000045, 2); else cpu.execute_instruction<0xE0>(0x001E45, 3); return true;
    // src/unknown/C4/C49496.asm:52 CPX #$1E45
    // Overlapping static entry reached from 0xC46B45.
    case 0xC46B47: cpu.execute_instruction<0x1E>(0x000590, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C49496.asm:53 BLTEQ @UNKNOWN1
    case 0xC46B48: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C49496.asm:53 BLTEQ @UNKNOWN1
    case 0xC46B4A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C49496.asm:54 LDX #$1F00
    case 0xC46B4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001F00, 3); return true;
    // src/unknown/C4/C49496.asm:54 LDX #$1F00
    // Overlapping static entry reached from 0xC46B4C.
    case 0xC46B4E: cpu.execute_instruction<0x1F>(0xC912A5, 4); return true;
    // src/unknown/C4/C49496.asm:56 LDA @LOCAL02
    case 0xC46B4F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:57 CMP #$1E45
    case 0xC46B51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000045, 2); else cpu.execute_instruction<0xC9>(0x001E45, 3); return true;
    // src/unknown/C4/C49496.asm:57 CMP #$1E45
    // Overlapping static entry reached from 0xC46B4E.
    case 0xC46B52: cpu.execute_instruction<0x45>(0x00001E, 2); return true;
    // src/unknown/C4/C49496.asm:57 CMP #$1E45
    // Overlapping static entry reached from 0xC46B51.
    case 0xC46B53: cpu.execute_instruction<0x1E>(0x001690, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C49496.asm:58 BLTEQ @UNKNOWN3
    case 0xC46B54: cpu.execute_instruction<0x90>(0x000016, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C49496.asm:58 BLTEQ @UNKNOWN3
    case 0xC46B56: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C4/C49496.asm:59 LDA #$1F00
    case 0xC46B58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001F00, 3); return true;
    // src/unknown/C4/C49496.asm:59 LDA #$1F00
    // Overlapping static entry reached from 0xC46B58.
    case 0xC46B5A: cpu.execute_instruction<0x1F>(0x801285, 4); return true;
    // src/unknown/C4/C49496.asm:60 STA @LOCAL02
    case 0xC46B5B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:61 BRA @UNKNOWN3
    case 0xC46B5D: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C49496.asm:61 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC46B5A.
    case 0xC46B5E: cpu.execute_instruction<0x0D>(0x0032E0, 3); return true;
    // src/unknown/C4/C49496.asm:63 CPX #50
    case 0xC46B5F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000032, 2); else cpu.execute_instruction<0xE0>(0x000032, 3); return true;
    // src/unknown/C4/C49496.asm:63 CPX #50
    // Overlapping static entry reached from 0xC46B5F.
    case 0xC46B61: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C49496.asm:64 BEQ @UNKNOWN4
    case 0xC46B62: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/unknown/C4/C49496.asm:65 LDA #$1F00
    case 0xC46B64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001F00, 3); return true;
    // src/unknown/C4/C49496.asm:65 LDA #$1F00
    // Overlapping static entry reached from 0xC46B64.
    case 0xC46B66: cpu.execute_instruction<0x1F>(0xAA1285, 4); return true;
    // src/unknown/C4/C49496.asm:66 STA @LOCAL02
    case 0xC46B67: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:67 TAX
    case 0xC46B69: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:68 STX @VIRTUAL02
    case 0xC46B6A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C49496.asm:70 LDA @VIRTUAL02
    case 0xC46B6C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C49496.asm:71 XBA
    case 0xC46B6E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:72 AND #$00FF
    case 0xC46B6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49496.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC46B6F.
    case 0xC46B71: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C49496.asm:73 STA @VIRTUAL02
    case 0xC46B72: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49496.asm:74 TXA
    case 0xC46B74: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:75 XBA
    case 0xC46B75: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:76 AND #$00FF
    case 0xC46B76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49496.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC46B76.
    case 0xC46B78: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C49496.asm:77 ASL
    case 0xC46B79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:78 ASL
    case 0xC46B7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:79 ASL
    case 0xC46B7B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:80 ASL
    case 0xC46B7C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:81 ASL
    case 0xC46B7D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:82 STA @VIRTUAL04
    case 0xC46B7E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C49496.asm:83 SEP #PROC_FLAGS::INDEX8
    case 0xC46B80: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C49496.asm:84 LDY #10
    case 0xC46B82: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00A50A, 3); return true;
    // src/unknown/C4/C49496.asm:85 LDA @LOCAL02
    case 0xC46B84: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:85 LDA @LOCAL02
    // Overlapping static entry reached from 0xC46B82.
    case 0xC46B85: cpu.execute_instruction<0x12>(0x0000EB, 2); return true;
    // src/unknown/C4/C49496.asm:86 XBA
    case 0xC46B86: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:87 AND #$00FF
    case 0xC46B87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49496.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC46B87.
    case 0xC46B89: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49496.asm:88 JSL ASL16_ENTRY2
    case 0xC46B8A: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/unknown/C4/C49496.asm:89 ORA @VIRTUAL04
    case 0xC46B8E: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/unknown/C4/C49496.asm:90 ORA @VIRTUAL02
    case 0xC46B90: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C49496.asm:92 REP #PROC_FLAGS::INDEX8
    case 0xC46B92: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49496.asm:93 END_C_FUNCTION
    case 0xC46B94: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C49496.asm:93 END_C_FUNCTION
    case 0xC46B95: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4954C.asm (unresolved).
bool execute_unresolved_c4_c4954c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4954C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46B96: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4954C.asm:8 END_STACK_VARS
    case 0xC46B98: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4954C.asm:8 END_STACK_VARS
    case 0xC46B99: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4954C.asm:8 END_STACK_VARS
    case 0xC46B9A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4954C.asm:8 END_STACK_VARS
    case 0xC46B9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4954C.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46B9B.
    case 0xC46B9D: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4954C.asm:8 END_STACK_VARS
    case 0xC46B9E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4954C.asm:8 END_STACK_VARS
    case 0xC46B9F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4954C.asm:9 STA @VIRTUAL02
    case 0xC46BA0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4954C.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC46B9D.
    case 0xC46BA1: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4954C.asm:10 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC46BA2: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4954C.asm:10 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC46BA4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4954C.asm:10 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC46BA6: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4954C.asm:10 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC46BA8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4954C.asm:11 LOADPTR BUFFER, @VIRTUAL06
    case 0xC46BAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4954C.asm:11 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC46BAA.
    case 0xC46BAC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4954C.asm:11 LOADPTR BUFFER, @VIRTUAL06
    case 0xC46BAD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4954C.asm:11 LOADPTR BUFFER, @VIRTUAL06
    case 0xC46BAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4954C.asm:11 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC46BAF.
    case 0xC46BB1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4954C.asm:11 LOADPTR BUFFER, @VIRTUAL06
    case 0xC46BB2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4954C.asm:12 LDY #0
    case 0xC46BB4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4954C.asm:12 LDY #0
    // Overlapping static entry reached from 0xC46BB4.
    case 0xC46BB6: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4954C.asm:13 STY @LOCAL00
    case 0xC46BB7: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4954C.asm:14 BRA @UNKNOWN1
    case 0xC46BB9: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C4/C4954C.asm:16 LDA [@VIRTUAL0A]
    case 0xC46BBB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4954C.asm:17 INC @VIRTUAL0A
    case 0xC46BBD: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4954C.asm:18 INC @VIRTUAL0A
    case 0xC46BBF: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4954C.asm:19 LDX @VIRTUAL02
    case 0xC46BC1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4954C.asm:20 JSR UNKNOWN_C49496
    case 0xC46BC3: cpu.execute_instruction<0x20>(0x006AE0, 3); return true;
    // src/unknown/C4/C4954C.asm:21 STA [@VIRTUAL06]
    case 0xC46BC6: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4954C.asm:22 INC @VIRTUAL06
    case 0xC46BC8: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4954C.asm:23 INC @VIRTUAL06
    case 0xC46BCA: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4954C.asm:24 LDY @LOCAL00
    case 0xC46BCC: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4954C.asm:25 INY
    case 0xC46BCE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4954C.asm:26 STY @LOCAL00
    case 0xC46BCF: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4954C.asm:28 CPY #256
    case 0xC46BD1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000100, 3); return true;
    // src/unknown/C4/C4954C.asm:28 CPY #256
    // Overlapping static entry reached from 0xC46BD1.
    case 0xC46BD3: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C4/C4954C.asm:29 BCC @UNKNOWN0
    case 0xC46BD4: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/unknown/C4/C4954C.asm:29 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC46BD3.
    case 0xC46BD5: cpu.execute_instruction<0xE5>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4954C.asm:30 END_C_FUNCTION
    case 0xC46BD6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4954C.asm:30 END_C_FUNCTION
    case 0xC46BD7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4958E.asm (unresolved).
bool execute_unresolved_c4_c4958e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4958E.asm:3 BEGIN_C_FUNCTION
    case 0xC46BD8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4958E.asm:17 END_STACK_VARS
    case 0xC46BDA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4958E.asm:17 END_STACK_VARS
    case 0xC46BDB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4958E.asm:17 END_STACK_VARS
    case 0xC46BDC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4958E.asm:17 END_STACK_VARS
    case 0xC46BDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4958E.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC46BDD.
    case 0xC46BDF: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4958E.asm:17 END_STACK_VARS
    case 0xC46BE0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4958E.asm:17 END_STACK_VARS
    case 0xC46BE1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:18 STY @LOCAL08
    case 0xC46BE2: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/unknown/C4/C4958E.asm:18 STY @LOCAL08
    // Overlapping static entry reached from 0xC46BDF.
    case 0xC46BE3: cpu.execute_instruction<0x20>(0x001E86, 3); return true;
    // src/unknown/C4/C4958E.asm:19 STX @LOCAL07
    case 0xC46BE4: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C4/C4958E.asm:20 STA @LOCAL06
    case 0xC46BE6: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC46BE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:21 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC46BE8.
    case 0xC46BEA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4958E.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC46BEB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC46BED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:21 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC46BED.
    case 0xC46BEF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4958E.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC46BF0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:22 LOADPTR BUFFER + $200, @LOCAL00
    case 0xC46BF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:22 LOADPTR BUFFER + $200, @LOCAL00
    // Overlapping static entry reached from 0xC46BF2.
    case 0xC46BF4: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4958E.asm:22 LOADPTR BUFFER + $200, @LOCAL00
    case 0xC46BF5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:22 LOADPTR BUFFER + $200, @LOCAL00
    case 0xC46BF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:22 LOADPTR BUFFER + $200, @LOCAL00
    // Overlapping static entry reached from 0xC46BF7.
    case 0xC46BF9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4958E.asm:22 LOADPTR BUFFER + $200, @LOCAL00
    case 0xC46BFA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4958E.asm:23 LDX #$1000
    case 0xC46BFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // src/unknown/C4/C4958E.asm:23 LDX #$1000
    // Overlapping static entry reached from 0xC46BFC.
    case 0xC46BFE: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // src/unknown/C4/C4958E.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC46BFF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4958E.asm:24 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC46BFE.
    case 0xC46C00: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C4/C4958E.asm:25 LDA #0
    case 0xC46C01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C4958E.asm:26 JSL MEMSET24
    case 0xC46C03: cpu.execute_instruction<0x22>(0xC08F06, 4); return true;
    // src/unknown/C4/C4958E.asm:26 JSL MEMSET24
    // Overlapping static entry reached from 0xC46C01.
    case 0xC46C04: cpu.execute_instruction<0x06>(0x00008F, 2); return true;
    // src/unknown/C4/C4958E.asm:26 JSL MEMSET24
    // Overlapping static entry reached from 0xC46C04.
    case 0xC46C06: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000064, 2); else cpu.execute_instruction<0xC0>(0x001A64, 3); return true;
    // src/unknown/C4/C4958E.asm:27 STZ @LOCAL05
    case 0xC46C07: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/unknown/C4/C4958E.asm:27 STZ @LOCAL05
    // Overlapping static entry reached from 0xC46C06.
    case 0xC46C08: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:28 JMP @UNKNOWN8
    case 0xC46C09: cpu.execute_instruction<0x4C>(0x006D23, 3); return true;
    // src/unknown/C4/C4958E.asm:30 LDA @LOCAL05
    case 0xC46C0C: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4958E.asm:31 STA @LOCAL04
    case 0xC46C0E: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4958E.asm:32 JMP @UNKNOWN4
    case 0xC46C10: cpu.execute_instruction<0x4C>(0x006CB8, 3); return true;
    // src/unknown/C4/C4958E.asm:35 LDA @LOCAL07
    case 0xC46C13: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4958E.asm:36 AND #$0001
    case 0xC46C15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C4958E.asm:36 AND #$0001
    // Overlapping static entry reached from 0xC46C15.
    case 0xC46C17: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4958E.asm:37 BEQ @UNKNOWN2
    case 0xC46C18: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C4/C4958E.asm:38 LDA @LOCAL04
    case 0xC46C1A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4958E.asm:39 ASL
    case 0xC46C1C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4958E.asm:40 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC46C1D: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4958E.asm:40 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC46C1F: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4958E.asm:40 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC46C21: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4958E.asm:40 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC46C23: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4958E.asm:41 CLC
    case 0xC46C25: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:42 ADC @VIRTUAL0A
    case 0xC46C26: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4958E.asm:43 STA @VIRTUAL0A
    case 0xC46C28: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4958E.asm:44 LDA [@VIRTUAL0A]
    case 0xC46C2A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4958E.asm:45 STA @VIRTUAL02
    case 0xC46C2C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:46 BRA @UNKNOWN3
    case 0xC46C2E: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C4/C4958E.asm:48 LDA @LOCAL04
    case 0xC46C30: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4958E.asm:49 ASL
    case 0xC46C32: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:50 STA @LOCAL03
    case 0xC46C33: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4958E.asm:51 TAY
    case 0xC46C35: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:52 LDA (@LOCAL08),Y
    case 0xC46C36: cpu.execute_instruction<0xB1>(0x000020, 2); return true;
    // src/unknown/C4/C4958E.asm:53 STA @VIRTUAL02
    case 0xC46C38: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:54 LDA @LOCAL03
    case 0xC46C3A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4958E.asm:55 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC46C3C: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4958E.asm:55 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC46C3E: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4958E.asm:55 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC46C40: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4958E.asm:55 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC46C42: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4958E.asm:56 CLC
    case 0xC46C44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:57 ADC @VIRTUAL0A
    case 0xC46C45: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4958E.asm:58 STA @VIRTUAL0A
    case 0xC46C47: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4958E.asm:59 LDA @VIRTUAL02
    case 0xC46C49: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:60 STA [@VIRTUAL0A]
    case 0xC46C4B: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4958E.asm:62 LDA @LOCAL04
    case 0xC46C4D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4958E.asm:63 ASL
    case 0xC46C4F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:64 STA @VIRTUAL04
    case 0xC46C50: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4958E.asm:65 LDY @VIRTUAL04
    case 0xC46C52: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C4/C4958E.asm:66 LDA (@LOCAL08),Y
    case 0xC46C54: cpu.execute_instruction<0xB1>(0x000020, 2); return true;
    // src/unknown/C4/C4958E.asm:67 STA @LOCAL02
    case 0xC46C56: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4958E.asm:68 LDY @LOCAL06
    case 0xC46C58: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C4/C4958E.asm:69 LDA @VIRTUAL02
    case 0xC46C5A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:70 AND #$001F
    case 0xC46C5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C4958E.asm:70 AND #$001F
    // Overlapping static entry reached from 0xC46C5C.
    case 0xC46C5E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4958E.asm:71 TAX
    case 0xC46C5F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:72 LDA @LOCAL02
    case 0xC46C60: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4958E.asm:73 AND #$001F
    case 0xC46C62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C4958E.asm:73 AND #$001F
    // Overlapping static entry reached from 0xC46C62.
    case 0xC46C64: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4958E.asm:74 JSR GET_COLOUR_FADE_SLOPE
    case 0xC46C65: cpu.execute_instruction<0x20>(0x006838, 3); return true;
    // src/unknown/C4/C4958E.asm:76 LDX @VIRTUAL04
    case 0xC46C68: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4958E.asm:77 STA BUFFER + $200,X
    case 0xC46C6A: cpu.execute_instruction<0x9F>(0x7F0200, 4); return true;
    // src/unknown/C4/C4958E.asm:78 LDY @LOCAL06
    case 0xC46C6E: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C4/C4958E.asm:79 LDA @VIRTUAL02
    case 0xC46C70: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:80 AND #$03E0
    case 0xC46C72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/unknown/C4/C4958E.asm:80 AND #$03E0
    // Overlapping static entry reached from 0xC46C72.
    case 0xC46C74: cpu.execute_instruction<0x03>(0x00004A, 2); return true;
    // src/unknown/C4/C4958E.asm:81 LSR
    case 0xC46C75: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:82 LSR
    case 0xC46C76: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:83 LSR
    case 0xC46C77: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:84 LSR
    case 0xC46C78: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:85 LSR
    case 0xC46C79: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:86 TAX
    case 0xC46C7A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:87 LDA @LOCAL02
    case 0xC46C7B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4958E.asm:88 AND #$03E0
    case 0xC46C7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/unknown/C4/C4958E.asm:88 AND #$03E0
    // Overlapping static entry reached from 0xC46C7D.
    case 0xC46C7F: cpu.execute_instruction<0x03>(0x00004A, 2); return true;
    // src/unknown/C4/C4958E.asm:89 LSR
    case 0xC46C80: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:90 LSR
    case 0xC46C81: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:91 LSR
    case 0xC46C82: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:92 LSR
    case 0xC46C83: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:93 LSR
    case 0xC46C84: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:94 JSR GET_COLOUR_FADE_SLOPE
    case 0xC46C85: cpu.execute_instruction<0x20>(0x006838, 3); return true;
    // src/unknown/C4/C4958E.asm:95 LDX @VIRTUAL04
    case 0xC46C88: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4958E.asm:96 STA BUFFER + $400,X
    case 0xC46C8A: cpu.execute_instruction<0x9F>(0x7F0400, 4); return true;
    // src/unknown/C4/C4958E.asm:97 LDY @LOCAL06
    case 0xC46C8E: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C4/C4958E.asm:98 STY @LOCAL01
    case 0xC46C90: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C4958E.asm:99 LDY #$0400
    case 0xC46C92: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000400, 3); return true;
    // src/unknown/C4/C4958E.asm:99 LDY #$0400
    // Overlapping static entry reached from 0xC46C92.
    case 0xC46C94: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/unknown/C4/C4958E.asm:100 LDA @VIRTUAL02
    case 0xC46C95: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:100 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC46C94.
    case 0xC46C96: cpu.execute_instruction<0x02>(0x000029, 2); return true;
    // src/unknown/C4/C4958E.asm:101 AND #$7C00
    case 0xC46C97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/unknown/C4/C4958E.asm:101 AND #$7C00
    // Overlapping static entry reached from 0xC46C97.
    case 0xC46C99: cpu.execute_instruction<0x7C>(0x003D22, 3); return true;
    // src/unknown/C4/C4958E.asm:102 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC46C9A: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C4/C4958E.asm:103 TAX
    case 0xC46C9E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:104 LDY #$0400
    case 0xC46C9F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000400, 3); return true;
    // src/unknown/C4/C4958E.asm:104 LDY #$0400
    // Overlapping static entry reached from 0xC46C9F.
    case 0xC46CA1: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/unknown/C4/C4958E.asm:105 LDA @LOCAL02
    case 0xC46CA2: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4958E.asm:105 LDA @LOCAL02
    // Overlapping static entry reached from 0xC46CA1.
    case 0xC46CA3: cpu.execute_instruction<0x14>(0x000029, 2); return true;
    // src/unknown/C4/C4958E.asm:106 AND #$7C00
    case 0xC46CA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/unknown/C4/C4958E.asm:106 AND #$7C00
    // Overlapping static entry reached from 0xC46CA3.
    case 0xC46CA5: cpu.execute_instruction<0x00>(0x00007C, 2); return true;
    // src/unknown/C4/C4958E.asm:106 AND #$7C00
    // Overlapping static entry reached from 0xC46CA4.
    case 0xC46CA6: cpu.execute_instruction<0x7C>(0x003D22, 3); return true;
    // src/unknown/C4/C4958E.asm:107 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC46CA7: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C4/C4958E.asm:108 LDY @LOCAL01
    case 0xC46CAB: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C4958E.asm:109 JSR GET_COLOUR_FADE_SLOPE
    case 0xC46CAD: cpu.execute_instruction<0x20>(0x006838, 3); return true;
    // src/unknown/C4/C4958E.asm:110 LDX @VIRTUAL04
    case 0xC46CB0: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4958E.asm:111 STA BUFFER + $600,X
    case 0xC46CB2: cpu.execute_instruction<0x9F>(0x7F0600, 4); return true;
    // src/unknown/C4/C4958E.asm:112 INC @LOCAL04
    case 0xC46CB6: cpu.execute_instruction<0xE6>(0x000018, 2); return true;
    // src/unknown/C4/C4958E.asm:114 LDA @LOCAL05
    case 0xC46CB8: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4958E.asm:115 CLC
    case 0xC46CBA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:116 ADC #16
    case 0xC46CBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4958E.asm:116 ADC #16
    // Overlapping static entry reached from 0xC46CBB.
    case 0xC46CBD: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C4/C4958E.asm:117 CMP @LOCAL04
    case 0xC46CBE: cpu.execute_instruction<0xC5>(0x000018, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/unknown/C4/C4958E.asm:118 BGTL @UNKNOWN1
    case 0xC46CC0: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/unknown/C4/C4958E.asm:118 BGTL @UNKNOWN1
    case 0xC46CC2: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/unknown/C4/C4958E.asm:118 BGTL @UNKNOWN1
    case 0xC46CC4: cpu.execute_instruction<0x4C>(0x006C13, 3); return true;
    // src/unknown/C4/C4958E.asm:119 LDA @LOCAL05
    case 0xC46CC7: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4958E.asm:120 STA @LOCAL03
    case 0xC46CC9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4958E.asm:121 BRA @UNKNOWN7
    case 0xC46CCB: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/unknown/C4/C4958E.asm:123 ASL
    case 0xC46CCD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:124 STA @VIRTUAL02
    case 0xC46CCE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:125 CLC
    case 0xC46CD0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:126 ADC @LOCAL08
    case 0xC46CD1: cpu.execute_instruction<0x65>(0x000020, 2); return true;
    // src/unknown/C4/C4958E.asm:127 TAX
    case 0xC46CD3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:128 STX @LOCAL02
    case 0xC46CD4: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C4958E.asm:129 LDA __BSS_START__,X
    case 0xC46CD6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4958E.asm:130 AND #$001F
    case 0xC46CD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C4958E.asm:130 AND #$001F
    // Overlapping static entry reached from 0xC46CD9.
    case 0xC46CDB: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/unknown/C4/C4958E.asm:131 XBA
    case 0xC46CDC: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:132 AND #$FF00
    case 0xC46CDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C4958E.asm:132 AND #$FF00
    // Overlapping static entry reached from 0xC46CDD.
    case 0xC46CDF: cpu.execute_instruction<0xFF>(0x9F02A6, 4); return true;
    // src/unknown/C4/C4958E.asm:133 LDX @VIRTUAL02
    case 0xC46CE0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:134 STA BUFFER + $800,X
    case 0xC46CE2: cpu.execute_instruction<0x9F>(0x7F0800, 4); return true;
    // src/unknown/C4/C4958E.asm:134 STA BUFFER + $800,X
    // Overlapping static entry reached from 0xC46CDF.
    case 0xC46CE3: cpu.execute_instruction<0x00>(0x000008, 2); return true;
    // src/unknown/C4/C4958E.asm:135 LDX @LOCAL02
    case 0xC46CE6: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C4958E.asm:136 LDA __BSS_START__,X
    case 0xC46CE8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4958E.asm:137 AND #$03E0
    case 0xC46CEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/unknown/C4/C4958E.asm:137 AND #$03E0
    // Overlapping static entry reached from 0xC46CEB.
    case 0xC46CED: cpu.execute_instruction<0x03>(0x00000A, 2); return true;
    // src/unknown/C4/C4958E.asm:138 ASL
    case 0xC46CEE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:139 ASL
    case 0xC46CEF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:140 ASL
    case 0xC46CF0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:141 LDX @VIRTUAL02
    case 0xC46CF1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:142 STA BUFFER + $A00,X
    case 0xC46CF3: cpu.execute_instruction<0x9F>(0x7F0A00, 4); return true;
    // src/unknown/C4/C4958E.asm:143 LDX @LOCAL02
    case 0xC46CF7: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C4958E.asm:144 LDA __BSS_START__,X
    case 0xC46CF9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4958E.asm:145 AND #$7C00
    case 0xC46CFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/unknown/C4/C4958E.asm:145 AND #$7C00
    // Overlapping static entry reached from 0xC46CFC.
    case 0xC46CFE: cpu.execute_instruction<0x7C>(0x004A4A, 3); return true;
    // src/unknown/C4/C4958E.asm:146 LSR
    case 0xC46CFF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:147 LSR
    case 0xC46D00: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:148 LDX @VIRTUAL02
    case 0xC46D01: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:149 STA BUFFER + $C00,X
    case 0xC46D03: cpu.execute_instruction<0x9F>(0x7F0C00, 4); return true;
    // src/unknown/C4/C4958E.asm:150 LDA @LOCAL03
    case 0xC46D07: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4958E.asm:151 INC
    case 0xC46D09: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:152 STA @LOCAL03
    case 0xC46D0A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4958E.asm:154 LDA @LOCAL05
    case 0xC46D0C: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4958E.asm:155 CLC
    case 0xC46D0E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:156 ADC #16
    case 0xC46D0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4958E.asm:156 ADC #16
    // Overlapping static entry reached from 0xC46D0F.
    case 0xC46D11: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4958E.asm:157 STA @VIRTUAL02
    case 0xC46D12: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:158 LDA @LOCAL03
    case 0xC46D14: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4958E.asm:159 CMP @VIRTUAL02
    case 0xC46D16: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:160 BCC @UNKNOWN6
    case 0xC46D18: cpu.execute_instruction<0x90>(0x0000B3, 2); return true;
    // src/unknown/C4/C4958E.asm:161 LDA @LOCAL07
    case 0xC46D1A: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4958E.asm:162 LSR
    case 0xC46D1C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:163 STA @LOCAL07
    case 0xC46D1D: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4958E.asm:164 LDA @VIRTUAL02
    case 0xC46D1F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:165 STA @LOCAL05
    case 0xC46D21: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4958E.asm:167 LDA @LOCAL05
    case 0xC46D23: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4958E.asm:168 CMP #256
    case 0xC46D25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C4958E.asm:168 CMP #256
    // Overlapping static entry reached from 0xC46D25.
    case 0xC46D27: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4958E.asm:169 BCCL @UNKNOWN0
    case 0xC46D28: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4958E.asm:169 BCCL @UNKNOWN0
    // Overlapping static entry reached from 0xC46D27.
    case 0xC46D29: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4958E.asm:169 BCCL @UNKNOWN0
    case 0xC46D2A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4958E.asm:169 BCCL @UNKNOWN0
    // Overlapping static entry reached from 0xC46D29.
    case 0xC46D2B: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4958E.asm:169 BCCL @UNKNOWN0
    case 0xC46D2C: cpu.execute_instruction<0x4C>(0x006C0C, 3); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4958E.asm:169 BCCL @UNKNOWN0
    // Overlapping static entry reached from 0xC46D2B.
    case 0xC46D2D: cpu.execute_instruction<0x0C>(0x002B6C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4958E.asm:170 END_C_FUNCTION
    case 0xC46D2F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4958E.asm:170 END_C_FUNCTION
    case 0xC46D30: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C496E7.asm (unresolved).
bool execute_unresolved_c4_c496e7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C496E7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46D31: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C496E7.asm:7 LDY #.LOWORD(PALETTES)
    case 0xC46D33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000200, 3); return true;
    // src/unknown/C4/C496E7.asm:7 LDY #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC46D33.
    case 0xC46D35: cpu.execute_instruction<0x02>(0x000020, 2); return true;
    // src/unknown/C4/C496E7.asm:8 JSR UNKNOWN_C4958E
    case 0xC46D36: cpu.execute_instruction<0x20>(0x006BD8, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C496E7.asm:9 END_C_FUNCTION
    case 0xC46D39: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C496F0.asm (unresolved).
bool execute_unresolved_c4_c496f0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C496F0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46D3A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C496F0.asm:7 LDY #.LOWORD(MAP_PALETTE_BACKUP)
    case 0xC46D3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FC, 2); else cpu.execute_instruction<0xA0>(0x0047FC, 3); return true;
    // src/unknown/C4/C496F0.asm:7 LDY #.LOWORD(MAP_PALETTE_BACKUP)
    // Overlapping static entry reached from 0xC46D3C.
    case 0xC46D3E: cpu.execute_instruction<0x47>(0x000020, 2); return true;
    // src/unknown/C4/C496F0.asm:8 JSR UNKNOWN_C4958E
    case 0xC46D3F: cpu.execute_instruction<0x20>(0x006BD8, 3); return true;
    // src/unknown/C4/C496F0.asm:8 JSR UNKNOWN_C4958E
    // Overlapping static entry reached from 0xC46D3E.
    case 0xC46D40: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // src/unknown/C4/C496F0.asm:8 JSR UNKNOWN_C4958E
    // Overlapping static entry reached from 0xC46D40.
    case 0xC46D41: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C496F0.asm:9 END_C_FUNCTION
    case 0xC46D42: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C496F9.asm (unresolved).
bool execute_unresolved_c4_c496f9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C496F9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46D43: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C496F9.asm:8 END_STACK_VARS
    case 0xC46D45: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C496F9.asm:8 END_STACK_VARS
    case 0xC46D46: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C496F9.asm:8 END_STACK_VARS
    case 0xC46D47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C496F9.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46D47.
    case 0xC46D49: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C496F9.asm:8 END_STACK_VARS
    case 0xC46D4A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC46D4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC46D4B.
    case 0xC46D4D: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC46D4E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC46D50: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC46D51: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC46D53: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC46D54: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC46D56: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C496F9.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC46D58: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C496F9.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC46D5A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C496F9.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC46D5C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C496F9.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC46D5E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C496F9.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC46D60: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C496F9.asm:12 LDA #^PALETTES
    case 0xC46D62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/C4/C496F9.asm:12 LDA #^PALETTES
    // Overlapping static entry reached from 0xC46D62.
    case 0xC46D64: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C496F9.asm:13 STA @LOCAL02+2
    case 0xC46D65: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C496F9.asm:14 LOADPTR BUFFER, @LOCAL00
    case 0xC46D67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C496F9.asm:14 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC46D67.
    case 0xC46D69: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C496F9.asm:14 LOADPTR BUFFER, @LOCAL00
    case 0xC46D6A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C496F9.asm:14 LOADPTR BUFFER, @LOCAL00
    case 0xC46D6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C496F9.asm:14 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC46D6C.
    case 0xC46D6E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C496F9.asm:14 LOADPTR BUFFER, @LOCAL00
    case 0xC46D6F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C496F9.asm:15 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46D71: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C496F9.asm:15 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46D73: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C496F9.asm:15 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46D75: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C496F9.asm:15 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46D77: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C496F9.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC46D79: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C496F9.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC46D7B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C496F9.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC46D7D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C496F9.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC46D7F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C496F9.asm:17 LDA #.LOWORD(PALETTES)
    case 0xC46D81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C496F9.asm:17 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC46D81.
    case 0xC46D83: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C496F9.asm:18 JSL MEMCPY24
    case 0xC46D84: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C496F9.asm:19 END_C_FUNCTION
    case 0xC46D88: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C496F9.asm:19 END_C_FUNCTION
    case 0xC46D89: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49740.asm (unresolved).
bool execute_unresolved_c4_c49740_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49740.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46D8A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49740.asm:8 END_STACK_VARS
    case 0xC46D8C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49740.asm:8 END_STACK_VARS
    case 0xC46D8D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49740.asm:8 END_STACK_VARS
    case 0xC46D8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49740.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46D8E.
    case 0xC46D90: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49740.asm:8 END_STACK_VARS
    case 0xC46D91: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC46D92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC46D92.
    case 0xC46D94: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC46D95: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC46D97: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC46D98: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC46D9A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC46D9B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC46D9D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C49740.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC46D9F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49740.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC46DA1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49740.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC46DA3: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49740.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC46DA5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49740.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC46DA7: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C49740.asm:12 LDA #^PALETTES
    case 0xC46DA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/C4/C49740.asm:12 LDA #^PALETTES
    // Overlapping static entry reached from 0xC46DA9.
    case 0xC46DAB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C49740.asm:13 STA @LOCAL02+2
    case 0xC46DAC: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49740.asm:14 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46DAE: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49740.asm:14 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46DB0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49740.asm:14 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46DB2: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49740.asm:14 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC46DB4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49740.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46DB6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49740.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46DB8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49740.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46DBA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49740.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46DBC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49740.asm:16 LOADPTR BUFFER, @LOCAL01
    case 0xC46DBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49740.asm:16 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC46DBE.
    case 0xC46DC0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C49740.asm:16 LOADPTR BUFFER, @LOCAL01
    case 0xC46DC1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49740.asm:16 LOADPTR BUFFER, @LOCAL01
    case 0xC46DC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49740.asm:16 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC46DC3.
    case 0xC46DC5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C49740.asm:16 LOADPTR BUFFER, @LOCAL01
    case 0xC46DC6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C49740.asm:17 LDA #.LOWORD(PALETTES)
    case 0xC46DC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C49740.asm:17 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC46DC8.
    case 0xC46DCA: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C49740.asm:18 JSL MEMCPY24
    case 0xC46DCB: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/unknown/C4/C49740.asm:19 LDA #24
    case 0xC46DCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C49740.asm:19 LDA #24
    // Overlapping static entry reached from 0xC46DCF.
    case 0xC46DD1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49740.asm:20 JSL UNKNOWN_C0856B
    case 0xC46DD2: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49740.asm:21 END_C_FUNCTION
    case 0xC46DD6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49740.asm:21 END_C_FUNCTION
    case 0xC46DD7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4978E.asm (unresolved).
bool execute_unresolved_c4_c4978e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4978E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46DD8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4978E.asm:6 END_STACK_VARS
    case 0xC46DDA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4978E.asm:6 END_STACK_VARS
    case 0xC46DDB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4978E.asm:6 END_STACK_VARS
    case 0xC46DDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4978E.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC46DDC.
    case 0xC46DDE: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4978E.asm:6 END_STACK_VARS
    case 0xC46DDF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4978E.asm:7 LDA #.LOWORD(PALETTES) ;why is preparing the destination pointer for this memcpy so needlessly expensive?
    case 0xC46DE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C4978E.asm:7 LDA #.LOWORD(PALETTES) ;why is preparing the destination pointer for this memcpy so needlessly expensive?
    // Overlapping static entry reached from 0xC46DE0.
    case 0xC46DE2: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C4978E.asm:8 STORE_INT1632 @VIRTUAL06
    case 0xC46DE3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C4978E.asm:8 STORE_INT1632 @VIRTUAL06
    case 0xC46DE5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C4/C4978E.asm:9 CLC
    case 0xC46DE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    case 0xC46DE8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    case 0xC46DEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC46DEA.
    case 0xC46DEC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    case 0xC46DED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    case 0xC46DEF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    case 0xC46DF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007E, 2); else cpu.execute_instruction<0x69>(0x00007E, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC46DF1.
    case 0xC46DF3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    case 0xC46DF4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4978E.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46DF6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4978E.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46DF8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4978E.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46DFA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4978E.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46DFC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4978E.asm:12 LDX #BPP4PALETTE_SIZE * 16
    case 0xC46DFE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/C4/C4978E.asm:12 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC46DFE.
    case 0xC46E00: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C4/C4978E.asm:13 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    case 0xC46E01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0047FC, 3); return true;
    // src/unknown/C4/C4978E.asm:13 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    // Overlapping static entry reached from 0xC46E01.
    case 0xC46E03: cpu.execute_instruction<0x47>(0x000022, 2); return true;
    // src/unknown/C4/C4978E.asm:14 JSL MEMCPY16
    case 0xC46E04: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C4/C4978E.asm:14 JSL MEMCPY16
    // Overlapping static entry reached from 0xC46E03.
    case 0xC46E05: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/unknown/C4/C4978E.asm:14 JSL MEMCPY16
    // Overlapping static entry reached from 0xC46E05.
    case 0xC46E07: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4978E.asm:15 END_C_FUNCTION
    case 0xC46E08: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4978E.asm:15 END_C_FUNCTION
    case 0xC46E09: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C497C0.asm (unresolved).
bool execute_unresolved_c4_c497c0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C497C0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46E0A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C497C0.asm:11 END_STACK_VARS
    case 0xC46E0C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C497C0.asm:11 END_STACK_VARS
    case 0xC46E0D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C497C0.asm:11 END_STACK_VARS
    case 0xC46E0E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C497C0.asm:11 END_STACK_VARS
    case 0xC46E0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C497C0.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC46E0F.
    case 0xC46E11: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C497C0.asm:11 END_STACK_VARS
    case 0xC46E12: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C497C0.asm:11 END_STACK_VARS
    case 0xC46E13: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C497C0.asm:12 STY @LOCAL02
    case 0xC46E14: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C497C0.asm:12 STY @LOCAL02
    // Overlapping static entry reached from 0xC46E11.
    case 0xC46E15: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C4/C497C0.asm:13 STA @VIRTUAL02
    case 0xC46E16: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C497C0.asm:13 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC46E15.
    case 0xC46E17: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC46E18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0047FC, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC46E18.
    case 0xC46E1A: cpu.execute_instruction<0x47>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC46E1B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC46E1A.
    case 0xC46E1C: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC46E1D: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC46E1E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC46E20: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC46E21: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC46E23: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C497C0.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC46E25: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C497C0.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46E27: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C497C0.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46E29: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C497C0.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46E2B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C497C0.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46E2D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C497C0.asm:17 TXA
    case 0xC46E2F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C497C0.asm:18 JSL UNKNOWN_C4954C
    case 0xC46E30: cpu.execute_instruction<0x22>(0xC46B96, 4); return true;
    // src/unknown/C4/C497C0.asm:19 LDY @LOCAL02
    case 0xC46E34: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C4/C497C0.asm:20 TYX
    case 0xC46E36: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C497C0.asm:21 LDA @VIRTUAL02
    case 0xC46E37: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C497C0.asm:22 JSL UNKNOWN_C496E7
    case 0xC46E39: cpu.execute_instruction<0x22>(0xC46D31, 4); return true;
    // src/unknown/C4/C497C0.asm:23 LDA @VIRTUAL02
    case 0xC46E3D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C497C0.asm:24 CMP #1
    case 0xC46E3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C497C0.asm:24 CMP #1
    // Overlapping static entry reached from 0xC46E3F.
    case 0xC46E41: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C497C0.asm:25 BEQ @UNKNOWN2
    case 0xC46E42: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C497C0.asm:26 LDA #0
    case 0xC46E44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C497C0.asm:26 LDA #0
    // Overlapping static entry reached from 0xC46E44.
    case 0xC46E46: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C497C0.asm:27 STA @LOCAL01
    case 0xC46E47: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C497C0.asm:28 BRA @UNKNOWN1
    case 0xC46E49: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C497C0.asm:30 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC46E4B: cpu.execute_instruction<0x22>(0xC4262B, 4); return true;
    // src/unknown/C4/C497C0.asm:31 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC46E4F: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C4/C497C0.asm:32 LDA @LOCAL01
    case 0xC46E53: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C497C0.asm:33 INC
    case 0xC46E55: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C497C0.asm:34 STA @LOCAL01
    case 0xC46E56: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C497C0.asm:36 CMP @VIRTUAL02
    case 0xC46E58: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C497C0.asm:37 BCC @UNKNOWN0
    case 0xC46E5A: cpu.execute_instruction<0x90>(0x0000EF, 2); return true;
    // src/unknown/C4/C497C0.asm:39 JSL UNKNOWN_C49740
    case 0xC46E5C: cpu.execute_instruction<0x22>(0xC46D8A, 4); return true;
    // src/unknown/C4/C497C0.asm:40 LDA #24
    case 0xC46E60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C497C0.asm:40 LDA #24
    // Overlapping static entry reached from 0xC46E60.
    case 0xC46E62: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C497C0.asm:41 JSL UNKNOWN_C0856B
    case 0xC46E63: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C497C0.asm:42 END_C_FUNCTION
    case 0xC46E67: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C497C0.asm:42 END_C_FUNCTION
    case 0xC46E68: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4981F.asm (unresolved).
bool execute_unresolved_c4_c4981f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4981F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46E69: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4981F.asm:6 END_STACK_VARS
    case 0xC46E6B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4981F.asm:6 END_STACK_VARS
    case 0xC46E6C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4981F.asm:6 END_STACK_VARS
    case 0xC46E6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4981F.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC46E6D.
    case 0xC46E6F: cpu.execute_instruction<0xFF>(0x34A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4981F.asm:6 END_STACK_VARS
    case 0xC46E70: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC46E71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000B34, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    // Overlapping static entry reached from 0xC46E71.
    case 0xC46E73: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC46E74: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC46E76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    // Overlapping static entry reached from 0xC46E76.
    case 0xC46E78: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC46E79: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC46E7B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    // Overlapping static entry reached from 0xC46E7B.
    case 0xC46E7D: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC46E7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    // Overlapping static entry reached from 0xC46E7E.
    case 0xC46E80: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC46E81: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC46E83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC46E85: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    // Overlapping static entry reached from 0xC46E83.
    case 0xC46E86: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    // Overlapping static entry reached from 0xC46E86.
    case 0xC46E88: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4981F.asm:8 END_C_FUNCTION
    case 0xC46E89: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4981F.asm:8 END_C_FUNCTION
    case 0xC46E8A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49841.asm (unresolved).
bool execute_unresolved_c4_c49841_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49841.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46E8B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C49841.asm:5 LDA #1
    case 0xC46E8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C49841.asm:5 LDA #1
    // Overlapping static entry reached from 0xC46E8D.
    case 0xC46E8F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49841.asm:6 JSL UNKNOWN_C2EA15
    case 0xC46E90: cpu.execute_instruction<0x22>(0xC2E92E, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49841.asm:7 END_C_FUNCTION
    case 0xC46E94: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49A4B.asm (unresolved).
bool execute_unresolved_c4_c49a4b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49A4B.asm:3 BEGIN_C_FUNCTION
    case 0xC46E95: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C49A4B.asm:5 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC46E97: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C4/C49A4B.asm:6 JSL UNKNOWN_C2DB3F
    case 0xC46E9B: cpu.execute_instruction<0x22>(0xC2DAB4, 4); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C49A4B.asm:7 END_C_FUNCTION
    case 0xC46E9F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49A56-jp.asm (unresolved).
bool execute_unresolved_c4_c49a56_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49A56-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46EA0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49A56-jp.asm:8 END_STACK_VARS
    case 0xC46EA2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49A56-jp.asm:8 END_STACK_VARS
    case 0xC46EA3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49A56-jp.asm:8 END_STACK_VARS
    case 0xC46EA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49A56-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC46EA4.
    case 0xC46EA6: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49A56-jp.asm:8 END_STACK_VARS
    case 0xC46EA7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49A56-jp.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC46EA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49A56-jp.asm:9 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC46EA8.
    case 0xC46EAA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C49A56-jp.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC46EAB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49A56-jp.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC46EAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49A56-jp.asm:9 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC46EAD.
    case 0xC46EAF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C49A56-jp.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC46EB0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:10 JSL UNKNOWN_C08726
    case 0xC46EB2: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/unknown/C4/C49A56-jp.asm:11 LDY #VRAM::TEXT_LAYER_TILES
    case 0xC46EB6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:11 LDY #VRAM::TEXT_LAYER_TILES
    // Overlapping static entry reached from 0xC46EB6.
    case 0xC46EB8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:12 LDX #VRAM::TEXT_LAYER_TILEMAP
    case 0xC46EB9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:12 LDX #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xC46EB9.
    case 0xC46EBB: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:13 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC46EBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:13 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC46EBC.
    case 0xC46EBE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:14 JSL SET_BG3_VRAM_LOCATION
    case 0xC46EBF: cpu.execute_instruction<0x22>(0xC08E0D, 4); return true;
    // src/unknown/C4/C49A56-jp.asm:15 LDA #0
    case 0xC46EC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:15 LDA #0
    // Overlapping static entry reached from 0xC46EC3.
    case 0xC46EC5: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:16 STA [@VIRTUAL06]
    case 0xC46EC6: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49A56-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC46EC8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49A56-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC46ECA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49A56-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC46ECC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49A56-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC46ECE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C49A56-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC46ED0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C49A56-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    // Overlapping static entry reached from 0xC46ED0.
    case 0xC46ED2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C49A56-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC46ED3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C49A56-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    // Overlapping static entry reached from 0xC46ED3.
    case 0xC46ED5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49A56-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC46ED6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C49A56-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC46ED8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C49A56-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC46EDA: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C49A56-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    // Overlapping static entry reached from 0xC46ED8.
    case 0xC46EDB: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C49A56-jp.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    // Overlapping static entry reached from 0xC46EDB.
    case 0xC46EDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00DDA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49A56-jp.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    case 0xC46EDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DD, 2); else cpu.execute_instruction<0xA9>(0x0030DD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49A56-jp.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC46EDD.
    case 0xC46EDF: cpu.execute_instruction<0xDD>(0x008530, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49A56-jp.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC46EDE.
    case 0xC46EE0: cpu.execute_instruction<0x30>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C49A56-jp.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    case 0xC46EE1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C49A56-jp.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC46EE0.
    case 0xC46EE2: cpu.execute_instruction<0x0E>(0x00E0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49A56-jp.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    case 0xC46EE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49A56-jp.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC46EE3.
    case 0xC46EE5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C49A56-jp.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    case 0xC46EE6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:20 LDX #8
    case 0xC46EE8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:20 LDX #8
    // Overlapping static entry reached from 0xC46EE8.
    case 0xC46EEA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:21 LDA #.LOWORD(PALETTES)
    case 0xC46EEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:21 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC46EEB.
    case 0xC46EED: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:22 JSL MEMCPY16
    case 0xC46EEE: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C4/C49A56-jp.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC46EF2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:24 LDA #PALETTE_UPLOAD::FULL
    case 0xC46EF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:25 STA PALETTE_UPLOAD_MODE
    case 0xC46EF6: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:25 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC46EF4.
    case 0xC46EF7: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/C4/C49A56-jp.asm:26 STZ_BADOPT @LOCAL00
    case 0xC46EF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C4/C49A56-jp.asm:26 STZ_BADOPT @LOCAL00
    case 0xC46EFB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C4/C49A56-jp.asm:26 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC46EF9.
    case 0xC46EFC: cpu.execute_instruction<0x0E>(0x0080A2, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:27 LDX #32 * 52
    case 0xC46EFD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000680, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:27 LDX #32 * 52
    // Overlapping static entry reached from 0xC46EFD.
    case 0xC46EFF: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC46F00: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:28 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC46EFF.
    case 0xC46F01: cpu.execute_instruction<0x20>(0x0018A9, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:29 LDA #.LOWORD(VWF_BUFFER)
    case 0xC46F02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x003918, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:29 LDA #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC46F02.
    case 0xC46F04: cpu.execute_instruction<0x39>(0x00ED22, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:30 JSL MEMSET16
    case 0xC46F05: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C49A56-jp.asm:30 JSL MEMSET16
    // Overlapping static entry reached from 0xC46F04.
    case 0xC46F07: cpu.execute_instruction<0x8E>(0x00A0C0, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:31 LDY #16
    case 0xC46F09: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:31 LDY #16
    // Overlapping static entry reached from 0xC46F07.
    case 0xC46F0A: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:31 LDY #16
    // Overlapping static entry reached from 0xC46F09.
    case 0xC46F0B: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:32 LDX #0
    case 0xC46F0C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:32 LDX #0
    // Overlapping static entry reached from 0xC46F0C.
    case 0xC46F0E: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:33 STX @LOCAL02
    case 0xC46F0F: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:34 BRA @UNKNOWN3
    case 0xC46F11: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:36 TXA
    case 0xC46F13: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:37 ASL
    case 0xC46F14: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:38 ASL
    case 0xC46F15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:39 ASL
    case 0xC46F16: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:40 ASL
    case 0xC46F17: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:41 ASL
    case 0xC46F18: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:42 ASL
    case 0xC46F19: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:43 TAX
    case 0xC46F1A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:44 STZ BG2_BUFFER,X
    case 0xC46F1B: cpu.execute_instruction<0x9E>(0x008176, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:45 TAX
    case 0xC46F1E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:46 STZ BG2_BUFFER + 2,X
    case 0xC46F1F: cpu.execute_instruction<0x9E>(0x008178, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:47 TAX
    case 0xC46F22: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:48 STZ BG2_BUFFER + 4,X
    case 0xC46F23: cpu.execute_instruction<0x9E>(0x00817A, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:49 LDA #3
    case 0xC46F26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:49 LDA #3
    // Overlapping static entry reached from 0xC46F26.
    case 0xC46F28: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:50 STA @LOCAL01
    case 0xC46F29: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:51 BRA @UNKNOWN2
    case 0xC46F2B: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:53 ASL
    case 0xC46F2D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:54 STA @VIRTUAL02
    case 0xC46F2E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:55 LDX @LOCAL02
    case 0xC46F30: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:56 TXA
    case 0xC46F32: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:57 ASL
    case 0xC46F33: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:58 ASL
    case 0xC46F34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:59 ASL
    case 0xC46F35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:60 ASL
    case 0xC46F36: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:61 ASL
    case 0xC46F37: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:62 ASL
    case 0xC46F38: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:63 CLC
    case 0xC46F39: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:64 ADC @VIRTUAL02
    case 0xC46F3A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:65 TAX
    case 0xC46F3C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:66 TYA
    case 0xC46F3D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:67 CLC
    case 0xC46F3E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:68 ADC #$2000
    case 0xC46F3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:68 ADC #$2000
    // Overlapping static entry reached from 0xC46F3F.
    case 0xC46F41: cpu.execute_instruction<0x20>(0x00769D, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:69 STA BG2_BUFFER,X
    case 0xC46F42: cpu.execute_instruction<0x9D>(0x008176, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:69 STA BG2_BUFFER,X
    // Overlapping static entry reached from 0xC46F41.
    case 0xC46F44: cpu.execute_instruction<0x81>(0x0000C8, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:70 INY
    case 0xC46F45: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:71 LDA @LOCAL01
    case 0xC46F46: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:72 INC
    case 0xC46F48: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:73 STA @LOCAL01
    case 0xC46F49: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:75 CMP #29
    case 0xC46F4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:75 CMP #29
    // Overlapping static entry reached from 0xC46F4B.
    case 0xC46F4D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:76 BCC @UNKNOWN1
    case 0xC46F4E: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:77 LDX @LOCAL02
    case 0xC46F50: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:78 TXA
    case 0xC46F52: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:79 ASL
    case 0xC46F53: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:80 ASL
    case 0xC46F54: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:81 ASL
    case 0xC46F55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:82 ASL
    case 0xC46F56: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:83 ASL
    case 0xC46F57: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:84 ASL
    case 0xC46F58: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:85 TAX
    case 0xC46F59: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:86 STZ BG2_BUFFER + 58,X
    case 0xC46F5A: cpu.execute_instruction<0x9E>(0x0081B0, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:87 TAX
    case 0xC46F5D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:88 STZ BG2_BUFFER + 60,X
    case 0xC46F5E: cpu.execute_instruction<0x9E>(0x0081B2, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:89 TAX
    case 0xC46F61: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:90 STZ BG2_BUFFER + 62,X
    case 0xC46F62: cpu.execute_instruction<0x9E>(0x0081B4, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:91 LDX @LOCAL02
    case 0xC46F65: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:92 INX
    case 0xC46F67: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:93 STX @LOCAL02
    case 0xC46F68: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:95 CPX #32
    case 0xC46F6A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:95 CPX #32
    // Overlapping static entry reached from 0xC46F6A.
    case 0xC46F6C: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:96 BCC @UNKNOWN0
    case 0xC46F6D: cpu.execute_instruction<0x90>(0x0000A4, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49A56-jp.asm:97 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC46F6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x008176, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49A56-jp.asm:97 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC46F6F.
    case 0xC46F71: cpu.execute_instruction<0x81>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49A56-jp.asm:97 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC46F72: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49A56-jp.asm:97 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC46F71.
    case 0xC46F73: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C49A56-jp.asm:97 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC46F74: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49A56-jp.asm:97 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC46F75: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C49A56-jp.asm:97 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC46F77: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C49A56-jp.asm:97 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC46F78: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C49A56-jp.asm:97 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC46F7A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:98 REP #PROC_FLAGS::ACCUM8
    case 0xC46F7C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49A56-jp.asm:99 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC46F7E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49A56-jp.asm:99 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC46F80: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49A56-jp.asm:99 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC46F82: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49A56-jp.asm:99 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC46F84: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C49A56-jp.asm:99 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC46F86: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C49A56-jp.asm:99 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC46F86.
    case 0xC46F88: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C49A56-jp.asm:99 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC46F89: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C49A56-jp.asm:99 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC46F89.
    case 0xC46F8B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49A56-jp.asm:99 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC46F8C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C49A56-jp.asm:99 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC46F8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C49A56-jp.asm:99 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC46F90: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C49A56-jp.asm:99 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC46F8E.
    case 0xC46F91: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C49A56-jp.asm:99 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC46F91.
    case 0xC46F93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x001AA9, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:101 LDA #26
    case 0xC46F94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x00001A, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:101 LDA #26
    // Overlapping static entry reached from 0xC46F93.
    case 0xC46F95: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56-jp.asm:101 LDA #26
    // Overlapping static entry reached from 0xC46F94.
    case 0xC46F96: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C49A56-jp.asm:102 STA UNKNOWN_7E3C18
    case 0xC46F97: cpu.execute_instruction<0x8D>(0x003F9E, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:103 STZ UNKNOWN_7E3C1C
    case 0xC46F9A: cpu.execute_instruction<0x9C>(0x003FA2, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:104 LDA #.LOWORD(-1)
    case 0xC46F9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:104 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46F9D.
    case 0xC46F9F: cpu.execute_instruction<0xFF>(0x3FA48D, 4); return true;
    // src/unknown/C4/C49A56-jp.asm:105 STA UNKNOWN_7E3C1E
    case 0xC46FA0: cpu.execute_instruction<0x8D>(0x003FA4, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:106 STZ UNKNOWN_7E3C20
    case 0xC46FA3: cpu.execute_instruction<0x9C>(0x003FA6, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:107 STZ UNKNOWN_7E3C14
    case 0xC46FA6: cpu.execute_instruction<0x9C>(0x003F9A, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:108 STZ UNKNOWN_7E3C16
    case 0xC46FA9: cpu.execute_instruction<0x9C>(0x003F9C, 3); return true;
    // src/unknown/C4/C49A56-jp.asm:109 JSL UNKNOWN_C08744
    case 0xC46FAC: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49A56-jp.asm:110 END_C_FUNCTION
    case 0xC46FB0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49A56-jp.asm:110 END_C_FUNCTION
    case 0xC46FB1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49B6E-jp.asm (unresolved).
bool execute_unresolved_c4_c49b6e_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46FB2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:9 END_STACK_VARS
    case 0xC46FB4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:9 END_STACK_VARS
    case 0xC46FB5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:9 END_STACK_VARS
    case 0xC46FB6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:9 END_STACK_VARS
    case 0xC46FB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC46FB7.
    case 0xC46FB9: cpu.execute_instruction<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:9 END_STACK_VARS
    case 0xC46FBA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:9 END_STACK_VARS
    case 0xC46FBB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:11 LDY #$01A0
    case 0xC46FBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A0, 2); else cpu.execute_instruction<0xA0>(0x0001A0, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:11 LDY #$01A0
    // Overlapping static entry reached from 0xC46FB9.
    case 0xC46FBD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x00AD01, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:11 LDY #$01A0
    // Overlapping static entry reached from 0xC46FBC.
    case 0xC46FBE: cpu.execute_instruction<0x01>(0x0000AD, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:12 LDA FLYOVER_SCREEN_OFFSET
    case 0xC46FBF: cpu.execute_instruction<0xAD>(0x00A133, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:12 LDA FLYOVER_SCREEN_OFFSET
    // Overlapping static entry reached from 0xC46FBE.
    case 0xC46FC0: cpu.execute_instruction<0x33>(0x0000A1, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:13 JSL MULT16
    case 0xC46FC2: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C49B6E-jp.asm:14 STA @LOCAL02
    case 0xC46FC6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:15 CLC
    case 0xC46FC8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:16 ADC #$04E0
    case 0xC46FC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x0004E0, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:16 ADC #$04E0
    // Overlapping static entry reached from 0xC46FC9.
    case 0xC46FCB: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:17 CMP #$3400
    case 0xC46FCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x003400, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:17 CMP #$3400
    // Overlapping static entry reached from 0xC46FCB.
    case 0xC46FCD: cpu.execute_instruction<0x00>(0x000034, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:17 CMP #$3400
    // Overlapping static entry reached from 0xC46FCC.
    case 0xC46FCE: cpu.execute_instruction<0x34>(0x0000B0, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:18 BCS @UNKNOWN1
    case 0xC46FCF: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:18 BCS @UNKNOWN1
    // Overlapping static entry reached from 0xC46FCE.
    case 0xC46FD0: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:19 JMP @UNKNOWN3
    case 0xC46FD1: cpu.execute_instruction<0x4C>(0x007055, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:19 JMP @UNKNOWN3
    // Overlapping static entry reached from 0xC46FD0.
    case 0xC46FD2: cpu.execute_instruction<0x55>(0x000070, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:21 LDA @LOCAL02
    case 0xC46FD4: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:22 STA @VIRTUAL02
    case 0xC46FD6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:23 LDA #$3400
    case 0xC46FD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x003400, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:23 LDA #$3400
    // Overlapping static entry reached from 0xC46FD8.
    case 0xC46FDA: cpu.execute_instruction<0x34>(0x000038, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:24 SEC
    case 0xC46FDB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:25 SBC @VIRTUAL02
    case 0xC46FDC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:26 STA @LOCAL01
    case 0xC46FDE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:27 BEQ @UNKNOWN2
    case 0xC46FE0: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC46FE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x003918, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC46FE2.
    case 0xC46FE4: cpu.execute_instruction<0x39>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC46FE5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC46FE7: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC46FE8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC46FEA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC46FEB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC46FED: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC46FEF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46FF1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46FF3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46FF5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC46FF7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:31 LDA FLYOVER_SCREEN_OFFSET
    case 0xC46FF9: cpu.execute_instruction<0xAD>(0x00A133, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:32 LDY #208
    case 0xC46FFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0000D0, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:32 LDY #208
    // Overlapping static entry reached from 0xC46FFC.
    case 0xC46FFE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:33 JSL MULT168
    case 0xC46FFF: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C49B6E-jp.asm:34 CLC
    case 0xC47003: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:35 ADC #VRAM::TEXT_LAYER_TILES + $80
    case 0xC47004: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x006080, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:35 ADC #VRAM::TEXT_LAYER_TILES + $80
    // Overlapping static entry reached from 0xC47004.
    case 0xC47006: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:36 TAY
    case 0xC47007: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:37 LDA @LOCAL01
    case 0xC47008: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:38 TAX
    case 0xC4700A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC4700B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:40 LDA #0
    case 0xC4700D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:41 JSL PREPARE_VRAM_COPY
    case 0xC4700F: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C49B6E-jp.asm:41 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4700D.
    case 0xC47010: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:41 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC47010.
    case 0xC47012: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A0, 2); else cpu.execute_instruction<0xC0>(0x00A0A0, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:43 LDY #$01A0
    case 0xC47013: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A0, 2); else cpu.execute_instruction<0xA0>(0x0001A0, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:43 LDY #$01A0
    // Overlapping static entry reached from 0xC47012.
    case 0xC47014: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x00AD01, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:43 LDY #$01A0
    // Overlapping static entry reached from 0xC47013.
    case 0xC47015: cpu.execute_instruction<0x01>(0x0000AD, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:44 LDA FLYOVER_SCREEN_OFFSET
    case 0xC47016: cpu.execute_instruction<0xAD>(0x00A133, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:44 LDA FLYOVER_SCREEN_OFFSET
    // Overlapping static entry reached from 0xC47015.
    case 0xC47017: cpu.execute_instruction<0x33>(0x0000A1, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:45 JSL MULT16
    case 0xC47019: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C49B6E-jp.asm:47 STA @LOCAL02
    case 0xC4701D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:48 CLC
    case 0xC4701F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:49 ADC #$04E0
    case 0xC47020: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x0004E0, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:49 ADC #$04E0
    // Overlapping static entry reached from 0xC47020.
    case 0xC47022: cpu.execute_instruction<0x04>(0x000038, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:50 SEC
    case 0xC47023: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:51 SBC #$3400
    case 0xC47024: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x003400, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:51 SBC #$3400
    // Overlapping static entry reached from 0xC47024.
    case 0xC47026: cpu.execute_instruction<0x34>(0x0000AA, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:52 TAX
    case 0xC47027: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:53 BEQ @UNKNOWN4
    case 0xC47028: cpu.execute_instruction<0xF0>(0x00005C, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:54 LDA @LOCAL02
    case 0xC4702A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:55 STA @VIRTUAL02
    case 0xC4702C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:56 LDA #VRAM::TEXT_LAYER_TILES + $D18 ;an upper limit on tile size
    case 0xC4702E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x006D18, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:56 LDA #VRAM::TEXT_LAYER_TILES + $D18 ;an upper limit on tile size
    // Overlapping static entry reached from 0xC4702E.
    case 0xC47030: cpu.execute_instruction<0x6D>(0x00E538, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:57 SEC
    case 0xC47031: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:58 SBC @VIRTUAL02
    case 0xC47032: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:58 SBC @VIRTUAL02
    // Overlapping static entry reached from 0xC47030.
    case 0xC47033: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:59 PROMOTENEARPTRA @VIRTUAL06
    case 0xC47034: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:59 PROMOTENEARPTRA @VIRTUAL06
    case 0xC47036: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:59 PROMOTENEARPTRA @VIRTUAL06
    case 0xC47037: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:59 PROMOTENEARPTRA @VIRTUAL06
    case 0xC47039: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:59 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4703A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:59 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4703C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:60 REP #PROC_FLAGS::ACCUM8
    case 0xC4703E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47040: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47042: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47044: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47046: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:62 LDY #VRAM::TEXT_LAYER_TILES + $80
    case 0xC47048: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x006080, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:62 LDY #VRAM::TEXT_LAYER_TILES + $80
    // Overlapping static entry reached from 0xC47048.
    case 0xC4704A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC4704B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:64 LDA #0
    case 0xC4704D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:65 JSL PREPARE_VRAM_COPY
    case 0xC4704F: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C49B6E-jp.asm:65 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4704D.
    case 0xC47050: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:65 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC47050.
    case 0xC47052: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000080, 2); else cpu.execute_instruction<0xC0>(0x003180, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:66 BRA @UNKNOWN4
    case 0xC47053: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:66 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC47052.
    case 0xC47054: cpu.execute_instruction<0x31>(0x0000A9, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC47055: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x003918, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC47054.
    case 0xC47056: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC47055.
    case 0xC47057: cpu.execute_instruction<0x39>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC47058: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC4705A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC4705B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC4705D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC4705E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC47060: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC47062: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47064: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47066: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47068: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4706A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:72 LDA FLYOVER_SCREEN_OFFSET
    case 0xC4706C: cpu.execute_instruction<0xAD>(0x00A133, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:73 LDY #208
    case 0xC4706F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0000D0, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:73 LDY #208
    // Overlapping static entry reached from 0xC4706F.
    case 0xC47071: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:74 JSL MULT168
    case 0xC47072: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C49B6E-jp.asm:75 CLC
    case 0xC47076: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:76 ADC #VRAM::TEXT_LAYER_TILES + $80
    case 0xC47077: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x006080, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:76 ADC #VRAM::TEXT_LAYER_TILES + $80
    // Overlapping static entry reached from 0xC47077.
    case 0xC47079: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:77 TAY
    case 0xC4707A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E-jp.asm:78 LDX #$04E0
    case 0xC4707B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0004E0, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:78 LDX #$04E0
    // Overlapping static entry reached from 0xC4707B.
    case 0xC4707D: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC4707E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:79 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4707D.
    case 0xC4707F: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:80 LDA #0
    case 0xC47080: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:81 JSL PREPARE_VRAM_COPY
    case 0xC47082: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C49B6E-jp.asm:81 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC47080.
    case 0xC47083: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C49B6E-jp.asm:81 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC47083.
    case 0xC47085: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00FFA9, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:84 LDA #.LOWORD(-1)
    case 0xC47086: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:84 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC47085.
    case 0xC47087: cpu.execute_instruction<0xFF>(0xA48DFF, 4); return true;
    // src/unknown/C4/C49B6E-jp.asm:84 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC47086.
    case 0xC47088: cpu.execute_instruction<0xFF>(0x3FA48D, 4); return true;
    // src/unknown/C4/C49B6E-jp.asm:85 STA UNKNOWN_7E3C1E
    case 0xC47089: cpu.execute_instruction<0x8D>(0x003FA4, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:85 STA UNKNOWN_7E3C1E
    // Overlapping static entry reached from 0xC47087.
    case 0xC4708B: cpu.execute_instruction<0x3F>(0x3FA69C, 4); return true;
    // src/unknown/C4/C49B6E-jp.asm:86 STZ UNKNOWN_7E3C20
    case 0xC4708C: cpu.execute_instruction<0x9C>(0x003FA6, 3); return true;
    // src/unknown/C4/C49B6E-jp.asm:87 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4708F: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:88 END_C_FUNCTION
    case 0xC47093: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49B6E-jp.asm:88 END_C_FUNCTION
    case 0xC47094: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49C56.asm (unresolved).
bool execute_unresolved_c4_c49c56_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49C56.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47095: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49C56.asm:12 END_STACK_VARS
    case 0xC47097: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49C56.asm:12 END_STACK_VARS
    case 0xC47098: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49C56.asm:12 END_STACK_VARS
    case 0xC47099: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49C56.asm:12 END_STACK_VARS
    case 0xC4709A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49C56.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4709A.
    case 0xC4709C: cpu.execute_instruction<0xFF>(0x18685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49C56.asm:12 END_STACK_VARS
    case 0xC4709D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49C56.asm:12 END_STACK_VARS
    case 0xC4709E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:13 CLC
    case 0xC4709F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:14 ADC UNKNOWN_7E3C16
    case 0xC470A0: cpu.execute_instruction<0x6D>(0x003F9C, 3); return true;
    // src/unknown/C4/C49C56.asm:15 STA UNKNOWN_7E3C16
    case 0xC470A3: cpu.execute_instruction<0x8D>(0x003F9C, 3); return true;
    // src/unknown/C4/C49C56.asm:16 STZ UNKNOWN_7E3C14
    case 0xC470A6: cpu.execute_instruction<0x9C>(0x003F9A, 3); return true;
    // src/unknown/C4/C49C56.asm:17 LSR
    case 0xC470A9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:18 LSR
    case 0xC470AA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:19 LSR
    case 0xC470AB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:23 CLC
    case 0xC470AC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:24 ADC FLYOVER_SCREEN_OFFSET
    case 0xC470AD: cpu.execute_instruction<0x6D>(0x00A133, 3); return true;
    // src/unknown/C4/C49C56.asm:25 STA FLYOVER_SCREEN_OFFSET
    case 0xC470B0: cpu.execute_instruction<0x8D>(0x00A133, 3); return true;
    // src/unknown/C4/C49C56.asm:26 CMP #32
    case 0xC470B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C4/C49C56.asm:26 CMP #32
    // Overlapping static entry reached from 0xC470B3.
    case 0xC470B5: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C49C56.asm:27 BCC @UNKNOWN0
    case 0xC470B6: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/unknown/C4/C49C56.asm:28 SEC
    case 0xC470B8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:29 SBC #32
    case 0xC470B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/unknown/C4/C49C56.asm:29 SBC #32
    // Overlapping static entry reached from 0xC470B9.
    case 0xC470BB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C49C56.asm:30 STA FLYOVER_SCREEN_OFFSET
    case 0xC470BC: cpu.execute_instruction<0x8D>(0x00A133, 3); return true;
    // src/unknown/C4/C49C56.asm:33 LDA UNKNOWN_7E3C16
    case 0xC470BF: cpu.execute_instruction<0xAD>(0x003F9C, 3); return true;
    // src/unknown/C4/C49C56.asm:34 LSR
    case 0xC470C2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:35 LSR
    case 0xC470C3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:36 LSR
    case 0xC470C4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:37 STA @LOCAL01
    case 0xC470C5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49C56.asm:38 LDY #32 * 13
    case 0xC470C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A0, 2); else cpu.execute_instruction<0xA0>(0x0001A0, 3); return true;
    // src/unknown/C4/C49C56.asm:38 LDY #32 * 13
    // Overlapping static entry reached from 0xC470C7.
    case 0xC470C9: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/unknown/C4/C49C56.asm:39 JSL MULT16
    case 0xC470CA: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C49C56.asm:39 JSL MULT16
    // Overlapping static entry reached from 0xC470C9.
    case 0xC470CB: cpu.execute_instruction<0x14>(0x000090, 2); return true;
    // src/unknown/C4/C49C56.asm:39 JSL MULT16
    // Overlapping static entry reached from 0xC470CB.
    case 0xC470CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006918, 3); return true;
    // src/unknown/C4/C49C56.asm:40 CLC
    case 0xC470CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:41 ADC #.LOWORD(VWF_BUFFER)
    case 0xC470CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000018, 2); else cpu.execute_instruction<0x69>(0x003918, 3); return true;
    // src/unknown/C4/C49C56.asm:41 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC470CD.
    case 0xC470D0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:41 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC470CF.
    case 0xC470D1: cpu.execute_instruction<0x39>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49C56.asm:42 PROMOTENEARPTRA @VIRTUAL06
    case 0xC470D2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C49C56.asm:42 PROMOTENEARPTRA @VIRTUAL06
    case 0xC470D4: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49C56.asm:42 PROMOTENEARPTRA @VIRTUAL06
    case 0xC470D5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C49C56.asm:42 PROMOTENEARPTRA @VIRTUAL06
    case 0xC470D7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C49C56.asm:42 PROMOTENEARPTRA @VIRTUAL06
    case 0xC470D8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C49C56.asm:42 PROMOTENEARPTRA @VIRTUAL06
    case 0xC470DA: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C49C56.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC470DC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49C56.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC470DE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49C56.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC470E0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49C56.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC470E2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49C56.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC470E4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C49C56.asm:45 LDY #32 * 13
    case 0xC470E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A0, 2); else cpu.execute_instruction<0xA0>(0x0001A0, 3); return true;
    // src/unknown/C4/C49C56.asm:45 LDY #32 * 13
    // Overlapping static entry reached from 0xC470E6.
    case 0xC470E8: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/unknown/C4/C49C56.asm:46 LDA @LOCAL01
    case 0xC470E9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49C56.asm:46 LDA @LOCAL01
    // Overlapping static entry reached from 0xC470E8.
    case 0xC470EA: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C4/C49C56.asm:47 STA @VIRTUAL02
    case 0xC470EB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49C56.asm:47 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC470EA.
    case 0xC470EC: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C4/C49C56.asm:48 LDA #4
    case 0xC470ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C49C56.asm:48 LDA #4
    // Overlapping static entry reached from 0xC470ED.
    case 0xC470EF: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C49C56.asm:49 SEC
    case 0xC470F0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:50 SBC @VIRTUAL02
    case 0xC470F1: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C49C56.asm:51 JSL MULT16
    case 0xC470F3: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C49C56.asm:52 TAX
    case 0xC470F7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:53 LDA #.LOWORD(VWF_BUFFER)
    case 0xC470F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x003918, 3); return true;
    // src/unknown/C4/C49C56.asm:53 LDA #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC470F8.
    case 0xC470FA: cpu.execute_instruction<0x39>(0x00C322, 3); return true;
    // src/unknown/C4/C49C56.asm:54 JSL MEMCPY16
    case 0xC470FB: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C4/C49C56.asm:54 JSL MEMCPY16
    // Overlapping static entry reached from 0xC470FA.
    case 0xC470FD: cpu.execute_instruction<0x8E>(0x00ADC0, 3); return true;
    // src/unknown/C4/C49C56.asm:55 LDA UNKNOWN_7E3C16
    case 0xC470FF: cpu.execute_instruction<0xAD>(0x003F9C, 3); return true;
    // src/unknown/C4/C49C56.asm:55 LDA UNKNOWN_7E3C16
    // Overlapping static entry reached from 0xC470FD.
    case 0xC47100: cpu.execute_instruction<0x9C>(0x004A3F, 3); return true;
    // src/unknown/C4/C49C56.asm:56 LSR
    case 0xC47102: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:57 LSR
    case 0xC47103: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:58 LSR
    case 0xC47104: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:59 STA @LOCAL01
    case 0xC47105: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49C56.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC47107: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49C56.asm:61 LDA #0
    case 0xC47109: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/unknown/C4/C49C56.asm:62 STA @LOCAL00
    case 0xC4710B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C49C56.asm:62 STA @LOCAL00
    // Overlapping static entry reached from 0xC47109.
    case 0xC4710C: cpu.execute_instruction<0x0E>(0x00A0A0, 3); return true;
    // src/unknown/C4/C49C56.asm:63 LDY #32 * 13
    case 0xC4710D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A0, 2); else cpu.execute_instruction<0xA0>(0x0001A0, 3); return true;
    // src/unknown/C4/C49C56.asm:63 LDY #32 * 13
    // Overlapping static entry reached from 0xC4710D.
    case 0xC4710F: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/unknown/C4/C49C56.asm:64 REP #PROC_FLAGS::ACCUM8
    case 0xC47110: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49C56.asm:64 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4710F.
    case 0xC47111: cpu.execute_instruction<0x20>(0x0012A5, 3); return true;
    // src/unknown/C4/C49C56.asm:65 LDA @LOCAL01
    case 0xC47112: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49C56.asm:66 JSL MULT16
    case 0xC47114: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C49C56.asm:67 TAX
    case 0xC47118: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:68 LDY #32 * 13
    case 0xC47119: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A0, 2); else cpu.execute_instruction<0xA0>(0x0001A0, 3); return true;
    // src/unknown/C4/C49C56.asm:68 LDY #32 * 13
    // Overlapping static entry reached from 0xC47119.
    case 0xC4711B: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/unknown/C4/C49C56.asm:69 LDA @LOCAL01
    case 0xC4711C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49C56.asm:69 LDA @LOCAL01
    // Overlapping static entry reached from 0xC4711B.
    case 0xC4711D: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C4/C49C56.asm:70 STA @VIRTUAL02
    case 0xC4711E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49C56.asm:70 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4711D.
    case 0xC4711F: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C4/C49C56.asm:71 LDA #4
    case 0xC47120: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C49C56.asm:71 LDA #4
    // Overlapping static entry reached from 0xC47120.
    case 0xC47122: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C49C56.asm:72 SEC
    case 0xC47123: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:73 SBC @VIRTUAL02
    case 0xC47124: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C49C56.asm:74 JSL MULT16
    case 0xC47126: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C49C56.asm:75 CLC
    case 0xC4712A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:76 ADC #.LOWORD(VWF_BUFFER)
    case 0xC4712B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000018, 2); else cpu.execute_instruction<0x69>(0x003918, 3); return true;
    // src/unknown/C4/C49C56.asm:76 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC4712B.
    case 0xC4712D: cpu.execute_instruction<0x39>(0x00ED22, 3); return true;
    // src/unknown/C4/C49C56.asm:77 JSL MEMSET16
    case 0xC4712E: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C49C56.asm:77 JSL MEMSET16
    // Overlapping static entry reached from 0xC4712D.
    case 0xC47130: cpu.execute_instruction<0x8E>(0x00ADC0, 3); return true;
    // src/unknown/C4/C49C56.asm:88 LDA UNKNOWN_7E3C16
    case 0xC47132: cpu.execute_instruction<0xAD>(0x003F9C, 3); return true;
    // src/unknown/C4/C49C56.asm:88 LDA UNKNOWN_7E3C16
    // Overlapping static entry reached from 0xC47130.
    case 0xC47133: cpu.execute_instruction<0x9C>(0x00293F, 3); return true;
    // src/unknown/C4/C49C56.asm:89 AND #$0007
    case 0xC47135: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C49C56.asm:89 AND #$0007
    // Overlapping static entry reached from 0xC47133.
    case 0xC47136: cpu.execute_instruction<0x07>(0x000000, 2); return true;
    // src/unknown/C4/C49C56.asm:89 AND #$0007
    // Overlapping static entry reached from 0xC47135.
    case 0xC47137: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C49C56.asm:90 STA UNKNOWN_7E3C16
    case 0xC47138: cpu.execute_instruction<0x8D>(0x003F9C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49C56.asm:95 END_C_FUNCTION
    case 0xC4713B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49C56.asm:95 END_C_FUNCTION
    case 0xC4713C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49CA8-jp.asm (unresolved).
bool execute_unresolved_c4_c49ca8_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4713D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:6 END_STACK_VARS
    case 0xC4713F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:6 END_STACK_VARS
    case 0xC47140: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:6 END_STACK_VARS
    case 0xC47141: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:6 END_STACK_VARS
    case 0xC47142: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC47142.
    case 0xC47144: cpu.execute_instruction<0xFF>(0x29685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:6 END_STACK_VARS
    case 0xC47145: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:6 END_STACK_VARS
    case 0xC47146: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8-jp.asm:7 AND #$00FF
    case 0xC47147: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49CA8-jp.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC47144.
    case 0xC47148: cpu.execute_instruction<0xFF>(0x048500, 4); return true;
    // src/unknown/C4/C49CA8-jp.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC47147.
    case 0xC47149: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC4714A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC4714C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC4714D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC4714F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC47150: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC47151: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8-jp.asm:9 PHP
    case 0xC47152: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8-jp.asm:10 LSR
    case 0xC47153: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8-jp.asm:11 LSR
    case 0xC47154: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8-jp.asm:12 LSR
    case 0xC47155: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8-jp.asm:13 PLP
    case 0xC47156: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8-jp.asm:14 BCC @UNKNOWN0
    case 0xC47157: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C4/C49CA8-jp.asm:15 ORA #$C000
    case 0xC47159: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C49CA8-jp.asm:15 ORA #$C000
    // Overlapping static entry reached from 0xC47159.
    case 0xC4715B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000285, 3); return true;
    // src/unknown/C4/C49CA8-jp.asm:17 STA @VIRTUAL02
    case 0xC4715C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49CA8-jp.asm:17 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4715B.
    case 0xC4715D: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C4/C49CA8-jp.asm:18 LDA #104
    case 0xC4715E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x000068, 3); return true;
    // src/unknown/C4/C49CA8-jp.asm:18 LDA #104
    // Overlapping static entry reached from 0xC4715E.
    case 0xC47160: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C49CA8-jp.asm:19 SEC
    case 0xC47161: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8-jp.asm:20 SBC @VIRTUAL02
    case 0xC47162: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C49CA8-jp.asm:21 STA UNKNOWN_7E3C14
    case 0xC47164: cpu.execute_instruction<0x8D>(0x003F9A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:22 END_C_FUNCTION
    case 0xC47167: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49CA8-jp.asm:22 END_C_FUNCTION
    case 0xC47168: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49CC3-jp.asm (unresolved).
bool execute_unresolved_c4_c49cc3_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47169: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:8 END_STACK_VARS
    case 0xC4716B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:8 END_STACK_VARS
    case 0xC4716C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:8 END_STACK_VARS
    case 0xC4716D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:8 END_STACK_VARS
    case 0xC4716E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4716E.
    case 0xC47170: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:8 END_STACK_VARS
    case 0xC47171: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:8 END_STACK_VARS
    case 0xC47172: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3-jp.asm:9 TXY
    case 0xC47173: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3-jp.asm:10 STY @LOCAL01
    case 0xC47174: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:11 TAX
    case 0xC47176: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3-jp.asm:12 DEC
    case 0xC47177: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3-jp.asm:13 LDY #.SIZEOF(char_struct)
    case 0xC47178: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C4/C49CC3-jp.asm:13 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC47178.
    case 0xC4717A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:14 JSL MULT168
    case 0xC4717B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C49CC3-jp.asm:15 CLC
    case 0xC4717F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3-jp.asm:16 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC47180: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C4/C49CC3-jp.asm:16 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC47180.
    case 0xC47182: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:17 PROMOTENEARPTRA @VIRTUAL06
    case 0xC47183: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:17 PROMOTENEARPTRA @VIRTUAL06
    case 0xC47185: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:17 PROMOTENEARPTRA @VIRTUAL06
    case 0xC47186: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:17 PROMOTENEARPTRA @VIRTUAL06
    case 0xC47188: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:17 PROMOTENEARPTRA @VIRTUAL06
    case 0xC47189: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:17 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4718B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:18 LDX #4
    case 0xC4718D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C4/C49CC3-jp.asm:18 LDX #4
    // Overlapping static entry reached from 0xC4718D.
    case 0xC4718F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:19 STX @LOCAL00
    case 0xC47190: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:19 STX @LOCAL00
    // Overlapping static entry reached from 0xC471A9.
    case 0xC47191: cpu.execute_instruction<0x0E>(0x002680, 3); return true;
    // src/unknown/C4/C49CC3-jp.asm:20 BRA @UNKNOWN1
    case 0xC47192: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:23 DEX
    case 0xC47194: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3-jp.asm:24 STX @LOCAL00
    case 0xC47195: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:25 AND #$00FF
    case 0xC47197: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49CC3-jp.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC47197.
    case 0xC47199: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:26 SEC
    case 0xC4719A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3-jp.asm:27 SBC #32
    case 0xC4719B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/unknown/C4/C49CC3-jp.asm:27 SBC #32
    // Overlapping static entry reached from 0xC4719B.
    case 0xC4719D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:28 TAX
    case 0xC4719E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3-jp.asm:29 LDA f:UNKNOWN_E1213E,X
    case 0xC4719F: cpu.execute_instruction<0xBF>(0xE1213E, 4); return true;
    // src/unknown/C4/C49CC3-jp.asm:30 AND #$00FF
    case 0xC471A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49CC3-jp.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC471A3.
    case 0xC471A5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:31 CLC
    case 0xC471A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3-jp.asm:32 ADC #$8000
    case 0xC471A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x008000, 3); return true;
    // src/unknown/C4/C49CC3-jp.asm:32 ADC #$8000
    // Overlapping static entry reached from 0xC471A7.
    case 0xC471A9: cpu.execute_instruction<0x80>(0x0000E6, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:33 INC @VIRTUAL06
    case 0xC471AA: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:34 JSL UNKNOWN_C41DB6
    case 0xC471AC: cpu.execute_instruction<0x22>(0xC41D02, 4); return true;
    // src/unknown/C4/C49CC3-jp.asm:35 LDY @LOCAL01
    case 0xC471B0: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:36 TYA
    case 0xC471B2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3-jp.asm:37 CLC
    case 0xC471B3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3-jp.asm:38 ADC UNKNOWN_7E3C14
    case 0xC471B4: cpu.execute_instruction<0x6D>(0x003F9A, 3); return true;
    // src/unknown/C4/C49CC3-jp.asm:39 STA UNKNOWN_7E3C14
    case 0xC471B7: cpu.execute_instruction<0x8D>(0x003F9A, 3); return true;
    // src/unknown/C4/C49CC3-jp.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC471BA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:42 LDA [@VIRTUAL06]
    case 0xC471BC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:43 AND #$00FF
    case 0xC471BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49CC3-jp.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC471BE.
    case 0xC471C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:44 BEQ @UNKNOWN2
    case 0xC471C1: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:45 LDX @LOCAL00
    case 0xC471C3: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C49CC3-jp.asm:46 BNE @UNKNOWN0
    case 0xC471C5: cpu.execute_instruction<0xD0>(0x0000CD, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:48 END_C_FUNCTION
    case 0xC471C7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49CC3-jp.asm:48 END_C_FUNCTION
    case 0xC471C8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49D16-jp.asm (unresolved).
bool execute_unresolved_c4_c49d16_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49D16-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC471C9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49D16-jp.asm:7 END_STACK_VARS
    case 0xC471CB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49D16-jp.asm:7 END_STACK_VARS
    case 0xC471CC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49D16-jp.asm:7 END_STACK_VARS
    case 0xC471CD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49D16-jp.asm:7 END_STACK_VARS
    case 0xC471CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49D16-jp.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC471CE.
    case 0xC471D0: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49D16-jp.asm:7 END_STACK_VARS
    case 0xC471D1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49D16-jp.asm:7 END_STACK_VARS
    case 0xC471D2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49D16-jp.asm:8 STY @LOCAL00
    case 0xC471D3: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C49D16-jp.asm:8 STY @LOCAL00
    // Overlapping static entry reached from 0xC471D0.
    case 0xC471D4: cpu.execute_instruction<0x0E>(0x000286, 3); return true;
    // src/unknown/C4/C49D16-jp.asm:9 STX @VIRTUAL02
    case 0xC471D5: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C49D16-jp.asm:10 SEP #PROC_FLAGS::INDEX8
    case 0xC471D7: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C49D16-jp.asm:11 LDY #8
    case 0xC471D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x002208, 3); return true;
    // src/unknown/C4/C49D16-jp.asm:12 JSL ASL16_ENTRY2
    case 0xC471DB: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/unknown/C4/C49D16-jp.asm:12 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC471D9.
    case 0xC471DC: cpu.execute_instruction<0x20>(0x00C092, 3); return true;
    // src/unknown/C4/C49D16-jp.asm:13 CLC
    case 0xC471DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49D16-jp.asm:14 ADC @VIRTUAL02
    case 0xC471E0: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C49D16-jp.asm:15 JSL UNKNOWN_C41DB6
    case 0xC471E2: cpu.execute_instruction<0x22>(0xC41D02, 4); return true;
    // src/unknown/C4/C49D16-jp.asm:16 LDY @LOCAL00
    case 0xC471E6: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C49D16-jp.asm:17 TYA
    case 0xC471E8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C49D16-jp.asm:18 CLC
    case 0xC471E9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49D16-jp.asm:19 ADC UNKNOWN_7E3C14
    case 0xC471EA: cpu.execute_instruction<0x6D>(0x003F9A, 3); return true;
    // src/unknown/C4/C49D16-jp.asm:20 STA UNKNOWN_7E3C14
    case 0xC471ED: cpu.execute_instruction<0x8D>(0x003F9A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49D16-jp.asm:21 END_C_FUNCTION
    case 0xC471F0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49D16-jp.asm:21 END_C_FUNCTION
    case 0xC471F1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49D1E.asm (unresolved).
bool execute_unresolved_c4_c49d1e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49D1E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC471F2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49D1E.asm:9 END_STACK_VARS
    case 0xC471F4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49D1E.asm:9 END_STACK_VARS
    case 0xC471F5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49D1E.asm:9 END_STACK_VARS
    case 0xC471F6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49D1E.asm:9 END_STACK_VARS
    case 0xC471F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49D1E.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC471F7.
    case 0xC471F9: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49D1E.asm:9 END_STACK_VARS
    case 0xC471FA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49D1E.asm:9 END_STACK_VARS
    case 0xC471FB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49D1E.asm:10 STA @LOCAL01
    case 0xC471FC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C49D1E.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC471F9.
    case 0xC471FD: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C49D1E.asm:11 JSL OAM_CLEAR
    case 0xC471FE: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/unknown/C4/C49D1E.asm:11 JSL OAM_CLEAR
    // Overlapping static entry reached from 0xC471FD.
    case 0xC471FF: cpu.execute_instruction<0xA3>(0x000088, 2); return true;
    // src/unknown/C4/C49D1E.asm:11 JSL OAM_CLEAR
    // Overlapping static entry reached from 0xC471FF.
    case 0xC47201: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0010A5, 3); return true;
    // src/unknown/C4/C49D1E.asm:12 LDA @LOCAL01
    case 0xC47202: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C49D1E.asm:12 LDA @LOCAL01
    // Overlapping static entry reached from 0xC47201.
    case 0xC47203: cpu.execute_instruction<0x10>(0x000029, 2); return true;
    // src/unknown/C4/C49D1E.asm:13 AND #$FF00
    case 0xC47204: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C49D1E.asm:13 AND #$FF00
    // Overlapping static entry reached from 0xC47203.
    case 0xC47205: cpu.execute_instruction<0x00>(0x0000FF, 2); return true;
    // src/unknown/C4/C49D1E.asm:13 AND #$FF00
    // Overlapping static entry reached from 0xC47204.
    case 0xC47206: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/unknown/C4/C49D1E.asm:14 STA @VIRTUAL02
    case 0xC47207: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49D1E.asm:15 LDA @LOCAL01
    case 0xC47209: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C49D1E.asm:15 LDA @LOCAL01
    // Overlapping static entry reached from 0xC47206.
    case 0xC4720A: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // src/unknown/C4/C49D1E.asm:16 CLC
    case 0xC4720B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49D1E.asm:20 ADC #80
    case 0xC4720C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x000050, 3); return true;
    // src/unknown/C4/C49D1E.asm:20 ADC #80
    // Overlapping static entry reached from 0xC4720C.
    case 0xC4720E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C49D1E.asm:22 TAX
    case 0xC4720F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49D1E.asm:23 STX @LOCAL00
    case 0xC47210: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C49D1E.asm:24 TXA
    case 0xC47212: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C49D1E.asm:25 AND #$FF00
    case 0xC47213: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C49D1E.asm:25 AND #$FF00
    // Overlapping static entry reached from 0xC47213.
    case 0xC47215: cpu.execute_instruction<0xFF>(0xC51085, 4); return true;
    // src/unknown/C4/C49D1E.asm:26 STA @LOCAL01
    case 0xC47216: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C49D1E.asm:27 CMP @VIRTUAL02
    case 0xC47218: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C49D1E.asm:27 CMP @VIRTUAL02
    // Overlapping static entry reached from 0xC47215.
    case 0xC47219: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C4/C49D1E.asm:28 BEQ @UNKNOWN0
    case 0xC4721A: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C4/C49D1E.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC4721C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49D1E.asm:30 LDA #8
    case 0xC4721E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/unknown/C4/C49D1E.asm:31 SEP #PROC_FLAGS::INDEX8
    case 0xC47220: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C49D1E.asm:31 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC4721E.
    case 0xC47221: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C4/C49D1E.asm:32 TAY
    case 0xC47222: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C49D1E.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC47223: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49D1E.asm:33 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4720A.
    case 0xC47224: cpu.execute_instruction<0x20>(0x0010A5, 3); return true;
    // src/unknown/C4/C49D1E.asm:34 LDA @LOCAL01
    case 0xC47225: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C49D1E.asm:35 SEC
    case 0xC47227: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49D1E.asm:36 SBC @VIRTUAL02
    case 0xC47228: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C49D1E.asm:37 JSL ASR8_UNKNOWN1
    case 0xC4722A: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C4/C49D1E.asm:38 CLC
    case 0xC4722E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49D1E.asm:39 ADC BG3_Y_POS
    case 0xC4722F: cpu.execute_instruction<0x6D>(0x00003B, 3); return true;
    // src/unknown/C4/C49D1E.asm:40 STA BG3_Y_POS
    case 0xC47232: cpu.execute_instruction<0x8D>(0x00003B, 3); return true;
    // src/unknown/C4/C49D1E.asm:41 JSL UPDATE_SCREEN
    case 0xC47235: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/unknown/C4/C49D1E.asm:43 LDX @LOCAL00
    case 0xC47239: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C49D1E.asm:44 TXA
    case 0xC4723B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49D1E.asm:45 END_C_FUNCTION
    case 0xC4723C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49D1E.asm:45 END_C_FUNCTION
    case 0xC4723D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49EC4-jp.asm (unresolved).
bool execute_unresolved_c4_c49ec4_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:5 BEGIN_C_FUNCTION_FAR
    case 0xC4739C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:9 END_STACK_VARS
    case 0xC4739E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:9 END_STACK_VARS
    case 0xC4739F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:9 END_STACK_VARS
    case 0xC473A0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:9 END_STACK_VARS
    case 0xC473A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC473A1.
    case 0xC473A3: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:9 END_STACK_VARS
    case 0xC473A4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:9 END_STACK_VARS
    case 0xC473A5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4-jp.asm:10 STA @LOCAL00
    case 0xC473A6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:10 STA @LOCAL00
    // Overlapping static entry reached from 0xC473A3.
    case 0xC473A7: cpu.execute_instruction<0x0E>(0x00DAA2, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:11 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + (23 * 2)
    case 0xC473A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000DA, 2); else cpu.execute_instruction<0xA2>(0x0010DA, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:11 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + (23 * 2)
    // Overlapping static entry reached from 0xC473A8.
    case 0xC473AA: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:12 LDA __BSS_START__,X
    case 0xC473AB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:12 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC473AA.
    case 0xC473AC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:13 STA @VIRTUAL02
    case 0xC473AE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:14 ORA #$C000
    case 0xC473B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:14 ORA #$C000
    // Overlapping static entry reached from 0xC473B0.
    case 0xC473B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:15 STA __BSS_START__,X
    case 0xC473B3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:15 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC473B2.
    case 0xC473B4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:15 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC473B2.
    case 0xC473B5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:16 JSL UNKNOWN_C49A56
    case 0xC473B6: cpu.execute_instruction<0x22>(0xC46EA0, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:17 LOADPTR FLYOVER_TEXT_POINTERS, @VIRTUAL0A
    case 0xC473BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x00737C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:17 LOADPTR FLYOVER_TEXT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC473BA.
    case 0xC473BC: cpu.execute_instruction<0x73>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:17 LOADPTR FLYOVER_TEXT_POINTERS, @VIRTUAL0A
    case 0xC473BD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:17 LOADPTR FLYOVER_TEXT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC473BC.
    case 0xC473BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:17 LOADPTR FLYOVER_TEXT_POINTERS, @VIRTUAL0A
    case 0xC473BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:17 LOADPTR FLYOVER_TEXT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC473BF.
    case 0xC473C1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:17 LOADPTR FLYOVER_TEXT_POINTERS, @VIRTUAL0A
    case 0xC473C2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:18 LDA @LOCAL00
    case 0xC473C4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:19 ASL
    case 0xC473C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4-jp.asm:20 ASL
    case 0xC473C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4-jp.asm:21 CLC
    case 0xC473C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4-jp.asm:22 ADC @VIRTUAL0A
    case 0xC473C9: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:23 STA @VIRTUAL0A
    case 0xC473CB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC473CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC473CD.
    case 0xC473CF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC473D0: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC473D2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC473D3: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC473D5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC473D7: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:26 LDA [@VIRTUAL06]
    case 0xC473D9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:27 AND #$00FF
    case 0xC473DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC473DB.
    case 0xC473DD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:28 STA @LOCAL00
    case 0xC473DE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:29 INC @VIRTUAL06
    case 0xC473E0: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:30 CMP #$00
    case 0xC473E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:30 CMP #$00
    // Overlapping static entry reached from 0xC473E2.
    case 0xC473E4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:31 BEQ @END_OF_SCRIPT
    case 0xC473E5: cpu.execute_instruction<0xF0>(0x000069, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:32 CMP #$02
    case 0xC473E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:32 CMP #$02
    // Overlapping static entry reached from 0xC473E7.
    case 0xC473E9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:33 BEQ @PARSE_02
    case 0xC473EA: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:34 CMP #$09
    case 0xC473EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:34 CMP #$09
    // Overlapping static entry reached from 0xC473EC.
    case 0xC473EE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:35 BEQ @PARSE_09
    case 0xC473EF: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:36 CMP #$01
    case 0xC473F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:36 CMP #$01
    // Overlapping static entry reached from 0xC473F1.
    case 0xC473F3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:37 BEQ @PARSE_01
    case 0xC473F4: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:38 CMP #$08
    case 0xC473F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:38 CMP #$08
    // Overlapping static entry reached from 0xC473F6.
    case 0xC473F8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:39 BEQ @PARSE_08
    case 0xC473F9: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:40 BRA @PRINT_TEXT
    case 0xC473FB: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:42 LDA [@VIRTUAL06]
    case 0xC473FD: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:43 AND #$00FF
    case 0xC473FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC473FF.
    case 0xC47401: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:44 STA FLYOVER_SCREEN_OFFSET
    case 0xC47402: cpu.execute_instruction<0x8D>(0x00A133, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:45 INC @VIRTUAL06
    case 0xC47405: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:46 BRA @SCRIPT_PARSE_BEGIN
    case 0xC47407: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:48 LDA #18
    case 0xC47409: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:48 LDA #18
    // Overlapping static entry reached from 0xC47409.
    case 0xC4740B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:49 JSL UNKNOWN_C49B6E
    case 0xC4740C: cpu.execute_instruction<0x22>(0xC46FB2, 4); return true;
    // src/unknown/C4/C49EC4-jp.asm:50 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC47410: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C4/C49EC4-jp.asm:51 LDA #18
    case 0xC47414: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:51 LDA #18
    // Overlapping static entry reached from 0xC47414.
    case 0xC47416: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:52 JSL UNKNOWN_C49C56
    case 0xC47417: cpu.execute_instruction<0x22>(0xC47095, 4); return true;
    // src/unknown/C4/C49EC4-jp.asm:53 BRA @SCRIPT_PARSE_BEGIN
    case 0xC4741B: cpu.execute_instruction<0x80>(0x0000BC, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC4741D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:56 LDA [@VIRTUAL06]
    case 0xC4741F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC47421: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:58 INC @VIRTUAL06
    case 0xC47423: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:59 JSL UNKNOWN_C49CA8
    case 0xC47425: cpu.execute_instruction<0x22>(0xC4713D, 4); return true;
    // src/unknown/C4/C49EC4-jp.asm:60 BRA @SCRIPT_PARSE_BEGIN
    case 0xC47429: cpu.execute_instruction<0x80>(0x0000AE, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:62 LDA [@VIRTUAL06]
    case 0xC4742B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:63 AND #$00FF
    case 0xC4742D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC4742D.
    case 0xC4742F: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:64 TAY
    case 0xC47430: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4-jp.asm:65 INC @VIRTUAL06
    case 0xC47431: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:66 LDX #12
    case 0xC47433: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:66 LDX #12
    // Overlapping static entry reached from 0xC47433.
    case 0xC47435: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:67 TYA
    case 0xC47436: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4-jp.asm:68 JSL UNKNOWN_C49CC3
    case 0xC47437: cpu.execute_instruction<0x22>(0xC47169, 4); return true;
    // src/unknown/C4/C49EC4-jp.asm:69 BRA @SCRIPT_PARSE_BEGIN
    case 0xC4743B: cpu.execute_instruction<0x80>(0x00009C, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:71 LDA [@VIRTUAL06]
    case 0xC4743D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:72 AND #$00FF
    case 0xC4743F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC4743F.
    case 0xC47441: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:73 TAX
    case 0xC47442: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4-jp.asm:74 INC @VIRTUAL06
    case 0xC47443: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:75 LDY #12
    case 0xC47445: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:75 LDY #12
    // Overlapping static entry reached from 0xC47445.
    case 0xC47447: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:76 LDA @LOCAL00
    case 0xC47448: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:77 JSL UNKNOWN_C49D16
    case 0xC4744A: cpu.execute_instruction<0x22>(0xC471C9, 4); return true;
    // src/unknown/C4/C49EC4-jp.asm:78 BRA @SCRIPT_PARSE_BEGIN
    case 0xC4744E: cpu.execute_instruction<0x80>(0x000089, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:80 SEP #PROC_FLAGS::ACCUM8
    case 0xC47450: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:81 LDA #$04
    case 0xC47452: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008D04, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:82 STA TM_MIRROR
    case 0xC47454: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:82 STA TM_MIRROR
    // Overlapping static entry reached from 0xC47452.
    case 0xC47455: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4-jp.asm:82 STA TM_MIRROR
    // Overlapping static entry reached from 0xC47455.
    case 0xC47456: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:83 LDY #0
    case 0xC47457: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:83 LDY #0
    // Overlapping static entry reached from 0xC47457.
    case 0xC47459: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:84 LDX #3
    case 0xC4745A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:84 LDX #3
    // Overlapping static entry reached from 0xC4745A.
    case 0xC4745C: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:85 REP #PROC_FLAGS::ACCUM8
    case 0xC4745D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:86 LDA #1
    case 0xC4745F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:86 LDA #1
    // Overlapping static entry reached from 0xC4745F.
    case 0xC47461: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:87 JSL FADE_IN_WITH_MOSAIC
    case 0xC47462: cpu.execute_instruction<0x22>(0xC087C4, 4); return true;
    // src/unknown/C4/C49EC4-jp.asm:88 LDX #$0000
    case 0xC47466: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:88 LDX #$0000
    // Overlapping static entry reached from 0xC47466.
    case 0xC47468: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:89 STX @LOCAL00
    case 0xC47469: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:90 BRA @UNKNOWN8
    case 0xC4746B: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:92 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4746D: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C4/C49EC4-jp.asm:93 LDX @LOCAL00
    case 0xC47471: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:94 INX
    case 0xC47473: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4-jp.asm:95 STX @LOCAL00
    case 0xC47474: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:97 CPX #180
    case 0xC47476: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000B4, 2); else cpu.execute_instruction<0xE0>(0x0000B4, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:97 CPX #180
    // Overlapping static entry reached from 0xC47476.
    case 0xC47478: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:98 BCC @UNKNOWN7
    case 0xC47479: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:99 LDY #0
    case 0xC4747B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:99 LDY #0
    // Overlapping static entry reached from 0xC4747B.
    case 0xC4747D: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:100 LDX #3
    case 0xC4747E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:100 LDX #3
    // Overlapping static entry reached from 0xC4747E.
    case 0xC47480: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:101 LDA #1
    case 0xC47481: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:101 LDA #1
    // Overlapping static entry reached from 0xC47481.
    case 0xC47483: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:102 JSL FADE_OUT_WITH_MOSAIC
    case 0xC47484: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/unknown/C4/C49EC4-jp.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC47488: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:104 LDA #$17
    case 0xC4748A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:105 STA TM_MIRROR
    case 0xC4748C: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:105 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4748A.
    case 0xC4748D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4-jp.asm:105 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4748D.
    case 0xC4748E: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:106 LDY #.LOWORD(BG2_BUFFER)
    case 0xC4748F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000076, 2); else cpu.execute_instruction<0xA0>(0x008176, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:106 LDY #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC4748F.
    case 0xC47491: cpu.execute_instruction<0x81>(0x0000A2, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:107 LDX #$0380
    case 0xC47492: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000380, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:107 LDX #$0380
    // Overlapping static entry reached from 0xC47491.
    case 0xC47493: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:107 LDX #$0380
    // Overlapping static entry reached from 0xC47492.
    case 0xC47494: cpu.execute_instruction<0x03>(0x000080, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:108 BRA @UNKNOWN10
    case 0xC47495: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:108 BRA @UNKNOWN10
    // Overlapping static entry reached from 0xC47494.
    case 0xC47496: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4-jp.asm:110 REP #PROC_FLAGS::ACCUM8
    case 0xC47497: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:110 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47493.
    case 0xC47498: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:111 LDA #0
    case 0xC47499: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:111 LDA #0
    // Overlapping static entry reached from 0xC47499.
    case 0xC4749B: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:112 STA __BSS_START__,Y
    case 0xC4749C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:113 INY
    case 0xC4749F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4-jp.asm:114 INY
    case 0xC474A0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4-jp.asm:115 DEX
    case 0xC474A1: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4-jp.asm:117 BNE @UNKNOWN9
    case 0xC474A2: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:118 JSL UNKNOWN_C08726
    case 0xC474A4: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/unknown/C4/C49EC4-jp.asm:119 JSL UNDRAW_FLYOVER_TEXT
    case 0xC474A8: cpu.execute_instruction<0x22>(0xC45CA2, 4); return true;
    // src/unknown/C4/C49EC4-jp.asm:120 LDA @VIRTUAL02
    case 0xC474AC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C49EC4-jp.asm:121 STA ENTITY_TICK_CALLBACK_HIGH+46
    case 0xC474AE: cpu.execute_instruction<0x8D>(0x0010DA, 3); return true;
    // src/unknown/C4/C49EC4-jp.asm:122 JSL UNKNOWN_C08744
    case 0xC474B1: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:123 END_C_FUNCTION
    case 0xC474B5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49EC4-jp.asm:123 END_C_FUNCTION
    case 0xC474B6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4A228.asm (unresolved).
bool execute_unresolved_c4_c4a228_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4A228.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47695: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4A228.asm:7 END_STACK_VARS
    case 0xC47697: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4A228.asm:7 END_STACK_VARS
    case 0xC47698: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4A228.asm:7 END_STACK_VARS
    case 0xC47699: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A228.asm:7 END_STACK_VARS
    case 0xC4769A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A228.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4769A.
    case 0xC4769C: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4A228.asm:7 END_STACK_VARS
    case 0xC4769D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4A228.asm:7 END_STACK_VARS
    case 0xC4769E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:8 STX @VIRTUAL02
    case 0xC4769F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4A228.asm:8 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4769C.
    case 0xC476A0: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C4/C4A228.asm:9 TAY
    case 0xC476A1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:10 LDX #0
    case 0xC476A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4A228.asm:10 LDX #0
    // Overlapping static entry reached from 0xC476A2.
    case 0xC476A4: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4A228.asm:11 BRA @UNKNOWN2
    case 0xC476A5: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C4/C4A228.asm:13 LDA FRONT_ROW_BATTLERS,X
    case 0xC476A7: cpu.execute_instruction<0xBD>(0x00AF4F, 3); return true;
    // src/unknown/C4/C4A228.asm:14 AND #$00FF
    case 0xC476AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A228.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC476AA.
    case 0xC476AC: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C4/C4A228.asm:15 CMP @VIRTUAL02
    case 0xC476AD: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4A228.asm:16 BNE @UNKNOWN1
    case 0xC476AF: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C4/C4A228.asm:17 TXA
    case 0xC476B1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC476B2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A228.asm:19 INC
    case 0xC476B4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:20 STA a:battler::current_target,Y
    case 0xC476B5: cpu.execute_instruction<0x99>(0x00000A, 3); return true;
    // src/unknown/C4/C4A228.asm:21 BRA @UNKNOWN6
    case 0xC476B8: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C4/C4A228.asm:23 INX
    case 0xC476BA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:25 CPX NUM_BATTLERS_IN_FRONT_ROW
    case 0xC476BB: cpu.execute_instruction<0xEC>(0x00AF2B, 3); return true;
    // src/unknown/C4/C4A228.asm:26 BCC @UNKNOWN0
    case 0xC476BE: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C4/C4A228.asm:27 LDX #0
    case 0xC476C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4A228.asm:27 LDX #0
    // Overlapping static entry reached from 0xC476C0.
    case 0xC476C2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4A228.asm:28 BRA @UNKNOWN5
    case 0xC476C3: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C4/C4A228.asm:31 LDA BACK_ROW_BATTLERS,X
    case 0xC476C5: cpu.execute_instruction<0xBD>(0x00AF57, 3); return true;
    // src/unknown/C4/C4A228.asm:32 AND #$00FF
    case 0xC476C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A228.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC476C8.
    case 0xC476CA: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C4/C4A228.asm:33 CMP @VIRTUAL02
    case 0xC476CB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4A228.asm:34 BNE @UNKNOWN4
    case 0xC476CD: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C4/C4A228.asm:35 TXA
    case 0xC476CF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC476D0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A228.asm:37 CLC
    case 0xC476D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:38 ADC NUM_BATTLERS_IN_FRONT_ROW
    case 0xC476D3: cpu.execute_instruction<0x6D>(0x00AF2B, 3); return true;
    // src/unknown/C4/C4A228.asm:39 INC
    case 0xC476D6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:40 STA a:battler::current_target,Y
    case 0xC476D7: cpu.execute_instruction<0x99>(0x00000A, 3); return true;
    // src/unknown/C4/C4A228.asm:41 BRA @UNKNOWN6
    case 0xC476DA: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C4/C4A228.asm:43 INX
    case 0xC476DC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:45 CPX NUM_BATTLERS_IN_BACK_ROW
    case 0xC476DD: cpu.execute_instruction<0xEC>(0x00AF2D, 3); return true;
    // src/unknown/C4/C4A228.asm:46 BCC @UNKNOWN3
    case 0xC476E0: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/unknown/C4/C4A228.asm:48 REP #PROC_FLAGS::ACCUM8
    case 0xC476E2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4A228.asm:49 END_C_FUNCTION
    case 0xC476E4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4A228.asm:49 END_C_FUNCTION
    case 0xC476E5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4A377-jp.asm (unresolved).
bool execute_unresolved_c4_c4a377_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4A377-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC477E4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4A377-jp.asm:12 END_STACK_VARS
    case 0xC477E6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4A377-jp.asm:12 END_STACK_VARS
    case 0xC477E7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A377-jp.asm:12 END_STACK_VARS
    case 0xC477E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x00FFDC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A377-jp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC477E8.
    case 0xC477EA: cpu.execute_instruction<0xFF>(0x03A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4A377-jp.asm:12 END_STACK_VARS
    case 0xC477EB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:13 LDA #3
    case 0xC477EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:13 LDA #3
    // Overlapping static entry reached from 0xC477EC.
    case 0xC477EE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:14 JSL UNKNOWN_C08D79
    case 0xC477EF: cpu.execute_instruction<0x22>(0xC08D6A, 4); return true;
    // src/unknown/C4/C4A377-jp.asm:15 LDY #VRAM::GAS_STATION_LAYER_1_TILES
    case 0xC477F3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:15 LDY #VRAM::GAS_STATION_LAYER_1_TILES
    // Overlapping static entry reached from 0xC477F3.
    case 0xC477F5: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:16 LDX #VRAM::GAS_STATION_LAYER_1_TILEMAP
    case 0xC477F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007800, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:16 LDX #VRAM::GAS_STATION_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xC477F6.
    case 0xC477F8: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:17 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC477F9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:18 JSL SET_BG1_VRAM_LOCATION
    case 0xC477FA: cpu.execute_instruction<0x22>(0xC08D8F, 4); return true;
    // src/unknown/C4/C4A377-jp.asm:19 LDY #VRAM::GAS_STATION_LAYER_2_TILES
    case 0xC477FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:19 LDY #VRAM::GAS_STATION_LAYER_2_TILES
    // Overlapping static entry reached from 0xC477FE.
    case 0xC47800: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:20 LDX #VRAM::GAS_STATION_LAYER_2_TILEMAP
    case 0xC47801: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:20 LDX #VRAM::GAS_STATION_LAYER_2_TILEMAP
    // Overlapping static entry reached from 0xC47801.
    case 0xC47803: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:21 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC47804: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:21 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC47804.
    case 0xC47806: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:22 JSL SET_BG2_VRAM_LOCATION
    case 0xC47807: cpu.execute_instruction<0x22>(0xC08DCF, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:23 LOADPTR BG_DATA_TABLE + (BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)), @VIRTUAL0A
    case 0xC4780B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000038, 2); else cpu.execute_instruction<0xA9>(0x00F038, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:23 LOADPTR BG_DATA_TABLE + (BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)), @VIRTUAL0A
    // Overlapping static entry reached from 0xC4780B.
    case 0xC4780D: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377-jp.asm:23 LOADPTR BG_DATA_TABLE + (BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)), @VIRTUAL0A
    case 0xC4780E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377-jp.asm:23 LOADPTR BG_DATA_TABLE + (BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)), @VIRTUAL0A
    // Overlapping static entry reached from 0xC4780D.
    case 0xC4780F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:23 LOADPTR BG_DATA_TABLE + (BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)), @VIRTUAL0A
    case 0xC47810: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:23 LOADPTR BG_DATA_TABLE + (BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)), @VIRTUAL0A
    // Overlapping static entry reached from 0xC47810.
    case 0xC47812: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:23 LOADPTR BG_DATA_TABLE + (BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)), @VIRTUAL0A
    case 0xC47813: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:24 LOADPTR BUFFER, @VIRTUAL06
    case 0xC47815: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:24 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC47815.
    case 0xC47817: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377-jp.asm:24 LOADPTR BUFFER, @VIRTUAL06
    case 0xC47818: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:24 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4781A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:24 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4781A.
    case 0xC4781C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:24 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4781D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:25 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC4781F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:25 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC47821: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:25 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC47823: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:25 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC47825: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:26 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC47827: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00D7A1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:26 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC47827.
    case 0xC47829: cpu.execute_instruction<0xD7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377-jp.asm:26 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC4782A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377-jp.asm:26 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC47829.
    case 0xC4782B: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:26 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC4782C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:26 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4782B.
    case 0xC4782D: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:26 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4782C.
    case 0xC4782E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:26 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC4782F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:27 LDA [@VIRTUAL0A]
    case 0xC47831: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:28 AND #$00FF
    case 0xC47833: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC47833.
    case 0xC47835: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:29 ASL
    case 0xC47836: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:30 ASL
    case 0xC47837: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:31 CLC
    case 0xC47838: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:32 ADC @VIRTUAL06
    case 0xC47839: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:33 STA @VIRTUAL06
    case 0xC4783B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377-jp.asm:34 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4783D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377-jp.asm:34 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC4783D.
    case 0xC4783F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4A377-jp.asm:34 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC47840: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4A377-jp.asm:34 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC47842: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4A377-jp.asm:34 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC47843: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:34 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC47845: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:34 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC47847: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47849: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4784B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4784D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4784F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:36 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC47851: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:36 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC47853: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:36 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC47855: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:36 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC47857: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC47859: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4785B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4785D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4785F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:38 JSL DECOMP
    case 0xC47861: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:39 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC47865: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:39 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC47867: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:39 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC47869: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:39 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC4786B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:39 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC4786D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:39 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    // Overlapping static entry reached from 0xC4786D.
    case 0xC4786F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4A377-jp.asm:39 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC47870: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4A377-jp.asm:39 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    // Overlapping static entry reached from 0xC47870.
    case 0xC47872: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4A377-jp.asm:39 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC47873: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C4A377-jp.asm:39 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC47875: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4A377-jp.asm:39 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC47877: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4A377-jp.asm:39 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    // Overlapping static entry reached from 0xC47875.
    case 0xC47878: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4A377-jp.asm:39 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    // Overlapping static entry reached from 0xC47878.
    case 0xC4787A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x003DA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:41 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC4787B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003D, 2); else cpu.execute_instruction<0xA9>(0x00D93D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:41 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4787A.
    case 0xC4787C: cpu.execute_instruction<0x3D>(0x0085D9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:41 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4787B.
    case 0xC4787D: cpu.execute_instruction<0xD9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377-jp.asm:41 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC4787E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377-jp.asm:41 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4787C.
    case 0xC4787F: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:41 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC47880: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:41 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4787F.
    case 0xC47881: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:41 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC47880.
    case 0xC47882: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:41 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC47883: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:42 LDA [@VIRTUAL0A]
    case 0xC47885: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:43 AND #$00FF
    case 0xC47887: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC47887.
    case 0xC47889: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:44 ASL
    case 0xC4788A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:45 ASL
    case 0xC4788B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:46 CLC
    case 0xC4788C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:47 ADC @VIRTUAL06
    case 0xC4788D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:48 STA @VIRTUAL06
    case 0xC4788F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377-jp.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC47891: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377-jp.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC47891.
    case 0xC47893: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4A377-jp.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC47894: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4A377-jp.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC47896: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4A377-jp.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC47897: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC47899: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4789B: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:50 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC4789D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:50 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC4789F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:50 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC478A1: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:50 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC478A3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:51 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC478A5: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:51 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC478A7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:51 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC478A9: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:51 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC478AB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC478AD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC478AF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC478B1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC478B3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:53 JSL DECOMP
    case 0xC478B5: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/unknown/C4/C4A377-jp.asm:54 LDA #0
    case 0xC478B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:54 LDA #0
    // Overlapping static entry reached from 0xC478B9.
    case 0xC478BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:55 STA @LOCAL05
    case 0xC478BC: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:56 BRA @UNKNOWN1
    case 0xC478BE: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:58 STORE_INT1632 @VIRTUAL06
    case 0xC478C0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:58 STORE_INT1632 @VIRTUAL06
    case 0xC478C2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:59 CLC
    case 0xC478C4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C4/C4A377-jp.asm:60 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC478C5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:60 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC478C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x000001, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:60 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC478C7.
    case 0xC478C9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:60 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC478CA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:60 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC478CC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:60 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC478CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:60 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC478CE.
    case 0xC478D0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:60 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC478D1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC478D3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:62 LDA [@VIRTUAL06]
    case 0xC478D5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:63 AND #$00DF
    case 0xC478D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000DF, 2); else cpu.execute_instruction<0x29>(0x0009DF, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:64 ORA #$0008
    case 0xC478D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000008, 2); else cpu.execute_instruction<0x09>(0x008708, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:64 ORA #$0008
    // Overlapping static entry reached from 0xC478D7.
    case 0xC478DA: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:65 STA [@VIRTUAL06]
    case 0xC478DB: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:65 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC478D9.
    case 0xC478DC: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC478DD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:66 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC478DC.
    case 0xC478DE: cpu.execute_instruction<0x20>(0x001EA5, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:67 LDA @LOCAL05
    case 0xC478DF: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:68 INC
    case 0xC478E1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:69 INC
    case 0xC478E2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:70 STA @LOCAL05
    case 0xC478E3: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:72 CMP #$0800
    case 0xC478E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000800, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:72 CMP #$0800
    // Overlapping static entry reached from 0xC478E5.
    case 0xC478E7: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:73 BCC @UNKNOWN0
    case 0xC478E8: cpu.execute_instruction<0x90>(0x0000D6, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC478EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC478EA.
    case 0xC478EC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC478ED: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC478EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC478EF.
    case 0xC478F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC478F2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC478F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC478F4.
    case 0xC478F6: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC478F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC478F7.
    case 0xC478F9: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC478FA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC478FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC478FE: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC478FC.
    case 0xC478FF: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4A377-jp.asm:74 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC478FF.
    case 0xC47901: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00A1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:76 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC47902: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00DCA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:76 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC47901.
    case 0xC47903: cpu.execute_instruction<0xA1>(0x0000DC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:76 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC47902.
    case 0xC47904: cpu.execute_instruction<0xDC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377-jp.asm:76 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC47905: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:76 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC47907: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:76 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC47907.
    case 0xC47909: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:76 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC4790A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:77 LDA #(BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)) + bg_layer_config_entry::graphics
    case 0xC4790C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000097, 2); else cpu.execute_instruction<0xA9>(0x001397, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:77 LDA #(BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)) + bg_layer_config_entry::graphics
    // Overlapping static entry reached from 0xC4790C.
    case 0xC4790E: cpu.execute_instruction<0x13>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:78 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4790F: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:78 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4790E.
    case 0xC47910: cpu.execute_instruction<0x06>(0x000086, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:78 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47911: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:78 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC47910.
    case 0xC47912: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:78 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47913: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:78 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47915: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:79 CLC
    case 0xC47917: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:80 ADC @VIRTUAL0A
    case 0xC47918: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:81 STA @VIRTUAL0A
    case 0xC4791A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:82 STA @LOCAL00
    case 0xC4791C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:83 LDA @VIRTUAL0A+2
    case 0xC4791E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:84 STA @LOCAL00+2
    case 0xC47920: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:85 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC47922: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x00AFA9, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:85 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC47922.
    case 0xC47924: cpu.execute_instruction<0xAF>(0xCF9F22, 4); return true;
    // src/unknown/C4/C4A377-jp.asm:86 JSL UNKNOWN_C2CFE5
    case 0xC47925: cpu.execute_instruction<0x22>(0xC2CF9F, 4); return true;
    // src/unknown/C4/C4A377-jp.asm:86 JSL UNKNOWN_C2CFE5
    // Overlapping static entry reached from 0xC47924.
    case 0xC47928: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:87 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    case 0xC47929: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x00AFF5, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:87 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC47928.
    case 0xC4792A: cpu.execute_instruction<0xF5>(0x0000AF, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:87 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC47929.
    case 0xC4792B: cpu.execute_instruction<0xAF>(0xA90285, 4); return true;
    // src/unknown/C4/C4A377-jp.asm:88 STA @VIRTUAL02
    case 0xC4792C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:89 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC4792E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:89 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC4792B.
    case 0xC4792F: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:89 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC4792E.
    case 0xC47930: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:90 LDX @VIRTUAL02
    case 0xC47931: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:91 STA __BSS_START__,X
    case 0xC47933: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:92 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    case 0xC47936: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000B5, 2); else cpu.execute_instruction<0xA0>(0x00AFB5, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:92 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC47936.
    case 0xC47938: cpu.execute_instruction<0xAF>(0xA91C84, 4); return true;
    // src/unknown/C4/C4A377-jp.asm:93 STY @LOCAL04
    case 0xC47939: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:94 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC4793B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x00DAD9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:94 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC47938.
    case 0xC4793C: cpu.execute_instruction<0xD9>(0x0085DA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:94 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4793B.
    case 0xC4793D: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377-jp.asm:94 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC4793E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377-jp.asm:94 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4793C.
    case 0xC4793F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:94 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC47940: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377-jp.asm:94 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC47940.
    case 0xC47942: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:94 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC47943: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:95 LDA #(BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)) + bg_layer_config_entry::palette
    case 0xC47945: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000098, 2); else cpu.execute_instruction<0xA9>(0x001398, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:95 LDA #(BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)) + bg_layer_config_entry::palette
    // Overlapping static entry reached from 0xC47945.
    case 0xC47947: cpu.execute_instruction<0x13>(0x000018, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:96 CLC
    case 0xC47948: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:97 ADC @VIRTUAL06
    case 0xC47949: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:98 STA @VIRTUAL06
    case 0xC4794B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:99 STA @LOCAL03
    case 0xC4794D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:100 LDA @VIRTUAL06+2
    case 0xC4794F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:101 STA @LOCAL03+2
    case 0xC47951: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:102 LDA [@VIRTUAL06]
    case 0xC47953: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:103 AND #$00FF
    case 0xC47955: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:103 AND #$00FF
    // Overlapping static entry reached from 0xC47955.
    case 0xC47957: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:104 ASL
    case 0xC47958: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:105 ASL
    case 0xC47959: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:106 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4795A: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:106 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4795C: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:106 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4795E: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:106 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC47960: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:107 CLC
    case 0xC47962: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:108 ADC @VIRTUAL06
    case 0xC47963: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:109 STA @VIRTUAL06
    case 0xC47965: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377-jp.asm:110 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC47967: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377-jp.asm:110 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC47967.
    case 0xC47969: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4A377-jp.asm:110 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4796A: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4A377-jp.asm:110 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4796C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4A377-jp.asm:110 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4796D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:110 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4796F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:110 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC47971: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:111 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47973: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:111 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47975: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:111 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47977: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:111 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47979: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:112 LDX #BPP4PALETTE_SIZE
    case 0xC4797B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:112 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC4797B.
    case 0xC4797D: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:113 LDY @LOCAL04
    case 0xC4797E: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:114 TYA
    case 0xC47980: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:115 JSL MEMCPY16
    case 0xC47981: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:116 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC47985: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:116 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC47987: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:116 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC47989: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:116 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4798B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:117 LDA [@VIRTUAL06]
    case 0xC4798D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:118 AND #$00FF
    case 0xC4798F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:118 AND #$00FF
    // Overlapping static entry reached from 0xC4798F.
    case 0xC47991: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:119 ASL
    case 0xC47992: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:120 ASL
    case 0xC47993: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:121 CLC
    case 0xC47994: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A377-jp.asm:122 ADC @VIRTUAL0A
    case 0xC47995: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:123 STA @VIRTUAL0A
    case 0xC47997: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377-jp.asm:124 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC47999: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377-jp.asm:124 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC47999.
    case 0xC4799B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4A377-jp.asm:124 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4799C: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4A377-jp.asm:124 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4799E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4A377-jp.asm:124 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4799F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:124 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC479A1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:124 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC479A3: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:125 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479A5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:125 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479A7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:125 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479A9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:125 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479AB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:126 LDX #BPP4PALETTE_SIZE
    case 0xC479AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:126 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC479AD.
    case 0xC479AF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:127 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    case 0xC479B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x00AFD5, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:127 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC479B0.
    case 0xC479B2: cpu.execute_instruction<0xAF>(0x8EC322, 4); return true;
    // src/unknown/C4/C4A377-jp.asm:128 JSL MEMCPY16
    case 0xC479B3: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C4/C4A377-jp.asm:128 JSL MEMCPY16
    // Overlapping static entry reached from 0xC479B2.
    case 0xC479B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x001CA4, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:129 LDY @LOCAL04
    case 0xC479B7: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:129 LDY @LOCAL04
    // Overlapping static entry reached from 0xC479B6.
    case 0xC479B8: cpu.execute_instruction<0x1C>(0x008598, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:130 TYA
    case 0xC479B9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:131 PROMOTENEARPTRA @VIRTUAL06
    case 0xC479BA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:131 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC479B8.
    case 0xC479BB: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4A377-jp.asm:131 PROMOTENEARPTRA @VIRTUAL06
    case 0xC479BC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4A377-jp.asm:131 PROMOTENEARPTRA @VIRTUAL06
    case 0xC479BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4A377-jp.asm:131 PROMOTENEARPTRA @VIRTUAL06
    case 0xC479BF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:131 PROMOTENEARPTRA @VIRTUAL06
    case 0xC479C0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4A377-jp.asm:131 PROMOTENEARPTRA @VIRTUAL06
    case 0xC479C2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC479C4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377-jp.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479C6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377-jp.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479C8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479CA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377-jp.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC479CC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:134 LDX #BPP4PALETTE_SIZE
    case 0xC479CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:134 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC479CE.
    case 0xC479D0: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:135 STX @LOCAL02
    case 0xC479D1: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:136 LDX @VIRTUAL02
    case 0xC479D3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:137 LDA __BSS_START__,X
    case 0xC479D5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:138 LDX @LOCAL02
    case 0xC479D8: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:139 JSL MEMCPY16
    case 0xC479DA: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C4/C4A377-jp.asm:140 SEP #PROC_FLAGS::ACCUM8
    case 0xC479DE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:141 LDA #2
    case 0xC479E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008D02, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:142 STA LOADED_BG_DATA_LAYER1
    case 0xC479E2: cpu.execute_instruction<0x8D>(0x00AFA9, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:142 STA LOADED_BG_DATA_LAYER1
    // Overlapping static entry reached from 0xC479E0.
    case 0xC479E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AF, 2); else cpu.execute_instruction<0xA9>(0x00A2AF, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:143 LDX #0
    case 0xC479E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:143 LDX #0
    // Overlapping static entry reached from 0xC479E3.
    case 0xC479E6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:143 LDX #0
    // Overlapping static entry reached from 0xC479E5.
    case 0xC479E7: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:144 REP #PROC_FLAGS::ACCUM8
    case 0xC479E8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:145 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC479EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x00AFA9, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:145 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC479EA.
    case 0xC479EC: cpu.execute_instruction<0xAF>(0xC8E722, 4); return true;
    // src/unknown/C4/C4A377-jp.asm:146 JSL GENERATE_BATTLEBG_FRAME
    case 0xC479ED: cpu.execute_instruction<0x22>(0xC2C8E7, 4); return true;
    // src/unknown/C4/C4A377-jp.asm:146 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC479EC.
    case 0xC479F0: cpu.execute_instruction<0xC2>(0x0000E2, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC479F1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:147 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC479F0.
    case 0xC479F2: cpu.execute_instruction<0x20>(0x00209C, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:148 STZ LOADED_BG_DATA_LAYER2
    case 0xC479F3: cpu.execute_instruction<0x9C>(0x00B020, 3); return true;
    // src/unknown/C4/C4A377-jp.asm:148 STZ LOADED_BG_DATA_LAYER2
    // Overlapping static entry reached from 0xC479F2.
    case 0xC479F5: cpu.execute_instruction<0xB0>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:149 REP #PROC_FLAGS::ACCUM8
    case 0xC479F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A377-jp.asm:149 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC479F5.
    case 0xC479F7: cpu.execute_instruction<0x20>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4A377-jp.asm:150 END_C_FUNCTION
    case 0xC479F8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4A377-jp.asm:150 END_C_FUNCTION
    case 0xC479F9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
