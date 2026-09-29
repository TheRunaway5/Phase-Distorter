// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C1/C1CE85.asm (unresolved).
bool execute_unresolved_c1_c1ce85_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1CE85.asm:3 BEGIN_C_FUNCTION
    case 0xC1CE85: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1CE85.asm:10 END_STACK_VARS
    case 0xC1CE87: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1CE85.asm:10 END_STACK_VARS
    case 0xC1CE88: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1CE85.asm:10 END_STACK_VARS
    case 0xC1CE89: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CE85.asm:10 END_STACK_VARS
    case 0xC1CE8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CE85.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1CE8A.
    case 0xC1CE8C: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1CE85.asm:10 END_STACK_VARS
    case 0xC1CE8D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1CE85.asm:10 END_STACK_VARS
    case 0xC1CE8E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:11 TAY
    case 0xC1CE8F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:12 STY @LOCAL03
    case 0xC1CE90: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C1CE85.asm:13 LDA #$00FF
    case 0xC1CE92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:13 LDA #$00FF
    // Overlapping static entry reached from 0xC1CE92.
    case 0xC1CE94: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1CE85.asm:14 STA @VIRTUAL02
    case 0xC1CE95: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:15 LDA __BSS_START__+1,Y
    case 0xC1CE97: cpu.execute_instruction<0xB9>(0x000001, 3); return true;
    // src/unknown/C1/C1CE85.asm:16 AND #$00FF
    case 0xC1CE9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC1CE9A.
    case 0xC1CE9C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1CE85.asm:17 TAX
    case 0xC1CE9D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:18 LDA __BSS_START__,Y
    case 0xC1CE9E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:19 AND #$00FF
    case 0xC1CEA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC1CEDE.
    case 0xC1CEA2: cpu.execute_instruction<0xFF>(0x772200, 4); return true;
    // src/unknown/C1/C1CE85.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC1CEA1.
    case 0xC1CEA3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1CE85.asm:20 JSL GET_CHARACTER_ITEM
    case 0xC1CEA4: cpu.execute_instruction<0x22>(0xC3E977, 4); return true;
    // src/unknown/C1/C1CE85.asm:20 JSL GET_CHARACTER_ITEM
    // Overlapping static entry reached from 0xC1CEA2.
    case 0xC1CEA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000C3, 2); else cpu.execute_instruction<0xE9>(0x0085C3, 3); return true;
    // src/unknown/C1/C1CE85.asm:21 STA @LOCAL02
    case 0xC1CEA8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1CE85.asm:21 STA @LOCAL02
    // Overlapping static entry reached from 0xC1CEA6.
    case 0xC1CEA9: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1CEAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CEA9.
    case 0xC1CEAB: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CEAA.
    case 0xC1CEAC: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1CEAD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CEAC.
    case 0xC1CEAE: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1CEAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CEAE.
    case 0xC1CEB0: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CEAF.
    case 0xC1CEB1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1CEB2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1CE85.asm:23 LDA @LOCAL02
    case 0xC1CEB4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1CE85.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1CEB6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1CE85.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC1CEB6.
    case 0xC1CEB8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C1CE85.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1CEB9: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1CE85.asm:25 CLC
    case 0xC1CEBD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:26 ADC @VIRTUAL06
    case 0xC1CEBE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:27 STA @VIRTUAL06
    case 0xC1CEC0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:28 LDY @LOCAL03
    case 0xC1CEC2: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1CE85.asm:29 STY @VIRTUAL04
    case 0xC1CEC4: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C1/C1CE85.asm:30 INC @VIRTUAL04
    case 0xC1CEC6: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C1CE85.asm:31 INC @VIRTUAL04
    case 0xC1CEC8: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C1CE85.asm:32 LDA #2
    case 0xC1CECA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1CE85.asm:32 LDA #2
    // Overlapping static entry reached from 0xC1CECA.
    case 0xC1CECC: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1CE85.asm:33 LDX @VIRTUAL04
    case 0xC1CECD: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1CE85.asm:34 STA __BSS_START__,X
    case 0xC1CECF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:35 TYA
    case 0xC1CED2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:36 INC
    case 0xC1CED3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:37 INC
    case 0xC1CED4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:38 INC
    case 0xC1CED5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:39 INC
    case 0xC1CED6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:40 STA @LOCAL01
    case 0xC1CED7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1CE85.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CED9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:42 LDA #1
    case 0xC1CEDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009201, 3); return true;
    // src/unknown/C1/C1CE85.asm:43 STA (@LOCAL01)
    case 0xC1CEDD: cpu.execute_instruction<0x92>(0x000010, 2); return true;
    // src/unknown/C1/C1CE85.asm:43 STA (@LOCAL01)
    // Overlapping static entry reached from 0xC1CEDB.
    case 0xC1CEDE: cpu.execute_instruction<0x10>(0x0000C2, 2); return true;
    // src/unknown/C1/C1CE85.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC1CEDF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:44 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1CEDE.
    case 0xC1CEE0: cpu.execute_instruction<0x20>(0x001898, 3); return true;
    // src/unknown/C1/C1CE85.asm:45 TYA
    case 0xC1CEE1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:46 CLC
    case 0xC1CEE2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:47 ADC #5
    case 0xC1CEE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/unknown/C1/C1CE85.asm:47 ADC #5
    // Overlapping static entry reached from 0xC1CEE3.
    case 0xC1CEE5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1CE85.asm:48 STA @LOCAL00
    case 0xC1CEE6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1CE85.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CEE8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:50 LDA __BSS_START__,Y
    case 0xC1CEEA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:51 STA (@LOCAL00)
    case 0xC1CEED: cpu.execute_instruction<0x92>(0x00000E, 2); return true;
    // src/unknown/C1/C1CE85.asm:52 LDY #item::type
    case 0xC1CEEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000019, 2); else cpu.execute_instruction<0xA0>(0x000019, 3); return true;
    // src/unknown/C1/C1CE85.asm:52 LDY #item::type
    // Overlapping static entry reached from 0xC1CEEF.
    case 0xC1CEF1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C1/C1CE85.asm:53 LDA [@VIRTUAL06],Y
    case 0xC1CEF2: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC1CEF4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:55 AND #$00FF
    case 0xC1CEF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC1CEF6.
    case 0xC1CEF8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1CE85.asm:56 STA @LOCAL02
    case 0xC1CEF9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1CE85.asm:57 AND #$0030
    case 0xC1CEFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000030, 2); else cpu.execute_instruction<0x29>(0x000030, 3); return true;
    // src/unknown/C1/C1CE85.asm:57 AND #$0030
    // Overlapping static entry reached from 0xC1CEFB.
    case 0xC1CEFD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1CE85.asm:58 CMP #1 << 4
    case 0xC1CEFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C1/C1CE85.asm:58 CMP #1 << 4
    // Overlapping static entry reached from 0xC1CEFE.
    case 0xC1CF00: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CE85.asm:59 BEQ @UNKNOWN0
    case 0xC1CF01: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C1/C1CE85.asm:60 CMP #2 << 4
    case 0xC1CF03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C1/C1CE85.asm:60 CMP #2 << 4
    // Overlapping static entry reached from 0xC1CF03.
    case 0xC1CF05: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CE85.asm:61 BEQ @UNKNOWN0
    case 0xC1CF06: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C1/C1CE85.asm:62 CMP #3 << 4
    case 0xC1CF08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/unknown/C1/C1CE85.asm:62 CMP #3 << 4
    // Overlapping static entry reached from 0xC1CF08.
    case 0xC1CF0A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CE85.asm:63 BEQ @UNKNOWN2
    case 0xC1CF0B: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/unknown/C1/C1CE85.asm:64 JMP @UNKNOWN6
    case 0xC1CF0D: cpu.execute_instruction<0x4C>(0x00CFBE, 3); return true;
    // src/unknown/C1/C1CE85.asm:66 LDA #item::effect
    case 0xC1CF10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x00001D, 3); return true;
    // src/unknown/C1/C1CE85.asm:66 LDA #item::effect
    // Overlapping static entry reached from 0xC1CF10.
    case 0xC1CF12: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1CE85.asm:67 CLC
    case 0xC1CF13: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:68 ADC @VIRTUAL06
    case 0xC1CF14: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:69 STA @VIRTUAL06
    case 0xC1CF16: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:70 LDY @LOCAL03
    case 0xC1CF18: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1CE85.asm:71 LDA __BSS_START__,Y
    case 0xC1CF1A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:72 AND #$00FF
    case 0xC1CF1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC1CF1D.
    case 0xC1CF1F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1CE85.asm:73 TAX
    case 0xC1CF20: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:74 LDA [@VIRTUAL06]
    case 0xC1CF21: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:75 JSR DETERMINE_TARGETTING
    case 0xC1CF23: cpu.execute_instruction<0x20>(0x00ADB4, 3); return true;
    // src/unknown/C1/C1CE85.asm:76 STA @VIRTUAL02
    case 0xC1CF26: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:77 AND #$00FF
    case 0xC1CF28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC1CF28.
    case 0xC1CF2A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1CE85.asm:78 BNE @UNKNOWN1
    case 0xC1CF2B: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:79 LDA #0
    case 0xC1CF2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:79 LDA #0
    // Overlapping static entry reached from 0xC1CF2D.
    case 0xC1CF2F: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C1/C1CE85.asm:80 JMP @UNKNOWN7
    case 0xC1CF30: cpu.execute_instruction<0x4C>(0x00CFC2, 3); return true;
    // src/unknown/C1/C1CE85.asm:82 LDA [@VIRTUAL06]
    case 0xC1CF33: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:83 LDX @VIRTUAL04
    case 0xC1CF35: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1CE85.asm:84 STA __BSS_START__,X
    case 0xC1CF37: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:85 SEP #PROC_FLAGS::INDEX8
    case 0xC1CF3A: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C1/C1CE85.asm:86 LDY #8
    case 0xC1CF3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/unknown/C1/C1CE85.asm:87 LDA @VIRTUAL02
    case 0xC1CF3E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:87 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1CF3C.
    case 0xC1CF3F: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C1/C1CE85.asm:88 JSL ASR8_UNKNOWN1
    case 0xC1CF40: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C1/C1CE85.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CF44: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:90 STA (@LOCAL01)
    case 0xC1CF46: cpu.execute_instruction<0x92>(0x000010, 2); return true;
    // src/unknown/C1/C1CE85.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC1CF48: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:92 LDA @VIRTUAL02
    case 0xC1CF4A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CF4C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:94 STA (@LOCAL00)
    case 0xC1CF4E: cpu.execute_instruction<0x92>(0x00000E, 2); return true;
    // src/unknown/C1/C1CE85.asm:95 BRA @UNKNOWN6
    case 0xC1CF50: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // src/unknown/C1/C1CE85.asm:99 LDA @LOCAL02
    case 0xC1CF52: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1CE85.asm:100 AND #$000C
    case 0xC1CF54: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/unknown/C1/C1CE85.asm:100 AND #$000C
    // Overlapping static entry reached from 0xC1CF54.
    case 0xC1CF56: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CE85.asm:101 BEQ @UNKNOWN3
    case 0xC1CF57: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1CE85.asm:102 CMP #4
    case 0xC1CF59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1CE85.asm:102 CMP #4
    // Overlapping static entry reached from 0xC1CF59.
    case 0xC1CF5B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1CE85.asm:103 BNE @UNKNOWN6
    case 0xC1CF5C: cpu.execute_instruction<0xD0>(0x000060, 2); return true;
    // src/unknown/C1/C1CE85.asm:105 LDY @LOCAL03
    case 0xC1CF5E: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1CE85.asm:106 LDA __BSS_START__,Y
    case 0xC1CF60: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:107 AND #$00FF
    case 0xC1CF63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:107 AND #$00FF
    // Overlapping static entry reached from 0xC1CF63.
    case 0xC1CF65: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1CE85.asm:108 TAX
    case 0xC1CF66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:109 STX @LOCAL02
    case 0xC1CF67: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1CE85.asm:110 DEX
    case 0xC1CF69: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:111 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CF6A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:112 LDY #item::flags
    case 0xC1CF6C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001C, 2); else cpu.execute_instruction<0xA0>(0x00001C, 3); return true;
    // src/unknown/C1/C1CE85.asm:112 LDY #item::flags
    // Overlapping static entry reached from 0xC1CF6C.
    case 0xC1CF6E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C1/C1CE85.asm:113 LDA [@VIRTUAL06],Y
    case 0xC1CF6F: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:114 AND f:ITEM_USABLE_FLAGS,X
    case 0xC1CF71: cpu.execute_instruction<0x3F>(0xC458AB, 4); return true;
    // src/unknown/C1/C1CE85.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC1CF75: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:116 AND #$00FF
    case 0xC1CF77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:116 AND #$00FF
    // Overlapping static entry reached from 0xC1CF77.
    case 0xC1CF79: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CE85.asm:117 BEQ @UNKNOWN5
    case 0xC1CF7A: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/unknown/C1/C1CE85.asm:118 LDA #item::effect
    case 0xC1CF7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x00001D, 3); return true;
    // src/unknown/C1/C1CE85.asm:118 LDA #item::effect
    // Overlapping static entry reached from 0xC1CF7C.
    case 0xC1CF7E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1CE85.asm:119 CLC
    case 0xC1CF7F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:120 ADC @VIRTUAL06
    case 0xC1CF80: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:121 STA @VIRTUAL06
    case 0xC1CF82: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:122 LDX @LOCAL02
    case 0xC1CF84: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1CE85.asm:123 LDA [@VIRTUAL06]
    case 0xC1CF86: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:124 JSR DETERMINE_TARGETTING
    case 0xC1CF88: cpu.execute_instruction<0x20>(0x00ADB4, 3); return true;
    // src/unknown/C1/C1CE85.asm:125 STA @VIRTUAL02
    case 0xC1CF8B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:126 AND #$00FF
    case 0xC1CF8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:126 AND #$00FF
    // Overlapping static entry reached from 0xC1CF8D.
    case 0xC1CF8F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1CE85.asm:127 BNE @UNKNOWN4
    case 0xC1CF90: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1CE85.asm:128 LDA #0
    case 0xC1CF92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:128 LDA #0
    // Overlapping static entry reached from 0xC1CF92.
    case 0xC1CF94: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1CE85.asm:129 BRA @UNKNOWN7
    case 0xC1CF95: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/unknown/C1/C1CE85.asm:131 LDA [@VIRTUAL06]
    case 0xC1CF97: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:132 LDX @VIRTUAL04
    case 0xC1CF99: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1CE85.asm:133 STA __BSS_START__,X
    case 0xC1CF9B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:134 SEP #PROC_FLAGS::INDEX8
    case 0xC1CF9E: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C1/C1CE85.asm:135 LDY #8
    case 0xC1CFA0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/unknown/C1/C1CE85.asm:136 LDA @VIRTUAL02
    case 0xC1CFA2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:136 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1CFA0.
    case 0xC1CFA3: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C1/C1CE85.asm:137 JSL ASR8_UNKNOWN1
    case 0xC1CFA4: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C1/C1CE85.asm:138 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CFA8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:139 STA (@LOCAL01)
    case 0xC1CFAA: cpu.execute_instruction<0x92>(0x000010, 2); return true;
    // src/unknown/C1/C1CE85.asm:140 REP #PROC_FLAGS::ACCUM8
    case 0xC1CFAC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:141 LDA @VIRTUAL02
    case 0xC1CFAE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:142 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CFB0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:143 STA (@LOCAL00)
    case 0xC1CFB2: cpu.execute_instruction<0x92>(0x00000E, 2); return true;
    // src/unknown/C1/C1CE85.asm:144 BRA @UNKNOWN6
    case 0xC1CFB4: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C1/C1CE85.asm:148 LDA #3
    case 0xC1CFB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1CE85.asm:148 LDA #3
    // Overlapping static entry reached from 0xC1CFB6.
    case 0xC1CFB8: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1CE85.asm:149 LDX @VIRTUAL04
    case 0xC1CFB9: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1CE85.asm:150 STA __BSS_START__,X
    case 0xC1CFBB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:152 REP #PROC_FLAGS::ACCUM8
    case 0xC1CFBE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:153 LDA @VIRTUAL02
    case 0xC1CFC0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:155 REP #PROC_FLAGS::INDEX8
    case 0xC1CFC2: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1CE85.asm:156 END_C_FUNCTION
    case 0xC1CFC4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1CE85.asm:156 END_C_FUNCTION
    case 0xC1CFC5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1CFC6.asm (unresolved).
bool execute_unresolved_c1_c1cfc6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1CFC6.asm:3 BEGIN_C_FUNCTION
    case 0xC1CFC6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1CFC6.asm:9 END_STACK_VARS
    case 0xC1CFC8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1CFC6.asm:9 END_STACK_VARS
    case 0xC1CFC9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1CFC6.asm:9 END_STACK_VARS
    case 0xC1CFCA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CFC6.asm:9 END_STACK_VARS
    case 0xC1CFCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CFC6.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1CFCB.
    case 0xC1CFCD: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1CFC6.asm:9 END_STACK_VARS
    case 0xC1CFCE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1CFC6.asm:9 END_STACK_VARS
    case 0xC1CFCF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6.asm:10 TAY
    case 0xC1CFD0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6.asm:11 STY @LOCAL01
    case 0xC1CFD1: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C1CFC6.asm:12 LDX #0
    case 0xC1CFD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1CFC6.asm:12 LDX #0
    // Overlapping static entry reached from 0xC1CFD3.
    case 0xC1CFD5: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1CFC6.asm:13 STX @LOCAL00
    case 0xC1CFD6: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1CFC6.asm:14 LDA __BSS_START__,Y
    case 0xC1CFD8: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C1CFC6.asm:15 AND #$00FF
    case 0xC1CFDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CFC6.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC1CFDB.
    case 0xC1CFDD: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1CFC6.asm:16 DEC
    case 0xC1CFDE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6.asm:17 LDY #.SIZEOF(char_struct)
    case 0xC1CFDF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1CFC6.asm:17 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1CFDF.
    case 0xC1CFE1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1CFC6.asm:18 JSL MULT168
    case 0xC1CFE2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1CFC6.asm:19 TAX
    case 0xC1CFE6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6.asm:20 LDA PARTY_CHARACTERS+char_struct::items,X
    case 0xC1CFE7: cpu.execute_instruction<0xBD>(0x0099F1, 3); return true;
    // src/unknown/C1/C1CFC6.asm:21 AND #$00FF
    case 0xC1CFEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CFC6.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC1CFEA.
    case 0xC1CFEC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CFC6.asm:22 BEQ @UNKNOWN1
    case 0xC1CFED: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1CFC6.asm:24 CREATE_WINDOW_NEAR #WINDOW::INVENTORY
    case 0xC1CFEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1CFC6.asm:24 CREATE_WINDOW_NEAR #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC1CFEF.
    case 0xC1CFF1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1CFC6.asm:24 CREATE_WINDOW_NEAR #WINDOW::INVENTORY
    case 0xC1CFF2: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C1CFC6.asm:25 LDX #2
    case 0xC1CFF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C1/C1CFC6.asm:25 LDX #2
    // Overlapping static entry reached from 0xC1CFF5.
    case 0xC1CFF7: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C1/C1CFC6.asm:26 LDY @LOCAL01
    case 0xC1CFF8: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CFC6.asm:27 LDA a:battle_menu_selection::user,Y
    case 0xC1CFFA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C1CFC6.asm:28 AND #$00FF
    case 0xC1CFFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CFC6.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC1CFFD.
    case 0xC1CFFF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1CFC6.asm:29 JSR INVENTORY_GET_ITEM_NAME
    case 0xC1D000: cpu.execute_instruction<0x20>(0x0098DE, 3); return true;
    // src/unknown/C1/C1CFC6.asm:30 LDA #1
    case 0xC1D003: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1CFC6.asm:30 LDA #1
    // Overlapping static entry reached from 0xC1D003.
    case 0xC1D005: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1CFC6.asm:31 JSR SELECTION_MENU
    case 0xC1D006: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C1CFC6.asm:32 TAX
    case 0xC1D009: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6.asm:33 STX @LOCAL00
    case 0xC1D00A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1CFC6.asm:34 JSL SET_INSTANT_PRINTING
    case 0xC1D00C: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/unknown/C1/C1CFC6.asm:35 JSR CLOSE_FOCUS_WINDOW
    case 0xC1D010: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/unknown/C1/C1CFC6.asm:36 LDX @LOCAL00
    case 0xC1D013: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1CFC6.asm:37 BEQ @UNKNOWN1
    case 0xC1D015: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C1/C1CFC6.asm:38 TXA
    case 0xC1D017: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D018: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CFC6.asm:40 LDY @LOCAL01
    case 0xC1D01A: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CFC6.asm:41 STA a:battle_menu_selection::param1,Y
    case 0xC1D01C: cpu.execute_instruction<0x99>(0x000001, 3); return true;
    // src/unknown/C1/C1CFC6.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC1D01F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CFC6.asm:43 TYA
    case 0xC1D021: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6.asm:44 JSR UNKNOWN_C1CE85
    case 0xC1D022: cpu.execute_instruction<0x20>(0x00CE85, 3); return true;
    // src/unknown/C1/C1CFC6.asm:45 TAX
    case 0xC1D025: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6.asm:46 STX @LOCAL00
    case 0xC1D026: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1CFC6.asm:47 LDA #WINDOW::UNKNOWN26
    case 0xC1D028: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x000026, 3); return true;
    // src/unknown/C1/C1CFC6.asm:47 LDA #WINDOW::UNKNOWN26
    // Overlapping static entry reached from 0xC1D028.
    case 0xC1D02A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1CFC6.asm:48 JSL CLOSE_WINDOW
    case 0xC1D02B: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/unknown/C1/C1CFC6.asm:49 LDX @LOCAL00
    case 0xC1D02F: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1CFC6.asm:50 BEQ @UNKNOWN0
    case 0xC1D031: cpu.execute_instruction<0xF0>(0x0000BC, 2); return true;
    // src/unknown/C1/C1CFC6.asm:52 LDX @LOCAL00
    case 0xC1D033: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1CFC6.asm:53 TXA
    case 0xC1D035: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1CFC6.asm:54 END_C_FUNCTION
    case 0xC1D036: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1CFC6.asm:54 END_C_FUNCTION
    case 0xC1D037: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1CFC6_redirect.asm (unresolved).
bool execute_unresolved_c1_c1cfc6_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1CFC6_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DE31: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1CFC6_redirect.asm:7 JSR UNKNOWN_C1CFC6
    case 0xC1DE33: cpu.execute_instruction<0x20>(0x00CFC6, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1CFC6_redirect.asm:8 END_C_FUNCTION
    case 0xC1DE36: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1D038.asm (unresolved).
bool execute_unresolved_c1_c1d038_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1D038.asm:3 BEGIN_C_FUNCTION
    case 0xC1D038: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1D038.asm:7 END_STACK_VARS
    case 0xC1D03A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1D038.asm:7 END_STACK_VARS
    case 0xC1D03B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1D038.asm:7 END_STACK_VARS
    case 0xC1D03C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1D038.asm:7 END_STACK_VARS
    case 0xC1D03D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1D038.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1D03D.
    case 0xC1D03F: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1D038.asm:7 END_STACK_VARS
    case 0xC1D040: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1D038.asm:7 END_STACK_VARS
    case 0xC1D041: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1D038.asm:8 STA @LOCAL00
    case 0xC1D042: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1D038.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC1D03F.
    case 0xC1D043: cpu.execute_instruction<0x0E>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1D044: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D044.
    case 0xC1D046: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1D047: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D046.
    case 0xC1D048: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1D049: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D048.
    case 0xC1D04A: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1D049.
    case 0xC1D04B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1D04C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1D038.asm:10 LDA @LOCAL00
    case 0xC1D04E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1D038.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1D050: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1D038.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC1D050.
    case 0xC1D052: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C1D038.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1D053: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1D038.asm:12 STA @LOCAL00
    case 0xC1D057: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1D038.asm:13 CLC
    case 0xC1D059: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1D038.asm:14 ADC #item::type
    case 0xC1D05A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/unknown/C1/C1D038.asm:14 ADC #item::type
    // Overlapping static entry reached from 0xC1D05A.
    case 0xC1D05C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1D038.asm:15 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1D05D: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1D038.asm:15 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1D05F: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1D038.asm:15 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1D061: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1D038.asm:15 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1D063: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1D038.asm:16 CLC
    case 0xC1D065: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1D038.asm:17 ADC @VIRTUAL0A
    case 0xC1D066: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1D038.asm:18 STA @VIRTUAL0A
    case 0xC1D068: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1D038.asm:19 LDA [@VIRTUAL0A]
    case 0xC1D06A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1D038.asm:20 AND #$00FF
    case 0xC1D06C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1D038.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC1D06C.
    case 0xC1D06E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1D038.asm:21 CMP #8
    case 0xC1D06F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C1/C1D038.asm:21 CMP #8
    // Overlapping static entry reached from 0xC1D06F.
    case 0xC1D071: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1D038.asm:22 BNE @UNKNOWN0
    case 0xC1D072: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C1/C1D038.asm:23 LDA @LOCAL00
    case 0xC1D074: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C1D038.asm:24 CLC
    case 0xC1D076: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1D038.asm:25 ADC #item::params + item_parameters::ep
    case 0xC1D077: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/unknown/C1/C1D038.asm:25 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC1D077.
    case 0xC1D079: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1D038.asm:26 CLC
    case 0xC1D07A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1D038.asm:27 ADC @VIRTUAL06
    case 0xC1D07B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1D038.asm:28 STA @VIRTUAL06
    case 0xC1D07D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1D038.asm:29 LDA [@VIRTUAL06]
    case 0xC1D07F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1D038.asm:30 AND #$00FF
    case 0xC1D081: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1D038.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC1D081.
    case 0xC1D083: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1D038.asm:31 BRA @UNKNOWN1
    case 0xC1D084: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1D038.asm:33 LDA #0
    case 0xC1D086: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1D038.asm:33 LDA #0
    // Overlapping static entry reached from 0xC1D086.
    case 0xC1D088: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1D038.asm:35 END_C_FUNCTION
    case 0xC1D089: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1D038.asm:35 END_C_FUNCTION
    case 0xC1D08A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1D08B.asm (unresolved).
bool execute_unresolved_c1_c1d08b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1D08B.asm:3 BEGIN_C_FUNCTION
    case 0xC1D08B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1D08B.asm:11 END_STACK_VARS
    case 0xC1D08D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1D08B.asm:11 END_STACK_VARS
    case 0xC1D08E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1D08B.asm:11 END_STACK_VARS
    case 0xC1D08F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1D08B.asm:11 END_STACK_VARS
    case 0xC1D090: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000ED, 2); else cpu.execute_instruction<0x69>(0x00FFED, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1D08B.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1D090.
    case 0xC1D092: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1D08B.asm:11 END_STACK_VARS
    case 0xC1D093: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1D08B.asm:11 END_STACK_VARS
    case 0xC1D094: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:12 TAY
    case 0xC1D095: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:13 STY @LOCAL02
    case 0xC1D096: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/unknown/C1/C1D08B.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC1D098: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1D08B.asm:15 LDA @BASE_VITALITY
    case 0xC1D09A: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C1/C1D08B.asm:16 STA @LOCAL01
    case 0xC1D09C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1D08B.asm:17 LDA @LEVEL_CONSTANT
    case 0xC1D09E: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/unknown/C1/C1D08B.asm:18 STA @VIRTUAL00
    case 0xC1D0A0: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1D08B.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC1D0A2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1D08B.asm:20 LDA @LOCAL01
    case 0xC1D0A4: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C1D08B.asm:21 AND #$00FF
    case 0xC1D0A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1D08B.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC1D0A6.
    case 0xC1D0A8: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1D08B.asm:22 DEC
    case 0xC1D0A9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:23 DEC
    case 0xC1D0AA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/unknown/C1/C1D08B.asm:24 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D0AB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/unknown/C1/C1D08B.asm:24 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D0AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/unknown/C1/C1D08B.asm:24 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D0AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/unknown/C1/C1D08B.asm:24 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D0AF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/unknown/C1/C1D08B.asm:24 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1D0B1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:25 STA @VIRTUAL02
    case 0xC1D0B2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1D08B.asm:26 PHY
    case 0xC1D0B4: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:27 LDA @VIRTUAL00
    case 0xC1D0B5: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1D08B.asm:28 AND #$00FF
    case 0xC1D0B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1D08B.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC1D0B7.
    case 0xC1D0B9: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1D08B.asm:29 TAY
    case 0xC1D0BA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:30 PLA
    case 0xC1D0BB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:31 JSL MULT16
    case 0xC1D0BC: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C1/C1D08B.asm:32 SEC
    case 0xC1D0C0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:33 SBC @VIRTUAL02
    case 0xC1D0C1: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C1/C1D08B.asm:34 TAX
    case 0xC1D0C3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:35 STX @LOCAL00
    case 0xC1D0C4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1D08B.asm:36 TXA
    case 0xC1D0C6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:37 CLC
    case 0xC1D0C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:38 SBC #0
    case 0xC1D0C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/unknown/C1/C1D08B.asm:38 SBC #0
    // Overlapping static entry reached from 0xC1D0C8.
    case 0xC1D0CA: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1D08B.asm:39 BRANCHGTS @UNKNOWN2
    case 0xC1D0CB: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1D08B.asm:39 BRANCHGTS @UNKNOWN2
    case 0xC1D0CD: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1D08B.asm:39 BRANCHGTS @UNKNOWN2
    case 0xC1D0CF: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1D08B.asm:39 BRANCHGTS @UNKNOWN2
    case 0xC1D0D1: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1D08B.asm:40 LDA #0
    case 0xC1D0D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1D08B.asm:40 LDA #0
    // Overlapping static entry reached from 0xC1D0D3.
    case 0xC1D0D5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1D08B.asm:41 BRA @UNKNOWN3
    case 0xC1D0D6: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C1/C1D08B.asm:43 LDA #3
    case 0xC1D0D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1D08B.asm:43 LDA #3
    // Overlapping static entry reached from 0xC1D0D8.
    case 0xC1D0DA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1D08B.asm:44 JSL RAND_MOD
    case 0xC1D0DB: cpu.execute_instruction<0x22>(0xC45F7B, 4); return true;
    // src/unknown/C1/C1D08B.asm:45 STA @VIRTUAL02
    case 0xC1D0DF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1D08B.asm:46 LDY @LOCAL02
    case 0xC1D0E1: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/unknown/C1/C1D08B.asm:47 TYA
    case 0xC1D0E3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:48 INC
    case 0xC1D0E4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:49 LDY #4
    case 0xC1D0E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C1/C1D08B.asm:49 LDY #4
    // Overlapping static entry reached from 0xC1D0E5.
    case 0xC1D0E7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1D08B.asm:50 JSL MODULUS16S
    case 0xC1D0E8: cpu.execute_instruction<0x22>(0xC091F4, 4); return true;
    // src/unknown/C1/C1D08B.asm:51 TAX
    case 0xC1D0EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:52 LDA f:UNKNOWN_C3F2B1,X
    case 0xC1D0ED: cpu.execute_instruction<0xBF>(0xC3F2B1, 4); return true;
    // src/unknown/C1/C1D08B.asm:53 AND #$00FF
    case 0xC1D0F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1D08B.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC1D0F1.
    case 0xC1D0F3: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1D08B.asm:54 CLC
    case 0xC1D0F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:55 ADC @VIRTUAL02
    case 0xC1D0F5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1D08B.asm:56 TAY
    case 0xC1D0F7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:57 DEY
    case 0xC1D0F8: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:58 LDX @LOCAL00
    case 0xC1D0F9: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1D08B.asm:59 TXA
    case 0xC1D0FB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:60 JSL MULT16
    case 0xC1D0FC: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C1/C1D08B.asm:61 LDY #50
    case 0xC1D100: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000032, 2); else cpu.execute_instruction<0xA0>(0x000032, 3); return true;
    // src/unknown/C1/C1D08B.asm:61 LDY #50
    // Overlapping static entry reached from 0xC1D100.
    case 0xC1D102: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1D08B.asm:62 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC1D103: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1D08B.asm:64 END_C_FUNCTION
    case 0xC1D107: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1D08B.asm:64 END_C_FUNCTION
    case 0xC1D108: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1DCCB.asm (unresolved).
bool execute_unresolved_c1_c1dccb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1DCCB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DCCB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1DCCB.asm:7 END_STACK_VARS
    case 0xC1DCCD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1DCCB.asm:7 END_STACK_VARS
    case 0xC1DCCE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1DCCB.asm:7 END_STACK_VARS
    case 0xC1DCCF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1DCCB.asm:7 END_STACK_VARS
    case 0xC1DCD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1DCCB.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DCD0.
    case 0xC1DCD2: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1DCCB.asm:7 END_STACK_VARS
    case 0xC1DCD3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1DCCB.asm:7 END_STACK_VARS
    case 0xC1DCD4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1DCCB.asm:8 STA @VIRTUAL04
    case 0xC1DCD5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1DCCB.asm:8 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1DCD2.
    case 0xC1DCD6: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/unknown/C1/C1DCCB.asm:9 JSL UNKNOWN_C200D9
    case 0xC1DCD7: cpu.execute_instruction<0x22>(0xC200D9, 4); return true;
    // src/unknown/C1/C1DCCB.asm:9 JSL UNKNOWN_C200D9
    // Overlapping static entry reached from 0xC1DCD6.
    case 0xC1DCD8: cpu.execute_instruction<0xD9>(0x00C200, 3); return true;
    // src/unknown/C1/C1DCCB.asm:10 LDA #1
    case 0xC1DCDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1DCCB.asm:10 LDA #1
    // Overlapping static entry reached from 0xC1DCDB.
    case 0xC1DCDD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1DCCB.asm:11 STA BATTLE_MODE_FLAG
    case 0xC1DCDE: cpu.execute_instruction<0x8D>(0x009643, 3); return true;
    // src/unknown/C1/C1DCCB.asm:12 STA @VIRTUAL02
    case 0xC1DCE1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1DCCB.asm:13 BRA @UNKNOWN1
    case 0xC1DCE3: cpu.execute_instruction<0x80>(0x00004B, 2); return true;
    // src/unknown/C1/C1DCCB.asm:15 LDY #1
    case 0xC1DCE5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C1DCCB.asm:15 LDY #1
    // Overlapping static entry reached from 0xC1DCE5.
    case 0xC1DCE7: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1DCCB.asm:16 LDX @VIRTUAL04
    case 0xC1DCE8: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1DCCB.asm:17 LDA @VIRTUAL02
    case 0xC1DCEA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1DCCB.asm:18 JSR RESET_CHAR_LEVEL_ONE
    case 0xC1DCEC: cpu.execute_instruction<0x20>(0x00D8D0, 3); return true;
    // src/unknown/C1/C1DCCB.asm:19 LDY #0
    case 0xC1DCEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1DCCB.asm:19 LDY #0
    // Overlapping static entry reached from 0xC1DCEF.
    case 0xC1DCF1: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1DCCB.asm:20 LDX #100
    case 0xC1DCF2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000064, 2); else cpu.execute_instruction<0xA2>(0x000064, 3); return true;
    // src/unknown/C1/C1DCCB.asm:20 LDX #100
    // Overlapping static entry reached from 0xC1DCF2.
    case 0xC1DCF4: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1DCCB.asm:21 LDA @VIRTUAL02
    case 0xC1DCF5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1DCCB.asm:22 JSR RECOVER_HP_AMTPERCENT
    case 0xC1DCF7: cpu.execute_instruction<0x20>(0x008F64, 3); return true;
    // src/unknown/C1/C1DCCB.asm:23 LDY #0
    case 0xC1DCFA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1DCCB.asm:23 LDY #0
    // Overlapping static entry reached from 0xC1DCFA.
    case 0xC1DCFC: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1DCCB.asm:24 LDX #100
    case 0xC1DCFD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000064, 2); else cpu.execute_instruction<0xA2>(0x000064, 3); return true;
    // src/unknown/C1/C1DCCB.asm:24 LDX #100
    // Overlapping static entry reached from 0xC1DCFD.
    case 0xC1DCFF: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1DCCB.asm:25 LDA @VIRTUAL02
    case 0xC1DD00: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1DCCB.asm:26 JSR RECOVER_PP_AMTPERCENT
    case 0xC1DD02: cpu.execute_instruction<0x20>(0x009010, 3); return true;
    // src/unknown/C1/C1DCCB.asm:27 LDA @VIRTUAL02
    case 0xC1DD05: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1DCCB.asm:28 DEC
    case 0xC1DD07: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1DCCB.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC1DD08: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1DCCB.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DD08.
    case 0xC1DD0A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1DCCB.asm:30 JSL MULT168
    case 0xC1DD0B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1DCCB.asm:31 TAY
    case 0xC1DD0F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1DCCB.asm:32 LDA PARTY_CHARACTERS+char_struct::current_hp_target,Y
    case 0xC1DD10: cpu.execute_instruction<0xB9>(0x009A15, 3); return true;
    // src/unknown/C1/C1DCCB.asm:33 STA PARTY_CHARACTERS+char_struct::current_hp,Y
    case 0xC1DD13: cpu.execute_instruction<0x99>(0x009A13, 3); return true;
    // src/unknown/C1/C1DCCB.asm:34 LDA PARTY_CHARACTERS+char_struct::current_pp_target,Y
    case 0xC1DD16: cpu.execute_instruction<0xB9>(0x009A1B, 3); return true;
    // src/unknown/C1/C1DCCB.asm:35 STA PARTY_CHARACTERS+char_struct::current_pp,Y
    case 0xC1DD19: cpu.execute_instruction<0x99>(0x009A19, 3); return true;
    // src/unknown/C1/C1DCCB.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DD1C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/C1/C1DCCB.asm:37 STZ_BADOPT @LOCAL00
    case 0xC1DD1E: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C1/C1DCCB.asm:38 LDX #7
    case 0xC1DD20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000007, 2); else cpu.execute_instruction<0xA2>(0x000007, 3); return true;
    // src/unknown/C1/C1DCCB.asm:38 LDX #7
    // Overlapping static entry reached from 0xC1DD20.
    case 0xC1DD22: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C1/C1DCCB.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC1DD23: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1DCCB.asm:40 TYA
    case 0xC1DD25: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1DCCB.asm:41 CLC
    case 0xC1DD26: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1DCCB.asm:42 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC1DD27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/unknown/C1/C1DCCB.asm:42 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC1DD27.
    case 0xC1DD29: cpu.execute_instruction<0x99>(0x00FC22, 3); return true;
    // src/unknown/C1/C1DCCB.asm:43 JSL MEMSET16
    case 0xC1DD2A: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C1/C1DCCB.asm:43 JSL MEMSET16
    // Overlapping static entry reached from 0xC1DD29.
    case 0xC1DD2C: cpu.execute_instruction<0x8E>(0x00E6C0, 3); return true;
    // src/unknown/C1/C1DCCB.asm:44 INC @VIRTUAL02
    case 0xC1DD2E: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C1DCCB.asm:44 INC @VIRTUAL02
    // Overlapping static entry reached from 0xC1DD2C.
    case 0xC1DD2F: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unknown/C1/C1DCCB.asm:46 LDA @VIRTUAL02
    case 0xC1DD30: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1DCCB.asm:47 CMP #4
    case 0xC1DD32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1DCCB.asm:47 CMP #4
    // Overlapping static entry reached from 0xC1DD32.
    case 0xC1DD34: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C1/C1DCCB.asm:48 BLTEQ @UNKNOWN0
    case 0xC1DD35: cpu.execute_instruction<0x90>(0x0000AE, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C1/C1DCCB.asm:48 BLTEQ @UNKNOWN0
    case 0xC1DD37: cpu.execute_instruction<0xF0>(0x0000AC, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1DCCB.asm:49 END_C_FUNCTION
    case 0xC1DD39: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1DCCB.asm:49 END_C_FUNCTION
    case 0xC1DD3A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1DD5F.asm (unresolved).
bool execute_unresolved_c1_c1dd5f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1DD5F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DD5F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1DD5F.asm:5 JSR UNKNOWN_C1008E
    case 0xC1DD61: cpu.execute_instruction<0x20>(0x00008E, 3); return true;
    // src/unknown/C1/C1DD5F.asm:6 JSL WINDOW_TICK
    case 0xC1DD64: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C1/C1DD5F.asm:7 JSR HIDE_HPPP_WINDOWS
    case 0xC1DD68: cpu.execute_instruction<0x20>(0x000A1D, 3); return true;
    // src/unknown/C1/C1DD5F.asm:8 JSL WINDOW_TICK
    case 0xC1DD6B: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1DD5F.asm:9 END_C_FUNCTION
    case 0xC1DD6F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1DD82.asm (unresolved).
bool execute_unresolved_c1_c1dd82_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1DD82.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DD82: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1DD82.asm:7 END_STACK_VARS
    case 0xC1DD84: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1DD82.asm:7 END_STACK_VARS
    case 0xC1DD85: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1DD82.asm:7 END_STACK_VARS
    case 0xC1DD86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1DD82.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DD86.
    case 0xC1DD88: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1DD82.asm:7 END_STACK_VARS
    case 0xC1DD89: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1DD82.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DD8A: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1DD82.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DD8C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1DD82.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DD8E: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1DD82.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DD90: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1DD82.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DD92: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1DD82.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DD94: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1DD82.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DD96: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1DD82.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DD98: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1DD82.asm:10 JSR UNKNOWN_C1AD0A
    case 0xC1DD9A: cpu.execute_instruction<0x20>(0x00AD0A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1DD82.asm:11 END_C_FUNCTION
    case 0xC1DD9D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1DD82.asm:11 END_C_FUNCTION
    case 0xC1DD9E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1DD9F.asm (unresolved).
bool execute_unresolved_c1_c1dd9f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1DD9F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DD9F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1DD9F.asm:7 END_STACK_VARS
    case 0xC1DDA1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1DD9F.asm:7 END_STACK_VARS
    case 0xC1DDA2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1DD9F.asm:7 END_STACK_VARS
    case 0xC1DDA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1DD9F.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DDA3.
    case 0xC1DDA5: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1DD9F.asm:7 END_STACK_VARS
    case 0xC1DDA6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1DD9F.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DDA7: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1DD9F.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DDA9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1DD9F.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DDAB: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1DD9F.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DDAD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1DD9F.asm:9 LDA #1
    case 0xC1DDAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1DD9F.asm:9 LDA #1
    // Overlapping static entry reached from 0xC1DDAF.
    case 0xC1DDB1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1DD9F.asm:10 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1DDB2: cpu.execute_instruction<0x20>(0x000036, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1DD9F.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DDB5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1DD9F.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DDB7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1DD9F.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DDB9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1DD9F.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DDBB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1DD9F.asm:12 JSL DISPLAY_TEXT
    case 0xC1DDBD: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/unknown/C1/C1DD9F.asm:13 JSR CLEAR_BLINKING_PROMPT
    case 0xC1DDC1: cpu.execute_instruction<0x20>(0x00003C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1DD9F.asm:14 END_C_FUNCTION
    case 0xC1DDC4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1DD9F.asm:14 END_C_FUNCTION
    case 0xC1DDC5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1E48D.asm (unresolved).
bool execute_unresolved_c1_c1e48d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1E48D.asm:3 BEGIN_C_FUNCTION
    case 0xC1E48D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1E48D.asm:11 END_STACK_VARS
    case 0xC1E48F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1E48D.asm:11 END_STACK_VARS
    case 0xC1E490: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1E48D.asm:11 END_STACK_VARS
    case 0xC1E491: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1E48D.asm:11 END_STACK_VARS
    case 0xC1E492: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1E48D.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1E492.
    case 0xC1E494: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1E48D.asm:11 END_STACK_VARS
    case 0xC1E495: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1E48D.asm:11 END_STACK_VARS
    case 0xC1E496: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D.asm:12 STY @LOCAL01
    case 0xC1E497: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C1E48D.asm:12 STY @LOCAL01
    // Overlapping static entry reached from 0xC1E494.
    case 0xC1E498: cpu.execute_instruction<0x10>(0x000086, 2); return true;
    // src/unknown/C1/C1E48D.asm:13 STX @LOCAL00
    case 0xC1E499: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1E48D.asm:13 STX @LOCAL00
    // Overlapping static entry reached from 0xC1E498.
    case 0xC1E49A: cpu.execute_instruction<0x0E>(0x000285, 3); return true;
    // src/unknown/C1/C1E48D.asm:14 STA @VIRTUAL02
    case 0xC1E49B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1E48D.asm:15 JSL SET_INSTANT_PRINTING
    case 0xC1E49D: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/unknown/C1/C1E48D.asm:16 LDA @VIRTUAL02
    case 0xC1E4A1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1E48D.asm:17 JSR SET_WINDOW_FOCUS
    case 0xC1E4A3: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/unknown/C1/C1E48D.asm:18 LDY @LOCAL01
    case 0xC1E4A6: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1E48D.asm:19 LDX @LOCAL00
    case 0xC1E4A8: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1E48D.asm:20 LDA @VIRTUAL02
    case 0xC1E4AA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1E48D.asm:21 JSL UNKNOWN_C442AC
    case 0xC1E4AC: cpu.execute_instruction<0x22>(0xC442AC, 4); return true;
    // src/unknown/C1/C1E48D.asm:22 TAX
    case 0xC1E4B0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E48D.asm:23 STX @LOCAL00
    case 0xC1E4B1: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1E48D.asm:24 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E4B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/unknown/C1/C1E48D.asm:24 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1E4B3.
    case 0xC1E4B5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1E48D.asm:25 JSR SET_WINDOW_FOCUS
    case 0xC1E4B6: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/unknown/C1/C1E48D.asm:26 LDX @LOCAL00
    case 0xC1E4B9: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1E48D.asm:27 TXA
    case 0xC1E4BB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1E48D.asm:28 END_C_FUNCTION
    case 0xC1E4BC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1E48D.asm:28 END_C_FUNCTION
    case 0xC1E4BD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1E4BE.asm (unresolved).
bool execute_unresolved_c1_c1e4be_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1E4BE.asm:3 BEGIN_C_FUNCTION
    case 0xC1E4BE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1E4BE.asm:14 END_STACK_VARS
    case 0xC1E4C0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1E4BE.asm:14 END_STACK_VARS
    case 0xC1E4C1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1E4BE.asm:14 END_STACK_VARS
    case 0xC1E4C2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1E4BE.asm:14 END_STACK_VARS
    case 0xC1E4C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1E4BE.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC1E4C3.
    case 0xC1E4C5: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1E4BE.asm:14 END_STACK_VARS
    case 0xC1E4C6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1E4BE.asm:14 END_STACK_VARS
    case 0xC1E4C7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:15 STY @VIRTUAL02
    case 0xC1E4C8: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE.asm:15 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC1E4C5.
    case 0xC1E4C9: cpu.execute_instruction<0x02>(0x000086, 2); return true;
    // src/unknown/C1/C1E4BE.asm:16 STX @LOCAL04
    case 0xC1E4CA: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1E4BE.asm:17 STA @LOCAL03
    case 0xC1E4CC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1E4BE.asm:18 JSL SET_INSTANT_PRINTING
    case 0xC1E4CE: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1E4BE.asm:19 CREATE_WINDOW_NEAR @LOCAL03
    case 0xC1E4D2: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1E4BE.asm:19 CREATE_WINDOW_NEAR @LOCAL03
    case 0xC1E4D4: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C1E4BE.asm:20 LDA CURRENT_FOCUS_WINDOW
    case 0xC1E4D7: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C1E4BE.asm:21 ASL
    case 0xC1E4DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:22 TAX
    case 0xC1E4DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:23 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E4DC: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C1E4BE.asm:24 LDY #.SIZEOF(window_stats)
    case 0xC1E4DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C1E4BE.asm:24 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E4DF.
    case 0xC1E4E1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1E4BE.asm:25 JSL MULT168
    case 0xC1E4E2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1E4BE.asm:26 CLC
    case 0xC1E4E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:27 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1E4E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C1/C1E4BE.asm:27 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1E4E7.
    case 0xC1E4E9: cpu.execute_instruction<0x86>(0x0000A8, 2); return true;
    // src/unknown/C1/C1E4BE.asm:28 TAY
    case 0xC1E4EA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:29 STY @LOCAL02
    case 0xC1E4EB: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C1/C1E4BE.asm:30 LDA #4
    case 0xC1E4ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C1E4BE.asm:30 LDA #4
    // Overlapping static entry reached from 0xC1E4ED.
    case 0xC1E4EF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1E4BE.asm:31 CLC
    case 0xC1E4F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:32 SBC @LOCAL04
    case 0xC1E4F1: cpu.execute_instruction<0xE5>(0x000016, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1E4BE.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC1E4F3: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1E4BE.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC1E4F5: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1E4BE.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC1E4F7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1E4BE.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC1E4F9: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1E4BE.asm:34 LDX #5
    case 0xC1E4FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C1/C1E4BE.asm:34 LDX #5
    // Overlapping static entry reached from 0xC1E4FB.
    case 0xC1E4FD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1E4BE.asm:35 BRA @UNKNOWN3
    case 0xC1E4FE: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1E4BE.asm:37 LDX #6
    case 0xC1E500: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C1/C1E4BE.asm:37 LDX #6
    // Overlapping static entry reached from 0xC1E500.
    case 0xC1E502: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1E4BE.asm:39 STX @LOCAL01
    case 0xC1E503: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C1E4BE.asm:40 LDA @LOCAL01
    case 0xC1E505: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C1E4BE.asm:41 JSL UNKNOWN_C441B7
    case 0xC1E507: cpu.execute_instruction<0x22>(0xC441B7, 4); return true;
    // src/unknown/C1/C1E4BE.asm:42 LDY @LOCAL02
    case 0xC1E50B: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C1E4BE.asm:43 LDA a:window_stats::text_y,Y
    case 0xC1E50D: cpu.execute_instruction<0xB9>(0x000010, 3); return true;
    // src/unknown/C1/C1E4BE.asm:44 TAX
    case 0xC1E510: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:45 LDA #0
    case 0xC1E511: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1E4BE.asm:45 LDA #0
    // Overlapping static entry reached from 0xC1E511.
    case 0xC1E513: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1E4BE.asm:46 JSL UNKNOWN_C438A5
    case 0xC1E514: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/unknown/C1/C1E4BE.asm:47 LDA @VIRTUAL02
    case 0xC1E518: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE.asm:48 CMP #6
    case 0xC1E51A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C1/C1E4BE.asm:48 CMP #6
    // Overlapping static entry reached from 0xC1E51A.
    case 0xC1E51C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1E4BE.asm:49 BNE @UNKNOWN4
    case 0xC1E51D: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1E4BE.asm:50 LDX #0
    case 0xC1E51F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1E4BE.asm:50 LDX #0
    // Overlapping static entry reached from 0xC1E51F.
    case 0xC1E521: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1E4BE.asm:51 BRA @UNKNOWN5
    case 0xC1E522: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1E4BE.asm:53 LDX @VIRTUAL02
    case 0xC1E524: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE.asm:54 INX
    case 0xC1E526: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:56 STX @VIRTUAL04
    case 0xC1E527: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C1E4BE.asm:57 LDA @VIRTUAL04
    case 0xC1E529: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1E4BE.asm:58 STA @LOCAL02
    case 0xC1E52B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1E4BE.asm:59 LDA #0
    case 0xC1E52D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1E4BE.asm:59 LDA #0
    // Overlapping static entry reached from 0xC1E52D.
    case 0xC1E52F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1E4BE.asm:60 STA @VIRTUAL02
    case 0xC1E530: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE.asm:61 STA @LOCAL00
    case 0xC1E532: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1E4BE.asm:62 BRA @UNKNOWN7
    case 0xC1E534: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C1/C1E4BE.asm:64 TXY
    case 0xC1E536: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:65 LDX @LOCAL01
    case 0xC1E537: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C1/C1E4BE.asm:66 LDA @LOCAL03
    case 0xC1E539: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1E4BE.asm:67 JSL UNKNOWN_C442AC
    case 0xC1E53B: cpu.execute_instruction<0x22>(0xC442AC, 4); return true;
    // src/unknown/C1/C1E4BE.asm:68 INC @VIRTUAL02
    case 0xC1E53F: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE.asm:69 LDA @VIRTUAL02
    case 0xC1E541: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE.asm:70 STA @LOCAL00
    case 0xC1E543: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1E4BE.asm:72 LDA @LOCAL02
    case 0xC1E545: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1E4BE.asm:73 STA @VIRTUAL04
    case 0xC1E547: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C1/C1E4BE.asm:74 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC1E549: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C1/C1E4BE.asm:74 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC1E54B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C1/C1E4BE.asm:74 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC1E54C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C1/C1E4BE.asm:74 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC1E54E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:75 STA @VIRTUAL02
    case 0xC1E54F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE.asm:76 LDA @LOCAL04
    case 0xC1E551: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:670 STA scratch
    // Macro caller: src/unknown/C1/C1E4BE.asm:77 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E553: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:671 ASL
    // Macro caller: src/unknown/C1/C1E4BE.asm:77 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E555: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:672 ASL
    // Macro caller: src/unknown/C1/C1E4BE.asm:77 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E556: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:673 ADC scratch
    // Macro caller: src/unknown/C1/C1E4BE.asm:77 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E557: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:674 ASL
    // Macro caller: src/unknown/C1/C1E4BE.asm:77 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E559: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:675 ASL
    // Macro caller: src/unknown/C1/C1E4BE.asm:77 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E55A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:676 ADC scratch
    // Macro caller: src/unknown/C1/C1E4BE.asm:77 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E55B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:677 ASL
    // Macro caller: src/unknown/C1/C1E4BE.asm:77 OPTIMIZED_MULT @VIRTUAL04, 42
    case 0xC1E55D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:78 CLC
    case 0xC1E55E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:79 ADC @VIRTUAL02
    case 0xC1E55F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE.asm:80 LDX @LOCAL00
    case 0xC1E561: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1E4BE.asm:81 STX @VIRTUAL02
    case 0xC1E563: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE.asm:82 CLC
    case 0xC1E565: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:83 ADC @VIRTUAL02
    case 0xC1E566: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1E4BE.asm:84 TAX
    case 0xC1E568: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:85 LDA f:DONT_CARE_NAMES,X
    case 0xC1E569: cpu.execute_instruction<0xBF>(0xD5F4CF, 4); return true;
    // src/unknown/C1/C1E4BE.asm:86 AND #$00FF
    case 0xC1E56D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1E4BE.asm:86 AND #$00FF
    // Overlapping static entry reached from 0xC1E56D.
    case 0xC1E56F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1E4BE.asm:87 TAX
    case 0xC1E570: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1E4BE.asm:88 BNE @UNKNOWN6
    case 0xC1E571: cpu.execute_instruction<0xD0>(0x0000C3, 2); return true;
    // src/unknown/C1/C1E4BE.asm:89 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E573: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/unknown/C1/C1E4BE.asm:89 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1E573.
    case 0xC1E575: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1E4BE.asm:90 JSR SET_WINDOW_FOCUS
    case 0xC1E576: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/unknown/C1/C1E4BE.asm:91 LDA @LOCAL02
    case 0xC1E579: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1E4BE.asm:92 STA @VIRTUAL04
    case 0xC1E57B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1E4BE.asm:93 END_C_FUNCTION
    case 0xC1E57D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1E4BE.asm:93 END_C_FUNCTION
    case 0xC1E57E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1EC8F.asm (unresolved).
bool execute_unresolved_c1_c1ec8f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1EC8F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1EC8F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1EC8F.asm:8 END_STACK_VARS
    case 0xC1EC91: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1EC8F.asm:8 END_STACK_VARS
    case 0xC1EC92: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1EC8F.asm:8 END_STACK_VARS
    case 0xC1EC93: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1EC8F.asm:8 END_STACK_VARS
    case 0xC1EC94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1EC8F.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1EC94.
    case 0xC1EC96: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1EC8F.asm:8 END_STACK_VARS
    case 0xC1EC97: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1EC8F.asm:8 END_STACK_VARS
    case 0xC1EC98: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1EC8F.asm:9 STA @LOCAL01
    case 0xC1EC99: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1EC8F.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC1EC96.
    case 0xC1EC9A: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/unknown/C1/C1EC8F.asm:10 LDX #.LOWORD(GAME_STATE)+game_state::text_flavour
    case 0xC1EC9B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000CD, 2); else cpu.execute_instruction<0xA2>(0x0099CD, 3); return true;
    // src/unknown/C1/C1EC8F.asm:10 LDX #.LOWORD(GAME_STATE)+game_state::text_flavour
    // Overlapping static entry reached from 0xC1EC9A.
    case 0xC1EC9C: cpu.execute_instruction<0xCD>(0x008699, 3); return true;
    // src/unknown/C1/C1EC8F.asm:10 LDX #.LOWORD(GAME_STATE)+game_state::text_flavour
    // Overlapping static entry reached from 0xC1EC9B.
    case 0xC1EC9D: cpu.execute_instruction<0x99>(0x000E86, 3); return true;
    // src/unknown/C1/C1EC8F.asm:11 STX @LOCAL00
    case 0xC1EC9E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1EC8F.asm:11 STX @LOCAL00
    // Overlapping static entry reached from 0xC1EC9C.
    case 0xC1EC9F: cpu.execute_instruction<0x0E>(0x0020E2, 3); return true;
    // src/unknown/C1/C1EC8F.asm:12 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ECA0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1EC8F.asm:13 LDA __BSS_START__,X
    case 0xC1ECA2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1EC8F.asm:14 STA @VIRTUAL00
    case 0xC1ECA5: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1EC8F.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC1ECA7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1EC8F.asm:16 LDA @LOCAL01
    case 0xC1ECA9: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C1EC8F.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ECAB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1EC8F.asm:18 STA __BSS_START__,X
    case 0xC1ECAD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1EC8F.asm:19 JSL LOAD_WINDOW_GFX
    case 0xC1ECB0: cpu.execute_instruction<0x22>(0xC47C3F, 4); return true;
    // src/unknown/C1/C1EC8F.asm:21 LDA #2
    case 0xC1ECB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1EC8F.asm:21 LDA #2
    // Overlapping static entry reached from 0xC1ECB4.
    case 0xC1ECB6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1EC8F.asm:22 JSL UNKNOWN_C44963
    case 0xC1ECB7: cpu.execute_instruction<0x22>(0xC44963, 4); return true;
    // src/unknown/C1/C1EC8F.asm:23 JSL UNKNOWN_C47F87
    case 0xC1ECBB: cpu.execute_instruction<0x22>(0xC47F87, 4); return true;
    // src/unknown/C1/C1EC8F.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ECBF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1EC8F.asm:25 LDA #PALETTE_UPLOAD::FULL
    case 0xC1ECC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C1/C1EC8F.asm:26 STA PALETTE_UPLOAD_MODE
    case 0xC1ECC3: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C1/C1EC8F.asm:26 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC1ECC1.
    case 0xC1ECC4: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C1/C1EC8F.asm:27 LDA @VIRTUAL00
    case 0xC1ECC6: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1EC8F.asm:28 LDX @LOCAL00
    case 0xC1ECC8: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1EC8F.asm:29 STA __BSS_START__,X
    case 0xC1ECCA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1EC8F.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC1ECCD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1EC8F.asm:31 END_C_FUNCTION
    case 0xC1ECCF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1EC8F.asm:31 END_C_FUNCTION
    case 0xC1ECD0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1ECD1.asm (unresolved).
bool execute_unresolved_c1_c1ecd1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1ECD1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1ECD1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1ECD1.asm:5 XBA
    case 0xC1ECD3: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C1/C1ECD1.asm:6 AND #$00FF
    case 0xC1ECD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1ECD1.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC1ECD4.
    case 0xC1ECD6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1ECD1.asm:7 JSL UNKNOWN_C1EC8F
    case 0xC1ECD7: cpu.execute_instruction<0x22>(0xC1EC8F, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1ECD1.asm:8 END_C_FUNCTION
    case 0xC1ECDB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1F07E.asm (unresolved).
bool execute_unresolved_c1_c1f07e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1F07E.asm:3 BEGIN_C_FUNCTION
    case 0xC1F07E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1F07E.asm:8 END_STACK_VARS
    case 0xC1F080: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1F07E.asm:8 END_STACK_VARS
    case 0xC1F081: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F07E.asm:8 END_STACK_VARS
    case 0xC1F082: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F07E.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F082.
    case 0xC1F084: cpu.execute_instruction<0xFF>(0x14A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1F07E.asm:8 END_STACK_VARS
    case 0xC1F085: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F07E.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC1F086: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F07E.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC1F086.
    case 0xC1F088: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1F07E.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC1F089: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:10 LOADPTR FILE_SELECT_TEXT_CONTINUE, @LOCAL00
    case 0xC1F08C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000094, 2); else cpu.execute_instruction<0xA9>(0x00C094, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:10 LOADPTR FILE_SELECT_TEXT_CONTINUE, @LOCAL00
    // Overlapping static entry reached from 0xC1F08C.
    case 0xC1F08E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E.asm:10 LOADPTR FILE_SELECT_TEXT_CONTINUE, @LOCAL00
    case 0xC1F08F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E.asm:10 LOADPTR FILE_SELECT_TEXT_CONTINUE, @LOCAL00
    // Overlapping static entry reached from 0xC1F08E.
    case 0xC1F090: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:10 LOADPTR FILE_SELECT_TEXT_CONTINUE, @LOCAL00
    case 0xC1F091: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:10 LOADPTR FILE_SELECT_TEXT_CONTINUE, @LOCAL00
    // Overlapping static entry reached from 0xC1F091.
    case 0xC1F093: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F07E.asm:10 LOADPTR FILE_SELECT_TEXT_CONTINUE, @LOCAL00
    case 0xC1F094: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E.asm:11 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F096: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E.asm:11 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1F096.
    case 0xC1F098: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1F07E.asm:11 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F099: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E.asm:11 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F09B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E.asm:11 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1F09B.
    case 0xC1F09D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1F07E.asm:11 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F09E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F07E.asm:12 LDY #0
    case 0xC1F0A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1F07E.asm:12 LDY #0
    // Overlapping static entry reached from 0xC1F0A0.
    case 0xC1F0A2: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C1/C1F07E.asm:13 TYX
    case 0xC1F0A3: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C1F07E.asm:14 LDA #1
    case 0xC1F0A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F07E.asm:14 LDA #1
    // Overlapping static entry reached from 0xC1F0A4.
    case 0xC1F0A6: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F07E.asm:15 JSR UNKNOWN_C1153B
    case 0xC1F0A7: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/unknown/C1/C1F07E.asm:16 LDX #0
    case 0xC1F0AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1F07E.asm:16 LDX #0
    // Overlapping static entry reached from 0xC1F0AA.
    case 0xC1F0AC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1F07E.asm:17 BRA @UNKNOWN2
    case 0xC1F0AD: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/unknown/C1/C1F07E.asm:19 LDA CURRENT_SAVE_SLOT
    case 0xC1F0AF: cpu.execute_instruction<0xAD>(0x00B4A1, 3); return true;
    // src/unknown/C1/C1F07E.asm:20 AND #$00FF
    case 0xC1F0B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F07E.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC1F0B2.
    case 0xC1F0B4: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1F07E.asm:21 DEC
    case 0xC1F0B5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1F07E.asm:22 STA @VIRTUAL02
    case 0xC1F0B6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1F07E.asm:23 TXA
    case 0xC1F0B8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1F07E.asm:24 CMP @VIRTUAL02
    case 0xC1F0B9: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C1/C1F07E.asm:25 BEQ @UNKNOWN1
    case 0xC1F0BB: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C1/C1F07E.asm:26 LDA SAVE_FILES_PRESENT,X
    case 0xC1F0BD: cpu.execute_instruction<0xBD>(0x00B49E, 3); return true;
    // src/unknown/C1/C1F07E.asm:27 AND #$00FF
    case 0xC1F0C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F07E.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1F0C0.
    case 0xC1F0C2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1F07E.asm:28 BNE @UNKNOWN1
    case 0xC1F0C3: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:29 LOADPTR FILE_SELECT_TEXT_COPY, @LOCAL00
    case 0xC1F0C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x00C09D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:29 LOADPTR FILE_SELECT_TEXT_COPY, @LOCAL00
    // Overlapping static entry reached from 0xC1F0C5.
    case 0xC1F0C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E.asm:29 LOADPTR FILE_SELECT_TEXT_COPY, @LOCAL00
    case 0xC1F0C8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E.asm:29 LOADPTR FILE_SELECT_TEXT_COPY, @LOCAL00
    // Overlapping static entry reached from 0xC1F0C7.
    case 0xC1F0C9: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:29 LOADPTR FILE_SELECT_TEXT_COPY, @LOCAL00
    case 0xC1F0CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:29 LOADPTR FILE_SELECT_TEXT_COPY, @LOCAL00
    // Overlapping static entry reached from 0xC1F0CA.
    case 0xC1F0CC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F07E.asm:29 LOADPTR FILE_SELECT_TEXT_COPY, @LOCAL00
    case 0xC1F0CD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E.asm:30 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F0CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E.asm:30 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1F0CF.
    case 0xC1F0D1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1F07E.asm:30 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F0D2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E.asm:30 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F0D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E.asm:30 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1F0D4.
    case 0xC1F0D6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1F07E.asm:30 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F0D7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F07E.asm:31 LDY #0
    case 0xC1F0D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1F07E.asm:31 LDY #0
    // Overlapping static entry reached from 0xC1F0D9.
    case 0xC1F0DB: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1F07E.asm:32 LDX #6
    case 0xC1F0DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C1/C1F07E.asm:32 LDX #6
    // Overlapping static entry reached from 0xC1F0DC.
    case 0xC1F0DE: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F07E.asm:33 LDA #2
    case 0xC1F0DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1F07E.asm:33 LDA #2
    // Overlapping static entry reached from 0xC1F0DF.
    case 0xC1F0E1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F07E.asm:34 JSR UNKNOWN_C1153B
    case 0xC1F0E2: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/unknown/C1/C1F07E.asm:35 BRA @UNKNOWN4
    case 0xC1F0E5: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C1/C1F07E.asm:37 INX
    case 0xC1F0E7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1F07E.asm:39 STX @VIRTUAL02
    case 0xC1F0E8: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1F07E.asm:40 LDA #3
    case 0xC1F0EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1F07E.asm:40 LDA #3
    // Overlapping static entry reached from 0xC1F0EA.
    case 0xC1F0EC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1F07E.asm:41 CLC
    case 0xC1F0ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F07E.asm:42 SBC @VIRTUAL02
    case 0xC1F0EE: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1F07E.asm:43 BRANCHGTS @UNKNOWN0
    case 0xC1F0F0: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1F07E.asm:43 BRANCHGTS @UNKNOWN0
    case 0xC1F0F2: cpu.execute_instruction<0x10>(0x0000BB, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1F07E.asm:43 BRANCHGTS @UNKNOWN0
    case 0xC1F0F4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1F07E.asm:43 BRANCHGTS @UNKNOWN0
    case 0xC1F0F6: cpu.execute_instruction<0x30>(0x0000B7, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E.asm:45 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F0F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E.asm:45 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F0F8.
    case 0xC1F0FA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1F07E.asm:45 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F0FB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E.asm:45 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F0FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F07E.asm:45 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F0FD.
    case 0xC1F0FF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1F07E.asm:45 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F100: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:46 LOADPTR FILE_SELECT_TEXT_DELETE, @LOCAL00
    case 0xC1F102: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A2, 2); else cpu.execute_instruction<0xA9>(0x00C0A2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:46 LOADPTR FILE_SELECT_TEXT_DELETE, @LOCAL00
    // Overlapping static entry reached from 0xC1F102.
    case 0xC1F104: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E.asm:46 LOADPTR FILE_SELECT_TEXT_DELETE, @LOCAL00
    case 0xC1F105: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E.asm:46 LOADPTR FILE_SELECT_TEXT_DELETE, @LOCAL00
    // Overlapping static entry reached from 0xC1F104.
    case 0xC1F106: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:46 LOADPTR FILE_SELECT_TEXT_DELETE, @LOCAL00
    case 0xC1F107: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:46 LOADPTR FILE_SELECT_TEXT_DELETE, @LOCAL00
    // Overlapping static entry reached from 0xC1F107.
    case 0xC1F109: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F07E.asm:46 LOADPTR FILE_SELECT_TEXT_DELETE, @LOCAL00
    case 0xC1F10A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F07E.asm:47 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F10C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F07E.asm:47 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F10E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F07E.asm:47 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F110: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F07E.asm:47 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F112: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F07E.asm:48 LDY #0
    case 0xC1F114: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1F07E.asm:48 LDY #0
    // Overlapping static entry reached from 0xC1F114.
    case 0xC1F116: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1F07E.asm:49 LDX #10
    case 0xC1F117: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/C1/C1F07E.asm:49 LDX #10
    // Overlapping static entry reached from 0xC1F117.
    case 0xC1F119: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F07E.asm:50 LDA #3
    case 0xC1F11A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1F07E.asm:50 LDA #3
    // Overlapping static entry reached from 0xC1F11A.
    case 0xC1F11C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F07E.asm:51 JSR UNKNOWN_C1153B
    case 0xC1F11D: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:52 LOADPTR FILE_SELECT_TEXT_SET_UP, @LOCAL00
    case 0xC1F120: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x00C0A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:52 LOADPTR FILE_SELECT_TEXT_SET_UP, @LOCAL00
    // Overlapping static entry reached from 0xC1F120.
    case 0xC1F122: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E.asm:52 LOADPTR FILE_SELECT_TEXT_SET_UP, @LOCAL00
    case 0xC1F123: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F07E.asm:52 LOADPTR FILE_SELECT_TEXT_SET_UP, @LOCAL00
    // Overlapping static entry reached from 0xC1F122.
    case 0xC1F124: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:52 LOADPTR FILE_SELECT_TEXT_SET_UP, @LOCAL00
    case 0xC1F125: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F07E.asm:52 LOADPTR FILE_SELECT_TEXT_SET_UP, @LOCAL00
    // Overlapping static entry reached from 0xC1F125.
    case 0xC1F127: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F07E.asm:52 LOADPTR FILE_SELECT_TEXT_SET_UP, @LOCAL00
    case 0xC1F128: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F07E.asm:53 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F12A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F07E.asm:53 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F12C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F07E.asm:53 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F12E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F07E.asm:53 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F130: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F07E.asm:54 LDY #0
    case 0xC1F132: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1F07E.asm:54 LDY #0
    // Overlapping static entry reached from 0xC1F132.
    case 0xC1F134: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1F07E.asm:55 LDX #15
    case 0xC1F135: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000F, 2); else cpu.execute_instruction<0xA2>(0x00000F, 3); return true;
    // src/unknown/C1/C1F07E.asm:55 LDX #15
    // Overlapping static entry reached from 0xC1F135.
    case 0xC1F137: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F07E.asm:56 LDA #4
    case 0xC1F138: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C1F07E.asm:56 LDA #4
    // Overlapping static entry reached from 0xC1F138.
    case 0xC1F13A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F07E.asm:57 JSR UNKNOWN_C1153B
    case 0xC1F13B: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/unknown/C1/C1F07E.asm:58 JSR PRINT_MENU_ITEMS
    case 0xC1F13E: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // src/unknown/C1/C1F07E.asm:59 LDA #$00FF
    case 0xC1F141: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F07E.asm:59 LDA #$00FF
    // Overlapping static entry reached from 0xC1F141.
    case 0xC1F143: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1F07E.asm:60 STA ENABLE_WORD_WRAP
    case 0xC1F144: cpu.execute_instruction<0x8D>(0x005E6E, 3); return true;
    // src/unknown/C1/C1F07E.asm:61 LDA #1
    case 0xC1F147: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F07E.asm:61 LDA #1
    // Overlapping static entry reached from 0xC1F147.
    case 0xC1F149: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F07E.asm:62 JSR SELECTION_MENU
    case 0xC1F14A: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1F07E.asm:63 END_C_FUNCTION
    case 0xC1F14D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1F07E.asm:63 END_C_FUNCTION
    case 0xC1F14E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1F14F.asm (unresolved).
bool execute_unresolved_c1_c1f14f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1F14F.asm:3 BEGIN_C_FUNCTION
    case 0xC1F14F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1F14F.asm:9 END_STACK_VARS
    case 0xC1F151: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1F14F.asm:9 END_STACK_VARS
    case 0xC1F152: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F14F.asm:9 END_STACK_VARS
    case 0xC1F153: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F14F.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F153.
    case 0xC1F155: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1F14F.asm:9 END_STACK_VARS
    case 0xC1F156: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:10 LDX #0
    case 0xC1F157: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1F14F.asm:10 LDX #0
    // Overlapping static entry reached from 0xC1F157.
    case 0xC1F159: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/unknown/C1/C1F14F.asm:11 TXY
    case 0xC1F15A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:12 BRA @UNKNOWN2
    case 0xC1F15B: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C1/C1F14F.asm:14 LDA SAVE_FILES_PRESENT,X
    case 0xC1F15D: cpu.execute_instruction<0xBD>(0x00B49E, 3); return true;
    // src/unknown/C1/C1F14F.asm:15 AND #$00FF
    case 0xC1F160: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F14F.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC1F160.
    case 0xC1F162: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1F14F.asm:16 BNE @UNKNOWN1
    case 0xC1F163: cpu.execute_instruction<0xD0>(0x000001, 2); return true;
    // src/unknown/C1/C1F14F.asm:17 INY
    case 0xC1F165: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:19 INX
    case 0xC1F166: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:21 STX @VIRTUAL02
    case 0xC1F167: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F.asm:22 LDA #3
    case 0xC1F169: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1F14F.asm:22 LDA #3
    // Overlapping static entry reached from 0xC1F169.
    case 0xC1F16B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1F14F.asm:23 CLC
    case 0xC1F16C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:24 SBC @VIRTUAL02
    case 0xC1F16D: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1F14F.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC1F16F: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1F14F.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC1F171: cpu.execute_instruction<0x10>(0x0000EA, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1F14F.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC1F173: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1F14F.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC1F175: cpu.execute_instruction<0x30>(0x0000E6, 2); return true;
    // src/unknown/C1/C1F14F.asm:26 CPY #1
    case 0xC1F177: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/unknown/C1/C1F14F.asm:26 CPY #1
    // Overlapping static entry reached from 0xC1F177.
    case 0xC1F179: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C1F14F.asm:27 BNEL @UNKNOWN11
    case 0xC1F17A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C1F14F.asm:27 BNEL @UNKNOWN11
    case 0xC1F17C: cpu.execute_instruction<0x4C>(0x00F1FE, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F14F.asm:28 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_COPY_MENU_ONE_FILE
    case 0xC1F17F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x000016, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F14F.asm:28 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_COPY_MENU_ONE_FILE
    // Overlapping static entry reached from 0xC1F17F.
    case 0xC1F181: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1F14F.asm:28 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_COPY_MENU_ONE_FILE
    case 0xC1F182: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C1F14F.asm:29 JSL SET_INSTANT_PRINTING
    case 0xC1F185: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F14F.asm:30 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F189: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B0, 2); else cpu.execute_instruction<0xA9>(0x00C0B0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F14F.asm:30 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    // Overlapping static entry reached from 0xC1F189.
    case 0xC1F18B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F14F.asm:30 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F18C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F14F.asm:30 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    // Overlapping static entry reached from 0xC1F18B.
    case 0xC1F18D: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F14F.asm:30 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F18E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F14F.asm:30 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    // Overlapping static entry reached from 0xC1F18E.
    case 0xC1F190: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F14F.asm:30 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F191: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1F14F.asm:31 LDA #14
    case 0xC1F193: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C1/C1F14F.asm:31 LDA #14
    // Overlapping static entry reached from 0xC1F193.
    case 0xC1F195: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F14F.asm:32 JSR PRINT_STRING
    case 0xC1F196: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C1F14F.asm:33 LDA #0
    case 0xC1F199: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1F14F.asm:33 LDA #0
    // Overlapping static entry reached from 0xC1F199.
    case 0xC1F19B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1F14F.asm:34 STA @VIRTUAL02
    case 0xC1F19C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F.asm:35 BRA @UNKNOWN8
    case 0xC1F19E: cpu.execute_instruction<0x80>(0x00004D, 2); return true;
    // src/unknown/C1/C1F14F.asm:37 LDX @VIRTUAL02
    case 0xC1F1A0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F.asm:38 LDA SAVE_FILES_PRESENT,X
    case 0xC1F1A2: cpu.execute_instruction<0xBD>(0x00B49E, 3); return true;
    // src/unknown/C1/C1F14F.asm:39 AND #$00FF
    case 0xC1F1A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F14F.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC1F1A5.
    case 0xC1F1A7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1F14F.asm:40 BNE @UNKNOWN7
    case 0xC1F1A8: cpu.execute_instruction<0xD0>(0x000041, 2); return true;
    // src/unknown/C1/C1F14F.asm:41 LDA @VIRTUAL02
    case 0xC1F1AA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F1AC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1F14F.asm:43 CLC
    case 0xC1F1AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:44 ADC #CHAR::ONE
    case 0xC1F1AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000061, 2); else cpu.execute_instruction<0x69>(0x008D61, 3); return true;
    // src/unknown/C1/C1F14F.asm:45 STA TEMPORARY_TEXT_BUFFER
    case 0xC1F1B1: cpu.execute_instruction<0x8D>(0x009C9F, 3); return true;
    // src/unknown/C1/C1F14F.asm:45 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1F1AF.
    case 0xC1F1B2: cpu.execute_instruction<0x9F>(0x6AA99C, 4); return true;
    // src/unknown/C1/C1F14F.asm:46 LDA #CHAR::COLON
    case 0xC1F1B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006A, 2); else cpu.execute_instruction<0xA9>(0x008D6A, 3); return true;
    // src/unknown/C1/C1F14F.asm:47 STA TEMPORARY_TEXT_BUFFER+1
    case 0xC1F1B6: cpu.execute_instruction<0x8D>(0x009CA0, 3); return true;
    // src/unknown/C1/C1F14F.asm:47 STA TEMPORARY_TEXT_BUFFER+1
    // Overlapping static entry reached from 0xC1F1B4.
    case 0xC1F1B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009C, 2); else cpu.execute_instruction<0xA0>(0x009C9C, 3); return true;
    // src/unknown/C1/C1F14F.asm:48 STZ TEMPORARY_TEXT_BUFFER+2
    case 0xC1F1B9: cpu.execute_instruction<0x9C>(0x009CA1, 3); return true;
    // src/unknown/C1/C1F14F.asm:48 STZ TEMPORARY_TEXT_BUFFER+2
    // Overlapping static entry reached from 0xC1F1B7.
    case 0xC1F1BA: cpu.execute_instruction<0xA1>(0x00009C, 2); return true;
    // src/unknown/C1/C1F14F.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC1F1BC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1F14F.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F1BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1F14F.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F1BE.
    case 0xC1F1C0: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1F14F.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F1C1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1F14F.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F1C3: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1F14F.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F1C4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1F14F.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F1C6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1F14F.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F1C7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1F14F.asm:50 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F1C9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1F14F.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC1F1CB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F14F.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F1CD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F14F.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F1CF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F14F.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F1D1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F14F.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F1D3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F.asm:53 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F1D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F.asm:53 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1F1D5.
    case 0xC1F1D7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1F14F.asm:53 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F1D8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F.asm:53 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F1DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F.asm:53 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1F1DA.
    case 0xC1F1DC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1F14F.asm:53 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F1DD: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F14F.asm:54 LDY #1
    case 0xC1F1DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C1F14F.asm:54 LDY #1
    // Overlapping static entry reached from 0xC1F1DF.
    case 0xC1F1E1: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1F14F.asm:55 LDX #0
    case 0xC1F1E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1F14F.asm:55 LDX #0
    // Overlapping static entry reached from 0xC1F1E2.
    case 0xC1F1E4: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1F14F.asm:56 LDA @VIRTUAL02
    case 0xC1F1E5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F.asm:57 INC
    case 0xC1F1E7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:58 JSR UNKNOWN_C1153B
    case 0xC1F1E8: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/unknown/C1/C1F14F.asm:60 INC @VIRTUAL02
    case 0xC1F1EB: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F.asm:62 LDA #3
    case 0xC1F1ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1F14F.asm:62 LDA #3
    // Overlapping static entry reached from 0xC1F1ED.
    case 0xC1F1EF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1F14F.asm:63 CLC
    case 0xC1F1F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:64 SBC @VIRTUAL02
    case 0xC1F1F1: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1F14F.asm:65 BRANCHGTS @UNKNOWN6
    case 0xC1F1F3: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1F14F.asm:65 BRANCHGTS @UNKNOWN6
    case 0xC1F1F5: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1F14F.asm:65 BRANCHGTS @UNKNOWN6
    case 0xC1F1F7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1F14F.asm:65 BRANCHGTS @UNKNOWN6
    case 0xC1F1F9: cpu.execute_instruction<0x30>(0x0000A5, 2); return true;
    // src/unknown/C1/C1F14F.asm:66 JMP @UNKNOWN16
    case 0xC1F1FB: cpu.execute_instruction<0x4C>(0x00F281, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F14F.asm:68 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_COPY_MENU_TWO_FILES
    case 0xC1F1FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x000015, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F14F.asm:68 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_COPY_MENU_TWO_FILES
    // Overlapping static entry reached from 0xC1F1FE.
    case 0xC1F200: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1F14F.asm:68 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_COPY_MENU_TWO_FILES
    case 0xC1F201: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C1F14F.asm:69 JSL SET_INSTANT_PRINTING
    case 0xC1F204: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F14F.asm:70 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F208: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B0, 2); else cpu.execute_instruction<0xA9>(0x00C0B0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F14F.asm:70 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    // Overlapping static entry reached from 0xC1F208.
    case 0xC1F20A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F14F.asm:70 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F20B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F14F.asm:70 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    // Overlapping static entry reached from 0xC1F20A.
    case 0xC1F20C: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F14F.asm:70 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F20D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F14F.asm:70 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    // Overlapping static entry reached from 0xC1F20D.
    case 0xC1F20F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F14F.asm:70 LOADPTR FILE_SELECT_TEXT_COPY_TO_WHERE, @LOCAL00
    case 0xC1F210: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1F14F.asm:71 LDA #14
    case 0xC1F212: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C1/C1F14F.asm:71 LDA #14
    // Overlapping static entry reached from 0xC1F212.
    case 0xC1F214: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F14F.asm:72 JSR PRINT_STRING
    case 0xC1F215: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C1F14F.asm:73 LDA #0
    case 0xC1F218: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1F14F.asm:73 LDA #0
    // Overlapping static entry reached from 0xC1F218.
    case 0xC1F21A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1F14F.asm:74 STA @VIRTUAL02
    case 0xC1F21B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F.asm:75 LDA #1
    case 0xC1F21D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F14F.asm:75 LDA #1
    // Overlapping static entry reached from 0xC1F21D.
    case 0xC1F21F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1F14F.asm:76 STA @VIRTUAL04
    case 0xC1F220: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1F14F.asm:77 BRA @UNKNOWN14
    case 0xC1F222: cpu.execute_instruction<0x80>(0x00004F, 2); return true;
    // src/unknown/C1/C1F14F.asm:79 LDX @VIRTUAL02
    case 0xC1F224: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F.asm:80 LDA SAVE_FILES_PRESENT,X
    case 0xC1F226: cpu.execute_instruction<0xBD>(0x00B49E, 3); return true;
    // src/unknown/C1/C1F14F.asm:81 AND #$00FF
    case 0xC1F229: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F14F.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC1F229.
    case 0xC1F22B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1F14F.asm:82 BNE @UNKNOWN13
    case 0xC1F22C: cpu.execute_instruction<0xD0>(0x000043, 2); return true;
    // src/unknown/C1/C1F14F.asm:83 LDA @VIRTUAL02
    case 0xC1F22E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F230: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1F14F.asm:85 CLC
    case 0xC1F232: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:86 ADC #CHAR::ONE
    case 0xC1F233: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000061, 2); else cpu.execute_instruction<0x69>(0x008D61, 3); return true;
    // src/unknown/C1/C1F14F.asm:87 STA TEMPORARY_TEXT_BUFFER
    case 0xC1F235: cpu.execute_instruction<0x8D>(0x009C9F, 3); return true;
    // src/unknown/C1/C1F14F.asm:87 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1F233.
    case 0xC1F236: cpu.execute_instruction<0x9F>(0x6AA99C, 4); return true;
    // src/unknown/C1/C1F14F.asm:88 LDA #CHAR::COLON
    case 0xC1F238: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006A, 2); else cpu.execute_instruction<0xA9>(0x008D6A, 3); return true;
    // src/unknown/C1/C1F14F.asm:89 STA TEMPORARY_TEXT_BUFFER+1
    case 0xC1F23A: cpu.execute_instruction<0x8D>(0x009CA0, 3); return true;
    // src/unknown/C1/C1F14F.asm:89 STA TEMPORARY_TEXT_BUFFER+1
    // Overlapping static entry reached from 0xC1F238.
    case 0xC1F23B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009C, 2); else cpu.execute_instruction<0xA0>(0x009C9C, 3); return true;
    // src/unknown/C1/C1F14F.asm:90 STZ TEMPORARY_TEXT_BUFFER+2
    case 0xC1F23D: cpu.execute_instruction<0x9C>(0x009CA1, 3); return true;
    // src/unknown/C1/C1F14F.asm:90 STZ TEMPORARY_TEXT_BUFFER+2
    // Overlapping static entry reached from 0xC1F23B.
    case 0xC1F23E: cpu.execute_instruction<0xA1>(0x00009C, 2); return true;
    // src/unknown/C1/C1F14F.asm:91 LDX @VIRTUAL04
    case 0xC1F240: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1F14F.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC1F242: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1F14F.asm:93 INC @VIRTUAL04
    case 0xC1F244: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1F14F.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F246: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1F14F.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F246.
    case 0xC1F248: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1F14F.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F249: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1F14F.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F24B: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1F14F.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F24C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1F14F.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F24E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1F14F.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F24F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1F14F.asm:94 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1F251: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1F14F.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC1F253: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F14F.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F255: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F14F.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F257: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F14F.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F259: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F14F.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F25B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F.asm:97 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F25D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F.asm:97 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1F25D.
    case 0xC1F25F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1F14F.asm:97 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F260: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F.asm:97 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F262: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F14F.asm:97 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1F262.
    case 0xC1F264: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1F14F.asm:97 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1F265: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F14F.asm:98 TXY
    case 0xC1F267: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:99 LDX #0
    case 0xC1F268: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1F14F.asm:99 LDX #0
    // Overlapping static entry reached from 0xC1F268.
    case 0xC1F26A: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1F14F.asm:100 LDA @VIRTUAL02
    case 0xC1F26B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F.asm:101 INC
    case 0xC1F26D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:102 JSR UNKNOWN_C1153B
    case 0xC1F26E: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/unknown/C1/C1F14F.asm:104 INC @VIRTUAL02
    case 0xC1F271: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C1F14F.asm:106 LDA #3
    case 0xC1F273: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1F14F.asm:106 LDA #3
    // Overlapping static entry reached from 0xC1F273.
    case 0xC1F275: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1F14F.asm:107 CLC
    case 0xC1F276: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:108 SBC @VIRTUAL02
    case 0xC1F277: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1F14F.asm:109 BRANCHGTS @UNKNOWN12
    case 0xC1F279: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1F14F.asm:109 BRANCHGTS @UNKNOWN12
    case 0xC1F27B: cpu.execute_instruction<0x10>(0x0000A7, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1F14F.asm:109 BRANCHGTS @UNKNOWN12
    case 0xC1F27D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1F14F.asm:109 BRANCHGTS @UNKNOWN12
    case 0xC1F27F: cpu.execute_instruction<0x30>(0x0000A3, 2); return true;
    // src/unknown/C1/C1F14F.asm:111 JSR PRINT_MENU_ITEMS
    case 0xC1F281: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // src/unknown/C1/C1F14F.asm:112 LDA #1
    case 0xC1F284: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F14F.asm:112 LDA #1
    // Overlapping static entry reached from 0xC1F284.
    case 0xC1F286: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F14F.asm:113 JSR SELECTION_MENU
    case 0xC1F287: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C1F14F.asm:114 TAY
    case 0xC1F28A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:115 STY @LOCAL02
    case 0xC1F28B: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1F14F.asm:116 BEQ @UNKNOWN17
    case 0xC1F28D: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C1/C1F14F.asm:117 LDA CURRENT_SAVE_SLOT
    case 0xC1F28F: cpu.execute_instruction<0xAD>(0x00B4A1, 3); return true;
    // src/unknown/C1/C1F14F.asm:118 AND #$00FF
    case 0xC1F292: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F14F.asm:118 AND #$00FF
    // Overlapping static entry reached from 0xC1F292.
    case 0xC1F294: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1F14F.asm:119 TAX
    case 0xC1F295: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:120 DEX
    case 0xC1F296: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:121 TYA
    case 0xC1F297: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:122 DEC
    case 0xC1F298: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1F14F.asm:123 JSL COPY_SAVE
    case 0xC1F299: cpu.execute_instruction<0x22>(0xEF0C15, 4); return true;
    // src/unknown/C1/C1F14F.asm:125 STZ ENABLE_WORD_WRAP
    case 0xC1F29D: cpu.execute_instruction<0x9C>(0x005E6E, 3); return true;
    // src/unknown/C1/C1F14F.asm:126 JSR CLOSE_FOCUS_WINDOW
    case 0xC1F2A0: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/unknown/C1/C1F14F.asm:127 LDY @LOCAL02
    case 0xC1F2A3: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1F14F.asm:128 TYA
    case 0xC1F2A5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1F14F.asm:129 END_C_FUNCTION
    case 0xC1F2A6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1F14F.asm:129 END_C_FUNCTION
    case 0xC1F2A7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1F2A8.asm (unresolved).
bool execute_unresolved_c1_c1f2a8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1F2A8.asm:3 BEGIN_C_FUNCTION
    case 0xC1F2A8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1F2A8.asm:9 END_STACK_VARS
    case 0xC1F2AA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1F2A8.asm:9 END_STACK_VARS
    case 0xC1F2AB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F2A8.asm:9 END_STACK_VARS
    case 0xC1F2AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F2A8.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F2AC.
    case 0xC1F2AE: cpu.execute_instruction<0xFF>(0x17A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1F2A8.asm:9 END_STACK_VARS
    case 0xC1F2AF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F2A8.asm:10 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_DELETE_CONFIRMATION
    case 0xC1F2B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1F2A8.asm:10 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_DELETE_CONFIRMATION
    // Overlapping static entry reached from 0xC1F2B0.
    case 0xC1F2B2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1F2A8.asm:10 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_DELETE_CONFIRMATION
    case 0xC1F2B3: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C1F2A8.asm:11 JSR SET_INSTANT_PRINTING
    case 0xC1F2B6: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/unknown/C1/C1F2A8.asm:12 LDA #0
    case 0xC1F2BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1F2A8.asm:12 LDA #0
    // Overlapping static entry reached from 0xC1F2BA.
    case 0xC1F2BC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8.asm:13 JSR UNKNOWN_C10EB4
    case 0xC1F2BD: cpu.execute_instruction<0x20>(0x000EB4, 3); return true;
    // src/unknown/C1/C1F2A8.asm:14 LDX #0
    case 0xC1F2C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1F2A8.asm:14 LDX #0
    // Overlapping static entry reached from 0xC1F2C0.
    case 0xC1F2C2: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C1/C1F2A8.asm:15 TXA
    case 0xC1F2C3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1F2A8.asm:16 JSL UNKNOWN_C438A5
    case 0xC1F2C4: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:17 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE, @LOCAL00
    case 0xC1F2C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BE, 2); else cpu.execute_instruction<0xA9>(0x00C0BE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:17 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE, @LOCAL00
    // Overlapping static entry reached from 0xC1F2C8.
    case 0xC1F2CA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8.asm:17 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE, @LOCAL00
    case 0xC1F2CB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8.asm:17 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE, @LOCAL00
    // Overlapping static entry reached from 0xC1F2CA.
    case 0xC1F2CC: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:17 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE, @LOCAL00
    case 0xC1F2CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:17 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE, @LOCAL00
    // Overlapping static entry reached from 0xC1F2CD.
    case 0xC1F2CF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:17 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE, @LOCAL00
    case 0xC1F2D0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1F2A8.asm:18 LDA #32
    case 0xC1F2D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C1/C1F2A8.asm:18 LDA #32
    // Overlapping static entry reached from 0xC1F2D2.
    case 0xC1F2D4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8.asm:19 JSR PRINT_STRING
    case 0xC1F2D5: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C1F2A8.asm:20 LDX #1
    case 0xC1F2D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1F2A8.asm:20 LDX #1
    // Overlapping static entry reached from 0xC1F2D8.
    case 0xC1F2DA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F2A8.asm:21 LDA #0
    case 0xC1F2DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1F2A8.asm:21 LDA #0
    // Overlapping static entry reached from 0xC1F2DB.
    case 0xC1F2DD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1F2A8.asm:22 JSL UNKNOWN_C43D75
    case 0xC1F2DE: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1F2A8.asm:23 LDX #1
    case 0xC1F2E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1F2A8.asm:23 LDX #1
    // Overlapping static entry reached from 0xC1F2E2.
    case 0xC1F2E4: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F2A8.asm:24 LDA #0
    case 0xC1F2E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1F2A8.asm:24 LDA #0
    // Overlapping static entry reached from 0xC1F2E5.
    case 0xC1F2E7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1F2A8.asm:25 JSL UNKNOWN_C438A5
    case 0xC1F2E8: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/unknown/C1/C1F2A8.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F2EC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C1F2A8.asm:27 MOVE_INT832 CURRENT_SAVE_SLOT, @VIRTUAL06
    case 0xC1F2EE: cpu.execute_instruction<0xAD>(0x00B4A1, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1F2A8.asm:27 MOVE_INT832 CURRENT_SAVE_SLOT, @VIRTUAL06
    case 0xC1F2F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1F2A8.asm:27 MOVE_INT832 CURRENT_SAVE_SLOT, @VIRTUAL06
    case 0xC1F2F3: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:27 MOVE_INT832 CURRENT_SAVE_SLOT, @VIRTUAL06
    case 0xC1F2F5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1F2A8.asm:27 MOVE_INT832 CURRENT_SAVE_SLOT, @VIRTUAL06
    case 0xC1F2F7: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1F2A8.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC1F2F9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F2A8.asm:29 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F2FB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F2A8.asm:29 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F2FD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:29 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F2FF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:29 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F301: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1F2A8.asm:30 JSR PRINT_NUMBER
    case 0xC1F303: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1F2A8.asm:31 LDA #CHAR::COLON
    case 0xC1F306: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006A, 2); else cpu.execute_instruction<0xA9>(0x00006A, 3); return true;
    // src/unknown/C1/C1F2A8.asm:31 LDA #CHAR::COLON
    // Overlapping static entry reached from 0xC1F306.
    case 0xC1F308: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8.asm:32 JSR PRINT_LETTER
    case 0xC1F309: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // src/unknown/C1/C1F2A8.asm:33 LDX #1
    case 0xC1F30C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1F2A8.asm:33 LDX #1
    // Overlapping static entry reached from 0xC1F30C.
    case 0xC1F30E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F2A8.asm:34 LDA #2
    case 0xC1F30F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1F2A8.asm:34 LDA #2
    // Overlapping static entry reached from 0xC1F30F.
    case 0xC1F311: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1F2A8.asm:35 JSL UNKNOWN_C438A5
    case 0xC1F312: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/unknown/C1/C1F2A8.asm:36 LDA #1
    case 0xC1F316: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F2A8.asm:36 LDA #1
    // Overlapping static entry reached from 0xC1F316.
    case 0xC1F318: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8.asm:37 JSR UNKNOWN_C1931B
    case 0xC1F319: cpu.execute_instruction<0x20>(0x00931B, 3); return true;
    // src/unknown/C1/C1F2A8.asm:38 LDX #1
    case 0xC1F31C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1F2A8.asm:38 LDX #1
    // Overlapping static entry reached from 0xC1F31C.
    case 0xC1F31E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F2A8.asm:39 LDA #8
    case 0xC1F31F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C1/C1F2A8.asm:39 LDA #8
    // Overlapping static entry reached from 0xC1F31F.
    case 0xC1F321: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1F2A8.asm:40 JSL UNKNOWN_C438A5
    case 0xC1F322: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:41 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL00
    case 0xC1F326: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00C06E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:41 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL00
    // Overlapping static entry reached from 0xC1F326.
    case 0xC1F328: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8.asm:41 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL00
    case 0xC1F329: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8.asm:41 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL00
    // Overlapping static entry reached from 0xC1F328.
    case 0xC1F32A: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:41 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL00
    case 0xC1F32B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:41 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL00
    // Overlapping static entry reached from 0xC1F32B.
    case 0xC1F32D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:41 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL00
    case 0xC1F32E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1F2A8.asm:42 LDA #6
    case 0xC1F330: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C1F2A8.asm:42 LDA #6
    // Overlapping static entry reached from 0xC1F330.
    case 0xC1F332: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8.asm:43 JSR PRINT_STRING
    case 0xC1F333: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C1F2A8.asm:44 LDX #1
    case 0xC1F336: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1F2A8.asm:44 LDX #1
    // Overlapping static entry reached from 0xC1F336.
    case 0xC1F338: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F2A8.asm:45 LDA #12
    case 0xC1F339: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C1/C1F2A8.asm:45 LDA #12
    // Overlapping static entry reached from 0xC1F339.
    case 0xC1F33B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1F2A8.asm:46 JSL UNKNOWN_C438A5
    case 0xC1F33C: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/unknown/C1/C1F2A8.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F340: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C1F2A8.asm:48 MOVE_INT832 PARTY_CHARACTERS+char_struct::level, @VIRTUAL06
    case 0xC1F342: cpu.execute_instruction<0xAD>(0x0099D3, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1F2A8.asm:48 MOVE_INT832 PARTY_CHARACTERS+char_struct::level, @VIRTUAL06
    case 0xC1F345: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1F2A8.asm:48 MOVE_INT832 PARTY_CHARACTERS+char_struct::level, @VIRTUAL06
    case 0xC1F347: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:48 MOVE_INT832 PARTY_CHARACTERS+char_struct::level, @VIRTUAL06
    case 0xC1F349: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1F2A8.asm:48 MOVE_INT832 PARTY_CHARACTERS+char_struct::level, @VIRTUAL06
    case 0xC1F34B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1F2A8.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC1F34D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F2A8.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F34F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F2A8.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F351: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F353: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F355: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1F2A8.asm:51 JSR PRINT_NUMBER
    case 0xC1F357: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F2A8.asm:52 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F35A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1F2A8.asm:52 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F35A.
    case 0xC1F35C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1F2A8.asm:52 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F35D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F2A8.asm:52 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F35F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1F2A8.asm:52 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F35F.
    case 0xC1F361: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:52 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F362: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:53 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_NO, @LOCAL00
    case 0xC1F364: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DE, 2); else cpu.execute_instruction<0xA9>(0x00C0DE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:53 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_NO, @LOCAL00
    // Overlapping static entry reached from 0xC1F364.
    case 0xC1F366: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8.asm:53 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_NO, @LOCAL00
    case 0xC1F367: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8.asm:53 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_NO, @LOCAL00
    // Overlapping static entry reached from 0xC1F366.
    case 0xC1F368: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:53 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_NO, @LOCAL00
    case 0xC1F369: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:53 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_NO, @LOCAL00
    // Overlapping static entry reached from 0xC1F369.
    case 0xC1F36B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:53 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_NO, @LOCAL00
    case 0xC1F36C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F2A8.asm:54 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F36E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F2A8.asm:54 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F370: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:54 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F372: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:54 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F374: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F2A8.asm:55 LDY #2
    case 0xC1F376: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C1/C1F2A8.asm:55 LDY #2
    // Overlapping static entry reached from 0xC1F376.
    case 0xC1F378: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1F2A8.asm:56 LDX #0
    case 0xC1F379: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1F2A8.asm:56 LDX #0
    // Overlapping static entry reached from 0xC1F379.
    case 0xC1F37B: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C1/C1F2A8.asm:57 TXA
    case 0xC1F37C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1F2A8.asm:58 JSR UNKNOWN_C1153B
    case 0xC1F37D: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:59 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_YES, @LOCAL00
    case 0xC1F380: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x00C0E1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:59 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_YES, @LOCAL00
    // Overlapping static entry reached from 0xC1F380.
    case 0xC1F382: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8.asm:59 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_YES, @LOCAL00
    case 0xC1F383: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1F2A8.asm:59 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_YES, @LOCAL00
    // Overlapping static entry reached from 0xC1F382.
    case 0xC1F384: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:59 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_YES, @LOCAL00
    case 0xC1F385: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1F2A8.asm:59 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_YES, @LOCAL00
    // Overlapping static entry reached from 0xC1F385.
    case 0xC1F387: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:59 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_DELETE_YES, @LOCAL00
    case 0xC1F388: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F2A8.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F38A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F2A8.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F38C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F38E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F2A8.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F390: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1F2A8.asm:61 LDY #3
    case 0xC1F392: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C1/C1F2A8.asm:61 LDY #3
    // Overlapping static entry reached from 0xC1F392.
    case 0xC1F394: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1F2A8.asm:62 LDX #0
    case 0xC1F395: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1F2A8.asm:62 LDX #0
    // Overlapping static entry reached from 0xC1F395.
    case 0xC1F397: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F2A8.asm:63 LDA #1
    case 0xC1F398: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F2A8.asm:63 LDA #1
    // Overlapping static entry reached from 0xC1F398.
    case 0xC1F39A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8.asm:64 JSR UNKNOWN_C1153B
    case 0xC1F39B: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/unknown/C1/C1F2A8.asm:65 JSR PRINT_MENU_ITEMS
    case 0xC1F39E: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // src/unknown/C1/C1F2A8.asm:66 LDA #1
    case 0xC1F3A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F2A8.asm:66 LDA #1
    // Overlapping static entry reached from 0xC1F3A1.
    case 0xC1F3A3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F2A8.asm:67 JSR SELECTION_MENU
    case 0xC1F3A4: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C1F2A8.asm:68 TAX
    case 0xC1F3A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F2A8.asm:69 STX @LOCAL02
    case 0xC1F3A8: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1F2A8.asm:70 BEQ @UNKNOWN0
    case 0xC1F3AA: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C1/C1F2A8.asm:71 LDA CURRENT_SAVE_SLOT
    case 0xC1F3AC: cpu.execute_instruction<0xAD>(0x00B4A1, 3); return true;
    // src/unknown/C1/C1F2A8.asm:72 AND #$00FF
    case 0xC1F3AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F2A8.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC1F3AF.
    case 0xC1F3B1: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1F2A8.asm:73 DEC
    case 0xC1F3B2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1F2A8.asm:74 JSL ERASE_SAVE
    case 0xC1F3B3: cpu.execute_instruction<0x22>(0xEF0BFA, 4); return true;
    // src/unknown/C1/C1F2A8.asm:76 STZ ENABLE_WORD_WRAP
    case 0xC1F3B7: cpu.execute_instruction<0x9C>(0x005E6E, 3); return true;
    // src/unknown/C1/C1F2A8.asm:77 JSR CLOSE_FOCUS_WINDOW
    case 0xC1F3BA: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/unknown/C1/C1F2A8.asm:78 LDX @LOCAL02
    case 0xC1F3BD: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C1F2A8.asm:79 TXA
    case 0xC1F3BF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1F2A8.asm:80 END_C_FUNCTION
    case 0xC1F3C0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1F2A8.asm:80 END_C_FUNCTION
    case 0xC1F3C1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1F497.asm (unresolved).
bool execute_unresolved_c1_c1f497_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1F497.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1F497: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1F497.asm:10 END_STACK_VARS
    case 0xC1F499: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1F497.asm:10 END_STACK_VARS
    case 0xC1F49A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1F497.asm:10 END_STACK_VARS
    case 0xC1F49B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F497.asm:10 END_STACK_VARS
    case 0xC1F49C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F497.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F49C.
    case 0xC1F49E: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1F497.asm:10 END_STACK_VARS
    case 0xC1F49F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1F497.asm:10 END_STACK_VARS
    case 0xC1F4A0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:11 TAX
    case 0xC1F4A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:12 STX @LOCAL03
    case 0xC1F4A2: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1F497.asm:13 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F4A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C1/C1F497.asm:13 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    // Overlapping static entry reached from 0xC1F4A4.
    case 0xC1F4A6: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1F497.asm:14 STA CURRENT_FOCUS_WINDOW
    case 0xC1F4A7: cpu.execute_instruction<0x8D>(0x008958, 3); return true;
    // src/unknown/C1/C1F497.asm:15 JSL SET_INSTANT_PRINTING
    case 0xC1F4AA: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/unknown/C1/C1F497.asm:16 LDX @LOCAL03
    case 0xC1F4AE: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1F497.asm:17 BEQL @UNKNOWN3
    case 0xC1F4B0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1F497.asm:17 BEQL @UNKNOWN3
    case 0xC1F4B2: cpu.execute_instruction<0x4C>(0x00F542, 3); return true;
    // src/unknown/C1/C1F497.asm:18 JSL OPEN_TEXT_SPEED_MENU
    case 0xC1F4B5: cpu.execute_instruction<0x22>(0xC1F3C2, 4); return true;
    // src/unknown/C1/C1F497.asm:19 LDA CURRENT_FOCUS_WINDOW
    case 0xC1F4B9: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C1F497.asm:20 ASL
    case 0xC1F4BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:21 TAX
    case 0xC1F4BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:22 LDA OPEN_WINDOW_TABLE,X
    case 0xC1F4BE: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C1F497.asm:23 LDY #.SIZEOF(window_stats)
    case 0xC1F4C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C1F497.asm:23 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1F4C1.
    case 0xC1F4C3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1F497.asm:24 JSL MULT168
    case 0xC1F4C4: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1F497.asm:25 TAX
    case 0xC1F4C8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:26 LDA WINDOW_STATS + window_stats::current_option,X
    case 0xC1F4C9: cpu.execute_instruction<0xBD>(0x00867B, 3); return true;
    // src/unknown/C1/C1F497.asm:27 LDY #.SIZEOF(menu_option)
    case 0xC1F4CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // src/unknown/C1/C1F497.asm:27 LDY #.SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC1F4CC.
    case 0xC1F4CE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1F497.asm:28 JSL MULT168
    case 0xC1F4CF: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1F497.asm:29 CLC
    case 0xC1F4D3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:30 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1F4D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C1/C1F497.asm:30 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1F4D4.
    case 0xC1F4D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/unknown/C1/C1F497.asm:31 TAY
    case 0xC1F4D7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:32 STY @LOCAL02
    case 0xC1F4D8: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C1F497.asm:32 STY @LOCAL02
    // Overlapping static entry reached from 0xC1F4D6.
    case 0xC1F4D9: cpu.execute_instruction<0x14>(0x0000AD, 2); return true;
    // src/unknown/C1/C1F497.asm:33 LDA GAME_STATE + game_state::text_speed
    case 0xC1F4DA: cpu.execute_instruction<0xAD>(0x0098B6, 3); return true;
    // src/unknown/C1/C1F497.asm:33 LDA GAME_STATE + game_state::text_speed
    // Overlapping static entry reached from 0xC1F4D9.
    case 0xC1F4DB: cpu.execute_instruction<0xB6>(0x000098, 2); return true;
    // src/unknown/C1/C1F497.asm:34 AND #$00FF
    case 0xC1F4DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F497.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC1F4DD.
    case 0xC1F4DF: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1F497.asm:35 TAX
    case 0xC1F4E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:36 DEX
    case 0xC1F4E1: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:37 BRA @UNKNOWN2
    case 0xC1F4E2: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C1/C1F497.asm:39 LDA a:menu_option::next,Y
    case 0xC1F4E4: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // src/unknown/C1/C1F497.asm:40 LDY #.SIZEOF(menu_option)
    case 0xC1F4E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // src/unknown/C1/C1F497.asm:40 LDY #.SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC1F4E7.
    case 0xC1F4E9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1F497.asm:41 JSL MULT168
    case 0xC1F4EA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1F497.asm:42 CLC
    case 0xC1F4EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:43 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1F4EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C1/C1F497.asm:43 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1F4EF.
    case 0xC1F4F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/unknown/C1/C1F497.asm:44 TAY
    case 0xC1F4F2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:45 STY @LOCAL02
    case 0xC1F4F3: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C1F497.asm:45 STY @LOCAL02
    // Overlapping static entry reached from 0xC1F4F1.
    case 0xC1F4F4: cpu.execute_instruction<0x14>(0x0000CA, 2); return true;
    // src/unknown/C1/C1F497.asm:46 DEX
    case 0xC1F4F5: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:48 BNE @UNKNOWN1
    case 0xC1F4F6: cpu.execute_instruction<0xD0>(0x0000EC, 2); return true;
    // src/unknown/C1/C1F497.asm:49 LDA #6
    case 0xC1F4F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C1F497.asm:49 LDA #6
    // Overlapping static entry reached from 0xC1F4F8.
    case 0xC1F4FA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F497.asm:50 JSR UNKNOWN_C10FEA
    case 0xC1F4FB: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/unknown/C1/C1F497.asm:51 LDY @LOCAL02
    case 0xC1F4FE: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1F497.asm:52 LDA a:menu_option::text_y,Y
    case 0xC1F500: cpu.execute_instruction<0xB9>(0x00000A, 3); return true;
    // src/unknown/C1/C1F497.asm:53 TAX
    case 0xC1F503: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:54 LDA a:menu_option::text_x,Y
    case 0xC1F504: cpu.execute_instruction<0xB9>(0x000008, 3); return true;
    // src/unknown/C1/C1F497.asm:55 INC
    case 0xC1F507: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:56 JSL UNKNOWN_C438A5
    case 0xC1F508: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/unknown/C1/C1F497.asm:57 LDY @LOCAL02
    case 0xC1F50C: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1F497.asm:58 TYA
    case 0xC1F50E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:59 CLC
    case 0xC1F50F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:60 ADC #menu_option::label
    case 0xC1F510: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/unknown/C1/C1F497.asm:60 ADC #menu_option::label
    // Overlapping static entry reached from 0xC1F510.
    case 0xC1F512: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1F497.asm:61 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F513: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1F497.asm:61 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F515: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1F497.asm:61 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F516: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1F497.asm:61 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F518: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1F497.asm:61 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F519: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1F497.asm:61 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F51B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1F497.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC1F51D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F497.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F51F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F497.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F521: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F497.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F523: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F497.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F525: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1F497.asm:64 LDX #1
    case 0xC1F527: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1F497.asm:64 LDX #1
    // Overlapping static entry reached from 0xC1F527.
    case 0xC1F529: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F497.asm:65 LDA #.LOWORD(-1)
    case 0xC1F52A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1F497.asm:65 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1F52A.
    case 0xC1F52C: cpu.execute_instruction<0xFF>(0x3BB922, 4); return true;
    // src/unknown/C1/C1F497.asm:66 JSL UNKNOWN_C43BB9
    case 0xC1F52D: cpu.execute_instruction<0x22>(0xC43BB9, 4); return true;
    // src/unknown/C1/C1F497.asm:66 JSL UNKNOWN_C43BB9
    // Overlapping static entry reached from 0xC1F52C.
    case 0xC1F530: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F497.asm:67 LDA #0
    case 0xC1F531: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1F497.asm:67 LDA #0
    // Overlapping static entry reached from 0xC1F530.
    case 0xC1F532: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1F497.asm:67 LDA #0
    // Overlapping static entry reached from 0xC1F531.
    case 0xC1F533: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F497.asm:68 JSR UNKNOWN_C10FEA
    case 0xC1F534: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/unknown/C1/C1F497.asm:69 LDA GAME_STATE + game_state::text_speed
    case 0xC1F537: cpu.execute_instruction<0xAD>(0x0098B6, 3); return true;
    // src/unknown/C1/C1F497.asm:70 AND #$00FF
    case 0xC1F53A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F497.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC1F53A.
    case 0xC1F53C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1F497.asm:71 TAX
    case 0xC1F53D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:72 STX @LOCAL01
    case 0xC1F53E: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1F497.asm:73 BRA @UNKNOWN4
    case 0xC1F540: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/unknown/C1/C1F497.asm:75 STZ ENABLE_WORD_WRAP
    case 0xC1F542: cpu.execute_instruction<0x9C>(0x005E6E, 3); return true;
    // src/unknown/C1/C1F497.asm:76 LDA #1
    case 0xC1F545: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F497.asm:76 LDA #1
    // Overlapping static entry reached from 0xC1F545.
    case 0xC1F547: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F497.asm:77 JSR SELECTION_MENU
    case 0xC1F548: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C1F497.asm:78 TAX
    case 0xC1F54B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:79 STX @LOCAL01
    case 0xC1F54C: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1F497.asm:80 BEQ @UNKNOWN4
    case 0xC1F54E: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C1/C1F497.asm:81 TXA
    case 0xC1F550: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:82 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F551: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1F497.asm:83 STA GAME_STATE + game_state::text_speed
    case 0xC1F553: cpu.execute_instruction<0x8D>(0x0098B6, 3); return true;
    // src/unknown/C1/C1F497.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC1F556: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1F497.asm:85 LDA CURRENT_SAVE_SLOT
    case 0xC1F558: cpu.execute_instruction<0xAD>(0x00B4A1, 3); return true;
    // src/unknown/C1/C1F497.asm:86 AND #$00FF
    case 0xC1F55B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F497.asm:86 AND #$00FF
    // Overlapping static entry reached from 0xC1F55B.
    case 0xC1F55D: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1F497.asm:87 DEC
    case 0xC1F55E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1F497.asm:88 JSL SAVE_GAME_SLOT
    case 0xC1F55F: cpu.execute_instruction<0x22>(0xEF0A4D, 4); return true;
    // src/unknown/C1/C1F497.asm:90 LDX @LOCAL01
    case 0xC1F563: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1F497.asm:91 TXA
    case 0xC1F565: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1F497.asm:92 END_C_FUNCTION
    case 0xC1F566: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1F497.asm:92 END_C_FUNCTION
    case 0xC1F567: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1F616.asm (unresolved).
bool execute_unresolved_c1_c1f616_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1F616.asm:3 BEGIN_C_FUNCTION
    case 0xC1F616: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1F616.asm:11 END_STACK_VARS
    case 0xC1F618: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1F616.asm:11 END_STACK_VARS
    case 0xC1F619: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1F616.asm:11 END_STACK_VARS
    case 0xC1F61A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F616.asm:11 END_STACK_VARS
    case 0xC1F61B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1F616.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F61B.
    case 0xC1F61D: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1F616.asm:11 END_STACK_VARS
    case 0xC1F61E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1F616.asm:11 END_STACK_VARS
    case 0xC1F61F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:12 TAX
    case 0xC1F620: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:13 STX @LOCAL03
    case 0xC1F621: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1F616.asm:14 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F623: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/unknown/C1/C1F616.asm:14 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    // Overlapping static entry reached from 0xC1F623.
    case 0xC1F625: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1F616.asm:15 STA CURRENT_FOCUS_WINDOW
    case 0xC1F626: cpu.execute_instruction<0x8D>(0x008958, 3); return true;
    // src/unknown/C1/C1F616.asm:16 JSL SET_INSTANT_PRINTING
    case 0xC1F629: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/unknown/C1/C1F616.asm:17 LDX @LOCAL03
    case 0xC1F62D: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1F616.asm:18 BEQL @UNKNOWN3
    case 0xC1F62F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1F616.asm:18 BEQL @UNKNOWN3
    case 0xC1F631: cpu.execute_instruction<0x4C>(0x00F6C0, 3); return true;
    // src/unknown/C1/C1F616.asm:19 JSR OPEN_SOUND_MENU
    case 0xC1F634: cpu.execute_instruction<0x20>(0x00F568, 3); return true;
    // src/unknown/C1/C1F616.asm:20 LDA CURRENT_FOCUS_WINDOW
    case 0xC1F637: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C1F616.asm:21 ASL
    case 0xC1F63A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:22 TAX
    case 0xC1F63B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:23 LDA OPEN_WINDOW_TABLE,X
    case 0xC1F63C: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C1F616.asm:24 LDY #.SIZEOF(window_stats)
    case 0xC1F63F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C1F616.asm:24 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1F63F.
    case 0xC1F641: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1F616.asm:25 JSL MULT168
    case 0xC1F642: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1F616.asm:26 TAX
    case 0xC1F646: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:27 LDA WINDOW_STATS + window_stats::current_option,X
    case 0xC1F647: cpu.execute_instruction<0xBD>(0x00867B, 3); return true;
    // src/unknown/C1/C1F616.asm:28 LDY #.SIZEOF(menu_option)
    case 0xC1F64A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // src/unknown/C1/C1F616.asm:28 LDY #.SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC1F64A.
    case 0xC1F64C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1F616.asm:29 JSL MULT168
    case 0xC1F64D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1F616.asm:30 CLC
    case 0xC1F651: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:31 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1F652: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C1/C1F616.asm:31 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1F652.
    case 0xC1F654: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/unknown/C1/C1F616.asm:32 TAY
    case 0xC1F655: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:33 STY @LOCAL02
    case 0xC1F656: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C1F616.asm:33 STY @LOCAL02
    // Overlapping static entry reached from 0xC1F654.
    case 0xC1F657: cpu.execute_instruction<0x14>(0x0000AD, 2); return true;
    // src/unknown/C1/C1F616.asm:34 LDA GAME_STATE+game_state::sound_setting
    case 0xC1F658: cpu.execute_instruction<0xAD>(0x0098B7, 3); return true;
    // src/unknown/C1/C1F616.asm:34 LDA GAME_STATE+game_state::sound_setting
    // Overlapping static entry reached from 0xC1F657.
    case 0xC1F659: cpu.execute_instruction<0xB7>(0x000098, 2); return true;
    // src/unknown/C1/C1F616.asm:35 AND #$00FF
    case 0xC1F65B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F616.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC1F65B.
    case 0xC1F65D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1F616.asm:36 TAX
    case 0xC1F65E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:37 DEX
    case 0xC1F65F: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:38 BRA @UNKNOWN2
    case 0xC1F660: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C1/C1F616.asm:40 LDA a:menu_option::next,Y
    case 0xC1F662: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // src/unknown/C1/C1F616.asm:41 LDY #.SIZEOF(menu_option)
    case 0xC1F665: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // src/unknown/C1/C1F616.asm:41 LDY #.SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC1F665.
    case 0xC1F667: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1F616.asm:42 JSL MULT168
    case 0xC1F668: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1F616.asm:43 CLC
    case 0xC1F66C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:44 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1F66D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C1/C1F616.asm:44 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1F66D.
    case 0xC1F66F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/unknown/C1/C1F616.asm:45 TAY
    case 0xC1F670: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:46 STY @LOCAL02
    case 0xC1F671: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C1F616.asm:46 STY @LOCAL02
    // Overlapping static entry reached from 0xC1F66F.
    case 0xC1F672: cpu.execute_instruction<0x14>(0x0000CA, 2); return true;
    // src/unknown/C1/C1F616.asm:47 DEX
    case 0xC1F673: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:49 BNE @UNKNOWN1
    case 0xC1F674: cpu.execute_instruction<0xD0>(0x0000EC, 2); return true;
    // src/unknown/C1/C1F616.asm:50 LDA #6
    case 0xC1F676: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C1F616.asm:50 LDA #6
    // Overlapping static entry reached from 0xC1F676.
    case 0xC1F678: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F616.asm:51 JSR UNKNOWN_C10FEA
    case 0xC1F679: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/unknown/C1/C1F616.asm:52 LDY @LOCAL02
    case 0xC1F67C: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1F616.asm:53 LDA a:menu_option::text_y,Y
    case 0xC1F67E: cpu.execute_instruction<0xB9>(0x00000A, 3); return true;
    // src/unknown/C1/C1F616.asm:54 TAX
    case 0xC1F681: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:55 LDA a:menu_option::text_x,Y
    case 0xC1F682: cpu.execute_instruction<0xB9>(0x000008, 3); return true;
    // src/unknown/C1/C1F616.asm:56 INC
    case 0xC1F685: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:57 JSL UNKNOWN_C438A5
    case 0xC1F686: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/unknown/C1/C1F616.asm:58 LDY @LOCAL02
    case 0xC1F68A: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1F616.asm:59 TYA
    case 0xC1F68C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:60 CLC
    case 0xC1F68D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:61 ADC #menu_option::label
    case 0xC1F68E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/unknown/C1/C1F616.asm:61 ADC #menu_option::label
    // Overlapping static entry reached from 0xC1F68E.
    case 0xC1F690: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1F616.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F691: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1F616.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F693: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1F616.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F694: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1F616.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F696: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1F616.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F697: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1F616.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F699: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1F616.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC1F69B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1F616.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F69D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1F616.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F69F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1F616.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F6A1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1F616.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F6A3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1F616.asm:65 LDX #1
    case 0xC1F6A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1F616.asm:65 LDX #1
    // Overlapping static entry reached from 0xC1F6A5.
    case 0xC1F6A7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F616.asm:66 LDA #.LOWORD(-1)
    case 0xC1F6A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1F616.asm:66 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1F6A8.
    case 0xC1F6AA: cpu.execute_instruction<0xFF>(0x3BB922, 4); return true;
    // src/unknown/C1/C1F616.asm:67 JSL UNKNOWN_C43BB9
    case 0xC1F6AB: cpu.execute_instruction<0x22>(0xC43BB9, 4); return true;
    // src/unknown/C1/C1F616.asm:67 JSL UNKNOWN_C43BB9
    // Overlapping static entry reached from 0xC1F6AA.
    case 0xC1F6AE: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // src/unknown/C1/C1F616.asm:68 LDA #0
    case 0xC1F6AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1F616.asm:68 LDA #0
    // Overlapping static entry reached from 0xC1F6AE.
    case 0xC1F6B0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1F616.asm:68 LDA #0
    // Overlapping static entry reached from 0xC1F6AF.
    case 0xC1F6B1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F616.asm:69 JSR UNKNOWN_C10FEA
    case 0xC1F6B2: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/unknown/C1/C1F616.asm:70 LDA GAME_STATE+game_state::sound_setting
    case 0xC1F6B5: cpu.execute_instruction<0xAD>(0x0098B7, 3); return true;
    // src/unknown/C1/C1F616.asm:71 AND #$00FF
    case 0xC1F6B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F616.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC1F6B8.
    case 0xC1F6BA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1F616.asm:72 TAX
    case 0xC1F6BB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:73 STX @LOCAL01
    case 0xC1F6BC: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1F616.asm:74 BRA @UNKNOWN5
    case 0xC1F6BE: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C1/C1F616.asm:76 LDA #1
    case 0xC1F6C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1F616.asm:76 LDA #1
    // Overlapping static entry reached from 0xC1F6C0.
    case 0xC1F6C2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1F616.asm:77 JSR SELECTION_MENU
    case 0xC1F6C3: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C1F616.asm:78 TAX
    case 0xC1F6C6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:79 STX @LOCAL01
    case 0xC1F6C7: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1F616.asm:80 BEQ @UNKNOWN4
    case 0xC1F6C9: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C1F616.asm:81 TXA
    case 0xC1F6CB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:82 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F6CC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1F616.asm:83 STA GAME_STATE+game_state::sound_setting
    case 0xC1F6CE: cpu.execute_instruction<0x8D>(0x0098B7, 3); return true;
    // src/unknown/C1/C1F616.asm:85 REP #PROC_FLAGS::ACCUM8
    case 0xC1F6D1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1F616.asm:86 LDA CURRENT_SAVE_SLOT
    case 0xC1F6D3: cpu.execute_instruction<0xAD>(0x00B4A1, 3); return true;
    // src/unknown/C1/C1F616.asm:87 AND #$00FF
    case 0xC1F6D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1F616.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC1F6D6.
    case 0xC1F6D8: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1F616.asm:88 DEC
    case 0xC1F6D9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1F616.asm:89 JSL SAVE_GAME_SLOT
    case 0xC1F6DA: cpu.execute_instruction<0x22>(0xEF0A4D, 4); return true;
    // src/unknown/C1/C1F616.asm:91 LDX @LOCAL01
    case 0xC1F6DE: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1F616.asm:92 TXA
    case 0xC1F6E0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1F616.asm:93 END_C_FUNCTION
    case 0xC1F6E1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1F616.asm:93 END_C_FUNCTION
    case 0xC1F6E2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1FF2C.asm (unresolved).
bool execute_unresolved_c1_c1ff2c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1FF2C.asm:3 BEGIN_C_FUNCTION
    case 0xC1FF2C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1FF2C.asm:5 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1FF2E: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C1/C1FF2C.asm:6 AND #$00FF
    case 0xC1FF31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1FF2C.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC1FF31.
    case 0xC1FF33: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1FF2C.asm:14 TAX
    case 0xC1FF34: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1FF2C.asm:15 DEX
    case 0xC1FF35: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1FF2C.asm:16 LDA GAME_STATE+game_state::player_controlled_party_members,X
    case 0xC1FF36: cpu.execute_instruction<0xBD>(0x009891, 3); return true;
    // src/unknown/C1/C1FF2C.asm:18 AND #$00FF
    case 0xC1FF39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1FF2C.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC1FF39.
    case 0xC1FF3B: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C1/C1FF2C.asm:19 ASL
    case 0xC1FF3C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1FF2C.asm:20 TAX
    case 0xC1FF3D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1FF2C.asm:21 LDA CHOSEN_FOUR_PTRS,X
    case 0xC1FF3E: cpu.execute_instruction<0xBD>(0x004DC8, 3); return true;
    // src/unknown/C1/C1FF2C.asm:22 TAX
    case 0xC1FF41: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1FF2C.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FF42: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1FF2C.asm:24 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC1FF44: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C1/C1FF2C.asm:25 LDX #0
    case 0xC1FF47: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1FF2C.asm:25 LDX #0
    // Overlapping static entry reached from 0xC1FF47.
    case 0xC1FF49: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C1/C1FF2C.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC1FF4A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1FF2C.asm:27 AND #$00FF
    case 0xC1FF4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1FF2C.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1FF4C.
    case 0xC1FF4E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1FF2C.asm:28 CMP #STATUS_0::UNCONSCIOUS
    case 0xC1FF4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1FF2C.asm:28 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC1FF4F.
    case 0xC1FF51: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1FF2C.asm:29 BEQ @UNKNOWN0
    case 0xC1FF52: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1FF2C.asm:30 CMP #STATUS_0::DIAMONDIZED
    case 0xC1FF54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1FF2C.asm:30 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC1FF54.
    case 0xC1FF56: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1FF2C.asm:31 BNE @UNKNOWN1
    case 0xC1FF57: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C1/C1FF2C.asm:33 LDX #1
    case 0xC1FF59: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1FF2C.asm:33 LDX #1
    // Overlapping static entry reached from 0xC1FF59.
    case 0xC1FF5B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1FF2C.asm:35 LDA #0
    case 0xC1FF5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1FF2C.asm:35 LDA #0
    // Overlapping static entry reached from 0xC1FF5C.
    case 0xC1FF5E: cpu.execute_instruction<0x00>(0x0000EC, 2); return true;
    // src/unknown/C1/C1FF2C.asm:36 CPX LAST_PARTY_MEMBER_STATUS_LAST_CHECK
    case 0xC1FF5F: cpu.execute_instruction<0xEC>(0x00B4A2, 3); return true;
    // src/unknown/C1/C1FF2C.asm:37 BEQ @UNKNOWN2
    case 0xC1FF62: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C1/C1FF2C.asm:38 LDA #1
    case 0xC1FF64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1FF2C.asm:38 LDA #1
    // Overlapping static entry reached from 0xC1FF64.
    case 0xC1FF66: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/unknown/C1/C1FF2C.asm:40 STX LAST_PARTY_MEMBER_STATUS_LAST_CHECK
    case 0xC1FF67: cpu.execute_instruction<0x8E>(0x00B4A2, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1FF2C.asm:41 END_C_FUNCTION
    case 0xC1FF6A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1FF6B.asm (unresolved).
bool execute_unresolved_c1_c1ff6b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1FF6B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1FF6B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1FF6B.asm:7 STZ ENABLE_WORD_WRAP
    case 0xC1FF6D: cpu.execute_instruction<0x9C>(0x005E6E, 3); return true;
    // src/unknown/C1/C1FF6B.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FF70: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1FF6B.asm:9 LDA #1
    case 0xC1FF72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C1/C1FF6B.asm:10 STA ALLOW_TEXT_OVERFLOW
    case 0xC1FF74: cpu.execute_instruction<0x8D>(0x00B49D, 3); return true;
    // src/unknown/C1/C1FF6B.asm:10 STA ALLOW_TEXT_OVERFLOW
    // Overlapping static entry reached from 0xC1FF72.
    case 0xC1FF75: cpu.execute_instruction<0x9D>(0x0020B4, 3); return true;
    // src/unknown/C1/C1FF6B.asm:12 JSR FILE_MENU_LOOP
    case 0xC1FF77: cpu.execute_instruction<0x20>(0x00F805, 3); return true;
    // src/unknown/C1/C1FF6B.asm:12 JSR FILE_MENU_LOOP
    // Overlapping static entry reached from 0xC1FF75.
    case 0xC1FF78: cpu.execute_instruction<0x05>(0x0000F8, 2); return true;
    // src/unknown/C1/C1FF6B.asm:13 JSR CLEAR_INSTANT_PRINTING
    case 0xC1FF7A: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/unknown/C1/C1FF6B.asm:14 JSL WINDOW_TICK
    case 0xC1FF7E: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C1/C1FF6B.asm:16 STZ DISABLED_TRANSITIONS
    case 0xC1FF82: cpu.execute_instruction<0x9C>(0x00B4B6, 3); return true;
    // src/unknown/C1/C1FF6B.asm:17 STZ LAST_PARTY_MEMBER_STATUS_LAST_CHECK
    case 0xC1FF85: cpu.execute_instruction<0x9C>(0x00B4A2, 3); return true;
    // src/unknown/C1/C1FF6B.asm:19 LDA #<-1
    case 0xC1FF88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1FF6B.asm:19 LDA #<-1
    // Overlapping static entry reached from 0xC1FF88.
    case 0xC1FF8A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1FF6B.asm:20 STA ENABLE_WORD_WRAP
    case 0xC1FF8B: cpu.execute_instruction<0x8D>(0x005E6E, 3); return true;
    // src/unknown/C1/C1FF6B.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FF8E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1FF6B.asm:22 STZ ALLOW_TEXT_OVERFLOW
    case 0xC1FF90: cpu.execute_instruction<0x9C>(0x00B49D, 3); return true;
    // src/unknown/C1/C1FF6B.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC1FF93: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1FF6B.asm:25 LDA #0
    case 0xC1FF95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1FF6B.asm:25 LDA #0
    // Overlapping static entry reached from 0xC1FF95.
    case 0xC1FF97: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1FF6B.asm:26 END_C_FUNCTION
    case 0xC1FF98: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1FF99.asm (unresolved).
bool execute_unresolved_c1_c1ff99_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1FF99.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1FF99: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1FF99.asm:10 END_STACK_VARS
    case 0xC1FF9B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1FF99.asm:10 END_STACK_VARS
    case 0xC1FF9C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1FF99.asm:10 END_STACK_VARS
    case 0xC1FF9D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1FF99.asm:10 END_STACK_VARS
    case 0xC1FF9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1FF99.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1FF9E.
    case 0xC1FFA0: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1FF99.asm:10 END_STACK_VARS
    case 0xC1FFA1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1FF99.asm:10 END_STACK_VARS
    case 0xC1FFA2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1FF99.asm:11 TXY
    case 0xC1FFA3: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1FF99.asm:12 STY @LOCAL01
    case 0xC1FFA4: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C1/C1FF99.asm:13 TAX
    case 0xC1FFA6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1FF99.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1FFA7: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1FF99.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1FFA9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1FF99.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1FFAB: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1FF99.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1FFAD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1FF99.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FFAF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1FF99.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FFB1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1FF99.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FFB3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1FF99.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FFB5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1FF99.asm:16 TXA
    case 0xC1FFB7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1FF99.asm:17 JSL UNKNOWN_C43E31
    case 0xC1FFB8: cpu.execute_instruction<0x22>(0xC43E31, 4); return true;
    // src/unknown/C1/C1FF99.asm:18 STA @VIRTUAL02
    case 0xC1FFBC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1FF99.asm:19 LDY @LOCAL01
    case 0xC1FFBE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C1FF99.asm:20 TYA
    case 0xC1FFC0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1FF99.asm:21 ASL
    case 0xC1FFC1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1FF99.asm:22 ASL
    case 0xC1FFC2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1FF99.asm:23 ASL
    case 0xC1FFC3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1FF99.asm:24 SEC
    case 0xC1FFC4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1FF99.asm:25 SBC @VIRTUAL02
    case 0xC1FFC5: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C1/C1FF99.asm:26 LSR
    case 0xC1FFC7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C1FF99.asm:27 STA VWF_X
    case 0xC1FFC8: cpu.execute_instruction<0x8D>(0x009E23, 3); return true;
    // src/unknown/C1/C1FF99.asm:28 LSR
    case 0xC1FFCB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C1FF99.asm:29 LSR
    case 0xC1FFCC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C1FF99.asm:30 LSR
    case 0xC1FFCD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C1FF99.asm:31 STA VWF_TILE
    case 0xC1FFCE: cpu.execute_instruction<0x8D>(0x009E25, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1FF99.asm:32 END_C_FUNCTION
    case 0xC1FFD1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1FF99.asm:32 END_C_FUNCTION
    case 0xC1FFD2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
