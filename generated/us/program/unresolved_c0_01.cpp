// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C0/C00E16.asm (unresolved).
bool execute_unresolved_c0_c00e16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C00E16.asm:3 BEGIN_C_FUNCTION
    case 0xC00E16: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C00E16.asm:16 END_STACK_VARS
    case 0xC00E18: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C00E16.asm:16 END_STACK_VARS
    case 0xC00E19: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C00E16.asm:16 END_STACK_VARS
    case 0xC00E1A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C00E16.asm:16 END_STACK_VARS
    case 0xC00E1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C00E16.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC00E1B.
    case 0xC00E1D: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C00E16.asm:16 END_STACK_VARS
    case 0xC00E1E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C00E16.asm:16 END_STACK_VARS
    case 0xC00E1F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:17 STX @VIRTUAL04
    case 0xC00E20: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C00E16.asm:17 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC00E1D.
    case 0xC00E21: cpu.execute_instruction<0x04>(0x0000A8, 2); return true;
    // src/unknown/C0/C00E16.asm:18 TAY
    case 0xC00E22: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:19 STY @LOCAL08
    case 0xC00E23: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:20 LDA DEBUG
    case 0xC00E25: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/unknown/C0/C00E16.asm:21 BEQ @UNKNOWN0
    case 0xC00E28: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C00E16.asm:22 LDX @VIRTUAL04
    case 0xC00E2A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C00E16.asm:23 TYA
    case 0xC00E2C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:24 JSL UNKNOWN_EFDFC4
    case 0xC00E2D: cpu.execute_instruction<0x22>(0xEFDFC4, 4); return true;
    // src/unknown/C0/C00E16.asm:26 LDA #256
    case 0xC00E31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/unknown/C0/C00E16.asm:26 LDA #256
    // Overlapping static entry reached from 0xC00E31.
    case 0xC00E33: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/unknown/C0/C00E16.asm:27 JSL SBRK
    case 0xC00E34: cpu.execute_instruction<0x22>(0xC086DE, 4); return true;
    // src/unknown/C0/C00E16.asm:27 JSL SBRK
    // Overlapping static entry reached from 0xC00E33.
    case 0xC00E35: cpu.execute_instruction<0xDE>(0x00C086, 3); return true;
    // src/unknown/C0/C00E16.asm:28 STA @LOCAL07
    case 0xC00E38: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C00E16.asm:29 CLC
    case 0xC00E3A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:30 ADC #128
    case 0xC00E3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000080, 3); return true;
    // src/unknown/C0/C00E16.asm:30 ADC #128
    // Overlapping static entry reached from 0xC00E3B.
    case 0xC00E3D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C00E16.asm:31 STA @LOCAL06
    case 0xC00E3E: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C00E16.asm:32 LDY @LOCAL08
    case 0xC00E40: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:33 TYA
    case 0xC00E42: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:34 DEC
    case 0xC00E43: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:35 STA @LOCAL08
    case 0xC00E44: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:36 LDA @VIRTUAL04
    case 0xC00E46: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00E16.asm:37 LSR
    case 0xC00E48: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:38 LSR
    case 0xC00E49: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:39 AND #$000F
    case 0xC00E4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C00E16.asm:39 AND #$000F
    // Overlapping static entry reached from 0xC00E4A.
    case 0xC00E4C: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00E4D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00E4E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00E4F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00E50: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00E51: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:41 CLC
    case 0xC00E52: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:42 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC00E53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00F000, 3); return true;
    // src/unknown/C0/C00E16.asm:42 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC00E53.
    case 0xC00E55: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/unknown/C0/C00E16.asm:43 STA @LOCAL05
    case 0xC00E56: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C00E16.asm:43 STA @LOCAL05
    // Overlapping static entry reached from 0xC00E55.
    case 0xC00E57: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:44 LDA @LOCAL08
    case 0xC00E58: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:45 AND #$0003
    case 0xC00E5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00E16.asm:45 AND #$0003
    // Overlapping static entry reached from 0xC00E5A.
    case 0xC00E5C: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C00E16.asm:46 PHA
    case 0xC00E5D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:47 LDA @VIRTUAL04
    case 0xC00E5E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00E16.asm:48 AND #$0003
    case 0xC00E60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00E16.asm:48 AND #$0003
    // Overlapping static entry reached from 0xC00E60.
    case 0xC00E62: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:49 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC00E63: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:49 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC00E64: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:50 STA @VIRTUAL02
    case 0xC00E65: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:51 LDA @LOCAL08
    case 0xC00E67: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:52 LSR
    case 0xC00E69: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:53 LSR
    case 0xC00E6A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:54 AND #$000F
    case 0xC00E6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C00E16.asm:54 AND #$000F
    // Overlapping static entry reached from 0xC00E6B.
    case 0xC00E6D: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C00E16.asm:55 ASL
    case 0xC00E6E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:56 TAY
    case 0xC00E6F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:57 LDA (@LOCAL05),Y
    case 0xC00E70: cpu.execute_instruction<0xB1>(0x00001A, 2); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:58 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00E72: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:58 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00E73: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:58 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00E74: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:58 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00E75: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:59 CLC
    case 0xC00E76: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:60 ADC @VIRTUAL02
    case 0xC00E77: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:61 PLY
    case 0xC00E79: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:62 STY @VIRTUAL02
    case 0xC00E7A: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:63 CLC
    case 0xC00E7C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:64 ADC @VIRTUAL02
    case 0xC00E7D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:65 TAY
    case 0xC00E7F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:66 STY @LOCAL04
    case 0xC00E80: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C00E16.asm:67 LDA @LOCAL08
    case 0xC00E82: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:68 AND #$003F
    case 0xC00E84: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C00E16.asm:68 AND #$003F
    // Overlapping static entry reached from 0xC0B5B0.
    case 0xC00E85: cpu.execute_instruction<0x3F>(0x86AA00, 4); return true;
    // src/unknown/C0/C00E16.asm:68 AND #$003F
    // Overlapping static entry reached from 0xC00E84.
    case 0xC00E86: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C00E16.asm:69 TAX
    case 0xC00E87: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:70 STX @LOCAL03
    case 0xC00E88: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C00E16.asm:70 STX @LOCAL03
    // Overlapping static entry reached from 0xC00E85.
    case 0xC00E89: cpu.execute_instruction<0x16>(0x0000A9, 2); return true;
    // src/unknown/C0/C00E16.asm:71 LDA #0
    case 0xC00E8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C00E16.asm:71 LDA #0
    // Overlapping static entry reached from 0xC00E89.
    case 0xC00E8B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C00E16.asm:71 LDA #0
    // Overlapping static entry reached from 0xC00E8A.
    case 0xC00E8C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C00E16.asm:72 STA @VIRTUAL02
    case 0xC00E8D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:73 STA @LOCAL02
    case 0xC00E8F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C00E16.asm:74 BRA @UNKNOWN5
    case 0xC00E91: cpu.execute_instruction<0x80>(0x000071, 2); return true;
    // src/unknown/C0/C00E16.asm:76 LDA @LOCAL08
    case 0xC00E93: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:77 AND #$0003
    case 0xC00E95: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00E16.asm:77 AND #$0003
    // Overlapping static entry reached from 0xC00E95.
    case 0xC00E97: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C00E16.asm:78 BNE @UNKNOWN2
    case 0xC00E98: cpu.execute_instruction<0xD0>(0x00001E, 2); return true;
    // src/unknown/C0/C00E16.asm:79 LDA @VIRTUAL04
    case 0xC00E9A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00E16.asm:80 AND #$0003
    case 0xC00E9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00E16.asm:80 AND #$0003
    // Overlapping static entry reached from 0xC00E9C.
    case 0xC00E9E: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:81 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC00E9F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:81 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC00EA0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:82 STA @VIRTUAL02
    case 0xC00EA1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:83 LDA @LOCAL08
    case 0xC00EA3: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:84 LSR
    case 0xC00EA5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:85 LSR
    case 0xC00EA6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:86 AND #$000F
    case 0xC00EA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C00E16.asm:86 AND #$000F
    // Overlapping static entry reached from 0xC00EA7.
    case 0xC00EA9: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C00E16.asm:87 ASL
    case 0xC00EAA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:88 TAY
    case 0xC00EAB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:89 LDA (@LOCAL05),Y
    case 0xC00EAC: cpu.execute_instruction<0xB1>(0x00001A, 2); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:90 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00EAE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:90 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00EAF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:90 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00EB0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:90 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00EB1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:91 CLC
    case 0xC00EB2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:92 ADC @VIRTUAL02
    case 0xC00EB3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:93 TAY
    case 0xC00EB5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:94 STY @LOCAL04
    case 0xC00EB6: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C00E16.asm:96 LDY @LOCAL04
    case 0xC00EB8: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C00E16.asm:97 TYA
    case 0xC00EBA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:98 ASL
    case 0xC00EBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:99 TAX
    case 0xC00EBC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:100 LDA BUFFER + $8000,X
    case 0xC00EBD: cpu.execute_instruction<0xBF>(0x7F8000, 4); return true;
    // src/unknown/C0/C00E16.asm:101 STA @LOCAL01
    case 0xC00EC1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C00E16.asm:102 LDX @LOCAL03
    case 0xC00EC3: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C00E16.asm:103 TXA
    case 0xC00EC5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:104 ASL
    case 0xC00EC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:105 TAY
    case 0xC00EC7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:106 LDA @LOCAL01
    case 0xC00EC8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00E16.asm:107 STA (@LOCAL07),Y
    case 0xC00ECA: cpu.execute_instruction<0x91>(0x00001E, 2); return true;
    // src/unknown/C0/C00E16.asm:108 LDY @LOCAL04
    case 0xC00ECC: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C00E16.asm:109 INY
    case 0xC00ECE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:110 STY @LOCAL04
    case 0xC00ECF: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C00E16.asm:111 LDA @LOCAL01
    case 0xC00ED1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00E16.asm:112 AND #$03FF
    case 0xC00ED3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/C0/C00E16.asm:112 AND #$03FF
    // Overlapping static entry reached from 0xC00ED3.
    case 0xC00ED5: cpu.execute_instruction<0x03>(0x0000C9, 2); return true;
    // src/unknown/C0/C00E16.asm:113 CMP #384
    case 0xC00ED6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000180, 3); return true;
    // src/unknown/C0/C00E16.asm:113 CMP #384
    // Overlapping static entry reached from 0xC00ED5.
    case 0xC00ED7: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C0/C00E16.asm:113 CMP #384
    // Overlapping static entry reached from 0xC00ED6.
    case 0xC00ED8: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C00E16.asm:114 BCS @UNKNOWN3
    case 0xC00ED9: cpu.execute_instruction<0xB0>(0x000009, 2); return true;
    // src/unknown/C0/C00E16.asm:114 BCS @UNKNOWN3
    // Overlapping static entry reached from 0xC00ED8.
    case 0xC00EDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000A5, 2); else cpu.execute_instruction<0x09>(0x0012A5, 3); return true;
    // src/unknown/C0/C00E16.asm:115 LDA @LOCAL01
    case 0xC00EDB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00E16.asm:115 LDA @LOCAL01
    // Overlapping static entry reached from 0xC00EDA.
    case 0xC00EDC: cpu.execute_instruction<0x12>(0x000009, 2); return true;
    // src/unknown/C0/C00E16.asm:116 ORA #$2000
    case 0xC00EDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x002000, 3); return true;
    // src/unknown/C0/C00E16.asm:116 ORA #$2000
    // Overlapping static entry reached from 0xC00EDC.
    case 0xC00EDE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:116 ORA #$2000
    // Overlapping static entry reached from 0xC00EDD.
    case 0xC00EDF: cpu.execute_instruction<0x20>(0x001285, 3); return true;
    // src/unknown/C0/C00E16.asm:117 STA @LOCAL01
    case 0xC00EE0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C00E16.asm:118 BRA @UNKNOWN4
    case 0xC00EE2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:120 STZ @LOCAL01
    case 0xC00EE4: cpu.execute_instruction<0x64>(0x000012, 2); return true;
    // src/unknown/C0/C00E16.asm:122 TXA
    case 0xC00EE6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:123 ASL
    case 0xC00EE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:124 TAY
    case 0xC00EE8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:125 LDA @LOCAL01
    case 0xC00EE9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00E16.asm:126 STA (@LOCAL06),Y
    case 0xC00EEB: cpu.execute_instruction<0x91>(0x00001C, 2); return true;
    // src/unknown/C0/C00E16.asm:127 INX
    case 0xC00EED: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:128 TXA
    case 0xC00EEE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:129 AND #$003F
    case 0xC00EEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C00E16.asm:129 AND #$003F
    // Overlapping static entry reached from 0xC00EEF.
    case 0xC00EF1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C00E16.asm:130 TAX
    case 0xC00EF2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:131 STX @LOCAL03
    case 0xC00EF3: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C00E16.asm:132 LDA @LOCAL08
    case 0xC00EF5: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:133 INC
    case 0xC00EF7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:134 STA @LOCAL08
    case 0xC00EF8: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:135 LDA @LOCAL02
    case 0xC00EFA: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C00E16.asm:136 STA @VIRTUAL02
    case 0xC00EFC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:137 INC @VIRTUAL02
    case 0xC00EFE: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:138 LDA @VIRTUAL02
    case 0xC00F00: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:139 STA @LOCAL02
    case 0xC00F02: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C00E16.asm:141 LDA @VIRTUAL02
    case 0xC00F04: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:142 CMP #MAP_RESOLUTION_WIDTH
    case 0xC00F06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000022, 2); else cpu.execute_instruction<0xC9>(0x000022, 3); return true;
    // src/unknown/C0/C00E16.asm:142 CMP #MAP_RESOLUTION_WIDTH
    // Overlapping static entry reached from 0xC00F06.
    case 0xC00F08: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C00E16.asm:143 BCCL @UNKNOWN1
    case 0xC00F09: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C00E16.asm:143 BCCL @UNKNOWN1
    case 0xC00F0B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C00E16.asm:143 BCCL @UNKNOWN1
    case 0xC00F0D: cpu.execute_instruction<0x4C>(0x000E93, 3); return true;
    // src/unknown/C0/C00E16.asm:144 LDA @VIRTUAL04
    case 0xC00F10: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00E16.asm:145 AND #$001F
    case 0xC00F12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C00E16.asm:145 AND #$001F
    // Overlapping static entry reached from 0xC00F12.
    case 0xC00F14: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:146 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00F15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:146 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00F16: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:146 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00F17: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:146 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00F18: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:146 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00F19: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:147 STA @VIRTUAL02
    case 0xC00F1A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:148 LDA @LOCAL07
    case 0xC00F1C: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F1E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00E16.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F20: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F21: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00E16.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F23: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F24: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00E16.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F26: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00E16.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC00F28: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F2A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F2C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F2E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F30: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F32: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F34: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC00F35.
    case 0xC00F37: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F38: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F39: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC00F39.
    case 0xC00F3B: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F3C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F40: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC00F3E.
    case 0xC00F41: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC00F41.
    case 0xC00F43: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x001EA5, 3); return true;
    // src/unknown/C0/C00E16.asm:152 LDA @LOCAL07
    case 0xC00F44: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C00E16.asm:152 LDA @LOCAL07
    // Overlapping static entry reached from 0xC00F43.
    case 0xC00F45: cpu.execute_instruction<0x1E>(0x006918, 3); return true;
    // src/unknown/C0/C00E16.asm:153 CLC
    case 0xC00F46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:154 ADC #$0040
    case 0xC00F47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/unknown/C0/C00E16.asm:154 ADC #$0040
    // Overlapping static entry reached from 0xC00F45.
    case 0xC00F48: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:154 ADC #$0040
    // Overlapping static entry reached from 0xC00F47.
    case 0xC00F49: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F4A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00E16.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F4C: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F4D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00E16.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F4F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F50: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00E16.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F52: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00E16.asm:156 REP #PROC_FLAGS::ACCUM8
    case 0xC00F54: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F56: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F58: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F5A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F5C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F5E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F60: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00F61.
    case 0xC00F63: cpu.execute_instruction<0x3C>(0x00A2A8, 3); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F64: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F65: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00F63.
    case 0xC00F66: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00F65.
    case 0xC00F67: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F68: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F6C: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00F6A.
    case 0xC00F6D: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00F6D.
    case 0xC00F6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x00EFAD, 3); return true;
    // src/unknown/C0/C00E16.asm:158 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC00F70: cpu.execute_instruction<0xAD>(0x00B4EF, 3); return true;
    // src/unknown/C0/C00E16.asm:158 LDA PHOTOGRAPH_MAP_LOADING_MODE
    // Overlapping static entry reached from 0xC00F6F.
    case 0xC00F71: cpu.execute_instruction<0xEF>(0x54D0B4, 4); return true;
    // src/unknown/C0/C00E16.asm:158 LDA PHOTOGRAPH_MAP_LOADING_MODE
    // Overlapping static entry reached from 0xC00F6F.
    case 0xC00F72: cpu.execute_instruction<0xB4>(0x0000D0, 2); return true;
    // src/unknown/C0/C00E16.asm:159 BNE @UNKNOWN7
    case 0xC00F73: cpu.execute_instruction<0xD0>(0x000054, 2); return true;
    // src/unknown/C0/C00E16.asm:159 BNE @UNKNOWN7
    // Overlapping static entry reached from 0xC00F72.
    case 0xC00F74: cpu.execute_instruction<0x54>(0x001CA5, 3); return true;
    // src/unknown/C0/C00E16.asm:160 LDA @LOCAL06
    case 0xC00F75: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:161 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F77: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00E16.asm:161 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F79: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:161 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F7A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00E16.asm:161 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F7C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:161 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F7D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00E16.asm:161 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F7F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00E16.asm:162 REP #PROC_FLAGS::ACCUM8
    case 0xC00F81: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F83: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F85: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F87: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F89: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F8B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F8D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC00F8E.
    case 0xC00F90: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F91: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F92: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC00F92.
    case 0xC00F94: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F95: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F99: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC00F97.
    case 0xC00F9A: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC00F9A.
    case 0xC00F9C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x001CA5, 3); return true;
    // src/unknown/C0/C00E16.asm:164 LDA @LOCAL06
    case 0xC00F9D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C00E16.asm:164 LDA @LOCAL06
    // Overlapping static entry reached from 0xC00F9C.
    case 0xC00F9E: cpu.execute_instruction<0x1C>(0x006918, 3); return true;
    // src/unknown/C0/C00E16.asm:165 CLC
    case 0xC00F9F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:166 ADC #$0040
    case 0xC00FA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/unknown/C0/C00E16.asm:166 ADC #$0040
    // Overlapping static entry reached from 0xC00F9E.
    case 0xC00FA1: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:166 ADC #$0040
    // Overlapping static entry reached from 0xC00FA0.
    case 0xC00FA2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:167 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00FA3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00E16.asm:167 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00FA5: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:167 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00FA6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00E16.asm:167 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00FA8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:167 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00FA9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00E16.asm:167 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00FAB: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00E16.asm:168 REP #PROC_FLAGS::ACCUM8
    case 0xC00FAD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FAF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FB1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FB3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FB5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FB7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FB9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00FBA.
    case 0xC00FBC: cpu.execute_instruction<0x5C>(0x40A2A8, 4); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FBD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FBE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00FBE.
    case 0xC00FC0: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FC1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FC5: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00FC3.
    case 0xC00FC6: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00FC6.
    case 0xC00FC8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C00E16.asm:171 END_C_FUNCTION
    case 0xC00FC9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C00E16.asm:171 END_C_FUNCTION
    case 0xC00FCA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C00FCB.asm (unresolved).
bool execute_unresolved_c0_c00fcb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C00FCB.asm:3 BEGIN_C_FUNCTION
    case 0xC00FCB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C00FCB.asm:16 END_STACK_VARS
    case 0xC00FCD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C00FCB.asm:16 END_STACK_VARS
    case 0xC00FCE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C00FCB.asm:16 END_STACK_VARS
    case 0xC00FCF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C00FCB.asm:16 END_STACK_VARS
    case 0xC00FD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C00FCB.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC00FD0.
    case 0xC00FD2: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C00FCB.asm:16 END_STACK_VARS
    case 0xC00FD3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C00FCB.asm:16 END_STACK_VARS
    case 0xC00FD4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:17 TXY
    case 0xC00FD5: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:18 STY @LOCAL08
    case 0xC00FD6: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:19 STA @VIRTUAL04
    case 0xC00FD8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C00FCB.asm:20 LDA DEBUG
    case 0xC00FDA: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/unknown/C0/C00FCB.asm:21 BEQ @UNKNOWN0
    case 0xC00FDD: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C00FCB.asm:22 TYX
    case 0xC00FDF: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:23 LDA @VIRTUAL04
    case 0xC00FE0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00FCB.asm:24 JSL UNKNOWN_EFE07C
    case 0xC00FE2: cpu.execute_instruction<0x22>(0xEFE07C, 4); return true;
    // src/unknown/C0/C00FCB.asm:26 LDA #128
    case 0xC00FE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/unknown/C0/C00FCB.asm:26 LDA #128
    // Overlapping static entry reached from 0xC00FE6.
    case 0xC00FE8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C00FCB.asm:27 JSL SBRK
    case 0xC00FE9: cpu.execute_instruction<0x22>(0xC086DE, 4); return true;
    // src/unknown/C0/C00FCB.asm:28 STA @LOCAL07
    case 0xC00FED: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C00FCB.asm:29 CLC
    case 0xC00FEF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:30 ADC #64
    case 0xC00FF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/unknown/C0/C00FCB.asm:30 ADC #64
    // Overlapping static entry reached from 0xC00FF0.
    case 0xC00FF2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C00FCB.asm:31 STA @LOCAL06
    case 0xC00FF3: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C00FCB.asm:32 LDY @LOCAL08
    case 0xC00FF5: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:33 TYA
    case 0xC00FF7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:34 DEC
    case 0xC00FF8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:35 STA @LOCAL08
    case 0xC00FF9: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:36 LDA @VIRTUAL04
    case 0xC00FFB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00FCB.asm:37 LSR
    case 0xC00FFD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:38 LSR
    case 0xC00FFE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:39 AND #$000F
    case 0xC00FFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C00FCB.asm:39 AND #$000F
    // Overlapping static entry reached from 0xC00FFF.
    case 0xC01001: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C00FCB.asm:40 ASL
    case 0xC01002: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:41 CLC
    case 0xC01003: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:42 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC01004: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00F000, 3); return true;
    // src/unknown/C0/C00FCB.asm:42 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC01004.
    case 0xC01006: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/unknown/C0/C00FCB.asm:43 STA @LOCAL05
    case 0xC01007: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C00FCB.asm:43 STA @LOCAL05
    // Overlapping static entry reached from 0xC01006.
    case 0xC01008: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:44 LDA @VIRTUAL04
    case 0xC01009: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00FCB.asm:45 AND #$0003
    case 0xC0100B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00FCB.asm:45 AND #$0003
    // Overlapping static entry reached from 0xC0100B.
    case 0xC0100D: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C00FCB.asm:46 PHA
    case 0xC0100E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:47 LDA @LOCAL08
    case 0xC0100F: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:48 AND #$0003
    case 0xC01011: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00FCB.asm:48 AND #$0003
    // Overlapping static entry reached from 0xC01011.
    case 0xC01013: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:49 OPTIMIZED_MULT @VIRTUAL02, 4
    case 0xC01014: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:49 OPTIMIZED_MULT @VIRTUAL02, 4
    case 0xC01015: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:50 STA @VIRTUAL02
    case 0xC01016: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:51 LDA @LOCAL08
    case 0xC01018: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:52 LSR
    case 0xC0101A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:53 LSR
    case 0xC0101B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:54 AND #$000F
    case 0xC0101C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C00FCB.asm:54 AND #$000F
    // Overlapping static entry reached from 0xC0101C.
    case 0xC0101E: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:55 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC0101F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:55 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01020: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:55 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01021: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:55 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01022: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:55 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01023: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:56 TAY
    case 0xC01024: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:57 LDA (@LOCAL05),Y
    case 0xC01025: cpu.execute_instruction<0xB1>(0x00001A, 2); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:58 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC01027: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:58 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC01028: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:58 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC01029: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:58 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC0102A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:59 CLC
    case 0xC0102B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:60 ADC @VIRTUAL02
    case 0xC0102C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:61 PLY
    case 0xC0102E: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:62 STY @VIRTUAL02
    case 0xC0102F: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:63 CLC
    case 0xC01031: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:64 ADC @VIRTUAL02
    case 0xC01032: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:65 TAY
    case 0xC01034: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:66 STY @LOCAL04
    case 0xC01035: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C00FCB.asm:67 LDA @LOCAL08
    case 0xC01037: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:68 AND #$001F
    case 0xC01039: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C00FCB.asm:68 AND #$001F
    // Overlapping static entry reached from 0xC01039.
    case 0xC0103B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C00FCB.asm:69 TAX
    case 0xC0103C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:70 STX @LOCAL03
    case 0xC0103D: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C00FCB.asm:71 LDA #0
    case 0xC0103F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C00FCB.asm:71 LDA #0
    // Overlapping static entry reached from 0xC0103F.
    case 0xC01041: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C00FCB.asm:72 STA @VIRTUAL02
    case 0xC01042: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:73 STA @LOCAL02
    case 0xC01044: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C00FCB.asm:74 BRA @UNKNOWN5
    case 0xC01046: cpu.execute_instruction<0x80>(0x000074, 2); return true;
    // src/unknown/C0/C00FCB.asm:76 LDA @LOCAL08
    case 0xC01048: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:77 AND #$0003
    case 0xC0104A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00FCB.asm:77 AND #$0003
    // Overlapping static entry reached from 0xC0104A.
    case 0xC0104C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C00FCB.asm:78 BNE @UNKNOWN2
    case 0xC0104D: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:79 LDA @VIRTUAL04
    case 0xC0104F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00FCB.asm:80 AND #$0003
    case 0xC01051: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00FCB.asm:80 AND #$0003
    // Overlapping static entry reached from 0xC01051.
    case 0xC01053: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C00FCB.asm:81 STA @VIRTUAL02
    case 0xC01054: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:82 LDA @LOCAL08
    case 0xC01056: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:83 LSR
    case 0xC01058: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:84 LSR
    case 0xC01059: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:85 AND #$000F
    case 0xC0105A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C00FCB.asm:85 AND #$000F
    // Overlapping static entry reached from 0xC0105A.
    case 0xC0105C: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:86 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC0105D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:86 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC0105E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:86 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC0105F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:86 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01060: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:86 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01061: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:87 TAY
    case 0xC01062: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:88 LDA (@LOCAL05),Y
    case 0xC01063: cpu.execute_instruction<0xB1>(0x00001A, 2); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:89 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC01065: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:89 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC01066: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:89 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC01067: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:89 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC01068: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:90 CLC
    case 0xC01069: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:91 ADC @VIRTUAL02
    case 0xC0106A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:92 TAY
    case 0xC0106C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:93 STY @LOCAL04
    case 0xC0106D: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C00FCB.asm:95 TYA
    case 0xC0106F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:96 ASL
    case 0xC01070: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:97 TAX
    case 0xC01071: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:98 LDA BUFFER + $8000,X
    case 0xC01072: cpu.execute_instruction<0xBF>(0x7F8000, 4); return true;
    // src/unknown/C0/C00FCB.asm:99 STA @LOCAL01
    case 0xC01076: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C00FCB.asm:100 LDX @LOCAL03
    case 0xC01078: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C00FCB.asm:101 TXA
    case 0xC0107A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:102 ASL
    case 0xC0107B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:103 TAY
    case 0xC0107C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:104 LDA @LOCAL01
    case 0xC0107D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00FCB.asm:105 STA (@LOCAL07),Y
    case 0xC0107F: cpu.execute_instruction<0x91>(0x00001E, 2); return true;
    // src/unknown/C0/C00FCB.asm:106 LDA @LOCAL01
    case 0xC01081: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00FCB.asm:107 AND #$03FF
    case 0xC01083: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/C0/C00FCB.asm:107 AND #$03FF
    // Overlapping static entry reached from 0xC01083.
    case 0xC01085: cpu.execute_instruction<0x03>(0x0000C9, 2); return true;
    // src/unknown/C0/C00FCB.asm:108 CMP #384
    case 0xC01086: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000180, 3); return true;
    // src/unknown/C0/C00FCB.asm:108 CMP #384
    // Overlapping static entry reached from 0xC01085.
    case 0xC01087: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C0/C00FCB.asm:108 CMP #384
    // Overlapping static entry reached from 0xC01086.
    case 0xC01088: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C00FCB.asm:109 BCS @UNKNOWN3
    case 0xC01089: cpu.execute_instruction<0xB0>(0x000009, 2); return true;
    // src/unknown/C0/C00FCB.asm:109 BCS @UNKNOWN3
    // Overlapping static entry reached from 0xC01088.
    case 0xC0108A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000A5, 2); else cpu.execute_instruction<0x09>(0x0012A5, 3); return true;
    // src/unknown/C0/C00FCB.asm:110 LDA @LOCAL01
    case 0xC0108B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00FCB.asm:110 LDA @LOCAL01
    // Overlapping static entry reached from 0xC0108A.
    case 0xC0108C: cpu.execute_instruction<0x12>(0x000009, 2); return true;
    // src/unknown/C0/C00FCB.asm:111 ORA #$2000
    case 0xC0108D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x002000, 3); return true;
    // src/unknown/C0/C00FCB.asm:111 ORA #$2000
    // Overlapping static entry reached from 0xC0108C.
    case 0xC0108E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:111 ORA #$2000
    // Overlapping static entry reached from 0xC0108D.
    case 0xC0108F: cpu.execute_instruction<0x20>(0x001285, 3); return true;
    // src/unknown/C0/C00FCB.asm:112 STA @LOCAL01
    case 0xC01090: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C00FCB.asm:113 BRA @UNKNOWN4
    case 0xC01092: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:115 STZ @LOCAL01
    case 0xC01094: cpu.execute_instruction<0x64>(0x000012, 2); return true;
    // src/unknown/C0/C00FCB.asm:117 TXA
    case 0xC01096: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:118 ASL
    case 0xC01097: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:119 TAY
    case 0xC01098: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:120 LDA @LOCAL01
    case 0xC01099: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00FCB.asm:121 STA (@LOCAL06),Y
    case 0xC0109B: cpu.execute_instruction<0x91>(0x00001C, 2); return true;
    // src/unknown/C0/C00FCB.asm:122 LDY @LOCAL04
    case 0xC0109D: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C00FCB.asm:123 INY
    case 0xC0109F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:124 INY
    case 0xC010A0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:125 INY
    case 0xC010A1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:126 INY
    case 0xC010A2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:127 STY @LOCAL04
    case 0xC010A3: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C00FCB.asm:128 INX
    case 0xC010A5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:129 TXA
    case 0xC010A6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:130 AND #$001F
    case 0xC010A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C00FCB.asm:130 AND #$001F
    // Overlapping static entry reached from 0xC010A7.
    case 0xC010A9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C00FCB.asm:131 TAX
    case 0xC010AA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:132 STX @LOCAL03
    case 0xC010AB: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C00FCB.asm:133 LDA @LOCAL08
    case 0xC010AD: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:134 INC
    case 0xC010AF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:135 STA @LOCAL08
    case 0xC010B0: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:136 LDA @LOCAL02
    case 0xC010B2: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C00FCB.asm:137 STA @VIRTUAL02
    case 0xC010B4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:138 INC @VIRTUAL02
    case 0xC010B6: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:139 LDA @VIRTUAL02
    case 0xC010B8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:140 STA @LOCAL02
    case 0xC010BA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C00FCB.asm:142 LDA @VIRTUAL02
    case 0xC010BC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:143 CMP #MAP_RESOLUTION_HEIGHT
    case 0xC010BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C00FCB.asm:143 CMP #MAP_RESOLUTION_HEIGHT
    // Overlapping static entry reached from 0xC010BE.
    case 0xC010C0: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C00FCB.asm:144 BCCL @UNKNOWN1
    case 0xC010C1: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C00FCB.asm:144 BCCL @UNKNOWN1
    case 0xC010C3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C00FCB.asm:144 BCCL @UNKNOWN1
    case 0xC010C5: cpu.execute_instruction<0x4C>(0x001048, 3); return true;
    // src/unknown/C0/C00FCB.asm:145 LDA @VIRTUAL04
    case 0xC010C8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00FCB.asm:146 AND #$003F
    case 0xC010CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C00FCB.asm:146 AND #$003F
    // Overlapping static entry reached from 0xC010CA.
    case 0xC010CC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C00FCB.asm:147 STA @VIRTUAL02
    case 0xC010CD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:148 CMP #31
    case 0xC010CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/unknown/C0/C00FCB.asm:148 CMP #31
    // Overlapping static entry reached from 0xC010CF.
    case 0xC010D1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C00FCB.asm:149 BGT @UNKNOWN8
    case 0xC010D2: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C00FCB.asm:149 BGT @UNKNOWN8
    case 0xC010D4: cpu.execute_instruction<0xB0>(0x000052, 2); return true;
    // src/unknown/C0/C00FCB.asm:150 LDA @LOCAL07
    case 0xC010D6: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:151 PROMOTENEARPTRA @VIRTUAL06
    case 0xC010D8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00FCB.asm:151 PROMOTENEARPTRA @VIRTUAL06
    case 0xC010DA: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:151 PROMOTENEARPTRA @VIRTUAL06
    case 0xC010DB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00FCB.asm:151 PROMOTENEARPTRA @VIRTUAL06
    case 0xC010DD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:151 PROMOTENEARPTRA @VIRTUAL06
    case 0xC010DE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00FCB.asm:151 PROMOTENEARPTRA @VIRTUAL06
    case 0xC010E0: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00FCB.asm:152 REP #PROC_FLAGS::ACCUM8
    case 0xC010E2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010E4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010E6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010E8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010EA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010EC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC010EF.
    case 0xC010F1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010F2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010F3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC010F3.
    case 0xC010F5: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010F6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010FA: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC010F8.
    case 0xC010FB: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC010FB.
    case 0xC010FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x001CA5, 3); return true;
    // src/unknown/C0/C00FCB.asm:154 LDA @LOCAL06
    case 0xC010FE: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C00FCB.asm:154 LDA @LOCAL06
    // Overlapping static entry reached from 0xC010FD.
    case 0xC010FF: cpu.execute_instruction<0x1C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01100: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00FCB.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01102: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01103: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00FCB.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01105: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01106: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00FCB.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01108: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00FCB.asm:156 REP #PROC_FLAGS::ACCUM8
    case 0xC0110A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0110C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0110E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01110: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01112: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01114: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01116: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01117: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC01117.
    case 0xC01119: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0111A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0111B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC0111B.
    case 0xC0111D: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0111E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01120: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01122: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC01120.
    case 0xC01123: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC01123.
    case 0xC01125: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000080, 2); else cpu.execute_instruction<0xC0>(0x005780, 3); return true;
    // src/unknown/C0/C00FCB.asm:158 BRA @UNKNOWN9
    case 0xC01126: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/unknown/C0/C00FCB.asm:158 BRA @UNKNOWN9
    // Overlapping static entry reached from 0xC01125.
    case 0xC01127: cpu.execute_instruction<0x57>(0x0000A5, 2); return true;
    // src/unknown/C0/C00FCB.asm:160 LDA @VIRTUAL02
    case 0xC01128: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:160 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC01127.
    case 0xC01129: cpu.execute_instruction<0x02>(0x000029, 2); return true;
    // src/unknown/C0/C00FCB.asm:161 AND #$001F
    case 0xC0112A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C00FCB.asm:161 AND #$001F
    // Overlapping static entry reached from 0xC0112A.
    case 0xC0112C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C00FCB.asm:162 STA @VIRTUAL02
    case 0xC0112D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:163 LDA @LOCAL07
    case 0xC0112F: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:164 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01131: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00FCB.asm:164 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01133: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:164 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01134: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00FCB.asm:164 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01136: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:164 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01137: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00FCB.asm:164 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01139: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00FCB.asm:165 REP #PROC_FLAGS::ACCUM8
    case 0xC0113B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0113D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0113F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01141: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01143: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01145: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01147: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01148: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC01148.
    case 0xC0114A: cpu.execute_instruction<0x3C>(0x00A2A8, 3); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0114B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0114C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC0114A.
    case 0xC0114D: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC0114C.
    case 0xC0114E: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0114F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01151: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01153: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC01151.
    case 0xC01154: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC01154.
    case 0xC01156: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x001CA5, 3); return true;
    // src/unknown/C0/C00FCB.asm:167 LDA @LOCAL06
    case 0xC01157: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C00FCB.asm:167 LDA @LOCAL06
    // Overlapping static entry reached from 0xC01156.
    case 0xC01158: cpu.execute_instruction<0x1C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:168 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01159: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00FCB.asm:168 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0115B: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:168 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0115C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00FCB.asm:168 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0115E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:168 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0115F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00FCB.asm:168 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01161: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00FCB.asm:169 REP #PROC_FLAGS::ACCUM8
    case 0xC01163: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01165: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01167: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01169: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0116B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0116D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0116F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01170: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC01170.
    case 0xC01172: cpu.execute_instruction<0x5C>(0x40A2A8, 4); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01173: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01174: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC01174.
    case 0xC01176: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01177: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01179: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0117B: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC01179.
    case 0xC0117C: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC0117C.
    case 0xC0117E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C00FCB.asm:172 END_C_FUNCTION
    case 0xC0117F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C00FCB.asm:172 END_C_FUNCTION
    case 0xC01180: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01181.asm (unresolved).
bool execute_unresolved_c0_c01181_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01181.asm:3 BEGIN_C_FUNCTION
    case 0xC01181: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C01181.asm:9 END_STACK_VARS
    case 0xC01183: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C01181.asm:9 END_STACK_VARS
    case 0xC01184: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C01181.asm:9 END_STACK_VARS
    case 0xC01185: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01181.asm:9 END_STACK_VARS
    case 0xC01186: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01181.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC01186.
    case 0xC01188: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C01181.asm:9 END_STACK_VARS
    case 0xC01189: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C01181.asm:9 END_STACK_VARS
    case 0xC0118A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C01181.asm:10 STX @VIRTUAL02
    case 0xC0118B: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C01181.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC01188.
    case 0xC0118C: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C0/C01181.asm:11 LDA #64
    case 0xC0118D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C0/C01181.asm:11 LDA #64
    // Overlapping static entry reached from 0xC0118D.
    case 0xC0118F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C01181.asm:12 JSL SBRK
    case 0xC01190: cpu.execute_instruction<0x22>(0xC086DE, 4); return true;
    // src/unknown/C0/C01181.asm:13 TAY
    case 0xC01194: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C01181.asm:14 STY @LOCAL01
    case 0xC01195: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C01181.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC01197: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/C0/C01181.asm:16 STZ_BADOPT @LOCAL00
    case 0xC01199: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C0/C01181.asm:17 LDX #64
    case 0xC0119B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/unknown/C0/C01181.asm:17 LDX #64
    // Overlapping static entry reached from 0xC0119B.
    case 0xC0119D: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C0/C01181.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC0119E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01181.asm:19 TYA
    case 0xC011A0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01181.asm:20 JSL MEMSET16
    case 0xC011A1: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C0/C01181.asm:21 LDA @VIRTUAL02
    case 0xC011A5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C01181.asm:22 AND #$001F
    case 0xC011A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C01181.asm:22 AND #$001F
    // Overlapping static entry reached from 0xC011A7.
    case 0xC011A9: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C01181.asm:23 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC011AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C01181.asm:23 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC011AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C01181.asm:23 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC011AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C01181.asm:23 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC011AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C01181.asm:23 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC011AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C01181.asm:24 STA @VIRTUAL02
    case 0xC011AF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01181.asm:25 LDY @LOCAL01
    case 0xC011B1: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C01181.asm:26 TYA
    case 0xC011B3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC011B4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C01181.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC011B6: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C01181.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC011B7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C01181.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC011B9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC011BA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C01181.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC011BC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C01181.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC011BE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011C0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011C2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011C4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011C6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011C8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC011CB.
    case 0xC011CD: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011CE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC011CF.
    case 0xC011D1: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011D2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011D6: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC011D4.
    case 0xC011D7: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC011D7.
    case 0xC011D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011DA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC011D9.
    case 0xC011DB: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011DC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC011DB.
    case 0xC011DD: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011DE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011E0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011E2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC011E5.
    case 0xC011E7: cpu.execute_instruction<0x3C>(0x00A2A8, 3); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011E8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011E9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC011E7.
    case 0xC011EA: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC011E9.
    case 0xC011EB: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011EC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011F0: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC011EE.
    case 0xC011F1: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC011F1.
    case 0xC011F3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC011F4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC011F3.
    case 0xC011F5: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC011F6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC011F5.
    case 0xC011F7: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC011F8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC011FA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC011FC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC011FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC011FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC011FF.
    case 0xC01201: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC01202: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC01203: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC01203.
    case 0xC01205: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC01206: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC01208: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC0120A: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC01208.
    case 0xC0120B: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC0120B.
    case 0xC0120D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC0120E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC0120D.
    case 0xC0120F: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01210: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC0120F.
    case 0xC01211: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01212: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01214: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01216: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01218: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01219: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC01219.
    case 0xC0121B: cpu.execute_instruction<0x5C>(0x40A2A8, 4); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC0121C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC0121D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC0121D.
    case 0xC0121F: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01220: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01222: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01224: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC01222.
    case 0xC01225: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC01225.
    case 0xC01227: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C01181.asm:33 END_C_FUNCTION
    case 0xC01228: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C01181.asm:33 END_C_FUNCTION
    case 0xC01229: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0122A.asm (unresolved).
bool execute_unresolved_c0_c0122a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0122A.asm:3 BEGIN_C_FUNCTION
    case 0xC0122A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0122A.asm:8 END_STACK_VARS
    case 0xC0122C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0122A.asm:8 END_STACK_VARS
    case 0xC0122D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0122A.asm:8 END_STACK_VARS
    case 0xC0122E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0122A.asm:8 END_STACK_VARS
    case 0xC0122F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0122A.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0122F.
    case 0xC01231: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0122A.asm:8 END_STACK_VARS
    case 0xC01232: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0122A.asm:8 END_STACK_VARS
    case 0xC01233: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0122A.asm:9 STA @VIRTUAL02
    case 0xC01234: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0122A.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC01231.
    case 0xC01235: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C0/C0122A.asm:10 LDA #64
    case 0xC01236: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C0/C0122A.asm:10 LDA #64
    // Overlapping static entry reached from 0xC01236.
    case 0xC01238: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0122A.asm:11 JSL SBRK
    case 0xC01239: cpu.execute_instruction<0x22>(0xC086DE, 4); return true;
    // src/unknown/C0/C0122A.asm:12 TAY
    case 0xC0123D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0122A.asm:13 STY @LOCAL01
    case 0xC0123E: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C0122A.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC01240: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/C0/C0122A.asm:15 STZ_BADOPT @LOCAL00
    case 0xC01242: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C0/C0122A.asm:16 LDX #64
    case 0xC01244: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/unknown/C0/C0122A.asm:16 LDX #64
    // Overlapping static entry reached from 0xC01244.
    case 0xC01246: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C0/C0122A.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC01247: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0122A.asm:18 TYA
    case 0xC01249: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0122A.asm:19 JSL MEMSET16
    case 0xC0124A: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C0/C0122A.asm:20 LDA @VIRTUAL02
    case 0xC0124E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0122A.asm:21 AND #$003F
    case 0xC01250: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0122A.asm:21 AND #$003F
    // Overlapping static entry reached from 0xC01250.
    case 0xC01252: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0122A.asm:22 STA @VIRTUAL02
    case 0xC01253: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0122A.asm:23 CMP #31
    case 0xC01255: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/unknown/C0/C0122A.asm:23 CMP #31
    // Overlapping static entry reached from 0xC01255.
    case 0xC01257: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C0122A.asm:24 BGT @UNKNOWN1
    case 0xC01258: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0122A.asm:24 BGT @UNKNOWN1
    case 0xC0125A: cpu.execute_instruction<0xB0>(0x000045, 2); return true;
    // src/unknown/C0/C0122A.asm:25 LDY @LOCAL01
    case 0xC0125C: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0122A.asm:26 TYA
    case 0xC0125E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0125F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C0122A.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01261: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0122A.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01262: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C0122A.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01264: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01265: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0122A.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01267: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C0122A.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC01269: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC0126B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC0126D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC0126F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01271: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01273: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01275: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01276: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC01276.
    case 0xC01278: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01279: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC0127A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC0127A.
    case 0xC0127C: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC0127D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC0127F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01281: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC0127F.
    case 0xC01282: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC01282.
    case 0xC01284: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01285: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC01284.
    case 0xC01286: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01287: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC01286.
    case 0xC01288: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01289: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0128B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0128D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0128F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01290: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC01290.
    case 0xC01292: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01293: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01294: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC01294.
    case 0xC01296: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01297: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01299: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0129B: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC01299.
    case 0xC0129C: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC0129C.
    case 0xC0129E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000080, 2); else cpu.execute_instruction<0xC0>(0x004A80, 3); return true;
    // src/unknown/C0/C0122A.asm:31 BRA @UNKNOWN2
    case 0xC0129F: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // src/unknown/C0/C0122A.asm:31 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC0129E.
    case 0xC012A0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0122A.asm:33 LDA @VIRTUAL02
    case 0xC012A1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0122A.asm:34 AND #$001F
    case 0xC012A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C0122A.asm:34 AND #$001F
    // Overlapping static entry reached from 0xC012A3.
    case 0xC012A5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0122A.asm:35 STA @VIRTUAL02
    case 0xC012A6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0122A.asm:36 LDY @LOCAL01
    case 0xC012A8: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0122A.asm:37 TYA
    case 0xC012AA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:38 PROMOTENEARPTRA @VIRTUAL06
    case 0xC012AB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C0122A.asm:38 PROMOTENEARPTRA @VIRTUAL06
    case 0xC012AD: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0122A.asm:38 PROMOTENEARPTRA @VIRTUAL06
    case 0xC012AE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C0122A.asm:38 PROMOTENEARPTRA @VIRTUAL06
    case 0xC012B0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:38 PROMOTENEARPTRA @VIRTUAL06
    case 0xC012B1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0122A.asm:38 PROMOTENEARPTRA @VIRTUAL06
    case 0xC012B3: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C0122A.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC012B5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012B7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012B9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012BB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012BD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012BF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012C2.
    case 0xC012C4: cpu.execute_instruction<0x3C>(0x00A2A8, 3); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012C5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012C4.
    case 0xC012C7: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012C6.
    case 0xC012C8: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012C9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012CD: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012CB.
    case 0xC012CE: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012CE.
    case 0xC012D0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012D1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012D0.
    case 0xC012D2: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012D3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012D2.
    case 0xC012D4: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012D5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012D7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012D9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012DC.
    case 0xC012DE: cpu.execute_instruction<0x5C>(0x40A2A8, 4); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012DF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012E0.
    case 0xC012E2: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012E7: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012E5.
    case 0xC012E8: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012E8.
    case 0xC012EA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0122A.asm:43 END_C_FUNCTION
    case 0xC012EB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0122A.asm:43 END_C_FUNCTION
    case 0xC012EC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01731.asm (unresolved).
bool execute_unresolved_c0_c01731_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01731.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01731: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C01731.asm:9 END_STACK_VARS
    case 0xC01733: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C01731.asm:9 END_STACK_VARS
    case 0xC01734: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C01731.asm:9 END_STACK_VARS
    case 0xC01735: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01731.asm:9 END_STACK_VARS
    case 0xC01736: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01731.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC01736.
    case 0xC01738: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C01731.asm:9 END_STACK_VARS
    case 0xC01739: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C01731.asm:9 END_STACK_VARS
    case 0xC0173A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:10 STX @VIRTUAL04
    case 0xC0173B: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C01731.asm:10 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC01738.
    case 0xC0173C: cpu.execute_instruction<0x04>(0x0000A8, 2); return true;
    // src/unknown/C0/C01731.asm:11 TAY
    case 0xC0173D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:12 STY @LOCAL01
    case 0xC0173E: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C01731.asm:13 STY BG2_X_POS
    case 0xC01740: cpu.execute_instruction<0x8C>(0x000035, 3); return true;
    // src/unknown/C0/C01731.asm:14 STY BG1_X_POS
    case 0xC01743: cpu.execute_instruction<0x8C>(0x000031, 3); return true;
    // src/unknown/C0/C01731.asm:14 STY BG1_X_POS
    // Overlapping static entry reached from 0xC01753.
    case 0xC01745: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C01731.asm:15 LDA @VIRTUAL04
    case 0xC01746: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01731.asm:16 STA BG2_Y_POS
    case 0xC01748: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/unknown/C0/C01731.asm:17 LDA @VIRTUAL04
    case 0xC0174B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01731.asm:18 STA BG1_Y_POS
    case 0xC0174D: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/unknown/C0/C01731.asm:19 TYA
    case 0xC01750: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:20 AND #$8000
    case 0xC01751: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C01731.asm:20 AND #$8000
    // Overlapping static entry reached from 0xC01751.
    case 0xC01753: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C01731.asm:21 BEQ @UNKNOWN0
    case 0xC01754: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C0/C01731.asm:22 TYA
    case 0xC01756: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:23 LSR
    case 0xC01757: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:24 LSR
    case 0xC01758: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:25 LSR
    case 0xC01759: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:26 ORA #$E000
    case 0xC0175A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/unknown/C0/C01731.asm:26 ORA #$E000
    // Overlapping static entry reached from 0xC0175A.
    case 0xC0175C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x000E85, 3); return true;
    // src/unknown/C0/C01731.asm:27 STA @LOCAL00
    case 0xC0175D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C01731.asm:27 STA @LOCAL00
    // Overlapping static entry reached from 0xC0175C.
    case 0xC0175E: cpu.execute_instruction<0x0E>(0x000680, 3); return true;
    // src/unknown/C0/C01731.asm:28 BRA @UNKNOWN1
    case 0xC0175F: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C01731.asm:30 TYA
    case 0xC01761: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:31 LSR
    case 0xC01762: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:32 LSR
    case 0xC01763: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:33 LSR
    case 0xC01764: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:34 STA @LOCAL00
    case 0xC01765: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C01731.asm:36 LDA @VIRTUAL04
    case 0xC01767: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01731.asm:37 AND #$8000
    case 0xC01769: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C01731.asm:37 AND #$8000
    // Overlapping static entry reached from 0xC01769.
    case 0xC0176B: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C01731.asm:38 BEQ @UNKNOWN2
    case 0xC0176C: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C01731.asm:39 LDA @VIRTUAL04
    case 0xC0176E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01731.asm:40 LSR
    case 0xC01770: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:41 LSR
    case 0xC01771: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:42 LSR
    case 0xC01772: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:43 ORA #$E000
    case 0xC01773: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/unknown/C0/C01731.asm:43 ORA #$E000
    // Overlapping static entry reached from 0xC01773.
    case 0xC01775: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x000285, 3); return true;
    // src/unknown/C0/C01731.asm:44 STA @VIRTUAL02
    case 0xC01776: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01731.asm:44 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC01775.
    case 0xC01777: cpu.execute_instruction<0x02>(0x000080, 2); return true;
    // src/unknown/C0/C01731.asm:45 BRA @UNKNOWN5
    case 0xC01778: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C0/C01731.asm:47 LDA @VIRTUAL04
    case 0xC0177A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01731.asm:48 LSR
    case 0xC0177C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:49 LSR
    case 0xC0177D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:50 LSR
    case 0xC0177E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:51 STA @VIRTUAL02
    case 0xC0177F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01731.asm:52 BRA @UNKNOWN5
    case 0xC01781: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C0/C01731.asm:54 AND #$8000
    case 0xC01783: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C01731.asm:54 AND #$8000
    // Overlapping static entry reached from 0xC01783.
    case 0xC01785: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C01731.asm:55 BEQ @UNKNOWN4
    case 0xC01786: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C0/C01731.asm:56 LDA SCREEN_LEFT_X
    case 0xC01788: cpu.execute_instruction<0xAD>(0x004374, 3); return true;
    // src/unknown/C0/C01731.asm:57 INC
    case 0xC0178B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:58 STA SCREEN_LEFT_X
    case 0xC0178C: cpu.execute_instruction<0x8D>(0x004374, 3); return true;
    // src/unknown/C0/C01731.asm:59 LDX @VIRTUAL02
    case 0xC0178F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C01731.asm:60 CLC
    case 0xC01791: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:61 ADC #32
    case 0xC01792: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/unknown/C0/C01731.asm:61 ADC #32
    // Overlapping static entry reached from 0xC01792.
    case 0xC01794: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C01731.asm:62 JSR UNKNOWN_C0122A
    case 0xC01795: cpu.execute_instruction<0x20>(0x00122A, 3); return true;
    // src/unknown/C0/C01731.asm:63 BRA @UNKNOWN5
    case 0xC01798: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C01731.asm:65 LDA SCREEN_LEFT_X
    case 0xC0179A: cpu.execute_instruction<0xAD>(0x004374, 3); return true;
    // src/unknown/C0/C01731.asm:66 DEC
    case 0xC0179D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:67 STA SCREEN_LEFT_X
    case 0xC0179E: cpu.execute_instruction<0x8D>(0x004374, 3); return true;
    // src/unknown/C0/C01731.asm:68 LDX @VIRTUAL02
    case 0xC017A1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C01731.asm:69 DEC
    case 0xC017A3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:70 JSR UNKNOWN_C0122A
    case 0xC017A4: cpu.execute_instruction<0x20>(0x00122A, 3); return true;
    // src/unknown/C0/C01731.asm:70 JSR UNKNOWN_C0122A
    // Overlapping static entry reached from 0xC017B3.
    case 0xC017A5: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:70 JSR UNKNOWN_C0122A
    // Overlapping static entry reached from 0xC0F4FE.
    case 0xC017A6: cpu.execute_instruction<0x12>(0x0000AD, 2); return true;
    // src/unknown/C0/C01731.asm:72 LDA SCREEN_LEFT_X
    case 0xC017A7: cpu.execute_instruction<0xAD>(0x004374, 3); return true;
    // src/unknown/C0/C01731.asm:72 LDA SCREEN_LEFT_X
    // Overlapping static entry reached from 0xC017A6.
    case 0xC017A8: cpu.execute_instruction<0x74>(0x000043, 2); return true;
    // src/unknown/C0/C01731.asm:73 SEC
    case 0xC017AA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:74 SBC @LOCAL00
    case 0xC017AB: cpu.execute_instruction<0xE5>(0x00000E, 2); return true;
    // src/unknown/C0/C01731.asm:75 BNE @UNKNOWN3
    case 0xC017AD: cpu.execute_instruction<0xD0>(0x0000D4, 2); return true;
    // src/unknown/C0/C01731.asm:76 BRA @UNKNOWN8
    case 0xC017AF: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/unknown/C0/C01731.asm:78 AND #$8000
    case 0xC017B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C01731.asm:78 AND #$8000
    // Overlapping static entry reached from 0xC017B1.
    case 0xC017B3: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C01731.asm:79 BEQ @UNKNOWN7
    case 0xC017B4: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C01731.asm:80 LDA SCREEN_TOP_Y
    case 0xC017B6: cpu.execute_instruction<0xAD>(0x004376, 3); return true;
    // src/unknown/C0/C01731.asm:81 INC
    case 0xC017B9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:82 STA SCREEN_TOP_Y
    case 0xC017BA: cpu.execute_instruction<0x8D>(0x004376, 3); return true;
    // src/unknown/C0/C01731.asm:83 CLC
    case 0xC017BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:84 ADC #28
    case 0xC017BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00001C, 3); return true;
    // src/unknown/C0/C01731.asm:84 ADC #28
    // Overlapping static entry reached from 0xC017BE.
    case 0xC017C0: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C01731.asm:85 TAX
    case 0xC017C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:86 LDA @LOCAL00
    case 0xC017C2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C01731.asm:87 JSR UNKNOWN_C01181
    case 0xC017C4: cpu.execute_instruction<0x20>(0x001181, 3); return true;
    // src/unknown/C0/C01731.asm:88 BRA @UNKNOWN8
    case 0xC017C7: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C01731.asm:90 LDX SCREEN_TOP_Y
    case 0xC017C9: cpu.execute_instruction<0xAE>(0x004376, 3); return true;
    // src/unknown/C0/C01731.asm:91 DEX
    case 0xC017CC: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:92 STX SCREEN_TOP_Y
    case 0xC017CD: cpu.execute_instruction<0x8E>(0x004376, 3); return true;
    // src/unknown/C0/C01731.asm:93 DEX
    case 0xC017D0: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:94 LDA @LOCAL00
    case 0xC017D1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C01731.asm:95 JSR UNKNOWN_C01181
    case 0xC017D3: cpu.execute_instruction<0x20>(0x001181, 3); return true;
    // src/unknown/C0/C01731.asm:97 LDA SCREEN_TOP_Y
    case 0xC017D6: cpu.execute_instruction<0xAD>(0x004376, 3); return true;
    // src/unknown/C0/C01731.asm:98 SEC
    case 0xC017D9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:99 SBC @VIRTUAL02
    case 0xC017DA: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C01731.asm:100 BNE @UNKNOWN6
    case 0xC017DC: cpu.execute_instruction<0xD0>(0x0000D3, 2); return true;
    // src/unknown/C0/C01731.asm:101 LDY @LOCAL01
    case 0xC017DE: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C01731.asm:102 STY BG12_POSITION_X_COPY
    case 0xC017E0: cpu.execute_instruction<0x8C>(0x004386, 3); return true;
    // src/unknown/C0/C01731.asm:103 LDA @VIRTUAL04
    case 0xC017E3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01731.asm:104 STA BG12_POSITION_Y_COPY
    case 0xC017E5: cpu.execute_instruction<0x8D>(0x004388, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C01731.asm:105 END_C_FUNCTION
    case 0xC017E8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C01731.asm:105 END_C_FUNCTION
    case 0xC017E9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C017EA.asm (unresolved).
bool execute_unresolved_c0_c017ea_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C017EA.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC017EA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C017EA.asm:8 END_STACK_VARS
    case 0xC017EC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C017EA.asm:8 END_STACK_VARS
    case 0xC017ED: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C017EA.asm:8 END_STACK_VARS
    case 0xC017EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C017EA.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC017EE.
    case 0xC017F0: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C017EA.asm:8 END_STACK_VARS
    case 0xC017F1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:9 LDY #0
    case 0xC017F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C017EA.asm:9 LDY #0
    // Overlapping static entry reached from 0xC017F2.
    case 0xC017F4: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C0/C017EA.asm:10 TYA
    case 0xC017F5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:11 STA @LOCAL01
    case 0xC017F6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:12 LDX PAD_STATE
    case 0xC017F8: cpu.execute_instruction<0xAE>(0x000065, 3); return true;
    // src/unknown/C0/C017EA.asm:13 LDA PAD_PRESS
    case 0xC017FB: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C0/C017EA.asm:14 STA @VIRTUAL02
    case 0xC017FE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C017EA.asm:15 AND #PAD::START_BUTTON
    case 0xC01800: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/unknown/C0/C017EA.asm:15 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC01800.
    case 0xC01802: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:16 BEQ @UNKNOWN0
    case 0xC01803: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C017EA.asm:16 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC01802.
    case 0xC01804: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000AD, 2); else cpu.execute_instruction<0x09>(0x0084AD, 3); return true;
    // src/unknown/C0/C017EA.asm:17 LDA UNKNOWN_7E4384
    case 0xC01805: cpu.execute_instruction<0xAD>(0x004384, 3); return true;
    // src/unknown/C0/C017EA.asm:17 LDA UNKNOWN_7E4384
    // Overlapping static entry reached from 0xC01804.
    case 0xC01806: cpu.execute_instruction<0x84>(0x000043, 2); return true;
    // src/unknown/C0/C017EA.asm:17 LDA UNKNOWN_7E4384
    // Overlapping static entry reached from 0xC01804.
    case 0xC01807: cpu.execute_instruction<0x43>(0x000049, 2); return true;
    // src/unknown/C0/C017EA.asm:18 EOR #$0001
    case 0xC01808: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000001, 2); else cpu.execute_instruction<0x49>(0x000001, 3); return true;
    // src/unknown/C0/C017EA.asm:18 EOR #$0001
    // Overlapping static entry reached from 0xC01807.
    case 0xC01809: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C017EA.asm:18 EOR #$0001
    // Overlapping static entry reached from 0xC01808.
    case 0xC0180A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C017EA.asm:19 STA UNKNOWN_7E4384
    case 0xC0180B: cpu.execute_instruction<0x8D>(0x004384, 3); return true;
    // src/unknown/C0/C017EA.asm:21 TXA
    case 0xC0180E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:22 AND #PAD::DOWN
    case 0xC0180F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/unknown/C0/C017EA.asm:22 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC0180F.
    case 0xC01811: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:23 BEQ @UNKNOWN1
    case 0xC01812: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C017EA.asm:23 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC01811.
    case 0xC01813: cpu.execute_instruction<0x05>(0x0000A0, 2); return true;
    // src/unknown/C0/C017EA.asm:24 LDY #1
    case 0xC01814: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C017EA.asm:24 LDY #1
    // Overlapping static entry reached from 0xC01813.
    case 0xC01815: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C017EA.asm:24 LDY #1
    // Overlapping static entry reached from 0xC01814.
    case 0xC01816: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C017EA.asm:25 BRA @UNKNOWN2
    case 0xC01817: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C017EA.asm:27 TXA
    case 0xC01819: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:28 AND #PAD::UP
    case 0xC0181A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/unknown/C0/C017EA.asm:28 AND #PAD::UP
    // Overlapping static entry reached from 0xC0181A.
    case 0xC0181C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:29 BEQ @UNKNOWN2
    case 0xC0181D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C017EA.asm:30 LDY #.LOWORD(-1)
    case 0xC0181F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C017EA.asm:30 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0181F.
    case 0xC01821: cpu.execute_instruction<0xFF>(0x00298A, 4); return true;
    // src/unknown/C0/C017EA.asm:32 TXA
    case 0xC01822: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:33 AND #PAD::LEFT
    case 0xC01823: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/C0/C017EA.asm:33 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC01823.
    case 0xC01825: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:34 BEQ @UNKNOWN3
    case 0xC01826: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C017EA.asm:35 LDA #.LOWORD(-1)
    case 0xC01828: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C017EA.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC01828.
    case 0xC0182A: cpu.execute_instruction<0xFF>(0x801085, 4); return true;
    // src/unknown/C0/C017EA.asm:36 STA @LOCAL01
    case 0xC0182B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:37 BRA @UNKNOWN4
    case 0xC0182D: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C0/C017EA.asm:37 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC0182A.
    case 0xC0182E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:39 TXA
    case 0xC0182F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:40 AND #PAD::RIGHT
    case 0xC01830: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/C0/C017EA.asm:40 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC01830.
    case 0xC01832: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:41 BEQ @UNKNOWN4
    case 0xC01833: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C017EA.asm:41 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xC01832.
    case 0xC01834: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/unknown/C0/C017EA.asm:42 LDA #1
    case 0xC01835: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C017EA.asm:42 LDA #1
    // Overlapping static entry reached from 0xC01834.
    case 0xC01836: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C017EA.asm:42 LDA #1
    // Overlapping static entry reached from 0xC01835.
    case 0xC01837: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C017EA.asm:43 STA @LOCAL01
    case 0xC01838: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:45 TXA
    case 0xC0183A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:46 AND #PAD::L_BUTTON
    case 0xC0183B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/unknown/C0/C017EA.asm:46 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xC0183B.
    case 0xC0183D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:47 BEQ @UNKNOWN5
    case 0xC0183E: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C017EA.asm:48 LDA @LOCAL01
    case 0xC01840: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:49 ASL
    case 0xC01842: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:50 ASL
    case 0xC01843: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:51 STA @LOCAL01
    case 0xC01844: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:52 TYA
    case 0xC01846: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:53 ASL
    case 0xC01847: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:54 ASL
    case 0xC01848: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:55 TAY
    case 0xC01849: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:57 TXA
    case 0xC0184A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:58 AND #PAD::R_BUTTON
    case 0xC0184B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/unknown/C0/C017EA.asm:58 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xC0184B.
    case 0xC0184D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:59 BEQ @UNKNOWN6
    case 0xC0184E: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C017EA.asm:60 LDA @LOCAL01
    case 0xC01850: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:61 ASL
    case 0xC01852: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:62 STA @LOCAL01
    case 0xC01853: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:63 TYA
    case 0xC01855: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:64 ASL
    case 0xC01856: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:65 TAY
    case 0xC01857: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:67 TXA
    case 0xC01858: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:68 AND #PAD::X_BUTTON
    case 0xC01859: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/C0/C017EA.asm:68 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC01859.
    case 0xC0185B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:69 BEQ @UNKNOWN7
    case 0xC0185C: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C017EA.asm:70 LDA @LOCAL01
    case 0xC0185E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:71 ASL
    case 0xC01860: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:72 STA @LOCAL01
    case 0xC01861: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:73 TYA
    case 0xC01863: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:74 ASL
    case 0xC01864: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:75 TAY
    case 0xC01865: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:77 TXA
    case 0xC01866: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:78 AND #PAD::Y_BUTTON
    case 0xC01867: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/C0/C017EA.asm:78 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xC01867.
    case 0xC01869: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:79 BNE @UNKNOWN8
    case 0xC0186A: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C017EA.asm:80 LDA @LOCAL00
    case 0xC0186C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C017EA.asm:81 STA @VIRTUAL04
    case 0xC0186E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C017EA.asm:82 AND #$0080
    case 0xC01870: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C0/C017EA.asm:82 AND #$0080
    // Overlapping static entry reached from 0xC01870.
    case 0xC01872: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:83 BEQ @UNKNOWN8
    case 0xC01873: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C017EA.asm:84 LDY #0
    case 0xC01875: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C017EA.asm:84 LDY #0
    // Overlapping static entry reached from 0xC01875.
    case 0xC01877: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C0/C017EA.asm:85 TYA
    case 0xC01878: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:86 STA @LOCAL01
    case 0xC01879: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:88 LDA @LOCAL01
    case 0xC0187B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:89 CLC
    case 0xC0187D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:90 ADC SCREEN_X_PIXELS
    case 0xC0187E: cpu.execute_instruction<0x6D>(0x004380, 3); return true;
    // src/unknown/C0/C017EA.asm:91 TAX
    case 0xC01881: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:92 STX SCREEN_X_PIXELS
    case 0xC01882: cpu.execute_instruction<0x8E>(0x004380, 3); return true;
    // src/unknown/C0/C017EA.asm:93 TYA
    case 0xC01885: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:94 CLC
    case 0xC01886: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:95 ADC SCREEN_Y_PIXELS
    case 0xC01887: cpu.execute_instruction<0x6D>(0x004382, 3); return true;
    // src/unknown/C0/C017EA.asm:96 STA @LOCAL01
    case 0xC0188A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:97 STA SCREEN_Y_PIXELS
    case 0xC0188C: cpu.execute_instruction<0x8D>(0x004382, 3); return true;
    // src/unknown/C0/C017EA.asm:98 CPX SCREEN_X_PIXELS_COPY
    case 0xC0188F: cpu.execute_instruction<0xEC>(0x00437C, 3); return true;
    // src/unknown/C0/C017EA.asm:99 BNE @UNKNOWN9
    case 0xC01892: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C017EA.asm:100 CMP SCREEN_Y_PIXELS_COPY
    case 0xC01894: cpu.execute_instruction<0xCD>(0x00437E, 3); return true;
    // src/unknown/C0/C017EA.asm:101 BEQ @UNKNOWN10
    case 0xC01897: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C0/C017EA.asm:101 BEQ @UNKNOWN10
    // Overlapping static entry reached from 0xC013B1.
    case 0xC01898: cpu.execute_instruction<0x14>(0x0000AD, 2); return true;
    // src/unknown/C0/C017EA.asm:103 LDA SCREEN_Y_PIXELS
    case 0xC01899: cpu.execute_instruction<0xAD>(0x004382, 3); return true;
    // src/unknown/C0/C017EA.asm:103 LDA SCREEN_Y_PIXELS
    // Overlapping static entry reached from 0xC01898.
    case 0xC0189A: cpu.execute_instruction<0x82>(0x003843, 3); return true;
    // src/unknown/C0/C017EA.asm:104 SEC
    case 0xC0189C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:105 SBC #112
    case 0xC0189D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000070, 2); else cpu.execute_instruction<0xE9>(0x000070, 3); return true;
    // src/unknown/C0/C017EA.asm:105 SBC #112
    // Overlapping static entry reached from 0xC0189D.
    case 0xC0189F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C017EA.asm:106 TAX
    case 0xC018A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:107 LDA SCREEN_X_PIXELS
    case 0xC018A1: cpu.execute_instruction<0xAD>(0x004380, 3); return true;
    // src/unknown/C0/C017EA.asm:108 SEC
    case 0xC018A4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:109 SBC #128
    case 0xC018A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C0/C017EA.asm:109 SBC #128
    // Overlapping static entry reached from 0xC018A5.
    case 0xC018A7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C017EA.asm:110 JSR REFRESH_MAP_AT_POSITION
    case 0xC018A8: cpu.execute_instruction<0x20>(0x001558, 3); return true;
    // src/unknown/C0/C017EA.asm:110 JSR REFRESH_MAP_AT_POSITION
    // Overlapping static entry reached from 0xC0EFD7.
    case 0xC018A9: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:110 JSR REFRESH_MAP_AT_POSITION
    // Overlapping static entry reached from 0xC018A9.
    case 0xC018AA: cpu.execute_instruction<0x15>(0x000080, 2); return true;
    // src/unknown/C0/C017EA.asm:111 BRA @UNKNOWN11
    case 0xC018AB: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C0/C017EA.asm:111 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xC018AA.
    case 0xC018AC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:113 LDA @VIRTUAL02
    case 0xC018AD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C017EA.asm:114 AND #$0080
    case 0xC018AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C0/C017EA.asm:114 AND #$0080
    // Overlapping static entry reached from 0xC018AF.
    case 0xC018B1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:115 BEQ @UNKNOWN11
    case 0xC018B2: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/unknown/C0/C017EA.asm:116 LDA #.LOWORD(-1)
    case 0xC018B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C017EA.asm:116 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC018B4.
    case 0xC018B6: cpu.execute_instruction<0xFF>(0x43708D, 4); return true;
    // src/unknown/C0/C017EA.asm:117 STA LOADED_MAP_PALETTE
    case 0xC018B7: cpu.execute_instruction<0x8D>(0x004370, 3); return true;
    // src/unknown/C0/C017EA.asm:118 STA LOADED_MAP_TILE_COMBO
    case 0xC018BA: cpu.execute_instruction<0x8D>(0x00436E, 3); return true;
    // src/unknown/C0/C017EA.asm:119 TXA
    case 0xC018BD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:120 AND #$FFF8
    case 0xC018BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/unknown/C0/C017EA.asm:120 AND #$FFF8
    // Overlapping static entry reached from 0xC018BE.
    case 0xC018C0: cpu.execute_instruction<0xFF>(0x43808D, 4); return true;
    // src/unknown/C0/C017EA.asm:121 STA SCREEN_X_PIXELS
    case 0xC018C1: cpu.execute_instruction<0x8D>(0x004380, 3); return true;
    // src/unknown/C0/C017EA.asm:122 LDA @LOCAL01
    case 0xC018C4: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:123 AND #$FFF8
    case 0xC018C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/unknown/C0/C017EA.asm:123 AND #$FFF8
    // Overlapping static entry reached from 0xC018C6.
    case 0xC018C8: cpu.execute_instruction<0xFF>(0x43828D, 4); return true;
    // src/unknown/C0/C017EA.asm:124 STA SCREEN_Y_PIXELS
    case 0xC018C9: cpu.execute_instruction<0x8D>(0x004382, 3); return true;
    // src/unknown/C0/C017EA.asm:125 JSL UNKNOWN_C08726
    case 0xC018CC: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/unknown/C0/C017EA.asm:126 LDA SCREEN_Y_PIXELS
    case 0xC018D0: cpu.execute_instruction<0xAD>(0x004382, 3); return true;
    // src/unknown/C0/C017EA.asm:127 LSR
    case 0xC018D3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:128 LSR
    case 0xC018D4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:129 LSR
    case 0xC018D5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:130 TAX
    case 0xC018D6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:131 LDA SCREEN_X_PIXELS
    case 0xC018D7: cpu.execute_instruction<0xAD>(0x004380, 3); return true;
    // src/unknown/C0/C017EA.asm:132 LSR
    case 0xC018DA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:133 LSR
    case 0xC018DB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:134 LSR
    case 0xC018DC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:135 JSL LOAD_MAP_AT_POSITION
    case 0xC018DD: cpu.execute_instruction<0x22>(0xC013F6, 4); return true;
    // src/unknown/C0/C017EA.asm:136 JSL UNKNOWN_C08744
    case 0xC018E1: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // src/unknown/C0/C017EA.asm:138 LDA SCREEN_X_PIXELS
    case 0xC018E5: cpu.execute_instruction<0xAD>(0x004380, 3); return true;
    // src/unknown/C0/C017EA.asm:139 STA SCREEN_X_PIXELS_COPY
    case 0xC018E8: cpu.execute_instruction<0x8D>(0x00437C, 3); return true;
    // src/unknown/C0/C017EA.asm:140 LDA SCREEN_Y_PIXELS
    case 0xC018EB: cpu.execute_instruction<0xAD>(0x004382, 3); return true;
    // src/unknown/C0/C017EA.asm:141 STA SCREEN_Y_PIXELS_COPY
    case 0xC018EE: cpu.execute_instruction<0x8D>(0x00437E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C017EA.asm:142 END_C_FUNCTION
    case 0xC018F1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C017EA.asm:142 END_C_FUNCTION
    case 0xC018F2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C019E2.asm (unresolved).
bool execute_unresolved_c0_c019e2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C019E2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC019E2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C019E2.asm:7 END_STACK_VARS
    case 0xC019E4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C019E2.asm:7 END_STACK_VARS
    case 0xC019E5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C019E2.asm:7 END_STACK_VARS
    case 0xC019E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C019E2.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC019E6.
    case 0xC019E8: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C019E2.asm:7 END_STACK_VARS
    case 0xC019E9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:8 LDX #0
    case 0xC019EA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C019E2.asm:8 LDX #0
    // Overlapping static entry reached from 0xC019EA.
    case 0xC019EC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C019E2.asm:9 BRA @UNKNOWN1
    case 0xC019ED: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C0/C019E2.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC019EF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C019E2.asm:12 LDA #>-1
    case 0xC019F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C0/C019E2.asm:13 STA LOADED_COLUMNS_Y,X
    case 0xC019F3: cpu.execute_instruction<0x9D>(0x0043C0, 3); return true;
    // src/unknown/C0/C019E2.asm:13 STA LOADED_COLUMNS_Y,X
    // Overlapping static entry reached from 0xC019F1.
    case 0xC019F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000043, 2); else cpu.execute_instruction<0xC0>(0x009D43, 3); return true;
    // src/unknown/C0/C019E2.asm:14 STA LOADED_COLUMNS_X,X
    case 0xC019F6: cpu.execute_instruction<0x9D>(0x0043B0, 3); return true;
    // src/unknown/C0/C019E2.asm:14 STA LOADED_COLUMNS_X,X
    // Overlapping static entry reached from 0xC019F4.
    case 0xC019F7: cpu.execute_instruction<0xB0>(0x000043, 2); return true;
    // src/unknown/C0/C019E2.asm:15 STA LOADED_ROWS_Y,X
    case 0xC019F9: cpu.execute_instruction<0x9D>(0x0043A0, 3); return true;
    // src/unknown/C0/C019E2.asm:16 STA LOADED_ROWS_X,X
    case 0xC019FC: cpu.execute_instruction<0x9D>(0x004390, 3); return true;
    // src/unknown/C0/C019E2.asm:17 INX
    case 0xC019FF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:19 CPX #16
    case 0xC01A00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/unknown/C0/C019E2.asm:19 CPX #16
    // Overlapping static entry reached from 0xC01A00.
    case 0xC01A02: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C019E2.asm:20 BCC @UNKNOWN0
    case 0xC01A03: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/unknown/C0/C019E2.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC01A05: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C019E2.asm:22 LDA BG1_X_POS
    case 0xC01A07: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/C0/C019E2.asm:23 SEC
    case 0xC01A0A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:24 SBC #128
    case 0xC01A0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C0/C019E2.asm:24 SBC #128
    // Overlapping static entry reached from 0xC01A0B.
    case 0xC01A0D: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C019E2.asm:25 LSR
    case 0xC01A0E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:26 LSR
    case 0xC01A0F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:27 LSR
    case 0xC01A10: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:28 STA @VIRTUAL04
    case 0xC01A11: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C019E2.asm:29 LDA BG1_Y_POS
    case 0xC01A13: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/unknown/C0/C019E2.asm:30 SEC
    case 0xC01A16: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:31 SBC #128
    case 0xC01A17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C0/C019E2.asm:31 SBC #128
    // Overlapping static entry reached from 0xC01A17.
    case 0xC01A19: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C019E2.asm:32 LSR
    case 0xC01A1A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:33 LSR
    case 0xC01A1B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:34 LSR
    case 0xC01A1C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:35 STA @VIRTUAL02
    case 0xC01A1D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C019E2.asm:36 STA @LOCAL01
    case 0xC01A1F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C019E2.asm:37 LDY #0
    case 0xC01A21: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C019E2.asm:37 LDY #0
    // Overlapping static entry reached from 0xC01A21.
    case 0xC01A23: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C019E2.asm:38 STY @LOCAL00
    case 0xC01A24: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C019E2.asm:39 BRA @UNKNOWN3
    case 0xC01A26: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C019E2.asm:41 LDA @LOCAL01
    case 0xC01A28: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C019E2.asm:42 STA @VIRTUAL02
    case 0xC01A2A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C019E2.asm:43 STY @VIRTUAL02
    case 0xC01A2C: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C019E2.asm:44 CLC
    case 0xC01A2E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:45 ADC @VIRTUAL02
    case 0xC01A2F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C019E2.asm:46 TAX
    case 0xC01A31: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:47 LDA @VIRTUAL04
    case 0xC01A32: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C019E2.asm:48 JSR LOAD_MAP_ROW
    case 0xC01A34: cpu.execute_instruction<0x20>(0x000AC5, 3); return true;
    // src/unknown/C0/C019E2.asm:49 LDY @LOCAL00
    case 0xC01A37: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C019E2.asm:50 INY
    case 0xC01A39: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:51 STY @LOCAL00
    case 0xC01A3A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C019E2.asm:53 CPY #60
    case 0xC01A3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00003C, 2); else cpu.execute_instruction<0xC0>(0x00003C, 3); return true;
    // src/unknown/C0/C019E2.asm:53 CPY #60
    // Overlapping static entry reached from 0xC01A3C.
    case 0xC01A3E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C019E2.asm:54 BCC @UNKNOWN2
    case 0xC01A3F: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C0/C019E2.asm:55 LDY #0
    case 0xC01A41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C019E2.asm:55 LDY #0
    // Overlapping static entry reached from 0xC01A41.
    case 0xC01A43: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C019E2.asm:56 STY @LOCAL00
    case 0xC01A44: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C019E2.asm:57 BRA @UNKNOWN5
    case 0xC01A46: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C019E2.asm:59 LDA @LOCAL01
    case 0xC01A48: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C019E2.asm:60 STA @VIRTUAL02
    case 0xC01A4A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C019E2.asm:61 STY @VIRTUAL02
    case 0xC01A4C: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C019E2.asm:62 CLC
    case 0xC01A4E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:63 ADC @VIRTUAL02
    case 0xC01A4F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C019E2.asm:64 TAX
    case 0xC01A51: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:65 LDA @VIRTUAL04
    case 0xC01A52: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C019E2.asm:66 JSR LOAD_COLLISION_ROW
    case 0xC01A54: cpu.execute_instruction<0x20>(0x000CF3, 3); return true;
    // src/unknown/C0/C019E2.asm:67 LDY @LOCAL00
    case 0xC01A57: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C019E2.asm:68 INY
    case 0xC01A59: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:69 STY @LOCAL00
    case 0xC01A5A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C019E2.asm:71 CPY #60
    case 0xC01A5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00003C, 2); else cpu.execute_instruction<0xC0>(0x00003C, 3); return true;
    // src/unknown/C0/C019E2.asm:71 CPY #60
    // Overlapping static entry reached from 0xC01A5C.
    case 0xC01A5E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C019E2.asm:72 BCC @UNKNOWN4
    case 0xC01A5F: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C019E2.asm:73 END_C_FUNCTION
    case 0xC01A61: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C019E2.asm:73 END_C_FUNCTION
    case 0xC01A62: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01A63.asm (unresolved).
bool execute_unresolved_c0_c01a63_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C01A63.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC01A63: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C01A63.asm:4 JSR UNKNOWN_C00E16
    case 0xC01A65: cpu.execute_instruction<0x20>(0x000E16, 3); return true;
    // src/unknown/C0/C01A63.asm:5 RTL
    case 0xC01A68: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01A86.asm (unresolved).
bool execute_unresolved_c0_c01a86_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C01A86.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC01A86: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C01A86.asm:4 LDX #$0000
    case 0xC01A88: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C01A86.asm:4 LDX #$0000
    // Overlapping static entry reached from 0xC01A88.
    case 0xC01A8A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C01A86.asm:5 BRA @UNKNOWN1
    case 0xC01A8B: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C01A86.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC01A8D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01A86.asm:8 LDA #$00FF
    case 0xC01A8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C0/C01A86.asm:9 STA OVERWORLD_SPRITEMAPS,X
    case 0xC01A91: cpu.execute_instruction<0x9D>(0x00467E, 3); return true;
    // src/unknown/C0/C01A86.asm:9 STA OVERWORLD_SPRITEMAPS,X
    // Overlapping static entry reached from 0xC01A8F.
    case 0xC01A92: cpu.execute_instruction<0x7E>(0x00E846, 3); return true;
    // src/unknown/C0/C01A86.asm:10 INX
    case 0xC01A94: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C01A86.asm:12 CPX #$0380
    case 0xC01A95: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x000380, 3); return true;
    // src/unknown/C0/C01A86.asm:12 CPX #$0380
    // Overlapping static entry reached from 0xC01A95.
    case 0xC01A97: cpu.execute_instruction<0x03>(0x000090, 2); return true;
    // src/unknown/C0/C01A86.asm:13 BCC @UNKNOWN0
    case 0xC01A98: cpu.execute_instruction<0x90>(0x0000F3, 2); return true;
    // src/unknown/C0/C01A86.asm:13 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC01A97.
    case 0xC01A99: cpu.execute_instruction<0xF3>(0x0000C2, 2); return true;
    // src/unknown/C0/C01A86.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xC01A9A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01A86.asm:14 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC01A99.
    case 0xC01A9B: cpu.execute_instruction<0x20>(0x00C26B, 3); return true;
    // src/unknown/C0/C01A86.asm:15 RTL
    case 0xC01A9C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01B15.asm (unresolved).
bool execute_unresolved_c0_c01b15_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01B15.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01B15: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01B15.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC01B12.
    case 0xC01B16: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C01B15.asm:8 END_STACK_VARS
    case 0xC01B17: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C01B15.asm:8 END_STACK_VARS
    case 0xC01B18: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C01B15.asm:8 END_STACK_VARS
    case 0xC01B19: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01B15.asm:8 END_STACK_VARS
    case 0xC01B1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01B15.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC01B1A.
    case 0xC01B1C: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C01B15.asm:8 END_STACK_VARS
    case 0xC01B1D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C01B15.asm:8 END_STACK_VARS
    case 0xC01B1E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:9 CMP #.LOWORD(OVERWORLD_SPRITEMAPS)
    case 0xC01B1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00007E, 2); else cpu.execute_instruction<0xC9>(0x00467E, 3); return true;
    // src/unknown/C0/C01B15.asm:9 CMP #.LOWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01B1C.
    case 0xC01B20: cpu.execute_instruction<0x7E>(0x009046, 3); return true;
    // src/unknown/C0/C01B15.asm:9 CMP #.LOWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01B1F.
    case 0xC01B21: cpu.execute_instruction<0x46>(0x000090, 2); return true;
    // src/unknown/C0/C01B15.asm:10 BCC @UNKNOWN3
    case 0xC01B22: cpu.execute_instruction<0x90>(0x000070, 2); return true;
    // src/unknown/C0/C01B15.asm:10 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC01B21.
    case 0xC01B23: cpu.execute_instruction<0x70>(0x0000C9, 2); return true;
    // src/unknown/C0/C01B15.asm:11 CMP #.LOWORD(OVERWORLD_SPRITEMAPS) + 179 * .SIZEOF(spritemap) + 1
    case 0xC01B24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FE, 2); else cpu.execute_instruction<0xC9>(0x0049FE, 3); return true;
    // src/unknown/C0/C01B15.asm:11 CMP #.LOWORD(OVERWORLD_SPRITEMAPS) + 179 * .SIZEOF(spritemap) + 1
    // Overlapping static entry reached from 0xC01B23.
    case 0xC01B25: cpu.execute_instruction<0xFE>(0x00F049, 3); return true;
    // src/unknown/C0/C01B15.asm:11 CMP #.LOWORD(OVERWORLD_SPRITEMAPS) + 179 * .SIZEOF(spritemap) + 1
    // Overlapping static entry reached from 0xC01B24.
    case 0xC01B26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000F0, 2); else cpu.execute_instruction<0x49>(0x0002F0, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C01B15.asm:12 BGT @UNKNOWN3
    case 0xC01B27: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C01B15.asm:12 BGT @UNKNOWN3
    // Overlapping static entry reached from 0xC01B26.
    case 0xC01B28: cpu.execute_instruction<0x02>(0x0000B0, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C01B15.asm:12 BGT @UNKNOWN3
    case 0xC01B29: cpu.execute_instruction<0xB0>(0x000069, 2); return true;
    // src/unknown/C0/C01B15.asm:13 SEC
    case 0xC01B2B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:14 SBC #.LOWORD(OVERWORLD_SPRITEMAPS)
    case 0xC01B2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00007E, 2); else cpu.execute_instruction<0xE9>(0x00467E, 3); return true;
    // src/unknown/C0/C01B15.asm:14 SBC #.LOWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01B2C.
    case 0xC01B2E: cpu.execute_instruction<0x46>(0x000085, 2); return true;
    // src/unknown/C0/C01B15.asm:15 STA @LOCAL01
    case 0xC01B2F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:15 STA @LOCAL01
    // Overlapping static entry reached from 0xC01B2E.
    case 0xC01B30: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/unknown/C0/C01B15.asm:16 LDA #0
    case 0xC01B31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C01B15.asm:16 LDA #0
    // Overlapping static entry reached from 0xC01B30.
    case 0xC01B32: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C01B15.asm:16 LDA #0
    // Overlapping static entry reached from 0xC01B31.
    case 0xC01B33: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C01B15.asm:17 STA @VIRTUAL02
    case 0xC01B34: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01B15.asm:18 BRA @UNKNOWN2
    case 0xC01B36: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/unknown/C0/C01B15.asm:20 LDA @LOCAL01
    case 0xC01B38: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:21 CLC
    case 0xC01B3A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:22 ADC #.LOWORD(OVERWORLD_SPRITEMAPS + spritemap::special_flags)
    case 0xC01B3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000082, 2); else cpu.execute_instruction<0x69>(0x004682, 3); return true;
    // src/unknown/C0/C01B15.asm:22 ADC #.LOWORD(OVERWORLD_SPRITEMAPS + spritemap::special_flags)
    // Overlapping static entry reached from 0xC01B3B.
    case 0xC01B3D: cpu.execute_instruction<0x46>(0x0000AA, 2); return true;
    // src/unknown/C0/C01B15.asm:23 TAX
    case 0xC01B3E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:24 STX @LOCAL00
    case 0xC01B3F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C01B15.asm:25 LDA __BSS_START__,X
    case 0xC01B41: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C01B15.asm:26 AND #$00FF
    case 0xC01B44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C01B15.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC01B44.
    case 0xC01B46: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C01B15.asm:27 TAY
    case 0xC01B47: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:28 LDA @LOCAL01
    case 0xC01B48: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:29 TAX
    case 0xC01B4A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC01B4B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:31 LDA #>-1
    case 0xC01B4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C0/C01B15.asm:32 STA OVERWORLD_SPRITEMAPS + spritemap::y_offset,X
    case 0xC01B4F: cpu.execute_instruction<0x9D>(0x00467E, 3); return true;
    // src/unknown/C0/C01B15.asm:32 STA OVERWORLD_SPRITEMAPS + spritemap::y_offset,X
    // Overlapping static entry reached from 0xC01B4D.
    case 0xC01B50: cpu.execute_instruction<0x7E>(0x00C246, 3); return true;
    // src/unknown/C0/C01B15.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC01B52: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:33 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC01B50.
    case 0xC01B53: cpu.execute_instruction<0x20>(0x0010A5, 3); return true;
    // src/unknown/C0/C01B15.asm:34 LDA @LOCAL01
    case 0xC01B54: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:35 TAX
    case 0xC01B56: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC01B57: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:37 LDA #>-1
    case 0xC01B59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C0/C01B15.asm:38 STA OVERWORLD_SPRITEMAPS + spritemap::tile,X
    case 0xC01B5B: cpu.execute_instruction<0x9D>(0x00467F, 3); return true;
    // src/unknown/C0/C01B15.asm:38 STA OVERWORLD_SPRITEMAPS + spritemap::tile,X
    // Overlapping static entry reached from 0xC01B59.
    case 0xC01B5C: cpu.execute_instruction<0x7F>(0x20C246, 4); return true;
    // src/unknown/C0/C01B15.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC01B5E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:40 LDA @LOCAL01
    case 0xC01B60: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:41 TAX
    case 0xC01B62: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC01B63: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:43 LDA #>-1
    case 0xC01B65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C0/C01B15.asm:44 STA OVERWORLD_SPRITEMAPS + spritemap::flags,X
    case 0xC01B67: cpu.execute_instruction<0x9D>(0x004680, 3); return true;
    // src/unknown/C0/C01B15.asm:44 STA OVERWORLD_SPRITEMAPS + spritemap::flags,X
    // Overlapping static entry reached from 0xC01B65.
    case 0xC01B68: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C0/C01B15.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC01B6A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:46 LDA @LOCAL01
    case 0xC01B6C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:47 TAX
    case 0xC01B6E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC01B6F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:49 LDA #>-1
    case 0xC01B71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C0/C01B15.asm:50 STA OVERWORLD_SPRITEMAPS + spritemap::x_offset,X
    case 0xC01B73: cpu.execute_instruction<0x9D>(0x004681, 3); return true;
    // src/unknown/C0/C01B15.asm:50 STA OVERWORLD_SPRITEMAPS + spritemap::x_offset,X
    // Overlapping static entry reached from 0xC01B71.
    case 0xC01B74: cpu.execute_instruction<0x81>(0x000046, 2); return true;
    // src/unknown/C0/C01B15.asm:51 LDX @LOCAL00 ;address was precalculated because it was also being read from
    case 0xC01B76: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C01B15.asm:52 STA __BSS_START__,X
    case 0xC01B78: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C01B15.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC01B7B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:54 LDA @LOCAL01
    case 0xC01B7D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:55 CLC
    case 0xC01B7F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:56 ADC #.SIZEOF(spritemap)
    case 0xC01B80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/unknown/C0/C01B15.asm:56 ADC #.SIZEOF(spritemap)
    // Overlapping static entry reached from 0xC01B80.
    case 0xC01B82: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C01B15.asm:57 STA @LOCAL01
    case 0xC01B83: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:58 TYA
    case 0xC01B85: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:59 AND #128
    case 0xC01B86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C0/C01B15.asm:59 AND #128
    // Overlapping static entry reached from 0xC01B86.
    case 0xC01B88: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C01B15.asm:60 BEQ @UNKNOWN1
    case 0xC01B89: cpu.execute_instruction<0xF0>(0x0000AD, 2); return true;
    // src/unknown/C0/C01B15.asm:61 INC @VIRTUAL02
    case 0xC01B8B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C01B15.asm:63 LDA @VIRTUAL02
    case 0xC01B8D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C01B15.asm:64 CMP #2
    case 0xC01B8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C01B15.asm:64 CMP #2
    // Overlapping static entry reached from 0xC01B8F.
    case 0xC01B91: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C01B15.asm:65 BCC @UNKNOWN1
    case 0xC01B92: cpu.execute_instruction<0x90>(0x0000A4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C01B15.asm:67 END_C_FUNCTION
    case 0xC01B94: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C01B15.asm:67 END_C_FUNCTION
    case 0xC01B95: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01B96.asm (unresolved).
bool execute_unresolved_c0_c01b96_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01B96.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01B96: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C01B96.asm:11 END_STACK_VARS
    case 0xC01B98: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C01B96.asm:11 END_STACK_VARS
    case 0xC01B99: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C01B96.asm:11 END_STACK_VARS
    case 0xC01B9A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01B96.asm:11 END_STACK_VARS
    case 0xC01B9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01B96.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC01B9B.
    case 0xC01B9D: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C01B96.asm:11 END_STACK_VARS
    case 0xC01B9E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C01B96.asm:11 END_STACK_VARS
    case 0xC01B9F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:12 STX @VIRTUAL04
    case 0xC01BA0: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C01B96.asm:12 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC01B9D.
    case 0xC01BA1: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C0/C01B96.asm:13 STA @VIRTUAL02
    case 0xC01BA2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:13 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC01BA1.
    case 0xC01BA3: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C0/C01B96.asm:14 STA @LOCAL02
    case 0xC01BA4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C01B96.asm:15 LDY #0
    case 0xC01BA6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C01B96.asm:15 LDY #0
    // Overlapping static entry reached from 0xC01BA6.
    case 0xC01BA8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C01B96.asm:16 BRA @UNKNOWN6
    case 0xC01BA9: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // src/unknown/C0/C01B96.asm:18 LDA #0
    case 0xC01BAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C01B96.asm:18 LDA #0
    // Overlapping static entry reached from 0xC01BAB.
    case 0xC01BAD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C01B96.asm:19 STA @LOCAL01
    case 0xC01BAE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C01B96.asm:20 BRA @UNKNOWN2
    case 0xC01BB0: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C01B96.asm:22 STA @VIRTUAL02
    case 0xC01BB2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:23 TYA
    case 0xC01BB4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:24 CLC
    case 0xC01BB5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:25 ADC @VIRTUAL02
    case 0xC01BB6: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:26 TAX
    case 0xC01BB8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:27 LDA SPRITE_VRAM_TABLE,X
    case 0xC01BB9: cpu.execute_instruction<0xBD>(0x004A00, 3); return true;
    // src/unknown/C0/C01B96.asm:28 AND #$00FF
    case 0xC01BBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C01B96.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC01BBC.
    case 0xC01BBE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C01B96.asm:29 BNE @UNKNOWN5
    case 0xC01BBF: cpu.execute_instruction<0xD0>(0x000036, 2); return true;
    // src/unknown/C0/C01B96.asm:30 LDA @LOCAL01
    case 0xC01BC1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C01B96.asm:31 INC
    case 0xC01BC3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:32 STA @LOCAL01
    case 0xC01BC4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C01B96.asm:34 LDX @LOCAL02
    case 0xC01BC6: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C01B96.asm:35 STX @VIRTUAL02
    case 0xC01BC8: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:36 CMP @VIRTUAL02
    case 0xC01BCA: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:37 BCC @UNKNOWN1
    case 0xC01BCC: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/unknown/C0/C01B96.asm:38 LDA #0
    case 0xC01BCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C01B96.asm:38 LDA #0
    // Overlapping static entry reached from 0xC01BCE.
    case 0xC01BD0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C01B96.asm:39 STA @LOCAL00
    case 0xC01BD1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C01B96.asm:40 BRA @UNKNOWN4
    case 0xC01BD3: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C0/C01B96.asm:42 STA @VIRTUAL02
    case 0xC01BD5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:43 TYA
    case 0xC01BD7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:44 CLC
    case 0xC01BD8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:45 ADC @VIRTUAL02
    case 0xC01BD9: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:46 TAX
    case 0xC01BDB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:47 LDA @VIRTUAL04
    case 0xC01BDC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01B96.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC01BDE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01B96.asm:49 ORA #$0080
    case 0xC01BE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x009D80, 3); return true;
    // src/unknown/C0/C01B96.asm:50 STA SPRITE_VRAM_TABLE,X
    case 0xC01BE2: cpu.execute_instruction<0x9D>(0x004A00, 3); return true;
    // src/unknown/C0/C01B96.asm:50 STA SPRITE_VRAM_TABLE,X
    // Overlapping static entry reached from 0xC01BE0.
    case 0xC01BE3: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C01B96.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC01BE5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01B96.asm:52 LDA @LOCAL00
    case 0xC01BE7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C01B96.asm:53 INC
    case 0xC01BE9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:54 STA @LOCAL00
    case 0xC01BEA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C01B96.asm:56 LDX @LOCAL02
    case 0xC01BEC: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C01B96.asm:57 STX @VIRTUAL02
    case 0xC01BEE: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:58 CMP @VIRTUAL02
    case 0xC01BF0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:59 BCC @UNKNOWN3
    case 0xC01BF2: cpu.execute_instruction<0x90>(0x0000E1, 2); return true;
    // src/unknown/C0/C01B96.asm:60 TYA
    case 0xC01BF4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:61 BRA @UNKNOWN7
    case 0xC01BF5: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C0/C01B96.asm:63 TXY
    case 0xC01BF7: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:64 INY
    case 0xC01BF8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:66 LDA @LOCAL02
    case 0xC01BF9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C01B96.asm:67 STA @VIRTUAL02
    case 0xC01BFB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:68 LDA #88
    case 0xC01BFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x000058, 3); return true;
    // src/unknown/C0/C01B96.asm:68 LDA #88
    // Overlapping static entry reached from 0xC01BFD.
    case 0xC01BFF: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C0/C01B96.asm:69 SEC
    case 0xC01C00: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:70 SBC @VIRTUAL02
    case 0xC01C01: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:71 STA @VIRTUAL02
    case 0xC01C03: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:72 TYA
    case 0xC01C05: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:73 CMP @VIRTUAL02
    case 0xC01C06: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C01B96.asm:74 BLTEQ @UNKNOWN0
    case 0xC01C08: cpu.execute_instruction<0x90>(0x0000A1, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C01B96.asm:74 BLTEQ @UNKNOWN0
    case 0xC01C0A: cpu.execute_instruction<0xF0>(0x00009F, 2); return true;
    // src/unknown/C0/C01B96.asm:75 LDA #.LOWORD(-253)
    case 0xC01C0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x00FF03, 3); return true;
    // src/unknown/C0/C01B96.asm:75 LDA #.LOWORD(-253)
    // Overlapping static entry reached from 0xC01C0C.
    case 0xC01C0E: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C01B96.asm:77 END_C_FUNCTION
    case 0xC01C0F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C01B96.asm:77 END_C_FUNCTION
    case 0xC01C10: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01C52.asm (unresolved).
bool execute_unresolved_c0_c01c52_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01C52.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01C52: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C01C52.asm:18 END_STACK_VARS
    case 0xC01C54: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C01C52.asm:18 END_STACK_VARS
    case 0xC01C55: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C01C52.asm:18 END_STACK_VARS
    case 0xC01C56: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01C52.asm:18 END_STACK_VARS
    case 0xC01C57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01C52.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC01C57.
    case 0xC01C59: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C01C52.asm:18 END_STACK_VARS
    case 0xC01C5A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C01C52.asm:18 END_STACK_VARS
    case 0xC01C5B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:28 STY @LOCAL07
    case 0xC01C5C: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C0/C01C52.asm:28 STY @LOCAL07
    // Overlapping static entry reached from 0xC01C59.
    case 0xC01C5D: cpu.execute_instruction<0x1C>(0x001A86, 3); return true;
    // src/unknown/C0/C01C52.asm:29 STX @LOCAL06
    case 0xC01C5E: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C01C52.asm:30 STA @TMP2
    case 0xC01C60: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:31 INC
    case 0xC01C62: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:32 AND #$FFFE
    case 0xC01C63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/unknown/C0/C01C52.asm:32 AND #$FFFE
    // Overlapping static entry reached from 0xC01C63.
    case 0xC01C65: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/unknown/C0/C01C52.asm:33 STA @VIRTUAL02
    case 0xC01C66: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01C52.asm:34 LDA @LOCAL06
    case 0xC01C68: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C01C52.asm:34 LDA @LOCAL06
    // Overlapping static entry reached from 0xC01C65.
    case 0xC01C69: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:35 INC
    case 0xC01C6A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:36 AND #$FFFE
    case 0xC01C6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/unknown/C0/C01C52.asm:36 AND #$FFFE
    // Overlapping static entry reached from 0xC01C6B.
    case 0xC01C6D: cpu.execute_instruction<0xFF>(0xA41885, 4); return true;
    // src/unknown/C0/C01C52.asm:37 STA @TMP0
    case 0xC01C6E: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C01C52.asm:38 LDY @TMP0
    case 0xC01C70: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C01C52.asm:38 LDY @TMP0
    // Overlapping static entry reached from 0xC01C6D.
    case 0xC01C71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:39 LDA @VIRTUAL02
    case 0xC01C72: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C01C52.asm:40 JSL MULT16
    case 0xC01C74: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C0/C01C52.asm:41 LSR
    case 0xC01C78: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:42 LSR
    case 0xC01C79: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:43 STA @LOCAL04
    case 0xC01C7A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C01C52.asm:44 LDY @LOCAL07
    case 0xC01C7C: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C0/C01C52.asm:45 TYX
    case 0xC01C7E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:46 LDA @LOCAL04
    case 0xC01C7F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C01C52.asm:47 JSL UNKNOWN_C01B96
    case 0xC01C81: cpu.execute_instruction<0x22>(0xC01B96, 4); return true;
    // src/unknown/C0/C01C52.asm:48 STA @LOCAL03
    case 0xC01C85: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C01C52.asm:49 CMP #$7FFF
    case 0xC01C87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x007FFF, 3); return true;
    // src/unknown/C0/C01C52.asm:49 CMP #$7FFF
    // Overlapping static entry reached from 0xC01C87.
    case 0xC01C89: cpu.execute_instruction<0x7F>(0xF00790, 4); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C01C52.asm:50 BLTEQ @UNKNOWN0
    case 0xC01C8A: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C01C52.asm:50 BLTEQ @UNKNOWN0
    case 0xC01C8C: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C01C52.asm:50 BLTEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC01C89.
    case 0xC01C8D: cpu.execute_instruction<0x05>(0x0000A5, 2); return true;
    // src/unknown/C0/C01C52.asm:51 LDA @LOCAL03
    case 0xC01C8E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C01C52.asm:51 LDA @LOCAL03
    // Overlapping static entry reached from 0xC01C8D.
    case 0xC01C8F: cpu.execute_instruction<0x14>(0x00004C, 2); return true;
    // src/unknown/C0/C01C52.asm:52 JMP @UNKNOWN6
    case 0xC01C90: cpu.execute_instruction<0x4C>(0x001D36, 3); return true;
    // src/unknown/C0/C01C52.asm:52 JMP @UNKNOWN6
    // Overlapping static entry reached from 0xC01C8F.
    case 0xC01C91: cpu.execute_instruction<0x36>(0x00001D, 2); return true;
    // src/unknown/C0/C01C52.asm:54 LDA @VIRTUAL02
    case 0xC01C93: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C01C52.asm:55 CMP @TMP2
    case 0xC01C95: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:56 BNE @UNKNOWN1
    case 0xC01C97: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C0/C01C52.asm:57 LDA @TMP0
    case 0xC01C99: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C01C52.asm:58 CMP @LOCAL06
    case 0xC01C9B: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C01C52.asm:59 BEQL @UNKNOWN5
    case 0xC01C9D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C01C52.asm:59 BEQL @UNKNOWN5
    case 0xC01C9F: cpu.execute_instruction<0x4C>(0x001D34, 3); return true;
    // src/unknown/C0/C01C52.asm:61 LDA @LOCAL03
    case 0xC01CA2: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C01C52.asm:62 STA @VIRTUAL04
    case 0xC01CA4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:63 BRA @UNKNOWN4
    case 0xC01CA6: cpu.execute_instruction<0x80>(0x000078, 2); return true;
    // src/unknown/C0/C01C52.asm:65 LDA @VIRTUAL04
    case 0xC01CA8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:66 CLC
    case 0xC01CAA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:67 ADC #8
    case 0xC01CAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C0/C01C52.asm:67 ADC #8
    // Overlapping static entry reached from 0xC01CAB.
    case 0xC01CAD: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C01C52.asm:68 AND #$00F8
    case 0xC01CAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x0000F8, 3); return true;
    // src/unknown/C0/C01C52.asm:68 AND #$00F8
    // Overlapping static entry reached from 0xC01CAE.
    case 0xC01CB0: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C0/C01C52.asm:69 SEC
    case 0xC01CB1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:70 SBC @VIRTUAL04
    case 0xC01CB2: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:71 STA @TMP1
    case 0xC01CB4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C01C52.asm:72 LDA @LOCAL01
    case 0xC01CB6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C01C52.asm:73 SEC
    case 0xC01CB8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:74 SBC @VIRTUAL04
    case 0xC01CB9: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:75 CMP @TMP1
    case 0xC01CBB: cpu.execute_instruction<0xC5>(0x000018, 2); return true;
    // src/unknown/C0/C01C52.asm:76 BCS @UNKNOWN3
    case 0xC01CBD: cpu.execute_instruction<0xB0>(0x000002, 2); return true;
    // src/unknown/C0/C01C52.asm:77 STA @TMP1
    case 0xC01CBF: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C01C52.asm:79 LDA @TMP1
    case 0xC01CC1: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C0/C01C52.asm:80 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC01CC3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C0/C01C52.asm:80 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC01CC4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C0/C01C52.asm:80 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC01CC5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C0/C01C52.asm:80 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC01CC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C0/C01C52.asm:80 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC01CC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C0/C01C52.asm:80 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC01CC8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:81 STA @VIRTUAL02
    case 0xC01CC9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:82 LOADPTR UNKNOWN_C40BE8, @VIRTUAL06
    case 0xC01CCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x000BE8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:82 LOADPTR UNKNOWN_C40BE8, @VIRTUAL06
    // Overlapping static entry reached from 0xC01CCB.
    case 0xC01CCD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C01C52.asm:82 LOADPTR UNKNOWN_C40BE8, @VIRTUAL06
    case 0xC01CCE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:82 LOADPTR UNKNOWN_C40BE8, @VIRTUAL06
    case 0xC01CD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:82 LOADPTR UNKNOWN_C40BE8, @VIRTUAL06
    // Overlapping static entry reached from 0xC01CD0.
    case 0xC01CD2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C01C52.asm:82 LOADPTR UNKNOWN_C40BE8, @VIRTUAL06
    case 0xC01CD3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:83 LOADPTR UNKNOWN_C42F8C, @VIRTUAL0A
    case 0xC01CD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008C, 2); else cpu.execute_instruction<0xA9>(0x002F8C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:83 LOADPTR UNKNOWN_C42F8C, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01CD5.
    case 0xC01CD7: cpu.execute_instruction<0x2F>(0xA90A85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C01C52.asm:83 LOADPTR UNKNOWN_C42F8C, @VIRTUAL0A
    case 0xC01CD8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:83 LOADPTR UNKNOWN_C42F8C, @VIRTUAL0A
    case 0xC01CDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:83 LOADPTR UNKNOWN_C42F8C, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01CD7.
    case 0xC01CDB: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:83 LOADPTR UNKNOWN_C42F8C, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01CDA.
    case 0xC01CDC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C01C52.asm:83 LOADPTR UNKNOWN_C42F8C, @VIRTUAL0A
    case 0xC01CDD: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C01C52.asm:84 LDA @VIRTUAL04
    case 0xC01CDF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:85 ASL
    case 0xC01CE1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:86 CLC
    case 0xC01CE2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:87 ADC @VIRTUAL0A
    case 0xC01CE3: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C01C52.asm:88 STA @VIRTUAL0A
    case 0xC01CE5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01C52.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01CE7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01C52.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01CE9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01C52.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01CEB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01C52.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01CED: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C01C52.asm:90 LDA [@VIRTUAL0A]
    case 0xC01CEF: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C01C52.asm:91 CLC
    case 0xC01CF1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:92 ADC #VRAM::OBJ
    case 0xC01CF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x004000, 3); return true;
    // src/unknown/C0/C01C52.asm:92 ADC #VRAM::OBJ
    // Overlapping static entry reached from 0xC01CF2.
    case 0xC01CF4: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:93 TAY
    case 0xC01CF5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:94 LDX @VIRTUAL02
    case 0xC01CF6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C01C52.asm:95 SEP #PROC_FLAGS::ACCUM8
    case 0xC01CF8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01C52.asm:96 LDA #3
    case 0xC01CFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // src/unknown/C0/C01C52.asm:97 JSL PREPARE_VRAM_COPY
    case 0xC01CFC: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C0/C01C52.asm:97 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC01CFA.
    case 0xC01CFD: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C0/C01C52.asm:97 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC01CFD.
    case 0xC01CFF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01C52.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01D00: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01C52.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC01CFF.
    case 0xC01D01: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01C52.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01D02: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01C52.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC01D01.
    case 0xC01D03: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01C52.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01D04: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01C52.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01D06: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C01C52.asm:100 LDA [@VIRTUAL0A]
    case 0xC01D08: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C01C52.asm:101 CLC
    case 0xC01D0A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:102 ADC #VRAM::OBJ + 64 * 4
    case 0xC01D0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x004100, 3); return true;
    // src/unknown/C0/C01C52.asm:102 ADC #VRAM::OBJ + 64 * 4
    // Overlapping static entry reached from 0xC01D0B.
    case 0xC01D0D: cpu.execute_instruction<0x41>(0x0000A8, 2); return true;
    // src/unknown/C0/C01C52.asm:103 TAY
    case 0xC01D0E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:104 LDX @VIRTUAL02
    case 0xC01D0F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C01C52.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC01D11: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01C52.asm:106 LDA #3
    case 0xC01D13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // src/unknown/C0/C01C52.asm:107 JSL PREPARE_VRAM_COPY
    case 0xC01D15: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C0/C01C52.asm:107 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC01D13.
    case 0xC01D16: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C0/C01C52.asm:107 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC01D16.
    case 0xC01D18: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0004A5, 3); return true;
    // src/unknown/C0/C01C52.asm:109 LDA @VIRTUAL04
    case 0xC01D19: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:109 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC01D18.
    case 0xC01D1A: cpu.execute_instruction<0x04>(0x000018, 2); return true;
    // src/unknown/C0/C01C52.asm:110 CLC
    case 0xC01D1B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:111 ADC @TMP1
    case 0xC01D1C: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C0/C01C52.asm:112 STA @VIRTUAL04
    case 0xC01D1E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:114 LDA @LOCAL03
    case 0xC01D20: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C01C52.asm:115 CLC
    case 0xC01D22: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:116 ADC @LOCAL04
    case 0xC01D23: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/unknown/C0/C01C52.asm:117 STA @LOCAL01
    case 0xC01D25: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C01C52.asm:118 STA @VIRTUAL02
    case 0xC01D27: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01C52.asm:119 LDA @VIRTUAL04
    case 0xC01D29: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:120 CMP @VIRTUAL02
    case 0xC01D2B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C01C52.asm:121 BCCL @UNKNOWN2
    case 0xC01D2D: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C01C52.asm:121 BCCL @UNKNOWN2
    case 0xC01D2F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C01C52.asm:121 BCCL @UNKNOWN2
    case 0xC01D31: cpu.execute_instruction<0x4C>(0x001CA8, 3); return true;
    // src/unknown/C0/C01C52.asm:123 LDA @LOCAL03
    case 0xC01D34: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C01C52.asm:125 END_C_FUNCTION
    case 0xC01D36: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C01C52.asm:125 END_C_FUNCTION
    case 0xC01D37: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01D38.asm (unresolved).
bool execute_unresolved_c0_c01d38_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01D38.asm:3 BEGIN_C_FUNCTION
    case 0xC01D38: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C01D38.asm:15 END_STACK_VARS
    case 0xC01D3A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C01D38.asm:15 END_STACK_VARS
    case 0xC01D3B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C01D38.asm:15 END_STACK_VARS
    case 0xC01D3C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01D38.asm:15 END_STACK_VARS
    case 0xC01D3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01D38.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC01D3D.
    case 0xC01D3F: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C01D38.asm:15 END_STACK_VARS
    case 0xC01D40: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C01D38.asm:15 END_STACK_VARS
    case 0xC01D41: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:16 STY @LOCAL05
    case 0xC01D42: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C01D38.asm:16 STY @LOCAL05
    // Overlapping static entry reached from 0xC01D3F.
    case 0xC01D43: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:17 STX @VIRTUAL04
    case 0xC01D44: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C01D38.asm:18 TAX
    case 0xC01D46: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01D38.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC01D47: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01D38.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC01D49: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01D38.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC01D4B: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01D38.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC01D4D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C01D38.asm:20 LDA [@VIRTUAL06]
    case 0xC01D4F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:21 AND #$00FF
    case 0xC01D51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C01D38.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC01D51.
    case 0xC01D53: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C01D38.asm:22 STA @VIRTUAL02
    case 0xC01D54: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01D38.asm:23 STA @LOCAL04
    case 0xC01D56: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C01D38.asm:24 INC @VIRTUAL06
    case 0xC01D58: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:25 INC @VIRTUAL06
    case 0xC01D5A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:26 LDY #0
    case 0xC01D5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C01D38.asm:26 LDY #0
    // Overlapping static entry reached from 0xC01D5C.
    case 0xC01D5E: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C01D38.asm:27 STY @LOCAL03
    case 0xC01D5F: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C01D38.asm:28 JMP @UNKNOWN3
    case 0xC01D61: cpu.execute_instruction<0x4C>(0x001DE1, 3); return true;
    // src/unknown/C0/C01D38.asm:30 LDA #0
    case 0xC01D64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C01D38.asm:30 LDA #0
    // Overlapping static entry reached from 0xC01D64.
    case 0xC01D66: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C01D38.asm:31 STA @LOCAL02
    case 0xC01D67: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C01D38.asm:32 BRA @UNKNOWN2
    case 0xC01D69: cpu.execute_instruction<0x80>(0x000069, 2); return true;
    // src/unknown/C0/C01D38.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC01D6B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:35 LDA [@VIRTUAL06]
    case 0xC01D6D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:36 STA OVERWORLD_SPRITEMAPS + spritemap::y_offset,X
    case 0xC01D6F: cpu.execute_instruction<0x9D>(0x00467E, 3); return true;
    // src/unknown/C0/C01D38.asm:37 INX ;spritemap::tile
    case 0xC01D72: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:38 STX @LOCAL01
    case 0xC01D73: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C01D38.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC01D75: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:40 LDA @LOCAL02
    case 0xC01D77: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C01D38.asm:41 STA @VIRTUAL02
    case 0xC01D79: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01D38.asm:42 LDA @VIRTUAL04
    case 0xC01D7B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01D38.asm:43 CLC
    case 0xC01D7D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:44 ADC @VIRTUAL02
    case 0xC01D7E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C01D38.asm:45 ASL
    case 0xC01D80: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:46 TAX
    case 0xC01D81: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:47 LDA f:UNKNOWN_C4303C,X
    case 0xC01D82: cpu.execute_instruction<0xBF>(0xC4303C, 4); return true;
    // src/unknown/C0/C01D38.asm:48 STA @LOCAL00
    case 0xC01D86: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C01D38.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC01D88: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:50 LDX @LOCAL01
    case 0xC01D8A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C01D38.asm:51 STA OVERWORLD_SPRITEMAPS,X
    case 0xC01D8C: cpu.execute_instruction<0x9D>(0x00467E, 3); return true;
    // src/unknown/C0/C01D38.asm:52 INX ;spritemap::flags
    case 0xC01D8F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC01D90: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:54 LDA @LOCAL00
    case 0xC01D92: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C01D38.asm:55 XBA
    case 0xC01D94: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:56 AND #$00FF
    case 0xC01D95: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C01D38.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC01D95.
    case 0xC01D97: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C0/C01D38.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC01D98: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:58 STA @VIRTUAL00
    case 0xC01D9A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C01D38.asm:59 REP #PROC_FLAGS::ACCUM8
    case 0xC01D9C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:60 LDA @LOCAL05
    case 0xC01D9E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C01D38.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC01DA0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:62 STA @VIRTUAL01
    case 0xC01DA2: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C0/C01D38.asm:63 LDY #spritemap::flags
    case 0xC01DA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C01D38.asm:63 LDY #spritemap::flags
    // Overlapping static entry reached from 0xC01DA4.
    case 0xC01DA6: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C01D38.asm:64 LDA [@VIRTUAL06],Y
    case 0xC01DA7: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:65 AND #$00FE
    case 0xC01DA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x0005FE, 3); return true;
    // src/unknown/C0/C01D38.asm:66 ORA @VIRTUAL01
    case 0xC01DAB: cpu.execute_instruction<0x05>(0x000001, 2); return true;
    // src/unknown/C0/C01D38.asm:66 ORA @VIRTUAL01
    // Overlapping static entry reached from 0xC01DA9.
    case 0xC01DAC: cpu.execute_instruction<0x01>(0x000005, 2); return true;
    // src/unknown/C0/C01D38.asm:67 ORA @VIRTUAL00
    case 0xC01DAD: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C0/C01D38.asm:67 ORA @VIRTUAL00
    // Overlapping static entry reached from 0xC01DAC.
    case 0xC01DAE: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C01D38.asm:68 STA OVERWORLD_SPRITEMAPS,X
    case 0xC01DAF: cpu.execute_instruction<0x9D>(0x00467E, 3); return true;
    // src/unknown/C0/C01D38.asm:69 INX ;spritemap::x_offset
    case 0xC01DB2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:70 LDY #spritemap::x_offset
    case 0xC01DB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C01D38.asm:70 LDY #spritemap::x_offset
    // Overlapping static entry reached from 0xC01DB3.
    case 0xC01DB5: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C01D38.asm:71 LDA [@VIRTUAL06],Y
    case 0xC01DB6: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:72 STA OVERWORLD_SPRITEMAPS,X
    case 0xC01DB8: cpu.execute_instruction<0x9D>(0x00467E, 3); return true;
    // src/unknown/C0/C01D38.asm:73 INX ;spritemap::special_flags
    case 0xC01DBB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:74 LDY #spritemap::special_flags
    case 0xC01DBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C0/C01D38.asm:74 LDY #spritemap::special_flags
    // Overlapping static entry reached from 0xC01DBC.
    case 0xC01DBE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C01D38.asm:75 LDA [@VIRTUAL06],Y
    case 0xC01DBF: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:76 STA OVERWORLD_SPRITEMAPS,X
    case 0xC01DC1: cpu.execute_instruction<0x9D>(0x00467E, 3); return true;
    // src/unknown/C0/C01D38.asm:77 INX ;next spritemap::y_offset
    case 0xC01DC4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC01DC5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:79 LDA #.SIZEOF(spritemap)
    case 0xC01DC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C01D38.asm:79 LDA #.SIZEOF(spritemap)
    // Overlapping static entry reached from 0xC01DC7.
    case 0xC01DC9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C01D38.asm:80 CLC
    case 0xC01DCA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:81 ADC @VIRTUAL06
    case 0xC01DCB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:82 STA @VIRTUAL06
    case 0xC01DCD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:83 LDA @LOCAL02
    case 0xC01DCF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C01D38.asm:84 INC
    case 0xC01DD1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:85 STA @LOCAL02
    case 0xC01DD2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C01D38.asm:87 LDY @LOCAL04
    case 0xC01DD4: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C01D38.asm:88 STY @VIRTUAL02
    case 0xC01DD6: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C01D38.asm:89 CMP @VIRTUAL02
    case 0xC01DD8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C01D38.asm:90 BCC @UNKNOWN1
    case 0xC01DDA: cpu.execute_instruction<0x90>(0x00008F, 2); return true;
    // src/unknown/C0/C01D38.asm:91 LDY @LOCAL03
    case 0xC01DDC: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C01D38.asm:92 INY
    case 0xC01DDE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:93 STY @LOCAL03
    case 0xC01DDF: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C01D38.asm:95 CPY #2
    case 0xC01DE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000002, 2); else cpu.execute_instruction<0xC0>(0x000002, 3); return true;
    // src/unknown/C0/C01D38.asm:95 CPY #2
    // Overlapping static entry reached from 0xC01DE1.
    case 0xC01DE3: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C01D38.asm:96 BCCL @UNKNOWN0
    case 0xC01DE4: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C01D38.asm:96 BCCL @UNKNOWN0
    case 0xC01DE6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C01D38.asm:96 BCCL @UNKNOWN0
    case 0xC01DE8: cpu.execute_instruction<0x4C>(0x001D64, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C01D38.asm:97 END_C_FUNCTION
    case 0xC01DEB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C01D38.asm:97 END_C_FUNCTION
    case 0xC01DEC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01DED.asm (unresolved).
bool execute_unresolved_c0_c01ded_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01DED.asm:3 BEGIN_C_FUNCTION
    case 0xC01DED: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C01DED.asm:7 END_STACK_VARS
    case 0xC01DEF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C01DED.asm:7 END_STACK_VARS
    case 0xC01DF0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C01DED.asm:7 END_STACK_VARS
    case 0xC01DF1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01DED.asm:7 END_STACK_VARS
    case 0xC01DF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01DED.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC01DF2.
    case 0xC01DF4: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C01DED.asm:7 END_STACK_VARS
    case 0xC01DF5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C01DED.asm:7 END_STACK_VARS
    case 0xC01DF6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C01DED.asm:8 STA @LOCAL00
    case 0xC01DF7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C01DED.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC01DF4.
    case 0xC01DF8: cpu.execute_instruction<0x0E>(0x003FA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C01DED.asm:9 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01DF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003F, 2); else cpu.execute_instruction<0xA9>(0x00133F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C01DED.asm:9 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01DF9.
    case 0xC01DFB: cpu.execute_instruction<0x13>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C01DED.asm:9 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01DFC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C01DED.asm:9 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01DFB.
    case 0xC01DFD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C01DED.asm:9 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01DFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C01DED.asm:9 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01DFE.
    case 0xC01E00: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C01DED.asm:9 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E01: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C01DED.asm:10 LDA @LOCAL00
    case 0xC01E03: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/unknown/C0/C01DED.asm:11 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01E05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/unknown/C0/C01DED.asm:11 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01E06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C01DED.asm:12 CLC
    case 0xC01E07: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01DED.asm:13 ADC @VIRTUAL0A
    case 0xC01E08: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C01DED.asm:14 STA @VIRTUAL0A
    case 0xC01E0A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C01DED.asm:15 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E0C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C01DED.asm:15 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC01E0C.
    case 0xC01E0E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C01DED.asm:15 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E0F: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C01DED.asm:15 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E11: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C01DED.asm:15 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E12: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C01DED.asm:15 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E14: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C01DED.asm:15 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E16: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C01DED.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC01E18: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01DED.asm:17 LDY #sprite_grouping::width
    case 0xC01E1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C01DED.asm:17 LDY #sprite_grouping::width
    // Overlapping static entry reached from 0xC01E1A.
    case 0xC01E1C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C01DED.asm:18 LDA [@VIRTUAL06],Y
    case 0xC01E1D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C01DED.asm:19 LSR
    case 0xC01E1F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01DED.asm:20 LSR
    case 0xC01E20: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01DED.asm:21 LSR
    case 0xC01E21: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01DED.asm:22 LSR
    case 0xC01E22: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01DED.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC01E23: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01DED.asm:24 AND #$00FF
    case 0xC01E25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C01DED.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC01E25.
    case 0xC01E27: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C01DED.asm:25 STA NEW_SPRITE_TILE_WIDTH
    case 0xC01E28: cpu.execute_instruction<0x8D>(0x00467A, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01DED.asm:26 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC01E2B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01DED.asm:26 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC01E2D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01DED.asm:26 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC01E2F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01DED.asm:26 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC01E31: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C01DED.asm:27 LDA [@VIRTUAL0A]
    case 0xC01E33: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C01DED.asm:28 AND #$00FF
    case 0xC01E35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C01DED.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC01E35.
    case 0xC01E37: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C01DED.asm:29 STA NEW_SPRITE_TILE_HEIGHT
    case 0xC01E38: cpu.execute_instruction<0x8D>(0x00467C, 3); return true;
    // src/unknown/C0/C01DED.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC01E3B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01DED.asm:31 LDY #sprite_grouping::size
    case 0xC01E3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C01DED.asm:31 LDY #sprite_grouping::size
    // Overlapping static entry reached from 0xC01E3D.
    case 0xC01E3F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C01DED.asm:32 LDA [@VIRTUAL06],Y
    case 0xC01E40: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C01DED.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC01E42: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01DED.asm:34 AND #$00FF
    case 0xC01E44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C01DED.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC01E44.
    case 0xC01E46: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C01DED.asm:35 END_C_FUNCTION
    case 0xC01E47: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C01DED.asm:35 END_C_FUNCTION
    case 0xC01E48: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C020F1.asm (unresolved).
bool execute_unresolved_c0_c020f1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C020F1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC020F1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C020F1.asm:6 END_STACK_VARS
    case 0xC020F3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C020F1.asm:6 END_STACK_VARS
    case 0xC020F4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C020F1.asm:6 END_STACK_VARS
    case 0xC020F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C020F1.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC020F5.
    case 0xC020F7: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C020F1.asm:6 END_STACK_VARS
    case 0xC020F8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC020F9: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C020F1.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC020F7.
    case 0xC020FB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:8 STA @VIRTUAL02
    case 0xC020FC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C020F1.asm:9 ASL
    case 0xC020FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:10 TAY
    case 0xC020FF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:11 STY @LOCAL00
    case 0xC02100: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C020F1.asm:12 LDA ENTITY_SPRITEMAP_POINTER_LOW,Y
    case 0xC02102: cpu.execute_instruction<0xB9>(0x00112E, 3); return true;
    // src/unknown/C0/C020F1.asm:13 JSL UNKNOWN_C01B15
    case 0xC02105: cpu.execute_instruction<0x22>(0xC01B15, 4); return true;
    // src/unknown/C0/C020F1.asm:14 LDX #0
    case 0xC02109: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C020F1.asm:14 LDX #0
    // Overlapping static entry reached from 0xC02109.
    case 0xC0210B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C020F1.asm:15 LDA @VIRTUAL02
    case 0xC0210C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C020F1.asm:16 JSL ALLOC_SPRITE_MEM
    case 0xC0210E: cpu.execute_instruction<0x22>(0xC01C11, 4); return true;
    // src/unknown/C0/C020F1.asm:17 LDY @LOCAL00
    case 0xC02112: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C020F1.asm:18 LDA ENTITY_NPC_IDS,Y
    case 0xC02114: cpu.execute_instruction<0xB9>(0x002C9A, 3); return true;
    // src/unknown/C0/C020F1.asm:19 AND #$F000
    case 0xC02117: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00F000, 3); return true;
    // src/unknown/C0/C020F1.asm:19 AND #$F000
    // Overlapping static entry reached from 0xC02117.
    case 0xC02119: cpu.execute_instruction<0xF0>(0x0000C9, 2); return true;
    // src/unknown/C0/C020F1.asm:20 CMP #$8000
    case 0xC0211A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C020F1.asm:20 CMP #$8000
    // Overlapping static entry reached from 0xC02119.
    case 0xC0211B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C020F1.asm:20 CMP #$8000
    // Overlapping static entry reached from 0xC0211A.
    case 0xC0211C: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/C0/C020F1.asm:21 BNE @UNKNOWN0
    case 0xC0211D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C020F1.asm:22 DEC OVERWORLD_ENEMY_COUNT
    case 0xC0211F: cpu.execute_instruction<0xCE>(0x004A5C, 3); return true;
    // src/unknown/C0/C020F1.asm:24 LDA @VIRTUAL02
    case 0xC02122: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C020F1.asm:25 ASL
    case 0xC02124: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:26 TAX
    case 0xC02125: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:27 LDA ENTITY_ENEMY_IDS,X
    case 0xC02126: cpu.execute_instruction<0xBD>(0x002D12, 3); return true;
    // src/unknown/C0/C020F1.asm:28 CMP #ENEMY::MAGIC_BUTTERFLY
    case 0xC02129: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E1, 2); else cpu.execute_instruction<0xC9>(0x0000E1, 3); return true;
    // src/unknown/C0/C020F1.asm:28 CMP #ENEMY::MAGIC_BUTTERFLY
    // Overlapping static entry reached from 0xC02129.
    case 0xC0212B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C020F1.asm:29 BNE @UNKNOWN1
    case 0xC0212C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C020F1.asm:30 STZ MAGIC_BUTTERFLY_SPAWNED
    case 0xC0212E: cpu.execute_instruction<0x9C>(0x004A60, 3); return true;
    // src/unknown/C0/C020F1.asm:32 LDA @VIRTUAL02
    case 0xC02131: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C020F1.asm:32 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC02167.
    case 0xC02132: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C0/C020F1.asm:33 ASL
    case 0xC02133: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:34 TAX
    case 0xC02134: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:35 LDA #.LOWORD(-1)
    case 0xC02135: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C020F1.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02135.
    case 0xC02137: cpu.execute_instruction<0xFF>(0x2CD69D, 4); return true;
    // src/unknown/C0/C020F1.asm:36 STA ENTITY_SPRITE_IDS,X
    case 0xC02138: cpu.execute_instruction<0x9D>(0x002CD6, 3); return true;
    // src/unknown/C0/C020F1.asm:37 STA ENTITY_NPC_IDS,X
    case 0xC0213B: cpu.execute_instruction<0x9D>(0x002C9A, 3); return true;
    // src/unknown/C0/C020F1.asm:37 STA ENTITY_NPC_IDS,X
    // Overlapping static entry reached from 0xC0216A.
    case 0xC0213C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:37 STA ENTITY_NPC_IDS,X
    // Overlapping static entry reached from 0xC0213C.
    case 0xC0213D: cpu.execute_instruction<0x2C>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C020F1.asm:38 END_C_FUNCTION
    case 0xC0213E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C020F1.asm:38 END_C_FUNCTION
    case 0xC0213F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C02140.asm (unresolved).
bool execute_unresolved_c0_c02140_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C02140.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC02140: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C02140.asm:7 END_STACK_VARS
    case 0xC02142: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C02140.asm:7 END_STACK_VARS
    case 0xC02143: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C02140.asm:7 END_STACK_VARS
    case 0xC02144: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02140.asm:7 END_STACK_VARS
    case 0xC02145: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02140.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC02145.
    case 0xC02147: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C02140.asm:7 END_STACK_VARS
    case 0xC02148: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C02140.asm:7 END_STACK_VARS
    case 0xC02149: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C02140.asm:8 STA @VIRTUAL02
    case 0xC0214A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02140.asm:8 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC02147.
    case 0xC0214B: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C0/C02140.asm:9 ASL
    case 0xC0214C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02140.asm:10 TAY
    case 0xC0214D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C02140.asm:11 STY @LOCAL00
    case 0xC0214E: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C02140.asm:12 LDA ENTITY_SPRITEMAP_POINTER_LOW,Y
    case 0xC02150: cpu.execute_instruction<0xB9>(0x00112E, 3); return true;
    // src/unknown/C0/C02140.asm:13 JSL UNKNOWN_C01B15
    case 0xC02153: cpu.execute_instruction<0x22>(0xC01B15, 4); return true;
    // src/unknown/C0/C02140.asm:14 LDX #0
    case 0xC02157: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C02140.asm:14 LDX #0
    // Overlapping static entry reached from 0xC02157.
    case 0xC02159: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C02140.asm:15 LDA @VIRTUAL02
    case 0xC0215A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C02140.asm:16 JSL ALLOC_SPRITE_MEM
    case 0xC0215C: cpu.execute_instruction<0x22>(0xC01C11, 4); return true;
    // src/unknown/C0/C02140.asm:17 LDY @LOCAL00
    case 0xC02160: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C02140.asm:18 LDA ENTITY_NPC_IDS,Y
    case 0xC02162: cpu.execute_instruction<0xB9>(0x002C9A, 3); return true;
    // src/unknown/C0/C02140.asm:19 AND #$F000
    case 0xC02165: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00F000, 3); return true;
    // src/unknown/C0/C02140.asm:19 AND #$F000
    // Overlapping static entry reached from 0xC02165.
    case 0xC02167: cpu.execute_instruction<0xF0>(0x0000C9, 2); return true;
    // src/unknown/C0/C02140.asm:20 CMP #$8000
    case 0xC02168: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C02140.asm:20 CMP #$8000
    // Overlapping static entry reached from 0xC02167.
    case 0xC02169: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C02140.asm:20 CMP #$8000
    // Overlapping static entry reached from 0xC02168.
    case 0xC0216A: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/C0/C02140.asm:21 BNE @UNKNOWN0
    case 0xC0216B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C02140.asm:22 DEC OVERWORLD_ENEMY_COUNT
    case 0xC0216D: cpu.execute_instruction<0xCE>(0x004A5C, 3); return true;
    // src/unknown/C0/C02140.asm:24 LDA @VIRTUAL02
    case 0xC02170: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C02140.asm:25 ASL
    case 0xC02172: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02140.asm:26 TAX
    case 0xC02173: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02140.asm:27 LDA ENTITY_ENEMY_IDS,X
    case 0xC02174: cpu.execute_instruction<0xBD>(0x002D12, 3); return true;
    // src/unknown/C0/C02140.asm:28 CMP #ENEMY::MAGIC_BUTTERFLY
    case 0xC02177: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E1, 2); else cpu.execute_instruction<0xC9>(0x0000E1, 3); return true;
    // src/unknown/C0/C02140.asm:28 CMP #ENEMY::MAGIC_BUTTERFLY
    // Overlapping static entry reached from 0xC02177.
    case 0xC02179: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02140.asm:29 BNE @UNKNOWN1
    case 0xC0217A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C02140.asm:30 STZ MAGIC_BUTTERFLY_SPAWNED
    case 0xC0217C: cpu.execute_instruction<0x9C>(0x004A60, 3); return true;
    // src/unknown/C0/C02140.asm:32 LDA @VIRTUAL02
    case 0xC0217F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C02140.asm:33 ASL
    case 0xC02181: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02140.asm:34 TAX
    case 0xC02182: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02140.asm:35 LDA #.LOWORD(-1)
    case 0xC02183: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C02140.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02183.
    case 0xC02185: cpu.execute_instruction<0xFF>(0x2CD69D, 4); return true;
    // src/unknown/C0/C02140.asm:36 STA ENTITY_SPRITE_IDS,X
    case 0xC02186: cpu.execute_instruction<0x9D>(0x002CD6, 3); return true;
    // src/unknown/C0/C02140.asm:37 STA ENTITY_NPC_IDS,X
    case 0xC02189: cpu.execute_instruction<0x9D>(0x002C9A, 3); return true;
    // src/unknown/C0/C02140.asm:38 LDA @VIRTUAL02
    case 0xC0218C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C02140.asm:39 JSL UNKNOWN_C09C35
    case 0xC0218E: cpu.execute_instruction<0x22>(0xC09C35, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C02140.asm:40 END_C_FUNCTION
    case 0xC02192: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C02140.asm:40 END_C_FUNCTION
    case 0xC02193: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C02194.asm (unresolved).
bool execute_unresolved_c0_c02194_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C02194.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC02194: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C02194.asm:7 END_STACK_VARS
    case 0xC02196: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C02194.asm:7 END_STACK_VARS
    case 0xC02197: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02194.asm:7 END_STACK_VARS
    case 0xC02198: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02194.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC02198.
    case 0xC0219A: cpu.execute_instruction<0xFF>(0x609C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C02194.asm:7 END_STACK_VARS
    case 0xC0219B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:8 STZ MAGIC_BUTTERFLY_SPAWNED
    case 0xC0219C: cpu.execute_instruction<0x9C>(0x004A60, 3); return true;
    // src/unknown/C0/C02194.asm:8 STZ MAGIC_BUTTERFLY_SPAWNED
    // Overlapping static entry reached from 0xC0219A.
    case 0xC0219E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:9 STZ ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    case 0xC0219F: cpu.execute_instruction<0x9C>(0x004A68, 3); return true;
    // src/unknown/C0/C02194.asm:10 STZ OVERWORLD_ENEMY_COUNT
    case 0xC021A2: cpu.execute_instruction<0x9C>(0x004A5C, 3); return true;
    // src/unknown/C0/C02194.asm:11 LDX #0
    case 0xC021A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C02194.asm:11 LDX #0
    // Overlapping static entry reached from 0xC021A5.
    case 0xC021A7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C02194.asm:12 STX @LOCAL01
    case 0xC021A8: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C02194.asm:13 BRA @UNKNOWN2
    case 0xC021AA: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C0/C02194.asm:15 TXA
    case 0xC021AC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:16 ASL
    case 0xC021AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:17 TAX
    case 0xC021AE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:18 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC021AF: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/unknown/C0/C02194.asm:19 INC
    case 0xC021B2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:20 CMP #6
    case 0xC021B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C02194.asm:20 CMP #6
    // Overlapping static entry reached from 0xC021B3.
    case 0xC021B5: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C02194.asm:21 BLTEQ @UNKNOWN1
    case 0xC021B6: cpu.execute_instruction<0x90>(0x000009, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C02194.asm:21 BLTEQ @UNKNOWN1
    case 0xC021B8: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C02194.asm:22 LDX @LOCAL01
    case 0xC021BA: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C02194.asm:23 TXA
    case 0xC021BC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:24 JSL UNKNOWN_C02140
    case 0xC021BD: cpu.execute_instruction<0x22>(0xC02140, 4); return true;
    // src/unknown/C0/C02194.asm:26 LDX @LOCAL01
    case 0xC021C1: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C02194.asm:27 INX
    case 0xC021C3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:28 STX @LOCAL01
    case 0xC021C4: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C02194.asm:30 CPX #MAX_ENTITIES
    case 0xC021C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/unknown/C0/C02194.asm:30 CPX #MAX_ENTITIES
    // Overlapping static entry reached from 0xC021C6.
    case 0xC021C8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02194.asm:31 BNE @UNKNOWN0
    case 0xC021C9: cpu.execute_instruction<0xD0>(0x0000E1, 2); return true;
    // src/unknown/C0/C02194.asm:32 LDA #0
    case 0xC021CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C02194.asm:32 LDA #0
    // Overlapping static entry reached from 0xC021CB.
    case 0xC021CD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02194.asm:33 STA @LOCAL00
    case 0xC021CE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C02194.asm:34 BRA @UNKNOWN4
    case 0xC021D0: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C02194.asm:36 ASL
    case 0xC021D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:37 TAX
    case 0xC021D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:38 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC021D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C02194.asm:38 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC021D4.
    case 0xC021D6: cpu.execute_instruction<0xFF>(0x289E9D, 4); return true;
    // src/unknown/C0/C02194.asm:39 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC021D7: cpu.execute_instruction<0x9D>(0x00289E, 3); return true;
    // src/unknown/C0/C02194.asm:40 LDA @LOCAL00
    case 0xC021DA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C02194.asm:41 INC
    case 0xC021DC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:42 STA @LOCAL00
    case 0xC021DD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C02194.asm:44 CMP #MAX_ENTITIES
    case 0xC021DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C02194.asm:44 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC021DF.
    case 0xC021E1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C02194.asm:45 BCC @UNKNOWN3
    case 0xC021E2: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C02194.asm:46 END_C_FUNCTION
    case 0xC021E4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C02194.asm:46 END_C_FUNCTION
    case 0xC021E5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C021E6.asm (unresolved).
bool execute_unresolved_c0_c021e6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C021E6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC021E6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C021E6.asm:6 END_STACK_VARS
    case 0xC021E8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C021E6.asm:6 END_STACK_VARS
    case 0xC021E9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C021E6.asm:6 END_STACK_VARS
    case 0xC021EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C021E6.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC021EA.
    case 0xC021EC: cpu.execute_instruction<0xFF>(0x609C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C021E6.asm:6 END_STACK_VARS
    case 0xC021ED: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:7 STZ MAGIC_BUTTERFLY_SPAWNED
    case 0xC021EE: cpu.execute_instruction<0x9C>(0x004A60, 3); return true;
    // src/unknown/C0/C021E6.asm:7 STZ MAGIC_BUTTERFLY_SPAWNED
    // Overlapping static entry reached from 0xC021EC.
    case 0xC021F0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:8 STZ ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    case 0xC021F1: cpu.execute_instruction<0x9C>(0x004A68, 3); return true;
    // src/unknown/C0/C021E6.asm:9 STZ OVERWORLD_ENEMY_COUNT
    case 0xC021F4: cpu.execute_instruction<0x9C>(0x004A5C, 3); return true;
    // src/unknown/C0/C021E6.asm:10 LDX #0
    case 0xC021F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C021E6.asm:10 LDX #0
    // Overlapping static entry reached from 0xC021F7.
    case 0xC021F9: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C021E6.asm:11 STX @LOCAL00
    case 0xC021FA: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C021E6.asm:12 BRA @UNKNOWN2
    case 0xC021FC: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C021E6.asm:14 TXA
    case 0xC021FE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:15 ASL
    case 0xC021FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:16 TAX
    case 0xC02200: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:17 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC02201: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/unknown/C0/C021E6.asm:18 INC
    case 0xC02204: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:19 CMP #2
    case 0xC02205: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C021E6.asm:19 CMP #2
    // Overlapping static entry reached from 0xC02205.
    case 0xC02207: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C021E6.asm:20 BLTEQ @UNKNOWN1
    case 0xC02208: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C021E6.asm:20 BLTEQ @UNKNOWN1
    case 0xC0220A: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C021E6.asm:21 LDX @LOCAL00
    case 0xC0220C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C021E6.asm:22 CPX #23
    case 0xC0220E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000017, 2); else cpu.execute_instruction<0xE0>(0x000017, 3); return true;
    // src/unknown/C0/C021E6.asm:22 CPX #23
    // Overlapping static entry reached from 0xC0220E.
    case 0xC02210: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C021E6.asm:23 BEQ @UNKNOWN1
    case 0xC02211: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C021E6.asm:24 TXA
    case 0xC02213: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:25 JSL UNKNOWN_C02140
    case 0xC02214: cpu.execute_instruction<0x22>(0xC02140, 4); return true;
    // src/unknown/C0/C021E6.asm:27 LDX @LOCAL00
    case 0xC02218: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C021E6.asm:28 INX
    case 0xC0221A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:29 STX @LOCAL00
    case 0xC0221B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C021E6.asm:31 CPX #30
    case 0xC0221D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/unknown/C0/C021E6.asm:31 CPX #30
    // Overlapping static entry reached from 0xC0221D.
    case 0xC0221F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C021E6.asm:32 BNE @UNKNOWN0
    case 0xC02220: cpu.execute_instruction<0xD0>(0x0000DC, 2); return true;
    // src/unknown/C0/C021E6.asm:33 LDA #23
    case 0xC02222: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/C0/C021E6.asm:33 LDA #23
    // Overlapping static entry reached from 0xC02222.
    case 0xC02224: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C021E6.asm:34 JSL UNKNOWN_C09C35
    case 0xC02225: cpu.execute_instruction<0x22>(0xC09C35, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C021E6.asm:35 END_C_FUNCTION
    case 0xC02229: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C021E6.asm:35 END_C_FUNCTION
    case 0xC0222A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0222B.asm (unresolved).
bool execute_unresolved_c0_c0222b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0222B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0222B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0222B.asm:20 END_STACK_VARS
    case 0xC0222D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0222B.asm:20 END_STACK_VARS
    case 0xC0222E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0222B.asm:20 END_STACK_VARS
    case 0xC0222F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0222B.asm:20 END_STACK_VARS
    case 0xC02230: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0222B.asm:20 END_STACK_VARS
    // Overlapping static entry reached from 0xC02230.
    case 0xC02232: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0222B.asm:20 END_STACK_VARS
    case 0xC02233: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0222B.asm:20 END_STACK_VARS
    case 0xC02234: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:21 STX @LOCAL0C
    case 0xC02235: cpu.execute_instruction<0x86>(0x000028, 2); return true;
    // src/unknown/C0/C0222B.asm:21 STX @LOCAL0C
    // Overlapping static entry reached from 0xC02232.
    case 0xC02236: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:22 STA @VIRTUAL04
    case 0xC02237: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0222B.asm:23 STA @LOCAL0B
    case 0xC02239: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C0222B.asm:24 LDA @VIRTUAL04
    case 0xC0223B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0222B.asm:25 CMP #32
    case 0xC0223D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C0/C0222B.asm:25 CMP #32
    // Overlapping static entry reached from 0xC0223D.
    case 0xC0223F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0222B.asm:26 BCC @UNKNOWN0
    case 0xC02240: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C0222B.asm:27 JMP @UNKNOWN29
    case 0xC02242: cpu.execute_instruction<0x4C>(0x00255A, 3); return true;
    // src/unknown/C0/C0222B.asm:29 LDA @LOCAL0C
    case 0xC02245: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0222B.asm:30 CMP #40
    case 0xC02247: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000028, 2); else cpu.execute_instruction<0xC9>(0x000028, 3); return true;
    // src/unknown/C0/C0222B.asm:30 CMP #40
    // Overlapping static entry reached from 0xC02247.
    case 0xC02249: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0222B.asm:31 BCC @UNKNOWN1
    case 0xC0224A: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C0222B.asm:32 JMP @UNKNOWN29
    case 0xC0224C: cpu.execute_instruction<0x4C>(0x00255A, 3); return true;
    // src/unknown/C0/C0222B.asm:34 LDA @VIRTUAL04
    case 0xC0224F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0222B.asm:35 ASL
    case 0xC02251: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:36 STA @VIRTUAL02
    case 0xC02252: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:37 LDA @LOCAL0C
    case 0xC02254: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02256: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02257: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02258: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02259: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0225A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0225B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:39 CLC
    case 0xC0225C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:40 ADC @VIRTUAL02
    case 0xC0225D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:41 TAX
    case 0xC0225F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:42 LDA f:SPRITE_PLACEMENT_PTR_TABLE,X
    case 0xC02260: cpu.execute_instruction<0xBF>(0xCF61E7, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0222B.asm:43 BEQL @UNKNOWN29
    case 0xC02264: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:43 BEQL @UNKNOWN29
    case 0xC02266: cpu.execute_instruction<0x4C>(0x00255A, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:44 STORE_INT1632 @VIRTUAL06
    case 0xC02269: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:44 STORE_INT1632 @VIRTUAL06
    case 0xC0226B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C0/C0222B.asm:45 CLC
    case 0xC0226D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC0226E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02270: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC02270.
    case 0xC02272: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02273: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02275: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02277: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CF, 2); else cpu.execute_instruction<0x69>(0x0000CF, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC02277.
    case 0xC02279: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC0227A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0222B.asm:47 LDA [@VIRTUAL06]
    case 0xC0227C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:48 STA @LOCAL0A
    case 0xC0227E: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C0222B.asm:49 INC @VIRTUAL06
    case 0xC02280: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:50 INC @VIRTUAL06
    case 0xC02282: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02284: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02286: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02288: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0228A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0222B.asm:52 STZ @LOCAL09
    case 0xC0228C: cpu.execute_instruction<0x64>(0x000022, 2); return true;
    // src/unknown/C0/C0222B.asm:53 JMP @UNKNOWN28
    case 0xC0228E: cpu.execute_instruction<0x4C>(0x002551, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02291: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02293: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02295: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02297: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC009CF.
    case 0xC02298: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:56 LDA [@VIRTUAL06] ;sprite_placement::id
    case 0xC02299: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:57 STA @LOCAL08
    case 0xC0229B: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC0229D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:59 LDY #sprite_placement::y_coord
    case 0xC0229F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C0222B.asm:59 LDY #sprite_placement::y_coord
    // Overlapping static entry reached from 0xC0229F.
    case 0xC022A1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B.asm:60 LDA [@VIRTUAL0A],Y
    case 0xC022A2: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C0/C0222B.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xC022A4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:62 AND #$00FF
    case 0xC022A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B.asm:62 AND #$00FF
    // Overlapping static entry reached from 0xC022A6.
    case 0xC022A8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0222B.asm:63 TAX
    case 0xC022A9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:64 STX @LOCAL07
    case 0xC022AA: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C0/C0222B.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC022AC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:66 LDY #sprite_placement::x_coord
    case 0xC022AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C0222B.asm:66 LDY #sprite_placement::x_coord
    // Overlapping static entry reached from 0xC022AE.
    case 0xC022B0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B.asm:67 LDA [@VIRTUAL0A],Y
    case 0xC022B1: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C0/C0222B.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC022B3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:69 AND #$00FF
    case 0xC022B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC022B5.
    case 0xC022B7: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C0222B.asm:70 TAY
    case 0xC022B8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:71 STY @LOCAL06
    case 0xC022B9: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B.asm:72 LDA #.SIZEOF(sprite_placement)
    case 0xC022BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C0222B.asm:72 LDA #.SIZEOF(sprite_placement)
    // Overlapping static entry reached from 0xC022BB.
    case 0xC022BD: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0222B.asm:73 CLC
    case 0xC022BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:74 ADC @VIRTUAL0A
    case 0xC022BF: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C0222B.asm:75 STA @VIRTUAL0A
    case 0xC022C1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0222B.asm:76 TXA
    case 0xC022C3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:77 LSR
    case 0xC022C4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:78 LSR
    case 0xC022C5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:79 LSR
    case 0xC022C6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:80 STA @VIRTUAL02
    case 0xC022C7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:81 LDA @LOCAL0B
    case 0xC022C9: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C0/C0222B.asm:82 STA @VIRTUAL04
    case 0xC022CB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:83 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:83 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:83 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:83 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:83 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:84 CLC
    case 0xC022D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:85 ADC @VIRTUAL02
    case 0xC022D3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:86 STA @LOCAL05
    case 0xC022D5: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:87 TYA
    case 0xC022D7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:88 LSR
    case 0xC022D8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:89 LSR
    case 0xC022D9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:90 LSR
    case 0xC022DA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:91 STA @VIRTUAL02
    case 0xC022DB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:92 LDA @LOCAL0C
    case 0xC022DD: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:93 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:93 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:93 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:93 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:93 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:94 CLC
    case 0xC022E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:95 ADC @VIRTUAL02
    case 0xC022E5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:96 STA @VIRTUAL02
    case 0xC022E7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:97 LDA @LOCAL05
    case 0xC022E9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:98 LSR
    case 0xC022EB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:99 LSR
    case 0xC022EC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:100 LSR
    case 0xC022ED: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:101 LSR
    case 0xC022EE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:102 LSR
    case 0xC022EF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:103 PHA
    case 0xC022F0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:104 LDA @VIRTUAL02
    case 0xC022F1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:105 LSR
    case 0xC022F3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:106 LSR
    case 0xC022F4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:107 LSR
    case 0xC022F5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:108 LSR
    case 0xC022F6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:109 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022F7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:109 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022F8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:109 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:109 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:109 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:110 PLY
    case 0xC022FC: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:111 STY @VIRTUAL02
    case 0xC022FD: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:112 CLC
    case 0xC022FF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:113 ADC @VIRTUAL02
    case 0xC02300: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:114 TAX
    case 0xC02302: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:115 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC02303: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/unknown/C0/C0222B.asm:116 AND #$00FF
    case 0xC02307: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B.asm:116 AND #$00FF
    // Overlapping static entry reached from 0xC02307.
    case 0xC02309: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C0222B.asm:117 LSR
    case 0xC0230A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:118 LSR
    case 0xC0230B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:119 LSR
    case 0xC0230C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:120 CMP LOADED_MAP_TILE_COMBO
    case 0xC0230D: cpu.execute_instruction<0xCD>(0x00436E, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:121 BNEL @UNKNOWN27
    case 0xC02310: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:121 BNEL @UNKNOWN27
    case 0xC02312: cpu.execute_instruction<0x4C>(0x00254F, 3); return true;
    // src/unknown/C0/C0222B.asm:122 LDA @LOCAL08
    case 0xC02315: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:123 JSL UNKNOWN_C0A21C
    case 0xC02317: cpu.execute_instruction<0x22>(0xC0A21C, 4); return true;
    // src/unknown/C0/C0222B.asm:124 CMP #0
    case 0xC0231B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0222B.asm:124 CMP #0
    // Overlapping static entry reached from 0xC0231B.
    case 0xC0231D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:125 BNEL @UNKNOWN27
    case 0xC0231E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:125 BNEL @UNKNOWN27
    case 0xC02320: cpu.execute_instruction<0x4C>(0x00254F, 3); return true;
    // src/unknown/C0/C0222B.asm:126 LDX @LOCAL07
    case 0xC02323: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/unknown/C0/C0222B.asm:127 STX @VIRTUAL02
    case 0xC02325: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:128 LDA @VIRTUAL04
    case 0xC02327: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0222B.asm:129 XBA
    case 0xC02329: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:130 AND #$FF00
    case 0xC0232A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0222B.asm:130 AND #$FF00
    // Overlapping static entry reached from 0xC0232A.
    case 0xC0232C: cpu.execute_instruction<0xFF>(0x026518, 4); return true;
    // src/unknown/C0/C0222B.asm:131 CLC
    case 0xC0232D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:132 ADC @VIRTUAL02
    case 0xC0232E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:133 STA @VIRTUAL02
    case 0xC02330: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:134 STA @LOCAL04
    case 0xC02332: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0222B.asm:135 LDY @LOCAL06
    case 0xC02334: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B.asm:136 STY @VIRTUAL02
    case 0xC02336: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:137 LDA @LOCAL0C
    case 0xC02338: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0222B.asm:138 XBA
    case 0xC0233A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:139 AND #$FF00
    case 0xC0233B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0222B.asm:139 AND #$FF00
    // Overlapping static entry reached from 0xC0233B.
    case 0xC0233D: cpu.execute_instruction<0xFF>(0x026518, 4); return true;
    // src/unknown/C0/C0222B.asm:140 CLC
    case 0xC0233E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:141 ADC @VIRTUAL02
    case 0xC0233F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:142 TAY
    case 0xC02341: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:143 STY @LOCAL03
    case 0xC02342: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C0/C0222B.asm:144 LDA @LOCAL04
    case 0xC02344: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0222B.asm:145 STA @VIRTUAL02
    case 0xC02346: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:146 SEC
    case 0xC02348: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:147 SBC BG1_X_POS
    case 0xC02349: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C0/C0222B.asm:148 STA @LOCAL05
    case 0xC0234C: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:149 TYA
    case 0xC0234E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:150 SEC
    case 0xC0234F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:151 SBC BG1_Y_POS
    case 0xC02350: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C0/C0222B.asm:152 TAX
    case 0xC02353: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:153 LDA DEBUG
    case 0xC02354: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/unknown/C0/C0222B.asm:154 BEQ @UNKNOWN8
    case 0xC02357: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/unknown/C0/C0222B.asm:155 LDA PAD_STATE
    case 0xC02359: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/C0/C0222B.asm:156 AND #PAD::L_BUTTON | PAD::R_BUTTON
    case 0xC0235C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000030, 2); else cpu.execute_instruction<0x29>(0x000030, 3); return true;
    // src/unknown/C0/C0222B.asm:156 AND #PAD::L_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC0235C.
    case 0xC0235E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0222B.asm:157 BNE @UNKNOWN6
    case 0xC0235F: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:158 LDA NPC_SPAWNS_ENABLED
    case 0xC02361: cpu.execute_instruction<0xAD>(0x004A58, 3); return true;
    // src/unknown/C0/C0222B.asm:159 DEC
    case 0xC02364: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:160 BEQ @UNKNOWN9
    case 0xC02365: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C0/C0222B.asm:162 LDA @LOCAL05
    case 0xC02367: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:163 CMP #256
    case 0xC02369: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0222B.asm:163 CMP #256
    // Overlapping static entry reached from 0xC02369.
    case 0xC0236B: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0222B.asm:164 BCS @UNKNOWN9
    case 0xC0236C: cpu.execute_instruction<0xB0>(0x000023, 2); return true;
    // src/unknown/C0/C0222B.asm:164 BCS @UNKNOWN9
    // Overlapping static entry reached from 0xC0236B.
    case 0xC0236D: cpu.execute_instruction<0x23>(0x0000E0, 2); return true;
    // src/unknown/C0/C0222B.asm:165 CPX #224
    case 0xC0236E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000E0, 2); else cpu.execute_instruction<0xE0>(0x0000E0, 3); return true;
    // src/unknown/C0/C0222B.asm:165 CPX #224
    // Overlapping static entry reached from 0xC0236D.
    case 0xC0236F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x00B000, 3); return true;
    // src/unknown/C0/C0222B.asm:165 CPX #224
    // Overlapping static entry reached from 0xC0236E.
    case 0xC02370: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0222B.asm:166 BCCL @UNKNOWN27
    case 0xC02371: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0222B.asm:166 BCCL @UNKNOWN27
    // Overlapping static entry reached from 0xC0236F.
    case 0xC02372: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:166 BCCL @UNKNOWN27
    case 0xC02373: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:166 BCCL @UNKNOWN27
    // Overlapping static entry reached from 0xC02372.
    case 0xC02374: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:166 BCCL @UNKNOWN27
    case 0xC02375: cpu.execute_instruction<0x4C>(0x00254F, 3); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:166 BCCL @UNKNOWN27
    // Overlapping static entry reached from 0xC02374.
    case 0xC02376: cpu.execute_instruction<0x4F>(0x178025, 4); return true;
    // src/unknown/C0/C0222B.asm:167 BRA @UNKNOWN9
    case 0xC02378: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C0/C0222B.asm:169 LDA NPC_SPAWNS_ENABLED
    case 0xC0237A: cpu.execute_instruction<0xAD>(0x004A58, 3); return true;
    // src/unknown/C0/C0222B.asm:170 DEC
    case 0xC0237D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:171 BEQ @UNKNOWN9
    case 0xC0237E: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0222B.asm:172 LDA @LOCAL05
    case 0xC02380: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:173 CMP #256
    case 0xC02382: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0222B.asm:173 CMP #256
    // Overlapping static entry reached from 0xC02382.
    case 0xC02384: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0222B.asm:174 BCS @UNKNOWN9
    case 0xC02385: cpu.execute_instruction<0xB0>(0x00000A, 2); return true;
    // src/unknown/C0/C0222B.asm:174 BCS @UNKNOWN9
    // Overlapping static entry reached from 0xC02384.
    case 0xC02386: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:175 CPX #224
    case 0xC02387: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000E0, 2); else cpu.execute_instruction<0xE0>(0x0000E0, 3); return true;
    // src/unknown/C0/C0222B.asm:175 CPX #224
    // Overlapping static entry reached from 0xC02387.
    case 0xC02389: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0222B.asm:176 BCCL @UNKNOWN27
    case 0xC0238A: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:176 BCCL @UNKNOWN27
    case 0xC0238C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:176 BCCL @UNKNOWN27
    case 0xC0238E: cpu.execute_instruction<0x4C>(0x00254F, 3); return true;
    // src/unknown/C0/C0222B.asm:178 LDA @LOCAL05
    case 0xC02391: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:179 STA @VIRTUAL02
    case 0xC02393: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:180 LDA #.LOWORD(-64)
    case 0xC02395: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x00FFC0, 3); return true;
    // src/unknown/C0/C0222B.asm:180 LDA #.LOWORD(-64)
    // Overlapping static entry reached from 0xC02395.
    case 0xC02397: cpu.execute_instruction<0xFF>(0x02E518, 4); return true;
    // src/unknown/C0/C0222B.asm:181 CLC
    case 0xC02398: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:182 SBC @VIRTUAL02
    case 0xC02399: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C0/C0222B.asm:183 JUMPGTS @UNKNOWN27
    case 0xC0239B: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C0/C0222B.asm:183 JUMPGTS @UNKNOWN27
    case 0xC0239D: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:183 JUMPGTS @UNKNOWN27
    case 0xC0239F: cpu.execute_instruction<0x4C>(0x00254F, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C0/C0222B.asm:183 JUMPGTS @UNKNOWN27
    case 0xC023A2: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:183 JUMPGTS @UNKNOWN27
    case 0xC023A4: cpu.execute_instruction<0x4C>(0x00254F, 3); return true;
    // src/unknown/C0/C0222B.asm:184 LDA @LOCAL05
    case 0xC023A7: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:185 STA @VIRTUAL02
    case 0xC023A9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:186 LDA #320
    case 0xC023AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000140, 3); return true;
    // src/unknown/C0/C0222B.asm:186 LDA #320
    // Overlapping static entry reached from 0xC023AB.
    case 0xC023AD: cpu.execute_instruction<0x01>(0x000018, 2); return true;
    // src/unknown/C0/C0222B.asm:187 CLC
    case 0xC023AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:188 SBC @VIRTUAL02
    case 0xC023AF: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C0/C0222B.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023B1: cpu.execute_instruction<0x50>(0x000005, 2); return true;
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C0/C0222B.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023B3: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023B5: cpu.execute_instruction<0x4C>(0x00254F, 3); return true;
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C0/C0222B.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023B8: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023BA: cpu.execute_instruction<0x4C>(0x00254F, 3); return true;
    // src/unknown/C0/C0222B.asm:190 STX @VIRTUAL02
    case 0xC023BD: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:191 LDA #.LOWORD(-64)
    case 0xC023BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x00FFC0, 3); return true;
    // src/unknown/C0/C0222B.asm:191 LDA #.LOWORD(-64)
    // Overlapping static entry reached from 0xC023BF.
    case 0xC023C1: cpu.execute_instruction<0xFF>(0x02E518, 4); return true;
    // src/unknown/C0/C0222B.asm:192 CLC
    case 0xC023C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:193 SBC @VIRTUAL02
    case 0xC023C3: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C0/C0222B.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023C5: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C0/C0222B.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023C7: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023C9: cpu.execute_instruction<0x4C>(0x00254F, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C0/C0222B.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023CC: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023CE: cpu.execute_instruction<0x4C>(0x00254F, 3); return true;
    // src/unknown/C0/C0222B.asm:195 STX @VIRTUAL02
    case 0xC023D1: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:196 LDA #320
    case 0xC023D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000140, 3); return true;
    // src/unknown/C0/C0222B.asm:196 LDA #320
    // Overlapping static entry reached from 0xC023D3.
    case 0xC023D5: cpu.execute_instruction<0x01>(0x000018, 2); return true;
    // src/unknown/C0/C0222B.asm:197 CLC
    case 0xC023D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:198 SBC @VIRTUAL02
    case 0xC023D7: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C0/C0222B.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023D9: cpu.execute_instruction<0x50>(0x000005, 2); return true;
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C0/C0222B.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023DB: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023DD: cpu.execute_instruction<0x4C>(0x00254F, 3); return true;
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C0/C0222B.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023E0: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023E2: cpu.execute_instruction<0x4C>(0x00254F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x008985, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023E5.
    case 0xC023E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023E8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023E7.
    case 0xC023E9: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023E9.
    case 0xC023EB: cpu.execute_instruction<0xCF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023EA.
    case 0xC023EC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0222B.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023ED: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0222B.asm:201 LDA @LOCAL08
    case 0xC023EF: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/unknown/C0/C0222B.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC023F1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC023F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC023F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC023F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/unknown/C0/C0222B.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC023F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/unknown/C0/C0222B.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC023F7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0222B.asm:203 CLC
    case 0xC023F9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:204 ADC @VIRTUAL06
    case 0xC023FA: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:205 STA @VIRTUAL06
    case 0xC023FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:206 STA @LOCAL02
    case 0xC023FE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0222B.asm:207 LDA @VIRTUAL06+2
    case 0xC02400: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0222B.asm:208 STA @LOCAL02+2
    case 0xC02402: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0222B.asm:209 LDX #.LOWORD(-1)
    case 0xC02404: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0222B.asm:209 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02404.
    case 0xC02406: cpu.execute_instruction<0xFF>(0xAD1A86, 4); return true;
    // src/unknown/C0/C0222B.asm:210 STX @LOCAL05
    case 0xC02407: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:211 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC02409: cpu.execute_instruction<0xAD>(0x00B4EF, 3); return true;
    // src/unknown/C0/C0222B.asm:211 LDA PHOTOGRAPH_MAP_LOADING_MODE
    // Overlapping static entry reached from 0xC02406.
    case 0xC0240A: cpu.execute_instruction<0xEF>(0x03F0B4, 4); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:212 BNEL @UNKNOWN25
    case 0xC0240C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:212 BNEL @UNKNOWN25
    case 0xC0240E: cpu.execute_instruction<0x4C>(0x0024FB, 3); return true;
    // src/unknown/C0/C0222B.asm:213 LDA DEBUG
    case 0xC02411: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/unknown/C0/C0222B.asm:214 BEQ @UNKNOWN20
    case 0xC02414: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/unknown/C0/C0222B.asm:215 SEP #PROC_FLAGS::ACCUM8
    case 0xC02416: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:216 LDY #npc_config::appearance_style
    case 0xC02418: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C0/C0222B.asm:216 LDY #npc_config::appearance_style
    // Overlapping static entry reached from 0xC02418.
    case 0xC0241A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B.asm:217 LDA [@VIRTUAL06],Y
    case 0xC0241B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:218 REP #PROC_FLAGS::ACCUM8
    case 0xC0241D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:219 AND #$00FF
    case 0xC0241F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B.asm:219 AND #$00FF
    // Overlapping static entry reached from 0xC0241F.
    case 0xC02421: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0222B.asm:220 STA @LOCAL06
    case 0xC02422: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B.asm:221 BEQ @UNKNOWN21
    case 0xC02424: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/unknown/C0/C0222B.asm:222 JSL UNKNOWN_EFE6CF
    case 0xC02426: cpu.execute_instruction<0x22>(0xEFE6CF, 4); return true;
    // src/unknown/C0/C0222B.asm:223 CMP #0
    case 0xC0242A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0222B.asm:223 CMP #0
    // Overlapping static entry reached from 0xC0242A.
    case 0xC0242C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0222B.asm:224 BEQ @UNKNOWN21
    case 0xC0242D: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/unknown/C0/C0222B.asm:225 LDY #npc_config::event_flag
    case 0xC0242F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C0/C0222B.asm:225 LDY #npc_config::event_flag
    // Overlapping static entry reached from 0xC0242F.
    case 0xC02431: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B.asm:226 LDA [@VIRTUAL06],Y
    case 0xC02432: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:227 JSL GET_EVENT_FLAG
    case 0xC02434: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C0/C0222B.asm:228 STA @VIRTUAL02
    case 0xC02438: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:229 LDA @LOCAL06
    case 0xC0243A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B.asm:230 DEC
    case 0xC0243C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:231 DEC
    case 0xC0243D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:232 EOR @VIRTUAL02
    case 0xC0243E: cpu.execute_instruction<0x45>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:233 AND #$0001
    case 0xC02440: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0222B.asm:233 AND #$0001
    // Overlapping static entry reached from 0xC02440.
    case 0xC02442: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0222B.asm:234 BEQL @UNKNOWN27
    case 0xC02443: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:234 BEQL @UNKNOWN27
    case 0xC02445: cpu.execute_instruction<0x4C>(0x00254F, 3); return true;
    // src/unknown/C0/C0222B.asm:235 BRA @UNKNOWN21
    case 0xC02448: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C0222B.asm:237 SEP #PROC_FLAGS::ACCUM8
    case 0xC0244A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:238 LDY #npc_config::appearance_style
    case 0xC0244C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C0/C0222B.asm:238 LDY #npc_config::appearance_style
    // Overlapping static entry reached from 0xC0244C.
    case 0xC0244E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B.asm:239 LDA [@VIRTUAL06],Y
    case 0xC0244F: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:240 REP #PROC_FLAGS::ACCUM8
    case 0xC02451: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:241 AND #$00FF
    case 0xC02453: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B.asm:241 AND #$00FF
    // Overlapping static entry reached from 0xC02453.
    case 0xC02455: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0222B.asm:242 STA @LOCAL07
    case 0xC02456: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C0222B.asm:243 BEQ @UNKNOWN21
    case 0xC02458: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C0/C0222B.asm:244 LDY #npc_config::event_flag
    case 0xC0245A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C0/C0222B.asm:244 LDY #npc_config::event_flag
    // Overlapping static entry reached from 0xC0245A.
    case 0xC0245C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B.asm:245 LDA [@VIRTUAL06],Y
    case 0xC0245D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:246 JSL GET_EVENT_FLAG
    case 0xC0245F: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C0/C0222B.asm:247 STA @VIRTUAL02
    case 0xC02463: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:248 LDA @LOCAL07
    case 0xC02465: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0222B.asm:249 DEC
    case 0xC02467: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:250 DEC
    case 0xC02468: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:251 EOR @VIRTUAL02
    case 0xC02469: cpu.execute_instruction<0x45>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:252 AND #$0001
    case 0xC0246B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0222B.asm:252 AND #$0001
    // Overlapping static entry reached from 0xC0246B.
    case 0xC0246D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0222B.asm:253 BEQL @UNKNOWN27
    case 0xC0246E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:253 BEQL @UNKNOWN27
    case 0xC02470: cpu.execute_instruction<0x4C>(0x00254F, 3); return true;
    // src/unknown/C0/C0222B.asm:255 LDA DEBUG
    case 0xC02473: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/unknown/C0/C0222B.asm:256 BEQ @UNKNOWN23
    case 0xC02476: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/unknown/C0/C0222B.asm:257 LDA SHOW_NPC_FLAG
    case 0xC02478: cpu.execute_instruction<0xAD>(0x004A66, 3); return true;
    // src/unknown/C0/C0222B.asm:258 BEQ @UNKNOWN22
    case 0xC0247B: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C0/C0222B.asm:259 LDA [@VIRTUAL06]
    case 0xC0247D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:260 AND #$00FF
    case 0xC0247F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B.asm:260 AND #$00FF
    // Overlapping static entry reached from 0xC0247F.
    case 0xC02481: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0222B.asm:261 CMP #3
    case 0xC02482: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0222B.asm:261 CMP #3
    // Overlapping static entry reached from 0xC02482.
    case 0xC02484: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:262 BNEL @UNKNOWN26
    case 0xC02485: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:262 BNEL @UNKNOWN26
    case 0xC02487: cpu.execute_instruction<0x4C>(0x002529, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0248A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0248C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0248E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02490: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0222B.asm:265 LDY #npc_config::event_script
    case 0xC02492: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C0/C0222B.asm:265 LDY #npc_config::event_script
    // Overlapping static entry reached from 0xC02492.
    case 0xC02494: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B.asm:266 LDA [@VIRTUAL06],Y
    case 0xC02495: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:267 JSL UNKNOWN_EFE6E2
    case 0xC02497: cpu.execute_instruction<0x22>(0xEFE6E2, 4); return true;
    // src/unknown/C0/C0222B.asm:268 STA @LOCAL07
    case 0xC0249B: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C0222B.asm:269 LDA @LOCAL04
    case 0xC0249D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0222B.asm:270 STA @VIRTUAL02
    case 0xC0249F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:271 STA @LOCAL00
    case 0xC024A1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0222B.asm:272 LDY @LOCAL03
    case 0xC024A3: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C0222B.asm:273 STY @LOCAL01
    case 0xC024A5: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0222B.asm:274 LDY #.LOWORD(-1)
    case 0xC024A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0222B.asm:274 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC024A7.
    case 0xC024A9: cpu.execute_instruction<0xFF>(0xA51A84, 4); return true;
    // src/unknown/C0/C0222B.asm:275 STY @LOCAL05
    case 0xC024AA: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:276 LDA @LOCAL07
    case 0xC024AC: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0222B.asm:276 LDA @LOCAL07
    // Overlapping static entry reached from 0xC024A9.
    case 0xC024AD: cpu.execute_instruction<0x1E>(0x00A0AA, 3); return true;
    // src/unknown/C0/C0222B.asm:277 TAX
    case 0xC024AE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:278 LDY #npc_config::sprite
    case 0xC024AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0222B.asm:278 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC024AD.
    case 0xC024B0: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C0222B.asm:278 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC024AF.
    case 0xC024B1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B.asm:279 LDA [@VIRTUAL06],Y
    case 0xC024B2: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:280 LDY @LOCAL05
    case 0xC024B4: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:281 JSL CREATE_ENTITY
    case 0xC024B6: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/C0/C0222B.asm:282 TAX
    case 0xC024BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:283 STX @LOCAL05
    case 0xC024BB: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:284 BRA @UNKNOWN26
    case 0xC024BD: cpu.execute_instruction<0x80>(0x00006A, 2); return true;
    // src/unknown/C0/C0222B.asm:286 LDA SHOW_NPC_FLAG
    case 0xC024BF: cpu.execute_instruction<0xAD>(0x004A66, 3); return true;
    // src/unknown/C0/C0222B.asm:287 BEQ @UNKNOWN24
    case 0xC024C2: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C0222B.asm:288 LDA [@VIRTUAL06]
    case 0xC024C4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:289 AND #$00FF
    case 0xC024C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B.asm:289 AND #$00FF
    // Overlapping static entry reached from 0xC024C6.
    case 0xC024C8: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0222B.asm:290 CMP #3
    case 0xC024C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0222B.asm:290 CMP #3
    // Overlapping static entry reached from 0xC024C9.
    case 0xC024CB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0222B.asm:291 BNE @UNKNOWN26
    case 0xC024CC: cpu.execute_instruction<0xD0>(0x00005B, 2); return true;
    // src/unknown/C0/C0222B.asm:293 LDA @LOCAL04
    case 0xC024CE: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0222B.asm:294 STA @VIRTUAL02
    case 0xC024D0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:295 STA @LOCAL00
    case 0xC024D2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0222B.asm:296 LDY @LOCAL03
    case 0xC024D4: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C0222B.asm:297 STY @LOCAL01
    case 0xC024D6: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0222B.asm:298 LDY #.LOWORD(-1)
    case 0xC024D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0222B.asm:298 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC024D8.
    case 0xC024DA: cpu.execute_instruction<0xFF>(0xA51C84, 4); return true;
    // src/unknown/C0/C0222B.asm:299 STY @LOCAL06
    case 0xC024DB: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024DD: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024DA.
    case 0xC024DE: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024DF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024DE.
    case 0xC024E0: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024E1: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024E0.
    case 0xC024E2: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024E3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024E2.
    case 0xC024E4: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:301 LDY #npc_config::event_script
    case 0xC024E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C0/C0222B.asm:301 LDY #npc_config::event_script
    // Overlapping static entry reached from 0xC024E5.
    case 0xC024E7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B.asm:302 LDA [@VIRTUAL06],Y
    case 0xC024E8: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:303 TAX
    case 0xC024EA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:304 LDY #npc_config::sprite
    case 0xC024EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0222B.asm:304 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC024EB.
    case 0xC024ED: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B.asm:305 LDA [@VIRTUAL06],Y
    case 0xC024EE: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:306 LDY @LOCAL06
    case 0xC024F0: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B.asm:306 LDY @LOCAL06
    // Overlapping static entry reached from 0xC0256A.
    case 0xC024F1: cpu.execute_instruction<0x1C>(0x004922, 3); return true;
    // src/unknown/C0/C0222B.asm:307 JSL CREATE_ENTITY
    case 0xC024F2: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/C0/C0222B.asm:307 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC024F1.
    case 0xC024F4: cpu.execute_instruction<0x1E>(0x00AAC0, 3); return true;
    // src/unknown/C0/C0222B.asm:308 TAX
    case 0xC024F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:309 STX @LOCAL05
    case 0xC024F7: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:310 BRA @UNKNOWN26
    case 0xC024F9: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C0/C0222B.asm:312 SEP #PROC_FLAGS::ACCUM8
    case 0xC024FB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:313 LDY #npc_config::appearance_style
    case 0xC024FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C0/C0222B.asm:313 LDY #npc_config::appearance_style
    // Overlapping static entry reached from 0xC024FD.
    case 0xC024FF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B.asm:314 LDA [@VIRTUAL06],Y
    case 0xC02500: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:315 REP #PROC_FLAGS::ACCUM8
    case 0xC02502: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:316 AND #$00FF
    case 0xC02504: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B.asm:316 AND #$00FF
    // Overlapping static entry reached from 0xC02504.
    case 0xC02506: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0222B.asm:317 BNE @UNKNOWN26
    case 0xC02507: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:318 LDA @LOCAL04
    case 0xC02509: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0222B.asm:319 STA @VIRTUAL02
    case 0xC0250B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B.asm:320 STA @LOCAL00
    case 0xC0250D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0222B.asm:321 LDY @LOCAL03
    case 0xC0250F: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C0222B.asm:322 STY @LOCAL01
    case 0xC02511: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0222B.asm:323 LDY #.LOWORD(-1)
    case 0xC02513: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0222B.asm:323 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02513.
    case 0xC02515: cpu.execute_instruction<0xFF>(0xA21A84, 4); return true;
    // src/unknown/C0/C0222B.asm:324 STY @LOCAL05
    case 0xC02516: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:325 LDX #EVENT_SCRIPT::EVENT_799
    case 0xC02518: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001F, 2); else cpu.execute_instruction<0xA2>(0x00031F, 3); return true;
    // src/unknown/C0/C0222B.asm:325 LDX #EVENT_SCRIPT::EVENT_799
    // Overlapping static entry reached from 0xC02515.
    case 0xC02519: cpu.execute_instruction<0x1F>(0x01A003, 4); return true;
    // src/unknown/C0/C0222B.asm:325 LDX #EVENT_SCRIPT::EVENT_799
    // Overlapping static entry reached from 0xC02518.
    case 0xC0251A: cpu.execute_instruction<0x03>(0x0000A0, 2); return true;
    // src/unknown/C0/C0222B.asm:326 LDY #npc_config::sprite
    case 0xC0251B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0222B.asm:326 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC0251A.
    case 0xC0251C: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C0222B.asm:326 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC0251B.
    case 0xC0251D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B.asm:327 LDA [@VIRTUAL06],Y
    case 0xC0251E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:328 LDY @LOCAL05
    case 0xC02520: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:329 JSL CREATE_ENTITY
    case 0xC02522: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/C0/C0222B.asm:330 TAX
    case 0xC02526: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:331 STX @LOCAL05
    case 0xC02527: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:331 STX @LOCAL05
    // Overlapping static entry reached from 0xC02576.
    case 0xC02528: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:333 LDX @LOCAL05
    case 0xC02529: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B.asm:334 CPX #.LOWORD(-1)
    case 0xC0252B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0222B.asm:334 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0252B.
    case 0xC0252D: cpu.execute_instruction<0xFF>(0x8A1FF0, 4); return true;
    // src/unknown/C0/C0222B.asm:335 BEQ @UNKNOWN27
    case 0xC0252E: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C0/C0222B.asm:336 TXA
    case 0xC02530: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:337 ASL
    case 0xC02531: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B.asm:338 TAX
    case 0xC02532: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02533: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02535: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02537: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02539: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0222B.asm:340 SEP #PROC_FLAGS::ACCUM8
    case 0xC0253B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:341 LDY #npc_config::direction
    case 0xC0253D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C0222B.asm:341 LDY #npc_config::direction
    // Overlapping static entry reached from 0xC0253D.
    case 0xC0253F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B.asm:342 LDA [@VIRTUAL06],Y
    case 0xC02540: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B.asm:343 REP #PROC_FLAGS::ACCUM8
    case 0xC02542: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:343 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC02591.
    case 0xC02543: cpu.execute_instruction<0x20>(0x00FF29, 3); return true;
    // src/unknown/C0/C0222B.asm:344 AND #$00FF
    case 0xC02544: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B.asm:344 AND #$00FF
    // Overlapping static entry reached from 0xC02544.
    case 0xC02546: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0222B.asm:345 STA ENTITY_DIRECTIONS,X
    case 0xC02547: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C0222B.asm:346 LDA @LOCAL08
    case 0xC0254A: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C0222B.asm:347 STA ENTITY_NPC_IDS,X
    case 0xC0254C: cpu.execute_instruction<0x9D>(0x002C9A, 3); return true;
    // src/unknown/C0/C0222B.asm:349 INC @LOCAL09
    case 0xC0254F: cpu.execute_instruction<0xE6>(0x000022, 2); return true;
    // src/unknown/C0/C0222B.asm:351 LDA @LOCAL09
    case 0xC02551: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C0/C0222B.asm:352 CMP @LOCAL0A
    case 0xC02553: cpu.execute_instruction<0xC5>(0x000024, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B.asm:353 BNEL @UNKNOWN3
    case 0xC02555: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B.asm:353 BNEL @UNKNOWN3
    case 0xC02557: cpu.execute_instruction<0x4C>(0x002291, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0222B.asm:355 END_C_FUNCTION
    case 0xC0255A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0222B.asm:355 END_C_FUNCTION
    case 0xC0255B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0255C.asm (unresolved).
bool execute_unresolved_c0_c0255c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0255C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0255C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0255C.asm:11 END_STACK_VARS
    case 0xC0255E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0255C.asm:11 END_STACK_VARS
    case 0xC0255F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0255C.asm:11 END_STACK_VARS
    case 0xC02560: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0255C.asm:11 END_STACK_VARS
    case 0xC02561: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0255C.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC02561.
    case 0xC02563: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0255C.asm:11 END_STACK_VARS
    case 0xC02564: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0255C.asm:11 END_STACK_VARS
    case 0xC02565: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:12 STA @VIRTUAL04
    case 0xC02566: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0255C.asm:12 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC02563.
    case 0xC02567: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C0/C0255C.asm:13 LDA #$8000
    case 0xC02568: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C0/C0255C.asm:13 LDA #$8000
    // Overlapping static entry reached from 0xC02567.
    case 0xC02569: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0255C.asm:13 LDA #$8000
    // Overlapping static entry reached from 0xC02568.
    case 0xC0256A: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // src/unknown/C0/C0255C.asm:14 STA @LOCAL03
    case 0xC0256B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0255C.asm:15 LDA NPC_SPAWNS_ENABLED
    case 0xC0256D: cpu.execute_instruction<0xAD>(0x004A58, 3); return true;
    // src/unknown/C0/C0255C.asm:16 BEQ @UNKNOWN3
    case 0xC02570: cpu.execute_instruction<0xF0>(0x00005B, 2); return true;
    // src/unknown/C0/C0255C.asm:17 LDY @LOCAL02
    case 0xC02572: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0255C.asm:18 CPY #$8000
    case 0xC02574: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008000, 3); return true;
    // src/unknown/C0/C0255C.asm:18 CPY #$8000
    // Overlapping static entry reached from 0xC02574.
    case 0xC02576: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C0255C.asm:19 BCS @UNKNOWN3
    case 0xC02577: cpu.execute_instruction<0xB0>(0x000054, 2); return true;
    // src/unknown/C0/C0255C.asm:20 TXA
    case 0xC02579: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:21 LSR
    case 0xC0257A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:22 LSR
    case 0xC0257B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:23 LSR
    case 0xC0257C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:24 LSR
    case 0xC0257D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:25 LSR
    case 0xC0257E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:26 STA @LOCAL01
    case 0xC0257F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0255C.asm:27 LDA @VIRTUAL04
    case 0xC02581: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0255C.asm:28 DEC
    case 0xC02583: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:29 DEC
    case 0xC02584: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:30 STA @VIRTUAL02
    case 0xC02585: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:31 STA @LOCAL00
    case 0xC02587: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0255C.asm:32 BRA @UNKNOWN2
    case 0xC02589: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/unknown/C0/C0255C.asm:34 LDA @LOCAL00
    case 0xC0258B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0255C.asm:35 STA @VIRTUAL02
    case 0xC0258D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:35 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC025DF.
    case 0xC0258E: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C0/C0255C.asm:36 CMP #$8000
    case 0xC0258F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C0255C.asm:36 CMP #$8000
    // Overlapping static entry reached from 0xC0258F.
    case 0xC02591: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C0255C.asm:37 BCS @UNKNOWN1
    case 0xC02592: cpu.execute_instruction<0xB0>(0x00001F, 2); return true;
    // src/unknown/C0/C0255C.asm:38 LDA @VIRTUAL02
    case 0xC02594: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:39 LSR
    case 0xC02596: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:40 LSR
    case 0xC02597: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:41 LSR
    case 0xC02598: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:42 LSR
    case 0xC02599: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:43 LSR
    case 0xC0259A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:44 TAY
    case 0xC0259B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:45 STY @LOCAL02
    case 0xC0259C: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C0255C.asm:46 LDA @LOCAL03
    case 0xC0259E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0255C.asm:47 STA @VIRTUAL02
    case 0xC025A0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:48 TYA
    case 0xC025A2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:49 CMP @VIRTUAL02
    case 0xC025A3: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:50 BEQ @UNKNOWN1
    case 0xC025A5: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0255C.asm:51 LDX @LOCAL01
    case 0xC025A7: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0255C.asm:52 TYA
    case 0xC025A9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:53 JSL UNKNOWN_C0222B
    case 0xC025AA: cpu.execute_instruction<0x22>(0xC0222B, 4); return true;
    // src/unknown/C0/C0255C.asm:54 LDY @LOCAL02
    case 0xC025AE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0255C.asm:55 TYA
    case 0xC025B0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:56 STA @LOCAL03
    case 0xC025B1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0255C.asm:58 LDA @LOCAL00
    case 0xC025B3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0255C.asm:59 STA @VIRTUAL02
    case 0xC025B5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:60 INC @VIRTUAL02
    case 0xC025B7: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:61 LDA @VIRTUAL02
    case 0xC025B9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:62 STA @LOCAL00
    case 0xC025BB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0255C.asm:64 LDA @VIRTUAL04
    case 0xC025BD: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0255C.asm:65 CLC
    case 0xC025BF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:66 ADC #36
    case 0xC025C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000024, 2); else cpu.execute_instruction<0x69>(0x000024, 3); return true;
    // src/unknown/C0/C0255C.asm:66 ADC #36
    // Overlapping static entry reached from 0xC025C0.
    case 0xC025C2: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C0255C.asm:67 PHA
    case 0xC025C3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:68 LDA @VIRTUAL02
    case 0xC025C4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:69 PLY
    case 0xC025C6: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:70 STY @VIRTUAL02
    case 0xC025C7: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:71 CMP @VIRTUAL02
    case 0xC025C9: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:72 BNE @UNKNOWN0
    case 0xC025CB: cpu.execute_instruction<0xD0>(0x0000BE, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0255C.asm:74 END_C_FUNCTION
    case 0xC025CD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0255C.asm:74 END_C_FUNCTION
    case 0xC025CE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C025CF.asm (unresolved).
bool execute_unresolved_c0_c025cf_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C025CF.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC025CF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025D1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025D2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025D3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC025D4.
    case 0xC025D6: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025D7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025D8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:11 STX @VIRTUAL04
    case 0xC025D9: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C025CF.asm:11 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC025D6.
    case 0xC025DA: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C0/C025CF.asm:12 STA @LOCAL02
    case 0xC025DB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C025CF.asm:12 STA @LOCAL02
    // Overlapping static entry reached from 0xC025DA.
    case 0xC025DC: cpu.execute_instruction<0x12>(0x0000A2, 2); return true;
    // src/unknown/C0/C025CF.asm:13 LDX #$8000
    case 0xC025DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x008000, 3); return true;
    // src/unknown/C0/C025CF.asm:13 LDX #$8000
    // Overlapping static entry reached from 0xC025DC.
    case 0xC025DE: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C025CF.asm:13 LDX #$8000
    // Overlapping static entry reached from 0xC025DD.
    case 0xC025DF: cpu.execute_instruction<0x80>(0x0000AD, 2); return true;
    // src/unknown/C0/C025CF.asm:14 LDA NPC_SPAWNS_ENABLED
    case 0xC025E0: cpu.execute_instruction<0xAD>(0x004A58, 3); return true;
    // src/unknown/C0/C025CF.asm:15 BEQ @UNKNOWN3
    case 0xC025E3: cpu.execute_instruction<0xF0>(0x000056, 2); return true;
    // src/unknown/C0/C025CF.asm:16 LDY @LOCAL01
    case 0xC025E5: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C025CF.asm:17 CPY #$8000
    case 0xC025E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008000, 3); return true;
    // src/unknown/C0/C025CF.asm:17 CPY #$8000
    // Overlapping static entry reached from 0xC025E7.
    case 0xC025E9: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C025CF.asm:18 BCS @UNKNOWN3
    case 0xC025EA: cpu.execute_instruction<0xB0>(0x00004F, 2); return true;
    // src/unknown/C0/C025CF.asm:19 LDA @LOCAL02
    case 0xC025EC: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C025CF.asm:20 LSR
    case 0xC025EE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:21 LSR
    case 0xC025EF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:22 LSR
    case 0xC025F0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:23 LSR
    case 0xC025F1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:24 LSR
    case 0xC025F2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:25 STA @LOCAL00
    case 0xC025F3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C025CF.asm:26 LDA @VIRTUAL04
    case 0xC025F5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C025CF.asm:27 STA @VIRTUAL02
    case 0xC025F7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:28 STA @LOCAL01
    case 0xC025F9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C025CF.asm:29 BRA @UNKNOWN2
    case 0xC025FB: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C0/C025CF.asm:31 LDA @LOCAL01
    case 0xC025FD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C025CF.asm:32 STA @VIRTUAL02
    case 0xC025FF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:33 CMP #$8000
    case 0xC02601: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C025CF.asm:33 CMP #$8000
    // Overlapping static entry reached from 0xC02601.
    case 0xC02603: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C025CF.asm:34 BCS @UNKNOWN1
    case 0xC02604: cpu.execute_instruction<0xB0>(0x00001B, 2); return true;
    // src/unknown/C0/C025CF.asm:35 LDA @VIRTUAL02
    case 0xC02606: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:36 LSR
    case 0xC02608: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:37 LSR
    case 0xC02609: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:38 LSR
    case 0xC0260A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:39 LSR
    case 0xC0260B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:40 LSR
    case 0xC0260C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:41 TAY
    case 0xC0260D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:42 STY @LOCAL02
    case 0xC0260E: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C025CF.asm:43 STX @VIRTUAL02
    case 0xC02610: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:44 TYA
    case 0xC02612: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:45 CMP @VIRTUAL02
    case 0xC02613: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:46 BEQ @UNKNOWN1
    case 0xC02615: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C025CF.asm:47 TYX
    case 0xC02617: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:48 LDA @LOCAL00
    case 0xC02618: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C025CF.asm:49 JSL UNKNOWN_C0222B
    case 0xC0261A: cpu.execute_instruction<0x22>(0xC0222B, 4); return true;
    // src/unknown/C0/C025CF.asm:50 LDY @LOCAL02
    case 0xC0261E: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C025CF.asm:51 TYX
    case 0xC02620: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:53 LDA @LOCAL01
    case 0xC02621: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C025CF.asm:54 STA @VIRTUAL02
    case 0xC02623: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:55 INC @VIRTUAL02
    case 0xC02625: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:56 LDA @VIRTUAL02
    case 0xC02627: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:57 STA @LOCAL01
    case 0xC02629: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C025CF.asm:59 LDA @VIRTUAL04
    case 0xC0262B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C025CF.asm:60 CLC
    case 0xC0262D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:61 ADC #32
    case 0xC0262E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/unknown/C0/C025CF.asm:61 ADC #32
    // Overlapping static entry reached from 0xC0262E.
    case 0xC02630: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C025CF.asm:62 PHA
    case 0xC02631: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:63 LDA @VIRTUAL02
    case 0xC02632: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:64 PLY
    case 0xC02634: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:65 STY @VIRTUAL02
    case 0xC02635: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:66 CMP @VIRTUAL02
    case 0xC02637: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:67 BNE @UNKNOWN0
    case 0xC02639: cpu.execute_instruction<0xD0>(0x0000C2, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C025CF.asm:69 END_C_FUNCTION
    case 0xC0263B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C025CF.asm:69 END_C_FUNCTION
    case 0xC0263C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0263D.asm (unresolved).
bool execute_unresolved_c0_c0263d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0263D.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0263D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0263D.asm:8 END_STACK_VARS
    case 0xC0263F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0263D.asm:8 END_STACK_VARS
    case 0xC02640: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0263D.asm:8 END_STACK_VARS
    case 0xC02641: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0263D.asm:8 END_STACK_VARS
    case 0xC02642: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0263D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC02642.
    case 0xC02644: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0263D.asm:8 END_STACK_VARS
    case 0xC02645: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0263D.asm:8 END_STACK_VARS
    case 0xC02646: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0263D.asm:9 CMP #MAP_WIDTH_TILES
    case 0xC02647: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/unknown/C0/C0263D.asm:9 CMP #MAP_WIDTH_TILES
    // Overlapping static entry reached from 0xC02644.
    case 0xC02648: cpu.execute_instruction<0x80>(0x000000, 2); return true;
    // src/unknown/C0/C0263D.asm:9 CMP #MAP_WIDTH_TILES
    // Overlapping static entry reached from 0xC02647.
    case 0xC02649: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0263D.asm:10 BCS @UNKNOWN0
    case 0xC0264A: cpu.execute_instruction<0xB0>(0x000017, 2); return true;
    // src/unknown/C0/C0263D.asm:11 CPX #MAP_HEIGHT_TILES
    case 0xC0264C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000A0, 2); else cpu.execute_instruction<0xE0>(0x0000A0, 3); return true;
    // src/unknown/C0/C0263D.asm:11 CPX #MAP_HEIGHT_TILES
    // Overlapping static entry reached from 0xC0264C.
    case 0xC0264E: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0263D.asm:12 BCS @UNKNOWN0
    case 0xC0264F: cpu.execute_instruction<0xB0>(0x000012, 2); return true;
    // src/unknown/C0/C0263D.asm:13 ASL
    case 0xC02651: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0263D.asm:14 STA @VIRTUAL02
    case 0xC02652: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0263D.asm:15 TXA
    case 0xC02654: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0263D.asm:16 XBA
    case 0xC02655: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0263D.asm:17 AND #$FF00
    case 0xC02656: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0263D.asm:17 AND #$FF00
    // Overlapping static entry reached from 0xC02656.
    case 0xC02658: cpu.execute_instruction<0xFF>(0x026518, 4); return true;
    // src/unknown/C0/C0263D.asm:18 CLC
    case 0xC02659: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0263D.asm:19 ADC @VIRTUAL02
    case 0xC0265A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0263D.asm:20 TAX
    case 0xC0265C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0263D.asm:21 LDA f:MAP_ENEMY_PLACEMENT,X
    case 0xC0265D: cpu.execute_instruction<0xBF>(0xD01880, 4); return true;
    // src/unknown/C0/C0263D.asm:22 BRA @UNKNOWN1
    case 0xC02661: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0263D.asm:24 LDA #$0000
    case 0xC02663: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0263D.asm:24 LDA #$0000
    // Overlapping static entry reached from 0xC02663.
    case 0xC02665: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/unknown/C0/C0263D.asm:26 PLD
    case 0xC02666: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0263D.asm:27 RTL
    case 0xC02667: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C02668.asm (unresolved).
bool execute_unresolved_c0_c02668_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C02668.asm:3 BEGIN_C_FUNCTION
    case 0xC02668: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC0266A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC0266B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC0266C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC0266D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x00FFCE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    // Overlapping static entry reached from 0xC0266D.
    case 0xC0266F: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC02670: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC02671: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:22 STY @LOCAL0E
    case 0xC02672: cpu.execute_instruction<0x84>(0x000030, 2); return true;
    // src/unknown/C0/C02668.asm:22 STY @LOCAL0E
    // Overlapping static entry reached from 0xC0266F.
    case 0xC02673: cpu.execute_instruction<0x30>(0x000086, 2); return true;
    // src/unknown/C0/C02668.asm:23 STX @LOCAL0D
    case 0xC02674: cpu.execute_instruction<0x86>(0x00002E, 2); return true;
    // src/unknown/C0/C02668.asm:23 STX @LOCAL0D
    // Overlapping static entry reached from 0xC02673.
    case 0xC02675: cpu.execute_instruction<0x2E>(0x002C85, 3); return true;
    // src/unknown/C0/C02668.asm:24 STA @LOCAL0C
    case 0xC02676: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/unknown/C0/C02668.asm:25 LDA DEBUG
    case 0xC02678: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/unknown/C0/C02668.asm:26 BEQ @UNKNOWN0
    case 0xC0267B: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/unknown/C0/C02668.asm:27 JSL UNKNOWN_EFE759
    case 0xC0267D: cpu.execute_instruction<0x22>(0xEFE759, 4); return true;
    // src/unknown/C0/C02668.asm:28 CMP #0
    case 0xC02681: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:28 CMP #0
    // Overlapping static entry reached from 0xC02681.
    case 0xC02683: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:29 BEQ @UNKNOWN0
    case 0xC02684: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:30 JSL RAND
    case 0xC02686: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C0/C02668.asm:31 CMP #16
    case 0xC0268A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C0/C02668.asm:31 CMP #16
    // Overlapping static entry reached from 0xC0268A.
    case 0xC0268C: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C02668.asm:32 BCS @UNKNOWN0
    case 0xC0268D: cpu.execute_instruction<0xB0>(0x00000F, 2); return true;
    // src/unknown/C0/C02668.asm:33 STZ @LOCAL0B
    case 0xC0268F: cpu.execute_instruction<0x64>(0x00002A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    case 0xC02691: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002D, 2); else cpu.execute_instruction<0xA9>(0x00D52D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02691.
    case 0xC02693: cpu.execute_instruction<0xD5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    case 0xC02694: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02693.
    case 0xC02695: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    case 0xC02696: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02696.
    case 0xC02698: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    case 0xC02699: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C02668.asm:35 JMP @UNKNOWN31
    case 0xC0269B: cpu.execute_instruction<0x4C>(0x002A50, 3); return true;
    // src/unknown/C0/C02668.asm:37 LDA ENEMY_SPAWN_COUNTER
    case 0xC0269E: cpu.execute_instruction<0xAD>(0x004A7A, 3); return true;
    // src/unknown/C0/C02668.asm:38 INC
    case 0xC026A1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:39 STA ENEMY_SPAWN_COUNTER
    case 0xC026A2: cpu.execute_instruction<0x8D>(0x004A7A, 3); return true;
    // src/unknown/C0/C02668.asm:40 AND #$000F
    case 0xC026A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C02668.asm:40 AND #$000F
    // Overlapping static entry reached from 0xC026A5.
    case 0xC026A7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:41 BNEL @UNKNOWN10
    case 0xC026A8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:41 BNEL @UNKNOWN10
    case 0xC026AA: cpu.execute_instruction<0x4C>(0x002752, 3); return true;
    // src/unknown/C0/C02668.asm:42 LDA @LOCAL0C
    case 0xC026AD: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:43 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:43 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:43 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026B1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:44 LSR
    case 0xC026B2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:45 LSR
    case 0xC026B3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:46 LSR
    case 0xC026B4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:47 LSR
    case 0xC026B5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:48 LSR
    case 0xC026B6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:49 ASL
    case 0xC026B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:50 STA @VIRTUAL04
    case 0xC026B8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C02668.asm:51 LDA @LOCAL0D
    case 0xC026BA: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:52 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:52 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:52 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:53 LSR
    case 0xC026BF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:54 LSR
    case 0xC026C0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:55 LSR
    case 0xC026C1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:56 LSR
    case 0xC026C2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:58 CLC
    case 0xC026C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:59 ADC @VIRTUAL04
    case 0xC026CA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C02668.asm:60 TAX
    case 0xC026CC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:61 LDA f:MAP_DATA_PER_SECTOR_ATTRIBUTES_TABLE,X
    case 0xC026CD: cpu.execute_instruction<0xBF>(0xD7B200, 4); return true;
    // src/unknown/C0/C02668.asm:62 AND #$0007
    case 0xC026D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C02668.asm:62 AND #$0007
    // Overlapping static entry reached from 0xC026D1.
    case 0xC026D3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:63 BEQ @UNKNOWN2
    case 0xC026D4: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C0/C02668.asm:64 CMP #1
    case 0xC026D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C02668.asm:64 CMP #1
    // Overlapping static entry reached from 0xC026D6.
    case 0xC026D8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:65 BEQ @UNKNOWN3
    case 0xC026D9: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C0/C02668.asm:66 CMP #2
    case 0xC026DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C02668.asm:66 CMP #2
    // Overlapping static entry reached from 0xC026DB.
    case 0xC026DD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:67 BEQ @UNKNOWN4
    case 0xC026DE: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/C0/C02668.asm:68 CMP #3
    case 0xC026E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C02668.asm:68 CMP #3
    // Overlapping static entry reached from 0xC026E0.
    case 0xC026E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:69 BEQ @UNKNOWN5
    case 0xC026E3: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C0/C02668.asm:70 CMP #4
    case 0xC026E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C02668.asm:70 CMP #4
    // Overlapping static entry reached from 0xC026E5.
    case 0xC026E7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:71 BEQ @UNKNOWN6
    case 0xC026E8: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C0/C02668.asm:72 CMP #5
    case 0xC026EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C02668.asm:72 CMP #5
    // Overlapping static entry reached from 0xC026EA.
    case 0xC026EC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:73 BEQ @UNKNOWN7
    case 0xC026ED: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/unknown/C0/C02668.asm:74 BRA @UNKNOWN8
    case 0xC026EF: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/unknown/C0/C02668.asm:76 LDA #2
    case 0xC026F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C02668.asm:76 LDA #2
    // Overlapping static entry reached from 0xC026F1.
    case 0xC026F3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:77 STA @VIRTUAL02
    case 0xC026F4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:78 STA @LOCAL0A
    case 0xC026F6: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C02668.asm:79 BRA @UNKNOWN8
    case 0xC026F8: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/unknown/C0/C02668.asm:81 LDA #0
    case 0xC026FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:81 LDA #0
    // Overlapping static entry reached from 0xC026FA.
    case 0xC026FC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:82 STA @VIRTUAL02
    case 0xC026FD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:83 STA @LOCAL0A
    case 0xC026FF: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C02668.asm:84 BRA @UNKNOWN8
    case 0xC02701: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:86 LDA #1
    case 0xC02703: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C02668.asm:86 LDA #1
    // Overlapping static entry reached from 0xC02703.
    case 0xC02705: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:87 STA @VIRTUAL02
    case 0xC02706: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:88 STA @LOCAL0A
    case 0xC02708: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C02668.asm:89 BRA @UNKNOWN8
    case 0xC0270A: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C0/C02668.asm:91 LDA #0
    case 0xC0270C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:91 LDA #0
    // Overlapping static entry reached from 0xC0270C.
    case 0xC0270E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:92 STA @VIRTUAL02
    case 0xC0270F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:93 STA @LOCAL0A
    case 0xC02711: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C02668.asm:94 BRA @UNKNOWN8
    case 0xC02713: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C0/C02668.asm:96 LDA #5
    case 0xC02715: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C02668.asm:96 LDA #5
    // Overlapping static entry reached from 0xC02715.
    case 0xC02717: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:97 STA @VIRTUAL02
    case 0xC02718: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:98 STA @LOCAL0A
    case 0xC0271A: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C02668.asm:99 BRA @UNKNOWN8
    case 0xC0271C: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C0/C02668.asm:101 LDA #1
    case 0xC0271E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C02668.asm:101 LDA #1
    // Overlapping static entry reached from 0xC0271E.
    case 0xC02720: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:102 STA @VIRTUAL02
    case 0xC02721: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:103 STA @LOCAL0A
    case 0xC02723: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C02668.asm:105 JSL RAND
    case 0xC02725: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C0/C02668.asm:106 LDX @LOCAL0A
    case 0xC02729: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/unknown/C0/C02668.asm:107 STX @VIRTUAL02
    case 0xC0272B: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:108 LDY #100
    case 0xC0272D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000064, 2); else cpu.execute_instruction<0xA0>(0x000064, 3); return true;
    // src/unknown/C0/C02668.asm:108 LDY #100
    // Overlapping static entry reached from 0xC0272D.
    case 0xC0272F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:109 JSL MODULUS16
    case 0xC02730: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/unknown/C0/C02668.asm:110 CMP @VIRTUAL02
    case 0xC02734: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:111 BCC @UNKNOWN9
    case 0xC02736: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C02668.asm:112 JMP @UNKNOWN32
    case 0xC02738: cpu.execute_instruction<0x4C>(0x002A69, 3); return true;
    // src/unknown/C0/C02668.asm:114 LDA #MAGIC_BUTTERFLY_BATTLEGROUP
    case 0xC0273B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0001E1, 3); return true;
    // src/unknown/C0/C02668.asm:114 LDA #MAGIC_BUTTERFLY_BATTLEGROUP
    // Overlapping static entry reached from 0xC0273B.
    case 0xC0273D: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:115 STA @LOCAL0B
    case 0xC0273E: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C0/C02668.asm:115 STA @LOCAL0B
    // Overlapping static entry reached from 0xC0273D.
    case 0xC0273F: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:116 STA SPAWNING_ENEMY_GROUP
    case 0xC02740: cpu.execute_instruction<0x8D>(0x004A72, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:117 MOVE_INT f:BTL_ENTRY_PTR_TABLE +.SIZEOF(battle_entry_ptr_entry) * MAGIC_BUTTERFLY_BATTLEGROUP + battle_entry_ptr_entry::pointer, @VIRTUAL0A
    case 0xC02743: cpu.execute_instruction<0xAF>(0xD0D515, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:117 MOVE_INT f:BTL_ENTRY_PTR_TABLE +.SIZEOF(battle_entry_ptr_entry) * MAGIC_BUTTERFLY_BATTLEGROUP + battle_entry_ptr_entry::pointer, @VIRTUAL0A
    case 0xC02747: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:117 MOVE_INT f:BTL_ENTRY_PTR_TABLE +.SIZEOF(battle_entry_ptr_entry) * MAGIC_BUTTERFLY_BATTLEGROUP + battle_entry_ptr_entry::pointer, @VIRTUAL0A
    case 0xC02749: cpu.execute_instruction<0xAF>(0xD0D517, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:117 MOVE_INT f:BTL_ENTRY_PTR_TABLE +.SIZEOF(battle_entry_ptr_entry) * MAGIC_BUTTERFLY_BATTLEGROUP + battle_entry_ptr_entry::pointer, @VIRTUAL0A
    case 0xC0274D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C02668.asm:118 JMP @UNKNOWN31
    case 0xC0274F: cpu.execute_instruction<0x4C>(0x002A50, 3); return true;
    // src/unknown/C0/C02668.asm:120 LDY @LOCAL0E
    case 0xC02752: cpu.execute_instruction<0xA4>(0x000030, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C02668.asm:121 BEQL @UNKNOWN32
    case 0xC02754: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:121 BEQL @UNKNOWN32
    case 0xC02756: cpu.execute_instruction<0x4C>(0x002A69, 3); return true;
    // src/unknown/C0/C02668.asm:122 LDA @LOCAL0C
    case 0xC02759: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:123 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0275B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:123 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0275C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:123 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0275D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:124 LSR
    case 0xC0275E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:125 LSR
    case 0xC0275F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:126 LSR
    case 0xC02760: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:127 LSR
    case 0xC02761: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:128 LSR
    case 0xC02762: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:129 STA @VIRTUAL02
    case 0xC02763: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:130 LDA @LOCAL0D
    case 0xC02765: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:131 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC02767: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:131 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC02768: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:131 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC02769: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:132 LSR
    case 0xC0276A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:133 LSR
    case 0xC0276B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:134 LSR
    case 0xC0276C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:135 LSR
    case 0xC0276D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0276E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0276F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02770: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02771: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02772: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:137 CLC
    case 0xC02773: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:138 ADC @VIRTUAL02
    case 0xC02774: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:139 TAX
    case 0xC02776: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:140 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC02777: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/unknown/C0/C02668.asm:141 AND #$00FF
    case 0xC0277B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC0277B.
    case 0xC0277D: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C02668.asm:142 LSR
    case 0xC0277E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:143 LSR
    case 0xC0277F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:144 LSR
    case 0xC02780: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:145 CMP LOADED_MAP_TILE_COMBO
    case 0xC02781: cpu.execute_instruction<0xCD>(0x00436E, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:146 BNEL @UNKNOWN32
    case 0xC02784: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:146 BNEL @UNKNOWN32
    case 0xC02786: cpu.execute_instruction<0x4C>(0x002A69, 3); return true;
    // src/unknown/C0/C02668.asm:147 STY ENEMY_SPAWN_ENCOUNTER_ID
    case 0xC02789: cpu.execute_instruction<0x8C>(0x004A6C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    case 0xC0278C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x00B880, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0278C.
    case 0xC0278E: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    case 0xC0278F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    case 0xC02791: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC02791.
    case 0xC02793: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    case 0xC02794: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:149 TYA
    case 0xC02796: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:150 ASL
    case 0xC02797: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:151 ASL
    case 0xC02798: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:152 CLC
    case 0xC02799: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:153 ADC @VIRTUAL06
    case 0xC0279A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:154 STA @VIRTUAL06
    case 0xC0279C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0279E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0279E.
    case 0xC027A0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027A1: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027A3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027A4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027A6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027A8: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:156 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027AA: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:156 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027AC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:156 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027AE: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:156 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027B0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:157 LDA [@VIRTUAL06]
    case 0xC027B2: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:158 STA @LOCAL09
    case 0xC027B4: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C02668.asm:159 LDA #enemy_placement::groups
    case 0xC027B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C02668.asm:159 LDA #enemy_placement::groups
    // Overlapping static entry reached from 0xC027B6.
    case 0xC027B8: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C02668.asm:160 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC027B9: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C02668.asm:160 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC027BB: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C02668.asm:160 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC027BD: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C02668.asm:160 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC027BF: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:161 CLC
    case 0xC027C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:162 ADC @VIRTUAL06
    case 0xC027C2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:163 STA @VIRTUAL06
    case 0xC027C4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:164 STA @LOCAL08
    case 0xC027C6: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:165 LDA @VIRTUAL06+2
    case 0xC027C8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:166 STA @LOCAL08+2
    case 0xC027CA: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027CC: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027CE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027D0: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027D2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:168 INC @VIRTUAL06
    case 0xC027D4: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:169 INC @VIRTUAL06
    case 0xC027D6: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:170 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC027D8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:170 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC027DA: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:170 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC027DC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:170 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC027DE: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C02668.asm:171 LDA [@LOCAL07] ;enemy_placement::spawn_chance
    case 0xC027E0: cpu.execute_instruction<0xA7>(0x00001E, 2); return true;
    // src/unknown/C0/C02668.asm:172 AND #$00FF
    case 0xC027E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC027E2.
    case 0xC027E4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C02668.asm:173 STA ENEMY_SPAWN_CHANCE
    case 0xC027E5: cpu.execute_instruction<0x8D>(0x004A70, 3); return true;
    // src/unknown/C0/C02668.asm:174 LDX #0
    case 0xC027E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:174 LDX #0
    // Overlapping static entry reached from 0xC027E8.
    case 0xC027EA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C02668.asm:175 STX @LOCAL06
    case 0xC027EB: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:176 LDA @LOCAL09
    case 0xC027ED: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C0/C02668.asm:177 BEQ @UNKNOWN13
    case 0xC027EF: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/unknown/C0/C02668.asm:178 JSL GET_EVENT_FLAG
    case 0xC027F1: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C0/C02668.asm:179 CMP #0
    case 0xC027F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:179 CMP #0
    // Overlapping static entry reached from 0xC027F5.
    case 0xC027F7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:180 BEQ @UNKNOWN13
    case 0xC027F8: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C0/C02668.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC027FA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C02668.asm:182 LDY #enemy_placement::spawn_chance_alt
    case 0xC027FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C02668.asm:182 LDY #enemy_placement::spawn_chance_alt
    // Overlapping static entry reached from 0xC027FC.
    case 0xC027FE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C02668.asm:183 LDA [@VIRTUAL0A],Y
    case 0xC027FF: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C0/C02668.asm:184 REP #PROC_FLAGS::ACCUM8
    case 0xC02801: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C02668.asm:185 AND #$00FF
    case 0xC02803: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:185 AND #$00FF
    // Overlapping static entry reached from 0xC02803.
    case 0xC02805: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C02668.asm:186 STA ENEMY_SPAWN_CHANCE
    case 0xC02806: cpu.execute_instruction<0x8D>(0x004A70, 3); return true;
    // src/unknown/C0/C02668.asm:187 LDA [@LOCAL07]
    case 0xC02809: cpu.execute_instruction<0xA7>(0x00001E, 2); return true;
    // src/unknown/C0/C02668.asm:188 AND #$00FF
    case 0xC0280B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:188 AND #$00FF
    // Overlapping static entry reached from 0xC0280B.
    case 0xC0280D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:189 BEQ @UNKNOWN13
    case 0xC0280E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C02668.asm:190 LDX #8
    case 0xC02810: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C0/C02668.asm:190 LDX #8
    // Overlapping static entry reached from 0xC02810.
    case 0xC02812: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C02668.asm:191 STX @LOCAL06
    case 0xC02813: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:193 LDY ENEMY_SPAWN_CHANCE
    case 0xC02815: cpu.execute_instruction<0xAC>(0x004A70, 3); return true;
    // src/unknown/C0/C02668.asm:194 STY @LOCAL09
    case 0xC02818: cpu.execute_instruction<0x84>(0x000026, 2); return true;
    // src/unknown/C0/C02668.asm:195 LDA PIRACY_FLAG
    case 0xC0281A: cpu.execute_instruction<0xAD>(0x00B539, 3); return true;
    // src/unknown/C0/C02668.asm:196 BNE @UNKNOWN14
    case 0xC0281D: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/unknown/C0/C02668.asm:197 JSL RAND
    case 0xC0281F: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C0/C02668.asm:198 LDY @LOCAL09
    case 0xC02823: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/unknown/C0/C02668.asm:199 STY @VIRTUAL02
    case 0xC02825: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:200 LDY #100
    case 0xC02827: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000064, 2); else cpu.execute_instruction<0xA0>(0x000064, 3); return true;
    // src/unknown/C0/C02668.asm:200 LDY #100
    // Overlapping static entry reached from 0xC02827.
    case 0xC02829: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:201 JSL MULT168
    case 0xC0282A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C02668.asm:202 XBA
    case 0xC0282E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:203 AND #$00FF
    case 0xC0282F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:203 AND #$00FF
    // Overlapping static entry reached from 0xC0282F.
    case 0xC02831: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C0/C02668.asm:204 CMP @VIRTUAL02
    case 0xC02832: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:205 BCC @UNKNOWN14
    case 0xC02834: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C02668.asm:206 JMP @UNKNOWN32
    case 0xC02836: cpu.execute_instruction<0x4C>(0x002A69, 3); return true;
    // src/unknown/C0/C02668.asm:208 JSL RAND
    case 0xC02839: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C0/C02668.asm:209 AND #$0007
    case 0xC0283D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C02668.asm:209 AND #$0007
    // Overlapping static entry reached from 0xC0283D.
    case 0xC0283F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:210 STA @VIRTUAL02
    case 0xC02840: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:211 LDX @LOCAL06
    case 0xC02842: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:212 TXA
    case 0xC02844: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:213 CLC
    case 0xC02845: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:214 ADC @VIRTUAL02
    case 0xC02846: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:215 STA @LOCAL05
    case 0xC02848: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C02668.asm:216 LDX #0
    case 0xC0284A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:216 LDX #0
    // Overlapping static entry reached from 0xC0284A.
    case 0xC0284C: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:218 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC0284D: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:218 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC0284F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:218 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02851: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:218 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02853: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:219 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02855: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:219 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02857: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:219 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02859: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:219 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0285B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C02668.asm:220 LDA [@VIRTUAL0A] ;enemy_group::slots
    case 0xC0285D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C02668.asm:221 AND #$00FF
    case 0xC0285F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:221 AND #$00FF
    // Overlapping static entry reached from 0xC0285F.
    case 0xC02861: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:222 STA @VIRTUAL02
    case 0xC02862: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:223 TXA
    case 0xC02864: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:224 CLC
    case 0xC02865: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:225 ADC @VIRTUAL02
    case 0xC02866: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:226 TAX
    case 0xC02868: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:227 STX @VIRTUAL02
    case 0xC02869: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:228 LDA @LOCAL05
    case 0xC0286B: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C02668.asm:229 CMP @VIRTUAL02
    case 0xC0286D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:230 BCC @UNKNOWN16
    case 0xC0286F: cpu.execute_instruction<0x90>(0x000010, 2); return true;
    // src/unknown/C0/C02668.asm:231 LDA #.SIZEOF(enemy_group)
    case 0xC02871: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C02668.asm:231 LDA #.SIZEOF(enemy_group)
    // Overlapping static entry reached from 0xC02871.
    case 0xC02873: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:232 CLC
    case 0xC02874: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:233 ADC @VIRTUAL06
    case 0xC02875: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:234 STA @VIRTUAL06
    case 0xC02877: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:235 STA @LOCAL08
    case 0xC02879: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:236 LDA @VIRTUAL06+2
    case 0xC0287B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:237 STA @LOCAL08+2
    case 0xC0287D: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C02668.asm:238 BRA @UNKNOWN15
    case 0xC0287F: cpu.execute_instruction<0x80>(0x0000CC, 2); return true;
    // src/unknown/C0/C02668.asm:240 LDY #enemy_group::group
    case 0xC02881: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C02668.asm:240 LDY #enemy_group::group
    // Overlapping static entry reached from 0xC02881.
    case 0xC02883: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C02668.asm:241 LDA [@VIRTUAL06],Y
    case 0xC02884: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:242 STA @LOCAL0B
    case 0xC02886: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C0/C02668.asm:243 STA SPAWNING_ENEMY_GROUP
    case 0xC02888: cpu.execute_instruction<0x8D>(0x004A72, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC0288B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0288B.
    case 0xC0288D: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC0288E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0288D.
    case 0xC0288F: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC02890: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0288F.
    case 0xC02891: cpu.execute_instruction<0xD0>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC02890.
    case 0xC02892: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC02893: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:245 LDA @LOCAL0B
    case 0xC02895: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:246 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC02897: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:246 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC02898: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:246 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC02899: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:247 CLC
    case 0xC0289A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:248 ADC @VIRTUAL06
    case 0xC0289B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:249 STA @VIRTUAL06
    case 0xC0289D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0289F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0289F.
    case 0xC028A1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028A2: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028A4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028A5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028A7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028A9: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C0/C02668.asm:251 LDA @LOCAL0D
    case 0xC028AB: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:721 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:722 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:723 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:724 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:725 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028B1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:726 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:727 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:253 CLC
    case 0xC028B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:254 ADC @LOCAL0C
    case 0xC028B5: cpu.execute_instruction<0x65>(0x00002C, 2); return true;
    // src/unknown/C0/C02668.asm:255 STA @LOCAL06
    case 0xC028B7: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:256 LDY #0
    case 0xC028B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:256 LDY #0
    // Overlapping static entry reached from 0xC028B9.
    case 0xC028BB: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C02668.asm:257 BRA @UNKNOWN19
    case 0xC028BC: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/unknown/C0/C02668.asm:259 TYA
    case 0xC028BE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:260 ASL
    case 0xC028BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:261 TAX
    case 0xC028C0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:262 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC028C1: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/unknown/C0/C02668.asm:263 CMP #.LOWORD(-1)
    case 0xC028C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C02668.asm:263 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC028C4.
    case 0xC028C6: cpu.execute_instruction<0xFF>(0xA515F0, 4); return true;
    // src/unknown/C0/C02668.asm:264 BEQ @UNKNOWN18
    case 0xC028C7: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C0/C02668.asm:265 LDA @LOCAL0B
    case 0xC028C9: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C0/C02668.asm:265 LDA @LOCAL0B
    // Overlapping static entry reached from 0xC028C6.
    case 0xC028CA: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:266 CLC
    case 0xC028CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:267 ADC #$8000
    case 0xC028CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x008000, 3); return true;
    // src/unknown/C0/C02668.asm:267 ADC #$8000
    // Overlapping static entry reached from 0xC028CC.
    case 0xC028CE: cpu.execute_instruction<0x80>(0x0000DD, 2); return true;
    // src/unknown/C0/C02668.asm:268 CMP ENTITY_NPC_IDS,X
    case 0xC028CF: cpu.execute_instruction<0xDD>(0x002C9A, 3); return true;
    // src/unknown/C0/C02668.asm:269 BNE @UNKNOWN18
    case 0xC028D2: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C0/C02668.asm:270 LDA @LOCAL06
    case 0xC028D4: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:271 CMP ENTITY_ENEMY_SPAWN_TILES,X
    case 0xC028D6: cpu.execute_instruction<0xDD>(0x002D4E, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C02668.asm:272 BEQL @UNKNOWN32
    case 0xC028D9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:272 BEQL @UNKNOWN32
    case 0xC028DB: cpu.execute_instruction<0x4C>(0x002A69, 3); return true;
    // src/unknown/C0/C02668.asm:274 INY
    case 0xC028DE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:276 CPY #23
    case 0xC028DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000017, 2); else cpu.execute_instruction<0xC0>(0x000017, 3); return true;
    // src/unknown/C0/C02668.asm:276 CPY #23
    // Overlapping static entry reached from 0xC028DF.
    case 0xC028E1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02668.asm:277 BNE @UNKNOWN17
    case 0xC028E2: cpu.execute_instruction<0xD0>(0x0000DA, 2); return true;
    // src/unknown/C0/C02668.asm:278 JMP @UNKNOWN31
    case 0xC028E4: cpu.execute_instruction<0x4C>(0x002A50, 3); return true;
    // src/unknown/C0/C02668.asm:280 LDY #battle_group_entry::id
    case 0xC028E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C02668.asm:280 LDY #battle_group_entry::id
    // Overlapping static entry reached from 0xC028E7.
    case 0xC028E9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C02668.asm:281 LDA [@VIRTUAL0A],Y
    case 0xC028EA: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C0/C02668.asm:282 STA @LOCAL04
    case 0xC028EC: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC028EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC028EE.
    case 0xC028F0: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC028F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC028F0.
    case 0xC028F2: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC028F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC028F2.
    case 0xC028F4: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC028F3.
    case 0xC028F5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC028F6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:284 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC028F8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:284 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC028FA: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:284 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC028FC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:284 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC028FE: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C02668.asm:285 LDA @LOCAL04
    case 0xC02900: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:286 LDY #.SIZEOF(enemy_data)
    case 0xC02902: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C02668.asm:286 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC02902.
    case 0xC02904: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:287 JSL MULT168
    case 0xC02905: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C02668.asm:288 STA @LOCAL03
    case 0xC02909: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C02668.asm:290 INC
    case 0xC0290B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:292 CLC
    case 0xC0290C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:293 ADC @VIRTUAL06
    case 0xC0290D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:294 STA @VIRTUAL06
    case 0xC0290F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:295 LDA [@VIRTUAL06]
    case 0xC02911: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:296 AND #$00FF
    case 0xC02913: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:296 AND #$00FF
    // Overlapping static entry reached from 0xC02913.
    case 0xC02915: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C02668.asm:297 STA SPAWNING_ENEMY_NAME
    case 0xC02916: cpu.execute_instruction<0x8D>(0x004A76, 3); return true;
    // src/unknown/C0/C02668.asm:298 LDA @LOCAL03
    case 0xC02919: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C02668.asm:299 CLC
    case 0xC0291B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:300 ADC #enemy_data::overworld_sprite
    case 0xC0291C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00001E, 3); return true;
    // src/unknown/C0/C02668.asm:300 ADC #enemy_data::overworld_sprite
    // Overlapping static entry reached from 0xC0291C.
    case 0xC0291E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C02668.asm:301 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC0291F: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C02668.asm:301 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC02921: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C02668.asm:301 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC02923: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C02668.asm:301 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC02925: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:302 CLC
    case 0xC02927: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:303 ADC @VIRTUAL06
    case 0xC02928: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:304 STA @VIRTUAL06
    case 0xC0292A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:305 LDA [@VIRTUAL06]
    case 0xC0292C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:306 STA @LOCAL09
    case 0xC0292E: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C02668.asm:307 STA SPAWNING_ENEMY_SPRITE
    case 0xC02930: cpu.execute_instruction<0x8D>(0x004A74, 3); return true;
    // src/unknown/C0/C02668.asm:308 LDA @LOCAL03
    case 0xC02933: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C02668.asm:309 CLC
    case 0xC02935: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:310 ADC #enemy_data::event_script
    case 0xC02936: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002B, 2); else cpu.execute_instruction<0x69>(0x00002B, 3); return true;
    // src/unknown/C0/C02668.asm:310 ADC #enemy_data::event_script
    // Overlapping static entry reached from 0xC02936.
    case 0xC02938: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C02668.asm:311 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC02939: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C02668.asm:311 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC0293B: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C02668.asm:311 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC0293D: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C02668.asm:311 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC0293F: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:312 CLC
    case 0xC02941: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:313 ADC @VIRTUAL06
    case 0xC02942: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:314 STA @VIRTUAL06
    case 0xC02944: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:315 LDA [@VIRTUAL06]
    case 0xC02946: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:316 STA @LOCAL03
    case 0xC02948: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:317 BNEL @UNKNOWN29
    case 0xC0294A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:317 BNEL @UNKNOWN29
    case 0xC0294C: cpu.execute_instruction<0x4C>(0x002A3A, 3); return true;
    // src/unknown/C0/C02668.asm:318 LDA #DEFAULT_ENEMY_MOVEMENT_STYLE
    case 0xC0294F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/unknown/C0/C02668.asm:318 LDA #DEFAULT_ENEMY_MOVEMENT_STYLE
    // Overlapping static entry reached from 0xC0294F.
    case 0xC02951: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:319 STA @LOCAL03
    case 0xC02952: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C02668.asm:320 JMP @UNKNOWN29
    case 0xC02954: cpu.execute_instruction<0x4C>(0x002A3A, 3); return true;
    // src/unknown/C0/C02668.asm:322 LDA @LOCAL04
    case 0xC02957: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:323 CMP #ENEMY::MAGIC_BUTTERFLY
    case 0xC02959: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E1, 2); else cpu.execute_instruction<0xC9>(0x0000E1, 3); return true;
    // src/unknown/C0/C02668.asm:323 CMP #ENEMY::MAGIC_BUTTERFLY
    // Overlapping static entry reached from 0xC02959.
    case 0xC0295B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02668.asm:324 BNE @UNKNOWN23
    case 0xC0295C: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:325 LDA MAGIC_BUTTERFLY_SPAWNED
    case 0xC0295E: cpu.execute_instruction<0xAD>(0x004A60, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:326 BNEL @UNKNOWN29
    case 0xC02961: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:326 BNEL @UNKNOWN29
    case 0xC02963: cpu.execute_instruction<0x4C>(0x002A3A, 3); return true;
    // src/unknown/C0/C02668.asm:328 LDA OVERWORLD_ENEMY_COUNT
    case 0xC02966: cpu.execute_instruction<0xAD>(0x004A5C, 3); return true;
    // src/unknown/C0/C02668.asm:329 CMP OVERWORLD_ENEMY_MAXIMUM
    case 0xC02969: cpu.execute_instruction<0xCD>(0x004A5E, 3); return true;
    // src/unknown/C0/C02668.asm:330 BNE @UNKNOWN24
    case 0xC0296C: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:331 INC ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    case 0xC0296E: cpu.execute_instruction<0xEE>(0x004A68, 3); return true;
    // src/unknown/C0/C02668.asm:332 JMP @UNKNOWN29
    case 0xC02971: cpu.execute_instruction<0x4C>(0x002A3A, 3); return true;
    // src/unknown/C0/C02668.asm:334 STZ ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    case 0xC02974: cpu.execute_instruction<0x9C>(0x004A68, 3); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/C0/C02668.asm:335 STZ_BADOPT @LOCAL00
    case 0xC02977: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C0/C02668.asm:337 STZ @LOCAL00+2
    case 0xC02979: cpu.execute_instruction<0x64>(0x000010, 2); return true;
    // src/unknown/C0/C02668.asm:341 LDY #.LOWORD(-1)
    case 0xC0297B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C02668.asm:341 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0297B.
    case 0xC0297D: cpu.execute_instruction<0xFF>(0xA516A6, 4); return true;
    // src/unknown/C0/C02668.asm:342 LDX @LOCAL03
    case 0xC0297E: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C02668.asm:343 LDA @LOCAL09
    case 0xC02980: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C0/C02668.asm:343 LDA @LOCAL09
    // Overlapping static entry reached from 0xC0297D.
    case 0xC02981: cpu.execute_instruction<0x26>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:344 JSL CREATE_ENTITY
    case 0xC02982: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/C0/C02668.asm:344 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC02981.
    case 0xC02983: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x00001E, 2); else cpu.execute_instruction<0x49>(0x00C01E, 3); return true;
    // src/unknown/C0/C02668.asm:344 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC02983.
    case 0xC02985: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001485, 3); return true;
    // src/unknown/C0/C02668.asm:345 STA @LOCAL02
    case 0xC02986: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C02668.asm:345 STA @LOCAL02
    // Overlapping static entry reached from 0xC02985.
    case 0xC02987: cpu.execute_instruction<0x14>(0x000064, 2); return true;
    // src/unknown/C0/C02668.asm:346 STZ @LOCAL06
    case 0xC02988: cpu.execute_instruction<0x64>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:346 STZ @LOCAL06
    // Overlapping static entry reached from 0xC02987.
    case 0xC02989: cpu.execute_instruction<0x1C>(0x005680, 3); return true;
    // src/unknown/C0/C02668.asm:347 BRA @UNKNOWN27
    case 0xC0298A: cpu.execute_instruction<0x80>(0x000056, 2); return true;
    // src/unknown/C0/C02668.asm:349 JSL RAND
    case 0xC0298C: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C0/C02668.asm:350 LDY ENEMY_SPAWN_RANGE_WIDTH
    case 0xC02990: cpu.execute_instruction<0xAC>(0x004A62, 3); return true;
    // src/unknown/C0/C02668.asm:351 JSL MODULUS16
    case 0xC02993: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/unknown/C0/C02668.asm:352 STA @VIRTUAL02
    case 0xC02997: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:353 LDA @LOCAL0C
    case 0xC02999: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:354 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0299B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:354 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0299C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:354 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0299D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:355 CLC
    case 0xC0299E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:356 ADC @VIRTUAL02
    case 0xC0299F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:357 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:357 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:357 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029A3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:358 STA @VIRTUAL04
    case 0xC029A4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C02668.asm:358 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC02A06.
    case 0xC029A5: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:359 JSL RAND
    case 0xC029A6: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C0/C02668.asm:359 JSL RAND
    // Overlapping static entry reached from 0xC029A5.
    case 0xC029A7: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:359 JSL RAND
    // Overlapping static entry reached from 0xC029A7.
    case 0xC029A8: cpu.execute_instruction<0x8E>(0x00ACC0, 3); return true;
    // src/unknown/C0/C02668.asm:360 LDY ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC029AA: cpu.execute_instruction<0xAC>(0x004A64, 3); return true;
    // src/unknown/C0/C02668.asm:360 LDY ENEMY_SPAWN_RANGE_HEIGHT
    // Overlapping static entry reached from 0xC029A8.
    case 0xC029AB: cpu.execute_instruction<0x64>(0x00004A, 2); return true;
    // src/unknown/C0/C02668.asm:361 JSL MODULUS16
    case 0xC029AD: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/unknown/C0/C02668.asm:362 STA @VIRTUAL02
    case 0xC029B1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:363 LDA @LOCAL0D
    case 0xC029B3: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:364 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:364 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:364 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:365 CLC
    case 0xC029B8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:366 ADC @VIRTUAL02
    case 0xC029B9: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:367 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:367 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:367 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:368 STA @VIRTUAL02
    case 0xC029BE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:369 LDY @LOCAL02
    case 0xC029C0: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C02668.asm:370 LDX @VIRTUAL02
    case 0xC029C2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:371 LDA @VIRTUAL04
    case 0xC029C4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C02668.asm:372 JSL UNKNOWN_C05F33
    case 0xC029C6: cpu.execute_instruction<0x22>(0xC05F33, 4); return true;
    // src/unknown/C0/C02668.asm:373 STA @LOCAL01
    case 0xC029CA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C02668.asm:374 AND #$00D0
    case 0xC029CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000D0, 2); else cpu.execute_instruction<0x29>(0x0000D0, 3); return true;
    // src/unknown/C0/C02668.asm:374 AND #$00D0
    // Overlapping static entry reached from 0xC029CC.
    case 0xC029CE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02668.asm:375 BNE @UNKNOWN26
    case 0xC029CF: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C02668.asm:376 LDY @LOCAL04
    case 0xC029D1: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:377 LDX @LOCAL02
    case 0xC029D3: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C02668.asm:378 LDA @LOCAL01
    case 0xC029D5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C02668.asm:379 JSL UNKNOWN_C05DE7
    case 0xC029D7: cpu.execute_instruction<0x22>(0xC05DE7, 4); return true;
    // src/unknown/C0/C02668.asm:380 CMP #0
    case 0xC029DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:380 CMP #0
    // Overlapping static entry reached from 0xC029DB.
    case 0xC029DD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:381 BEQ @UNKNOWN28
    case 0xC029DE: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C02668.asm:383 INC @LOCAL06
    case 0xC029E0: cpu.execute_instruction<0xE6>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:385 LDA @LOCAL06
    case 0xC029E2: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:386 CMP #20
    case 0xC029E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/unknown/C0/C02668.asm:386 CMP #20
    // Overlapping static entry reached from 0xC029E4.
    case 0xC029E6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02668.asm:387 BNE @UNKNOWN25
    case 0xC029E7: cpu.execute_instruction<0xD0>(0x0000A3, 2); return true;
    // src/unknown/C0/C02668.asm:388 LDA @LOCAL02
    case 0xC029E9: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C02668.asm:389 JSL UNKNOWN_C02140
    case 0xC029EB: cpu.execute_instruction<0x22>(0xC02140, 4); return true;
    // src/unknown/C0/C02668.asm:390 BRA @UNKNOWN29
    case 0xC029EF: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/unknown/C0/C02668.asm:392 LDA @LOCAL02
    case 0xC029F1: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C02668.asm:393 ASL
    case 0xC029F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:394 TAX
    case 0xC029F4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:395 STX @LOCAL06
    case 0xC029F5: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:396 LDA @VIRTUAL04
    case 0xC029F7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C02668.asm:397 STA ENTITY_ABS_X_TABLE,X
    case 0xC029F9: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C02668.asm:398 LDA @VIRTUAL02
    case 0xC029FC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:399 STA ENTITY_ABS_Y_TABLE,X
    case 0xC029FE: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C02668.asm:400 LDA @LOCAL0B
    case 0xC02A01: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C0/C02668.asm:401 CLC
    case 0xC02A03: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:402 ADC #$8000
    case 0xC02A04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x008000, 3); return true;
    // src/unknown/C0/C02668.asm:402 ADC #$8000
    // Overlapping static entry reached from 0xC02A04.
    case 0xC02A06: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C0/C02668.asm:403 STA ENTITY_NPC_IDS,X
    case 0xC02A07: cpu.execute_instruction<0x9D>(0x002C9A, 3); return true;
    // src/unknown/C0/C02668.asm:404 LDA @LOCAL04
    case 0xC02A0A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:405 STA ENTITY_ENEMY_IDS,X
    case 0xC02A0C: cpu.execute_instruction<0x9D>(0x002D12, 3); return true;
    // src/unknown/C0/C02668.asm:406 LDA @LOCAL0D
    case 0xC02A0F: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:721 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A11: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:722 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A12: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:723 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A13: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:724 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A14: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:725 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:726 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A16: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:727 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A17: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:408 CLC
    case 0xC02A18: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:409 ADC @LOCAL0C
    case 0xC02A19: cpu.execute_instruction<0x65>(0x00002C, 2); return true;
    // src/unknown/C0/C02668.asm:410 STA ENTITY_ENEMY_SPAWN_TILES,X
    case 0xC02A1B: cpu.execute_instruction<0x9D>(0x002D4E, 3); return true;
    // src/unknown/C0/C02668.asm:411 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC02A1E: cpu.execute_instruction<0x9E>(0x002C5E, 3); return true;
    // src/unknown/C0/C02668.asm:412 JSL RAND
    case 0xC02A21: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C0/C02668.asm:413 LDX @LOCAL06
    case 0xC02A25: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:414 STA ENTITY_WEAK_ENEMY_VALUE,X
    case 0xC02A27: cpu.execute_instruction<0x9D>(0x003186, 3); return true;
    // src/unknown/C0/C02668.asm:415 INC OVERWORLD_ENEMY_COUNT
    case 0xC02A2A: cpu.execute_instruction<0xEE>(0x004A5C, 3); return true;
    // src/unknown/C0/C02668.asm:416 LDA @LOCAL04
    case 0xC02A2D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:417 CMP #ENEMY::MAGIC_BUTTERFLY
    case 0xC02A2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E1, 2); else cpu.execute_instruction<0xC9>(0x0000E1, 3); return true;
    // src/unknown/C0/C02668.asm:417 CMP #ENEMY::MAGIC_BUTTERFLY
    // Overlapping static entry reached from 0xC02A2F.
    case 0xC02A31: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02668.asm:418 BNE @UNKNOWN29
    case 0xC02A32: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:419 LDA #1
    case 0xC02A34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C02668.asm:419 LDA #1
    // Overlapping static entry reached from 0xC02A34.
    case 0xC02A36: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C02668.asm:420 STA MAGIC_BUTTERFLY_SPAWNED
    case 0xC02A37: cpu.execute_instruction<0x8D>(0x004A60, 3); return true;
    // src/unknown/C0/C02668.asm:422 LDX ENEMY_SPAWN_REMAINING_ENEMY_COUNT
    case 0xC02A3A: cpu.execute_instruction<0xAE>(0x004A6E, 3); return true;
    // src/unknown/C0/C02668.asm:423 DEC ENEMY_SPAWN_REMAINING_ENEMY_COUNT
    case 0xC02A3D: cpu.execute_instruction<0xCE>(0x004A6E, 3); return true;
    // src/unknown/C0/C02668.asm:424 CPX #0
    case 0xC02A40: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:424 CPX #0
    // Overlapping static entry reached from 0xC02A40.
    case 0xC02A42: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:425 BNEL @UNKNOWN22
    case 0xC02A43: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:425 BNEL @UNKNOWN22
    case 0xC02A45: cpu.execute_instruction<0x4C>(0x002957, 3); return true;
    // src/unknown/C0/C02668.asm:426 LDA #3
    case 0xC02A48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C02668.asm:426 LDA #3
    // Overlapping static entry reached from 0xC02A48.
    case 0xC02A4A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:427 CLC
    case 0xC02A4B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:428 ADC @VIRTUAL0A
    case 0xC02A4C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C02668.asm:429 STA @VIRTUAL0A
    case 0xC02A4E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:431 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02A50: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:431 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02A52: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:431 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02A54: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:431 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02A56: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:432 LDA [@VIRTUAL06] ;battle_group_entry::count
    case 0xC02A58: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:433 AND #$00FF
    case 0xC02A5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:433 AND #$00FF
    // Overlapping static entry reached from 0xC02A5A.
    case 0xC02A5C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C02668.asm:434 TAX
    case 0xC02A5D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:435 STX ENEMY_SPAWN_REMAINING_ENEMY_COUNT
    case 0xC02A5E: cpu.execute_instruction<0x8E>(0x004A6E, 3); return true;
    // src/unknown/C0/C02668.asm:435 STX ENEMY_SPAWN_REMAINING_ENEMY_COUNT
    // Overlapping static entry reached from 0xC02AD8.
    case 0xC02A5F: cpu.execute_instruction<0x6E>(0x00E04A, 3); return true;
    // src/unknown/C0/C02668.asm:436 CPX #>-1
    case 0xC02A61: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:436 CPX #>-1
    // Overlapping static entry reached from 0xC02A5F.
    case 0xC02A62: cpu.execute_instruction<0xFF>(0x03F000, 4); return true;
    // src/unknown/C0/C02668.asm:436 CPX #>-1
    // Overlapping static entry reached from 0xC02A61.
    case 0xC02A63: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:437 BNEL @UNKNOWN20
    case 0xC02A64: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:437 BNEL @UNKNOWN20
    case 0xC02A66: cpu.execute_instruction<0x4C>(0x0028E7, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C02668.asm:439 END_C_FUNCTION
    case 0xC02A69: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C02668.asm:439 END_C_FUNCTION
    case 0xC02A6A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C02C3E.asm (unresolved).
bool execute_unresolved_c0_c02c3e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C02C3E.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC02C3E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C02C3E.asm:4 LDA GAME_STATE+game_state::player_controlled_party_members
    case 0xC02C40: cpu.execute_instruction<0xAD>(0x009891, 3); return true;
    // src/unknown/C0/C02C3E.asm:5 AND #$00FF
    case 0xC02C43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02C3E.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC02C43.
    case 0xC02C45: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C02C3E.asm:6 LDY #.SIZEOF(char_struct)
    case 0xC02C46: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C02C3E.asm:6 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC02C46.
    case 0xC02C48: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C02C3E.asm:7 JSL MULT168
    case 0xC02C49: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C02C3E.asm:8 CLC
    case 0xC02C4D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02C3E.asm:9 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC02C4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/unknown/C0/C02C3E.asm:9 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC02C4E.
    case 0xC02C50: cpu.execute_instruction<0x99>(0x00BDAA, 3); return true;
    // src/unknown/C0/C02C3E.asm:10 TAX
    case 0xC02C51: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02C3E.asm:11 LDA __BSS_START__+1,X
    case 0xC02C52: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/unknown/C0/C02C3E.asm:11 LDA __BSS_START__+1,X
    // Overlapping static entry reached from 0xC02C50.
    case 0xC02C53: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C02C3E.asm:12 AND #$00FF
    case 0xC02C55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02C3E.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC02C55.
    case 0xC02C57: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C02C3E.asm:13 CMP #$0001
    case 0xC02C58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C02C3E.asm:13 CMP #$0001
    // Overlapping static entry reached from 0xC02C58.
    case 0xC02C5A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02C3E.asm:14 BNE @UNKNOWN1
    case 0xC02C5B: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/unknown/C0/C02C3E.asm:15 LDA #$0001
    case 0xC02C5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C02C3E.asm:15 LDA #$0001
    // Overlapping static entry reached from 0xC02C5D.
    case 0xC02C5F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C02C3E.asm:16 STA MUSHROOMIZED_WALKING_FLAG
    case 0xC02C60: cpu.execute_instruction<0x8D>(0x005DA0, 3); return true;
    // src/unknown/C0/C02C3E.asm:17 LDA MUSHROOMIZATION_TIMER
    case 0xC02C63: cpu.execute_instruction<0xAD>(0x005D9C, 3); return true;
    // src/unknown/C0/C02C3E.asm:18 BNE @UNKNOWN0
    case 0xC02C66: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C0/C02C3E.asm:19 LDA #$0708
    case 0xC02C68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000708, 3); return true;
    // src/unknown/C0/C02C3E.asm:19 LDA #$0708
    // Overlapping static entry reached from 0xC02C68.
    case 0xC02C6A: cpu.execute_instruction<0x07>(0x00008D, 2); return true;
    // src/unknown/C0/C02C3E.asm:20 STA MUSHROOMIZATION_TIMER
    case 0xC02C6B: cpu.execute_instruction<0x8D>(0x005D9C, 3); return true;
    // src/unknown/C0/C02C3E.asm:20 STA MUSHROOMIZATION_TIMER
    // Overlapping static entry reached from 0xC02C6A.
    case 0xC02C6C: cpu.execute_instruction<0x9C>(0x009C5D, 3); return true;
    // src/unknown/C0/C02C3E.asm:21 STZ MUSHROOMIZATION_MODIFIER
    case 0xC02C6E: cpu.execute_instruction<0x9C>(0x005D9E, 3); return true;
    // src/unknown/C0/C02C3E.asm:21 STZ MUSHROOMIZATION_MODIFIER
    // Overlapping static entry reached from 0xC02C6C.
    case 0xC02C6F: cpu.execute_instruction<0x9E>(0x00AD5D, 3); return true;
    // src/unknown/C0/C02C3E.asm:23 LDA GAME_STATE+game_state::walking_style
    case 0xC02C71: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/unknown/C0/C02C3E.asm:23 LDA GAME_STATE+game_state::walking_style
    // Overlapping static entry reached from 0xC02C6F.
    case 0xC02C72: cpu.execute_instruction<0x83>(0x000098, 2); return true;
    // src/unknown/C0/C02C3E.asm:24 CMP #WALKING_STYLE::BICYCLE
    case 0xC02C74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C02C3E.asm:24 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC02C74.
    case 0xC02C76: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02C3E.asm:25 BNE @UNKNOWN2
    case 0xC02C77: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C0/C02C3E.asm:26 JSL UNKNOWN_C03CFD
    case 0xC02C79: cpu.execute_instruction<0x22>(0xC03CFD, 4); return true;
    // src/unknown/C0/C02C3E.asm:27 BRA @UNKNOWN2
    case 0xC02C7D: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C02C3E.asm:29 STZ MUSHROOMIZED_WALKING_FLAG
    case 0xC02C7F: cpu.execute_instruction<0x9C>(0x005DA0, 3); return true;
    // src/unknown/C0/C02C3E.asm:31 RTL
    case 0xC02C82: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C02D29.asm (unresolved).
bool execute_unresolved_c0_c02d29_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C02D29.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC02D29: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C02D29.asm:6 END_STACK_VARS
    case 0xC02D2B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C02D29.asm:6 END_STACK_VARS
    case 0xC02D2C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02D29.asm:6 END_STACK_VARS
    case 0xC02D2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02D29.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC02D2D.
    case 0xC02D2F: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C02D29.asm:6 END_STACK_VARS
    case 0xC02D30: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C02D29.asm:7 LDA #1
    case 0xC02D31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C02D29.asm:7 LDA #1
    // Overlapping static entry reached from 0xC02D31.
    case 0xC02D33: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C02D29.asm:8 STA ENTITY_SIZES+23 * 2
    case 0xC02D34: cpu.execute_instruction<0x8D>(0x002B9C, 3); return true;
    // src/unknown/C0/C02D29.asm:9 LDA #.LOWORD(-1)
    case 0xC02D37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C02D29.asm:9 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02D37.
    case 0xC02D39: cpu.execute_instruction<0xFF>(0x9F6B8D, 4); return true;
    // src/unknown/C0/C02D29.asm:10 STA MINI_GHOST_ENTITY_ID
    case 0xC02D3A: cpu.execute_instruction<0x8D>(0x009F6B, 3); return true;
    // src/unknown/C0/C02D29.asm:11 STZ GAME_STATE+game_state::unknown88
    case 0xC02D3D: cpu.execute_instruction<0x9C>(0x00987D, 3); return true;
    // src/unknown/C0/C02D29.asm:12 STZ GAME_STATE+game_state::unknownB0
    case 0xC02D40: cpu.execute_instruction<0x9C>(0x0098A5, 3); return true;
    // src/unknown/C0/C02D29.asm:13 STZ GAME_STATE+game_state::unknownB2
    case 0xC02D43: cpu.execute_instruction<0x9C>(0x0098A7, 3); return true;
    // src/unknown/C0/C02D29.asm:14 STZ GAME_STATE+game_state::unknownB4
    case 0xC02D46: cpu.execute_instruction<0x9C>(0x0098A9, 3); return true;
    // src/unknown/C0/C02D29.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC02D49: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C02D29.asm:16 STZ GAME_STATE+game_state::party_status
    case 0xC02D4B: cpu.execute_instruction<0x9C>(0x009840, 3); return true;
    // src/unknown/C0/C02D29.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC02D4E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C02D29.asm:18 LDA #PARTY_LEADER_ENTITY_INDEX
    case 0xC02D50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C02D29.asm:18 LDA #PARTY_LEADER_ENTITY_INDEX
    // Overlapping static entry reached from 0xC02D50.
    case 0xC02D52: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C02D29.asm:19 STA GAME_STATE+game_state::current_party_members
    case 0xC02D53: cpu.execute_instruction<0x8D>(0x009889, 3); return true;
    // src/unknown/C0/C02D29.asm:20 LDA #0
    case 0xC02D56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C02D29.asm:20 LDA #0
    // Overlapping static entry reached from 0xC02D56.
    case 0xC02D58: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02D29.asm:21 STA @LOCAL00
    case 0xC02D59: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C02D29.asm:22 BRA @UNKNOWN1
    case 0xC02D5B: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C0/C02D29.asm:33 TAX
    case 0xC02D5D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02D29.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC02D5E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C02D29.asm:35 STZ GAME_STATE+game_state::unknown96,X
    case 0xC02D60: cpu.execute_instruction<0x9E>(0x00988B, 3); return true;
    // src/unknown/C0/C02D29.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC02D63: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C02D29.asm:38 ASL
    case 0xC02D65: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02D29.asm:39 TAX
    case 0xC02D66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02D29.asm:40 STZ HP_ALERT_SHOWN,X
    case 0xC02D67: cpu.execute_instruction<0x9E>(0x005D8C, 3); return true;
    // src/unknown/C0/C02D29.asm:41 LDA @LOCAL00
    case 0xC02D6A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C02D29.asm:42 INC
    case 0xC02D6C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C02D29.asm:43 STA @LOCAL00
    case 0xC02D6D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C02D29.asm:45 CMP #TOTAL_PARTY_COUNT
    case 0xC02D6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C02D29.asm:45 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC02D6F.
    case 0xC02D71: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C02D29.asm:46 BCC @UNKNOWN0
    case 0xC02D72: cpu.execute_instruction<0x90>(0x0000E9, 2); return true;
    // src/unknown/C0/C02D29.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC02D74: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C02D29.asm:48 LDA #0
    case 0xC02D76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/unknown/C0/C02D29.asm:49 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC02D78: cpu.execute_instruction<0x8D>(0x0098A4, 3); return true;
    // src/unknown/C0/C02D29.asm:49 STA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC02D76.
    case 0xC02D79: cpu.execute_instruction<0xA4>(0x000098, 2); return true;
    // src/unknown/C0/C02D29.asm:50 STA GAME_STATE+game_state::party_count
    case 0xC02D7B: cpu.execute_instruction<0x8D>(0x0098A3, 3); return true;
    // src/unknown/C0/C02D29.asm:51 JSL VELOCITY_STORE
    case 0xC02D7E: cpu.execute_instruction<0x22>(0xC430EC, 4); return true;
    // src/unknown/C0/C02D29.asm:52 LDA f:NESS_PAJAMA_FLAG
    case 0xC02D82: cpu.execute_instruction<0xAF>(0xC30186, 4); return true;
    // src/unknown/C0/C02D29.asm:53 JSL GET_EVENT_FLAG
    case 0xC02D86: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C0/C02D29.asm:53 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC02E01.
    case 0xC02D88: cpu.execute_instruction<0x16>(0x0000C2, 2); return true;
    // src/unknown/C0/C02D29.asm:54 STA PAJAMA_FLAG
    case 0xC02D8A: cpu.execute_instruction<0x8D>(0x009F71, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C02D29.asm:55 END_C_FUNCTION
    case 0xC02D8D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C02D29.asm:55 END_C_FUNCTION
    case 0xC02D8E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0329F.asm (unresolved).
bool execute_unresolved_c0_c0329f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0329F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0329F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0329F.asm:8 END_STACK_VARS
    case 0xC032A1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0329F.asm:8 END_STACK_VARS
    case 0xC032A2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0329F.asm:8 END_STACK_VARS
    case 0xC032A3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0329F.asm:8 END_STACK_VARS
    case 0xC032A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0329F.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC032A4.
    case 0xC032A6: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0329F.asm:8 END_STACK_VARS
    case 0xC032A7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0329F.asm:8 END_STACK_VARS
    case 0xC032A8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:9 TAX
    case 0xC032A9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:10 STX @LOCAL01
    case 0xC032AA: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0329F.asm:11 TXA
    case 0xC032AC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:12 LDY #.SIZEOF(char_struct)
    case 0xC032AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C0329F.asm:12 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC032AD.
    case 0xC032AF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0329F.asm:13 JSL MULT168
    case 0xC032B0: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C0329F.asm:14 TAX
    case 0xC032B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC032B5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0329F.asm:16 STZ PARTY_CHARACTERS + char_struct::afflictions,X
    case 0xC032B7: cpu.execute_instruction<0x9E>(0x0099DC, 3); return true;
    // src/unknown/C0/C0329F.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC032BA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0329F.asm:18 LDA #1
    case 0xC032BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0329F.asm:18 LDA #1
    // Overlapping static entry reached from 0xC032BC.
    case 0xC032BE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0329F.asm:19 STA @LOCAL00
    case 0xC032BF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0329F.asm:20 BRA @UNKNOWN1
    case 0xC032C1: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C0/C0329F.asm:22 STA @VIRTUAL02
    case 0xC032C3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0329F.asm:23 LDX @LOCAL01
    case 0xC032C5: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0329F.asm:24 TXA
    case 0xC032C7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC032C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C0329F.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC032C8.
    case 0xC032CA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0329F.asm:26 JSL MULT168
    case 0xC032CB: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C0329F.asm:27 CLC
    case 0xC032CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:28 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC032D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/unknown/C0/C0329F.asm:28 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC032D0.
    case 0xC032D2: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C0/C0329F.asm:29 CLC
    case 0xC032D3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:30 ADC @VIRTUAL02
    case 0xC032D4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0329F.asm:30 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC032D2.
    case 0xC032D5: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C0/C0329F.asm:31 TAX
    case 0xC032D6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC032D7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0329F.asm:33 LDA #0
    case 0xC032D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/unknown/C0/C0329F.asm:34 STA __BSS_START__,X
    case 0xC032DB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0329F.asm:34 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC032D9.
    case 0xC032DC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0329F.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC032DE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0329F.asm:36 LDA @LOCAL00
    case 0xC032E0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0329F.asm:37 INC
    case 0xC032E2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:38 STA @LOCAL00
    case 0xC032E3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0329F.asm:40 CMP #7
    case 0xC032E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0329F.asm:40 CMP #7
    // Overlapping static entry reached from 0xC032E5.
    case 0xC032E7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0329F.asm:41 BCC @UNKNOWN0
    case 0xC032E8: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0329F.asm:42 END_C_FUNCTION
    case 0xC032EA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0329F.asm:42 END_C_FUNCTION
    case 0xC032EB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C032EC.asm (unresolved).
bool execute_unresolved_c0_c032ec_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C032EC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC032EC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C032EC.asm:11 END_STACK_VARS
    case 0xC032EE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C032EC.asm:11 END_STACK_VARS
    case 0xC032EF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C032EC.asm:11 END_STACK_VARS
    case 0xC032F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E7, 2); else cpu.execute_instruction<0x69>(0x00FFE7, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C032EC.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC032F0.
    case 0xC032F2: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C032EC.asm:11 END_STACK_VARS
    case 0xC032F3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:12 LDY #0
    case 0xC032F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:12 LDY #0
    // Overlapping static entry reached from 0xC032F4.
    case 0xC032F6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C032EC.asm:13 BRA @UNKNOWN1
    case 0xC032F7: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C0/C032EC.asm:15 INY
    case 0xC032F9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:17 LDA GAME_STATE + game_state::party_members,Y
    case 0xC032FA: cpu.execute_instruction<0xB9>(0x00986F, 3); return true;
    // src/unknown/C0/C032EC.asm:18 AND #$00FF
    case 0xC032FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC032FD.
    case 0xC032FF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C032EC.asm:19 BEQ @UNKNOWN3
    case 0xC03300: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C032EC.asm:20 AND #$00FF
    case 0xC03302: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC03302.
    case 0xC03304: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C032EC.asm:21 STA @VIRTUAL02
    case 0xC03305: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C032EC.asm:22 LDA #5
    case 0xC03307: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C032EC.asm:22 LDA #5
    // Overlapping static entry reached from 0xC03307.
    case 0xC03309: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C032EC.asm:23 CLC
    case 0xC0330A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:24 SBC @VIRTUAL02
    case 0xC0330B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C0/C032EC.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC0330D: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C0/C032EC.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC0330F: cpu.execute_instruction<0x10>(0x0000E8, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C0/C032EC.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC03311: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C0/C032EC.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC03313: cpu.execute_instruction<0x30>(0x0000E4, 2); return true;
    // src/unknown/C0/C032EC.asm:27 TYA
    case 0xC03315: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC03316: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:29 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC03318: cpu.execute_instruction<0x8D>(0x0098A4, 3); return true;
    // src/unknown/C0/C032EC.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC0331B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:31 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_1
    case 0xC0331D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x00983A, 3); return true;
    // src/unknown/C0/C032EC.asm:31 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_1
    // Overlapping static entry reached from 0xC0331D.
    case 0xC0331F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:32 STA @VIRTUAL04
    case 0xC03320: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C032EC.asm:33 LDX @VIRTUAL04
    case 0xC03322: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C032EC.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC03324: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:35 LDA __BSS_START__,X
    case 0xC03326: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:36 STA @VIRTUAL00
    case 0xC03329: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C032EC.asm:37 STA @LOCAL05
    case 0xC0332B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C032EC.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC0332D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:39 TYA
    case 0xC0332F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:40 CLC
    case 0xC03330: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:41 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC03331: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006F, 2); else cpu.execute_instruction<0x69>(0x00986F, 3); return true;
    // src/unknown/C0/C032EC.asm:41 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC03331.
    case 0xC03333: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:42 STA @LOCAL04
    case 0xC03334: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C032EC.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC03336: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:44 LDA (@LOCAL04)
    case 0xC03338: cpu.execute_instruction<0xB2>(0x000016, 2); return true;
    // src/unknown/C0/C032EC.asm:45 STA @LOCAL03
    case 0xC0333A: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C0/C032EC.asm:46 STA @VIRTUAL01
    case 0xC0333C: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C0/C032EC.asm:47 LDA @VIRTUAL00
    case 0xC0333E: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C032EC.asm:48 CMP @VIRTUAL01
    case 0xC03340: cpu.execute_instruction<0xC5>(0x000001, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C032EC.asm:49 BEQL @UNKNOWN7
    case 0xC03342: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C032EC.asm:49 BEQL @UNKNOWN7
    case 0xC03344: cpu.execute_instruction<0x4C>(0x003499, 3); return true;
    // src/unknown/C0/C032EC.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC03347: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:51 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_2
    case 0xC03349: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003B, 2); else cpu.execute_instruction<0xA9>(0x00983B, 3); return true;
    // src/unknown/C0/C032EC.asm:51 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_2
    // Overlapping static entry reached from 0xC03349.
    case 0xC0334B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:52 STA @VIRTUAL02
    case 0xC0334C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C032EC.asm:53 LDX @VIRTUAL02
    case 0xC0334E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C032EC.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC03350: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:55 LDA __BSS_START__,X
    case 0xC03352: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:56 STA @VIRTUAL01
    case 0xC03355: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C0/C032EC.asm:57 LDA @LOCAL03
    case 0xC03357: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C0/C032EC.asm:58 STA @VIRTUAL00
    case 0xC03359: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C032EC.asm:59 LDA @VIRTUAL01
    case 0xC0335B: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C0/C032EC.asm:60 CMP @VIRTUAL00
    case 0xC0335D: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C0/C032EC.asm:61 BNE @UNKNOWN5
    case 0xC0335F: cpu.execute_instruction<0xD0>(0x000045, 2); return true;
    // src/unknown/C0/C032EC.asm:62 LDA @VIRTUAL01
    case 0xC03361: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C0/C032EC.asm:63 LDX @VIRTUAL04
    case 0xC03363: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C032EC.asm:64 STA __BSS_START__,X
    case 0xC03365: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:65 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_2_hp
    case 0xC03368: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003E, 2); else cpu.execute_instruction<0xA2>(0x00983E, 3); return true;
    // src/unknown/C0/C032EC.asm:65 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_2_hp
    // Overlapping static entry reached from 0xC03368.
    case 0xC0336A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:66 STX @LOCAL02
    case 0xC0336B: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C0/C032EC.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC0336D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:68 LDA __BSS_START__,X
    case 0xC0336F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:69 STA GAME_STATE+game_state::party_npc_1_hp
    case 0xC03372: cpu.execute_instruction<0x8D>(0x00983C, 3); return true;
    // src/unknown/C0/C032EC.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC03375: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:71 LDA GAME_STATE + game_state::party_members + 1,Y
    case 0xC03377: cpu.execute_instruction<0xB9>(0x009870, 3); return true;
    // src/unknown/C0/C032EC.asm:72 LDX @VIRTUAL02
    case 0xC0337A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C032EC.asm:73 STA __BSS_START__,X
    case 0xC0337C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC0337F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:75 AND #$00FF
    case 0xC03381: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC03381.
    case 0xC03383: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C032EC.asm:76 ASL
    case 0xC03384: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:77 TAX
    case 0xC03385: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:78 INX
    case 0xC03386: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:79 LDA f:NPC_AI_TABLE,X
    case 0xC03387: cpu.execute_instruction<0xBF>(0xD58F23, 4); return true;
    // src/unknown/C0/C032EC.asm:80 AND #$00FF
    case 0xC0338B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC0338B.
    case 0xC0338D: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C032EC.asm:81 LDY #.SIZEOF(enemy_data)
    case 0xC0338E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C032EC.asm:81 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC0338E.
    case 0xC03390: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C032EC.asm:82 JSL MULT168
    case 0xC03391: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C032EC.asm:83 CLC
    case 0xC03395: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:84 ADC #enemy_data::hp
    case 0xC03396: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/unknown/C0/C032EC.asm:84 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC03396.
    case 0xC03398: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C032EC.asm:85 TAX
    case 0xC03399: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:86 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC0339A: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/unknown/C0/C032EC.asm:87 LDX @LOCAL02
    case 0xC0339E: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C0/C032EC.asm:88 STA __BSS_START__,X
    case 0xC033A0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:89 JMP @UNKNOWN8
    case 0xC033A3: cpu.execute_instruction<0x4C>(0x0034D2, 3); return true;
    // src/unknown/C0/C032EC.asm:91 LDA @LOCAL05
    case 0xC033A6: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C032EC.asm:92 STA @VIRTUAL00
    case 0xC033A8: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C032EC.asm:93 CMP GAME_STATE + game_state::party_members + 1,Y
    case 0xC033AA: cpu.execute_instruction<0xD9>(0x009870, 3); return true;
    // src/unknown/C0/C032EC.asm:94 BNE @UNKNOWN6
    case 0xC033AD: cpu.execute_instruction<0xD0>(0x000044, 2); return true;
    // src/unknown/C0/C032EC.asm:95 LDA @VIRTUAL00
    case 0xC033AF: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C032EC.asm:96 LDX @VIRTUAL02
    case 0xC033B1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C032EC.asm:97 STA __BSS_START__,X
    case 0xC033B3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:98 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_1_hp
    case 0xC033B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003C, 2); else cpu.execute_instruction<0xA2>(0x00983C, 3); return true;
    // src/unknown/C0/C032EC.asm:98 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_1_hp
    // Overlapping static entry reached from 0xC033B6.
    case 0xC033B8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:99 STX @LOCAL02
    case 0xC033B9: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C0/C032EC.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC033BB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:101 LDA __BSS_START__,X
    case 0xC033BD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:102 STA GAME_STATE+game_state::party_npc_2_hp
    case 0xC033C0: cpu.execute_instruction<0x8D>(0x00983E, 3); return true;
    // src/unknown/C0/C032EC.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC033C3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:104 LDA (@LOCAL04)
    case 0xC033C5: cpu.execute_instruction<0xB2>(0x000016, 2); return true;
    // src/unknown/C0/C032EC.asm:105 LDX @VIRTUAL04
    case 0xC033C7: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C032EC.asm:106 STA __BSS_START__,X
    case 0xC033C9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:107 REP #PROC_FLAGS::ACCUM8
    case 0xC033CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:108 AND #$00FF
    case 0xC033CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC033CE.
    case 0xC033D0: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C032EC.asm:109 ASL
    case 0xC033D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:110 TAX
    case 0xC033D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:111 INX
    case 0xC033D3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:112 LDA f:NPC_AI_TABLE,X
    case 0xC033D4: cpu.execute_instruction<0xBF>(0xD58F23, 4); return true;
    // src/unknown/C0/C032EC.asm:113 AND #$00FF
    case 0xC033D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC.asm:113 AND #$00FF
    // Overlapping static entry reached from 0xC033D8.
    case 0xC033DA: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C032EC.asm:114 LDY #.SIZEOF(enemy_data)
    case 0xC033DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C032EC.asm:114 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC033DB.
    case 0xC033DD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C032EC.asm:115 JSL MULT168
    case 0xC033DE: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C032EC.asm:116 CLC
    case 0xC033E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:117 ADC #enemy_data::hp
    case 0xC033E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/unknown/C0/C032EC.asm:117 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC033E3.
    case 0xC033E5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C032EC.asm:118 TAX
    case 0xC033E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:119 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC033E7: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/unknown/C0/C032EC.asm:120 LDX @LOCAL02
    case 0xC033EB: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C0/C032EC.asm:121 STA __BSS_START__,X
    case 0xC033ED: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:122 JMP @UNKNOWN8
    case 0xC033F0: cpu.execute_instruction<0x4C>(0x0034D2, 3); return true;
    // src/unknown/C0/C032EC.asm:124 LDA @LOCAL03
    case 0xC033F3: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C0/C032EC.asm:125 LDX @VIRTUAL04
    case 0xC033F5: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C032EC.asm:126 STA __BSS_START__,X
    case 0xC033F7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:127 TYX
    case 0xC033FA: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:128 INX
    case 0xC033FB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:129 REP #PROC_FLAGS::ACCUM8
    case 0xC033FC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:130 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC033FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:130 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC033FE.
    case 0xC03400: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C032EC.asm:130 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC03401: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C032EC.asm:130 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03400.
    case 0xC03402: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:130 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC03403: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:130 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03403.
    case 0xC03405: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C032EC.asm:130 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC03406: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:131 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC03408: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x008F23, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:131 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC03408.
    case 0xC0340A: cpu.execute_instruction<0x8F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C032EC.asm:131 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC0340B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:131 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC0340D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:131 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0340A.
    case 0xC0340E: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:131 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0340D.
    case 0xC0340F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C032EC.asm:131 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC03410: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C032EC.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03412: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C032EC.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03414: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C032EC.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03416: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C032EC.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03418: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C0/C032EC.asm:133 LDA @LOCAL03
    case 0xC0341A: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C0/C032EC.asm:134 AND #$00FF
    case 0xC0341C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC.asm:134 AND #$00FF
    // Overlapping static entry reached from 0xC0341C.
    case 0xC0341E: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C032EC.asm:135 ASL
    case 0xC0341F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:136 INC
    case 0xC03420: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:137 CLC
    case 0xC03421: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:138 ADC @VIRTUAL06
    case 0xC03422: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C032EC.asm:139 STA @VIRTUAL06
    case 0xC03424: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C032EC.asm:140 LDA [@VIRTUAL06]
    case 0xC03426: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C032EC.asm:141 AND #$00FF
    case 0xC03428: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC03428.
    case 0xC0342A: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C032EC.asm:142 LDY #.SIZEOF(enemy_data)
    case 0xC0342B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C032EC.asm:142 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC0342B.
    case 0xC0342D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C032EC.asm:143 JSL MULT168
    case 0xC0342E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C032EC.asm:144 CLC
    case 0xC03432: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:145 ADC #enemy_data::hp
    case 0xC03433: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/unknown/C0/C032EC.asm:145 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC03433.
    case 0xC03435: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C0/C032EC.asm:146 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC03436: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C0/C032EC.asm:146 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC03438: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C0/C032EC.asm:146 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0343A: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C0/C032EC.asm:146 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0343C: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C032EC.asm:147 CLC
    case 0xC0343E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:148 ADC @VIRTUAL06
    case 0xC0343F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C032EC.asm:149 STA @VIRTUAL06
    case 0xC03441: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C032EC.asm:150 LDA [@VIRTUAL06]
    case 0xC03443: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C032EC.asm:151 STA GAME_STATE+game_state::party_npc_1_hp
    case 0xC03445: cpu.execute_instruction<0x8D>(0x00983C, 3); return true;
    // src/unknown/C0/C032EC.asm:152 SEP #PROC_FLAGS::ACCUM8
    case 0xC03448: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:153 LDA GAME_STATE + game_state::party_members,X
    case 0xC0344A: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/unknown/C0/C032EC.asm:154 STA @LOCAL00
    case 0xC0344D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C032EC.asm:155 STA @VIRTUAL00
    case 0xC0344F: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C032EC.asm:156 LDX @VIRTUAL02
    case 0xC03451: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C032EC.asm:157 LDA __BSS_START__,X
    case 0xC03453: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:158 CMP @VIRTUAL00
    case 0xC03456: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C0/C032EC.asm:159 BEQ @UNKNOWN8
    case 0xC03458: cpu.execute_instruction<0xF0>(0x000078, 2); return true;
    // src/unknown/C0/C032EC.asm:160 LDA @LOCAL00
    case 0xC0345A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C032EC.asm:161 LDX @VIRTUAL02
    case 0xC0345C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C032EC.asm:162 STA __BSS_START__,X
    case 0xC0345E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:163 REP #PROC_FLAGS::ACCUM8
    case 0xC03461: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:164 AND #$00FF
    case 0xC03463: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC.asm:164 AND #$00FF
    // Overlapping static entry reached from 0xC03463.
    case 0xC03465: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C032EC.asm:165 ASL
    case 0xC03466: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:166 INC
    case 0xC03467: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C032EC.asm:167 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC03468: cpu.execute_instruction<0xA6>(0x00000F, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C032EC.asm:167 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC0346A: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C032EC.asm:167 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC0346C: cpu.execute_instruction<0xA6>(0x000011, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C032EC.asm:167 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC0346E: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C0/C032EC.asm:168 CLC
    case 0xC03470: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:169 ADC @VIRTUAL06
    case 0xC03471: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C032EC.asm:170 STA @VIRTUAL06
    case 0xC03473: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C032EC.asm:171 LDA [@VIRTUAL06]
    case 0xC03475: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C032EC.asm:172 AND #$00FF
    case 0xC03477: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC03477.
    case 0xC03479: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C032EC.asm:173 LDY #.SIZEOF(enemy_data)
    case 0xC0347A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C032EC.asm:173 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC0347A.
    case 0xC0347C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C032EC.asm:174 JSL MULT168
    case 0xC0347D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C032EC.asm:175 CLC
    case 0xC03481: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:176 ADC #enemy_data::hp
    case 0xC03482: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/unknown/C0/C032EC.asm:176 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC03482.
    case 0xC03484: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C032EC.asm:177 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC03485: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C032EC.asm:177 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC03487: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C032EC.asm:177 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC03489: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C032EC.asm:177 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0348B: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C0/C032EC.asm:178 CLC
    case 0xC0348D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:179 ADC @VIRTUAL06
    case 0xC0348E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C032EC.asm:180 STA @VIRTUAL06
    case 0xC03490: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C032EC.asm:181 LDA [@VIRTUAL06]
    case 0xC03492: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C032EC.asm:182 STA GAME_STATE+game_state::party_npc_2_hp
    case 0xC03494: cpu.execute_instruction<0x8D>(0x00983E, 3); return true;
    // src/unknown/C0/C032EC.asm:183 BRA @UNKNOWN8
    case 0xC03497: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/unknown/C0/C032EC.asm:185 INY
    case 0xC03499: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:186 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_2
    case 0xC0349A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003B, 2); else cpu.execute_instruction<0xA2>(0x00983B, 3); return true;
    // src/unknown/C0/C032EC.asm:186 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_2
    // Overlapping static entry reached from 0xC0349A.
    case 0xC0349C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:187 LDA GAME_STATE + game_state::party_members,Y
    case 0xC0349D: cpu.execute_instruction<0xB9>(0x00986F, 3); return true;
    // src/unknown/C0/C032EC.asm:188 STA @LOCAL00
    case 0xC034A0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C032EC.asm:189 STA @VIRTUAL00
    case 0xC034A2: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C032EC.asm:190 LDA __BSS_START__,X
    case 0xC034A4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:191 CMP @VIRTUAL00
    case 0xC034A7: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C0/C032EC.asm:192 BEQ @UNKNOWN8
    case 0xC034A9: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C0/C032EC.asm:193 LDA @LOCAL00
    case 0xC034AB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C032EC.asm:194 STA __BSS_START__,X
    case 0xC034AD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC.asm:195 REP #PROC_FLAGS::ACCUM8
    case 0xC034B0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC.asm:196 AND #$00FF
    case 0xC034B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC.asm:196 AND #$00FF
    // Overlapping static entry reached from 0xC034B2.
    case 0xC034B4: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C032EC.asm:197 ASL
    case 0xC034B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:198 TAX
    case 0xC034B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:199 INX
    case 0xC034B7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:200 LDA f:NPC_AI_TABLE,X
    case 0xC034B8: cpu.execute_instruction<0xBF>(0xD58F23, 4); return true;
    // src/unknown/C0/C032EC.asm:201 AND #$00FF
    case 0xC034BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC.asm:201 AND #$00FF
    // Overlapping static entry reached from 0xC034BC.
    case 0xC034BE: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C032EC.asm:202 LDY #.SIZEOF(enemy_data)
    case 0xC034BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C032EC.asm:202 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC034BF.
    case 0xC034C1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C032EC.asm:203 JSL MULT168
    case 0xC034C2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C032EC.asm:204 CLC
    case 0xC034C6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:205 ADC #enemy_data::hp
    case 0xC034C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/unknown/C0/C032EC.asm:205 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC034C7.
    case 0xC034C9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C032EC.asm:206 TAX
    case 0xC034CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC.asm:207 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC034CB: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/unknown/C0/C032EC.asm:208 STA GAME_STATE+game_state::party_npc_2_hp
    case 0xC034CF: cpu.execute_instruction<0x8D>(0x00983E, 3); return true;
    // src/unknown/C0/C032EC.asm:210 REP #PROC_FLAGS::ACCUM8
    case 0xC034D2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C032EC.asm:211 END_C_FUNCTION
    case 0xC034D4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C032EC.asm:211 END_C_FUNCTION
    case 0xC034D5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0369B.asm (unresolved).
bool execute_unresolved_c0_c0369b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0369B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0369B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0369B.asm:14 END_STACK_VARS
    case 0xC0369D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0369B.asm:14 END_STACK_VARS
    case 0xC0369E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0369B.asm:14 END_STACK_VARS
    case 0xC0369F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0369B.asm:14 END_STACK_VARS
    case 0xC036A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0369B.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC036A0.
    case 0xC036A2: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0369B.asm:14 END_STACK_VARS
    case 0xC036A3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0369B.asm:14 END_STACK_VARS
    case 0xC036A4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:15 TAY
    case 0xC036A5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:16 STY @LOCAL06
    case 0xC036A6: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B.asm:17 LDX #0
    case 0xC036A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0369B.asm:17 LDX #0
    // Overlapping static entry reached from 0xC036A8.
    case 0xC036AA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0369B.asm:18 STX @LOCAL05
    case 0xC036AB: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C0369B.asm:19 CPY #5
    case 0xC036AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000005, 2); else cpu.execute_instruction<0xC0>(0x000005, 3); return true;
    // src/unknown/C0/C0369B.asm:19 CPY #5
    // Overlapping static entry reached from 0xC036AD.
    case 0xC036AF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0369B.asm:20 BCC @UNKNOWN1
    case 0xC036B0: cpu.execute_instruction<0x90>(0x000019, 2); return true;
    // src/unknown/C0/C0369B.asm:22 LDA GAME_STATE + game_state::unknown96,X
    case 0xC036B2: cpu.execute_instruction<0xBD>(0x00988B, 3); return true;
    // src/unknown/C0/C0369B.asm:23 AND #$00FF
    case 0xC036B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC036B5.
    case 0xC036B7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0369B.asm:24 BEQ @UNKNOWN5
    case 0xC036B8: cpu.execute_instruction<0xF0>(0x000059, 2); return true;
    // src/unknown/C0/C0369B.asm:25 AND #$00FF
    case 0xC036BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC036BA.
    case 0xC036BC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0369B.asm:26 STA @VIRTUAL02
    case 0xC036BD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0369B.asm:27 TYA
    case 0xC036BF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:28 CMP @VIRTUAL02
    case 0xC036C0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0369B.asm:29 BLTEQ @UNKNOWN5
    case 0xC036C2: cpu.execute_instruction<0x90>(0x00004F, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0369B.asm:29 BLTEQ @UNKNOWN5
    case 0xC036C4: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/unknown/C0/C0369B.asm:30 INX
    case 0xC036C6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:31 STX @LOCAL05
    case 0xC036C7: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C0369B.asm:32 BRA @UNKNOWN0
    case 0xC036C9: cpu.execute_instruction<0x80>(0x0000E7, 2); return true;
    // src/unknown/C0/C0369B.asm:34 LDA GAME_STATE + game_state::unknown96,X
    case 0xC036CB: cpu.execute_instruction<0xBD>(0x00988B, 3); return true;
    // src/unknown/C0/C0369B.asm:35 AND #$00FF
    case 0xC036CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC036CE.
    case 0xC036D0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0369B.asm:36 BEQ @UNKNOWN5
    case 0xC036D1: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/unknown/C0/C0369B.asm:37 AND #$00FF
    case 0xC036D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC036D3.
    case 0xC036D5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0369B.asm:38 STA @LOCAL04
    case 0xC036D6: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0369B.asm:39 STA @VIRTUAL02
    case 0xC036D8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0369B.asm:40 LDA #5
    case 0xC036DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0369B.asm:40 LDA #5
    // Overlapping static entry reached from 0xC036DA.
    case 0xC036DC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0369B.asm:41 CLC
    case 0xC036DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:42 SBC @VIRTUAL02
    case 0xC036DE: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0369B.asm:43 BRANCHLTEQS @UNKNOWN5
    case 0xC036E0: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0369B.asm:43 BRANCHLTEQS @UNKNOWN5
    case 0xC036E2: cpu.execute_instruction<0x10>(0x00002F, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0369B.asm:43 BRANCHLTEQS @UNKNOWN5
    case 0xC036E4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0369B.asm:43 BRANCHLTEQS @UNKNOWN5
    case 0xC036E6: cpu.execute_instruction<0x30>(0x00002B, 2); return true;
    // src/unknown/C0/C0369B.asm:44 LDY @LOCAL06
    case 0xC036E8: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B.asm:45 STY @VIRTUAL02
    case 0xC036EA: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0369B.asm:46 LDA @LOCAL04
    case 0xC036EC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0369B.asm:47 CMP @VIRTUAL02
    case 0xC036EE: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C0369B.asm:48 BGT @UNKNOWN5
    case 0xC036F0: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0369B.asm:48 BGT @UNKNOWN5
    case 0xC036F2: cpu.execute_instruction<0xB0>(0x00001F, 2); return true;
    // src/unknown/C0/C0369B.asm:49 ASL
    case 0xC036F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:50 TAX
    case 0xC036F5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:51 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC036F6: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/C0/C0369B.asm:52 LDY #.SIZEOF(char_struct)
    case 0xC036F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C0369B.asm:52 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC036F9.
    case 0xC036FB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0369B.asm:53 JSL MULT168
    case 0xC036FC: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C0369B.asm:54 TAX
    case 0xC03700: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:55 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC03701: cpu.execute_instruction<0xBD>(0x0099DC, 3); return true;
    // src/unknown/C0/C0369B.asm:56 AND #$00FF
    case 0xC03704: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC03704.
    case 0xC03706: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0369B.asm:57 CMP #1
    case 0xC03707: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0369B.asm:57 CMP #1
    // Overlapping static entry reached from 0xC03707.
    case 0xC03709: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0369B.asm:58 BEQ @UNKNOWN5
    case 0xC0370A: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0369B.asm:59 LDX @LOCAL05
    case 0xC0370C: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0369B.asm:60 INX
    case 0xC0370E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:61 STX @LOCAL05
    case 0xC0370F: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C0369B.asm:62 BRA @UNKNOWN1
    case 0xC03711: cpu.execute_instruction<0x80>(0x0000B8, 2); return true;
    // src/unknown/C0/C0369B.asm:64 LDX @LOCAL05
    case 0xC03713: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0369B.asm:65 LDA GAME_STATE + game_state::unknown96,X
    case 0xC03715: cpu.execute_instruction<0xBD>(0x00988B, 3); return true;
    // src/unknown/C0/C0369B.asm:66 AND #$00FF
    case 0xC03718: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC03718.
    case 0xC0371A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0369B.asm:67 BEQ @UNKNOWN8
    case 0xC0371B: cpu.execute_instruction<0xF0>(0x000053, 2); return true;
    // src/unknown/C0/C0369B.asm:68 LDA #5
    case 0xC0371D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0369B.asm:68 LDA #5
    // Overlapping static entry reached from 0xC0371D.
    case 0xC0371F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0369B.asm:69 STA @LOCAL03
    case 0xC03720: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0369B.asm:70 BRA @UNKNOWN7
    case 0xC03722: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // src/unknown/C0/C0369B.asm:72 CLC
    case 0xC03724: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:73 ADC #.LOWORD(GAME_STATE)
    case 0xC03725: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F5, 2); else cpu.execute_instruction<0x69>(0x0097F5, 3); return true;
    // src/unknown/C0/C0369B.asm:73 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03725.
    case 0xC03727: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // src/unknown/C0/C0369B.asm:74 STA @LOCAL02
    case 0xC03728: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0369B.asm:74 STA @LOCAL02
    // Overlapping static entry reached from 0xC03727.
    case 0xC03729: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // src/unknown/C0/C0369B.asm:75 LDA @LOCAL03
    case 0xC0372A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0369B.asm:75 LDA @LOCAL03
    // Overlapping static entry reached from 0xC03729.
    case 0xC0372B: cpu.execute_instruction<0x14>(0x00003A, 2); return true;
    // src/unknown/C0/C0369B.asm:76 DEC
    case 0xC0372C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:77 STA @VIRTUAL04
    case 0xC0372D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0369B.asm:78 CLC
    case 0xC0372F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:79 ADC #.LOWORD(GAME_STATE)
    case 0xC03730: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F5, 2); else cpu.execute_instruction<0x69>(0x0097F5, 3); return true;
    // src/unknown/C0/C0369B.asm:79 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03730.
    case 0xC03732: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // src/unknown/C0/C0369B.asm:80 STA @VIRTUAL02
    case 0xC03733: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0369B.asm:80 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC03732.
    case 0xC03734: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/unknown/C0/C0369B.asm:81 LDX @VIRTUAL02
    case 0xC03735: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0369B.asm:82 SEP #PROC_FLAGS::ACCUM8
    case 0xC03737: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B.asm:83 LDA __BSS_START__ + game_state::unknown96,X
    case 0xC03739: cpu.execute_instruction<0xBD>(0x000096, 3); return true;
    // src/unknown/C0/C0369B.asm:84 LDY #game_state::unknown96
    case 0xC0373C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000096, 2); else cpu.execute_instruction<0xA0>(0x000096, 3); return true;
    // src/unknown/C0/C0369B.asm:84 LDY #game_state::unknown96
    // Overlapping static entry reached from 0xC0373C.
    case 0xC0373E: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C0/C0369B.asm:85 STA (@LOCAL02),Y
    case 0xC0373F: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/unknown/C0/C0369B.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC03741: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B.asm:87 LDA @LOCAL03
    case 0xC03743: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0369B.asm:88 ASL
    case 0xC03745: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:89 PHA
    case 0xC03746: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:90 LDA @VIRTUAL04
    case 0xC03747: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0369B.asm:91 ASL
    case 0xC03749: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:92 TAX
    case 0xC0374A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:93 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC0374B: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C0/C0369B.asm:94 PLX
    case 0xC0374E: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:95 STA GAME_STATE + game_state::unknownA2,X
    case 0xC0374F: cpu.execute_instruction<0x9D>(0x009897, 3); return true;
    // src/unknown/C0/C0369B.asm:96 LDX @VIRTUAL02
    case 0xC03752: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0369B.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC03754: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B.asm:98 LDA __BSS_START__+game_state::player_controlled_party_members,X
    case 0xC03756: cpu.execute_instruction<0xBD>(0x00009C, 3); return true;
    // src/unknown/C0/C0369B.asm:99 LDY #game_state::player_controlled_party_members
    case 0xC03759: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009C, 2); else cpu.execute_instruction<0xA0>(0x00009C, 3); return true;
    // src/unknown/C0/C0369B.asm:99 LDY #game_state::player_controlled_party_members
    // Overlapping static entry reached from 0xC03759.
    case 0xC0375B: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C0/C0369B.asm:100 STA (@LOCAL02),Y
    case 0xC0375C: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/unknown/C0/C0369B.asm:101 REP #PROC_FLAGS::ACCUM8
    case 0xC0375E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B.asm:102 LDA @VIRTUAL04
    case 0xC03760: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0369B.asm:103 STA @LOCAL03
    case 0xC03762: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0369B.asm:105 LDX @LOCAL05
    case 0xC03764: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0369B.asm:106 TXA
    case 0xC03766: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:107 DEC
    case 0xC03767: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:108 STA @VIRTUAL02
    case 0xC03768: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0369B.asm:109 LDA @LOCAL03
    case 0xC0376A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0369B.asm:110 CMP @VIRTUAL02
    case 0xC0376C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0369B.asm:111 BNE @UNKNOWN6
    case 0xC0376E: cpu.execute_instruction<0xD0>(0x0000B4, 2); return true;
    // src/unknown/C0/C0369B.asm:113 LDY @LOCAL06
    case 0xC03770: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B.asm:114 TYA
    case 0xC03772: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:115 SEP #PROC_FLAGS::ACCUM8
    case 0xC03773: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B.asm:116 STA GAME_STATE + game_state::unknown96,X
    case 0xC03775: cpu.execute_instruction<0x9D>(0x00988B, 3); return true;
    // src/unknown/C0/C0369B.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC03778: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B.asm:118 LDA #.LOWORD(GAME_STATE) + game_state::party_count
    case 0xC0377A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A3, 2); else cpu.execute_instruction<0xA9>(0x0098A3, 3); return true;
    // src/unknown/C0/C0369B.asm:118 LDA #.LOWORD(GAME_STATE) + game_state::party_count
    // Overlapping static entry reached from 0xC0377A.
    case 0xC0377C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:119 PHA
    case 0xC0377D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:120 TAX
    case 0xC0377E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:121 SEP #PROC_FLAGS::ACCUM8
    case 0xC0377F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B.asm:122 LDA __BSS_START__,X
    case 0xC03781: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0369B.asm:123 INC
    case 0xC03784: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:124 PLX
    case 0xC03785: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:125 STA __BSS_START__,X
    case 0xC03786: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0369B.asm:126 REP #PROC_FLAGS::ACCUM8
    case 0xC03789: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B.asm:127 TYA
    case 0xC0378B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:128 DEC
    case 0xC0378C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:129 STA @LOCAL02
    case 0xC0378D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0369B.asm:130 STA NEW_ENTITY_VAR0
    case 0xC0378F: cpu.execute_instruction<0x8D>(0x000A38, 3); return true;
    // src/unknown/C0/C0369B.asm:131 LDA @LOCAL02
    case 0xC03792: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:132 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03794: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:132 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03795: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:132 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03796: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:133 CLC
    case 0xC03797: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:134 ADC #character_initial_entity_entry::unknown6
    case 0xC03798: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C0/C0369B.asm:134 ADC #character_initial_entity_entry::unknown6
    // Overlapping static entry reached from 0xC03798.
    case 0xC0379A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0369B.asm:135 TAX
    case 0xC0379B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:136 LDA f:CHARACTER_INITIAL_ENTITY_DATA,X
    case 0xC0379C: cpu.execute_instruction<0xBF>(0xC3E012, 4); return true;
    // src/unknown/C0/C0369B.asm:137 STA @LOCAL06
    case 0xC037A0: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B.asm:138 ASL
    case 0xC037A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:139 TAX
    case 0xC037A3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:140 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC037A4: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/unknown/C0/C0369B.asm:141 CMP #.LOWORD(-1)
    case 0xC037A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0369B.asm:141 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC037A7.
    case 0xC037A9: cpu.execute_instruction<0xFF>(0xE602F0, 4); return true;
    // src/unknown/C0/C0369B.asm:142 BEQ @UNKNOWN9
    case 0xC037AA: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C0/C0369B.asm:143 INC @LOCAL06
    case 0xC037AC: cpu.execute_instruction<0xE6>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B.asm:143 INC @LOCAL06
    // Overlapping static entry reached from 0xC037A9.
    case 0xC037AD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:145 LDX @LOCAL05
    case 0xC037AE: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0369B.asm:146 TXA
    case 0xC037B0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:147 ASL
    case 0xC037B1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:148 TAX
    case 0xC037B2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:149 LDA @LOCAL06
    case 0xC037B3: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B.asm:150 STA GAME_STATE + game_state::unknownA2,X
    case 0xC037B5: cpu.execute_instruction<0x9D>(0x009897, 3); return true;
    // src/unknown/C0/C0369B.asm:151 LDA @LOCAL06
    case 0xC037B8: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B.asm:152 STA NEW_ENTITY_VAR1
    case 0xC037BA: cpu.execute_instruction<0x8D>(0x000A3A, 3); return true;
    // src/unknown/C0/C0369B.asm:153 SEC
    case 0xC037BD: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:154 SBC #24
    case 0xC037BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000018, 2); else cpu.execute_instruction<0xE9>(0x000018, 3); return true;
    // src/unknown/C0/C0369B.asm:154 SBC #24
    // Overlapping static entry reached from 0xC037BE.
    case 0xC037C0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0369B.asm:155 STA NEW_ENTITY_VAR1
    case 0xC037C1: cpu.execute_instruction<0x8D>(0x000A3A, 3); return true;
    // src/unknown/C0/C0369B.asm:156 SEP #PROC_FLAGS::ACCUM8
    case 0xC037C4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B.asm:157 LDA NEW_ENTITY_VAR1
    case 0xC037C6: cpu.execute_instruction<0xAD>(0x000A3A, 3); return true;
    // src/unknown/C0/C0369B.asm:158 LDX @LOCAL05
    case 0xC037C9: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0369B.asm:159 STA GAME_STATE+game_state::player_controlled_party_members,X
    case 0xC037CB: cpu.execute_instruction<0x9D>(0x009891, 3); return true;
    // src/unknown/C0/C0369B.asm:160 REP #PROC_FLAGS::ACCUM8
    case 0xC037CE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B.asm:161 LDA GAME_STATE+game_state::party_count
    case 0xC037D0: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C0/C0369B.asm:162 AND #$00FF
    case 0xC037D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC037D3.
    case 0xC037D5: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0369B.asm:163 CMP #1
    case 0xC037D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0369B.asm:163 CMP #1
    // Overlapping static entry reached from 0xC037D6.
    case 0xC037D8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0369B.asm:164 BNE @UNKNOWN10
    case 0xC037D9: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/C0/C0369B.asm:165 LDA NEW_ENTITY_VAR1
    case 0xC037DB: cpu.execute_instruction<0xAD>(0x000A3A, 3); return true;
    // src/unknown/C0/C0369B.asm:166 LDY #.SIZEOF(char_struct)
    case 0xC037DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C0369B.asm:166 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC037DE.
    case 0xC037E0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0369B.asm:167 JSL MULT168
    case 0xC037E1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C0369B.asm:168 TAX
    case 0xC037E5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:169 LDA GAME_STATE + game_state::unknown88
    case 0xC037E6: cpu.execute_instruction<0xAD>(0x00987D, 3); return true;
    // src/unknown/C0/C0369B.asm:170 STA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC037E9: cpu.execute_instruction<0x9D>(0x009A0B, 3); return true;
    // src/unknown/C0/C0369B.asm:171 BRA @UNKNOWN13
    case 0xC037EC: cpu.execute_instruction<0x80>(0x000035, 2); return true;
    // src/unknown/C0/C0369B.asm:173 CPX #0
    case 0xC037EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0369B.asm:173 CPX #0
    // Overlapping static entry reached from 0xC037EE.
    case 0xC037F0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0369B.asm:174 BNE @UNKNOWN11
    case 0xC037F1: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C0/C0369B.asm:175 LDA GAME_STATE + game_state::unknown88
    case 0xC037F3: cpu.execute_instruction<0xAD>(0x00987D, 3); return true;
    // src/unknown/C0/C0369B.asm:176 STA @LOCAL04
    case 0xC037F6: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0369B.asm:177 BRA @UNKNOWN12
    case 0xC037F8: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C0/C0369B.asm:179 TXA
    case 0xC037FA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:180 DEC
    case 0xC037FB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:181 ASL
    case 0xC037FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:182 TAX
    case 0xC037FD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:183 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC037FE: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C0/C0369B.asm:184 ASL
    case 0xC03801: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:185 TAX
    case 0xC03802: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:186 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC03803: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/C0/C0369B.asm:187 LDY #.SIZEOF(char_struct)
    case 0xC03806: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C0369B.asm:187 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03806.
    case 0xC03808: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0369B.asm:188 JSL MULT168
    case 0xC03809: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C0369B.asm:189 TAX
    case 0xC0380D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:190 LDA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC0380E: cpu.execute_instruction<0xBD>(0x009A0B, 3); return true;
    // src/unknown/C0/C0369B.asm:191 STA @LOCAL04
    case 0xC03811: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0369B.asm:193 LDA NEW_ENTITY_VAR1
    case 0xC03813: cpu.execute_instruction<0xAD>(0x000A3A, 3); return true;
    // src/unknown/C0/C0369B.asm:194 LDY #.SIZEOF(char_struct)
    case 0xC03816: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C0369B.asm:194 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03816.
    case 0xC03818: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0369B.asm:195 JSL MULT168
    case 0xC03819: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C0369B.asm:196 TAX
    case 0xC0381D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:197 LDA @LOCAL04
    case 0xC0381E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0369B.asm:198 STA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC03820: cpu.execute_instruction<0x9D>(0x009A0B, 3); return true;
    // src/unknown/C0/C0369B.asm:200 LDA NEW_ENTITY_VAR1
    case 0xC03823: cpu.execute_instruction<0xAD>(0x000A3A, 3); return true;
    // src/unknown/C0/C0369B.asm:201 LDY #.SIZEOF(char_struct)
    case 0xC03826: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C0369B.asm:201 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03826.
    case 0xC03828: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0369B.asm:202 JSL MULT168
    case 0xC03829: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C0369B.asm:203 TAX
    case 0xC0382D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:204 LDA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC0382E: cpu.execute_instruction<0xBD>(0x009A0B, 3); return true;
    // src/unknown/C0/C0369B.asm:205 BEQ @UNKNOWN14
    case 0xC03831: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C0369B.asm:206 TAX
    case 0xC03833: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:207 DEX
    case 0xC03834: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:208 BRA @UNKNOWN15
    case 0xC03835: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0369B.asm:210 LDX #$00FF
    case 0xC03837: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B.asm:210 LDX #$00FF
    // Overlapping static entry reached from 0xC03837.
    case 0xC03839: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C0/C0369B.asm:212 TXA
    case 0xC0383A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C0369B.asm:213 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0383B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:213 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0383D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C0369B.asm:213 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0383E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:213 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC03840: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:213 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC03841: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:214 TAX
    case 0xC03842: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:215 LDA PLAYER_POSITION_BUFFER + player_position_buffer_entry::x_coord,X
    case 0xC03843: cpu.execute_instruction<0xBD>(0x005156, 3); return true;
    // src/unknown/C0/C0369B.asm:216 STA @VIRTUAL04
    case 0xC03846: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0369B.asm:217 LDA PLAYER_POSITION_BUFFER + player_position_buffer_entry::y_coord,X
    case 0xC03848: cpu.execute_instruction<0xBD>(0x005158, 3); return true;
    // src/unknown/C0/C0369B.asm:218 STA @VIRTUAL02
    case 0xC0384B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0369B.asm:219 LDA GAME_STATE + game_state::unknown92
    case 0xC0384D: cpu.execute_instruction<0xAD>(0x009887, 3); return true;
    // src/unknown/C0/C0369B.asm:220 CMP #3
    case 0xC03850: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0369B.asm:220 CMP #3
    // Overlapping static entry reached from 0xC03850.
    case 0xC03852: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0369B.asm:221 BEQ @UNKNOWN16
    case 0xC03853: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C0/C0369B.asm:222 LDA @LOCAL02
    case 0xC03855: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:223 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03857: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:223 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03858: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:223 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03859: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:224 TAX
    case 0xC0385A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:225 LDA f:CHARACTER_INITIAL_ENTITY_DATA,X ;character_initial_entity_entry::overworld_sprite
    case 0xC0385B: cpu.execute_instruction<0xBF>(0xC3E012, 4); return true;
    // src/unknown/C0/C0369B.asm:226 STA @LOCAL05
    case 0xC0385F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0369B.asm:227 BRA @UNKNOWN17
    case 0xC03861: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C0369B.asm:229 LDA @LOCAL02
    case 0xC03863: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:230 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03865: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:230 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03866: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:230 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03867: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:231 TAX
    case 0xC03868: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:232 INX
    case 0xC03869: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:233 INX
    case 0xC0386A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:234 LDA f:CHARACTER_INITIAL_ENTITY_DATA,X ;character_initial_entity_entry::lost_underworld_sprite
    case 0xC0386B: cpu.execute_instruction<0xBF>(0xC3E012, 4); return true;
    // src/unknown/C0/C0369B.asm:235 STA @LOCAL05
    case 0xC0386F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0369B.asm:237 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    case 0xC03871: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x00E012, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0369B.asm:237 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC03871.
    case 0xC03873: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0369B.asm:237 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    case 0xC03874: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0369B.asm:237 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC03873.
    case 0xC03875: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0369B.asm:237 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    case 0xC03876: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0369B.asm:237 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC03875.
    case 0xC03877: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0369B.asm:237 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC03876.
    case 0xC03878: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0369B.asm:237 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    case 0xC03879: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0369B.asm:238 LDA @VIRTUAL04
    case 0xC0387B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0369B.asm:239 STA @LOCAL00
    case 0xC0387D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0369B.asm:240 LDA @VIRTUAL02
    case 0xC0387F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0369B.asm:241 STA @LOCAL01
    case 0xC03881: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0369B.asm:242 LDY @LOCAL06
    case 0xC03883: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B.asm:243 LDA @LOCAL02
    case 0xC03885: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:244 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03887: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:244 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03888: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:244 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03889: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:245 INC
    case 0xC0388A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:246 INC
    case 0xC0388B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:247 INC
    case 0xC0388C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:248 INC
    case 0xC0388D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C0369B.asm:249 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0388E: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C0369B.asm:249 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC03890: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C0369B.asm:249 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC03892: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C0369B.asm:249 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC03894: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C0/C0369B.asm:250 CLC
    case 0xC03896: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:251 ADC @VIRTUAL0A
    case 0xC03897: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C0369B.asm:252 STA @VIRTUAL0A
    case 0xC03899: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0369B.asm:253 LDA [@VIRTUAL0A] ;character_initial_entity_entry::actionscript_id
    case 0xC0389B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C0369B.asm:254 TAX
    case 0xC0389D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:255 LDA @LOCAL05
    case 0xC0389E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0369B.asm:256 JSL CREATE_ENTITY
    case 0xC038A0: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/C0/C0369B.asm:257 LDA @LOCAL06
    case 0xC038A4: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B.asm:258 ASL
    case 0xC038A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:259 TAX
    case 0xC038A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:260 STX @LOCAL03
    case 0xC038A8: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0369B.asm:261 LDA @VIRTUAL04
    case 0xC038AA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0369B.asm:262 SEC
    case 0xC038AC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:263 SBC BG1_X_POS
    case 0xC038AD: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C0/C0369B.asm:264 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC038B0: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/unknown/C0/C0369B.asm:265 LDA @VIRTUAL02
    case 0xC038B3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0369B.asm:266 SEC
    case 0xC038B5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:267 SBC BG1_Y_POS
    case 0xC038B6: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C0/C0369B.asm:268 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC038B9: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // src/unknown/C0/C0369B.asm:269 LDY #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC038BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000089, 2); else cpu.execute_instruction<0xA0>(0x009889, 3); return true;
    // src/unknown/C0/C0369B.asm:269 LDY #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC038BC.
    case 0xC038BE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:270 STY @LOCAL05
    case 0xC038BF: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C0369B.asm:271 LDA GAME_STATE + game_state::unknown96
    case 0xC038C1: cpu.execute_instruction<0xAD>(0x00988B, 3); return true;
    // src/unknown/C0/C0369B.asm:272 AND #$00FF
    case 0xC038C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B.asm:272 AND #$00FF
    // Overlapping static entry reached from 0xC038C4.
    case 0xC038C6: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C0/C0369B.asm:273 DEC
    case 0xC038C7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:274 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC038C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:274 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC038C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0369B.asm:274 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC038CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:275 CLC
    case 0xC038CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:276 ADC #character_initial_entity_entry::unknown6
    case 0xC038CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C0/C0369B.asm:276 ADC #character_initial_entity_entry::unknown6
    // Overlapping static entry reached from 0xC038CC.
    case 0xC038CE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0369B.asm:277 CLC
    case 0xC038CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B.asm:278 ADC @VIRTUAL06
    case 0xC038D0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0369B.asm:279 STA @VIRTUAL06
    case 0xC038D2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0369B.asm:280 LDA [@VIRTUAL06]
    case 0xC038D4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0369B.asm:281 STA __BSS_START__,Y
    case 0xC038D6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0369B.asm:282 JSL UNKNOWN_C09CD7
    case 0xC038D9: cpu.execute_instruction<0x22>(0xC09CD7, 4); return true;
    // src/unknown/C0/C0369B.asm:283 JSL UNKNOWN_C032EC
    case 0xC038DD: cpu.execute_instruction<0x22>(0xC032EC, 4); return true;
    // src/unknown/C0/C0369B.asm:284 LDA GAME_STATE + game_state::unknownA2
    case 0xC038E1: cpu.execute_instruction<0xAD>(0x009897, 3); return true;
    // src/unknown/C0/C0369B.asm:285 LDY @LOCAL05
    case 0xC038E4: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C0369B.asm:286 STA __BSS_START__,Y
    case 0xC038E6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0369B.asm:287 JSL UPDATE_PARTY
    case 0xC038E9: cpu.execute_instruction<0x22>(0xC034D6, 4); return true;
    // src/unknown/C0/C0369B.asm:288 LDA @VIRTUAL04
    case 0xC038ED: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0369B.asm:289 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC038EF: cpu.execute_instruction<0x8D>(0x009E2D, 3); return true;
    // src/unknown/C0/C0369B.asm:290 LDA @VIRTUAL02
    case 0xC038F2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0369B.asm:291 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC038F4: cpu.execute_instruction<0x8D>(0x009E2F, 3); return true;
    // src/unknown/C0/C0369B.asm:292 LDX @LOCAL03
    case 0xC038F7: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0369B.asm:293 LDA ENTITY_DIRECTIONS,X
    case 0xC038F9: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/unknown/C0/C0369B.asm:294 STA ENTITY_PREPARED_DIRECTION
    case 0xC038FC: cpu.execute_instruction<0x8D>(0x009E31, 3); return true;
    // src/unknown/C0/C0369B.asm:295 LDA @LOCAL06
    case 0xC038FF: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0369B.asm:296 END_C_FUNCTION
    case 0xC03901: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0369B.asm:296 END_C_FUNCTION
    case 0xC03902: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03903.asm (unresolved).
bool execute_unresolved_c0_c03903_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03903.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03903: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03903.asm:8 END_STACK_VARS
    case 0xC03905: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C03903.asm:8 END_STACK_VARS
    case 0xC03906: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03903.asm:8 END_STACK_VARS
    case 0xC03907: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03903.asm:8 END_STACK_VARS
    case 0xC03908: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03903.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC03908.
    case 0xC0390A: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03903.asm:8 END_STACK_VARS
    case 0xC0390B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C03903.asm:8 END_STACK_VARS
    case 0xC0390C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:9 STA @VIRTUAL02
    case 0xC0390D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03903.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0390A.
    case 0xC0390E: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/C0/C03903.asm:10 LDY #0
    case 0xC0390F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C03903.asm:10 LDY #0
    // Overlapping static entry reached from 0xC0390F.
    case 0xC03911: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C03903.asm:11 BRA @UNKNOWN1
    case 0xC03912: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C0/C03903.asm:13 INY
    case 0xC03914: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:22 LDA GAME_STATE + game_state::unknown96,Y
    case 0xC03915: cpu.execute_instruction<0xB9>(0x00988B, 3); return true;
    // src/unknown/C0/C03903.asm:24 AND #$00FF
    case 0xC03918: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03903.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC03918.
    case 0xC0391A: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C0/C03903.asm:25 CMP @VIRTUAL02
    case 0xC0391B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C03903.asm:26 BEQ @UNKNOWN2
    case 0xC0391D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C03903.asm:27 CPY #6
    case 0xC0391F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C0/C03903.asm:27 CPY #6
    // Overlapping static entry reached from 0xC0391F.
    case 0xC03921: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C03903.asm:28 BNE @UNKNOWN0
    case 0xC03922: cpu.execute_instruction<0xD0>(0x0000F0, 2); return true;
    // src/unknown/C0/C03903.asm:30 CPY #6
    case 0xC03924: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C0/C03903.asm:30 CPY #6
    // Overlapping static entry reached from 0xC03924.
    case 0xC03926: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C03903.asm:31 BEQL @UNKNOWN7
    case 0xC03927: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C03903.asm:31 BEQL @UNKNOWN7
    case 0xC03929: cpu.execute_instruction<0x4C>(0x0039E3, 3); return true;
    // src/unknown/C0/C03903.asm:32 TYA
    case 0xC0392C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:33 ASL
    case 0xC0392D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:40 TAX
    case 0xC0392E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:41 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC0392F: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C0/C03903.asm:43 STA @VIRTUAL02
    case 0xC03932: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03903.asm:44 TYA
    case 0xC03934: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:45 STA @LOCAL01
    case 0xC03935: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C03903.asm:46 BRA @UNKNOWN5
    case 0xC03937: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/unknown/C0/C03903.asm:48 CLC
    case 0xC03939: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:49 ADC #.LOWORD(GAME_STATE)
    case 0xC0393A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F5, 2); else cpu.execute_instruction<0x69>(0x0097F5, 3); return true;
    // src/unknown/C0/C03903.asm:49 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0393A.
    case 0xC0393C: cpu.execute_instruction<0x97>(0x0000AA, 2); return true;
    // src/unknown/C0/C03903.asm:50 TAX
    case 0xC0393D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:51 STX @LOCAL00
    case 0xC0393E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C03903.asm:52 LDA @LOCAL01
    case 0xC03940: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C03903.asm:53 TAX
    case 0xC03942: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC03943: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C03903.asm:55 LDA GAME_STATE + game_state::unknown96 + 1,X
    case 0xC03945: cpu.execute_instruction<0xBD>(0x00988C, 3); return true;
    // src/unknown/C0/C03903.asm:56 LDX @LOCAL00
    case 0xC03948: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C03903.asm:57 STA __BSS_START__ + game_state::unknown96,X
    case 0xC0394A: cpu.execute_instruction<0x9D>(0x000096, 3); return true;
    // src/unknown/C0/C03903.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC0394D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C03903.asm:59 LDA @LOCAL01
    case 0xC0394F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C03903.asm:60 ASL
    case 0xC03951: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:61 STA @VIRTUAL04
    case 0xC03952: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C03903.asm:71 LDX @VIRTUAL04
    case 0xC03954: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C03903.asm:72 LDA GAME_STATE + game_state::unknownA2 + 2,X
    case 0xC03956: cpu.execute_instruction<0xBD>(0x009899, 3); return true;
    // src/unknown/C0/C03903.asm:73 LDX @VIRTUAL04
    case 0xC03959: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C03903.asm:74 STA GAME_STATE + game_state::unknownA2,X
    case 0xC0395B: cpu.execute_instruction<0x9D>(0x009897, 3); return true;
    // src/unknown/C0/C03903.asm:76 LDA @LOCAL01
    case 0xC0395E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C03903.asm:77 TAX
    case 0xC03960: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC03961: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C03903.asm:79 LDA GAME_STATE + game_state::unknown9D,X
    case 0xC03963: cpu.execute_instruction<0xBD>(0x009892, 3); return true;
    // src/unknown/C0/C03903.asm:80 LDX @LOCAL00
    case 0xC03966: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C03903.asm:81 STA __BSS_START__ + game_state::player_controlled_party_members,X
    case 0xC03968: cpu.execute_instruction<0x9D>(0x00009C, 3); return true;
    // src/unknown/C0/C03903.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC0396B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C03903.asm:83 LDA @LOCAL01
    case 0xC0396D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C03903.asm:84 INC
    case 0xC0396F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:85 STA @LOCAL01
    case 0xC03970: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C03903.asm:87 CMP #5
    case 0xC03972: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C03903.asm:87 CMP #5
    // Overlapping static entry reached from 0xC03972.
    case 0xC03974: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C03903.asm:88 BCC @UNKNOWN4
    case 0xC03975: cpu.execute_instruction<0x90>(0x0000C2, 2); return true;
    // src/unknown/C0/C03903.asm:89 CPY #0
    case 0xC03977: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C03903.asm:89 CPY #0
    // Overlapping static entry reached from 0xC03977.
    case 0xC03979: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C03903.asm:90 BNE @UNKNOWN6
    case 0xC0397A: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // src/unknown/C0/C03903.asm:91 LDA #.LOWORD(PARTY_CHARACTERS)+char_struct::position_index
    case 0xC0397C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x009A0B, 3); return true;
    // src/unknown/C0/C03903.asm:91 LDA #.LOWORD(PARTY_CHARACTERS)+char_struct::position_index
    // Overlapping static entry reached from 0xC0397C.
    case 0xC0397E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:92 STA @VIRTUAL04
    case 0xC0397F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C03903.asm:93 LDA GAME_STATE+game_state::player_controlled_party_members
    case 0xC03981: cpu.execute_instruction<0xAD>(0x009891, 3); return true;
    // src/unknown/C0/C03903.asm:94 AND #$00FF
    case 0xC03984: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03903.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC03984.
    case 0xC03986: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C03903.asm:95 LDY #.SIZEOF(char_struct)
    case 0xC03987: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C03903.asm:95 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03987.
    case 0xC03989: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03903.asm:96 JSL MULT168
    case 0xC0398A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C03903.asm:97 CLC
    case 0xC0398E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:98 ADC @VIRTUAL04
    case 0xC0398F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C03903.asm:99 PHA
    case 0xC03991: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:100 LDA @VIRTUAL02
    case 0xC03992: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03903.asm:101 ASL
    case 0xC03994: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:102 TAX
    case 0xC03995: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:103 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC03996: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/C0/C03903.asm:104 LDY #.SIZEOF(char_struct)
    case 0xC03999: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C03903.asm:104 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03999.
    case 0xC0399B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03903.asm:105 JSL MULT168
    case 0xC0399C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C03903.asm:106 CLC
    case 0xC039A0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:107 ADC @VIRTUAL04
    case 0xC039A1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C03903.asm:108 TAX
    case 0xC039A3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:109 LDA __BSS_START__,X
    case 0xC039A4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C03903.asm:110 PLX
    case 0xC039A7: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:111 STA __BSS_START__,X
    case 0xC039A8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03903.asm:113 LDA @LOCAL01
    case 0xC039AB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C03903.asm:121 TAX
    case 0xC039AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:122 SEP #PROC_FLAGS::ACCUM8
    case 0xC039AE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C03903.asm:123 STZ GAME_STATE + game_state::unknown96,X
    case 0xC039B0: cpu.execute_instruction<0x9E>(0x00988B, 3); return true;
    // src/unknown/C0/C03903.asm:125 LDX #.LOWORD(GAME_STATE)+game_state::party_count
    case 0xC039B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A3, 2); else cpu.execute_instruction<0xA2>(0x0098A3, 3); return true;
    // src/unknown/C0/C03903.asm:125 LDX #.LOWORD(GAME_STATE)+game_state::party_count
    // Overlapping static entry reached from 0xC039B3.
    case 0xC039B5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:126 LDA __BSS_START__,X
    case 0xC039B6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C03903.asm:127 DEC
    case 0xC039B9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:128 STA __BSS_START__,X
    case 0xC039BA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03903.asm:129 REP #PROC_FLAGS::ACCUM8
    case 0xC039BD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C03903.asm:130 LDA @VIRTUAL02
    case 0xC039BF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03903.asm:131 ASL
    case 0xC039C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:132 TAX
    case 0xC039C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:133 LDA ENTITY_ABS_X_TABLE,X
    case 0xC039C3: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C03903.asm:134 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC039C6: cpu.execute_instruction<0x8D>(0x009E2D, 3); return true;
    // src/unknown/C0/C03903.asm:135 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC039C9: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C03903.asm:136 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC039CC: cpu.execute_instruction<0x8D>(0x009E2F, 3); return true;
    // src/unknown/C0/C03903.asm:137 LDA ENTITY_DIRECTIONS,X
    case 0xC039CF: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/unknown/C0/C03903.asm:138 STA ENTITY_PREPARED_DIRECTION
    case 0xC039D2: cpu.execute_instruction<0x8D>(0x009E31, 3); return true;
    // src/unknown/C0/C03903.asm:139 LDA @VIRTUAL02
    case 0xC039D5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03903.asm:140 JSL UNKNOWN_C02140
    case 0xC039D7: cpu.execute_instruction<0x22>(0xC02140, 4); return true;
    // src/unknown/C0/C03903.asm:141 JSL UNKNOWN_C032EC
    case 0xC039DB: cpu.execute_instruction<0x22>(0xC032EC, 4); return true;
    // src/unknown/C0/C03903.asm:142 JSL UPDATE_PARTY
    case 0xC039DF: cpu.execute_instruction<0x22>(0xC034D6, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03903.asm:144 END_C_FUNCTION
    case 0xC039E3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C03903.asm:144 END_C_FUNCTION
    case 0xC039E4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C039E5.asm (unresolved).
bool execute_unresolved_c0_c039e5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C039E5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC039E5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C039E5.asm:7 END_STACK_VARS
    case 0xC039E7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C039E5.asm:7 END_STACK_VARS
    case 0xC039E8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C039E5.asm:7 END_STACK_VARS
    case 0xC039E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C039E5.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC039E9.
    case 0xC039EB: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C039E5.asm:7 END_STACK_VARS
    case 0xC039EC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:8 LDY #0
    case 0xC039ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C039E5.asm:8 LDY #0
    // Overlapping static entry reached from 0xC039ED.
    case 0xC039EF: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C039E5.asm:9 STY @LOCAL01
    case 0xC039F0: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C039E5.asm:10 BRA @UNKNOWN2
    case 0xC039F2: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C039E5.asm:19 LDA GAME_STATE+game_state::unknown96,Y
    case 0xC039F4: cpu.execute_instruction<0xB9>(0x00988B, 3); return true;
    // src/unknown/C0/C039E5.asm:21 AND #$00FF
    case 0xC039F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C039E5.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC039F7.
    case 0xC039F9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C039E5.asm:22 BEQ @UNKNOWN1
    case 0xC039FA: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C0/C039E5.asm:23 TYA
    case 0xC039FC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:24 ASL
    case 0xC039FD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:31 TAX
    case 0xC039FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:32 LDA GAME_STATE+game_state::unknownA2,X
    case 0xC039FF: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C0/C039E5.asm:34 STA @LOCAL00
    case 0xC03A02: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C039E5.asm:35 ASL
    case 0xC03A04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:36 TAX
    case 0xC03A05: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:37 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03A06: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C039E5.asm:38 STA ENTITY_ABS_X_TABLE,X
    case 0xC03A09: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C039E5.asm:39 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC03A0C: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C039E5.asm:40 STA ENTITY_ABS_Y_TABLE,X
    case 0xC03A0F: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C039E5.asm:41 LDA @LOCAL00
    case 0xC03A12: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C039E5.asm:42 JSL UNKNOWN_C0A254
    case 0xC03A14: cpu.execute_instruction<0x22>(0xC0A254, 4); return true;
    // src/unknown/C0/C039E5.asm:44 LDY @LOCAL01
    case 0xC03A18: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C039E5.asm:45 INY
    case 0xC03A1A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:46 STY @LOCAL01
    case 0xC03A1B: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C039E5.asm:48 CPY #6
    case 0xC03A1D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C0/C039E5.asm:48 CPY #6
    // Overlapping static entry reached from 0xC03A1D.
    case 0xC03A1F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C039E5.asm:49 BCC @UNKNOWN0
    case 0xC03A20: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C039E5.asm:50 END_C_FUNCTION
    case 0xC03A22: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C039E5.asm:50 END_C_FUNCTION
    case 0xC03A23: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03A24.asm (unresolved).
bool execute_unresolved_c0_c03a24_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03A24.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03A24: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03A24.asm:6 END_STACK_VARS
    case 0xC03A26: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03A24.asm:6 END_STACK_VARS
    case 0xC03A27: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03A24.asm:6 END_STACK_VARS
    case 0xC03A28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03A24.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC03A28.
    case 0xC03A2A: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03A24.asm:6 END_STACK_VARS
    case 0xC03A2B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC03A2C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C03A24.asm:8 LDA #0
    case 0xC03A2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/unknown/C0/C03A24.asm:9 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC03A30: cpu.execute_instruction<0x8D>(0x0098A4, 3); return true;
    // src/unknown/C0/C03A24.asm:9 STA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC03A2E.
    case 0xC03A31: cpu.execute_instruction<0xA4>(0x000098, 2); return true;
    // src/unknown/C0/C03A24.asm:10 STA GAME_STATE+game_state::party_count
    case 0xC03A33: cpu.execute_instruction<0x8D>(0x0098A3, 3); return true;
    // src/unknown/C0/C03A24.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC03A36: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C03A24.asm:12 LDA #0
    case 0xC03A38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C03A24.asm:12 LDA #0
    // Overlapping static entry reached from 0xC03A38.
    case 0xC03A3A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C03A24.asm:13 STA @LOCAL00
    case 0xC03A3B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03A24.asm:14 BRA @UNKNOWN1
    case 0xC03A3D: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C03A24.asm:16 CLC
    case 0xC03A3F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:17 ADC #.LOWORD(GAME_STATE)
    case 0xC03A40: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F5, 2); else cpu.execute_instruction<0x69>(0x0097F5, 3); return true;
    // src/unknown/C0/C03A24.asm:17 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03A40.
    case 0xC03A42: cpu.execute_instruction<0x97>(0x0000AA, 2); return true;
    // src/unknown/C0/C03A24.asm:18 TAX
    case 0xC03A43: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC03A44: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C03A24.asm:20 STZ __BSS_START__+game_state::unknown96,X
    case 0xC03A46: cpu.execute_instruction<0x9E>(0x000096, 3); return true;
    // src/unknown/C0/C03A24.asm:21 STZ __BSS_START__+game_state::player_controlled_party_members,X
    case 0xC03A49: cpu.execute_instruction<0x9E>(0x00009C, 3); return true;
    // src/unknown/C0/C03A24.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC03A4C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C03A24.asm:23 LDA @LOCAL00
    case 0xC03A4E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03A24.asm:24 ASL
    case 0xC03A50: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:31 TAX
    case 0xC03A51: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:32 STZ GAME_STATE + game_state::unknownA2,X
    case 0xC03A52: cpu.execute_instruction<0x9E>(0x009897, 3); return true;
    // src/unknown/C0/C03A24.asm:34 LDA @LOCAL00
    case 0xC03A55: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03A24.asm:35 INC
    case 0xC03A57: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:36 STA @LOCAL00
    case 0xC03A58: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03A24.asm:38 CMP #TOTAL_PARTY_COUNT
    case 0xC03A5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C03A24.asm:38 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC03A5A.
    case 0xC03A5C: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C03A24.asm:39 BCC @UNKNOWN0
    case 0xC03A5D: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C0/C03A24.asm:40 LDA #1
    case 0xC03A5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C03A24.asm:40 LDA #1
    // Overlapping static entry reached from 0xC03A5F.
    case 0xC03A61: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C03A24.asm:41 STA UNREAD_7E5D7E
    case 0xC03A62: cpu.execute_instruction<0x8D>(0x005D7E, 3); return true;
    // src/unknown/C0/C03A24.asm:42 LDX #0
    case 0xC03A65: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C03A24.asm:42 LDX #0
    // Overlapping static entry reached from 0xC03A65.
    case 0xC03A67: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C03A24.asm:43 STX @LOCAL00
    case 0xC03A68: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C03A24.asm:44 BRA @UNKNOWN3
    case 0xC03A6A: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C03A24.asm:53 LDA GAME_STATE + game_state::party_members,X
    case 0xC03A6C: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/unknown/C0/C03A24.asm:55 AND #$00FF
    case 0xC03A6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03A24.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC03A6F.
    case 0xC03A71: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C03A24.asm:56 BEQ @UNKNOWN4
    case 0xC03A72: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C03A24.asm:57 AND #$00FF
    case 0xC03A74: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03A24.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC03A74.
    case 0xC03A76: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03A24.asm:58 JSL UNKNOWN_C0369B
    case 0xC03A77: cpu.execute_instruction<0x22>(0xC0369B, 4); return true;
    // src/unknown/C0/C03A24.asm:59 LDX @LOCAL00
    case 0xC03A7B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C03A24.asm:60 INX
    case 0xC03A7D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:61 STX @LOCAL00
    case 0xC03A7E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C03A24.asm:63 CPX #TOTAL_PARTY_COUNT
    case 0xC03A80: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/unknown/C0/C03A24.asm:63 CPX #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC03A80.
    case 0xC03A82: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C03A24.asm:64 BCC @UNKNOWN2
    case 0xC03A83: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C0/C03A24.asm:66 STZ UNREAD_7E5D7E
    case 0xC03A85: cpu.execute_instruction<0x9C>(0x005D7E, 3); return true;
    // src/unknown/C0/C03A24.asm:67 LDA GAME_STATE + game_state::unknown92
    case 0xC03A88: cpu.execute_instruction<0xAD>(0x009887, 3); return true;
    // src/unknown/C0/C03A24.asm:68 ASL
    case 0xC03A8B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:69 STA FOOTSTEP_SOUND_ID
    case 0xC03A8C: cpu.execute_instruction<0x8D>(0x00289A, 3); return true;
    // src/unknown/C0/C03A24.asm:70 STZ FOOTSTEP_SOUND_ID_OVERRIDE
    case 0xC03A8F: cpu.execute_instruction<0x9C>(0x00289C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03A24.asm:71 END_C_FUNCTION
    case 0xC03A92: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C03A24.asm:71 END_C_FUNCTION
    case 0xC03A93: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03A94.asm (unresolved).
bool execute_unresolved_c0_c03a94_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03A94.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03A94: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03A94.asm:18 END_STACK_VARS
    case 0xC03A96: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C03A94.asm:18 END_STACK_VARS
    case 0xC03A97: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03A94.asm:18 END_STACK_VARS
    case 0xC03A98: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03A94.asm:18 END_STACK_VARS
    case 0xC03A99: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03A94.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC03A99.
    case 0xC03A9B: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03A94.asm:18 END_STACK_VARS
    case 0xC03A9C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C03A94.asm:18 END_STACK_VARS
    case 0xC03A9D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:26 STA @LOCAL09
    case 0xC03A9E: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C03A94.asm:26 STA @LOCAL09
    // Overlapping static entry reached from 0xC03A9B.
    case 0xC03A9F: cpu.execute_instruction<0x1E>(0x008AAD, 3); return true;
    // src/unknown/C0/C03A94.asm:27 LDA CURRENT_TELEPORT_DESTINATION_X
    case 0xC03AA0: cpu.execute_instruction<0xAD>(0x00438A, 3); return true;
    // src/unknown/C0/C03A94.asm:27 LDA CURRENT_TELEPORT_DESTINATION_X
    // Overlapping static entry reached from 0xC03A9F.
    case 0xC03AA2: cpu.execute_instruction<0x43>(0x00000D, 2); return true;
    // src/unknown/C0/C03A94.asm:28 ORA CURRENT_TELEPORT_DESTINATION_Y
    case 0xC03AA3: cpu.execute_instruction<0x0D>(0x00438C, 3); return true;
    // src/unknown/C0/C03A94.asm:28 ORA CURRENT_TELEPORT_DESTINATION_Y
    // Overlapping static entry reached from 0xC03AA2.
    case 0xC03AA4: cpu.execute_instruction<0x8C>(0x00F043, 3); return true;
    // src/unknown/C0/C03A94.asm:29 BEQ @UNKNOWN0
    case 0xC03AA6: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C03A94.asm:29 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC03AA4.
    case 0xC03AA7: cpu.execute_instruction<0x11>(0x0000AD, 2); return true;
    // src/unknown/C0/C03A94.asm:30 LDA CURRENT_TELEPORT_DESTINATION_X
    case 0xC03AA8: cpu.execute_instruction<0xAD>(0x00438A, 3); return true;
    // src/unknown/C0/C03A94.asm:30 LDA CURRENT_TELEPORT_DESTINATION_X
    // Overlapping static entry reached from 0xC03AA7.
    case 0xC03AA9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:30 LDA CURRENT_TELEPORT_DESTINATION_X
    // Overlapping static entry reached from 0xC03AA9.
    case 0xC03AAA: cpu.execute_instruction<0x43>(0x00000A, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC03AAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC03AAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC03AAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:32 STA @LOCAL08
    case 0xC03AAE: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C03A94.asm:33 LDA CURRENT_TELEPORT_DESTINATION_Y
    case 0xC03AB0: cpu.execute_instruction<0xAD>(0x00438C, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:34 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC03AB3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:34 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC03AB4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:34 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC03AB5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:35 TAX
    case 0xC03AB6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:36 BRA @UNKNOWN1
    case 0xC03AB7: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C03A94.asm:38 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03AB9: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C03A94.asm:39 STA @LOCAL08
    case 0xC03ABC: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C03A94.asm:40 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC03ABE: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C03A94.asm:42 LDA @LOCAL08
    case 0xC03AC1: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C03A94.asm:43 JSL LOAD_SECTOR_ATTRS
    case 0xC03AC3: cpu.execute_instruction<0x22>(0xC00AA1, 4); return true;
    // src/unknown/C0/C03A94.asm:44 AND #$0007
    case 0xC03AC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C03A94.asm:44 AND #$0007
    // Overlapping static entry reached from 0xC03AC7.
    case 0xC03AC9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C03A94.asm:45 STA @LOCAL07
    case 0xC03ACA: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C03A94.asm:46 STA GAME_STATE+game_state::unknown92
    case 0xC03ACC: cpu.execute_instruction<0x8D>(0x009887, 3); return true;
    // src/unknown/C0/C03A94.asm:47 ASL
    case 0xC03ACF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:48 STA FOOTSTEP_SOUND_ID
    case 0xC03AD0: cpu.execute_instruction<0x8D>(0x00289A, 3); return true;
    // src/unknown/C0/C03A94.asm:49 STZ FOOTSTEP_SOUND_ID_OVERRIDE
    case 0xC03AD3: cpu.execute_instruction<0x9C>(0x00289C, 3); return true;
    // src/unknown/C0/C03A94.asm:50 LDA @LOCAL07
    case 0xC03AD6: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C03A94.asm:51 CMP #3
    case 0xC03AD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C03A94.asm:51 CMP #3
    // Overlapping static entry reached from 0xC03AD8.
    case 0xC03ADA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C03A94.asm:52 BEQ @UNKNOWN2
    case 0xC03ADB: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C03A94.asm:53 STZ GAME_STATE+game_state::walking_style
    case 0xC03ADD: cpu.execute_instruction<0x9C>(0x009883, 3); return true;
    // src/unknown/C0/C03A94.asm:54 BRA @UNKNOWN3
    case 0xC03AE0: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C03A94.asm:56 LDA #WALKING_STYLE::SLOWEST
    case 0xC03AE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C0/C03A94.asm:56 LDA #WALKING_STYLE::SLOWEST
    // Overlapping static entry reached from 0xC03AE2.
    case 0xC03AE4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C03A94.asm:57 STA GAME_STATE+game_state::walking_style
    case 0xC03AE5: cpu.execute_instruction<0x8D>(0x009883, 3); return true;
    // src/unknown/C0/C03A94.asm:59 LDA CURRENT_ENTITY_SLOT
    case 0xC03AE8: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C03A94.asm:60 STA @LOCAL06
    case 0xC03AEB: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C03A94.asm:61 LDA #.LOWORD(-1)
    case 0xC03AED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03A94.asm:61 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC03AED.
    case 0xC03AEF: cpu.execute_instruction<0xFF>(0x1A428D, 4); return true;
    // src/unknown/C0/C03A94.asm:62 STA CURRENT_ENTITY_SLOT
    case 0xC03AF0: cpu.execute_instruction<0x8D>(0x001A42, 3); return true;
    // src/unknown/C0/C03A94.asm:63 STZ @LOCAL05
    case 0xC03AF3: cpu.execute_instruction<0x64>(0x000016, 2); return true;
    // src/unknown/C0/C03A94.asm:64 JMP @UNKNOWN9
    case 0xC03AF5: cpu.execute_instruction<0x4C>(0x003BD7, 3); return true;
    // src/unknown/C0/C03A94.asm:73 LDY #.LOWORD(GAME_STATE) + game_state::unknown96
    case 0xC03AF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00008B, 2); else cpu.execute_instruction<0xA0>(0x00988B, 3); return true;
    // src/unknown/C0/C03A94.asm:73 LDY #.LOWORD(GAME_STATE) + game_state::unknown96
    // Overlapping static entry reached from 0xC03AF8.
    case 0xC03AFA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:74 LDA (@LOCAL05),Y
    case 0xC03AFB: cpu.execute_instruction<0xB1>(0x000016, 2); return true;
    // src/unknown/C0/C03A94.asm:76 AND #$00FF
    case 0xC03AFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03A94.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC03AFD.
    case 0xC03AFF: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C03A94.asm:77 TAX
    case 0xC03B00: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C03A94.asm:78 BEQL @UNKNOWN8
    case 0xC03B01: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C03A94.asm:78 BEQL @UNKNOWN8
    case 0xC03B03: cpu.execute_instruction<0x4C>(0x003BD5, 3); return true;
    // src/unknown/C0/C03A94.asm:79 TXA
    case 0xC03B06: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:80 DEC
    case 0xC03B07: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:81 STA @VIRTUAL04
    case 0xC03B08: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C03A94.asm:82 LDA @LOCAL05
    case 0xC03B0A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C03A94.asm:83 ASL
    case 0xC03B0C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:91 TAY
    case 0xC03B0D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:92 LDA GAME_STATE + game_state::unknownA2,Y
    case 0xC03B0E: cpu.execute_instruction<0xB9>(0x009897, 3); return true;
    // src/unknown/C0/C03A94.asm:94 STA @VIRTUAL02
    case 0xC03B11: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03A94.asm:95 ASL
    case 0xC03B13: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:96 TAX
    case 0xC03B14: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:97 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC03B15: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C0/C03A94.asm:98 STA NEW_ENTITY_VAR0
    case 0xC03B18: cpu.execute_instruction<0x8D>(0x000A38, 3); return true;
    // src/unknown/C0/C03A94.asm:99 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC03B1B: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/C0/C03A94.asm:100 STA NEW_ENTITY_VAR1
    case 0xC03B1E: cpu.execute_instruction<0x8D>(0x000A3A, 3); return true;
    // src/unknown/C0/C03A94.asm:105 STY NEW_ENTITY_VAR5
    case 0xC03B21: cpu.execute_instruction<0x8C>(0x000A42, 3); return true;
    // src/unknown/C0/C03A94.asm:107 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC03B24: cpu.execute_instruction<0xBD>(0x00116A, 3); return true;
    // src/unknown/C0/C03A94.asm:108 STA @LOCAL03
    case 0xC03B27: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C03A94.asm:109 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC03B29: cpu.execute_instruction<0xBD>(0x0010B6, 3); return true;
    // src/unknown/C0/C03A94.asm:110 STA @LOCAL07ALT
    case 0xC03B2C: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C03A94.asm:111 LDA @VIRTUAL02
    case 0xC03B2E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03A94.asm:112 JSL UNKNOWN_C02140
    case 0xC03B30: cpu.execute_instruction<0x22>(0xC02140, 4); return true;
    // src/unknown/C0/C03A94.asm:113 LDA @VIRTUAL02
    case 0xC03B34: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03A94.asm:114 STA MOVING_PARTY_MEMBER_ENTITY_ID
    case 0xC03B36: cpu.execute_instruction<0x8D>(0x009F73, 3); return true;
    // src/unknown/C0/C03A94.asm:115 LDA GAME_STATE+game_state::unknown92
    case 0xC03B39: cpu.execute_instruction<0xAD>(0x009887, 3); return true;
    // src/unknown/C0/C03A94.asm:116 CMP #3
    case 0xC03B3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C03A94.asm:116 CMP #3
    // Overlapping static entry reached from 0xC03B3C.
    case 0xC03B3E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C03A94.asm:117 BEQ @UNKNOWN6
    case 0xC03B3F: cpu.execute_instruction<0xF0>(0x00003E, 2); return true;
    // src/unknown/C0/C03A94.asm:118 LDA @LOCAL05
    case 0xC03B41: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C03A94.asm:119 LDY #.SIZEOF(char_struct)
    case 0xC03B43: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C03A94.asm:119 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03B43.
    case 0xC03B45: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03A94.asm:120 JSL MULT168
    case 0xC03B46: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C03A94.asm:121 CLC
    case 0xC03B4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:122 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC03B4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C0/C03A94.asm:122 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC03B4B.
    case 0xC03B4D: cpu.execute_instruction<0x99>(0x00A2A8, 3); return true;
    // src/unknown/C0/C03A94.asm:123 TAY
    case 0xC03B4E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:124 LDX #0
    case 0xC03B4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C03A94.asm:124 LDX #0
    // Overlapping static entry reached from 0xC03B4D.
    case 0xC03B50: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C03A94.asm:124 LDX #0
    // Overlapping static entry reached from 0xC03B4F.
    case 0xC03B51: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C03A94.asm:125 LDA @VIRTUAL04
    case 0xC03B52: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C03A94.asm:126 JSL UNKNOWN_C0780F
    case 0xC03B54: cpu.execute_instruction<0x22>(0xC0780F, 4); return true;
    // src/unknown/C0/C03A94.asm:127 STA @LOCAL08ALT
    case 0xC03B58: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C03A94.asm:128 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03B5A: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C03A94.asm:129 STA @LOCAL00
    case 0xC03B5D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03A94.asm:130 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC03B5F: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C03A94.asm:131 STA @LOCAL01
    case 0xC03B62: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C03A94.asm:132 LDY @VIRTUAL02
    case 0xC03B64: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C0/C03A94.asm:133 LDA @VIRTUAL04
    case 0xC03B66: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:134 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03B68: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:134 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03B69: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:134 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03B6A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:135 TAX
    case 0xC03B6B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:136 INX
    case 0xC03B6C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:137 INX
    case 0xC03B6D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:138 INX
    case 0xC03B6E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:139 INX
    case 0xC03B6F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:140 LDA f:CHARACTER_INITIAL_ENTITY_DATA,X ;character_initial_entity_entry::actionscript_id
    case 0xC03B70: cpu.execute_instruction<0xBF>(0xC3E012, 4); return true;
    // src/unknown/C0/C03A94.asm:141 TAX
    case 0xC03B74: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:142 LDA @LOCAL08ALT
    case 0xC03B75: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C03A94.asm:143 JSL CREATE_ENTITY
    case 0xC03B77: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/C0/C03A94.asm:144 STA @LOCAL02
    case 0xC03B7B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C03A94.asm:145 BRA @UNKNOWN7
    case 0xC03B7D: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/unknown/C0/C03A94.asm:147 LDA @LOCAL05
    case 0xC03B7F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C03A94.asm:148 LDY #.SIZEOF(char_struct)
    case 0xC03B81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C03A94.asm:148 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03B81.
    case 0xC03B83: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03A94.asm:149 JSL MULT168
    case 0xC03B84: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C03A94.asm:150 CLC
    case 0xC03B88: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:151 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC03B89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C0/C03A94.asm:151 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC03B89.
    case 0xC03B8B: cpu.execute_instruction<0x99>(0x00A2A8, 3); return true;
    // src/unknown/C0/C03A94.asm:152 TAY
    case 0xC03B8C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:153 LDX #10
    case 0xC03B8D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/C0/C03A94.asm:153 LDX #10
    // Overlapping static entry reached from 0xC03B8B.
    case 0xC03B8E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:153 LDX #10
    // Overlapping static entry reached from 0xC03B8D.
    case 0xC03B8F: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C03A94.asm:154 LDA @VIRTUAL04
    case 0xC03B90: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C03A94.asm:155 JSL UNKNOWN_C0780F
    case 0xC03B92: cpu.execute_instruction<0x22>(0xC0780F, 4); return true;
    // src/unknown/C0/C03A94.asm:156 STA @LOCAL08ALT
    case 0xC03B96: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C03A94.asm:157 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03B98: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C03A94.asm:158 STA @LOCAL00
    case 0xC03B9B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03A94.asm:159 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC03B9D: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C03A94.asm:160 STA @LOCAL01
    case 0xC03BA0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C03A94.asm:161 LDY @VIRTUAL02
    case 0xC03BA2: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C0/C03A94.asm:162 LDA @VIRTUAL04
    case 0xC03BA4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:163 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03BA6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:163 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03BA7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:163 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03BA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:164 TAX
    case 0xC03BA9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:165 INX
    case 0xC03BAA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:166 INX
    case 0xC03BAB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:167 INX
    case 0xC03BAC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:168 INX
    case 0xC03BAD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:169 LDA f:CHARACTER_INITIAL_ENTITY_DATA,X ;character_initial_entity_entry::actionscript_id
    case 0xC03BAE: cpu.execute_instruction<0xBF>(0xC3E012, 4); return true;
    // src/unknown/C0/C03A94.asm:170 TAX
    case 0xC03BB2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:171 LDA @LOCAL08ALT
    case 0xC03BB3: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C03A94.asm:172 JSL CREATE_ENTITY
    case 0xC03BB5: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/C0/C03A94.asm:173 STA @LOCAL02
    case 0xC03BB9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C03A94.asm:175 ASL
    case 0xC03BBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:176 TAX
    case 0xC03BBC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:177 LDA @LOCAL03
    case 0xC03BBD: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C03A94.asm:178 STA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC03BBF: cpu.execute_instruction<0x9D>(0x00116A, 3); return true;
    // src/unknown/C0/C03A94.asm:179 LDA @LOCAL07ALT
    case 0xC03BC2: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C03A94.asm:180 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC03BC4: cpu.execute_instruction<0x9D>(0x0010B6, 3); return true;
    // src/unknown/C0/C03A94.asm:181 LDA @LOCAL09
    case 0xC03BC7: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C03A94.asm:182 STA ENTITY_DIRECTIONS,X
    case 0xC03BC9: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C03A94.asm:183 STZ ENTITY_ANIMATION_FRAME,X
    case 0xC03BCC: cpu.execute_instruction<0x9E>(0x0010F2, 3); return true;
    // src/unknown/C0/C03A94.asm:184 LDA @LOCAL02
    case 0xC03BCF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C03A94.asm:185 JSL UNKNOWN_C0A780
    case 0xC03BD1: cpu.execute_instruction<0x22>(0xC0A780, 4); return true;
    // src/unknown/C0/C03A94.asm:187 INC @LOCAL05
    case 0xC03BD5: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/unknown/C0/C03A94.asm:189 LDA @LOCAL05
    case 0xC03BD7: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C03A94.asm:190 CMP #6
    case 0xC03BD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C03A94.asm:190 CMP #6
    // Overlapping static entry reached from 0xC03BD9.
    case 0xC03BDB: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C03A94.asm:191 BCCL @UNKNOWN4
    case 0xC03BDC: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C03A94.asm:191 BCCL @UNKNOWN4
    case 0xC03BDE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C03A94.asm:191 BCCL @UNKNOWN4
    case 0xC03BE0: cpu.execute_instruction<0x4C>(0x003AF8, 3); return true;
    // src/unknown/C0/C03A94.asm:192 LDA @LOCAL06
    case 0xC03BE3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C03A94.asm:193 STA CURRENT_ENTITY_SLOT
    case 0xC03BE5: cpu.execute_instruction<0x8D>(0x001A42, 3); return true;
    // src/unknown/C0/C03A94.asm:194 JSL UNKNOWN_C039E5
    case 0xC03BE8: cpu.execute_instruction<0x22>(0xC039E5, 4); return true;
    // src/unknown/C0/C03A94.asm:195 LDA #.LOWORD(-1)
    case 0xC03BEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03A94.asm:195 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC03BEC.
    case 0xC03BEE: cpu.execute_instruction<0xFF>(0x5DA88D, 4); return true;
    // src/unknown/C0/C03A94.asm:196 STA LADDER_STAIRS_TILE_X
    case 0xC03BEF: cpu.execute_instruction<0x8D>(0x005DA8, 3); return true;
    // src/unknown/C0/C03A94.asm:197 LDA PENDING_INTERACTIONS
    case 0xC03BF2: cpu.execute_instruction<0xAD>(0x005D9A, 3); return true;
    // src/unknown/C0/C03A94.asm:198 STA @VIRTUAL02
    case 0xC03BF5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03A94.asm:199 STZ PENDING_INTERACTIONS
    case 0xC03BF7: cpu.execute_instruction<0x9C>(0x005D9A, 3); return true;
    // src/unknown/C0/C03A94.asm:200 LDA #4
    case 0xC03BFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C03A94.asm:200 LDA #4
    // Overlapping static entry reached from 0xC03BFA.
    case 0xC03BFC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C03A94.asm:201 STA @LOCAL00
    case 0xC03BFD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03A94.asm:202 LDY GAME_STATE+game_state::current_party_members
    case 0xC03BFF: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C03A94.asm:203 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC03C02: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C03A94.asm:204 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03C05: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C03A94.asm:205 JSL UNKNOWN_C05B7B
    case 0xC03C08: cpu.execute_instruction<0x22>(0xC05B7B, 4); return true;
    // src/unknown/C0/C03A94.asm:206 LDA @VIRTUAL02
    case 0xC03C0C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03A94.asm:207 STA PENDING_INTERACTIONS
    case 0xC03C0E: cpu.execute_instruction<0x8D>(0x005D9A, 3); return true;
    // src/unknown/C0/C03A94.asm:208 LDA LADDER_STAIRS_TILE_X
    case 0xC03C11: cpu.execute_instruction<0xAD>(0x005DA8, 3); return true;
    // src/unknown/C0/C03A94.asm:209 CMP #.LOWORD(-1)
    case 0xC03C14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03A94.asm:209 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC03C14.
    case 0xC03C16: cpu.execute_instruction<0xFF>(0xAE0AF0, 4); return true;
    // src/unknown/C0/C03A94.asm:210 BEQ @UNKNOWN11
    case 0xC03C17: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C03A94.asm:211 LDX LADDER_STAIRS_TILE_Y
    case 0xC03C19: cpu.execute_instruction<0xAE>(0x005DAA, 3); return true;
    // src/unknown/C0/C03A94.asm:211 LDX LADDER_STAIRS_TILE_Y
    // Overlapping static entry reached from 0xC03C16.
    case 0xC03C1A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:211 LDX LADDER_STAIRS_TILE_Y
    // Overlapping static entry reached from 0xC03C1A.
    case 0xC03C1B: cpu.execute_instruction<0x5D>(0x00A8AD, 3); return true;
    // src/unknown/C0/C03A94.asm:212 LDA LADDER_STAIRS_TILE_X
    case 0xC03C1C: cpu.execute_instruction<0xAD>(0x005DA8, 3); return true;
    // src/unknown/C0/C03A94.asm:212 LDA LADDER_STAIRS_TILE_X
    // Overlapping static entry reached from 0xC03C1B.
    case 0xC03C1E: cpu.execute_instruction<0x5D>(0x002622, 3); return true;
    // src/unknown/C0/C03A94.asm:213 JSL UNKNOWN_C07526
    case 0xC03C1F: cpu.execute_instruction<0x22>(0xC07526, 4); return true;
    // src/unknown/C0/C03A94.asm:213 JSL UNKNOWN_C07526
    // Overlapping static entry reached from 0xC03C1E.
    case 0xC03C21: cpu.execute_instruction<0x75>(0x0000C0, 2); return true;
    // src/unknown/C0/C03A94.asm:215 PLD
    case 0xC03C23: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:216 RTL
    case 0xC03C24: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03C25.asm (unresolved).
bool execute_unresolved_c0_c03c25_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C03C25.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC03C25: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C03C25.asm:4 LDA #$0001
    case 0xC03C27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C03C25.asm:4 LDA #$0001
    // Overlapping static entry reached from 0xC03C27.
    case 0xC03C29: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C03C25.asm:5 STA DO_MAP_MUSIC_FADE
    case 0xC03C2A: cpu.execute_instruction<0x8D>(0x005DDA, 3); return true;
    // src/unknown/C0/C03C25.asm:6 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC03C2D: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C03C25.asm:7 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03C30: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C03C25.asm:8 JSL UNKNOWN_C068F4
    case 0xC03C33: cpu.execute_instruction<0x22>(0xC068F4, 4); return true;
    // src/unknown/C0/C03C25.asm:9 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC03C37: cpu.execute_instruction<0xAD>(0x005DD6, 3); return true;
    // src/unknown/C0/C03C25.asm:10 CMP CURRENT_MAP_MUSIC_TRACK
    case 0xC03C3A: cpu.execute_instruction<0xCD>(0x005DD4, 3); return true;
    // src/unknown/C0/C03C25.asm:11 BEQ @UNKNOWN0
    case 0xC03C3D: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C03C25.asm:12 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC03C3F: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C03C25.asm:13 JSL UNKNOWN_C069AF
    case 0xC03C43: cpu.execute_instruction<0x22>(0xC069AF, 4); return true;
    // src/unknown/C0/C03C25.asm:15 STZ DO_MAP_MUSIC_FADE
    case 0xC03C47: cpu.execute_instruction<0x9C>(0x005DDA, 3); return true;
    // src/unknown/C0/C03C25.asm:16 RTS
    case 0xC03C4A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03C4B.asm (unresolved).
bool execute_unresolved_c0_c03c4b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C03C4B.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC03C4B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C03C4B.asm:4 LDY #$000C
    case 0xC03C4D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C0/C03C4B.asm:4 LDY #$000C
    // Overlapping static entry reached from 0xC03C4D.
    case 0xC03C4F: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/C0/C03C4B.asm:5 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC03C50: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C03C4B.asm:6 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03C53: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C03C4B.asm:7 JSL UNKNOWN_C05D8B
    case 0xC03C56: cpu.execute_instruction<0x22>(0xC05D8B, 4); return true;
    // src/unknown/C0/C03C4B.asm:8 AND #$00C0
    case 0xC03C5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C03C4B.asm:8 AND #$00C0
    // Overlapping static entry reached from 0xC03C5A.
    case 0xC03C5C: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C03C4B.asm:9 RTL
    case 0xC03C5D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03CFD.asm (unresolved).
bool execute_unresolved_c0_c03cfd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03CFD.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03CFD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03CFD.asm:7 END_STACK_VARS
    case 0xC03CFF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03CFD.asm:7 END_STACK_VARS
    case 0xC03D00: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03CFD.asm:7 END_STACK_VARS
    case 0xC03D01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03CFD.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC03D01.
    case 0xC03D03: cpu.execute_instruction<0xFF>(0x83AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03CFD.asm:7 END_STACK_VARS
    case 0xC03D04: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C03CFD.asm:8 LDA GAME_STATE+game_state::walking_style
    case 0xC03D05: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/unknown/C0/C03CFD.asm:8 LDA GAME_STATE+game_state::walking_style
    // Overlapping static entry reached from 0xC03D03.
    case 0xC03D07: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03CFD.asm:9 CMP #WALKING_STYLE::BICYCLE
    case 0xC03D08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C03CFD.asm:9 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC03D08.
    case 0xC03D0A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C03CFD.asm:10 BNEL @RETURN
    case 0xC03D0B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C03CFD.asm:10 BNEL @RETURN
    case 0xC03D0D: cpu.execute_instruction<0x4C>(0x003DA8, 3); return true;
    // src/unknown/C0/C03CFD.asm:11 LDA #1
    case 0xC03D10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C03CFD.asm:11 LDA #1
    // Overlapping static entry reached from 0xC03D10.
    case 0xC03D12: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03CFD.asm:12 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC03D13: cpu.execute_instruction<0x22>(0xC4FD45, 4); return true;
    // src/unknown/C0/C03CFD.asm:13 LDA BATTLE_MODE
    case 0xC03D17: cpu.execute_instruction<0xAD>(0x004DC2, 3); return true;
    // src/unknown/C0/C03CFD.asm:14 BNE @UNKNOWN1
    case 0xC03D1A: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C0/C03CFD.asm:15 LDA PENDING_INTERACTIONS
    case 0xC03D1C: cpu.execute_instruction<0xAD>(0x005D9A, 3); return true;
    // src/unknown/C0/C03CFD.asm:16 BNE @UNKNOWN1
    case 0xC03D1F: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C0/C03CFD.asm:17 JSL UNKNOWN_C06A07
    case 0xC03D21: cpu.execute_instruction<0x22>(0xC06A07, 4); return true;
    // src/unknown/C0/C03CFD.asm:19 LDA #24
    case 0xC03D25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C03CFD.asm:19 LDA #24
    // Overlapping static entry reached from 0xC03D25.
    case 0xC03D27: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03CFD.asm:20 JSL UNKNOWN_C02140
    case 0xC03D28: cpu.execute_instruction<0x22>(0xC02140, 4); return true;
    // src/unknown/C0/C03CFD.asm:21 STZ GAME_STATE + game_state::unknown92
    case 0xC03D2C: cpu.execute_instruction<0x9C>(0x009887, 3); return true;
    // src/unknown/C0/C03CFD.asm:22 STZ GAME_STATE+game_state::walking_style
    case 0xC03D2F: cpu.execute_instruction<0x9C>(0x009883, 3); return true;
    // src/unknown/C0/C03CFD.asm:23 STZ PARTY_CHARACTERS+char_struct::position_index
    case 0xC03D32: cpu.execute_instruction<0x9C>(0x009A0B, 3); return true;
    // src/unknown/C0/C03CFD.asm:23 STZ PARTY_CHARACTERS+char_struct::position_index
    // Overlapping static entry reached from 0xC03D75.
    case 0xC03D34: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03CFD.asm:24 STZ GAME_STATE + game_state::unknown88
    case 0xC03D35: cpu.execute_instruction<0x9C>(0x00987D, 3); return true;
    // src/unknown/C0/C03CFD.asm:25 LDA PENDING_INTERACTIONS
    case 0xC03D38: cpu.execute_instruction<0xAD>(0x005D9A, 3); return true;
    // src/unknown/C0/C03CFD.asm:26 BNE @UNKNOWN2
    case 0xC03D3B: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C0/C03CFD.asm:27 JSL OAM_CLEAR
    case 0xC03D3D: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/C0/C03CFD.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC03D41: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/unknown/C0/C03CFD.asm:29 JSL UPDATE_SCREEN
    case 0xC03D45: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/unknown/C0/C03CFD.asm:30 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC03D49: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C03CFD.asm:32 STZ NEW_ENTITY_VAR0
    case 0xC03D4D: cpu.execute_instruction<0x9C>(0x000A38, 3); return true;
    // src/unknown/C0/C03CFD.asm:33 STZ NEW_ENTITY_VAR1
    case 0xC03D50: cpu.execute_instruction<0x9C>(0x000A3A, 3); return true;
    // src/unknown/C0/C03CFD.asm:34 LDA ENTITY_ABS_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03D53: cpu.execute_instruction<0xAD>(0x000BBE, 3); return true;
    // src/unknown/C0/C03CFD.asm:35 STA @LOCAL00
    case 0xC03D56: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03CFD.asm:36 LDA ENTITY_ABS_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03D58: cpu.execute_instruction<0xAD>(0x000BFA, 3); return true;
    // src/unknown/C0/C03CFD.asm:37 STA @LOCAL01
    case 0xC03D5B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C03CFD.asm:38 LDY #24
    case 0xC03D5D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x000018, 3); return true;
    // src/unknown/C0/C03CFD.asm:38 LDY #24
    // Overlapping static entry reached from 0xC03D5D.
    case 0xC03D5F: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C0/C03CFD.asm:39 LDX #EVENT_SCRIPT::EVENT_002
    case 0xC03D60: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C0/C03CFD.asm:39 LDX #EVENT_SCRIPT::EVENT_002
    // Overlapping static entry reached from 0xC03D60.
    case 0xC03D62: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C03CFD.asm:40 LDA #OVERWORLD_SPRITE::NESS
    case 0xC03D63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C03CFD.asm:40 LDA #OVERWORLD_SPRITE::NESS
    // Overlapping static entry reached from 0xC03D63.
    case 0xC03D65: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03CFD.asm:41 JSL CREATE_ENTITY
    case 0xC03D66: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/C0/C03CFD.asm:42 STZ ENTITY_ANIMATION_FRAME + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03D6A: cpu.execute_instruction<0x9C>(0x001122, 3); return true;
    // src/unknown/C0/C03CFD.asm:43 LDA GAME_STATE+game_state::leader_direction
    case 0xC03D6D: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C03CFD.asm:44 STA ENTITY_DIRECTIONS + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03D70: cpu.execute_instruction<0x8D>(0x002B26, 3); return true;
    // src/unknown/C0/C03CFD.asm:45 LDX #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE) + (24 * 2)
    case 0xC03D73: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000032, 2); else cpu.execute_instruction<0xA2>(0x001032, 3); return true;
    // src/unknown/C0/C03CFD.asm:45 LDX #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE) + (24 * 2)
    // Overlapping static entry reached from 0xC03D73.
    case 0xC03D75: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C0/C03CFD.asm:46 LDA __BSS_START__,X
    case 0xC03D76: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C03CFD.asm:46 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC03D75.
    case 0xC03D77: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C03CFD.asm:47 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12 | SPRITE_TABLE_10_FLAGS::UNKNOWN15
    case 0xC03D79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x009000, 3); return true;
    // src/unknown/C0/C03CFD.asm:47 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12 | SPRITE_TABLE_10_FLAGS::UNKNOWN15
    // Overlapping static entry reached from 0xC03D79.
    case 0xC03D7B: cpu.execute_instruction<0x90>(0x00009D, 2); return true;
    // src/unknown/C0/C03CFD.asm:48 STA __BSS_START__,X
    case 0xC03D7C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03CFD.asm:48 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC03D7B.
    case 0xC03D7D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C03CFD.asm:49 LDA PENDING_INTERACTIONS
    case 0xC03D7F: cpu.execute_instruction<0xAD>(0x005D9A, 3); return true;
    // src/unknown/C0/C03CFD.asm:50 BEQ @UNKNOWN3
    case 0xC03D82: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C0/C03CFD.asm:51 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + (24 * 2)
    case 0xC03D84: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E6, 2); else cpu.execute_instruction<0xA2>(0x0010E6, 3); return true;
    // src/unknown/C0/C03CFD.asm:51 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + (24 * 2)
    // Overlapping static entry reached from 0xC03D84.
    case 0xC03D86: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C0/C03CFD.asm:52 LDA __BSS_START__,X
    case 0xC03D87: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C03CFD.asm:52 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC03D86.
    case 0xC03D88: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C03CFD.asm:53 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC03D8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C03CFD.asm:53 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC03D8A.
    case 0xC03D8C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C0/C03CFD.asm:54 STA __BSS_START__,X
    case 0xC03D8D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03CFD.asm:54 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC03D8C.
    case 0xC03D8E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C03CFD.asm:54 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC03D8C.
    case 0xC03D8F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03CFD.asm:56 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC03D90: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C03CFD.asm:57 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC03D94: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C03CFD.asm:59 LDA #24
    case 0xC03D98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C03CFD.asm:59 LDA #24
    // Overlapping static entry reached from 0xC03D98.
    case 0xC03D9A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03CFD.asm:60 JSL UNKNOWN_C0A780
    case 0xC03D9B: cpu.execute_instruction<0x22>(0xC0A780, 4); return true;
    // src/unknown/C0/C03CFD.asm:62 STZ UNREAD_7E5DBA
    case 0xC03D9F: cpu.execute_instruction<0x9C>(0x005DBA, 3); return true;
    // src/unknown/C0/C03CFD.asm:63 LDA #2
    case 0xC03DA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C03CFD.asm:63 LDA #2
    // Overlapping static entry reached from 0xC03DA2.
    case 0xC03DA4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C03CFD.asm:64 STA INPUT_DISABLE_FRAME_COUNTER
    case 0xC03DA5: cpu.execute_instruction<0x8D>(0x005D74, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03CFD.asm:66 END_C_FUNCTION
    case 0xC03DA8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C03CFD.asm:66 END_C_FUNCTION
    case 0xC03DA9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03DAA.asm (unresolved).
bool execute_unresolved_c0_c03daa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03DAA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03DAA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03DAA.asm:6 END_STACK_VARS
    case 0xC03DAC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03DAA.asm:6 END_STACK_VARS
    case 0xC03DAD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03DAA.asm:6 END_STACK_VARS
    case 0xC03DAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03DAA.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC03DAE.
    case 0xC03DB0: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03DAA.asm:6 END_STACK_VARS
    case 0xC03DB1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC03DB2: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C03DAA.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC03DB0.
    case 0xC03DB4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:8 STA @VIRTUAL02
    case 0xC03DB5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03DAA.asm:9 ASL
    case 0xC03DB7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:10 TAY
    case 0xC03DB8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:11 STY @LOCAL00
    case 0xC03DB9: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C03DAA.asm:12 LDA #.LOWORD(-1)
    case 0xC03DBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03DAA.asm:12 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC03DBB.
    case 0xC03DBD: cpu.execute_instruction<0xFF>(0x345699, 4); return true;
    // src/unknown/C0/C03DAA.asm:13 STA ENTITY_ANIMATION_FINGERPRINTS,Y
    case 0xC03DBE: cpu.execute_instruction<0x99>(0x003456, 3); return true;
    // src/unknown/C0/C03DAA.asm:14 TYA
    case 0xC03DC1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:15 CLC
    case 0xC03DC2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:16 ADC #.LOWORD(ENTITY_SCRIPT_VAR3_TABLE)
    case 0xC03DC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000F12, 3); return true;
    // src/unknown/C0/C03DAA.asm:16 ADC #.LOWORD(ENTITY_SCRIPT_VAR3_TABLE)
    // Overlapping static entry reached from 0xC03DC3.
    case 0xC03DC5: cpu.execute_instruction<0x0F>(0xA90485, 4); return true;
    // src/unknown/C0/C03DAA.asm:17 STA @VIRTUAL04
    case 0xC03DC6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C03DAA.asm:18 LDA #8
    case 0xC03DC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C03DAA.asm:18 LDA #8
    // Overlapping static entry reached from 0xC03DC5.
    case 0xC03DC9: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:18 LDA #8
    // Overlapping static entry reached from 0xC03DC8.
    case 0xC03DCA: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C03DAA.asm:19 LDX @VIRTUAL04
    case 0xC03DCB: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C03DAA.asm:20 STA __BSS_START__,X
    case 0xC03DCD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03DAA.asm:21 JSL RAND
    case 0xC03DD0: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C0/C03DAA.asm:22 AND #$000F
    case 0xC03DD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C03DAA.asm:22 AND #$000F
    // Overlapping static entry reached from 0xC03DD4.
    case 0xC03DD6: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C0/C03DAA.asm:23 LDY @LOCAL00
    case 0xC03DD7: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C03DAA.asm:24 STA ENTITY_SCRIPT_VAR2_TABLE,Y
    case 0xC03DD9: cpu.execute_instruction<0x99>(0x000ED6, 3); return true;
    // src/unknown/C0/C03DAA.asm:25 LDA @VIRTUAL02
    case 0xC03DDC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03DAA.asm:26 JSL UNKNOWN_C0A780
    case 0xC03DDE: cpu.execute_instruction<0x22>(0xC0A780, 4); return true;
    // src/unknown/C0/C03DAA.asm:27 LDY @LOCAL00
    case 0xC03DE2: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C03DAA.asm:28 LDA ENTITY_SCRIPT_VAR1_TABLE,Y
    case 0xC03DE4: cpu.execute_instruction<0xB9>(0x000E9A, 3); return true;
    // src/unknown/C0/C03DAA.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC03DE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C03DAA.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03DE7.
    case 0xC03DE9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03DAA.asm:30 JSL MULT168
    case 0xC03DEA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C03DAA.asm:31 CLC
    case 0xC03DEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC03DEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C0/C03DAA.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC03DEF.
    case 0xC03DF1: cpu.execute_instruction<0x99>(0x00A5AA, 3); return true;
    // src/unknown/C0/C03DAA.asm:33 TAX
    case 0xC03DF2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:34 LDA @VIRTUAL02
    case 0xC03DF3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03DAA.asm:34 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC03DF1.
    case 0xC03DF4: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/unknown/C0/C03DAA.asm:35 STA a:char_struct::unknown59,X
    case 0xC03DF5: cpu.execute_instruction<0x9D>(0x00003B, 3); return true;
    // src/unknown/C0/C03DAA.asm:36 LDY @LOCAL00
    case 0xC03DF8: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C03DAA.asm:37 LDA ENTITY_SCRIPT_VAR0_TABLE,Y
    case 0xC03DFA: cpu.execute_instruction<0xB9>(0x000E5E, 3); return true;
    // src/unknown/C0/C03DAA.asm:38 STA a:char_struct::unknown53,X
    case 0xC03DFD: cpu.execute_instruction<0x9D>(0x000035, 3); return true;
    // src/unknown/C0/C03DAA.asm:39 STZ a:char_struct::unknown57,X
    case 0xC03E00: cpu.execute_instruction<0x9E>(0x000039, 3); return true;
    // src/unknown/C0/C03DAA.asm:40 LDA #.LOWORD(-1)
    case 0xC03E03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03DAA.asm:40 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC03E03.
    case 0xC03E05: cpu.execute_instruction<0xFF>(0x005C9D, 4); return true;
    // src/unknown/C0/C03DAA.asm:41 STA a:char_struct::unknown92,X
    case 0xC03E06: cpu.execute_instruction<0x9D>(0x00005C, 3); return true;
    // src/unknown/C0/C03DAA.asm:42 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC03E09: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C0/C03DAA.asm:43 AND #$00FF
    case 0xC03E0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03DAA.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC03E0C.
    case 0xC03E0E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C03DAA.asm:44 CMP #STATUS_0::UNCONSCIOUS
    case 0xC03E0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C03DAA.asm:44 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC03E0F.
    case 0xC03E11: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C03DAA.asm:45 BNE @UNKNOWN0
    case 0xC03E12: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C03DAA.asm:46 LDA #16
    case 0xC03E14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C0/C03DAA.asm:46 LDA #16
    // Overlapping static entry reached from 0xC03E14.
    case 0xC03E16: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C03DAA.asm:47 LDX @VIRTUAL04
    case 0xC03E17: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C03DAA.asm:48 STA __BSS_START__,X
    case 0xC03E19: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03DAA.asm:50 LDA GAME_STATE + game_state::current_party_members
    case 0xC03E1C: cpu.execute_instruction<0xAD>(0x009889, 3); return true;
    // src/unknown/C0/C03DAA.asm:51 ASL
    case 0xC03E1F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:52 STA FOOTSTEP_SOUND_IGNORE_ENTITY
    case 0xC03E20: cpu.execute_instruction<0x8D>(0x002898, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03DAA.asm:53 END_C_FUNCTION
    case 0xC03E23: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C03DAA.asm:53 END_C_FUNCTION
    case 0xC03E24: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03E25.asm (unresolved).
bool execute_unresolved_c0_c03e25_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03E25.asm:3 BEGIN_C_FUNCTION
    case 0xC03E25: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03E25.asm:7 END_STACK_VARS
    case 0xC03E27: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C03E25.asm:7 END_STACK_VARS
    case 0xC03E28: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03E25.asm:7 END_STACK_VARS
    case 0xC03E29: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03E25.asm:7 END_STACK_VARS
    case 0xC03E2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03E25.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC03E2A.
    case 0xC03E2C: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03E25.asm:7 END_STACK_VARS
    case 0xC03E2D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C03E25.asm:7 END_STACK_VARS
    case 0xC03E2E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C03E25.asm:8 STA @LOCAL00
    case 0xC03E2F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03E25.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC03E2C.
    case 0xC03E30: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/C0/C03E25.asm:9 LDX #0
    case 0xC03E31: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C03E25.asm:9 LDX #0
    // Overlapping static entry reached from 0xC03E31.
    case 0xC03E33: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C03E25.asm:10 BRA @UNKNOWN1
    case 0xC03E34: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C0/C03E25.asm:12 INX
    case 0xC03E36: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03E25.asm:14 LDA @LOCAL00
    case 0xC03E37: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03E25.asm:15 STA @VIRTUAL02
    case 0xC03E39: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03E25.asm:16 INC @VIRTUAL02
    case 0xC03E3B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C03E25.asm:17 LDA GAME_STATE + game_state::unknown96,X
    case 0xC03E3D: cpu.execute_instruction<0xBD>(0x00988B, 3); return true;
    // src/unknown/C0/C03E25.asm:18 AND #$00FF
    case 0xC03E40: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03E25.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC03E40.
    case 0xC03E42: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C0/C03E25.asm:19 CMP @VIRTUAL02
    case 0xC03E43: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C03E25.asm:20 BNE @UNKNOWN0
    case 0xC03E45: cpu.execute_instruction<0xD0>(0x0000EF, 2); return true;
    // src/unknown/C0/C03E25.asm:21 CPX #0
    case 0xC03E47: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C03E25.asm:21 CPX #0
    // Overlapping static entry reached from 0xC03E47.
    case 0xC03E49: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C03E25.asm:22 BNE @UNKNOWN2
    case 0xC03E4A: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C03E25.asm:23 LDA #.LOWORD(-1)
    case 0xC03E4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03E25.asm:23 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC03E4C.
    case 0xC03E4E: cpu.execute_instruction<0xFF>(0xCA0780, 4); return true;
    // src/unknown/C0/C03E25.asm:24 BRA @UNKNOWN3
    case 0xC03E4F: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C0/C03E25.asm:26 DEX
    case 0xC03E51: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C03E25.asm:27 LDA GAME_STATE + game_state::unknown96,X
    case 0xC03E52: cpu.execute_instruction<0xBD>(0x00988B, 3); return true;
    // src/unknown/C0/C03E25.asm:28 AND #$00FF
    case 0xC03E55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03E25.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC03E55.
    case 0xC03E57: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03E25.asm:30 END_C_FUNCTION
    case 0xC03E58: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C03E25.asm:30 END_C_FUNCTION
    case 0xC03E59: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03E5A.asm (unresolved).
bool execute_unresolved_c0_c03e5a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03E5A.asm:3 BEGIN_C_FUNCTION
    case 0xC03E5A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03E5A.asm:7 END_STACK_VARS
    case 0xC03E5C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C03E5A.asm:7 END_STACK_VARS
    case 0xC03E5D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03E5A.asm:7 END_STACK_VARS
    case 0xC03E5E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03E5A.asm:7 END_STACK_VARS
    case 0xC03E5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03E5A.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC03E5F.
    case 0xC03E61: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03E5A.asm:7 END_STACK_VARS
    case 0xC03E62: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C03E5A.asm:7 END_STACK_VARS
    case 0xC03E63: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A.asm:8 STA @LOCAL00
    case 0xC03E64: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03E5A.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC03E61.
    case 0xC03E65: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/C0/C03E5A.asm:9 LDX #0
    case 0xC03E66: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C03E5A.asm:9 LDX #0
    // Overlapping static entry reached from 0xC03E66.
    case 0xC03E68: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C03E5A.asm:10 BRA @UNKNOWN1
    case 0xC03E69: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C0/C03E5A.asm:12 INX
    case 0xC03E6B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A.asm:14 LDA @LOCAL00
    case 0xC03E6C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03E5A.asm:15 STA @VIRTUAL02
    case 0xC03E6E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03E5A.asm:16 INC @VIRTUAL02
    case 0xC03E70: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C03E5A.asm:17 LDA GAME_STATE + game_state::unknown96,X
    case 0xC03E72: cpu.execute_instruction<0xBD>(0x00988B, 3); return true;
    // src/unknown/C0/C03E5A.asm:18 AND #$00FF
    case 0xC03E75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03E5A.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC03E75.
    case 0xC03E77: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C0/C03E5A.asm:19 CMP @VIRTUAL02
    case 0xC03E78: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C03E5A.asm:20 BNE @UNKNOWN0
    case 0xC03E7A: cpu.execute_instruction<0xD0>(0x0000EF, 2); return true;
    // src/unknown/C0/C03E5A.asm:21 CPX #0
    case 0xC03E7C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C03E5A.asm:21 CPX #0
    // Overlapping static entry reached from 0xC03E7C.
    case 0xC03E7E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C03E5A.asm:22 BNE @UNKNOWN2
    case 0xC03E7F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C03E5A.asm:23 LDA #.LOWORD(-1)
    case 0xC03E81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03E5A.asm:23 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC03E81.
    case 0xC03E83: cpu.execute_instruction<0xFF>(0x8A1580, 4); return true;
    // src/unknown/C0/C03E5A.asm:24 BRA @UNKNOWN3
    case 0xC03E84: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C03E5A.asm:26 TXA
    case 0xC03E86: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A.asm:27 DEC
    case 0xC03E87: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A.asm:28 ASL
    case 0xC03E88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A.asm:29 TAX
    case 0xC03E89: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A.asm:30 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC03E8A: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C0/C03E5A.asm:31 ASL
    case 0xC03E8D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A.asm:32 TAX
    case 0xC03E8E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A.asm:33 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC03E8F: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/C0/C03E5A.asm:34 ASL
    case 0xC03E92: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A.asm:35 TAX
    case 0xC03E93: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A.asm:36 LDA CHOSEN_FOUR_PTRS,X
    case 0xC03E94: cpu.execute_instruction<0xBD>(0x004DC8, 3); return true;
    // src/unknown/C0/C03E5A.asm:37 TAX
    case 0xC03E97: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A.asm:38 LDA a:char_struct::position_index,X
    case 0xC03E98: cpu.execute_instruction<0xBD>(0x00003D, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03E5A.asm:40 END_C_FUNCTION
    case 0xC03E9B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C03E5A.asm:40 END_C_FUNCTION
    case 0xC03E9C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03E9D.asm (unresolved).
bool execute_unresolved_c0_c03e9d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03E9D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03E9D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03E9D.asm:8 END_STACK_VARS
    case 0xC03E9F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C03E9D.asm:8 END_STACK_VARS
    case 0xC03EA0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03E9D.asm:8 END_STACK_VARS
    case 0xC03EA1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03E9D.asm:8 END_STACK_VARS
    case 0xC03EA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03E9D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC03EA2.
    case 0xC03EA4: cpu.execute_instruction<0xFF>(0x20685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03E9D.asm:8 END_STACK_VARS
    case 0xC03EA5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C03E9D.asm:8 END_STACK_VARS
    case 0xC03EA6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C03E9D.asm:9 JSR UNKNOWN_C03E5A
    case 0xC03EA7: cpu.execute_instruction<0x20>(0x003E5A, 3); return true;
    // src/unknown/C0/C03E9D.asm:9 JSR UNKNOWN_C03E5A
    // Overlapping static entry reached from 0xC03EA4.
    case 0xC03EA8: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C0/C03E9D.asm:9 JSR UNKNOWN_C03E5A
    // Overlapping static entry reached from 0xC03EA8.
    case 0xC03EA9: cpu.execute_instruction<0x3E>(0x000E85, 3); return true;
    // src/unknown/C0/C03E9D.asm:10 STA @LOCAL00
    case 0xC03EAA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03E9D.asm:11 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC03EAC: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/unknown/C0/C03E9D.asm:12 LDA a:char_struct::position_index,X
    case 0xC03EAF: cpu.execute_instruction<0xBD>(0x00003D, 3); return true;
    // src/unknown/C0/C03E9D.asm:13 STA @VIRTUAL02
    case 0xC03EB2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03E9D.asm:14 LDA @LOCAL00
    case 0xC03EB4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03E9D.asm:15 CMP @VIRTUAL02
    case 0xC03EB6: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C03E9D.asm:16 BCS @UNKNOWN0
    case 0xC03EB8: cpu.execute_instruction<0xB0>(0x000004, 2); return true;
    // src/unknown/C0/C03E9D.asm:17 CLC
    case 0xC03EBA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03E9D.asm:18 ADC #256
    case 0xC03EBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C0/C03E9D.asm:18 ADC #256
    // Overlapping static entry reached from 0xC03EBB.
    case 0xC03EBD: cpu.execute_instruction<0x01>(0x000038, 2); return true;
    // src/unknown/C0/C03E9D.asm:20 SEC
    case 0xC03EBE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C03E9D.asm:21 SBC @VIRTUAL02
    case 0xC03EBF: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03E9D.asm:22 END_C_FUNCTION
    case 0xC03EC1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C03E9D.asm:22 END_C_FUNCTION
    case 0xC03EC2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03EC3.asm (unresolved).
bool execute_unresolved_c0_c03ec3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03EC3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03EC3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03EC3.asm:11 END_STACK_VARS
    case 0xC03EC5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C03EC3.asm:11 END_STACK_VARS
    case 0xC03EC6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03EC3.asm:11 END_STACK_VARS
    case 0xC03EC7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03EC3.asm:11 END_STACK_VARS
    case 0xC03EC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03EC3.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC03EC8.
    case 0xC03ECA: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03EC3.asm:11 END_STACK_VARS
    case 0xC03ECB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C03EC3.asm:11 END_STACK_VARS
    case 0xC03ECC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:12 STY @LOCAL00
    case 0xC03ECD: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C03EC3.asm:12 STY @LOCAL00
    // Overlapping static entry reached from 0xC03ECA.
    case 0xC03ECE: cpu.execute_instruction<0x0E>(0x000286, 3); return true;
    // src/unknown/C0/C03EC3.asm:13 STX @VIRTUAL02
    case 0xC03ECF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C03EC3.asm:14 TAX
    case 0xC03ED1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:15 LDA @PARAM03
    case 0xC03ED2: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C03EC3.asm:16 STA @VIRTUAL04
    case 0xC03ED4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C03EC3.asm:17 TXA
    case 0xC03ED6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:18 JSL UNKNOWN_C03E9D
    case 0xC03ED7: cpu.execute_instruction<0x22>(0xC03E9D, 4); return true;
    // src/unknown/C0/C03EC3.asm:19 CMP @VIRTUAL02
    case 0xC03EDB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C03EC3.asm:20 BNE @UNKNOWN0
    case 0xC03EDD: cpu.execute_instruction<0xD0>(0x000019, 2); return true;
    // src/unknown/C0/C03EC3.asm:21 LDY @LOCAL00
    case 0xC03EDF: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C03EC3.asm:22 INY
    case 0xC03EE1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:23 STY @LOCAL00
    case 0xC03EE2: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C03EC3.asm:24 LDA CURRENT_ENTITY_SLOT
    case 0xC03EE4: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C03EC3.asm:25 ASL
    case 0xC03EE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:26 CLC
    case 0xC03EE8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:27 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC03EE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x001002, 3); return true;
    // src/unknown/C0/C03EC3.asm:27 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC03EE9.
    case 0xC03EEB: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C03EC3.asm:28 TAX
    case 0xC03EEC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:29 LDA __BSS_START__,X
    case 0xC03EED: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C03EC3.asm:30 AND #$FFFF ^ SPRITE_TABLE_10_FLAGS::UNKNOWN12
    case 0xC03EF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00EFFF, 3); return true;
    // src/unknown/C0/C03EC3.asm:30 AND #$FFFF ^ SPRITE_TABLE_10_FLAGS::UNKNOWN12
    // Overlapping static entry reached from 0xC03EF0.
    case 0xC03EF2: cpu.execute_instruction<0xEF>(0x00009D, 4); return true;
    // src/unknown/C0/C03EC3.asm:31 STA __BSS_START__,X
    case 0xC03EF3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03EC3.asm:32 BRA @UNKNOWN1
    case 0xC03EF6: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/unknown/C0/C03EC3.asm:34 CMP @VIRTUAL02
    case 0xC03EF8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C03EC3.asm:35 BLTEQ @UNKNOWN1
    case 0xC03EFA: cpu.execute_instruction<0x90>(0x00001D, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C03EC3.asm:35 BLTEQ @UNKNOWN1
    case 0xC03EFC: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C0/C03EC3.asm:36 LDY @LOCAL00
    case 0xC03EFE: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C03EC3.asm:37 TYA
    case 0xC03F00: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:38 CLC
    case 0xC03F01: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:39 ADC @VIRTUAL04
    case 0xC03F02: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C03EC3.asm:40 TAY
    case 0xC03F04: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:41 STY @LOCAL00
    case 0xC03F05: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C03EC3.asm:42 LDA CURRENT_ENTITY_SLOT
    case 0xC03F07: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C03EC3.asm:43 ASL
    case 0xC03F0A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:44 CLC
    case 0xC03F0B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:45 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC03F0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x001002, 3); return true;
    // src/unknown/C0/C03EC3.asm:45 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC03F0C.
    case 0xC03F0E: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C03EC3.asm:46 TAX
    case 0xC03F0F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:47 LDA __BSS_START__,X
    case 0xC03F10: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C03EC3.asm:48 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12
    case 0xC03F13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x001000, 3); return true;
    // src/unknown/C0/C03EC3.asm:48 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12
    // Overlapping static entry reached from 0xC03F13.
    case 0xC03F15: cpu.execute_instruction<0x10>(0x00009D, 2); return true;
    // src/unknown/C0/C03EC3.asm:49 STA __BSS_START__,X
    case 0xC03F16: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03EC3.asm:49 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC03F15.
    case 0xC03F17: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C03EC3.asm:51 LDY @LOCAL00
    case 0xC03F19: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C03EC3.asm:52 TYA
    case 0xC03F1B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03EC3.asm:53 END_C_FUNCTION
    case 0xC03F1C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C03EC3.asm:53 END_C_FUNCTION
    case 0xC03F1D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03F1E.asm (unresolved).
bool execute_unresolved_c0_c03f1e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C03F1E.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC03F1E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03F1E.asm:5 END_STACK_VARS
    case 0xC03F20: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03F1E.asm:5 END_STACK_VARS
    case 0xC03F21: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03F1E.asm:5 END_STACK_VARS
    case 0xC03F22: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03F1E.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC03F22.
    case 0xC03F24: cpu.execute_instruction<0xFF>(0x7D9C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03F1E.asm:5 END_STACK_VARS
    case 0xC03F25: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:6 STZ GAME_STATE + game_state::unknown88
    case 0xC03F26: cpu.execute_instruction<0x9C>(0x00987D, 3); return true;
    // src/unknown/C0/C03F1E.asm:6 STZ GAME_STATE + game_state::unknown88
    // Overlapping static entry reached from 0xC03F24.
    case 0xC03F28: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:7 LDX #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC03F29: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000056, 2); else cpu.execute_instruction<0xA2>(0x005156, 3); return true;
    // src/unknown/C0/C03F1E.asm:7 LDX #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC03F29.
    case 0xC03F2B: cpu.execute_instruction<0x51>(0x0000A0, 2); return true;
    // src/unknown/C0/C03F1E.asm:8 LDY #$0002
    case 0xC03F2C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C03F1E.asm:8 LDY #$0002
    // Overlapping static entry reached from 0xC03F2B.
    case 0xC03F2D: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/unknown/C0/C03F1E.asm:8 LDY #$0002
    // Overlapping static entry reached from 0xC03F2C.
    case 0xC03F2E: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C0/C03F1E.asm:10 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03F2F: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C03F1E.asm:11 STA a:player_position_buffer_entry::x_coord,X
    case 0xC03F32: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03F1E.asm:12 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC03F35: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C03F1E.asm:13 STA a:player_position_buffer_entry::y_coord,X
    case 0xC03F38: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C0/C03F1E.asm:14 LDA GAME_STATE+game_state::leader_direction
    case 0xC03F3B: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C03F1E.asm:15 STA a:player_position_buffer_entry::direction,X
    case 0xC03F3E: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/unknown/C0/C03F1E.asm:16 LDA GAME_STATE+game_state::walking_style
    case 0xC03F41: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/unknown/C0/C03F1E.asm:17 STA a:player_position_buffer_entry::walking_style,X
    case 0xC03F44: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/unknown/C0/C03F1E.asm:18 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xC03F47: cpu.execute_instruction<0xAD>(0x009881, 3); return true;
    // src/unknown/C0/C03F1E.asm:19 STA a:player_position_buffer_entry::tile_flags,X
    case 0xC03F4A: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/unknown/C0/C03F1E.asm:20 STZ PLAYER_MOVEMENT_FLAGS
    case 0xC03F4D: cpu.execute_instruction<0x9C>(0x005D56, 3); return true;
    // src/unknown/C0/C03F1E.asm:21 STZ a:player_position_buffer_entry::unknown10,X
    case 0xC03F50: cpu.execute_instruction<0x9E>(0x00000A, 3); return true;
    // src/unknown/C0/C03F1E.asm:22 TXA
    case 0xC03F53: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:23 CLC
    case 0xC03F54: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:24 ADC #$0BF4
    case 0xC03F55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x000BF4, 3); return true;
    // src/unknown/C0/C03F1E.asm:24 ADC #$0BF4
    // Overlapping static entry reached from 0xC03F55.
    case 0xC03F57: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:25 TAX
    case 0xC03F58: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:26 DEY
    case 0xC03F59: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:27 BNE @UNKNOWN0
    case 0xC03F5A: cpu.execute_instruction<0xD0>(0x0000D3, 2); return true;
    // src/unknown/C0/C03F1E.asm:28 LDY #$0000
    case 0xC03F5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C03F1E.asm:28 LDY #$0000
    // Overlapping static entry reached from 0xC03F5C.
    case 0xC03F5E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C03F1E.asm:29 BRA @UNKNOWN2
    case 0xC03F5F: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/unknown/C0/C03F1E.asm:31 LDA GAME_STATE + game_state::player_controlled_party_members,Y
    case 0xC03F61: cpu.execute_instruction<0xB9>(0x009891, 3); return true;
    // src/unknown/C0/C03F1E.asm:32 AND #$00FF
    case 0xC03F64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03F1E.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC03F64.
    case 0xC03F66: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C03F1E.asm:33 ASL
    case 0xC03F67: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:34 TAX
    case 0xC03F68: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:35 LDA CHOSEN_FOUR_PTRS,X
    case 0xC03F69: cpu.execute_instruction<0xBD>(0x004DC8, 3); return true;
    // src/unknown/C0/C03F1E.asm:36 TAX
    case 0xC03F6C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:37 STZ a:char_struct::position_index,X
    case 0xC03F6D: cpu.execute_instruction<0x9E>(0x00003D, 3); return true;
    // src/unknown/C0/C03F1E.asm:38 LDA #$FFFF
    case 0xC03F70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03F1E.asm:38 LDA #$FFFF
    // Overlapping static entry reached from 0xC03F70.
    case 0xC03F72: cpu.execute_instruction<0xFF>(0x00419D, 4); return true;
    // src/unknown/C0/C03F1E.asm:39 STA a:char_struct::unknown65,X
    case 0xC03F73: cpu.execute_instruction<0x9D>(0x000041, 3); return true;
    // src/unknown/C0/C03F1E.asm:40 STA a:char_struct::unknown55,X
    case 0xC03F76: cpu.execute_instruction<0x9D>(0x000037, 3); return true;
    // src/unknown/C0/C03F1E.asm:41 TYA
    case 0xC03F79: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:42 ASL
    case 0xC03F7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:43 TAX
    case 0xC03F7B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:44 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC03F7C: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/unknown/C0/C03F1E.asm:45 ASL
    case 0xC03F7F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:46 TAX
    case 0xC03F80: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:47 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03F81: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C03F1E.asm:48 STA ENTITY_ABS_X_TABLE,X
    case 0xC03F84: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C03F1E.asm:49 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC03F87: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C03F1E.asm:50 STA ENTITY_ABS_Y_TABLE,X
    case 0xC03F8A: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C03F1E.asm:51 LDA GAME_STATE+game_state::leader_direction
    case 0xC03F8D: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C03F1E.asm:52 STA ENTITY_DIRECTIONS,X
    case 0xC03F90: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C03F1E.asm:53 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xC03F93: cpu.execute_instruction<0xAD>(0x009881, 3); return true;
    // src/unknown/C0/C03F1E.asm:54 STA ENTITY_SURFACE_FLAGS,X
    case 0xC03F96: cpu.execute_instruction<0x9D>(0x002BAA, 3); return true;
    // src/unknown/C0/C03F1E.asm:55 INY
    case 0xC03F99: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:57 LDA GAME_STATE+game_state::party_count
    case 0xC03F9A: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C0/C03F1E.asm:58 AND #$00FF
    case 0xC03F9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03F1E.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC03F9D.
    case 0xC03F9F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C03F1E.asm:59 STA @VIRTUAL02
    case 0xC03FA0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03F1E.asm:60 TYA
    case 0xC03FA2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:61 CMP @VIRTUAL02
    case 0xC03FA3: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C03F1E.asm:62 BCC @UNKNOWN1
    case 0xC03FA5: cpu.execute_instruction<0x90>(0x0000BA, 2); return true;
    // src/unknown/C0/C03F1E.asm:63 PLD
    case 0xC03FA7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E.asm:64 RTL
    case 0xC03FA8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03FA9.asm (unresolved).
bool execute_unresolved_c0_c03fa9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03FA9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03FA9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03FA9.asm:9 END_STACK_VARS
    case 0xC03FAB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C03FA9.asm:9 END_STACK_VARS
    case 0xC03FAC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03FA9.asm:9 END_STACK_VARS
    case 0xC03FAD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03FA9.asm:9 END_STACK_VARS
    case 0xC03FAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03FA9.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC03FAE.
    case 0xC03FB0: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03FA9.asm:9 END_STACK_VARS
    case 0xC03FB1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C03FA9.asm:9 END_STACK_VARS
    case 0xC03FB2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C03FA9.asm:10 STY @VIRTUAL02
    case 0xC03FB3: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C03FA9.asm:10 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC03FB0.
    case 0xC03FB4: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C0/C03FA9.asm:11 STA @LOCAL00
    case 0xC03FB5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03FA9.asm:12 STA GAME_STATE+game_state::leader_x_coord
    case 0xC03FB7: cpu.execute_instruction<0x8D>(0x009877, 3); return true;
    // src/unknown/C0/C03FA9.asm:13 STX GAME_STATE+game_state::leader_y_coord
    case 0xC03FBA: cpu.execute_instruction<0x8E>(0x00987B, 3); return true;
    // src/unknown/C0/C03FA9.asm:14 LDA @VIRTUAL02
    case 0xC03FBD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03FA9.asm:15 STA GAME_STATE+game_state::leader_direction
    case 0xC03FBF: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // src/unknown/C0/C03FA9.asm:16 LDY GAME_STATE+game_state::current_party_members
    case 0xC03FC2: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C03FA9.asm:17 LDA @LOCAL00
    case 0xC03FC5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03FA9.asm:18 JSL UNKNOWN_C05F33
    case 0xC03FC7: cpu.execute_instruction<0x22>(0xC05F33, 4); return true;
    // src/unknown/C0/C03FA9.asm:19 STA GAME_STATE+game_state::trodden_tile_type
    case 0xC03FCB: cpu.execute_instruction<0x8D>(0x009881, 3); return true;
    // src/unknown/C0/C03FA9.asm:20 LDA @VIRTUAL02
    case 0xC03FCE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03FA9.asm:21 JSL UNKNOWN_C03A94
    case 0xC03FD0: cpu.execute_instruction<0x22>(0xC03A94, 4); return true;
    // src/unknown/C0/C03FA9.asm:22 JSL UNKNOWN_C03F1E
    case 0xC03FD4: cpu.execute_instruction<0x22>(0xC03F1E, 4); return true;
    // src/unknown/C0/C03FA9.asm:23 LDA #0
    case 0xC03FD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C03FA9.asm:23 LDA #0
    // Overlapping static entry reached from 0xC03FD8.
    case 0xC03FDA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C03FA9.asm:24 STA @LOCAL00
    case 0xC03FDB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03FA9.asm:25 BRA @UNKNOWN1
    case 0xC03FDD: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C03FA9.asm:27 ASL
    case 0xC03FDF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03FA9.asm:28 TAX
    case 0xC03FE0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03FA9.asm:29 LDA #.LOWORD(-1)
    case 0xC03FE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03FA9.asm:29 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC03FE1.
    case 0xC03FE3: cpu.execute_instruction<0xFF>(0x34869D, 4); return true;
    // src/unknown/C0/C03FA9.asm:30 STA ENTITY_ANIMATION_FINGERPRINTS + 24 * 2,X
    case 0xC03FE4: cpu.execute_instruction<0x9D>(0x003486, 3); return true;
    // src/unknown/C0/C03FA9.asm:31 LDA @LOCAL00
    case 0xC03FE7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03FA9.asm:32 INC
    case 0xC03FE9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C03FA9.asm:33 STA @LOCAL00
    case 0xC03FEA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03FA9.asm:35 CMP #TOTAL_PARTY_COUNT
    case 0xC03FEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C03FA9.asm:35 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC03FEC.
    case 0xC03FEE: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C03FA9.asm:36 BCC @UNKNOWN0
    case 0xC03FEF: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // src/unknown/C0/C03FA9.asm:37 LDA #.LOWORD(-1)
    case 0xC03FF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03FA9.asm:37 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC03FF1.
    case 0xC03FF3: cpu.execute_instruction<0xFF>(0x9F6B8D, 4); return true;
    // src/unknown/C0/C03FA9.asm:38 STA MINI_GHOST_ENTITY_ID
    case 0xC03FF4: cpu.execute_instruction<0x8D>(0x009F6B, 3); return true;
    // src/unknown/C0/C03FA9.asm:39 STZ CURRENT_TELEPORT_DESTINATION_Y
    case 0xC03FF7: cpu.execute_instruction<0x9C>(0x00438C, 3); return true;
    // src/unknown/C0/C03FA9.asm:40 STZ CURRENT_TELEPORT_DESTINATION_X
    case 0xC03FFA: cpu.execute_instruction<0x9C>(0x00438A, 3); return true;
    // src/unknown/C0/C03FA9.asm:41 LDA f:NESS_PAJAMA_FLAG
    case 0xC03FFD: cpu.execute_instruction<0xAF>(0xC30186, 4); return true;
    // src/unknown/C0/C03FA9.asm:41 LDA f:NESS_PAJAMA_FLAG
    // Overlapping static entry reached from 0xC0405A.
    case 0xC03FFE: cpu.execute_instruction<0x86>(0x000001, 2); return true;
    // src/unknown/C0/C03FA9.asm:41 LDA f:NESS_PAJAMA_FLAG
    // Overlapping static entry reached from 0xC03FFE.
    case 0xC04000: cpu.execute_instruction<0xC3>(0x000022, 2); return true;
    // src/unknown/C0/C03FA9.asm:42 JSL GET_EVENT_FLAG
    case 0xC04001: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C0/C03FA9.asm:42 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC04000.
    case 0xC04002: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C03FA9.asm:42 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC04002.
    case 0xC04003: cpu.execute_instruction<0x16>(0x0000C2, 2); return true;
    // src/unknown/C0/C03FA9.asm:43 STA PAJAMA_FLAG
    case 0xC04005: cpu.execute_instruction<0x8D>(0x009F71, 3); return true;
    // src/unknown/C0/C03FA9.asm:44 JSL UNKNOWN_C07B52
    case 0xC04008: cpu.execute_instruction<0x22>(0xC07B52, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03FA9.asm:45 END_C_FUNCTION
    case 0xC0400C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C03FA9.asm:45 END_C_FUNCTION
    case 0xC0400D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0402B.asm (unresolved).
bool execute_unresolved_c0_c0402b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0402B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0402B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0402B.asm:7 END_STACK_VARS
    case 0xC0402D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0402B.asm:7 END_STACK_VARS
    case 0xC0402E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0402B.asm:7 END_STACK_VARS
    case 0xC0402F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0402B.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0402F.
    case 0xC04031: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0402B.asm:7 END_STACK_VARS
    case 0xC04032: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0402B.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC04033: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0402B.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC04035: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0402B.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC04037: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0402B.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC04039: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0402B.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0403B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0402B.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0403D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0402B.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0403F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0402B.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC04041: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0402B.asm:10 JSL UNKNOWN_C083E3
    case 0xC04043: cpu.execute_instruction<0x22>(0xC083E3, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0402B.asm:11 END_C_FUNCTION
    case 0xC04047: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0402B.asm:11 END_C_FUNCTION
    case 0xC04048: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04049.asm (unresolved).
bool execute_unresolved_c0_c04049_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C04049.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC04049: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C04049.asm:4 STZ DEMO_FRAMES_LEFT
    case 0xC0404B: cpu.execute_instruction<0x9C>(0x000081, 3); return true;
    // src/unknown/C0/C04049.asm:5 RTL
    case 0xC0404E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04116.asm (unresolved).
bool execute_unresolved_c0_c04116_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04116.asm:3 BEGIN_C_FUNCTION
    case 0xC04116: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04116.asm:11 END_STACK_VARS
    case 0xC04118: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C04116.asm:11 END_STACK_VARS
    case 0xC04119: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04116.asm:11 END_STACK_VARS
    case 0xC0411A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04116.asm:11 END_STACK_VARS
    case 0xC0411B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04116.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC0411B.
    case 0xC0411D: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04116.asm:11 END_STACK_VARS
    case 0xC0411E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C04116.asm:11 END_STACK_VARS
    case 0xC0411F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:12 STA @LOCAL04
    case 0xC04120: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C04116.asm:12 STA @LOCAL04
    // Overlapping static entry reached from 0xC0411D.
    case 0xC04121: cpu.execute_instruction<0x16>(0x00000A, 2); return true;
    // src/unknown/C0/C04116.asm:13 ASL
    case 0xC04122: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:14 TAX
    case 0xC04123: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:15 LDA f:UNKNOWN_C3E148,X
    case 0xC04124: cpu.execute_instruction<0xBF>(0xC3E148, 4); return true;
    // src/unknown/C0/C04116.asm:16 CLC
    case 0xC04128: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:17 ADC GAME_STATE+game_state::leader_x_coord
    case 0xC04129: cpu.execute_instruction<0x6D>(0x009877, 3); return true;
    // src/unknown/C0/C04116.asm:18 STA @LOCAL03
    case 0xC0412C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C04116.asm:19 LDA f:UNKNOWN_C3E158,X
    case 0xC0412E: cpu.execute_instruction<0xBF>(0xC3E158, 4); return true;
    // src/unknown/C0/C04116.asm:20 CLC
    case 0xC04132: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:21 ADC GAME_STATE+game_state::leader_y_coord
    case 0xC04133: cpu.execute_instruction<0x6D>(0x00987B, 3); return true;
    // src/unknown/C0/C04116.asm:22 STA @VIRTUAL04
    case 0xC04136: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04116.asm:23 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC04138: cpu.execute_instruction<0xAD>(0x005D58, 3); return true;
    // src/unknown/C0/C04116.asm:24 STA @LOCAL02
    case 0xC0413B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04116.asm:25 LDA #1
    case 0xC0413D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04116.asm:25 LDA #1
    // Overlapping static entry reached from 0xC0413D.
    case 0xC0413F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C04116.asm:26 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC04140: cpu.execute_instruction<0x8D>(0x005D58, 3); return true;
    // src/unknown/C0/C04116.asm:28 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC04143: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009889, 3); return true;
    // src/unknown/C0/C04116.asm:28 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC04143.
    case 0xC04145: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:29 STA @VIRTUAL02
    case 0xC04146: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04116.asm:30 LDX @VIRTUAL02
    case 0xC04148: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04116.asm:31 LDA __BSS_START__,X
    case 0xC0414A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04116.asm:32 TAY
    case 0xC0414D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:33 LDX @VIRTUAL04
    case 0xC0414E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C04116.asm:34 LDA @LOCAL03
    case 0xC04150: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C04116.asm:35 JSL NPC_COLLISION_CHECK
    case 0xC04152: cpu.execute_instruction<0x22>(0xC05FF6, 4); return true;
    // src/unknown/C0/C04116.asm:36 STA @LOCAL01
    case 0xC04156: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04116.asm:37 CMP #$8000
    case 0xC04158: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C04116.asm:37 CMP #$8000
    // Overlapping static entry reached from 0xC04158.
    case 0xC0415A: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C04116.asm:38 BCS @UNKNOWN1
    case 0xC0415B: cpu.execute_instruction<0xB0>(0x00000F, 2); return true;
    // src/unknown/C0/C04116.asm:39 ASL
    case 0xC0415D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:40 TAX
    case 0xC0415E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:41 LDA ENTITY_NPC_IDS,X
    case 0xC0415F: cpu.execute_instruction<0xBD>(0x002C9A, 3); return true;
    // src/unknown/C0/C04116.asm:42 STA INTERACTING_NPC_ID
    case 0xC04162: cpu.execute_instruction<0x8D>(0x005D62, 3); return true;
    // src/unknown/C0/C04116.asm:43 LDA @LOCAL01
    case 0xC04165: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C04116.asm:44 STA INTERACTING_NPC_ENTITY
    case 0xC04167: cpu.execute_instruction<0x8D>(0x005D64, 3); return true;
    // src/unknown/C0/C04116.asm:45 BRA @UNKNOWN7
    case 0xC0416A: cpu.execute_instruction<0x80>(0x00005A, 2); return true;
    // src/unknown/C0/C04116.asm:47 LDA @LOCAL04
    case 0xC0416C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C04116.asm:48 STA @LOCAL00
    case 0xC0416E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C04116.asm:49 LDX @VIRTUAL02
    case 0xC04170: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04116.asm:50 LDA __BSS_START__,X
    case 0xC04172: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04116.asm:51 TAY
    case 0xC04175: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:52 LDX @VIRTUAL04
    case 0xC04176: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C04116.asm:53 LDA @LOCAL03
    case 0xC04178: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C04116.asm:54 JSL UNKNOWN_C05CD7
    case 0xC0417A: cpu.execute_instruction<0x22>(0xC05CD7, 4); return true;
    // src/unknown/C0/C04116.asm:55 AND #$0082
    case 0xC0417E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000082, 2); else cpu.execute_instruction<0x29>(0x000082, 3); return true;
    // src/unknown/C0/C04116.asm:55 AND #$0082
    // Overlapping static entry reached from 0xC0417E.
    case 0xC04180: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C04116.asm:56 CMP #130
    case 0xC04181: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000082, 2); else cpu.execute_instruction<0xC9>(0x000082, 3); return true;
    // src/unknown/C0/C04116.asm:56 CMP #130
    // Overlapping static entry reached from 0xC04181.
    case 0xC04183: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C04116.asm:57 BNE @UNKNOWN7
    case 0xC04184: cpu.execute_instruction<0xD0>(0x000040, 2); return true;
    // src/unknown/C0/C04116.asm:58 LDA @LOCAL04
    case 0xC04186: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C04116.asm:59 ASL
    case 0xC04188: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:60 TAX
    case 0xC04189: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:61 LDA f:UNKNOWN_C3E148,X
    case 0xC0418A: cpu.execute_instruction<0xBF>(0xC3E148, 4); return true;
    // src/unknown/C0/C04116.asm:62 BEQ @UNKNOWN4
    case 0xC0418E: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C04116.asm:63 AND #$8000
    case 0xC04190: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C04116.asm:63 AND #$8000
    // Overlapping static entry reached from 0xC04190.
    case 0xC04192: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C04116.asm:64 BEQ @UNKNOWN2
    case 0xC04193: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C04116.asm:65 LDX #.LOWORD(-8)
    case 0xC04195: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F8, 2); else cpu.execute_instruction<0xA2>(0x00FFF8, 3); return true;
    // src/unknown/C0/C04116.asm:65 LDX #.LOWORD(-8)
    // Overlapping static entry reached from 0xC04195.
    case 0xC04197: cpu.execute_instruction<0xFF>(0xA20380, 4); return true;
    // src/unknown/C0/C04116.asm:66 BRA @UNKNOWN3
    case 0xC04198: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C04116.asm:68 LDX #8
    case 0xC0419A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C0/C04116.asm:68 LDX #8
    // Overlapping static entry reached from 0xC04197.
    case 0xC0419B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:68 LDX #8
    // Overlapping static entry reached from 0xC0419A.
    case 0xC0419C: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C0/C04116.asm:70 TXA
    case 0xC0419D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:71 CLC
    case 0xC0419E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:72 ADC @LOCAL03
    case 0xC0419F: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C0/C04116.asm:73 STA @LOCAL03
    case 0xC041A1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C04116.asm:75 LDA @LOCAL04
    case 0xC041A3: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C04116.asm:76 ASL
    case 0xC041A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:77 TAX
    case 0xC041A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:78 LDA f:UNKNOWN_C3E158,X
    case 0xC041A7: cpu.execute_instruction<0xBF>(0xC3E158, 4); return true;
    // src/unknown/C0/C04116.asm:79 BEQ @UNKNOWN0
    case 0xC041AB: cpu.execute_instruction<0xF0>(0x000096, 2); return true;
    // src/unknown/C0/C04116.asm:80 AND #$8000
    case 0xC041AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C04116.asm:80 AND #$8000
    // Overlapping static entry reached from 0xC041AD.
    case 0xC041AF: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C04116.asm:81 BEQ @UNKNOWN5
    case 0xC041B0: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C04116.asm:82 LDX #.LOWORD(-8)
    case 0xC041B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F8, 2); else cpu.execute_instruction<0xA2>(0x00FFF8, 3); return true;
    // src/unknown/C0/C04116.asm:82 LDX #.LOWORD(-8)
    // Overlapping static entry reached from 0xC041B2.
    case 0xC041B4: cpu.execute_instruction<0xFF>(0xA20380, 4); return true;
    // src/unknown/C0/C04116.asm:83 BRA @UNKNOWN6
    case 0xC041B5: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C04116.asm:85 LDX #8
    case 0xC041B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C0/C04116.asm:85 LDX #8
    // Overlapping static entry reached from 0xC041B4.
    case 0xC041B8: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:85 LDX #8
    // Overlapping static entry reached from 0xC041B7.
    case 0xC041B9: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C04116.asm:87 STX @VIRTUAL02
    case 0xC041BA: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C04116.asm:88 LDA @VIRTUAL04
    case 0xC041BC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C04116.asm:89 CLC
    case 0xC041BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:90 ADC @VIRTUAL02
    case 0xC041BF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C04116.asm:91 STA @VIRTUAL04
    case 0xC041C1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04116.asm:92 JMP @UNKNOWN0
    case 0xC041C3: cpu.execute_instruction<0x4C>(0x004143, 3); return true;
    // src/unknown/C0/C04116.asm:94 LDA @LOCAL02
    case 0xC041C6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C04116.asm:95 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC041C8: cpu.execute_instruction<0x8D>(0x005D58, 3); return true;
    // src/unknown/C0/C04116.asm:96 LDA INTERACTING_NPC_ID
    case 0xC041CB: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // src/unknown/C0/C04116.asm:97 CMP #.LOWORD(-1)
    case 0xC041CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C04116.asm:97 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC041CE.
    case 0xC041D0: cpu.execute_instruction<0xFF>(0xAD05F0, 4); return true;
    // src/unknown/C0/C04116.asm:98 BEQ @UNKNOWN8
    case 0xC041D1: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C04116.asm:99 LDA INTERACTING_NPC_ID
    case 0xC041D3: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // src/unknown/C0/C04116.asm:99 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC041D0.
    case 0xC041D4: cpu.execute_instruction<0x62>(0x00D05D, 3); return true;
    // src/unknown/C0/C04116.asm:100 BNE @UNKNOWN9
    case 0xC041D6: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C04116.asm:100 BNE @UNKNOWN9
    // Overlapping static entry reached from 0xC041D4.
    case 0xC041D7: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // src/unknown/C0/C04116.asm:102 LDA @LOCAL04
    case 0xC041D8: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C04116.asm:102 LDA @LOCAL04
    // Overlapping static entry reached from 0xC041D7.
    case 0xC041D9: cpu.execute_instruction<0x16>(0x000022, 2); return true;
    // src/unknown/C0/C04116.asm:103 JSL UNKNOWN_C4334A
    case 0xC041DA: cpu.execute_instruction<0x22>(0xC4334A, 4); return true;
    // src/unknown/C0/C04116.asm:103 JSL UNKNOWN_C4334A
    // Overlapping static entry reached from 0xC041D9.
    case 0xC041DB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:103 JSL UNKNOWN_C4334A
    // Overlapping static entry reached from 0xC041DB.
    case 0xC041DC: cpu.execute_instruction<0x33>(0x0000C4, 2); return true;
    // src/unknown/C0/C04116.asm:105 LDA INTERACTING_NPC_ID
    case 0xC041DE: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04116.asm:106 END_C_FUNCTION
    case 0xC041E1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C04116.asm:106 END_C_FUNCTION
    case 0xC041E2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C041E3.asm (unresolved).
bool execute_unresolved_c0_c041e3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C041E3.asm:3 BEGIN_C_FUNCTION
    case 0xC041E3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C041E3.asm:7 END_STACK_VARS
    case 0xC041E5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C041E3.asm:7 END_STACK_VARS
    case 0xC041E6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C041E3.asm:7 END_STACK_VARS
    case 0xC041E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C041E3.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC041E7.
    case 0xC041E9: cpu.execute_instruction<0xFF>(0x7FAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C041E3.asm:7 END_STACK_VARS
    case 0xC041EA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:8 LDA GAME_STATE+game_state::leader_direction
    case 0xC041EB: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C041E3.asm:8 LDA GAME_STATE+game_state::leader_direction
    // Overlapping static entry reached from 0xC041E9.
    case 0xC041ED: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:9 AND #$FFFE
    case 0xC041EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/unknown/C0/C041E3.asm:9 AND #$FFFE
    // Overlapping static entry reached from 0xC041EE.
    case 0xC041F0: cpu.execute_instruction<0xFF>(0x1084A8, 4); return true;
    // src/unknown/C0/C041E3.asm:10 TAY
    case 0xC041F1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:11 STY @LOCAL01
    case 0xC041F2: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C041E3.asm:12 TYX
    case 0xC041F4: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:13 STX @LOCAL00
    case 0xC041F5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:14 TXA
    case 0xC041F7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:15 JSR UNKNOWN_C04116
    case 0xC041F8: cpu.execute_instruction<0x20>(0x004116, 3); return true;
    // src/unknown/C0/C041E3.asm:16 CMP #.LOWORD(-1)
    case 0xC041FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C041E3.asm:16 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC041FB.
    case 0xC041FD: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C041E3.asm:17 BEQ @UNKNOWN0
    case 0xC041FE: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C041E3.asm:18 CMP #0
    case 0xC04200: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C041E3.asm:18 CMP #0
    // Overlapping static entry reached from 0xC041FD.
    case 0xC04201: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C041E3.asm:18 CMP #0
    // Overlapping static entry reached from 0xC04200.
    case 0xC04202: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C041E3.asm:19 BEQ @UNKNOWN0
    case 0xC04203: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C041E3.asm:20 LDX @LOCAL00
    case 0xC04205: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:21 TXA
    case 0xC04207: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:22 BRA @UNKNOWN4
    case 0xC04208: cpu.execute_instruction<0x80>(0x00006D, 2); return true;
    // src/unknown/C0/C041E3.asm:24 LDX @LOCAL00
    case 0xC0420A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:25 TXA
    case 0xC0420C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:26 INC
    case 0xC0420D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:27 INC
    case 0xC0420E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:28 AND #$0007
    case 0xC0420F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C041E3.asm:28 AND #$0007
    // Overlapping static entry reached from 0xC0420F.
    case 0xC04211: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C041E3.asm:29 TAX
    case 0xC04212: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:30 STX @LOCAL00
    case 0xC04213: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:31 STX GAME_STATE+game_state::leader_direction
    case 0xC04215: cpu.execute_instruction<0x8E>(0x00987F, 3); return true;
    // src/unknown/C0/C041E3.asm:32 TXA
    case 0xC04218: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:33 JSR UNKNOWN_C04116
    case 0xC04219: cpu.execute_instruction<0x20>(0x004116, 3); return true;
    // src/unknown/C0/C041E3.asm:34 CMP #.LOWORD(-1)
    case 0xC0421C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C041E3.asm:34 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0421C.
    case 0xC0421E: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C041E3.asm:35 BEQ @UNKNOWN1
    case 0xC0421F: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C041E3.asm:36 CMP #0
    case 0xC04221: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C041E3.asm:36 CMP #0
    // Overlapping static entry reached from 0xC0421E.
    case 0xC04222: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C041E3.asm:36 CMP #0
    // Overlapping static entry reached from 0xC04221.
    case 0xC04223: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C041E3.asm:37 BEQ @UNKNOWN1
    case 0xC04224: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C041E3.asm:38 LDX @LOCAL00
    case 0xC04226: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:39 TXA
    case 0xC04228: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:40 BRA @UNKNOWN4
    case 0xC04229: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C0/C041E3.asm:42 LDX @LOCAL00
    case 0xC0422B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:43 TXA
    case 0xC0422D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:44 INC
    case 0xC0422E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:45 INC
    case 0xC0422F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:46 INC
    case 0xC04230: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:47 INC
    case 0xC04231: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:48 AND #$0007
    case 0xC04232: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C041E3.asm:48 AND #$0007
    // Overlapping static entry reached from 0xC04232.
    case 0xC04234: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C041E3.asm:49 TAX
    case 0xC04235: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:50 STX @LOCAL00
    case 0xC04236: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:51 STX GAME_STATE+game_state::leader_direction
    case 0xC04238: cpu.execute_instruction<0x8E>(0x00987F, 3); return true;
    // src/unknown/C0/C041E3.asm:52 TXA
    case 0xC0423B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:53 JSR UNKNOWN_C04116
    case 0xC0423C: cpu.execute_instruction<0x20>(0x004116, 3); return true;
    // src/unknown/C0/C041E3.asm:54 CMP #.LOWORD(-1)
    case 0xC0423F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C041E3.asm:54 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0423F.
    case 0xC04241: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C041E3.asm:55 BEQ @UNKNOWN2
    case 0xC04242: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C041E3.asm:56 CMP #0
    case 0xC04244: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C041E3.asm:56 CMP #0
    // Overlapping static entry reached from 0xC04241.
    case 0xC04245: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C041E3.asm:56 CMP #0
    // Overlapping static entry reached from 0xC04244.
    case 0xC04246: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C041E3.asm:57 BEQ @UNKNOWN2
    case 0xC04247: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C041E3.asm:58 LDX @LOCAL00
    case 0xC04249: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:59 TXA
    case 0xC0424B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:60 BRA @UNKNOWN4
    case 0xC0424C: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C041E3.asm:62 LDX @LOCAL00
    case 0xC0424E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:63 TXA
    case 0xC04250: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:64 DEC
    case 0xC04251: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:65 DEC
    case 0xC04252: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:66 AND #$0007
    case 0xC04253: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C041E3.asm:66 AND #$0007
    // Overlapping static entry reached from 0xC04253.
    case 0xC04255: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C041E3.asm:67 TAX
    case 0xC04256: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:68 STX @LOCAL00
    case 0xC04257: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:69 STX GAME_STATE+game_state::leader_direction
    case 0xC04259: cpu.execute_instruction<0x8E>(0x00987F, 3); return true;
    // src/unknown/C0/C041E3.asm:70 TXA
    case 0xC0425C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:71 JSR UNKNOWN_C04116
    case 0xC0425D: cpu.execute_instruction<0x20>(0x004116, 3); return true;
    // src/unknown/C0/C041E3.asm:72 CMP #.LOWORD(-1)
    case 0xC04260: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C041E3.asm:72 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04260.
    case 0xC04262: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C041E3.asm:73 BEQ @UNKNOWN3
    case 0xC04263: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C041E3.asm:74 CMP #0
    case 0xC04265: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C041E3.asm:74 CMP #0
    // Overlapping static entry reached from 0xC04262.
    case 0xC04266: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C041E3.asm:74 CMP #0
    // Overlapping static entry reached from 0xC04265.
    case 0xC04267: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C041E3.asm:75 BEQ @UNKNOWN3
    case 0xC04268: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C041E3.asm:76 LDX @LOCAL00
    case 0xC0426A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:77 TXA
    case 0xC0426C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:78 BRA @UNKNOWN4
    case 0xC0426D: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C041E3.asm:80 LDY @LOCAL01
    case 0xC0426F: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C041E3.asm:81 STY GAME_STATE+game_state::leader_direction
    case 0xC04271: cpu.execute_instruction<0x8C>(0x00987F, 3); return true;
    // src/unknown/C0/C041E3.asm:82 LDA #.LOWORD(-1)
    case 0xC04274: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C041E3.asm:82 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04274.
    case 0xC04276: cpu.execute_instruction<0xFF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C041E3.asm:84 END_C_FUNCTION
    case 0xC04277: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C041E3.asm:84 END_C_FUNCTION
    case 0xC04278: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C042C2.asm (unresolved).
bool execute_unresolved_c0_c042c2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C042C2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC042C2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC042C4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC042C5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC042C6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC042C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC042C7.
    case 0xC042C9: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC042CA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC042CB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:8 TAX
    case 0xC042CC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:9 STX @LOCAL00
    case 0xC042CD: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C042C2.asm:10 TXA
    case 0xC042CF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:11 ASL
    case 0xC042D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:12 PHA
    case 0xC042D1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:13 LDA GAME_STATE+game_state::leader_direction
    case 0xC042D2: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C042C2.asm:14 ASL
    case 0xC042D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:15 TAX
    case 0xC042D6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:16 LDA f:UNKNOWN_C3E168,X
    case 0xC042D7: cpu.execute_instruction<0xBF>(0xC3E168, 4); return true;
    // src/unknown/C0/C042C2.asm:17 PLX
    case 0xC042DB: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:18 STA ENTITY_DIRECTIONS,X
    case 0xC042DC: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C042C2.asm:19 LDX @LOCAL00
    case 0xC042DF: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C042C2.asm:20 TXA
    case 0xC042E1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:21 JSL UNKNOWN_C09907
    case 0xC042E2: cpu.execute_instruction<0x22>(0xC09907, 4); return true;
    // src/unknown/C0/C042C2.asm:22 LDX @LOCAL00
    case 0xC042E6: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C042C2.asm:23 TXA
    case 0xC042E8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:24 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC042E9: cpu.execute_instruction<0x22>(0xC0A48F, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C042C2.asm:25 END_C_FUNCTION
    case 0xC042ED: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C042C2.asm:25 END_C_FUNCTION
    case 0xC042EE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
