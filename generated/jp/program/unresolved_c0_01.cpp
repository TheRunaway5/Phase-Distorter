// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/C0/C00E16.asm (unresolved).
bool execute_unresolved_c0_c00e16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C00E16.asm:3 BEGIN_C_FUNCTION
    case 0xC00E28: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C00E16.asm:16 END_STACK_VARS
    case 0xC00E2A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C00E16.asm:16 END_STACK_VARS
    case 0xC00E2B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C00E16.asm:16 END_STACK_VARS
    case 0xC00E2C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C00E16.asm:16 END_STACK_VARS
    case 0xC00E2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C00E16.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC00E2D.
    case 0xC00E2F: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C00E16.asm:16 END_STACK_VARS
    case 0xC00E30: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C00E16.asm:16 END_STACK_VARS
    case 0xC00E31: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:17 STX @VIRTUAL04
    case 0xC00E32: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C00E16.asm:17 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC00E2F.
    case 0xC00E33: cpu.execute_instruction<0x04>(0x0000A8, 2); return true;
    // src/unknown/C0/C00E16.asm:18 TAY
    case 0xC00E34: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:19 STY @LOCAL08
    case 0xC00E35: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:20 LDA DEBUG
    case 0xC00E37: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/unknown/C0/C00E16.asm:21 BEQ @UNKNOWN0
    case 0xC00E3A: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C00E16.asm:22 LDX @VIRTUAL04
    case 0xC00E3C: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C00E16.asm:23 TYA
    case 0xC00E3E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:24 JSL UNKNOWN_EFDFC4
    case 0xC00E3F: cpu.execute_instruction<0x22>(0xEFC8DE, 4); return true;
    // src/unknown/C0/C00E16.asm:26 LDA #256
    case 0xC00E43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/unknown/C0/C00E16.asm:26 LDA #256
    // Overlapping static entry reached from 0xC00E43.
    case 0xC00E45: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/unknown/C0/C00E16.asm:27 JSL SBRK
    case 0xC00E46: cpu.execute_instruction<0x22>(0xC086D7, 4); return true;
    // src/unknown/C0/C00E16.asm:27 JSL SBRK
    // Overlapping static entry reached from 0xC00E45.
    case 0xC00E47: cpu.execute_instruction<0xD7>(0x000086, 2); return true;
    // src/unknown/C0/C00E16.asm:27 JSL SBRK
    // Overlapping static entry reached from 0xC00E47.
    case 0xC00E49: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001E85, 3); return true;
    // src/unknown/C0/C00E16.asm:28 STA @LOCAL07
    case 0xC00E4A: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C00E16.asm:28 STA @LOCAL07
    // Overlapping static entry reached from 0xC00E49.
    case 0xC00E4B: cpu.execute_instruction<0x1E>(0x006918, 3); return true;
    // src/unknown/C0/C00E16.asm:29 CLC
    case 0xC00E4C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:30 ADC #128
    case 0xC00E4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000080, 3); return true;
    // src/unknown/C0/C00E16.asm:30 ADC #128
    // Overlapping static entry reached from 0xC00E4B.
    case 0xC00E4E: cpu.execute_instruction<0x80>(0x000000, 2); return true;
    // src/unknown/C0/C00E16.asm:30 ADC #128
    // Overlapping static entry reached from 0xC00E4D.
    case 0xC00E4F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C00E16.asm:31 STA @LOCAL06
    case 0xC00E50: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C00E16.asm:32 LDY @LOCAL08
    case 0xC00E52: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:33 TYA
    case 0xC00E54: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:34 DEC
    case 0xC00E55: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:35 STA @LOCAL08
    case 0xC00E56: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:36 LDA @VIRTUAL04
    case 0xC00E58: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00E16.asm:37 LSR
    case 0xC00E5A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:38 LSR
    case 0xC00E5B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:39 AND #$000F
    case 0xC00E5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C00E16.asm:39 AND #$000F
    // Overlapping static entry reached from 0xC00E5C.
    case 0xC00E5E: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00E5F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00E60: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00E61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00E62: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00E63: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:41 CLC
    case 0xC00E64: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:42 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC00E65: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00F000, 3); return true;
    // src/unknown/C0/C00E16.asm:42 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC00E65.
    case 0xC00E67: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/unknown/C0/C00E16.asm:43 STA @LOCAL05
    case 0xC00E68: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C00E16.asm:43 STA @LOCAL05
    // Overlapping static entry reached from 0xC00E67.
    case 0xC00E69: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:44 LDA @LOCAL08
    case 0xC00E6A: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:45 AND #$0003
    case 0xC00E6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00E16.asm:45 AND #$0003
    // Overlapping static entry reached from 0xC00E6C.
    case 0xC00E6E: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C00E16.asm:46 PHA
    case 0xC00E6F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:47 LDA @VIRTUAL04
    case 0xC00E70: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00E16.asm:48 AND #$0003
    case 0xC00E72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00E16.asm:48 AND #$0003
    // Overlapping static entry reached from 0xC00E72.
    case 0xC00E74: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:49 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC00E75: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:49 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC00E76: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:50 STA @VIRTUAL02
    case 0xC00E77: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:51 LDA @LOCAL08
    case 0xC00E79: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:52 LSR
    case 0xC00E7B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:53 LSR
    case 0xC00E7C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:54 AND #$000F
    case 0xC00E7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C00E16.asm:54 AND #$000F
    // Overlapping static entry reached from 0xC00E7D.
    case 0xC00E7F: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C00E16.asm:55 ASL
    case 0xC00E80: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:56 TAY
    case 0xC00E81: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:57 LDA (@LOCAL05),Y
    case 0xC00E82: cpu.execute_instruction<0xB1>(0x00001A, 2); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:58 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00E84: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:58 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00E85: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:58 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00E86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:58 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00E87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:59 CLC
    case 0xC00E88: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:60 ADC @VIRTUAL02
    case 0xC00E89: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:61 PLY
    case 0xC00E8B: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:62 STY @VIRTUAL02
    case 0xC00E8C: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:63 CLC
    case 0xC00E8E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:64 ADC @VIRTUAL02
    case 0xC00E8F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:65 TAY
    case 0xC00E91: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:66 STY @LOCAL04
    case 0xC00E92: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C00E16.asm:67 LDA @LOCAL08
    case 0xC00E94: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:68 AND #$003F
    case 0xC00E96: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C00E16.asm:68 AND #$003F
    // Overlapping static entry reached from 0xC00E96.
    case 0xC00E98: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C00E16.asm:69 TAX
    case 0xC00E99: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:70 STX @LOCAL03
    case 0xC00E9A: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C00E16.asm:71 LDA #0
    case 0xC00E9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C00E16.asm:71 LDA #0
    // Overlapping static entry reached from 0xC00E9C.
    case 0xC00E9E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C00E16.asm:72 STA @VIRTUAL02
    case 0xC00E9F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:73 STA @LOCAL02
    case 0xC00EA1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C00E16.asm:74 BRA @UNKNOWN5
    case 0xC00EA3: cpu.execute_instruction<0x80>(0x000071, 2); return true;
    // src/unknown/C0/C00E16.asm:76 LDA @LOCAL08
    case 0xC00EA5: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:77 AND #$0003
    case 0xC00EA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00E16.asm:77 AND #$0003
    // Overlapping static entry reached from 0xC00EA7.
    case 0xC00EA9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C00E16.asm:78 BNE @UNKNOWN2
    case 0xC00EAA: cpu.execute_instruction<0xD0>(0x00001E, 2); return true;
    // src/unknown/C0/C00E16.asm:79 LDA @VIRTUAL04
    case 0xC00EAC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00E16.asm:80 AND #$0003
    case 0xC00EAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00E16.asm:80 AND #$0003
    // Overlapping static entry reached from 0xC00EAE.
    case 0xC00EB0: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:81 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC00EB1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:81 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC00EB2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:82 STA @VIRTUAL02
    case 0xC00EB3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:83 LDA @LOCAL08
    case 0xC00EB5: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:84 LSR
    case 0xC00EB7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:85 LSR
    case 0xC00EB8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:86 AND #$000F
    case 0xC00EB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C00E16.asm:86 AND #$000F
    // Overlapping static entry reached from 0xC00EB9.
    case 0xC00EBB: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C00E16.asm:87 ASL
    case 0xC00EBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:88 TAY
    case 0xC00EBD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:89 LDA (@LOCAL05),Y
    case 0xC00EBE: cpu.execute_instruction<0xB1>(0x00001A, 2); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:90 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00EC0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:90 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00EC1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:90 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00EC2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:90 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00EC3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:91 CLC
    case 0xC00EC4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:92 ADC @VIRTUAL02
    case 0xC00EC5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:93 TAY
    case 0xC00EC7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:94 STY @LOCAL04
    case 0xC00EC8: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C00E16.asm:96 LDY @LOCAL04
    case 0xC00ECA: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C00E16.asm:97 TYA
    case 0xC00ECC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:98 ASL
    case 0xC00ECD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:99 TAX
    case 0xC00ECE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:100 LDA BUFFER + $8000,X
    case 0xC00ECF: cpu.execute_instruction<0xBF>(0x7F8000, 4); return true;
    // src/unknown/C0/C00E16.asm:101 STA @LOCAL01
    case 0xC00ED3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C00E16.asm:102 LDX @LOCAL03
    case 0xC00ED5: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C00E16.asm:103 TXA
    case 0xC00ED7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:104 ASL
    case 0xC00ED8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:105 TAY
    case 0xC00ED9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:106 LDA @LOCAL01
    case 0xC00EDA: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00E16.asm:107 STA (@LOCAL07),Y
    case 0xC00EDC: cpu.execute_instruction<0x91>(0x00001E, 2); return true;
    // src/unknown/C0/C00E16.asm:108 LDY @LOCAL04
    case 0xC00EDE: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C00E16.asm:109 INY
    case 0xC00EE0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:110 STY @LOCAL04
    case 0xC00EE1: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C00E16.asm:111 LDA @LOCAL01
    case 0xC00EE3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00E16.asm:112 AND #$03FF
    case 0xC00EE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/C0/C00E16.asm:112 AND #$03FF
    // Overlapping static entry reached from 0xC00EE5.
    case 0xC00EE7: cpu.execute_instruction<0x03>(0x0000C9, 2); return true;
    // src/unknown/C0/C00E16.asm:113 CMP #384
    case 0xC00EE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000180, 3); return true;
    // src/unknown/C0/C00E16.asm:113 CMP #384
    // Overlapping static entry reached from 0xC00EE7.
    case 0xC00EE9: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C0/C00E16.asm:113 CMP #384
    // Overlapping static entry reached from 0xC00EE8.
    case 0xC00EEA: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C00E16.asm:114 BCS @UNKNOWN3
    case 0xC00EEB: cpu.execute_instruction<0xB0>(0x000009, 2); return true;
    // src/unknown/C0/C00E16.asm:114 BCS @UNKNOWN3
    // Overlapping static entry reached from 0xC00EEA.
    case 0xC00EEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000A5, 2); else cpu.execute_instruction<0x09>(0x0012A5, 3); return true;
    // src/unknown/C0/C00E16.asm:115 LDA @LOCAL01
    case 0xC00EED: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00E16.asm:115 LDA @LOCAL01
    // Overlapping static entry reached from 0xC00EEC.
    case 0xC00EEE: cpu.execute_instruction<0x12>(0x000009, 2); return true;
    // src/unknown/C0/C00E16.asm:116 ORA #$2000
    case 0xC00EEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x002000, 3); return true;
    // src/unknown/C0/C00E16.asm:116 ORA #$2000
    // Overlapping static entry reached from 0xC00EEE.
    case 0xC00EF0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:116 ORA #$2000
    // Overlapping static entry reached from 0xC00EEF.
    case 0xC00EF1: cpu.execute_instruction<0x20>(0x001285, 3); return true;
    // src/unknown/C0/C00E16.asm:117 STA @LOCAL01
    case 0xC00EF2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C00E16.asm:118 BRA @UNKNOWN4
    case 0xC00EF4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:120 STZ @LOCAL01
    case 0xC00EF6: cpu.execute_instruction<0x64>(0x000012, 2); return true;
    // src/unknown/C0/C00E16.asm:122 TXA
    case 0xC00EF8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:123 ASL
    case 0xC00EF9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:124 TAY
    case 0xC00EFA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:125 LDA @LOCAL01
    case 0xC00EFB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00E16.asm:126 STA (@LOCAL06),Y
    case 0xC00EFD: cpu.execute_instruction<0x91>(0x00001C, 2); return true;
    // src/unknown/C0/C00E16.asm:127 INX
    case 0xC00EFF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:128 TXA
    case 0xC00F00: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:129 AND #$003F
    case 0xC00F01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C00E16.asm:129 AND #$003F
    // Overlapping static entry reached from 0xC00F01.
    case 0xC00F03: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C00E16.asm:130 TAX
    case 0xC00F04: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:131 STX @LOCAL03
    case 0xC00F05: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C00E16.asm:132 LDA @LOCAL08
    case 0xC00F07: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:133 INC
    case 0xC00F09: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:134 STA @LOCAL08
    case 0xC00F0A: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C00E16.asm:135 LDA @LOCAL02
    case 0xC00F0C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C00E16.asm:136 STA @VIRTUAL02
    case 0xC00F0E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:137 INC @VIRTUAL02
    case 0xC00F10: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:138 LDA @VIRTUAL02
    case 0xC00F12: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:139 STA @LOCAL02
    case 0xC00F14: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C00E16.asm:141 LDA @VIRTUAL02
    case 0xC00F16: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:142 CMP #MAP_RESOLUTION_WIDTH
    case 0xC00F18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000022, 2); else cpu.execute_instruction<0xC9>(0x000022, 3); return true;
    // src/unknown/C0/C00E16.asm:142 CMP #MAP_RESOLUTION_WIDTH
    // Overlapping static entry reached from 0xC00F18.
    case 0xC00F1A: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C00E16.asm:143 BCCL @UNKNOWN1
    case 0xC00F1B: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C00E16.asm:143 BCCL @UNKNOWN1
    case 0xC00F1D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C00E16.asm:143 BCCL @UNKNOWN1
    case 0xC00F1F: cpu.execute_instruction<0x4C>(0x000EA5, 3); return true;
    // src/unknown/C0/C00E16.asm:144 LDA @VIRTUAL04
    case 0xC00F22: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00E16.asm:145 AND #$001F
    case 0xC00F24: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C00E16.asm:145 AND #$001F
    // Overlapping static entry reached from 0xC00F24.
    case 0xC00F26: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:146 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00F27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:146 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00F28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:146 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00F29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:146 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00F2A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C00E16.asm:146 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00F2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:147 STA @VIRTUAL02
    case 0xC00F2C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00E16.asm:148 LDA @LOCAL07
    case 0xC00F2E: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F30: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00E16.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F32: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F33: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00E16.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F35: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F36: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00E16.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F38: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00E16.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC00F3A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F3C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F3E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F40: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F42: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F44: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC00F47.
    case 0xC00F49: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F4A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F4B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC00F4B.
    case 0xC00F4D: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F4E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC00F52: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC00F50.
    case 0xC00F53: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:151 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC00F53.
    case 0xC00F55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x001EA5, 3); return true;
    // src/unknown/C0/C00E16.asm:152 LDA @LOCAL07
    case 0xC00F56: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C00E16.asm:152 LDA @LOCAL07
    // Overlapping static entry reached from 0xC00F55.
    case 0xC00F57: cpu.execute_instruction<0x1E>(0x006918, 3); return true;
    // src/unknown/C0/C00E16.asm:153 CLC
    case 0xC00F58: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:154 ADC #$0040
    case 0xC00F59: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/unknown/C0/C00E16.asm:154 ADC #$0040
    // Overlapping static entry reached from 0xC00F57.
    case 0xC00F5A: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:154 ADC #$0040
    // Overlapping static entry reached from 0xC00F59.
    case 0xC00F5B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F5C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00E16.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F5E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F5F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00E16.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F61: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F62: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00E16.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F64: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00E16.asm:156 REP #PROC_FLAGS::ACCUM8
    case 0xC00F66: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F68: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F6A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F6C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F6E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F70: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F72: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00F73.
    case 0xC00F75: cpu.execute_instruction<0x3C>(0x00A2A8, 3); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F76: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F77: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00F75.
    case 0xC00F78: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00F77.
    case 0xC00F79: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F7A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00F7E: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00F7C.
    case 0xC00F7F: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00F7F.
    case 0xC00F81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x00B8AD, 3); return true;
    // src/unknown/C0/C00E16.asm:158 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC00F82: cpu.execute_instruction<0xAD>(0x00B6B8, 3); return true;
    // src/unknown/C0/C00E16.asm:158 LDA PHOTOGRAPH_MAP_LOADING_MODE
    // Overlapping static entry reached from 0xC00F81.
    case 0xC00F83: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:158 LDA PHOTOGRAPH_MAP_LOADING_MODE
    // Overlapping static entry reached from 0xC00F81.
    case 0xC00F84: cpu.execute_instruction<0xB6>(0x0000D0, 2); return true;
    // src/unknown/C0/C00E16.asm:159 BNE @UNKNOWN7
    case 0xC00F85: cpu.execute_instruction<0xD0>(0x000054, 2); return true;
    // src/unknown/C0/C00E16.asm:159 BNE @UNKNOWN7
    // Overlapping static entry reached from 0xC00F84.
    case 0xC00F86: cpu.execute_instruction<0x54>(0x001CA5, 3); return true;
    // src/unknown/C0/C00E16.asm:160 LDA @LOCAL06
    case 0xC00F87: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:161 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F89: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00E16.asm:161 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F8B: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:161 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F8C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00E16.asm:161 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F8E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:161 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F8F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00E16.asm:161 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00F91: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00E16.asm:162 REP #PROC_FLAGS::ACCUM8
    case 0xC00F93: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F95: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F97: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F99: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F9B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F9D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00F9F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00FA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC00FA0.
    case 0xC00FA2: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00FA3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00FA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC00FA4.
    case 0xC00FA6: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00FA7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00FA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC00FAB: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC00FA9.
    case 0xC00FAC: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:163 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC00FAC.
    case 0xC00FAE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x001CA5, 3); return true;
    // src/unknown/C0/C00E16.asm:164 LDA @LOCAL06
    case 0xC00FAF: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C00E16.asm:164 LDA @LOCAL06
    // Overlapping static entry reached from 0xC00FAE.
    case 0xC00FB0: cpu.execute_instruction<0x1C>(0x006918, 3); return true;
    // src/unknown/C0/C00E16.asm:165 CLC
    case 0xC00FB1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:166 ADC #$0040
    case 0xC00FB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/unknown/C0/C00E16.asm:166 ADC #$0040
    // Overlapping static entry reached from 0xC00FB0.
    case 0xC00FB3: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C00E16.asm:166 ADC #$0040
    // Overlapping static entry reached from 0xC00FB2.
    case 0xC00FB4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:167 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00FB5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00E16.asm:167 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00FB7: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:167 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00FB8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00E16.asm:167 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00FBA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:167 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00FBB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00E16.asm:167 PROMOTENEARPTRA @VIRTUAL06
    case 0xC00FBD: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00E16.asm:168 REP #PROC_FLAGS::ACCUM8
    case 0xC00FBF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FC1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FC3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FC5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FC7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FC9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FCB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00FCC.
    case 0xC00FCE: cpu.execute_instruction<0x5C>(0x40A2A8, 4); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FCF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00FD0.
    case 0xC00FD2: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FD3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC00FD7: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00FD5.
    case 0xC00FD8: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00E16.asm:169 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, $40, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC00FD8.
    case 0xC00FDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C00E16.asm:171 END_C_FUNCTION
    case 0xC00FDB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C00E16.asm:171 END_C_FUNCTION
    case 0xC00FDC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C00FCB.asm (unresolved).
bool execute_unresolved_c0_c00fcb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C00FCB.asm:3 BEGIN_C_FUNCTION
    case 0xC00FDD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C00FCB.asm:16 END_STACK_VARS
    case 0xC00FDF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C00FCB.asm:16 END_STACK_VARS
    case 0xC00FE0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C00FCB.asm:16 END_STACK_VARS
    case 0xC00FE1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C00FCB.asm:16 END_STACK_VARS
    case 0xC00FE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C00FCB.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC00FE2.
    case 0xC00FE4: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C00FCB.asm:16 END_STACK_VARS
    case 0xC00FE5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C00FCB.asm:16 END_STACK_VARS
    case 0xC00FE6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:17 TXY
    case 0xC00FE7: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:18 STY @LOCAL08
    case 0xC00FE8: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:19 STA @VIRTUAL04
    case 0xC00FEA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C00FCB.asm:20 LDA DEBUG
    case 0xC00FEC: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/unknown/C0/C00FCB.asm:21 BEQ @UNKNOWN0
    case 0xC00FEF: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C00FCB.asm:22 TYX
    case 0xC00FF1: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:23 LDA @VIRTUAL04
    case 0xC00FF2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00FCB.asm:24 JSL UNKNOWN_EFE07C
    case 0xC00FF4: cpu.execute_instruction<0x22>(0xEFC996, 4); return true;
    // src/unknown/C0/C00FCB.asm:26 LDA #128
    case 0xC00FF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/unknown/C0/C00FCB.asm:26 LDA #128
    // Overlapping static entry reached from 0xC00FF8.
    case 0xC00FFA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C00FCB.asm:27 JSL SBRK
    case 0xC00FFB: cpu.execute_instruction<0x22>(0xC086D7, 4); return true;
    // src/unknown/C0/C00FCB.asm:28 STA @LOCAL07
    case 0xC00FFF: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C00FCB.asm:29 CLC
    case 0xC01001: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:30 ADC #64
    case 0xC01002: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/unknown/C0/C00FCB.asm:30 ADC #64
    // Overlapping static entry reached from 0xC01002.
    case 0xC01004: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C00FCB.asm:31 STA @LOCAL06
    case 0xC01005: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C00FCB.asm:32 LDY @LOCAL08
    case 0xC01007: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:33 TYA
    case 0xC01009: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:34 DEC
    case 0xC0100A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:35 STA @LOCAL08
    case 0xC0100B: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:36 LDA @VIRTUAL04
    case 0xC0100D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00FCB.asm:37 LSR
    case 0xC0100F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:38 LSR
    case 0xC01010: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:39 AND #$000F
    case 0xC01011: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C00FCB.asm:39 AND #$000F
    // Overlapping static entry reached from 0xC01011.
    case 0xC01013: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C00FCB.asm:40 ASL
    case 0xC01014: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:41 CLC
    case 0xC01015: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:42 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC01016: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x00F000, 3); return true;
    // src/unknown/C0/C00FCB.asm:42 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC01016.
    case 0xC01018: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/unknown/C0/C00FCB.asm:43 STA @LOCAL05
    case 0xC01019: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C00FCB.asm:43 STA @LOCAL05
    // Overlapping static entry reached from 0xC01018.
    case 0xC0101A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:44 LDA @VIRTUAL04
    case 0xC0101B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00FCB.asm:45 AND #$0003
    case 0xC0101D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00FCB.asm:45 AND #$0003
    // Overlapping static entry reached from 0xC0101D.
    case 0xC0101F: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C00FCB.asm:46 PHA
    case 0xC01020: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:47 LDA @LOCAL08
    case 0xC01021: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:48 AND #$0003
    case 0xC01023: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00FCB.asm:48 AND #$0003
    // Overlapping static entry reached from 0xC01023.
    case 0xC01025: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:49 OPTIMIZED_MULT @VIRTUAL02, 4
    case 0xC01026: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:49 OPTIMIZED_MULT @VIRTUAL02, 4
    case 0xC01027: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:50 STA @VIRTUAL02
    case 0xC01028: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:51 LDA @LOCAL08
    case 0xC0102A: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:52 LSR
    case 0xC0102C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:53 LSR
    case 0xC0102D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:54 AND #$000F
    case 0xC0102E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C00FCB.asm:54 AND #$000F
    // Overlapping static entry reached from 0xC0102E.
    case 0xC01030: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:55 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01031: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:55 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01032: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:55 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01033: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:55 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01034: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:55 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01035: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:56 TAY
    case 0xC01036: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:57 LDA (@LOCAL05),Y
    case 0xC01037: cpu.execute_instruction<0xB1>(0x00001A, 2); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:58 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC01039: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:58 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC0103A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:58 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC0103B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:58 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC0103C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:59 CLC
    case 0xC0103D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:60 ADC @VIRTUAL02
    case 0xC0103E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:61 PLY
    case 0xC01040: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:62 STY @VIRTUAL02
    case 0xC01041: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:63 CLC
    case 0xC01043: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:64 ADC @VIRTUAL02
    case 0xC01044: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:65 TAY
    case 0xC01046: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:66 STY @LOCAL04
    case 0xC01047: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C00FCB.asm:67 LDA @LOCAL08
    case 0xC01049: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:68 AND #$001F
    case 0xC0104B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C00FCB.asm:68 AND #$001F
    // Overlapping static entry reached from 0xC0104B.
    case 0xC0104D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C00FCB.asm:69 TAX
    case 0xC0104E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:70 STX @LOCAL03
    case 0xC0104F: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C00FCB.asm:71 LDA #0
    case 0xC01051: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C00FCB.asm:71 LDA #0
    // Overlapping static entry reached from 0xC01051.
    case 0xC01053: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C00FCB.asm:72 STA @VIRTUAL02
    case 0xC01054: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:73 STA @LOCAL02
    case 0xC01056: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C00FCB.asm:74 BRA @UNKNOWN5
    case 0xC01058: cpu.execute_instruction<0x80>(0x000074, 2); return true;
    // src/unknown/C0/C00FCB.asm:76 LDA @LOCAL08
    case 0xC0105A: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:77 AND #$0003
    case 0xC0105C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00FCB.asm:77 AND #$0003
    // Overlapping static entry reached from 0xC0105C.
    case 0xC0105E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C00FCB.asm:78 BNE @UNKNOWN2
    case 0xC0105F: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:79 LDA @VIRTUAL04
    case 0xC01061: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00FCB.asm:80 AND #$0003
    case 0xC01063: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C00FCB.asm:80 AND #$0003
    // Overlapping static entry reached from 0xC01063.
    case 0xC01065: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C00FCB.asm:81 STA @VIRTUAL02
    case 0xC01066: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:82 LDA @LOCAL08
    case 0xC01068: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:83 LSR
    case 0xC0106A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:84 LSR
    case 0xC0106B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:85 AND #$000F
    case 0xC0106C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C00FCB.asm:85 AND #$000F
    // Overlapping static entry reached from 0xC0106C.
    case 0xC0106E: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:86 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC0106F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:86 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01070: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:86 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01071: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:86 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01072: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:86 OPTIMIZED_MULT @VIRTUAL02, 32
    case 0xC01073: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:87 TAY
    case 0xC01074: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:88 LDA (@LOCAL05),Y
    case 0xC01075: cpu.execute_instruction<0xB1>(0x00001A, 2); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:89 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC01077: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:89 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC01078: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:89 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC01079: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C0/C00FCB.asm:89 OPTIMIZED_MULT @VIRTUAL02, 16
    case 0xC0107A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:90 CLC
    case 0xC0107B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:91 ADC @VIRTUAL02
    case 0xC0107C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:92 TAY
    case 0xC0107E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:93 STY @LOCAL04
    case 0xC0107F: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C00FCB.asm:95 TYA
    case 0xC01081: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:96 ASL
    case 0xC01082: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:97 TAX
    case 0xC01083: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:98 LDA BUFFER + $8000,X
    case 0xC01084: cpu.execute_instruction<0xBF>(0x7F8000, 4); return true;
    // src/unknown/C0/C00FCB.asm:99 STA @LOCAL01
    case 0xC01088: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C00FCB.asm:100 LDX @LOCAL03
    case 0xC0108A: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C00FCB.asm:101 TXA
    case 0xC0108C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:102 ASL
    case 0xC0108D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:103 TAY
    case 0xC0108E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:104 LDA @LOCAL01
    case 0xC0108F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00FCB.asm:105 STA (@LOCAL07),Y
    case 0xC01091: cpu.execute_instruction<0x91>(0x00001E, 2); return true;
    // src/unknown/C0/C00FCB.asm:106 LDA @LOCAL01
    case 0xC01093: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00FCB.asm:107 AND #$03FF
    case 0xC01095: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/C0/C00FCB.asm:107 AND #$03FF
    // Overlapping static entry reached from 0xC01095.
    case 0xC01097: cpu.execute_instruction<0x03>(0x0000C9, 2); return true;
    // src/unknown/C0/C00FCB.asm:108 CMP #384
    case 0xC01098: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000180, 3); return true;
    // src/unknown/C0/C00FCB.asm:108 CMP #384
    // Overlapping static entry reached from 0xC01097.
    case 0xC01099: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C0/C00FCB.asm:108 CMP #384
    // Overlapping static entry reached from 0xC01098.
    case 0xC0109A: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C00FCB.asm:109 BCS @UNKNOWN3
    case 0xC0109B: cpu.execute_instruction<0xB0>(0x000009, 2); return true;
    // src/unknown/C0/C00FCB.asm:109 BCS @UNKNOWN3
    // Overlapping static entry reached from 0xC0109A.
    case 0xC0109C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000A5, 2); else cpu.execute_instruction<0x09>(0x0012A5, 3); return true;
    // src/unknown/C0/C00FCB.asm:110 LDA @LOCAL01
    case 0xC0109D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00FCB.asm:110 LDA @LOCAL01
    // Overlapping static entry reached from 0xC0109C.
    case 0xC0109E: cpu.execute_instruction<0x12>(0x000009, 2); return true;
    // src/unknown/C0/C00FCB.asm:111 ORA #$2000
    case 0xC0109F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x002000, 3); return true;
    // src/unknown/C0/C00FCB.asm:111 ORA #$2000
    // Overlapping static entry reached from 0xC0109E.
    case 0xC010A0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:111 ORA #$2000
    // Overlapping static entry reached from 0xC0109F.
    case 0xC010A1: cpu.execute_instruction<0x20>(0x001285, 3); return true;
    // src/unknown/C0/C00FCB.asm:112 STA @LOCAL01
    case 0xC010A2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C00FCB.asm:113 BRA @UNKNOWN4
    case 0xC010A4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:115 STZ @LOCAL01
    case 0xC010A6: cpu.execute_instruction<0x64>(0x000012, 2); return true;
    // src/unknown/C0/C00FCB.asm:117 TXA
    case 0xC010A8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:118 ASL
    case 0xC010A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:119 TAY
    case 0xC010AA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:120 LDA @LOCAL01
    case 0xC010AB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C00FCB.asm:121 STA (@LOCAL06),Y
    case 0xC010AD: cpu.execute_instruction<0x91>(0x00001C, 2); return true;
    // src/unknown/C0/C00FCB.asm:122 LDY @LOCAL04
    case 0xC010AF: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C00FCB.asm:123 INY
    case 0xC010B1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:124 INY
    case 0xC010B2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:125 INY
    case 0xC010B3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:126 INY
    case 0xC010B4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:127 STY @LOCAL04
    case 0xC010B5: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C00FCB.asm:128 INX
    case 0xC010B7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:129 TXA
    case 0xC010B8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:130 AND #$001F
    case 0xC010B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C00FCB.asm:130 AND #$001F
    // Overlapping static entry reached from 0xC010B9.
    case 0xC010BB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C00FCB.asm:131 TAX
    case 0xC010BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:132 STX @LOCAL03
    case 0xC010BD: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C00FCB.asm:133 LDA @LOCAL08
    case 0xC010BF: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:134 INC
    case 0xC010C1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C00FCB.asm:135 STA @LOCAL08
    case 0xC010C2: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C00FCB.asm:136 LDA @LOCAL02
    case 0xC010C4: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C00FCB.asm:137 STA @VIRTUAL02
    case 0xC010C6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:138 INC @VIRTUAL02
    case 0xC010C8: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:139 LDA @VIRTUAL02
    case 0xC010CA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:140 STA @LOCAL02
    case 0xC010CC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C00FCB.asm:142 LDA @VIRTUAL02
    case 0xC010CE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:143 CMP #MAP_RESOLUTION_HEIGHT
    case 0xC010D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C00FCB.asm:143 CMP #MAP_RESOLUTION_HEIGHT
    // Overlapping static entry reached from 0xC010D0.
    case 0xC010D2: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C00FCB.asm:144 BCCL @UNKNOWN1
    case 0xC010D3: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C00FCB.asm:144 BCCL @UNKNOWN1
    case 0xC010D5: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C00FCB.asm:144 BCCL @UNKNOWN1
    case 0xC010D7: cpu.execute_instruction<0x4C>(0x00105A, 3); return true;
    // src/unknown/C0/C00FCB.asm:145 LDA @VIRTUAL04
    case 0xC010DA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C00FCB.asm:146 AND #$003F
    case 0xC010DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C00FCB.asm:146 AND #$003F
    // Overlapping static entry reached from 0xC010DC.
    case 0xC010DE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C00FCB.asm:147 STA @VIRTUAL02
    case 0xC010DF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:148 CMP #31
    case 0xC010E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/unknown/C0/C00FCB.asm:148 CMP #31
    // Overlapping static entry reached from 0xC010E1.
    case 0xC010E3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C00FCB.asm:149 BGT @UNKNOWN8
    case 0xC010E4: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C00FCB.asm:149 BGT @UNKNOWN8
    case 0xC010E6: cpu.execute_instruction<0xB0>(0x000052, 2); return true;
    // src/unknown/C0/C00FCB.asm:150 LDA @LOCAL07
    case 0xC010E8: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:151 PROMOTENEARPTRA @VIRTUAL06
    case 0xC010EA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00FCB.asm:151 PROMOTENEARPTRA @VIRTUAL06
    case 0xC010EC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:151 PROMOTENEARPTRA @VIRTUAL06
    case 0xC010ED: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00FCB.asm:151 PROMOTENEARPTRA @VIRTUAL06
    case 0xC010EF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:151 PROMOTENEARPTRA @VIRTUAL06
    case 0xC010F0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00FCB.asm:151 PROMOTENEARPTRA @VIRTUAL06
    case 0xC010F2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00FCB.asm:152 REP #PROC_FLAGS::ACCUM8
    case 0xC010F4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010F6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010F8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010FA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010FC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC010FE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01100: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01101: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC01101.
    case 0xC01103: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01104: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01105: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC01105.
    case 0xC01107: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01108: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC0110A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC0110C: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC0110A.
    case 0xC0110D: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:153 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC0110D.
    case 0xC0110F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x001CA5, 3); return true;
    // src/unknown/C0/C00FCB.asm:154 LDA @LOCAL06
    case 0xC01110: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C00FCB.asm:154 LDA @LOCAL06
    // Overlapping static entry reached from 0xC0110F.
    case 0xC01111: cpu.execute_instruction<0x1C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01112: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00FCB.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01114: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01115: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00FCB.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01117: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01118: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00FCB.asm:155 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0111A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00FCB.asm:156 REP #PROC_FLAGS::ACCUM8
    case 0xC0111C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0111E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01120: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01122: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01124: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01126: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01128: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01129: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC01129.
    case 0xC0112B: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0112C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0112D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC0112D.
    case 0xC0112F: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01130: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01132: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC01134: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC01132.
    case 0xC01135: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:157 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC01135.
    case 0xC01137: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000080, 2); else cpu.execute_instruction<0xC0>(0x005780, 3); return true;
    // src/unknown/C0/C00FCB.asm:158 BRA @UNKNOWN9
    case 0xC01138: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/unknown/C0/C00FCB.asm:158 BRA @UNKNOWN9
    // Overlapping static entry reached from 0xC01137.
    case 0xC01139: cpu.execute_instruction<0x57>(0x0000A5, 2); return true;
    // src/unknown/C0/C00FCB.asm:160 LDA @VIRTUAL02
    case 0xC0113A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:160 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC01139.
    case 0xC0113B: cpu.execute_instruction<0x02>(0x000029, 2); return true;
    // src/unknown/C0/C00FCB.asm:161 AND #$001F
    case 0xC0113C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C00FCB.asm:161 AND #$001F
    // Overlapping static entry reached from 0xC0113C.
    case 0xC0113E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C00FCB.asm:162 STA @VIRTUAL02
    case 0xC0113F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C00FCB.asm:163 LDA @LOCAL07
    case 0xC01141: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:164 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01143: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00FCB.asm:164 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01145: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:164 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01146: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00FCB.asm:164 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01148: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:164 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01149: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00FCB.asm:164 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0114B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00FCB.asm:165 REP #PROC_FLAGS::ACCUM8
    case 0xC0114D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0114F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01151: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01153: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01155: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01157: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01159: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0115A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC0115A.
    case 0xC0115C: cpu.execute_instruction<0x3C>(0x00A2A8, 3); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0115D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0115E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC0115C.
    case 0xC0115F: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC0115E.
    case 0xC01160: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01161: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01163: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01165: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC01163.
    case 0xC01166: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:166 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC01166.
    case 0xC01168: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x001CA5, 3); return true;
    // src/unknown/C0/C00FCB.asm:167 LDA @LOCAL06
    case 0xC01169: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C00FCB.asm:167 LDA @LOCAL06
    // Overlapping static entry reached from 0xC01168.
    case 0xC0116A: cpu.execute_instruction<0x1C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:168 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0116B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C00FCB.asm:168 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0116D: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:168 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0116E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C00FCB.asm:168 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01170: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:168 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01171: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C00FCB.asm:168 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01173: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C00FCB.asm:169 REP #PROC_FLAGS::ACCUM8
    case 0xC01175: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01177: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01179: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0117B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0117D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0117F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01181: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01182: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC01182.
    case 0xC01184: cpu.execute_instruction<0x5C>(0x40A2A8, 4); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01185: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01186: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC01186.
    case 0xC01188: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC01189: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0118B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC0118D: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC0118B.
    case 0xC0118E: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C00FCB.asm:170 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC0118E.
    case 0xC01190: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C00FCB.asm:172 END_C_FUNCTION
    case 0xC01191: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C00FCB.asm:172 END_C_FUNCTION
    case 0xC01192: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01181.asm (unresolved).
bool execute_unresolved_c0_c01181_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01181.asm:3 BEGIN_C_FUNCTION
    case 0xC01193: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C01181.asm:9 END_STACK_VARS
    case 0xC01195: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C01181.asm:9 END_STACK_VARS
    case 0xC01196: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C01181.asm:9 END_STACK_VARS
    case 0xC01197: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01181.asm:9 END_STACK_VARS
    case 0xC01198: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01181.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC01198.
    case 0xC0119A: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C01181.asm:9 END_STACK_VARS
    case 0xC0119B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C01181.asm:9 END_STACK_VARS
    case 0xC0119C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C01181.asm:10 STX @VIRTUAL02
    case 0xC0119D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C01181.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC0119A.
    case 0xC0119E: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C0/C01181.asm:11 LDA #64
    case 0xC0119F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C0/C01181.asm:11 LDA #64
    // Overlapping static entry reached from 0xC0119F.
    case 0xC011A1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C01181.asm:12 JSL SBRK
    case 0xC011A2: cpu.execute_instruction<0x22>(0xC086D7, 4); return true;
    // src/unknown/C0/C01181.asm:13 TAY
    case 0xC011A6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C01181.asm:14 STY @LOCAL01
    case 0xC011A7: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C01181.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC011A9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/C0/C01181.asm:16 STZ_BADOPT @LOCAL00
    case 0xC011AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:16 STZ_BADOPT @LOCAL00
    case 0xC011AD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:16 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC011AB.
    case 0xC011AE: cpu.execute_instruction<0x0E>(0x0040A2, 3); return true;
    // src/unknown/C0/C01181.asm:17 LDX #64
    case 0xC011AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/unknown/C0/C01181.asm:17 LDX #64
    // Overlapping static entry reached from 0xC011AF.
    case 0xC011B1: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C0/C01181.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC011B2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01181.asm:19 TYA
    case 0xC011B4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01181.asm:20 JSL MEMSET16
    case 0xC011B5: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C0/C01181.asm:21 LDA @VIRTUAL02
    case 0xC011B9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C01181.asm:22 AND #$001F
    case 0xC011BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C01181.asm:22 AND #$001F
    // Overlapping static entry reached from 0xC011BB.
    case 0xC011BD: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C01181.asm:23 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC011BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C01181.asm:23 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC011BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C01181.asm:23 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC011C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C01181.asm:23 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC011C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C01181.asm:23 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC011C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C01181.asm:24 STA @VIRTUAL02
    case 0xC011C3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01181.asm:25 LDY @LOCAL01
    case 0xC011C5: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C01181.asm:26 TYA
    case 0xC011C7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC011C8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C01181.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC011CA: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C01181.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC011CB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C01181.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC011CD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC011CE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C01181.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC011D0: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C01181.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC011D2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011D4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011D6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011D8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011DA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011DC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011DE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC011DF.
    case 0xC011E1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011E2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC011E3.
    case 0xC011E5: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011E6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    case 0xC011EA: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC011E8.
    case 0xC011EB: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 0
    // Overlapping static entry reached from 0xC011EB.
    case 0xC011ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011EE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC011ED.
    case 0xC011EF: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011F0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC011EF.
    case 0xC011F1: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011F2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011F4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011F6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011F8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC011F9.
    case 0xC011FB: cpu.execute_instruction<0x3C>(0x00A2A8, 3); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011FC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC011FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC011FB.
    case 0xC011FE: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC011FD.
    case 0xC011FF: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01200: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01202: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01204: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC01202.
    case 0xC01205: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC01205.
    case 0xC01207: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC01208: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC01207.
    case 0xC01209: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC0120A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC01209.
    case 0xC0120B: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC0120C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC0120E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC01210: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC01212: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC01213: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC01213.
    case 0xC01215: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC01216: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC01217: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC01217.
    case 0xC01219: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC0121A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC0121C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    case 0xC0121E: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC0121C.
    case 0xC0121F: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:31 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 0
    // Overlapping static entry reached from 0xC0121F.
    case 0xC01221: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01222: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC01221.
    case 0xC01223: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01224: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC01223.
    case 0xC01225: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01226: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01228: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC0122A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC0122C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC0122D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC0122D.
    case 0xC0122F: cpu.execute_instruction<0x5C>(0x40A2A8, 4); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01230: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01231: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC01231.
    case 0xC01233: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01234: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01236: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    case 0xC01238: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC01236.
    case 0xC01239: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C01181.asm:32 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 0
    // Overlapping static entry reached from 0xC01239.
    case 0xC0123B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C01181.asm:33 END_C_FUNCTION
    case 0xC0123C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C01181.asm:33 END_C_FUNCTION
    case 0xC0123D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0122A.asm (unresolved).
bool execute_unresolved_c0_c0122a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0122A.asm:3 BEGIN_C_FUNCTION
    case 0xC0123E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0122A.asm:8 END_STACK_VARS
    case 0xC01240: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0122A.asm:8 END_STACK_VARS
    case 0xC01241: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0122A.asm:8 END_STACK_VARS
    case 0xC01242: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0122A.asm:8 END_STACK_VARS
    case 0xC01243: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0122A.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC01243.
    case 0xC01245: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0122A.asm:8 END_STACK_VARS
    case 0xC01246: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0122A.asm:8 END_STACK_VARS
    case 0xC01247: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0122A.asm:9 STA @VIRTUAL02
    case 0xC01248: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0122A.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC01245.
    case 0xC01249: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C0/C0122A.asm:10 LDA #64
    case 0xC0124A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C0/C0122A.asm:10 LDA #64
    // Overlapping static entry reached from 0xC0124A.
    case 0xC0124C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0122A.asm:11 JSL SBRK
    case 0xC0124D: cpu.execute_instruction<0x22>(0xC086D7, 4); return true;
    // src/unknown/C0/C0122A.asm:12 TAY
    case 0xC01251: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0122A.asm:13 STY @LOCAL01
    case 0xC01252: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C0122A.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC01254: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/C0/C0122A.asm:15 STZ_BADOPT @LOCAL00
    case 0xC01256: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:15 STZ_BADOPT @LOCAL00
    case 0xC01258: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:15 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC01256.
    case 0xC01259: cpu.execute_instruction<0x0E>(0x0040A2, 3); return true;
    // src/unknown/C0/C0122A.asm:16 LDX #64
    case 0xC0125A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/unknown/C0/C0122A.asm:16 LDX #64
    // Overlapping static entry reached from 0xC0125A.
    case 0xC0125C: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C0/C0122A.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC0125D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0122A.asm:18 TYA
    case 0xC0125F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0122A.asm:19 JSL MEMSET16
    case 0xC01260: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C0/C0122A.asm:20 LDA @VIRTUAL02
    case 0xC01264: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0122A.asm:21 AND #$003F
    case 0xC01266: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0122A.asm:21 AND #$003F
    // Overlapping static entry reached from 0xC01266.
    case 0xC01268: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0122A.asm:22 STA @VIRTUAL02
    case 0xC01269: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0122A.asm:23 CMP #31
    case 0xC0126B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/unknown/C0/C0122A.asm:23 CMP #31
    // Overlapping static entry reached from 0xC0126B.
    case 0xC0126D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C0122A.asm:24 BGT @UNKNOWN1
    case 0xC0126E: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0122A.asm:24 BGT @UNKNOWN1
    case 0xC01270: cpu.execute_instruction<0xB0>(0x000045, 2); return true;
    // src/unknown/C0/C0122A.asm:25 LDY @LOCAL01
    case 0xC01272: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0122A.asm:26 TYA
    case 0xC01274: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01275: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C0122A.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01277: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0122A.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC01278: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C0122A.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0127A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0127B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0122A.asm:27 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0127D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C0122A.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC0127F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01281: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01283: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01285: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01287: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01289: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC0128B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC0128C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC0128C.
    case 0xC0128E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC0128F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01290: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC01290.
    case 0xC01292: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01293: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01295: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    case 0xC01297: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC01295.
    case 0xC01298: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:29 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP, 27
    // Overlapping static entry reached from 0xC01298.
    case 0xC0129A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0129B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC0129A.
    case 0xC0129C: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0129D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC0129C.
    case 0xC0129E: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC0129F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC012A1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC012A3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC012A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC012A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005800, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC012A6.
    case 0xC012A8: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC012A9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC012AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC012AA.
    case 0xC012AC: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC012AD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC012AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC087EC.
    case 0xC012B0: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    case 0xC012B1: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC012AF.
    case 0xC012B2: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:30 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP, 27
    // Overlapping static entry reached from 0xC012B2.
    case 0xC012B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000080, 2); else cpu.execute_instruction<0xC0>(0x004A80, 3); return true;
    // src/unknown/C0/C0122A.asm:31 BRA @UNKNOWN2
    case 0xC012B5: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // src/unknown/C0/C0122A.asm:31 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC012B4.
    case 0xC012B6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0122A.asm:33 LDA @VIRTUAL02
    case 0xC012B7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0122A.asm:34 AND #$001F
    case 0xC012B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C0122A.asm:34 AND #$001F
    // Overlapping static entry reached from 0xC012B9.
    case 0xC012BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0122A.asm:35 STA @VIRTUAL02
    case 0xC012BC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0122A.asm:36 LDY @LOCAL01
    case 0xC012BE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0122A.asm:37 TYA
    case 0xC012C0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:38 PROMOTENEARPTRA @VIRTUAL06
    case 0xC012C1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C0122A.asm:38 PROMOTENEARPTRA @VIRTUAL06
    case 0xC012C3: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0122A.asm:38 PROMOTENEARPTRA @VIRTUAL06
    case 0xC012C4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C0122A.asm:38 PROMOTENEARPTRA @VIRTUAL06
    case 0xC012C6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:38 PROMOTENEARPTRA @VIRTUAL06
    case 0xC012C7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0122A.asm:38 PROMOTENEARPTRA @VIRTUAL06
    case 0xC012C9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C0122A.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC012CB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012CD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012CF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012D1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012D3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012D5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x003C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012D8.
    case 0xC012DA: cpu.execute_instruction<0x3C>(0x00A2A8, 3); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012DB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012DA.
    case 0xC012DD: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012DC.
    case 0xC012DE: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012DF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012E3: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012E1.
    case 0xC012E4: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:40 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012E4.
    case 0xC012E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012E7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012E6.
    case 0xC012E8: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012E9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012E8.
    case 0xC012EA: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012EB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012ED: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012EF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x005C00, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012F2.
    case 0xC012F4: cpu.execute_instruction<0x5C>(0x40A2A8, 4); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012F5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012F6.
    case 0xC012F8: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012F9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    case 0xC012FD: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012FB.
    case 0xC012FE: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0122A.asm:41 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL02, 64, VRAM::OVERWORLD_LAYER_2_TILEMAP + TILEMAP_SIZE, 27
    // Overlapping static entry reached from 0xC012FE.
    case 0xC01300: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0122A.asm:43 END_C_FUNCTION
    case 0xC01301: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0122A.asm:43 END_C_FUNCTION
    case 0xC01302: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01731.asm (unresolved).
bool execute_unresolved_c0_c01731_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01731.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01747: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C01731.asm:9 END_STACK_VARS
    case 0xC01749: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C01731.asm:9 END_STACK_VARS
    case 0xC0174A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C01731.asm:9 END_STACK_VARS
    case 0xC0174B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01731.asm:9 END_STACK_VARS
    case 0xC0174C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01731.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0174C.
    case 0xC0174E: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C01731.asm:9 END_STACK_VARS
    case 0xC0174F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C01731.asm:9 END_STACK_VARS
    case 0xC01750: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:10 STX @VIRTUAL04
    case 0xC01751: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C01731.asm:10 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC0174E.
    case 0xC01752: cpu.execute_instruction<0x04>(0x0000A8, 2); return true;
    // src/unknown/C0/C01731.asm:11 TAY
    case 0xC01753: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:12 STY @LOCAL01
    case 0xC01754: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C01731.asm:13 STY BG2_X_POS
    case 0xC01756: cpu.execute_instruction<0x8C>(0x000035, 3); return true;
    // src/unknown/C0/C01731.asm:14 STY BG1_X_POS
    case 0xC01759: cpu.execute_instruction<0x8C>(0x000031, 3); return true;
    // src/unknown/C0/C01731.asm:14 STY BG1_X_POS
    // Overlapping static entry reached from 0xC01769.
    case 0xC0175B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C01731.asm:15 LDA @VIRTUAL04
    case 0xC0175C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01731.asm:16 STA BG2_Y_POS
    case 0xC0175E: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/unknown/C0/C01731.asm:17 LDA @VIRTUAL04
    case 0xC01761: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01731.asm:18 STA BG1_Y_POS
    case 0xC01763: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/unknown/C0/C01731.asm:19 TYA
    case 0xC01766: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:20 AND #$8000
    case 0xC01767: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C01731.asm:20 AND #$8000
    // Overlapping static entry reached from 0xC01767.
    case 0xC01769: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C01731.asm:21 BEQ @UNKNOWN0
    case 0xC0176A: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C0/C01731.asm:22 TYA
    case 0xC0176C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:23 LSR
    case 0xC0176D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:24 LSR
    case 0xC0176E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:25 LSR
    case 0xC0176F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:26 ORA #$E000
    case 0xC01770: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/unknown/C0/C01731.asm:26 ORA #$E000
    // Overlapping static entry reached from 0xC01770.
    case 0xC01772: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x000E85, 3); return true;
    // src/unknown/C0/C01731.asm:27 STA @LOCAL00
    case 0xC01773: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C01731.asm:27 STA @LOCAL00
    // Overlapping static entry reached from 0xC01772.
    case 0xC01774: cpu.execute_instruction<0x0E>(0x000680, 3); return true;
    // src/unknown/C0/C01731.asm:28 BRA @UNKNOWN1
    case 0xC01775: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C01731.asm:30 TYA
    case 0xC01777: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:31 LSR
    case 0xC01778: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:32 LSR
    case 0xC01779: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:33 LSR
    case 0xC0177A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:34 STA @LOCAL00
    case 0xC0177B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C01731.asm:36 LDA @VIRTUAL04
    case 0xC0177D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01731.asm:37 AND #$8000
    case 0xC0177F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C01731.asm:37 AND #$8000
    // Overlapping static entry reached from 0xC0177F.
    case 0xC01781: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C01731.asm:38 BEQ @UNKNOWN2
    case 0xC01782: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C01731.asm:39 LDA @VIRTUAL04
    case 0xC01784: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01731.asm:40 LSR
    case 0xC01786: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:41 LSR
    case 0xC01787: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:42 LSR
    case 0xC01788: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:43 ORA #$E000
    case 0xC01789: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/unknown/C0/C01731.asm:43 ORA #$E000
    // Overlapping static entry reached from 0xC01789.
    case 0xC0178B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x000285, 3); return true;
    // src/unknown/C0/C01731.asm:44 STA @VIRTUAL02
    case 0xC0178C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01731.asm:44 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0178B.
    case 0xC0178D: cpu.execute_instruction<0x02>(0x000080, 2); return true;
    // src/unknown/C0/C01731.asm:45 BRA @UNKNOWN5
    case 0xC0178E: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C0/C01731.asm:47 LDA @VIRTUAL04
    case 0xC01790: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01731.asm:48 LSR
    case 0xC01792: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:49 LSR
    case 0xC01793: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:50 LSR
    case 0xC01794: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:51 STA @VIRTUAL02
    case 0xC01795: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01731.asm:52 BRA @UNKNOWN5
    case 0xC01797: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C0/C01731.asm:54 AND #$8000
    case 0xC01799: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C01731.asm:54 AND #$8000
    // Overlapping static entry reached from 0xC01799.
    case 0xC0179B: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C01731.asm:55 BEQ @UNKNOWN4
    case 0xC0179C: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C0/C01731.asm:56 LDA SCREEN_LEFT_X
    case 0xC0179E: cpu.execute_instruction<0xAD>(0x0046FA, 3); return true;
    // src/unknown/C0/C01731.asm:57 INC
    case 0xC017A1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:58 STA SCREEN_LEFT_X
    case 0xC017A2: cpu.execute_instruction<0x8D>(0x0046FA, 3); return true;
    // src/unknown/C0/C01731.asm:59 LDX @VIRTUAL02
    case 0xC017A5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C01731.asm:60 CLC
    case 0xC017A7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:61 ADC #32
    case 0xC017A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/unknown/C0/C01731.asm:61 ADC #32
    // Overlapping static entry reached from 0xC0EF1F.
    case 0xC017A9: cpu.execute_instruction<0x20>(0x002000, 3); return true;
    // src/unknown/C0/C01731.asm:61 ADC #32
    // Overlapping static entry reached from 0xC017A8.
    case 0xC017AA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C01731.asm:62 JSR UNKNOWN_C0122A
    case 0xC017AB: cpu.execute_instruction<0x20>(0x00123E, 3); return true;
    // src/unknown/C0/C01731.asm:62 JSR UNKNOWN_C0122A
    // Overlapping static entry reached from 0xC017A9.
    case 0xC017AC: cpu.execute_instruction<0x3E>(0x008012, 3); return true;
    // src/unknown/C0/C01731.asm:63 BRA @UNKNOWN5
    case 0xC017AE: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C01731.asm:63 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC017AC.
    case 0xC017AF: cpu.execute_instruction<0x0D>(0x00FAAD, 3); return true;
    // src/unknown/C0/C01731.asm:65 LDA SCREEN_LEFT_X
    case 0xC017B0: cpu.execute_instruction<0xAD>(0x0046FA, 3); return true;
    // src/unknown/C0/C01731.asm:65 LDA SCREEN_LEFT_X
    // Overlapping static entry reached from 0xC017AF.
    case 0xC017B2: cpu.execute_instruction<0x46>(0x00003A, 2); return true;
    // src/unknown/C0/C01731.asm:66 DEC
    case 0xC017B3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:67 STA SCREEN_LEFT_X
    case 0xC017B4: cpu.execute_instruction<0x8D>(0x0046FA, 3); return true;
    // src/unknown/C0/C01731.asm:68 LDX @VIRTUAL02
    case 0xC017B7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C01731.asm:69 DEC
    case 0xC017B9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:70 JSR UNKNOWN_C0122A
    case 0xC017BA: cpu.execute_instruction<0x20>(0x00123E, 3); return true;
    // src/unknown/C0/C01731.asm:70 JSR UNKNOWN_C0122A
    // Overlapping static entry reached from 0xC017C9.
    case 0xC017BB: cpu.execute_instruction<0x3E>(0x00AD12, 3); return true;
    // src/unknown/C0/C01731.asm:72 LDA SCREEN_LEFT_X
    case 0xC017BD: cpu.execute_instruction<0xAD>(0x0046FA, 3); return true;
    // src/unknown/C0/C01731.asm:72 LDA SCREEN_LEFT_X
    // Overlapping static entry reached from 0xC017BB.
    case 0xC017BE: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:72 LDA SCREEN_LEFT_X
    // Overlapping static entry reached from 0xC017BE.
    case 0xC017BF: cpu.execute_instruction<0x46>(0x000038, 2); return true;
    // src/unknown/C0/C01731.asm:73 SEC
    case 0xC017C0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:74 SBC @LOCAL00
    case 0xC017C1: cpu.execute_instruction<0xE5>(0x00000E, 2); return true;
    // src/unknown/C0/C01731.asm:75 BNE @UNKNOWN3
    case 0xC017C3: cpu.execute_instruction<0xD0>(0x0000D4, 2); return true;
    // src/unknown/C0/C01731.asm:76 BRA @UNKNOWN8
    case 0xC017C5: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/unknown/C0/C01731.asm:78 AND #$8000
    case 0xC017C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C01731.asm:78 AND #$8000
    // Overlapping static entry reached from 0xC017C7.
    case 0xC017C9: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C01731.asm:79 BEQ @UNKNOWN7
    case 0xC017CA: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C01731.asm:80 LDA SCREEN_TOP_Y
    case 0xC017CC: cpu.execute_instruction<0xAD>(0x0046FC, 3); return true;
    // src/unknown/C0/C01731.asm:81 INC
    case 0xC017CF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:82 STA SCREEN_TOP_Y
    case 0xC017D0: cpu.execute_instruction<0x8D>(0x0046FC, 3); return true;
    // src/unknown/C0/C01731.asm:83 CLC
    case 0xC017D3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:84 ADC #28
    case 0xC017D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00001C, 3); return true;
    // src/unknown/C0/C01731.asm:84 ADC #28
    // Overlapping static entry reached from 0xC017D4.
    case 0xC017D6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C01731.asm:85 TAX
    case 0xC017D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:86 LDA @LOCAL00
    case 0xC017D8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C01731.asm:87 JSR UNKNOWN_C01181
    case 0xC017DA: cpu.execute_instruction<0x20>(0x001193, 3); return true;
    // src/unknown/C0/C01731.asm:88 BRA @UNKNOWN8
    case 0xC017DD: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C01731.asm:90 LDX SCREEN_TOP_Y
    case 0xC017DF: cpu.execute_instruction<0xAE>(0x0046FC, 3); return true;
    // src/unknown/C0/C01731.asm:91 DEX
    case 0xC017E2: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:92 STX SCREEN_TOP_Y
    case 0xC017E3: cpu.execute_instruction<0x8E>(0x0046FC, 3); return true;
    // src/unknown/C0/C01731.asm:93 DEX
    case 0xC017E6: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:94 LDA @LOCAL00
    case 0xC017E7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C01731.asm:95 JSR UNKNOWN_C01181
    case 0xC017E9: cpu.execute_instruction<0x20>(0x001193, 3); return true;
    // src/unknown/C0/C01731.asm:97 LDA SCREEN_TOP_Y
    case 0xC017EC: cpu.execute_instruction<0xAD>(0x0046FC, 3); return true;
    // src/unknown/C0/C01731.asm:98 SEC
    case 0xC017EF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C01731.asm:99 SBC @VIRTUAL02
    case 0xC017F0: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C01731.asm:100 BNE @UNKNOWN6
    case 0xC017F2: cpu.execute_instruction<0xD0>(0x0000D3, 2); return true;
    // src/unknown/C0/C01731.asm:101 LDY @LOCAL01
    case 0xC017F4: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C01731.asm:102 STY BG12_POSITION_X_COPY
    case 0xC017F6: cpu.execute_instruction<0x8C>(0x00470C, 3); return true;
    // src/unknown/C0/C01731.asm:103 LDA @VIRTUAL04
    case 0xC017F9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01731.asm:104 STA BG12_POSITION_Y_COPY
    case 0xC017FB: cpu.execute_instruction<0x8D>(0x00470E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C01731.asm:105 END_C_FUNCTION
    case 0xC017FE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C01731.asm:105 END_C_FUNCTION
    case 0xC017FF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C017EA.asm (unresolved).
bool execute_unresolved_c0_c017ea_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C017EA.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC01800: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C017EA.asm:8 END_STACK_VARS
    case 0xC01802: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C017EA.asm:8 END_STACK_VARS
    case 0xC01803: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C017EA.asm:8 END_STACK_VARS
    case 0xC01804: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C017EA.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC01804.
    case 0xC01806: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C017EA.asm:8 END_STACK_VARS
    case 0xC01807: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:9 LDY #0
    case 0xC01808: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C017EA.asm:9 LDY #0
    // Overlapping static entry reached from 0xC01808.
    case 0xC0180A: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C0/C017EA.asm:10 TYA
    case 0xC0180B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:11 STA @LOCAL01
    case 0xC0180C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:12 LDX PAD_STATE
    case 0xC0180E: cpu.execute_instruction<0xAE>(0x000065, 3); return true;
    // src/unknown/C0/C017EA.asm:13 LDA PAD_PRESS
    case 0xC01811: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C0/C017EA.asm:14 STA @VIRTUAL02
    case 0xC01814: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C017EA.asm:15 AND #PAD::START_BUTTON
    case 0xC01816: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/unknown/C0/C017EA.asm:15 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC01816.
    case 0xC01818: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:16 BEQ @UNKNOWN0
    case 0xC01819: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C017EA.asm:16 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC01818.
    case 0xC0181A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000AD, 2); else cpu.execute_instruction<0x09>(0x000AAD, 3); return true;
    // src/unknown/C0/C017EA.asm:17 LDA UNKNOWN_7E4384
    case 0xC0181B: cpu.execute_instruction<0xAD>(0x00470A, 3); return true;
    // src/unknown/C0/C017EA.asm:17 LDA UNKNOWN_7E4384
    // Overlapping static entry reached from 0xC0181A.
    case 0xC0181C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:17 LDA UNKNOWN_7E4384
    // Overlapping static entry reached from 0xC0181A.
    case 0xC0181D: cpu.execute_instruction<0x47>(0x000049, 2); return true;
    // src/unknown/C0/C017EA.asm:18 EOR #$0001
    case 0xC0181E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000001, 2); else cpu.execute_instruction<0x49>(0x000001, 3); return true;
    // src/unknown/C0/C017EA.asm:18 EOR #$0001
    // Overlapping static entry reached from 0xC0181D.
    case 0xC0181F: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C017EA.asm:18 EOR #$0001
    // Overlapping static entry reached from 0xC0181E.
    case 0xC01820: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C017EA.asm:19 STA UNKNOWN_7E4384
    case 0xC01821: cpu.execute_instruction<0x8D>(0x00470A, 3); return true;
    // src/unknown/C0/C017EA.asm:21 TXA
    case 0xC01824: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:22 AND #PAD::DOWN
    case 0xC01825: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/unknown/C0/C017EA.asm:22 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC01825.
    case 0xC01827: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:23 BEQ @UNKNOWN1
    case 0xC01828: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C017EA.asm:23 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC01827.
    case 0xC01829: cpu.execute_instruction<0x05>(0x0000A0, 2); return true;
    // src/unknown/C0/C017EA.asm:24 LDY #1
    case 0xC0182A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C017EA.asm:24 LDY #1
    // Overlapping static entry reached from 0xC01829.
    case 0xC0182B: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C017EA.asm:24 LDY #1
    // Overlapping static entry reached from 0xC0182A.
    case 0xC0182C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C017EA.asm:25 BRA @UNKNOWN2
    case 0xC0182D: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C017EA.asm:27 TXA
    case 0xC0182F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:28 AND #PAD::UP
    case 0xC01830: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/unknown/C0/C017EA.asm:28 AND #PAD::UP
    // Overlapping static entry reached from 0xC01830.
    case 0xC01832: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:29 BEQ @UNKNOWN2
    case 0xC01833: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C017EA.asm:30 LDY #.LOWORD(-1)
    case 0xC01835: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C017EA.asm:30 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC01835.
    case 0xC01837: cpu.execute_instruction<0xFF>(0x00298A, 4); return true;
    // src/unknown/C0/C017EA.asm:32 TXA
    case 0xC01838: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:33 AND #PAD::LEFT
    case 0xC01839: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/C0/C017EA.asm:33 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC01839.
    case 0xC0183B: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:34 BEQ @UNKNOWN3
    case 0xC0183C: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C017EA.asm:35 LDA #.LOWORD(-1)
    case 0xC0183E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C017EA.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0183E.
    case 0xC01840: cpu.execute_instruction<0xFF>(0x801085, 4); return true;
    // src/unknown/C0/C017EA.asm:36 STA @LOCAL01
    case 0xC01841: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:37 BRA @UNKNOWN4
    case 0xC01843: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C0/C017EA.asm:37 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC01840.
    case 0xC01844: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:39 TXA
    case 0xC01845: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:40 AND #PAD::RIGHT
    case 0xC01846: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/C0/C017EA.asm:40 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC01846.
    case 0xC01848: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:41 BEQ @UNKNOWN4
    case 0xC01849: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C017EA.asm:41 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xC01848.
    case 0xC0184A: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/unknown/C0/C017EA.asm:42 LDA #1
    case 0xC0184B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C017EA.asm:42 LDA #1
    // Overlapping static entry reached from 0xC0184A.
    case 0xC0184C: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C017EA.asm:42 LDA #1
    // Overlapping static entry reached from 0xC0184B.
    case 0xC0184D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C017EA.asm:43 STA @LOCAL01
    case 0xC0184E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:45 TXA
    case 0xC01850: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:46 AND #PAD::L_BUTTON
    case 0xC01851: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/unknown/C0/C017EA.asm:46 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xC01851.
    case 0xC01853: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:47 BEQ @UNKNOWN5
    case 0xC01854: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C017EA.asm:48 LDA @LOCAL01
    case 0xC01856: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:49 ASL
    case 0xC01858: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:50 ASL
    case 0xC01859: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:51 STA @LOCAL01
    case 0xC0185A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:52 TYA
    case 0xC0185C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:53 ASL
    case 0xC0185D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:54 ASL
    case 0xC0185E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:55 TAY
    case 0xC0185F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:57 TXA
    case 0xC01860: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:58 AND #PAD::R_BUTTON
    case 0xC01861: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/unknown/C0/C017EA.asm:58 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xC01861.
    case 0xC01863: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:59 BEQ @UNKNOWN6
    case 0xC01864: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C017EA.asm:60 LDA @LOCAL01
    case 0xC01866: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:61 ASL
    case 0xC01868: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:62 STA @LOCAL01
    case 0xC01869: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:63 TYA
    case 0xC0186B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:64 ASL
    case 0xC0186C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:65 TAY
    case 0xC0186D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:67 TXA
    case 0xC0186E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:68 AND #PAD::X_BUTTON
    case 0xC0186F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/C0/C017EA.asm:68 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC0186F.
    case 0xC01871: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:69 BEQ @UNKNOWN7
    case 0xC01872: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C017EA.asm:70 LDA @LOCAL01
    case 0xC01874: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:71 ASL
    case 0xC01876: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:72 STA @LOCAL01
    case 0xC01877: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:73 TYA
    case 0xC01879: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:74 ASL
    case 0xC0187A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:75 TAY
    case 0xC0187B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:77 TXA
    case 0xC0187C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:78 AND #PAD::Y_BUTTON
    case 0xC0187D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/C0/C017EA.asm:78 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xC0187D.
    case 0xC0187F: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:79 BNE @UNKNOWN8
    case 0xC01880: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C017EA.asm:80 LDA @LOCAL00
    case 0xC01882: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C017EA.asm:81 STA @VIRTUAL04
    case 0xC01884: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C017EA.asm:82 AND #$0080
    case 0xC01886: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C0/C017EA.asm:82 AND #$0080
    // Overlapping static entry reached from 0xC01886.
    case 0xC01888: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:83 BEQ @UNKNOWN8
    case 0xC01889: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C017EA.asm:84 LDY #0
    case 0xC0188B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C017EA.asm:84 LDY #0
    // Overlapping static entry reached from 0xC0188B.
    case 0xC0188D: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C0/C017EA.asm:85 TYA
    case 0xC0188E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:86 STA @LOCAL01
    case 0xC0188F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:88 LDA @LOCAL01
    case 0xC01891: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:89 CLC
    case 0xC01893: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:90 ADC SCREEN_X_PIXELS
    case 0xC01894: cpu.execute_instruction<0x6D>(0x004706, 3); return true;
    // src/unknown/C0/C017EA.asm:91 TAX
    case 0xC01897: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:92 STX SCREEN_X_PIXELS
    case 0xC01898: cpu.execute_instruction<0x8E>(0x004706, 3); return true;
    // src/unknown/C0/C017EA.asm:93 TYA
    case 0xC0189B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:94 CLC
    case 0xC0189C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:95 ADC SCREEN_Y_PIXELS
    case 0xC0189D: cpu.execute_instruction<0x6D>(0x004708, 3); return true;
    // src/unknown/C0/C017EA.asm:96 STA @LOCAL01
    case 0xC018A0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:97 STA SCREEN_Y_PIXELS
    case 0xC018A2: cpu.execute_instruction<0x8D>(0x004708, 3); return true;
    // src/unknown/C0/C017EA.asm:98 CPX SCREEN_X_PIXELS_COPY
    case 0xC018A5: cpu.execute_instruction<0xEC>(0x004702, 3); return true;
    // src/unknown/C0/C017EA.asm:99 BNE @UNKNOWN9
    case 0xC018A8: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C017EA.asm:99 BNE @UNKNOWN9
    // Overlapping static entry reached from 0xC07936.
    case 0xC018A9: cpu.execute_instruction<0x05>(0x0000CD, 2); return true;
    // src/unknown/C0/C017EA.asm:100 CMP SCREEN_Y_PIXELS_COPY
    case 0xC018AA: cpu.execute_instruction<0xCD>(0x004704, 3); return true;
    // src/unknown/C0/C017EA.asm:100 CMP SCREEN_Y_PIXELS_COPY
    // Overlapping static entry reached from 0xC018A9.
    case 0xC018AB: cpu.execute_instruction<0x04>(0x000047, 2); return true;
    // src/unknown/C0/C017EA.asm:101 BEQ @UNKNOWN10
    case 0xC018AD: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C0/C017EA.asm:103 LDA SCREEN_Y_PIXELS
    case 0xC018AF: cpu.execute_instruction<0xAD>(0x004708, 3); return true;
    // src/unknown/C0/C017EA.asm:104 SEC
    case 0xC018B2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:105 SBC #112
    case 0xC018B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000070, 2); else cpu.execute_instruction<0xE9>(0x000070, 3); return true;
    // src/unknown/C0/C017EA.asm:105 SBC #112
    // Overlapping static entry reached from 0xC018B3.
    case 0xC018B5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C017EA.asm:106 TAX
    case 0xC018B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:107 LDA SCREEN_X_PIXELS
    case 0xC018B7: cpu.execute_instruction<0xAD>(0x004706, 3); return true;
    // src/unknown/C0/C017EA.asm:108 SEC
    case 0xC018BA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:109 SBC #128
    case 0xC018BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C0/C017EA.asm:109 SBC #128
    // Overlapping static entry reached from 0xC018BB.
    case 0xC018BD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C017EA.asm:110 JSR REFRESH_MAP_AT_POSITION
    case 0xC018BE: cpu.execute_instruction<0x20>(0x00156E, 3); return true;
    // src/unknown/C0/C017EA.asm:111 BRA @UNKNOWN11
    case 0xC018C1: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C0/C017EA.asm:113 LDA @VIRTUAL02
    case 0xC018C3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C017EA.asm:114 AND #$0080
    case 0xC018C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C0/C017EA.asm:114 AND #$0080
    // Overlapping static entry reached from 0xC018C5.
    case 0xC018C7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C017EA.asm:115 BEQ @UNKNOWN11
    case 0xC018C8: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/unknown/C0/C017EA.asm:116 LDA #.LOWORD(-1)
    case 0xC018CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C017EA.asm:116 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC018CA.
    case 0xC018CC: cpu.execute_instruction<0xFF>(0x46F68D, 4); return true;
    // src/unknown/C0/C017EA.asm:117 STA LOADED_MAP_PALETTE
    case 0xC018CD: cpu.execute_instruction<0x8D>(0x0046F6, 3); return true;
    // src/unknown/C0/C017EA.asm:118 STA LOADED_MAP_TILE_COMBO
    case 0xC018D0: cpu.execute_instruction<0x8D>(0x0046F4, 3); return true;
    // src/unknown/C0/C017EA.asm:119 TXA
    case 0xC018D3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:120 AND #$FFF8
    case 0xC018D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/unknown/C0/C017EA.asm:120 AND #$FFF8
    // Overlapping static entry reached from 0xC018D4.
    case 0xC018D6: cpu.execute_instruction<0xFF>(0x47068D, 4); return true;
    // src/unknown/C0/C017EA.asm:121 STA SCREEN_X_PIXELS
    case 0xC018D7: cpu.execute_instruction<0x8D>(0x004706, 3); return true;
    // src/unknown/C0/C017EA.asm:122 LDA @LOCAL01
    case 0xC018DA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C017EA.asm:123 AND #$FFF8
    case 0xC018DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/unknown/C0/C017EA.asm:123 AND #$FFF8
    // Overlapping static entry reached from 0xC018DC.
    case 0xC018DE: cpu.execute_instruction<0xFF>(0x47088D, 4); return true;
    // src/unknown/C0/C017EA.asm:124 STA SCREEN_Y_PIXELS
    case 0xC018DF: cpu.execute_instruction<0x8D>(0x004708, 3); return true;
    // src/unknown/C0/C017EA.asm:125 JSL UNKNOWN_C08726
    case 0xC018E2: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/unknown/C0/C017EA.asm:126 LDA SCREEN_Y_PIXELS
    case 0xC018E6: cpu.execute_instruction<0xAD>(0x004708, 3); return true;
    // src/unknown/C0/C017EA.asm:127 LSR
    case 0xC018E9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:128 LSR
    case 0xC018EA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:129 LSR
    case 0xC018EB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:130 TAX
    case 0xC018EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:131 LDA SCREEN_X_PIXELS
    case 0xC018ED: cpu.execute_instruction<0xAD>(0x004706, 3); return true;
    // src/unknown/C0/C017EA.asm:132 LSR
    case 0xC018F0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:133 LSR
    case 0xC018F1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:134 LSR
    case 0xC018F2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C017EA.asm:135 JSL LOAD_MAP_AT_POSITION
    case 0xC018F3: cpu.execute_instruction<0x22>(0xC0140C, 4); return true;
    // src/unknown/C0/C017EA.asm:136 JSL UNKNOWN_C08744
    case 0xC018F7: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // src/unknown/C0/C017EA.asm:138 LDA SCREEN_X_PIXELS
    case 0xC018FB: cpu.execute_instruction<0xAD>(0x004706, 3); return true;
    // src/unknown/C0/C017EA.asm:139 STA SCREEN_X_PIXELS_COPY
    case 0xC018FE: cpu.execute_instruction<0x8D>(0x004702, 3); return true;
    // src/unknown/C0/C017EA.asm:140 LDA SCREEN_Y_PIXELS
    case 0xC01901: cpu.execute_instruction<0xAD>(0x004708, 3); return true;
    // src/unknown/C0/C017EA.asm:141 STA SCREEN_Y_PIXELS_COPY
    case 0xC01904: cpu.execute_instruction<0x8D>(0x004704, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C017EA.asm:142 END_C_FUNCTION
    case 0xC01907: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C017EA.asm:142 END_C_FUNCTION
    case 0xC01908: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C019E2.asm (unresolved).
bool execute_unresolved_c0_c019e2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C019E2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC019F8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C019E2.asm:7 END_STACK_VARS
    case 0xC019FA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C019E2.asm:7 END_STACK_VARS
    case 0xC019FB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C019E2.asm:7 END_STACK_VARS
    case 0xC019FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C019E2.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC019FC.
    case 0xC019FE: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C019E2.asm:7 END_STACK_VARS
    case 0xC019FF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:8 LDX #0
    case 0xC01A00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C019E2.asm:8 LDX #0
    // Overlapping static entry reached from 0xC01A00.
    case 0xC01A02: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C019E2.asm:9 BRA @UNKNOWN1
    case 0xC01A03: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C0/C019E2.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC01A05: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C019E2.asm:12 LDA #>-1
    case 0xC01A07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C0/C019E2.asm:13 STA LOADED_COLUMNS_Y,X
    case 0xC01A09: cpu.execute_instruction<0x9D>(0x004746, 3); return true;
    // src/unknown/C0/C019E2.asm:13 STA LOADED_COLUMNS_Y,X
    // Overlapping static entry reached from 0xC01A07.
    case 0xC01A0A: cpu.execute_instruction<0x46>(0x000047, 2); return true;
    // src/unknown/C0/C019E2.asm:14 STA LOADED_COLUMNS_X,X
    case 0xC01A0C: cpu.execute_instruction<0x9D>(0x004736, 3); return true;
    // src/unknown/C0/C019E2.asm:15 STA LOADED_ROWS_Y,X
    case 0xC01A0F: cpu.execute_instruction<0x9D>(0x004726, 3); return true;
    // src/unknown/C0/C019E2.asm:16 STA LOADED_ROWS_X,X
    case 0xC01A12: cpu.execute_instruction<0x9D>(0x004716, 3); return true;
    // src/unknown/C0/C019E2.asm:17 INX
    case 0xC01A15: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:19 CPX #16
    case 0xC01A16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/unknown/C0/C019E2.asm:19 CPX #16
    // Overlapping static entry reached from 0xC01A16.
    case 0xC01A18: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C019E2.asm:20 BCC @UNKNOWN0
    case 0xC01A19: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/unknown/C0/C019E2.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC01A1B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C019E2.asm:22 LDA BG1_X_POS
    case 0xC01A1D: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/C0/C019E2.asm:23 SEC
    case 0xC01A20: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:24 SBC #128
    case 0xC01A21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C0/C019E2.asm:24 SBC #128
    // Overlapping static entry reached from 0xC01A21.
    case 0xC01A23: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C019E2.asm:25 LSR
    case 0xC01A24: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:26 LSR
    case 0xC01A25: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:27 LSR
    case 0xC01A26: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:28 STA @VIRTUAL04
    case 0xC01A27: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C019E2.asm:29 LDA BG1_Y_POS
    case 0xC01A29: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/unknown/C0/C019E2.asm:30 SEC
    case 0xC01A2C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:31 SBC #128
    case 0xC01A2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C0/C019E2.asm:31 SBC #128
    // Overlapping static entry reached from 0xC01A2D.
    case 0xC01A2F: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C019E2.asm:32 LSR
    case 0xC01A30: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:33 LSR
    case 0xC01A31: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:34 LSR
    case 0xC01A32: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:35 STA @VIRTUAL02
    case 0xC01A33: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C019E2.asm:36 STA @LOCAL01
    case 0xC01A35: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C019E2.asm:37 LDY #0
    case 0xC01A37: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C019E2.asm:37 LDY #0
    // Overlapping static entry reached from 0xC01A37.
    case 0xC01A39: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C019E2.asm:38 STY @LOCAL00
    case 0xC01A3A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C019E2.asm:39 BRA @UNKNOWN3
    case 0xC01A3C: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C019E2.asm:41 LDA @LOCAL01
    case 0xC01A3E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C019E2.asm:42 STA @VIRTUAL02
    case 0xC01A40: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C019E2.asm:43 STY @VIRTUAL02
    case 0xC01A42: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C019E2.asm:44 CLC
    case 0xC01A44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:45 ADC @VIRTUAL02
    case 0xC01A45: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C019E2.asm:46 TAX
    case 0xC01A47: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:47 LDA @VIRTUAL04
    case 0xC01A48: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C019E2.asm:48 JSR LOAD_MAP_ROW
    case 0xC01A4A: cpu.execute_instruction<0x20>(0x000AD7, 3); return true;
    // src/unknown/C0/C019E2.asm:49 LDY @LOCAL00
    case 0xC01A4D: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C019E2.asm:50 INY
    case 0xC01A4F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:51 STY @LOCAL00
    case 0xC01A50: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C019E2.asm:53 CPY #60
    case 0xC01A52: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00003C, 2); else cpu.execute_instruction<0xC0>(0x00003C, 3); return true;
    // src/unknown/C0/C019E2.asm:53 CPY #60
    // Overlapping static entry reached from 0xC01A52.
    case 0xC01A54: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C019E2.asm:54 BCC @UNKNOWN2
    case 0xC01A55: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C0/C019E2.asm:55 LDY #0
    case 0xC01A57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C019E2.asm:55 LDY #0
    // Overlapping static entry reached from 0xC01A57.
    case 0xC01A59: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C019E2.asm:56 STY @LOCAL00
    case 0xC01A5A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C019E2.asm:57 BRA @UNKNOWN5
    case 0xC01A5C: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C019E2.asm:59 LDA @LOCAL01
    case 0xC01A5E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C019E2.asm:60 STA @VIRTUAL02
    case 0xC01A60: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C019E2.asm:61 STY @VIRTUAL02
    case 0xC01A62: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C019E2.asm:62 CLC
    case 0xC01A64: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:63 ADC @VIRTUAL02
    case 0xC01A65: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C019E2.asm:64 TAX
    case 0xC01A67: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:65 LDA @VIRTUAL04
    case 0xC01A68: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C019E2.asm:66 JSR LOAD_COLLISION_ROW
    case 0xC01A6A: cpu.execute_instruction<0x20>(0x000D05, 3); return true;
    // src/unknown/C0/C019E2.asm:67 LDY @LOCAL00
    case 0xC01A6D: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C019E2.asm:68 INY
    case 0xC01A6F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C019E2.asm:69 STY @LOCAL00
    case 0xC01A70: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C019E2.asm:71 CPY #60
    case 0xC01A72: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00003C, 2); else cpu.execute_instruction<0xC0>(0x00003C, 3); return true;
    // src/unknown/C0/C019E2.asm:71 CPY #60
    // Overlapping static entry reached from 0xC01A72.
    case 0xC01A74: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C019E2.asm:72 BCC @UNKNOWN4
    case 0xC01A75: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C019E2.asm:73 END_C_FUNCTION
    case 0xC01A77: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C019E2.asm:73 END_C_FUNCTION
    case 0xC01A78: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01A63.asm (unresolved).
bool execute_unresolved_c0_c01a63_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C01A63.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC01A79: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C01A63.asm:4 JSR UNKNOWN_C00E16
    case 0xC01A7B: cpu.execute_instruction<0x20>(0x000E28, 3); return true;
    // src/unknown/C0/C01A63.asm:5 RTL
    case 0xC01A7E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01A86.asm (unresolved).
bool execute_unresolved_c0_c01a86_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C01A86.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC01A9C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C01A86.asm:4 LDX #$0000
    case 0xC01A9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C01A86.asm:4 LDX #$0000
    // Overlapping static entry reached from 0xC01A9E.
    case 0xC01AA0: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C01A86.asm:5 BRA @UNKNOWN1
    case 0xC01AA1: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C01A86.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC01AA3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01A86.asm:8 LDA #$00FF
    case 0xC01AA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C0/C01A86.asm:9 STA OVERWORLD_SPRITEMAPS,X
    case 0xC01AA7: cpu.execute_instruction<0x9D>(0x004A04, 3); return true;
    // src/unknown/C0/C01A86.asm:9 STA OVERWORLD_SPRITEMAPS,X
    // Overlapping static entry reached from 0xC01AA5.
    case 0xC01AA8: cpu.execute_instruction<0x04>(0x00004A, 2); return true;
    // src/unknown/C0/C01A86.asm:10 INX
    case 0xC01AAA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C01A86.asm:12 CPX #$0380
    case 0xC01AAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x000380, 3); return true;
    // src/unknown/C0/C01A86.asm:12 CPX #$0380
    // Overlapping static entry reached from 0xC01AAB.
    case 0xC01AAD: cpu.execute_instruction<0x03>(0x000090, 2); return true;
    // src/unknown/C0/C01A86.asm:13 BCC @UNKNOWN0
    case 0xC01AAE: cpu.execute_instruction<0x90>(0x0000F3, 2); return true;
    // src/unknown/C0/C01A86.asm:13 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC01AAD.
    case 0xC01AAF: cpu.execute_instruction<0xF3>(0x0000C2, 2); return true;
    // src/unknown/C0/C01A86.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xC01AB0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01A86.asm:14 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC01AAF.
    case 0xC01AB1: cpu.execute_instruction<0x20>(0x00C26B, 3); return true;
    // src/unknown/C0/C01A86.asm:15 RTL
    case 0xC01AB2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01B15.asm (unresolved).
bool execute_unresolved_c0_c01b15_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01B15.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01B2B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01B15.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC01B28.
    case 0xC01B2C: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C01B15.asm:8 END_STACK_VARS
    case 0xC01B2D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C01B15.asm:8 END_STACK_VARS
    case 0xC01B2E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C01B15.asm:8 END_STACK_VARS
    case 0xC01B2F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01B15.asm:8 END_STACK_VARS
    case 0xC01B30: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01B15.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC01B30.
    case 0xC01B32: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C01B15.asm:8 END_STACK_VARS
    case 0xC01B33: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C01B15.asm:8 END_STACK_VARS
    case 0xC01B34: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:9 CMP #.LOWORD(OVERWORLD_SPRITEMAPS)
    case 0xC01B35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x004A04, 3); return true;
    // src/unknown/C0/C01B15.asm:9 CMP #.LOWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01B32.
    case 0xC01B36: cpu.execute_instruction<0x04>(0x00004A, 2); return true;
    // src/unknown/C0/C01B15.asm:9 CMP #.LOWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01B35.
    case 0xC01B37: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:10 BCC @UNKNOWN3
    case 0xC01B38: cpu.execute_instruction<0x90>(0x000070, 2); return true;
    // src/unknown/C0/C01B15.asm:11 CMP #.LOWORD(OVERWORLD_SPRITEMAPS) + 179 * .SIZEOF(spritemap) + 1
    case 0xC01B3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000084, 2); else cpu.execute_instruction<0xC9>(0x004D84, 3); return true;
    // src/unknown/C0/C01B15.asm:11 CMP #.LOWORD(OVERWORLD_SPRITEMAPS) + 179 * .SIZEOF(spritemap) + 1
    // Overlapping static entry reached from 0xC01B3A.
    case 0xC01B3C: cpu.execute_instruction<0x4D>(0x0002F0, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C01B15.asm:12 BGT @UNKNOWN3
    case 0xC01B3D: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C01B15.asm:12 BGT @UNKNOWN3
    case 0xC01B3F: cpu.execute_instruction<0xB0>(0x000069, 2); return true;
    // src/unknown/C0/C01B15.asm:13 SEC
    case 0xC01B41: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:14 SBC #.LOWORD(OVERWORLD_SPRITEMAPS)
    case 0xC01B42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x004A04, 3); return true;
    // src/unknown/C0/C01B15.asm:14 SBC #.LOWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01B42.
    case 0xC01B44: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:15 STA @LOCAL01
    case 0xC01B45: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:16 LDA #0
    case 0xC01B47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C01B15.asm:16 LDA #0
    // Overlapping static entry reached from 0xC01B47.
    case 0xC01B49: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C01B15.asm:17 STA @VIRTUAL02
    case 0xC01B4A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01B15.asm:18 BRA @UNKNOWN2
    case 0xC01B4C: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/unknown/C0/C01B15.asm:20 LDA @LOCAL01
    case 0xC01B4E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:21 CLC
    case 0xC01B50: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:22 ADC #.LOWORD(OVERWORLD_SPRITEMAPS + spritemap::special_flags)
    case 0xC01B51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x004A08, 3); return true;
    // src/unknown/C0/C01B15.asm:22 ADC #.LOWORD(OVERWORLD_SPRITEMAPS + spritemap::special_flags)
    // Overlapping static entry reached from 0xC01B51.
    case 0xC01B53: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:23 TAX
    case 0xC01B54: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:24 STX @LOCAL00
    case 0xC01B55: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C01B15.asm:25 LDA __BSS_START__,X
    case 0xC01B57: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C01B15.asm:26 AND #$00FF
    case 0xC01B5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C01B15.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC01B5A.
    case 0xC01B5C: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C01B15.asm:27 TAY
    case 0xC01B5D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:28 LDA @LOCAL01
    case 0xC01B5E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:29 TAX
    case 0xC01B60: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC01B61: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:31 LDA #>-1
    case 0xC01B63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C0/C01B15.asm:32 STA OVERWORLD_SPRITEMAPS + spritemap::y_offset,X
    case 0xC01B65: cpu.execute_instruction<0x9D>(0x004A04, 3); return true;
    // src/unknown/C0/C01B15.asm:32 STA OVERWORLD_SPRITEMAPS + spritemap::y_offset,X
    // Overlapping static entry reached from 0xC01B63.
    case 0xC01B66: cpu.execute_instruction<0x04>(0x00004A, 2); return true;
    // src/unknown/C0/C01B15.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC01B68: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:34 LDA @LOCAL01
    case 0xC01B6A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:35 TAX
    case 0xC01B6C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC01B6D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:37 LDA #>-1
    case 0xC01B6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C0/C01B15.asm:38 STA OVERWORLD_SPRITEMAPS + spritemap::tile,X
    case 0xC01B71: cpu.execute_instruction<0x9D>(0x004A05, 3); return true;
    // src/unknown/C0/C01B15.asm:38 STA OVERWORLD_SPRITEMAPS + spritemap::tile,X
    // Overlapping static entry reached from 0xC01B6F.
    case 0xC01B72: cpu.execute_instruction<0x05>(0x00004A, 2); return true;
    // src/unknown/C0/C01B15.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC01B74: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:40 LDA @LOCAL01
    case 0xC01B76: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:41 TAX
    case 0xC01B78: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC01B79: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:43 LDA #>-1
    case 0xC01B7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C0/C01B15.asm:44 STA OVERWORLD_SPRITEMAPS + spritemap::flags,X
    case 0xC01B7D: cpu.execute_instruction<0x9D>(0x004A06, 3); return true;
    // src/unknown/C0/C01B15.asm:44 STA OVERWORLD_SPRITEMAPS + spritemap::flags,X
    // Overlapping static entry reached from 0xC01B7B.
    case 0xC01B7E: cpu.execute_instruction<0x06>(0x00004A, 2); return true;
    // src/unknown/C0/C01B15.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC01B80: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:46 LDA @LOCAL01
    case 0xC01B82: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:47 TAX
    case 0xC01B84: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC01B85: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:49 LDA #>-1
    case 0xC01B87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C0/C01B15.asm:50 STA OVERWORLD_SPRITEMAPS + spritemap::x_offset,X
    case 0xC01B89: cpu.execute_instruction<0x9D>(0x004A07, 3); return true;
    // src/unknown/C0/C01B15.asm:50 STA OVERWORLD_SPRITEMAPS + spritemap::x_offset,X
    // Overlapping static entry reached from 0xC01B87.
    case 0xC01B8A: cpu.execute_instruction<0x07>(0x00004A, 2); return true;
    // src/unknown/C0/C01B15.asm:51 LDX @LOCAL00 ;address was precalculated because it was also being read from
    case 0xC01B8C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C01B15.asm:52 STA __BSS_START__,X
    case 0xC01B8E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C01B15.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC01B91: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01B15.asm:54 LDA @LOCAL01
    case 0xC01B93: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:55 CLC
    case 0xC01B95: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:56 ADC #.SIZEOF(spritemap)
    case 0xC01B96: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/unknown/C0/C01B15.asm:56 ADC #.SIZEOF(spritemap)
    // Overlapping static entry reached from 0xC01B96.
    case 0xC01B98: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C01B15.asm:57 STA @LOCAL01
    case 0xC01B99: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C01B15.asm:58 TYA
    case 0xC01B9B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01B15.asm:59 AND #128
    case 0xC01B9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C0/C01B15.asm:59 AND #128
    // Overlapping static entry reached from 0xC01B9C.
    case 0xC01B9E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C01B15.asm:60 BEQ @UNKNOWN1
    case 0xC01B9F: cpu.execute_instruction<0xF0>(0x0000AD, 2); return true;
    // src/unknown/C0/C01B15.asm:61 INC @VIRTUAL02
    case 0xC01BA1: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C01B15.asm:63 LDA @VIRTUAL02
    case 0xC01BA3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C01B15.asm:64 CMP #2
    case 0xC01BA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C01B15.asm:64 CMP #2
    // Overlapping static entry reached from 0xC01BA5.
    case 0xC01BA7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C01B15.asm:65 BCC @UNKNOWN1
    case 0xC01BA8: cpu.execute_instruction<0x90>(0x0000A4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C01B15.asm:67 END_C_FUNCTION
    case 0xC01BAA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C01B15.asm:67 END_C_FUNCTION
    case 0xC01BAB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01B96.asm (unresolved).
bool execute_unresolved_c0_c01b96_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01B96.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01BAC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C01B96.asm:11 END_STACK_VARS
    case 0xC01BAE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C01B96.asm:11 END_STACK_VARS
    case 0xC01BAF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C01B96.asm:11 END_STACK_VARS
    case 0xC01BB0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01B96.asm:11 END_STACK_VARS
    case 0xC01BB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01B96.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC01BB1.
    case 0xC01BB3: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C01B96.asm:11 END_STACK_VARS
    case 0xC01BB4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C01B96.asm:11 END_STACK_VARS
    case 0xC01BB5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:12 STX @VIRTUAL04
    case 0xC01BB6: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C01B96.asm:12 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC01BB3.
    case 0xC01BB7: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C0/C01B96.asm:13 STA @VIRTUAL02
    case 0xC01BB8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:13 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC01BB7.
    case 0xC01BB9: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C0/C01B96.asm:14 STA @LOCAL02
    case 0xC01BBA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C01B96.asm:15 LDY #0
    case 0xC01BBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C01B96.asm:15 LDY #0
    // Overlapping static entry reached from 0xC01BBC.
    case 0xC01BBE: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C01B96.asm:16 BRA @UNKNOWN6
    case 0xC01BBF: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // src/unknown/C0/C01B96.asm:18 LDA #0
    case 0xC01BC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C01B96.asm:18 LDA #0
    // Overlapping static entry reached from 0xC01BC1.
    case 0xC01BC3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C01B96.asm:19 STA @LOCAL01
    case 0xC01BC4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C01B96.asm:20 BRA @UNKNOWN2
    case 0xC01BC6: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C01B96.asm:22 STA @VIRTUAL02
    case 0xC01BC8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:23 TYA
    case 0xC01BCA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:24 CLC
    case 0xC01BCB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:25 ADC @VIRTUAL02
    case 0xC01BCC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:26 TAX
    case 0xC01BCE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:27 LDA SPRITE_VRAM_TABLE,X
    case 0xC01BCF: cpu.execute_instruction<0xBD>(0x004D86, 3); return true;
    // src/unknown/C0/C01B96.asm:28 AND #$00FF
    case 0xC01BD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C01B96.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC01BD2.
    case 0xC01BD4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C01B96.asm:29 BNE @UNKNOWN5
    case 0xC01BD5: cpu.execute_instruction<0xD0>(0x000036, 2); return true;
    // src/unknown/C0/C01B96.asm:30 LDA @LOCAL01
    case 0xC01BD7: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C01B96.asm:31 INC
    case 0xC01BD9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:32 STA @LOCAL01
    case 0xC01BDA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C01B96.asm:34 LDX @LOCAL02
    case 0xC01BDC: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C01B96.asm:35 STX @VIRTUAL02
    case 0xC01BDE: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:36 CMP @VIRTUAL02
    case 0xC01BE0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:37 BCC @UNKNOWN1
    case 0xC01BE2: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/unknown/C0/C01B96.asm:38 LDA #0
    case 0xC01BE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C01B96.asm:38 LDA #0
    // Overlapping static entry reached from 0xC01BE4.
    case 0xC01BE6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C01B96.asm:39 STA @LOCAL00
    case 0xC01BE7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C01B96.asm:40 BRA @UNKNOWN4
    case 0xC01BE9: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C0/C01B96.asm:42 STA @VIRTUAL02
    case 0xC01BEB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:43 TYA
    case 0xC01BED: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:44 CLC
    case 0xC01BEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:45 ADC @VIRTUAL02
    case 0xC01BEF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:46 TAX
    case 0xC01BF1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:47 LDA @VIRTUAL04
    case 0xC01BF2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01B96.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC01BF4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01B96.asm:49 ORA #$0080
    case 0xC01BF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x009D80, 3); return true;
    // src/unknown/C0/C01B96.asm:50 STA SPRITE_VRAM_TABLE,X
    case 0xC01BF8: cpu.execute_instruction<0x9D>(0x004D86, 3); return true;
    // src/unknown/C0/C01B96.asm:50 STA SPRITE_VRAM_TABLE,X
    // Overlapping static entry reached from 0xC01BF6.
    case 0xC01BF9: cpu.execute_instruction<0x86>(0x00004D, 2); return true;
    // src/unknown/C0/C01B96.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC01BFB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01B96.asm:52 LDA @LOCAL00
    case 0xC01BFD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C01B96.asm:53 INC
    case 0xC01BFF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:54 STA @LOCAL00
    case 0xC01C00: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C01B96.asm:56 LDX @LOCAL02
    case 0xC01C02: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C01B96.asm:57 STX @VIRTUAL02
    case 0xC01C04: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:58 CMP @VIRTUAL02
    case 0xC01C06: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:59 BCC @UNKNOWN3
    case 0xC01C08: cpu.execute_instruction<0x90>(0x0000E1, 2); return true;
    // src/unknown/C0/C01B96.asm:60 TYA
    case 0xC01C0A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:61 BRA @UNKNOWN7
    case 0xC01C0B: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C0/C01B96.asm:63 TXY
    case 0xC01C0D: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:64 INY
    case 0xC01C0E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:66 LDA @LOCAL02
    case 0xC01C0F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C01B96.asm:67 STA @VIRTUAL02
    case 0xC01C11: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:68 LDA #88
    case 0xC01C13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x000058, 3); return true;
    // src/unknown/C0/C01B96.asm:68 LDA #88
    // Overlapping static entry reached from 0xC01C13.
    case 0xC01C15: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C0/C01B96.asm:69 SEC
    case 0xC01C16: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:70 SBC @VIRTUAL02
    case 0xC01C17: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:71 STA @VIRTUAL02
    case 0xC01C19: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01B96.asm:72 TYA
    case 0xC01C1B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C01B96.asm:73 CMP @VIRTUAL02
    case 0xC01C1C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C01B96.asm:74 BLTEQ @UNKNOWN0
    case 0xC01C1E: cpu.execute_instruction<0x90>(0x0000A1, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C01B96.asm:74 BLTEQ @UNKNOWN0
    case 0xC01C20: cpu.execute_instruction<0xF0>(0x00009F, 2); return true;
    // src/unknown/C0/C01B96.asm:75 LDA #.LOWORD(-253)
    case 0xC01C22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x00FF03, 3); return true;
    // src/unknown/C0/C01B96.asm:75 LDA #.LOWORD(-253)
    // Overlapping static entry reached from 0xC01C22.
    case 0xC01C24: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C01B96.asm:77 END_C_FUNCTION
    case 0xC01C25: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C01B96.asm:77 END_C_FUNCTION
    case 0xC01C26: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01C52.asm (unresolved).
bool execute_unresolved_c0_c01c52_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01C52.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01C68: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C01C52.asm:18 END_STACK_VARS
    case 0xC01C6A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C01C52.asm:18 END_STACK_VARS
    case 0xC01C6B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C01C52.asm:18 END_STACK_VARS
    case 0xC01C6C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01C52.asm:18 END_STACK_VARS
    case 0xC01C6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01C52.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC01C6D.
    case 0xC01C6F: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C01C52.asm:18 END_STACK_VARS
    case 0xC01C70: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C01C52.asm:18 END_STACK_VARS
    case 0xC01C71: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:28 STY @LOCAL07
    case 0xC01C72: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/unknown/C0/C01C52.asm:28 STY @LOCAL07
    // Overlapping static entry reached from 0xC01C6F.
    case 0xC01C73: cpu.execute_instruction<0x1E>(0x001C86, 3); return true;
    // src/unknown/C0/C01C52.asm:29 STX @LOCAL06
    case 0xC01C74: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C01C52.asm:30 STA @TMP2
    case 0xC01C76: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C01C52.asm:31 INC
    case 0xC01C78: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:32 AND #$FFFE
    case 0xC01C79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/unknown/C0/C01C52.asm:32 AND #$FFFE
    // Overlapping static entry reached from 0xC01C79.
    case 0xC01C7B: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/unknown/C0/C01C52.asm:33 STA @VIRTUAL02
    case 0xC01C7C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01C52.asm:34 LDA @LOCAL06
    case 0xC01C7E: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C01C52.asm:34 LDA @LOCAL06
    // Overlapping static entry reached from 0xC01C7B.
    case 0xC01C7F: cpu.execute_instruction<0x1C>(0x00291A, 3); return true;
    // src/unknown/C0/C01C52.asm:35 INC
    case 0xC01C80: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:36 AND #$FFFE
    case 0xC01C81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/unknown/C0/C01C52.asm:36 AND #$FFFE
    // Overlapping static entry reached from 0xC01C7F.
    case 0xC01C82: cpu.execute_instruction<0xFE>(0x0085FF, 3); return true;
    // src/unknown/C0/C01C52.asm:36 AND #$FFFE
    // Overlapping static entry reached from 0xC01C81.
    case 0xC01C83: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/unknown/C0/C01C52.asm:37 STA @TMP0
    case 0xC01C84: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:37 STA @TMP0
    // Overlapping static entry reached from 0xC01C82.
    case 0xC01C85: cpu.execute_instruction<0x04>(0x0000A4, 2); return true;
    // src/unknown/C0/C01C52.asm:38 LDY @TMP0
    case 0xC01C86: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:38 LDY @TMP0
    // Overlapping static entry reached from 0xC01C83.
    case 0xC01C87: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/unknown/C0/C01C52.asm:39 LDA @VIRTUAL02
    case 0xC01C88: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C01C52.asm:39 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC01C87.
    case 0xC01C89: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C01C52.asm:40 JSL MULT16
    case 0xC01C8A: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C0/C01C52.asm:41 LSR
    case 0xC01C8E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:42 LSR
    case 0xC01C8F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:43 STA @LOCAL04
    case 0xC01C90: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C01C52.asm:44 LDY @LOCAL07
    case 0xC01C92: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/unknown/C0/C01C52.asm:45 TYX
    case 0xC01C94: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:46 LDA @LOCAL04
    case 0xC01C95: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C01C52.asm:47 JSL UNKNOWN_C01B96
    case 0xC01C97: cpu.execute_instruction<0x22>(0xC01BAC, 4); return true;
    // src/unknown/C0/C01C52.asm:48 STA @LOCAL03
    case 0xC01C9B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C01C52.asm:49 CMP #$7FFF
    case 0xC01C9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x007FFF, 3); return true;
    // src/unknown/C0/C01C52.asm:49 CMP #$7FFF
    // Overlapping static entry reached from 0xC01C9D.
    case 0xC01C9F: cpu.execute_instruction<0x7F>(0xF00790, 4); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C01C52.asm:50 BLTEQ @UNKNOWN0
    case 0xC01CA0: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C01C52.asm:50 BLTEQ @UNKNOWN0
    case 0xC01CA2: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C01C52.asm:50 BLTEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC01C9F.
    case 0xC01CA3: cpu.execute_instruction<0x05>(0x0000A5, 2); return true;
    // src/unknown/C0/C01C52.asm:51 LDA @LOCAL03
    case 0xC01CA4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C01C52.asm:51 LDA @LOCAL03
    // Overlapping static entry reached from 0xC01CA3.
    case 0xC01CA5: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/unknown/C0/C01C52.asm:52 JMP @UNKNOWN6
    case 0xC01CA6: cpu.execute_instruction<0x4C>(0x001D4C, 3); return true;
    // src/unknown/C0/C01C52.asm:52 JMP @UNKNOWN6
    // Overlapping static entry reached from 0xC01CA5.
    case 0xC01CA7: cpu.execute_instruction<0x4C>(0x00A51D, 3); return true;
    // src/unknown/C0/C01C52.asm:54 LDA @VIRTUAL02
    case 0xC01CA9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C01C52.asm:55 CMP @TMP2
    case 0xC01CAB: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C0/C01C52.asm:56 BNE @UNKNOWN1
    case 0xC01CAD: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C0/C01C52.asm:57 LDA @TMP0
    case 0xC01CAF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:58 CMP @LOCAL06
    case 0xC01CB1: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C01C52.asm:59 BEQL @UNKNOWN5
    case 0xC01CB3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C01C52.asm:59 BEQL @UNKNOWN5
    case 0xC01CB5: cpu.execute_instruction<0x4C>(0x001D4A, 3); return true;
    // src/unknown/C0/C01C52.asm:61 LDA @LOCAL03
    case 0xC01CB8: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C01C52.asm:62 STA @VIRTUAL04
    case 0xC01CBA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:63 BRA @UNKNOWN4
    case 0xC01CBC: cpu.execute_instruction<0x80>(0x000078, 2); return true;
    // src/unknown/C0/C01C52.asm:65 LDA @VIRTUAL04
    case 0xC01CBE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:66 CLC
    case 0xC01CC0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:67 ADC #8
    case 0xC01CC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C0/C01C52.asm:67 ADC #8
    // Overlapping static entry reached from 0xC01CC1.
    case 0xC01CC3: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C01C52.asm:68 AND #$00F8
    case 0xC01CC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x0000F8, 3); return true;
    // src/unknown/C0/C01C52.asm:68 AND #$00F8
    // Overlapping static entry reached from 0xC01CC4.
    case 0xC01CC6: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C0/C01C52.asm:69 SEC
    case 0xC01CC7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:70 SBC @VIRTUAL04
    case 0xC01CC8: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:71 STA @TMP1
    case 0xC01CCA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C01C52.asm:72 LDA @LOCAL01
    case 0xC01CCC: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C01C52.asm:73 SEC
    case 0xC01CCE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:74 SBC @VIRTUAL04
    case 0xC01CCF: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:75 CMP @TMP1
    case 0xC01CD1: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C0/C01C52.asm:76 BCS @UNKNOWN3
    case 0xC01CD3: cpu.execute_instruction<0xB0>(0x000002, 2); return true;
    // src/unknown/C0/C01C52.asm:77 STA @TMP1
    case 0xC01CD5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C01C52.asm:79 LDA @TMP1
    case 0xC01CD7: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C0/C01C52.asm:80 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC01CD9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C0/C01C52.asm:80 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC01CDA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C0/C01C52.asm:80 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC01CDB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C0/C01C52.asm:80 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC01CDC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C0/C01C52.asm:80 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC01CDD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C0/C01C52.asm:80 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC01CDE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:81 STA @VIRTUAL02
    case 0xC01CDF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:82 LOADPTR UNKNOWN_C40BE8, @VIRTUAL06
    case 0xC01CE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000B34, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:82 LOADPTR UNKNOWN_C40BE8, @VIRTUAL06
    // Overlapping static entry reached from 0xC01CE1.
    case 0xC01CE3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C01C52.asm:82 LOADPTR UNKNOWN_C40BE8, @VIRTUAL06
    case 0xC01CE4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:82 LOADPTR UNKNOWN_C40BE8, @VIRTUAL06
    case 0xC01CE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:82 LOADPTR UNKNOWN_C40BE8, @VIRTUAL06
    // Overlapping static entry reached from 0xC01CE6.
    case 0xC01CE8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C01C52.asm:82 LOADPTR UNKNOWN_C40BE8, @VIRTUAL06
    case 0xC01CE9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:83 LOADPTR UNKNOWN_C42F8C, @VIRTUAL0A
    case 0xC01CEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x002ECA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:83 LOADPTR UNKNOWN_C42F8C, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01CEB.
    case 0xC01CED: cpu.execute_instruction<0x2E>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C01C52.asm:83 LOADPTR UNKNOWN_C42F8C, @VIRTUAL0A
    case 0xC01CEE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:83 LOADPTR UNKNOWN_C42F8C, @VIRTUAL0A
    case 0xC01CF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C01C52.asm:83 LOADPTR UNKNOWN_C42F8C, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01CF0.
    case 0xC01CF2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C01C52.asm:83 LOADPTR UNKNOWN_C42F8C, @VIRTUAL0A
    case 0xC01CF3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C01C52.asm:84 LDA @VIRTUAL04
    case 0xC01CF5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:85 ASL
    case 0xC01CF7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:86 CLC
    case 0xC01CF8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:87 ADC @VIRTUAL0A
    case 0xC01CF9: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C01C52.asm:88 STA @VIRTUAL0A
    case 0xC01CFB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01C52.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01CFD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01C52.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01CFF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01C52.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01D01: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01C52.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01D03: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C01C52.asm:90 LDA [@VIRTUAL0A]
    case 0xC01D05: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C01C52.asm:91 CLC
    case 0xC01D07: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:92 ADC #VRAM::OBJ
    case 0xC01D08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x004000, 3); return true;
    // src/unknown/C0/C01C52.asm:92 ADC #VRAM::OBJ
    // Overlapping static entry reached from 0xC01D08.
    case 0xC01D0A: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:93 TAY
    case 0xC01D0B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:94 LDX @VIRTUAL02
    case 0xC01D0C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C01C52.asm:95 SEP #PROC_FLAGS::ACCUM8
    case 0xC01D0E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01C52.asm:96 LDA #3
    case 0xC01D10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // src/unknown/C0/C01C52.asm:97 JSL PREPARE_VRAM_COPY
    case 0xC01D12: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C0/C01C52.asm:97 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC01D10.
    case 0xC01D13: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C0/C01C52.asm:97 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC01D13.
    case 0xC01D15: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01C52.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01D16: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01C52.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC01D15.
    case 0xC01D17: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01C52.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01D18: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01C52.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC01D17.
    case 0xC01D19: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01C52.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01D1A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01C52.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01D1C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C01C52.asm:100 LDA [@VIRTUAL0A]
    case 0xC01D1E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C01C52.asm:101 CLC
    case 0xC01D20: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:102 ADC #VRAM::OBJ + 64 * 4
    case 0xC01D21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x004100, 3); return true;
    // src/unknown/C0/C01C52.asm:102 ADC #VRAM::OBJ + 64 * 4
    // Overlapping static entry reached from 0xC01D21.
    case 0xC01D23: cpu.execute_instruction<0x41>(0x0000A8, 2); return true;
    // src/unknown/C0/C01C52.asm:103 TAY
    case 0xC01D24: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:104 LDX @VIRTUAL02
    case 0xC01D25: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C01C52.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC01D27: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01C52.asm:106 LDA #3
    case 0xC01D29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // src/unknown/C0/C01C52.asm:107 JSL PREPARE_VRAM_COPY
    case 0xC01D2B: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C0/C01C52.asm:107 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC01D29.
    case 0xC01D2C: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C0/C01C52.asm:107 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC01D2C.
    case 0xC01D2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0004A5, 3); return true;
    // src/unknown/C0/C01C52.asm:109 LDA @VIRTUAL04
    case 0xC01D2F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:109 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC01D2E.
    case 0xC01D30: cpu.execute_instruction<0x04>(0x000018, 2); return true;
    // src/unknown/C0/C01C52.asm:110 CLC
    case 0xC01D31: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:111 ADC @TMP1
    case 0xC01D32: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C0/C01C52.asm:112 STA @VIRTUAL04
    case 0xC01D34: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:114 LDA @LOCAL03
    case 0xC01D36: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C01C52.asm:115 CLC
    case 0xC01D38: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01C52.asm:116 ADC @LOCAL04
    case 0xC01D39: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C0/C01C52.asm:117 STA @LOCAL01
    case 0xC01D3B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C01C52.asm:118 STA @VIRTUAL02
    case 0xC01D3D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01C52.asm:119 LDA @VIRTUAL04
    case 0xC01D3F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01C52.asm:120 CMP @VIRTUAL02
    case 0xC01D41: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C01C52.asm:121 BCCL @UNKNOWN2
    case 0xC01D43: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C01C52.asm:121 BCCL @UNKNOWN2
    case 0xC01D45: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C01C52.asm:121 BCCL @UNKNOWN2
    case 0xC01D47: cpu.execute_instruction<0x4C>(0x001CBE, 3); return true;
    // src/unknown/C0/C01C52.asm:123 LDA @LOCAL03
    case 0xC01D4A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C01C52.asm:125 END_C_FUNCTION
    case 0xC01D4C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C01C52.asm:125 END_C_FUNCTION
    case 0xC01D4D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01D38.asm (unresolved).
bool execute_unresolved_c0_c01d38_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01D38.asm:3 BEGIN_C_FUNCTION
    case 0xC01D4E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C01D38.asm:15 END_STACK_VARS
    case 0xC01D50: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C01D38.asm:15 END_STACK_VARS
    case 0xC01D51: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C01D38.asm:15 END_STACK_VARS
    case 0xC01D52: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01D38.asm:15 END_STACK_VARS
    case 0xC01D53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01D38.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC01D53.
    case 0xC01D55: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C01D38.asm:15 END_STACK_VARS
    case 0xC01D56: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C01D38.asm:15 END_STACK_VARS
    case 0xC01D57: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:16 STY @LOCAL05
    case 0xC01D58: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C01D38.asm:16 STY @LOCAL05
    // Overlapping static entry reached from 0xC01D55.
    case 0xC01D59: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:17 STX @VIRTUAL04
    case 0xC01D5A: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C01D38.asm:18 TAX
    case 0xC01D5C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01D38.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC01D5D: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01D38.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC01D5F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01D38.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC01D61: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01D38.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC01D63: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C01D38.asm:20 LDA [@VIRTUAL06]
    case 0xC01D65: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:21 AND #$00FF
    case 0xC01D67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C01D38.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC01D67.
    case 0xC01D69: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C01D38.asm:22 STA @VIRTUAL02
    case 0xC01D6A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01D38.asm:23 STA @LOCAL04
    case 0xC01D6C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C01D38.asm:24 INC @VIRTUAL06
    case 0xC01D6E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:25 INC @VIRTUAL06
    case 0xC01D70: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:26 LDY #0
    case 0xC01D72: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C01D38.asm:26 LDY #0
    // Overlapping static entry reached from 0xC01D72.
    case 0xC01D74: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C01D38.asm:27 STY @LOCAL03
    case 0xC01D75: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C01D38.asm:28 JMP @UNKNOWN3
    case 0xC01D77: cpu.execute_instruction<0x4C>(0x001DF7, 3); return true;
    // src/unknown/C0/C01D38.asm:30 LDA #0
    case 0xC01D7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C01D38.asm:30 LDA #0
    // Overlapping static entry reached from 0xC01D7A.
    case 0xC01D7C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C01D38.asm:31 STA @LOCAL02
    case 0xC01D7D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C01D38.asm:32 BRA @UNKNOWN2
    case 0xC01D7F: cpu.execute_instruction<0x80>(0x000069, 2); return true;
    // src/unknown/C0/C01D38.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC01D81: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:35 LDA [@VIRTUAL06]
    case 0xC01D83: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:36 STA OVERWORLD_SPRITEMAPS + spritemap::y_offset,X
    case 0xC01D85: cpu.execute_instruction<0x9D>(0x004A04, 3); return true;
    // src/unknown/C0/C01D38.asm:37 INX ;spritemap::tile
    case 0xC01D88: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:38 STX @LOCAL01
    case 0xC01D89: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C01D38.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC01D8B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:40 LDA @LOCAL02
    case 0xC01D8D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C01D38.asm:41 STA @VIRTUAL02
    case 0xC01D8F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C01D38.asm:42 LDA @VIRTUAL04
    case 0xC01D91: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C01D38.asm:43 CLC
    case 0xC01D93: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:44 ADC @VIRTUAL02
    case 0xC01D94: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C01D38.asm:45 ASL
    case 0xC01D96: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:46 TAX
    case 0xC01D97: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:47 LDA f:UNKNOWN_C4303C,X
    case 0xC01D98: cpu.execute_instruction<0xBF>(0xC42F7A, 4); return true;
    // src/unknown/C0/C01D38.asm:48 STA @LOCAL00
    case 0xC01D9C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C01D38.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC01D9E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:50 LDX @LOCAL01
    case 0xC01DA0: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C01D38.asm:51 STA OVERWORLD_SPRITEMAPS,X
    case 0xC01DA2: cpu.execute_instruction<0x9D>(0x004A04, 3); return true;
    // src/unknown/C0/C01D38.asm:52 INX ;spritemap::flags
    case 0xC01DA5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC01DA6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:54 LDA @LOCAL00
    case 0xC01DA8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C01D38.asm:55 XBA
    case 0xC01DAA: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:56 AND #$00FF
    case 0xC01DAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C01D38.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC01DAB.
    case 0xC01DAD: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C0/C01D38.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC01DAE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:58 STA @VIRTUAL00
    case 0xC01DB0: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C01D38.asm:59 REP #PROC_FLAGS::ACCUM8
    case 0xC01DB2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:60 LDA @LOCAL05
    case 0xC01DB4: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C01D38.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC01DB6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:62 STA @VIRTUAL01
    case 0xC01DB8: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C0/C01D38.asm:63 LDY #spritemap::flags
    case 0xC01DBA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C01D38.asm:63 LDY #spritemap::flags
    // Overlapping static entry reached from 0xC01DBA.
    case 0xC01DBC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C01D38.asm:64 LDA [@VIRTUAL06],Y
    case 0xC01DBD: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:65 AND #$00FE
    case 0xC01DBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x0005FE, 3); return true;
    // src/unknown/C0/C01D38.asm:66 ORA @VIRTUAL01
    case 0xC01DC1: cpu.execute_instruction<0x05>(0x000001, 2); return true;
    // src/unknown/C0/C01D38.asm:66 ORA @VIRTUAL01
    // Overlapping static entry reached from 0xC01DBF.
    case 0xC01DC2: cpu.execute_instruction<0x01>(0x000005, 2); return true;
    // src/unknown/C0/C01D38.asm:67 ORA @VIRTUAL00
    case 0xC01DC3: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C0/C01D38.asm:67 ORA @VIRTUAL00
    // Overlapping static entry reached from 0xC01DC2.
    case 0xC01DC4: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C01D38.asm:68 STA OVERWORLD_SPRITEMAPS,X
    case 0xC01DC5: cpu.execute_instruction<0x9D>(0x004A04, 3); return true;
    // src/unknown/C0/C01D38.asm:69 INX ;spritemap::x_offset
    case 0xC01DC8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:70 LDY #spritemap::x_offset
    case 0xC01DC9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C01D38.asm:70 LDY #spritemap::x_offset
    // Overlapping static entry reached from 0xC01DC9.
    case 0xC01DCB: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C01D38.asm:71 LDA [@VIRTUAL06],Y
    case 0xC01DCC: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:72 STA OVERWORLD_SPRITEMAPS,X
    case 0xC01DCE: cpu.execute_instruction<0x9D>(0x004A04, 3); return true;
    // src/unknown/C0/C01D38.asm:73 INX ;spritemap::special_flags
    case 0xC01DD1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:74 LDY #spritemap::special_flags
    case 0xC01DD2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C0/C01D38.asm:74 LDY #spritemap::special_flags
    // Overlapping static entry reached from 0xC01DD2.
    case 0xC01DD4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C01D38.asm:75 LDA [@VIRTUAL06],Y
    case 0xC01DD5: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:76 STA OVERWORLD_SPRITEMAPS,X
    case 0xC01DD7: cpu.execute_instruction<0x9D>(0x004A04, 3); return true;
    // src/unknown/C0/C01D38.asm:77 INX ;next spritemap::y_offset
    case 0xC01DDA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC01DDB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01D38.asm:79 LDA #.SIZEOF(spritemap)
    case 0xC01DDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C01D38.asm:79 LDA #.SIZEOF(spritemap)
    // Overlapping static entry reached from 0xC01DDD.
    case 0xC01DDF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C01D38.asm:80 CLC
    case 0xC01DE0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:81 ADC @VIRTUAL06
    case 0xC01DE1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:82 STA @VIRTUAL06
    case 0xC01DE3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C01D38.asm:83 LDA @LOCAL02
    case 0xC01DE5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C01D38.asm:84 INC
    case 0xC01DE7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:85 STA @LOCAL02
    case 0xC01DE8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C01D38.asm:87 LDY @LOCAL04
    case 0xC01DEA: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C01D38.asm:88 STY @VIRTUAL02
    case 0xC01DEC: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C01D38.asm:89 CMP @VIRTUAL02
    case 0xC01DEE: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C01D38.asm:90 BCC @UNKNOWN1
    case 0xC01DF0: cpu.execute_instruction<0x90>(0x00008F, 2); return true;
    // src/unknown/C0/C01D38.asm:91 LDY @LOCAL03
    case 0xC01DF2: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C01D38.asm:92 INY
    case 0xC01DF4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C01D38.asm:93 STY @LOCAL03
    case 0xC01DF5: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C01D38.asm:95 CPY #2
    case 0xC01DF7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000002, 2); else cpu.execute_instruction<0xC0>(0x000002, 3); return true;
    // src/unknown/C0/C01D38.asm:95 CPY #2
    // Overlapping static entry reached from 0xC01DF7.
    case 0xC01DF9: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C01D38.asm:96 BCCL @UNKNOWN0
    case 0xC01DFA: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C01D38.asm:96 BCCL @UNKNOWN0
    case 0xC01DFC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C01D38.asm:96 BCCL @UNKNOWN0
    case 0xC01DFE: cpu.execute_instruction<0x4C>(0x001D7A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C01D38.asm:97 END_C_FUNCTION
    case 0xC01E01: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C01D38.asm:97 END_C_FUNCTION
    case 0xC01E02: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C01DED.asm (unresolved).
bool execute_unresolved_c0_c01ded_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C01DED.asm:3 BEGIN_C_FUNCTION
    case 0xC01E03: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C01DED.asm:7 END_STACK_VARS
    case 0xC01E05: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C01DED.asm:7 END_STACK_VARS
    case 0xC01E06: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C01DED.asm:7 END_STACK_VARS
    case 0xC01E07: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01DED.asm:7 END_STACK_VARS
    case 0xC01E08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C01DED.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC01E08.
    case 0xC01E0A: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C01DED.asm:7 END_STACK_VARS
    case 0xC01E0B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C01DED.asm:7 END_STACK_VARS
    case 0xC01E0C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C01DED.asm:8 STA @LOCAL00
    case 0xC01E0D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C01DED.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC01E0A.
    case 0xC01E0E: cpu.execute_instruction<0x0E>(0x0041A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C01DED.asm:9 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x006541, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C01DED.asm:9 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E0F.
    case 0xC01E11: cpu.execute_instruction<0x65>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C01DED.asm:9 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E12: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C01DED.asm:9 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E11.
    case 0xC01E13: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C01DED.asm:9 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C01DED.asm:9 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E14.
    case 0xC01E16: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C01DED.asm:9 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E17: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C01DED.asm:10 LDA @LOCAL00
    case 0xC01E19: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/unknown/C0/C01DED.asm:11 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01E1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/unknown/C0/C01DED.asm:11 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01E1C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C01DED.asm:12 CLC
    case 0xC01E1D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C01DED.asm:13 ADC @VIRTUAL0A
    case 0xC01E1E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C01DED.asm:14 STA @VIRTUAL0A
    case 0xC01E20: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C01DED.asm:15 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C01DED.asm:15 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC01E22.
    case 0xC01E24: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C01DED.asm:15 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E25: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C01DED.asm:15 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E27: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C01DED.asm:15 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E28: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C01DED.asm:15 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E2A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C01DED.asm:15 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E2C: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C01DED.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC01E2E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01DED.asm:17 LDY #sprite_grouping::width
    case 0xC01E30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C01DED.asm:17 LDY #sprite_grouping::width
    // Overlapping static entry reached from 0xC01E30.
    case 0xC01E32: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C01DED.asm:18 LDA [@VIRTUAL06],Y
    case 0xC01E33: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C01DED.asm:19 LSR
    case 0xC01E35: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01DED.asm:20 LSR
    case 0xC01E36: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01DED.asm:21 LSR
    case 0xC01E37: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01DED.asm:22 LSR
    case 0xC01E38: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C01DED.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC01E39: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01DED.asm:24 AND #$00FF
    case 0xC01E3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C01DED.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC01E3B.
    case 0xC01E3D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C01DED.asm:25 STA NEW_SPRITE_TILE_WIDTH
    case 0xC01E3E: cpu.execute_instruction<0x8D>(0x004A00, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C01DED.asm:26 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC01E41: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C01DED.asm:26 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC01E43: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C01DED.asm:26 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC01E45: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C01DED.asm:26 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC01E47: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C01DED.asm:27 LDA [@VIRTUAL0A]
    case 0xC01E49: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C01DED.asm:28 AND #$00FF
    case 0xC01E4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C01DED.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC01E4B.
    case 0xC01E4D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C01DED.asm:29 STA NEW_SPRITE_TILE_HEIGHT
    case 0xC01E4E: cpu.execute_instruction<0x8D>(0x004A02, 3); return true;
    // src/unknown/C0/C01DED.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC01E51: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C01DED.asm:31 LDY #sprite_grouping::size
    case 0xC01E53: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C01DED.asm:31 LDY #sprite_grouping::size
    // Overlapping static entry reached from 0xC01E53.
    case 0xC01E55: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C01DED.asm:32 LDA [@VIRTUAL06],Y
    case 0xC01E56: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C01DED.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC01E58: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C01DED.asm:34 AND #$00FF
    case 0xC01E5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C01DED.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC01E5A.
    case 0xC01E5C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C01DED.asm:35 END_C_FUNCTION
    case 0xC01E5D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C01DED.asm:35 END_C_FUNCTION
    case 0xC01E5E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C020F1.asm (unresolved).
bool execute_unresolved_c0_c020f1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C020F1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC020FF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C020F1.asm:6 END_STACK_VARS
    case 0xC02101: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C020F1.asm:6 END_STACK_VARS
    case 0xC02102: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C020F1.asm:6 END_STACK_VARS
    case 0xC02103: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C020F1.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC02103.
    case 0xC02105: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C020F1.asm:6 END_STACK_VARS
    case 0xC02106: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC02107: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C020F1.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC02105.
    case 0xC02109: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:8 STA @VIRTUAL02
    case 0xC0210A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C020F1.asm:9 ASL
    case 0xC0210C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:10 TAY
    case 0xC0210D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:11 STY @LOCAL00
    case 0xC0210E: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C020F1.asm:12 LDA ENTITY_SPRITEMAP_POINTER_LOW,Y
    case 0xC02110: cpu.execute_instruction<0xB9>(0x001124, 3); return true;
    // src/unknown/C0/C020F1.asm:13 JSL UNKNOWN_C01B15
    case 0xC02113: cpu.execute_instruction<0x22>(0xC01B2B, 4); return true;
    // src/unknown/C0/C020F1.asm:14 LDX #0
    case 0xC02117: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C020F1.asm:14 LDX #0
    // Overlapping static entry reached from 0xC02117.
    case 0xC02119: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C020F1.asm:15 LDA @VIRTUAL02
    case 0xC0211A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C020F1.asm:16 JSL ALLOC_SPRITE_MEM
    case 0xC0211C: cpu.execute_instruction<0x22>(0xC01C27, 4); return true;
    // src/unknown/C0/C020F1.asm:17 LDY @LOCAL00
    case 0xC02120: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C020F1.asm:18 LDA ENTITY_NPC_IDS,Y
    case 0xC02122: cpu.execute_instruction<0xB9>(0x003098, 3); return true;
    // src/unknown/C0/C020F1.asm:19 AND #$F000
    case 0xC02125: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00F000, 3); return true;
    // src/unknown/C0/C020F1.asm:19 AND #$F000
    // Overlapping static entry reached from 0xC02125.
    case 0xC02127: cpu.execute_instruction<0xF0>(0x0000C9, 2); return true;
    // src/unknown/C0/C020F1.asm:20 CMP #$8000
    case 0xC02128: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C020F1.asm:20 CMP #$8000
    // Overlapping static entry reached from 0xC02127.
    case 0xC02129: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C020F1.asm:20 CMP #$8000
    // Overlapping static entry reached from 0xC02128.
    case 0xC0212A: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/C0/C020F1.asm:21 BNE @UNKNOWN0
    case 0xC0212B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C020F1.asm:22 DEC OVERWORLD_ENEMY_COUNT
    case 0xC0212D: cpu.execute_instruction<0xCE>(0x004DE2, 3); return true;
    // src/unknown/C0/C020F1.asm:24 LDA @VIRTUAL02
    case 0xC02130: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C020F1.asm:25 ASL
    case 0xC02132: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:26 TAX
    case 0xC02133: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:27 LDA ENTITY_ENEMY_IDS,X
    case 0xC02134: cpu.execute_instruction<0xBD>(0x003110, 3); return true;
    // src/unknown/C0/C020F1.asm:28 CMP #ENEMY::MAGIC_BUTTERFLY
    case 0xC02137: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E1, 2); else cpu.execute_instruction<0xC9>(0x0000E1, 3); return true;
    // src/unknown/C0/C020F1.asm:28 CMP #ENEMY::MAGIC_BUTTERFLY
    // Overlapping static entry reached from 0xC02137.
    case 0xC02139: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C020F1.asm:29 BNE @UNKNOWN1
    case 0xC0213A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C020F1.asm:30 STZ MAGIC_BUTTERFLY_SPAWNED
    case 0xC0213C: cpu.execute_instruction<0x9C>(0x004DE6, 3); return true;
    // src/unknown/C0/C020F1.asm:32 LDA @VIRTUAL02
    case 0xC0213F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C020F1.asm:32 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC02175.
    case 0xC02140: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C0/C020F1.asm:33 ASL
    case 0xC02141: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:34 TAX
    case 0xC02142: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:35 LDA #.LOWORD(-1)
    case 0xC02143: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C020F1.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02143.
    case 0xC02145: cpu.execute_instruction<0xFF>(0x30D49D, 4); return true;
    // src/unknown/C0/C020F1.asm:36 STA ENTITY_SPRITE_IDS,X
    case 0xC02146: cpu.execute_instruction<0x9D>(0x0030D4, 3); return true;
    // src/unknown/C0/C020F1.asm:37 STA ENTITY_NPC_IDS,X
    case 0xC02149: cpu.execute_instruction<0x9D>(0x003098, 3); return true;
    // src/unknown/C0/C020F1.asm:37 STA ENTITY_NPC_IDS,X
    // Overlapping static entry reached from 0xC02178.
    case 0xC0214A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C020F1.asm:37 STA ENTITY_NPC_IDS,X
    // Overlapping static entry reached from 0xC0214A.
    case 0xC0214B: cpu.execute_instruction<0x30>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C020F1.asm:38 END_C_FUNCTION
    case 0xC0214C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C020F1.asm:38 END_C_FUNCTION
    case 0xC0214D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C02140.asm (unresolved).
bool execute_unresolved_c0_c02140_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C02140.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0214E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C02140.asm:7 END_STACK_VARS
    case 0xC02150: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C02140.asm:7 END_STACK_VARS
    case 0xC02151: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C02140.asm:7 END_STACK_VARS
    case 0xC02152: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02140.asm:7 END_STACK_VARS
    case 0xC02153: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02140.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC02153.
    case 0xC02155: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C02140.asm:7 END_STACK_VARS
    case 0xC02156: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C02140.asm:7 END_STACK_VARS
    case 0xC02157: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C02140.asm:8 STA @VIRTUAL02
    case 0xC02158: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02140.asm:8 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC02155.
    case 0xC02159: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C0/C02140.asm:9 ASL
    case 0xC0215A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02140.asm:10 TAY
    case 0xC0215B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C02140.asm:11 STY @LOCAL00
    case 0xC0215C: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C02140.asm:12 LDA ENTITY_SPRITEMAP_POINTER_LOW,Y
    case 0xC0215E: cpu.execute_instruction<0xB9>(0x001124, 3); return true;
    // src/unknown/C0/C02140.asm:13 JSL UNKNOWN_C01B15
    case 0xC02161: cpu.execute_instruction<0x22>(0xC01B2B, 4); return true;
    // src/unknown/C0/C02140.asm:14 LDX #0
    case 0xC02165: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C02140.asm:14 LDX #0
    // Overlapping static entry reached from 0xC02165.
    case 0xC02167: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C02140.asm:15 LDA @VIRTUAL02
    case 0xC02168: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C02140.asm:16 JSL ALLOC_SPRITE_MEM
    case 0xC0216A: cpu.execute_instruction<0x22>(0xC01C27, 4); return true;
    // src/unknown/C0/C02140.asm:17 LDY @LOCAL00
    case 0xC0216E: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C02140.asm:18 LDA ENTITY_NPC_IDS,Y
    case 0xC02170: cpu.execute_instruction<0xB9>(0x003098, 3); return true;
    // src/unknown/C0/C02140.asm:19 AND #$F000
    case 0xC02173: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00F000, 3); return true;
    // src/unknown/C0/C02140.asm:19 AND #$F000
    // Overlapping static entry reached from 0xC02173.
    case 0xC02175: cpu.execute_instruction<0xF0>(0x0000C9, 2); return true;
    // src/unknown/C0/C02140.asm:20 CMP #$8000
    case 0xC02176: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C02140.asm:20 CMP #$8000
    // Overlapping static entry reached from 0xC02175.
    case 0xC02177: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C02140.asm:20 CMP #$8000
    // Overlapping static entry reached from 0xC02176.
    case 0xC02178: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/C0/C02140.asm:21 BNE @UNKNOWN0
    case 0xC02179: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C02140.asm:22 DEC OVERWORLD_ENEMY_COUNT
    case 0xC0217B: cpu.execute_instruction<0xCE>(0x004DE2, 3); return true;
    // src/unknown/C0/C02140.asm:24 LDA @VIRTUAL02
    case 0xC0217E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C02140.asm:25 ASL
    case 0xC02180: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02140.asm:26 TAX
    case 0xC02181: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02140.asm:27 LDA ENTITY_ENEMY_IDS,X
    case 0xC02182: cpu.execute_instruction<0xBD>(0x003110, 3); return true;
    // src/unknown/C0/C02140.asm:28 CMP #ENEMY::MAGIC_BUTTERFLY
    case 0xC02185: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E1, 2); else cpu.execute_instruction<0xC9>(0x0000E1, 3); return true;
    // src/unknown/C0/C02140.asm:28 CMP #ENEMY::MAGIC_BUTTERFLY
    // Overlapping static entry reached from 0xC02185.
    case 0xC02187: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02140.asm:29 BNE @UNKNOWN1
    case 0xC02188: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C02140.asm:30 STZ MAGIC_BUTTERFLY_SPAWNED
    case 0xC0218A: cpu.execute_instruction<0x9C>(0x004DE6, 3); return true;
    // src/unknown/C0/C02140.asm:32 LDA @VIRTUAL02
    case 0xC0218D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C02140.asm:33 ASL
    case 0xC0218F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02140.asm:34 TAX
    case 0xC02190: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02140.asm:35 LDA #.LOWORD(-1)
    case 0xC02191: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C02140.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02191.
    case 0xC02193: cpu.execute_instruction<0xFF>(0x30D49D, 4); return true;
    // src/unknown/C0/C02140.asm:36 STA ENTITY_SPRITE_IDS,X
    case 0xC02194: cpu.execute_instruction<0x9D>(0x0030D4, 3); return true;
    // src/unknown/C0/C02140.asm:37 STA ENTITY_NPC_IDS,X
    case 0xC02197: cpu.execute_instruction<0x9D>(0x003098, 3); return true;
    // src/unknown/C0/C02140.asm:38 LDA @VIRTUAL02
    case 0xC0219A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C02140.asm:39 JSL UNKNOWN_C09C35
    case 0xC0219C: cpu.execute_instruction<0x22>(0xC09C14, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C02140.asm:40 END_C_FUNCTION
    case 0xC021A0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C02140.asm:40 END_C_FUNCTION
    case 0xC021A1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C02194.asm (unresolved).
bool execute_unresolved_c0_c02194_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C02194.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC021A2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C02194.asm:7 END_STACK_VARS
    case 0xC021A4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C02194.asm:7 END_STACK_VARS
    case 0xC021A5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02194.asm:7 END_STACK_VARS
    case 0xC021A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02194.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC021A6.
    case 0xC021A8: cpu.execute_instruction<0xFF>(0xE69C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C02194.asm:7 END_STACK_VARS
    case 0xC021A9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:8 STZ MAGIC_BUTTERFLY_SPAWNED
    case 0xC021AA: cpu.execute_instruction<0x9C>(0x004DE6, 3); return true;
    // src/unknown/C0/C02194.asm:8 STZ MAGIC_BUTTERFLY_SPAWNED
    // Overlapping static entry reached from 0xC021A8.
    case 0xC021AC: cpu.execute_instruction<0x4D>(0x00EE9C, 3); return true;
    // src/unknown/C0/C02194.asm:9 STZ ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    case 0xC021AD: cpu.execute_instruction<0x9C>(0x004DEE, 3); return true;
    // src/unknown/C0/C02194.asm:9 STZ ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    // Overlapping static entry reached from 0xC021AC.
    case 0xC021AF: cpu.execute_instruction<0x4D>(0x00E29C, 3); return true;
    // src/unknown/C0/C02194.asm:10 STZ OVERWORLD_ENEMY_COUNT
    case 0xC021B0: cpu.execute_instruction<0x9C>(0x004DE2, 3); return true;
    // src/unknown/C0/C02194.asm:10 STZ OVERWORLD_ENEMY_COUNT
    // Overlapping static entry reached from 0xC021AF.
    case 0xC021B2: cpu.execute_instruction<0x4D>(0x0000A2, 3); return true;
    // src/unknown/C0/C02194.asm:11 LDX #0
    case 0xC021B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C02194.asm:11 LDX #0
    // Overlapping static entry reached from 0xC021B3.
    case 0xC021B5: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C02194.asm:12 STX @LOCAL01
    case 0xC021B6: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C02194.asm:13 BRA @UNKNOWN2
    case 0xC021B8: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C0/C02194.asm:15 TXA
    case 0xC021BA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:16 ASL
    case 0xC021BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:17 TAX
    case 0xC021BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:18 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC021BD: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/unknown/C0/C02194.asm:19 INC
    case 0xC021C0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:20 CMP #6
    case 0xC021C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C02194.asm:20 CMP #6
    // Overlapping static entry reached from 0xC021C1.
    case 0xC021C3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C02194.asm:21 BLTEQ @UNKNOWN1
    case 0xC021C4: cpu.execute_instruction<0x90>(0x000009, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C02194.asm:21 BLTEQ @UNKNOWN1
    case 0xC021C6: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C02194.asm:22 LDX @LOCAL01
    case 0xC021C8: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C02194.asm:23 TXA
    case 0xC021CA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:24 JSL UNKNOWN_C02140
    case 0xC021CB: cpu.execute_instruction<0x22>(0xC0214E, 4); return true;
    // src/unknown/C0/C02194.asm:26 LDX @LOCAL01
    case 0xC021CF: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C02194.asm:27 INX
    case 0xC021D1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:28 STX @LOCAL01
    case 0xC021D2: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C02194.asm:30 CPX #MAX_ENTITIES
    case 0xC021D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/unknown/C0/C02194.asm:30 CPX #MAX_ENTITIES
    // Overlapping static entry reached from 0xC021D4.
    case 0xC021D6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02194.asm:31 BNE @UNKNOWN0
    case 0xC021D7: cpu.execute_instruction<0xD0>(0x0000E1, 2); return true;
    // src/unknown/C0/C02194.asm:32 LDA #0
    case 0xC021D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C02194.asm:32 LDA #0
    // Overlapping static entry reached from 0xC021D9.
    case 0xC021DB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02194.asm:33 STA @LOCAL00
    case 0xC021DC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C02194.asm:34 BRA @UNKNOWN4
    case 0xC021DE: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C02194.asm:36 ASL
    case 0xC021E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:37 TAX
    case 0xC021E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:38 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC021E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C02194.asm:38 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC021E2.
    case 0xC021E4: cpu.execute_instruction<0xFF>(0x2C9C9D, 4); return true;
    // src/unknown/C0/C02194.asm:39 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC021E5: cpu.execute_instruction<0x9D>(0x002C9C, 3); return true;
    // src/unknown/C0/C02194.asm:40 LDA @LOCAL00
    case 0xC021E8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C02194.asm:41 INC
    case 0xC021EA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C02194.asm:42 STA @LOCAL00
    case 0xC021EB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C02194.asm:44 CMP #MAX_ENTITIES
    case 0xC021ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C02194.asm:44 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC021ED.
    case 0xC021EF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C02194.asm:45 BCC @UNKNOWN3
    case 0xC021F0: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C02194.asm:46 END_C_FUNCTION
    case 0xC021F2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C02194.asm:46 END_C_FUNCTION
    case 0xC021F3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C021E6.asm (unresolved).
bool execute_unresolved_c0_c021e6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C021E6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC021F4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C021E6.asm:6 END_STACK_VARS
    case 0xC021F6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C021E6.asm:6 END_STACK_VARS
    case 0xC021F7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C021E6.asm:6 END_STACK_VARS
    case 0xC021F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C021E6.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC021F8.
    case 0xC021FA: cpu.execute_instruction<0xFF>(0xE69C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C021E6.asm:6 END_STACK_VARS
    case 0xC021FB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:7 STZ MAGIC_BUTTERFLY_SPAWNED
    case 0xC021FC: cpu.execute_instruction<0x9C>(0x004DE6, 3); return true;
    // src/unknown/C0/C021E6.asm:7 STZ MAGIC_BUTTERFLY_SPAWNED
    // Overlapping static entry reached from 0xC021FA.
    case 0xC021FE: cpu.execute_instruction<0x4D>(0x00EE9C, 3); return true;
    // src/unknown/C0/C021E6.asm:8 STZ ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    case 0xC021FF: cpu.execute_instruction<0x9C>(0x004DEE, 3); return true;
    // src/unknown/C0/C021E6.asm:8 STZ ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    // Overlapping static entry reached from 0xC08139.
    case 0xC02200: cpu.execute_instruction<0xEE>(0x009C4D, 3); return true;
    // src/unknown/C0/C021E6.asm:8 STZ ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    // Overlapping static entry reached from 0xC021FE.
    case 0xC02201: cpu.execute_instruction<0x4D>(0x00E29C, 3); return true;
    // src/unknown/C0/C021E6.asm:9 STZ OVERWORLD_ENEMY_COUNT
    case 0xC02202: cpu.execute_instruction<0x9C>(0x004DE2, 3); return true;
    // src/unknown/C0/C021E6.asm:9 STZ OVERWORLD_ENEMY_COUNT
    // Overlapping static entry reached from 0xC02200.
    case 0xC02203: cpu.execute_instruction<0xE2>(0x00004D, 2); return true;
    // src/unknown/C0/C021E6.asm:9 STZ OVERWORLD_ENEMY_COUNT
    // Overlapping static entry reached from 0xC02201.
    case 0xC02204: cpu.execute_instruction<0x4D>(0x0000A2, 3); return true;
    // src/unknown/C0/C021E6.asm:10 LDX #0
    case 0xC02205: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C021E6.asm:10 LDX #0
    // Overlapping static entry reached from 0xC02205.
    case 0xC02207: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C021E6.asm:11 STX @LOCAL00
    case 0xC02208: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C021E6.asm:12 BRA @UNKNOWN2
    case 0xC0220A: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C021E6.asm:14 TXA
    case 0xC0220C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:15 ASL
    case 0xC0220D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:16 TAX
    case 0xC0220E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:17 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC0220F: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/unknown/C0/C021E6.asm:18 INC
    case 0xC02212: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:19 CMP #2
    case 0xC02213: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C021E6.asm:19 CMP #2
    // Overlapping static entry reached from 0xC02213.
    case 0xC02215: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C021E6.asm:20 BLTEQ @UNKNOWN1
    case 0xC02216: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C021E6.asm:20 BLTEQ @UNKNOWN1
    case 0xC02218: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C021E6.asm:21 LDX @LOCAL00
    case 0xC0221A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C021E6.asm:22 CPX #23
    case 0xC0221C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000017, 2); else cpu.execute_instruction<0xE0>(0x000017, 3); return true;
    // src/unknown/C0/C021E6.asm:22 CPX #23
    // Overlapping static entry reached from 0xC0221C.
    case 0xC0221E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C021E6.asm:23 BEQ @UNKNOWN1
    case 0xC0221F: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C021E6.asm:24 TXA
    case 0xC02221: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:25 JSL UNKNOWN_C02140
    case 0xC02222: cpu.execute_instruction<0x22>(0xC0214E, 4); return true;
    // src/unknown/C0/C021E6.asm:27 LDX @LOCAL00
    case 0xC02226: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C021E6.asm:28 INX
    case 0xC02228: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C021E6.asm:29 STX @LOCAL00
    case 0xC02229: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C021E6.asm:31 CPX #30
    case 0xC0222B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/unknown/C0/C021E6.asm:31 CPX #30
    // Overlapping static entry reached from 0xC0222B.
    case 0xC0222D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C021E6.asm:32 BNE @UNKNOWN0
    case 0xC0222E: cpu.execute_instruction<0xD0>(0x0000DC, 2); return true;
    // src/unknown/C0/C021E6.asm:33 LDA #23
    case 0xC02230: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/C0/C021E6.asm:33 LDA #23
    // Overlapping static entry reached from 0xC02230.
    case 0xC02232: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C021E6.asm:34 JSL UNKNOWN_C09C35
    case 0xC02233: cpu.execute_instruction<0x22>(0xC09C14, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C021E6.asm:35 END_C_FUNCTION
    case 0xC02237: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C021E6.asm:35 END_C_FUNCTION
    case 0xC02238: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0222B-jp.asm (unresolved).
bool execute_unresolved_c0_c0222b_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0222B-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC02239: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0222B-jp.asm:20 END_STACK_VARS
    case 0xC0223B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0222B-jp.asm:20 END_STACK_VARS
    case 0xC0223C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0222B-jp.asm:20 END_STACK_VARS
    case 0xC0223D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0222B-jp.asm:20 END_STACK_VARS
    case 0xC0223E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0222B-jp.asm:20 END_STACK_VARS
    // Overlapping static entry reached from 0xC0223E.
    case 0xC02240: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0222B-jp.asm:20 END_STACK_VARS
    case 0xC02241: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0222B-jp.asm:20 END_STACK_VARS
    case 0xC02242: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:21 STX @LOCAL0C
    case 0xC02243: cpu.execute_instruction<0x86>(0x000028, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:21 STX @LOCAL0C
    // Overlapping static entry reached from 0xC02240.
    case 0xC02244: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:22 STA @VIRTUAL04
    case 0xC02245: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:23 STA @LOCAL0B
    case 0xC02247: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:24 LDA @VIRTUAL04
    case 0xC02249: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:25 CMP #32
    case 0xC0224B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:25 CMP #32
    // Overlapping static entry reached from 0xC0224B.
    case 0xC0224D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:26 BCC @UNKNOWN0
    case 0xC0224E: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:27 JMP @UNKNOWN29
    case 0xC02250: cpu.execute_instruction<0x4C>(0x002568, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:29 LDA @LOCAL0C
    case 0xC02253: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:30 CMP #40
    case 0xC02255: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000028, 2); else cpu.execute_instruction<0xC9>(0x000028, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:30 CMP #40
    // Overlapping static entry reached from 0xC02255.
    case 0xC02257: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:31 BCC @UNKNOWN1
    case 0xC02258: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:32 JMP @UNKNOWN29
    case 0xC0225A: cpu.execute_instruction<0x4C>(0x002568, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:34 LDA @VIRTUAL04
    case 0xC0225D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:35 ASL
    case 0xC0225F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:36 STA @VIRTUAL02
    case 0xC02260: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:37 LDA @LOCAL0C
    case 0xC02262: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02264: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02265: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02266: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02267: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02268: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:38 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC02269: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:39 CLC
    case 0xC0226A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:40 ADC @VIRTUAL02
    case 0xC0226B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:41 TAX
    case 0xC0226D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:42 LDA f:SPRITE_PLACEMENT_PTR_TABLE,X
    case 0xC0226E: cpu.execute_instruction<0xBF>(0xCF6223, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:43 BEQL @UNKNOWN29
    case 0xC02272: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:43 BEQL @UNKNOWN29
    case 0xC02274: cpu.execute_instruction<0x4C>(0x002568, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:44 STORE_INT1632 @VIRTUAL06
    case 0xC02277: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:44 STORE_INT1632 @VIRTUAL06
    case 0xC02279: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:45 CLC
    case 0xC0227B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC0227C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC0227E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0227E.
    case 0xC02280: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02281: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02283: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02285: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CF, 2); else cpu.execute_instruction<0x69>(0x0000CF, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC02285.
    case 0xC02287: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:46 VAR_ADD_CONST_INT_ASSIGN SPRITE_PLACEMENT_TABLE & $FF0000, @VIRTUAL06
    case 0xC02288: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:47 LDA [@VIRTUAL06]
    case 0xC0228A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:48 STA @LOCAL0A
    case 0xC0228C: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:49 INC @VIRTUAL06
    case 0xC0228E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:50 INC @VIRTUAL06
    case 0xC02290: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B-jp.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02292: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02294: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02296: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:51 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02298: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:52 STZ @LOCAL09
    case 0xC0229A: cpu.execute_instruction<0x64>(0x000022, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:53 JMP @UNKNOWN28
    case 0xC0229C: cpu.execute_instruction<0x4C>(0x00255F, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B-jp.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC0229F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC022A1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC022A3: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:55 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC022A5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:56 LDA [@VIRTUAL06] ;sprite_placement::id
    case 0xC022A7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:57 STA @LOCAL08
    case 0xC022A9: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC022AB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:59 LDY #sprite_placement::y_coord
    case 0xC022AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:59 LDY #sprite_placement::y_coord
    // Overlapping static entry reached from 0xC022AD.
    case 0xC022AF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:60 LDA [@VIRTUAL0A],Y
    case 0xC022B0: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xC022B2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:62 AND #$00FF
    case 0xC022B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:62 AND #$00FF
    // Overlapping static entry reached from 0xC022B4.
    case 0xC022B6: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:63 TAY
    case 0xC022B7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:64 STY @LOCAL07
    case 0xC022B8: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC022BA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:66 LDY #sprite_placement::x_coord
    case 0xC022BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:66 LDY #sprite_placement::x_coord
    // Overlapping static entry reached from 0xC022BC.
    case 0xC022BE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:67 LDA [@VIRTUAL0A],Y
    case 0xC022BF: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC022C1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:69 AND #$00FF
    case 0xC022C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC022C3.
    case 0xC022C5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:70 TAX
    case 0xC022C6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:71 STX @LOCAL06
    case 0xC022C7: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:72 LDA #.SIZEOF(sprite_placement)
    case 0xC022C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:72 LDA #.SIZEOF(sprite_placement)
    // Overlapping static entry reached from 0xC022C9.
    case 0xC022CB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:73 CLC
    case 0xC022CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:74 ADC @VIRTUAL0A
    case 0xC022CD: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:75 STA @VIRTUAL0A
    case 0xC022CF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:76 LDY @LOCAL07
    case 0xC022D1: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:77 TYA
    case 0xC022D3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:78 LSR
    case 0xC022D4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:79 LSR
    case 0xC022D5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:80 LSR
    case 0xC022D6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:81 STA @VIRTUAL02
    case 0xC022D7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:82 LDA @LOCAL0B
    case 0xC022D9: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:83 STA @VIRTUAL04
    case 0xC022DB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:84 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:84 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:84 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:84 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:84 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:85 CLC
    case 0xC022E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:86 ADC @VIRTUAL02
    case 0xC022E3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:87 STA @LOCAL05
    case 0xC022E5: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:88 TXA
    case 0xC022E7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:89 LSR
    case 0xC022E8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:90 LSR
    case 0xC022E9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:91 LSR
    case 0xC022EA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:92 STA @VIRTUAL02
    case 0xC022EB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:93 LDA @LOCAL0C
    case 0xC022ED: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:94 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:94 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022F0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:94 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:94 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:94 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC022F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:95 CLC
    case 0xC022F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:96 ADC @VIRTUAL02
    case 0xC022F5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:97 STA @VIRTUAL02
    case 0xC022F7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:98 LDA @LOCAL05
    case 0xC022F9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:99 LSR
    case 0xC022FB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:100 LSR
    case 0xC022FC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:101 LSR
    case 0xC022FD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:102 LSR
    case 0xC022FE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:103 LSR
    case 0xC022FF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:104 PHA
    case 0xC02300: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:105 LDA @VIRTUAL02
    case 0xC02301: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:106 LSR
    case 0xC02303: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:107 LSR
    case 0xC02304: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:108 LSR
    case 0xC02305: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:109 LSR
    case 0xC02306: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:110 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02307: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:110 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02308: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:110 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02309: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:110 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0230A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:110 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0230B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:111 PLY
    case 0xC0230C: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:112 STY @VIRTUAL02
    case 0xC0230D: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:113 CLC
    case 0xC0230F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:114 ADC @VIRTUAL02
    case 0xC02310: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:115 TAX
    case 0xC02312: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:116 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC02313: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:117 AND #$00FF
    case 0xC02317: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:117 AND #$00FF
    // Overlapping static entry reached from 0xC02317.
    case 0xC02319: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:118 LSR
    case 0xC0231A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:119 LSR
    case 0xC0231B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:120 LSR
    case 0xC0231C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:121 CMP LOADED_MAP_TILE_COMBO
    case 0xC0231D: cpu.execute_instruction<0xCD>(0x0046F4, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:122 BNEL @UNKNOWN27
    case 0xC02320: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:122 BNEL @UNKNOWN27
    case 0xC02322: cpu.execute_instruction<0x4C>(0x00255D, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:123 LDA @LOCAL08
    case 0xC02325: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:124 JSL UNKNOWN_C0A21C
    case 0xC02327: cpu.execute_instruction<0x22>(0xC0A1FB, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:125 CMP #0
    case 0xC0232B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:125 CMP #0
    // Overlapping static entry reached from 0xC0232B.
    case 0xC0232D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:126 BNEL @UNKNOWN27
    case 0xC0232E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:126 BNEL @UNKNOWN27
    case 0xC02330: cpu.execute_instruction<0x4C>(0x00255D, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:127 LDY @LOCAL07
    case 0xC02333: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:128 STY @VIRTUAL02
    case 0xC02335: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:129 LDA @VIRTUAL04
    case 0xC02337: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:130 XBA
    case 0xC02339: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:131 AND #$FF00
    case 0xC0233A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:131 AND #$FF00
    // Overlapping static entry reached from 0xC0233A.
    case 0xC0233C: cpu.execute_instruction<0xFF>(0x026518, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:132 CLC
    case 0xC0233D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:133 ADC @VIRTUAL02
    case 0xC0233E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:134 TAY
    case 0xC02340: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:135 STY @LOCAL04
    case 0xC02341: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:136 LDX @LOCAL06
    case 0xC02343: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:137 STX @VIRTUAL02
    case 0xC02345: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:138 LDA @LOCAL0C
    case 0xC02347: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:139 XBA
    case 0xC02349: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:140 AND #$FF00
    case 0xC0234A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:140 AND #$FF00
    // Overlapping static entry reached from 0xC0234A.
    case 0xC0234C: cpu.execute_instruction<0xFF>(0x026518, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:141 CLC
    case 0xC0234D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:142 ADC @VIRTUAL02
    case 0xC0234E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:143 STA @VIRTUAL02
    case 0xC02350: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:144 STA @LOCAL03
    case 0xC02352: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:145 TYA
    case 0xC02354: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:146 SEC
    case 0xC02355: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:147 SBC BG1_X_POS
    case 0xC02356: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:148 STA @LOCAL06
    case 0xC02359: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:149 LDA @VIRTUAL02
    case 0xC0235B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:150 SEC
    case 0xC0235D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:151 SBC BG1_Y_POS
    case 0xC0235E: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:152 TAX
    case 0xC02361: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:153 LDA DEBUG
    case 0xC02362: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:154 BEQ @UNKNOWN8
    case 0xC02365: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:155 LDA PAD_STATE
    case 0xC02367: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:156 AND #PAD::L_BUTTON | PAD::R_BUTTON
    case 0xC0236A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000030, 2); else cpu.execute_instruction<0x29>(0x000030, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:156 AND #PAD::L_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC0236A.
    case 0xC0236C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:157 BNE @UNKNOWN6
    case 0xC0236D: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:158 LDA NPC_SPAWNS_ENABLED
    case 0xC0236F: cpu.execute_instruction<0xAD>(0x004DDE, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:159 DEC
    case 0xC02372: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:160 BEQ @UNKNOWN9
    case 0xC02373: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:162 LDA @LOCAL06
    case 0xC02375: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:163 CMP #256
    case 0xC02377: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:163 CMP #256
    // Overlapping static entry reached from 0xC02377.
    case 0xC02379: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:164 BCS @UNKNOWN9
    case 0xC0237A: cpu.execute_instruction<0xB0>(0x000023, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:164 BCS @UNKNOWN9
    // Overlapping static entry reached from 0xC02379.
    case 0xC0237B: cpu.execute_instruction<0x23>(0x0000E0, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:165 CPX #224
    case 0xC0237C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000E0, 2); else cpu.execute_instruction<0xE0>(0x0000E0, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:165 CPX #224
    // Overlapping static entry reached from 0xC0237B.
    case 0xC0237D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x00B000, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:165 CPX #224
    // Overlapping static entry reached from 0xC0237C.
    case 0xC0237E: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:166 BCCL @UNKNOWN27
    case 0xC0237F: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:166 BCCL @UNKNOWN27
    // Overlapping static entry reached from 0xC0237D.
    case 0xC02380: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:166 BCCL @UNKNOWN27
    case 0xC02381: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:166 BCCL @UNKNOWN27
    // Overlapping static entry reached from 0xC02380.
    case 0xC02382: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:166 BCCL @UNKNOWN27
    case 0xC02383: cpu.execute_instruction<0x4C>(0x00255D, 3); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:166 BCCL @UNKNOWN27
    // Overlapping static entry reached from 0xC02382.
    case 0xC02384: cpu.execute_instruction<0x5D>(0x008025, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:167 BRA @UNKNOWN9
    case 0xC02386: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:167 BRA @UNKNOWN9
    // Overlapping static entry reached from 0xC02384.
    case 0xC02387: cpu.execute_instruction<0x17>(0x0000AD, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:169 LDA NPC_SPAWNS_ENABLED
    case 0xC02388: cpu.execute_instruction<0xAD>(0x004DDE, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:169 LDA NPC_SPAWNS_ENABLED
    // Overlapping static entry reached from 0xC02387.
    case 0xC02389: cpu.execute_instruction<0xDE>(0x003A4D, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:170 DEC
    case 0xC0238B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:171 BEQ @UNKNOWN9
    case 0xC0238C: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:172 LDA @LOCAL06
    case 0xC0238E: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:173 CMP #256
    case 0xC02390: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:173 CMP #256
    // Overlapping static entry reached from 0xC02390.
    case 0xC02392: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:174 BCS @UNKNOWN9
    case 0xC02393: cpu.execute_instruction<0xB0>(0x00000A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:174 BCS @UNKNOWN9
    // Overlapping static entry reached from 0xC02392.
    case 0xC02394: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:175 CPX #224
    case 0xC02395: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000E0, 2); else cpu.execute_instruction<0xE0>(0x0000E0, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:175 CPX #224
    // Overlapping static entry reached from 0xC02395.
    case 0xC02397: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:176 BCCL @UNKNOWN27
    case 0xC02398: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:176 BCCL @UNKNOWN27
    case 0xC0239A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:176 BCCL @UNKNOWN27
    case 0xC0239C: cpu.execute_instruction<0x4C>(0x00255D, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:178 LDA @LOCAL06
    case 0xC0239F: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:179 STA @VIRTUAL02
    case 0xC023A1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:180 LDA #.LOWORD(-64)
    case 0xC023A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x00FFC0, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:180 LDA #.LOWORD(-64)
    // Overlapping static entry reached from 0xC023A3.
    case 0xC023A5: cpu.execute_instruction<0xFF>(0x02E518, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:181 CLC
    case 0xC023A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:182 SBC @VIRTUAL02
    case 0xC023A7: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:183 JUMPGTS @UNKNOWN27
    case 0xC023A9: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C0/C0222B-jp.asm:183 JUMPGTS @UNKNOWN27
    case 0xC023AB: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:183 JUMPGTS @UNKNOWN27
    case 0xC023AD: cpu.execute_instruction<0x4C>(0x00255D, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:183 JUMPGTS @UNKNOWN27
    case 0xC023B0: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:183 JUMPGTS @UNKNOWN27
    case 0xC023B2: cpu.execute_instruction<0x4C>(0x00255D, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:184 LDA @LOCAL06
    case 0xC023B5: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:185 STA @VIRTUAL02
    case 0xC023B7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:186 LDA #320
    case 0xC023B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000140, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:186 LDA #320
    // Overlapping static entry reached from 0xC023B9.
    case 0xC023BB: cpu.execute_instruction<0x01>(0x000018, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:187 CLC
    case 0xC023BC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:188 SBC @VIRTUAL02
    case 0xC023BD: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023BF: cpu.execute_instruction<0x50>(0x000005, 2); return true;
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C0/C0222B-jp.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023C1: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023C3: cpu.execute_instruction<0x4C>(0x00255D, 3); return true;
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023C6: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:189 JUMPLTEQS @UNKNOWN27
    case 0xC023C8: cpu.execute_instruction<0x4C>(0x00255D, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:190 STX @VIRTUAL02
    case 0xC023CB: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:191 LDA #.LOWORD(-64)
    case 0xC023CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x00FFC0, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:191 LDA #.LOWORD(-64)
    // Overlapping static entry reached from 0xC023CD.
    case 0xC023CF: cpu.execute_instruction<0xFF>(0x02E518, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:192 CLC
    case 0xC023D0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:193 SBC @VIRTUAL02
    case 0xC023D1: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023D3: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C0/C0222B-jp.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023D5: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023D7: cpu.execute_instruction<0x4C>(0x00255D, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023DA: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:194 JUMPGTS @UNKNOWN27
    case 0xC023DC: cpu.execute_instruction<0x4C>(0x00255D, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:195 STX @VIRTUAL02
    case 0xC023DF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:196 LDA #320
    case 0xC023E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000140, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:196 LDA #320
    // Overlapping static entry reached from 0xC023E1.
    case 0xC023E3: cpu.execute_instruction<0x01>(0x000018, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:197 CLC
    case 0xC023E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:198 SBC @VIRTUAL02
    case 0xC023E5: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023E7: cpu.execute_instruction<0x50>(0x000005, 2); return true;
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C0/C0222B-jp.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023E9: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023EB: cpu.execute_instruction<0x4C>(0x00255D, 3); return true;
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023EE: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:199 JUMPLTEQS @UNKNOWN27
    case 0xC023F0: cpu.execute_instruction<0x4C>(0x00255D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0089C1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023F3.
    case 0xC023F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023F6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023F5.
    case 0xC023F7: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023F7.
    case 0xC023F9: cpu.execute_instruction<0xCF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC023F8.
    case 0xC023FA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:200 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC023FB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:201 LDA @LOCAL08
    case 0xC023FD: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/unknown/C0/C0222B-jp.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC023FF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC02401: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC02402: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC02403: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC02404: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/unknown/C0/C0222B-jp.asm:202 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC02405: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:203 CLC
    case 0xC02407: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:204 ADC @VIRTUAL06
    case 0xC02408: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:205 STA @VIRTUAL06
    case 0xC0240A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:206 STA @LOCAL02
    case 0xC0240C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:207 LDA @VIRTUAL06+2
    case 0xC0240E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:208 STA @LOCAL02+2
    case 0xC02410: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:209 LDX #.LOWORD(-1)
    case 0xC02412: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:209 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02412.
    case 0xC02414: cpu.execute_instruction<0xFF>(0xAD1A86, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:210 STX @LOCAL05
    case 0xC02415: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:211 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC02417: cpu.execute_instruction<0xAD>(0x00B6B8, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:211 LDA PHOTOGRAPH_MAP_LOADING_MODE
    // Overlapping static entry reached from 0xC02414.
    case 0xC02418: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:211 LDA PHOTOGRAPH_MAP_LOADING_MODE
    // Overlapping static entry reached from 0xC02418.
    case 0xC02419: cpu.execute_instruction<0xB6>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:212 BNEL @UNKNOWN25
    case 0xC0241A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:212 BNEL @UNKNOWN25
    // Overlapping static entry reached from 0xC02419.
    case 0xC0241B: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:212 BNEL @UNKNOWN25
    case 0xC0241C: cpu.execute_instruction<0x4C>(0x002509, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:212 BNEL @UNKNOWN25
    // Overlapping static entry reached from 0xC0241B.
    case 0xC0241D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000025, 2); else cpu.execute_instruction<0x09>(0x00AD25, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:213 LDA DEBUG
    case 0xC0241F: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:213 LDA DEBUG
    // Overlapping static entry reached from 0xC0241D.
    case 0xC02420: cpu.execute_instruction<0xF2>(0x000046, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:214 BEQ @UNKNOWN20
    case 0xC02422: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:215 SEP #PROC_FLAGS::ACCUM8
    case 0xC02424: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:216 LDY #npc_config::appearance_style
    case 0xC02426: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:216 LDY #npc_config::appearance_style
    // Overlapping static entry reached from 0xC02426.
    case 0xC02428: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:217 LDA [@VIRTUAL06],Y
    case 0xC02429: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:218 REP #PROC_FLAGS::ACCUM8
    case 0xC0242B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:219 AND #$00FF
    case 0xC0242D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:219 AND #$00FF
    // Overlapping static entry reached from 0xC0242D.
    case 0xC0242F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:220 STA @LOCAL07
    case 0xC02430: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:221 BEQ @UNKNOWN21
    case 0xC02432: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:222 JSL UNKNOWN_EFE6CF
    case 0xC02434: cpu.execute_instruction<0x22>(0xEFCFF2, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:223 CMP #0
    case 0xC02438: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:223 CMP #0
    // Overlapping static entry reached from 0xC02438.
    case 0xC0243A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:224 BEQ @UNKNOWN21
    case 0xC0243B: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:225 LDY #npc_config::event_flag
    case 0xC0243D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:225 LDY #npc_config::event_flag
    // Overlapping static entry reached from 0xC0243D.
    case 0xC0243F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:226 LDA [@VIRTUAL06],Y
    case 0xC02440: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:227 JSL GET_EVENT_FLAG
    case 0xC02442: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:228 STA @VIRTUAL02
    case 0xC02446: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:229 LDA @LOCAL07
    case 0xC02448: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:230 DEC
    case 0xC0244A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:231 DEC
    case 0xC0244B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:232 EOR @VIRTUAL02
    case 0xC0244C: cpu.execute_instruction<0x45>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:233 AND #$0001
    case 0xC0244E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:233 AND #$0001
    // Overlapping static entry reached from 0xC0244E.
    case 0xC02450: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:234 BEQL @UNKNOWN27
    case 0xC02451: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:234 BEQL @UNKNOWN27
    case 0xC02453: cpu.execute_instruction<0x4C>(0x00255D, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:235 BRA @UNKNOWN21
    case 0xC02456: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:237 SEP #PROC_FLAGS::ACCUM8
    case 0xC02458: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:238 LDY #npc_config::appearance_style
    case 0xC0245A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:238 LDY #npc_config::appearance_style
    // Overlapping static entry reached from 0xC0245A.
    case 0xC0245C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:239 LDA [@VIRTUAL06],Y
    case 0xC0245D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:240 REP #PROC_FLAGS::ACCUM8
    case 0xC0245F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:241 AND #$00FF
    case 0xC02461: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:241 AND #$00FF
    // Overlapping static entry reached from 0xC02461.
    case 0xC02463: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:242 STA @LOCAL06
    case 0xC02464: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:243 BEQ @UNKNOWN21
    case 0xC02466: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:244 LDY #npc_config::event_flag
    case 0xC02468: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:244 LDY #npc_config::event_flag
    // Overlapping static entry reached from 0xC02468.
    case 0xC0246A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:245 LDA [@VIRTUAL06],Y
    case 0xC0246B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:246 JSL GET_EVENT_FLAG
    case 0xC0246D: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:247 STA @VIRTUAL02
    case 0xC02471: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:248 LDA @LOCAL06
    case 0xC02473: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:249 DEC
    case 0xC02475: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:250 DEC
    case 0xC02476: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:251 EOR @VIRTUAL02
    case 0xC02477: cpu.execute_instruction<0x45>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:252 AND #$0001
    case 0xC02479: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:252 AND #$0001
    // Overlapping static entry reached from 0xC02479.
    case 0xC0247B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:253 BEQL @UNKNOWN27
    case 0xC0247C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:253 BEQL @UNKNOWN27
    case 0xC0247E: cpu.execute_instruction<0x4C>(0x00255D, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:255 LDA DEBUG
    case 0xC02481: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:256 BEQ @UNKNOWN23
    case 0xC02484: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:257 LDA SHOW_NPC_FLAG
    case 0xC02486: cpu.execute_instruction<0xAD>(0x004DEC, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:258 BEQ @UNKNOWN22
    case 0xC02489: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:259 LDA [@VIRTUAL06]
    case 0xC0248B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:260 AND #$00FF
    case 0xC0248D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:260 AND #$00FF
    // Overlapping static entry reached from 0xC0248D.
    case 0xC0248F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:261 CMP #3
    case 0xC02490: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:261 CMP #3
    // Overlapping static entry reached from 0xC02490.
    case 0xC02492: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:262 BNEL @UNKNOWN26
    case 0xC02493: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:262 BNEL @UNKNOWN26
    case 0xC02495: cpu.execute_instruction<0x4C>(0x002537, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B-jp.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02498: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0249A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0249C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:264 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0249E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:265 LDY #npc_config::event_script
    case 0xC024A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:265 LDY #npc_config::event_script
    // Overlapping static entry reached from 0xC024A0.
    case 0xC024A2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:266 LDA [@VIRTUAL06],Y
    case 0xC024A3: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:267 JSL UNKNOWN_EFE6E2
    case 0xC024A5: cpu.execute_instruction<0x22>(0xEFD005, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:268 STA @LOCAL07
    case 0xC024A9: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:269 LDY @LOCAL04
    case 0xC024AB: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:270 STY @LOCAL00
    case 0xC024AD: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:271 LDA @LOCAL03
    case 0xC024AF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:272 STA @VIRTUAL02
    case 0xC024B1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:273 STA @LOCAL01
    case 0xC024B3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:274 LDY #.LOWORD(-1)
    case 0xC024B5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:274 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC024B5.
    case 0xC024B7: cpu.execute_instruction<0xFF>(0xA51C84, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:275 STY @LOCAL06
    case 0xC024B8: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:276 LDA @LOCAL07
    case 0xC024BA: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:276 LDA @LOCAL07
    // Overlapping static entry reached from 0xC024B7.
    case 0xC024BB: cpu.execute_instruction<0x1E>(0x00A0AA, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:277 TAX
    case 0xC024BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:278 LDY #npc_config::sprite
    case 0xC024BD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:278 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC024BB.
    case 0xC024BE: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:278 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC024BD.
    case 0xC024BF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:279 LDA [@VIRTUAL06],Y
    case 0xC024C0: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:280 LDY @LOCAL06
    case 0xC024C2: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:281 JSL CREATE_ENTITY
    case 0xC024C4: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:282 TAX
    case 0xC024C8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:283 STX @LOCAL05
    case 0xC024C9: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:284 BRA @UNKNOWN26
    case 0xC024CB: cpu.execute_instruction<0x80>(0x00006A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:286 LDA SHOW_NPC_FLAG
    case 0xC024CD: cpu.execute_instruction<0xAD>(0x004DEC, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:287 BEQ @UNKNOWN24
    case 0xC024D0: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:288 LDA [@VIRTUAL06]
    case 0xC024D2: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:289 AND #$00FF
    case 0xC024D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:289 AND #$00FF
    // Overlapping static entry reached from 0xC024D4.
    case 0xC024D6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:290 CMP #3
    case 0xC024D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:290 CMP #3
    // Overlapping static entry reached from 0xC024D7.
    case 0xC024D9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:291 BNE @UNKNOWN26
    case 0xC024DA: cpu.execute_instruction<0xD0>(0x00005B, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:293 LDY @LOCAL04
    case 0xC024DC: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:294 STY @LOCAL00
    case 0xC024DE: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:295 LDA @LOCAL03
    case 0xC024E0: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:296 STA @VIRTUAL02
    case 0xC024E2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:297 STA @LOCAL01
    case 0xC024E4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:298 LDY #.LOWORD(-1)
    case 0xC024E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:298 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC024E6.
    case 0xC024E8: cpu.execute_instruction<0xFF>(0xA51E84, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:299 STY @LOCAL07
    case 0xC024E9: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024EB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024E8.
    case 0xC024EC: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024ED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024EC.
    case 0xC024EE: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024EF: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024EE.
    case 0xC024F0: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC024F1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:300 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC024F0.
    case 0xC024F2: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:301 LDY #npc_config::event_script
    case 0xC024F3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:301 LDY #npc_config::event_script
    // Overlapping static entry reached from 0xC024F3.
    case 0xC024F5: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:302 LDA [@VIRTUAL06],Y
    case 0xC024F6: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:303 TAX
    case 0xC024F8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:304 LDY #npc_config::sprite
    case 0xC024F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:304 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC024F9.
    case 0xC024FB: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:305 LDA [@VIRTUAL06],Y
    case 0xC024FC: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:306 LDY @LOCAL07
    case 0xC024FE: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:306 LDY @LOCAL07
    // Overlapping static entry reached from 0xC02578.
    case 0xC024FF: cpu.execute_instruction<0x1E>(0x005F22, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:307 JSL CREATE_ENTITY
    case 0xC02500: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:307 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC024FF.
    case 0xC02502: cpu.execute_instruction<0x1E>(0x00AAC0, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:308 TAX
    case 0xC02504: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:309 STX @LOCAL05
    case 0xC02505: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:310 BRA @UNKNOWN26
    case 0xC02507: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:312 SEP #PROC_FLAGS::ACCUM8
    case 0xC02509: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:313 LDY #npc_config::appearance_style
    case 0xC0250B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:313 LDY #npc_config::appearance_style
    // Overlapping static entry reached from 0xC0250B.
    case 0xC0250D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:314 LDA [@VIRTUAL06],Y
    case 0xC0250E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:315 REP #PROC_FLAGS::ACCUM8
    case 0xC02510: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:316 AND #$00FF
    case 0xC02512: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:316 AND #$00FF
    // Overlapping static entry reached from 0xC02512.
    case 0xC02514: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:317 BNE @UNKNOWN26
    case 0xC02515: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:318 LDY @LOCAL04
    case 0xC02517: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:319 STY @LOCAL00
    case 0xC02519: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:320 LDA @LOCAL03
    case 0xC0251B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:321 STA @VIRTUAL02
    case 0xC0251D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:322 STA @LOCAL01
    case 0xC0251F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:323 LDY #.LOWORD(-1)
    case 0xC02521: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:323 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02521.
    case 0xC02523: cpu.execute_instruction<0xFF>(0xA21C84, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:324 STY @LOCAL06
    case 0xC02524: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:325 LDX #EVENT_SCRIPT::EVENT_799
    case 0xC02526: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001B, 2); else cpu.execute_instruction<0xA2>(0x00031B, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:325 LDX #EVENT_SCRIPT::EVENT_799
    // Overlapping static entry reached from 0xC02523.
    case 0xC02527: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:325 LDX #EVENT_SCRIPT::EVENT_799
    // Overlapping static entry reached from 0xC02526.
    case 0xC02528: cpu.execute_instruction<0x03>(0x0000A0, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:326 LDY #npc_config::sprite
    case 0xC02529: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:326 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC02528.
    case 0xC0252A: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:326 LDY #npc_config::sprite
    // Overlapping static entry reached from 0xC02529.
    case 0xC0252B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:327 LDA [@VIRTUAL06],Y
    case 0xC0252C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:328 LDY @LOCAL06
    case 0xC0252E: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:329 JSL CREATE_ENTITY
    case 0xC02530: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:330 TAX
    case 0xC02534: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:331 STX @LOCAL05
    case 0xC02535: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:331 STX @LOCAL05
    // Overlapping static entry reached from 0xC02584.
    case 0xC02536: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:333 LDX @LOCAL05
    case 0xC02537: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:334 CPX #.LOWORD(-1)
    case 0xC02539: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:334 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02539.
    case 0xC0253B: cpu.execute_instruction<0xFF>(0x8A1FF0, 4); return true;
    // src/unknown/C0/C0222B-jp.asm:335 BEQ @UNKNOWN27
    case 0xC0253C: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:336 TXA
    case 0xC0253E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:337 ASL
    case 0xC0253F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0222B-jp.asm:338 TAX
    case 0xC02540: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0222B-jp.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02541: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02543: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02545: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0222B-jp.asm:339 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC02547: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:340 SEP #PROC_FLAGS::ACCUM8
    case 0xC02549: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:341 LDY #npc_config::direction
    case 0xC0254B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:341 LDY #npc_config::direction
    // Overlapping static entry reached from 0xC0254B.
    case 0xC0254D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:342 LDA [@VIRTUAL06],Y
    case 0xC0254E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:343 REP #PROC_FLAGS::ACCUM8
    case 0xC02550: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:343 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0259F.
    case 0xC02551: cpu.execute_instruction<0x20>(0x00FF29, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:344 AND #$00FF
    case 0xC02552: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:344 AND #$00FF
    // Overlapping static entry reached from 0xC02552.
    case 0xC02554: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:345 STA ENTITY_DIRECTIONS,X
    case 0xC02555: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:346 LDA @LOCAL08
    case 0xC02558: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:347 STA ENTITY_NPC_IDS,X
    case 0xC0255A: cpu.execute_instruction<0x9D>(0x003098, 3); return true;
    // src/unknown/C0/C0222B-jp.asm:349 INC @LOCAL09
    case 0xC0255D: cpu.execute_instruction<0xE6>(0x000022, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:351 LDA @LOCAL09
    case 0xC0255F: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C0/C0222B-jp.asm:352 CMP @LOCAL0A
    case 0xC02561: cpu.execute_instruction<0xC5>(0x000024, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0222B-jp.asm:353 BNEL @UNKNOWN3
    case 0xC02563: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0222B-jp.asm:353 BNEL @UNKNOWN3
    case 0xC02565: cpu.execute_instruction<0x4C>(0x00229F, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0222B-jp.asm:355 END_C_FUNCTION
    case 0xC02568: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0222B-jp.asm:355 END_C_FUNCTION
    case 0xC02569: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0255C.asm (unresolved).
bool execute_unresolved_c0_c0255c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0255C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0256A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0255C.asm:11 END_STACK_VARS
    case 0xC0256C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0255C.asm:11 END_STACK_VARS
    case 0xC0256D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0255C.asm:11 END_STACK_VARS
    case 0xC0256E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0255C.asm:11 END_STACK_VARS
    case 0xC0256F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0255C.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC0256F.
    case 0xC02571: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0255C.asm:11 END_STACK_VARS
    case 0xC02572: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0255C.asm:11 END_STACK_VARS
    case 0xC02573: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:12 STA @VIRTUAL04
    case 0xC02574: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0255C.asm:12 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC02571.
    case 0xC02575: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C0/C0255C.asm:13 LDA #$8000
    case 0xC02576: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C0/C0255C.asm:13 LDA #$8000
    // Overlapping static entry reached from 0xC02575.
    case 0xC02577: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0255C.asm:13 LDA #$8000
    // Overlapping static entry reached from 0xC02576.
    case 0xC02578: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // src/unknown/C0/C0255C.asm:14 STA @LOCAL03
    case 0xC02579: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0255C.asm:15 LDA NPC_SPAWNS_ENABLED
    case 0xC0257B: cpu.execute_instruction<0xAD>(0x004DDE, 3); return true;
    // src/unknown/C0/C0255C.asm:16 BEQ @UNKNOWN3
    case 0xC0257E: cpu.execute_instruction<0xF0>(0x00005B, 2); return true;
    // src/unknown/C0/C0255C.asm:17 LDY @LOCAL02
    case 0xC02580: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0255C.asm:18 CPY #$8000
    case 0xC02582: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008000, 3); return true;
    // src/unknown/C0/C0255C.asm:18 CPY #$8000
    // Overlapping static entry reached from 0xC02582.
    case 0xC02584: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C0255C.asm:19 BCS @UNKNOWN3
    case 0xC02585: cpu.execute_instruction<0xB0>(0x000054, 2); return true;
    // src/unknown/C0/C0255C.asm:20 TXA
    case 0xC02587: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:21 LSR
    case 0xC02588: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:22 LSR
    case 0xC02589: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:23 LSR
    case 0xC0258A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:24 LSR
    case 0xC0258B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:25 LSR
    case 0xC0258C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:26 STA @LOCAL01
    case 0xC0258D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0255C.asm:27 LDA @VIRTUAL04
    case 0xC0258F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0255C.asm:28 DEC
    case 0xC02591: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:29 DEC
    case 0xC02592: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:30 STA @VIRTUAL02
    case 0xC02593: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:31 STA @LOCAL00
    case 0xC02595: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0255C.asm:32 BRA @UNKNOWN2
    case 0xC02597: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/unknown/C0/C0255C.asm:34 LDA @LOCAL00
    case 0xC02599: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0255C.asm:35 STA @VIRTUAL02
    case 0xC0259B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:35 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC025ED.
    case 0xC0259C: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C0/C0255C.asm:36 CMP #$8000
    case 0xC0259D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C0255C.asm:36 CMP #$8000
    // Overlapping static entry reached from 0xC0259D.
    case 0xC0259F: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C0255C.asm:37 BCS @UNKNOWN1
    case 0xC025A0: cpu.execute_instruction<0xB0>(0x00001F, 2); return true;
    // src/unknown/C0/C0255C.asm:38 LDA @VIRTUAL02
    case 0xC025A2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:39 LSR
    case 0xC025A4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:40 LSR
    case 0xC025A5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:41 LSR
    case 0xC025A6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:42 LSR
    case 0xC025A7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:43 LSR
    case 0xC025A8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:44 TAY
    case 0xC025A9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:45 STY @LOCAL02
    case 0xC025AA: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C0255C.asm:46 LDA @LOCAL03
    case 0xC025AC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0255C.asm:47 STA @VIRTUAL02
    case 0xC025AE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:48 TYA
    case 0xC025B0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:49 CMP @VIRTUAL02
    case 0xC025B1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:50 BEQ @UNKNOWN1
    case 0xC025B3: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0255C.asm:51 LDX @LOCAL01
    case 0xC025B5: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0255C.asm:52 TYA
    case 0xC025B7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:53 JSL UNKNOWN_C0222B
    case 0xC025B8: cpu.execute_instruction<0x22>(0xC02239, 4); return true;
    // src/unknown/C0/C0255C.asm:54 LDY @LOCAL02
    case 0xC025BC: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0255C.asm:55 TYA
    case 0xC025BE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:56 STA @LOCAL03
    case 0xC025BF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0255C.asm:58 LDA @LOCAL00
    case 0xC025C1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0255C.asm:59 STA @VIRTUAL02
    case 0xC025C3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:60 INC @VIRTUAL02
    case 0xC025C5: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:61 LDA @VIRTUAL02
    case 0xC025C7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:62 STA @LOCAL00
    case 0xC025C9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0255C.asm:64 LDA @VIRTUAL04
    case 0xC025CB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0255C.asm:65 CLC
    case 0xC025CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:66 ADC #36
    case 0xC025CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000024, 2); else cpu.execute_instruction<0x69>(0x000024, 3); return true;
    // src/unknown/C0/C0255C.asm:66 ADC #36
    // Overlapping static entry reached from 0xC025CE.
    case 0xC025D0: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C0255C.asm:67 PHA
    case 0xC025D1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:68 LDA @VIRTUAL02
    case 0xC025D2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:69 PLY
    case 0xC025D4: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C0255C.asm:70 STY @VIRTUAL02
    case 0xC025D5: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:71 CMP @VIRTUAL02
    case 0xC025D7: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0255C.asm:72 BNE @UNKNOWN0
    case 0xC025D9: cpu.execute_instruction<0xD0>(0x0000BE, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0255C.asm:74 END_C_FUNCTION
    case 0xC025DB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0255C.asm:74 END_C_FUNCTION
    case 0xC025DC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C025CF.asm (unresolved).
bool execute_unresolved_c0_c025cf_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C025CF.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC025DD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025DF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025E0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025E1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC025E2.
    case 0xC025E4: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025E5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025E6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:11 STX @VIRTUAL04
    case 0xC025E7: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C025CF.asm:11 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC025E4.
    case 0xC025E8: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C0/C025CF.asm:12 STA @LOCAL02
    case 0xC025E9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C025CF.asm:12 STA @LOCAL02
    // Overlapping static entry reached from 0xC025E8.
    case 0xC025EA: cpu.execute_instruction<0x12>(0x0000A2, 2); return true;
    // src/unknown/C0/C025CF.asm:13 LDX #$8000
    case 0xC025EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x008000, 3); return true;
    // src/unknown/C0/C025CF.asm:13 LDX #$8000
    // Overlapping static entry reached from 0xC025EA.
    case 0xC025EC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C025CF.asm:13 LDX #$8000
    // Overlapping static entry reached from 0xC025EB.
    case 0xC025ED: cpu.execute_instruction<0x80>(0x0000AD, 2); return true;
    // src/unknown/C0/C025CF.asm:14 LDA NPC_SPAWNS_ENABLED
    case 0xC025EE: cpu.execute_instruction<0xAD>(0x004DDE, 3); return true;
    // src/unknown/C0/C025CF.asm:15 BEQ @UNKNOWN3
    case 0xC025F1: cpu.execute_instruction<0xF0>(0x000056, 2); return true;
    // src/unknown/C0/C025CF.asm:16 LDY @LOCAL01
    case 0xC025F3: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C025CF.asm:17 CPY #$8000
    case 0xC025F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008000, 3); return true;
    // src/unknown/C0/C025CF.asm:17 CPY #$8000
    // Overlapping static entry reached from 0xC025F5.
    case 0xC025F7: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C025CF.asm:18 BCS @UNKNOWN3
    case 0xC025F8: cpu.execute_instruction<0xB0>(0x00004F, 2); return true;
    // src/unknown/C0/C025CF.asm:19 LDA @LOCAL02
    case 0xC025FA: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C025CF.asm:20 LSR
    case 0xC025FC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:21 LSR
    case 0xC025FD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:22 LSR
    case 0xC025FE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:23 LSR
    case 0xC025FF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:24 LSR
    case 0xC02600: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:25 STA @LOCAL00
    case 0xC02601: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C025CF.asm:26 LDA @VIRTUAL04
    case 0xC02603: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C025CF.asm:27 STA @VIRTUAL02
    case 0xC02605: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:28 STA @LOCAL01
    case 0xC02607: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C025CF.asm:29 BRA @UNKNOWN2
    case 0xC02609: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C0/C025CF.asm:31 LDA @LOCAL01
    case 0xC0260B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C025CF.asm:32 STA @VIRTUAL02
    case 0xC0260D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:33 CMP #$8000
    case 0xC0260F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C025CF.asm:33 CMP #$8000
    // Overlapping static entry reached from 0xC0260F.
    case 0xC02611: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C025CF.asm:34 BCS @UNKNOWN1
    case 0xC02612: cpu.execute_instruction<0xB0>(0x00001B, 2); return true;
    // src/unknown/C0/C025CF.asm:35 LDA @VIRTUAL02
    case 0xC02614: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:36 LSR
    case 0xC02616: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:37 LSR
    case 0xC02617: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:38 LSR
    case 0xC02618: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:39 LSR
    case 0xC02619: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:40 LSR
    case 0xC0261A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:41 TAY
    case 0xC0261B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:42 STY @LOCAL02
    case 0xC0261C: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C025CF.asm:43 STX @VIRTUAL02
    case 0xC0261E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:44 TYA
    case 0xC02620: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:45 CMP @VIRTUAL02
    case 0xC02621: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:46 BEQ @UNKNOWN1
    case 0xC02623: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C025CF.asm:47 TYX
    case 0xC02625: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:48 LDA @LOCAL00
    case 0xC02626: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C025CF.asm:49 JSL UNKNOWN_C0222B
    case 0xC02628: cpu.execute_instruction<0x22>(0xC02239, 4); return true;
    // src/unknown/C0/C025CF.asm:50 LDY @LOCAL02
    case 0xC0262C: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C025CF.asm:51 TYX
    case 0xC0262E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:53 LDA @LOCAL01
    case 0xC0262F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C025CF.asm:54 STA @VIRTUAL02
    case 0xC02631: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:55 INC @VIRTUAL02
    case 0xC02633: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:56 LDA @VIRTUAL02
    case 0xC02635: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:57 STA @LOCAL01
    case 0xC02637: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C025CF.asm:59 LDA @VIRTUAL04
    case 0xC02639: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C025CF.asm:60 CLC
    case 0xC0263B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:61 ADC #32
    case 0xC0263C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/unknown/C0/C025CF.asm:61 ADC #32
    // Overlapping static entry reached from 0xC0263C.
    case 0xC0263E: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C025CF.asm:62 PHA
    case 0xC0263F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:63 LDA @VIRTUAL02
    case 0xC02640: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:64 PLY
    case 0xC02642: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C025CF.asm:65 STY @VIRTUAL02
    case 0xC02643: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:66 CMP @VIRTUAL02
    case 0xC02645: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C025CF.asm:67 BNE @UNKNOWN0
    case 0xC02647: cpu.execute_instruction<0xD0>(0x0000C2, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C025CF.asm:69 END_C_FUNCTION
    case 0xC02649: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C025CF.asm:69 END_C_FUNCTION
    case 0xC0264A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0263D.asm (unresolved).
bool execute_unresolved_c0_c0263d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0263D.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0264B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0263D.asm:8 END_STACK_VARS
    case 0xC0264D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0263D.asm:8 END_STACK_VARS
    case 0xC0264E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0263D.asm:8 END_STACK_VARS
    case 0xC0264F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0263D.asm:8 END_STACK_VARS
    case 0xC02650: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0263D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC02650.
    case 0xC02652: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0263D.asm:8 END_STACK_VARS
    case 0xC02653: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0263D.asm:8 END_STACK_VARS
    case 0xC02654: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0263D.asm:9 CMP #MAP_WIDTH_TILES
    case 0xC02655: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/unknown/C0/C0263D.asm:9 CMP #MAP_WIDTH_TILES
    // Overlapping static entry reached from 0xC02652.
    case 0xC02656: cpu.execute_instruction<0x80>(0x000000, 2); return true;
    // src/unknown/C0/C0263D.asm:9 CMP #MAP_WIDTH_TILES
    // Overlapping static entry reached from 0xC02655.
    case 0xC02657: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0263D.asm:10 BCS @UNKNOWN0
    case 0xC02658: cpu.execute_instruction<0xB0>(0x000017, 2); return true;
    // src/unknown/C0/C0263D.asm:11 CPX #MAP_HEIGHT_TILES
    case 0xC0265A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000A0, 2); else cpu.execute_instruction<0xE0>(0x0000A0, 3); return true;
    // src/unknown/C0/C0263D.asm:11 CPX #MAP_HEIGHT_TILES
    // Overlapping static entry reached from 0xC0265A.
    case 0xC0265C: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0263D.asm:12 BCS @UNKNOWN0
    case 0xC0265D: cpu.execute_instruction<0xB0>(0x000012, 2); return true;
    // src/unknown/C0/C0263D.asm:13 ASL
    case 0xC0265F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0263D.asm:14 STA @VIRTUAL02
    case 0xC02660: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0263D.asm:15 TXA
    case 0xC02662: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0263D.asm:16 XBA
    case 0xC02663: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0263D.asm:17 AND #$FF00
    case 0xC02664: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0263D.asm:17 AND #$FF00
    // Overlapping static entry reached from 0xC02664.
    case 0xC02666: cpu.execute_instruction<0xFF>(0x026518, 4); return true;
    // src/unknown/C0/C0263D.asm:18 CLC
    case 0xC02667: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0263D.asm:19 ADC @VIRTUAL02
    case 0xC02668: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0263D.asm:20 TAX
    case 0xC0266A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0263D.asm:21 LDA f:MAP_ENEMY_PLACEMENT,X
    case 0xC0266B: cpu.execute_instruction<0xBF>(0xD01880, 4); return true;
    // src/unknown/C0/C0263D.asm:22 BRA @UNKNOWN1
    case 0xC0266F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0263D.asm:24 LDA #$0000
    case 0xC02671: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0263D.asm:24 LDA #$0000
    // Overlapping static entry reached from 0xC02671.
    case 0xC02673: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/unknown/C0/C0263D.asm:26 PLD
    case 0xC02674: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0263D.asm:27 RTL
    case 0xC02675: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C02668.asm (unresolved).
bool execute_unresolved_c0_c02668_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C02668.asm:3 BEGIN_C_FUNCTION
    case 0xC02676: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC02678: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC02679: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC0267A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC0267B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x00FFCE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    // Overlapping static entry reached from 0xC0267B.
    case 0xC0267D: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC0267E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C02668.asm:21 END_STACK_VARS
    case 0xC0267F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:22 STY @LOCAL0E
    case 0xC02680: cpu.execute_instruction<0x84>(0x000030, 2); return true;
    // src/unknown/C0/C02668.asm:22 STY @LOCAL0E
    // Overlapping static entry reached from 0xC0267D.
    case 0xC02681: cpu.execute_instruction<0x30>(0x000086, 2); return true;
    // src/unknown/C0/C02668.asm:23 STX @LOCAL0D
    case 0xC02682: cpu.execute_instruction<0x86>(0x00002E, 2); return true;
    // src/unknown/C0/C02668.asm:23 STX @LOCAL0D
    // Overlapping static entry reached from 0xC02681.
    case 0xC02683: cpu.execute_instruction<0x2E>(0x002C85, 3); return true;
    // src/unknown/C0/C02668.asm:24 STA @LOCAL0C
    case 0xC02684: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/unknown/C0/C02668.asm:25 LDA DEBUG
    case 0xC02686: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/unknown/C0/C02668.asm:26 BEQ @UNKNOWN0
    case 0xC02689: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/unknown/C0/C02668.asm:27 JSL UNKNOWN_EFE759
    case 0xC0268B: cpu.execute_instruction<0x22>(0xEFD07C, 4); return true;
    // src/unknown/C0/C02668.asm:28 CMP #0
    case 0xC0268F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:28 CMP #0
    // Overlapping static entry reached from 0xC0268F.
    case 0xC02691: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:29 BEQ @UNKNOWN0
    case 0xC02692: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:30 JSL RAND
    case 0xC02694: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C0/C02668.asm:31 CMP #16
    case 0xC02698: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C0/C02668.asm:31 CMP #16
    // Overlapping static entry reached from 0xC02698.
    case 0xC0269A: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C02668.asm:32 BCS @UNKNOWN0
    case 0xC0269B: cpu.execute_instruction<0xB0>(0x00000F, 2); return true;
    // src/unknown/C0/C02668.asm:33 STZ @LOCAL0B
    case 0xC0269D: cpu.execute_instruction<0x64>(0x00002A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    case 0xC0269F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002D, 2); else cpu.execute_instruction<0xA9>(0x00D52D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0269F.
    case 0xC026A1: cpu.execute_instruction<0xD5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    case 0xC026A2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC026A1.
    case 0xC026A3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    case 0xC026A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC026A4.
    case 0xC026A6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C02668.asm:34 LOADPTR ENEMY_BATTLE_GROUPS_TABLE, @VIRTUAL0A
    case 0xC026A7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C02668.asm:35 JMP @UNKNOWN31
    case 0xC026A9: cpu.execute_instruction<0x4C>(0x002A60, 3); return true;
    // src/unknown/C0/C02668.asm:37 LDA ENEMY_SPAWN_COUNTER
    case 0xC026AC: cpu.execute_instruction<0xAD>(0x004E00, 3); return true;
    // src/unknown/C0/C02668.asm:38 INC
    case 0xC026AF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:39 STA ENEMY_SPAWN_COUNTER
    case 0xC026B0: cpu.execute_instruction<0x8D>(0x004E00, 3); return true;
    // src/unknown/C0/C02668.asm:40 AND #$000F
    case 0xC026B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C02668.asm:40 AND #$000F
    // Overlapping static entry reached from 0xC026B3.
    case 0xC026B5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:41 BNEL @UNKNOWN10
    case 0xC026B6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:41 BNEL @UNKNOWN10
    case 0xC026B8: cpu.execute_instruction<0x4C>(0x002760, 3); return true;
    // src/unknown/C0/C02668.asm:42 LDA @LOCAL0C
    case 0xC026BB: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:43 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:43 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:43 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:44 LSR
    case 0xC026C0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:45 LSR
    case 0xC026C1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:46 LSR
    case 0xC026C2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:47 LSR
    case 0xC026C3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:48 LSR
    case 0xC026C4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:49 ASL
    case 0xC026C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:50 STA @VIRTUAL04
    case 0xC026C6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C02668.asm:51 LDA @LOCAL0D
    case 0xC026C8: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:52 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:52 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:52 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC026CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:53 LSR
    case 0xC026CD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:54 LSR
    case 0xC026CE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:55 LSR
    case 0xC026CF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:56 LSR
    case 0xC026D0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C0/C02668.asm:57 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC026D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:58 CLC
    case 0xC026D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:59 ADC @VIRTUAL04
    case 0xC026D8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C02668.asm:60 TAX
    case 0xC026DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:61 LDA f:MAP_DATA_PER_SECTOR_ATTRIBUTES_TABLE,X
    case 0xC026DB: cpu.execute_instruction<0xBF>(0xD7B200, 4); return true;
    // src/unknown/C0/C02668.asm:62 AND #$0007
    case 0xC026DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C02668.asm:62 AND #$0007
    // Overlapping static entry reached from 0xC026DF.
    case 0xC026E1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:63 BEQ @UNKNOWN2
    case 0xC026E2: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C0/C02668.asm:64 CMP #1
    case 0xC026E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C02668.asm:64 CMP #1
    // Overlapping static entry reached from 0xC026E4.
    case 0xC026E6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:65 BEQ @UNKNOWN3
    case 0xC026E7: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C0/C02668.asm:66 CMP #2
    case 0xC026E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C02668.asm:66 CMP #2
    // Overlapping static entry reached from 0xC026E9.
    case 0xC026EB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:67 BEQ @UNKNOWN4
    case 0xC026EC: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/C0/C02668.asm:68 CMP #3
    case 0xC026EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C02668.asm:68 CMP #3
    // Overlapping static entry reached from 0xC026EE.
    case 0xC026F0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:69 BEQ @UNKNOWN5
    case 0xC026F1: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C0/C02668.asm:70 CMP #4
    case 0xC026F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C02668.asm:70 CMP #4
    // Overlapping static entry reached from 0xC026F3.
    case 0xC026F5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:71 BEQ @UNKNOWN6
    case 0xC026F6: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C0/C02668.asm:72 CMP #5
    case 0xC026F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C02668.asm:72 CMP #5
    // Overlapping static entry reached from 0xC026F8.
    case 0xC026FA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:73 BEQ @UNKNOWN7
    case 0xC026FB: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/unknown/C0/C02668.asm:74 BRA @UNKNOWN8
    case 0xC026FD: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/unknown/C0/C02668.asm:76 LDA #2
    case 0xC026FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C02668.asm:76 LDA #2
    // Overlapping static entry reached from 0xC026FF.
    case 0xC02701: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:77 STA @VIRTUAL02
    case 0xC02702: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:78 STA @LOCAL0A
    case 0xC02704: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C02668.asm:79 BRA @UNKNOWN8
    case 0xC02706: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/unknown/C0/C02668.asm:81 LDA #0
    case 0xC02708: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:81 LDA #0
    // Overlapping static entry reached from 0xC02708.
    case 0xC0270A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:82 STA @VIRTUAL02
    case 0xC0270B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:83 STA @LOCAL0A
    case 0xC0270D: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C02668.asm:84 BRA @UNKNOWN8
    case 0xC0270F: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:86 LDA #1
    case 0xC02711: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C02668.asm:86 LDA #1
    // Overlapping static entry reached from 0xC02711.
    case 0xC02713: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:87 STA @VIRTUAL02
    case 0xC02714: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:88 STA @LOCAL0A
    case 0xC02716: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C02668.asm:89 BRA @UNKNOWN8
    case 0xC02718: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C0/C02668.asm:91 LDA #0
    case 0xC0271A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:91 LDA #0
    // Overlapping static entry reached from 0xC0271A.
    case 0xC0271C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:92 STA @VIRTUAL02
    case 0xC0271D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:93 STA @LOCAL0A
    case 0xC0271F: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C02668.asm:94 BRA @UNKNOWN8
    case 0xC02721: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C0/C02668.asm:96 LDA #5
    case 0xC02723: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C02668.asm:96 LDA #5
    // Overlapping static entry reached from 0xC02723.
    case 0xC02725: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:97 STA @VIRTUAL02
    case 0xC02726: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:98 STA @LOCAL0A
    case 0xC02728: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C02668.asm:99 BRA @UNKNOWN8
    case 0xC0272A: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C0/C02668.asm:101 LDA #1
    case 0xC0272C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C02668.asm:101 LDA #1
    // Overlapping static entry reached from 0xC0272C.
    case 0xC0272E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:102 STA @VIRTUAL02
    case 0xC0272F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:103 STA @LOCAL0A
    case 0xC02731: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C02668.asm:105 JSL RAND
    case 0xC02733: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C0/C02668.asm:106 LDX @LOCAL0A
    case 0xC02737: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/unknown/C0/C02668.asm:107 STX @VIRTUAL02
    case 0xC02739: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:108 LDY #100
    case 0xC0273B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000064, 2); else cpu.execute_instruction<0xA0>(0x000064, 3); return true;
    // src/unknown/C0/C02668.asm:108 LDY #100
    // Overlapping static entry reached from 0xC0273B.
    case 0xC0273D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:109 JSL MODULUS16
    case 0xC0273E: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/unknown/C0/C02668.asm:110 CMP @VIRTUAL02
    case 0xC02742: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:111 BCC @UNKNOWN9
    case 0xC02744: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C02668.asm:112 JMP @UNKNOWN32
    case 0xC02746: cpu.execute_instruction<0x4C>(0x002A79, 3); return true;
    // src/unknown/C0/C02668.asm:114 LDA #MAGIC_BUTTERFLY_BATTLEGROUP
    case 0xC02749: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0001E1, 3); return true;
    // src/unknown/C0/C02668.asm:114 LDA #MAGIC_BUTTERFLY_BATTLEGROUP
    // Overlapping static entry reached from 0xC02749.
    case 0xC0274B: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:115 STA @LOCAL0B
    case 0xC0274C: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C0/C02668.asm:115 STA @LOCAL0B
    // Overlapping static entry reached from 0xC0274B.
    case 0xC0274D: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:116 STA SPAWNING_ENEMY_GROUP
    case 0xC0274E: cpu.execute_instruction<0x8D>(0x004DF8, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:117 MOVE_INT f:BTL_ENTRY_PTR_TABLE +.SIZEOF(battle_entry_ptr_entry) * MAGIC_BUTTERFLY_BATTLEGROUP + battle_entry_ptr_entry::pointer, @VIRTUAL0A
    case 0xC02751: cpu.execute_instruction<0xAF>(0xD0D515, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:117 MOVE_INT f:BTL_ENTRY_PTR_TABLE +.SIZEOF(battle_entry_ptr_entry) * MAGIC_BUTTERFLY_BATTLEGROUP + battle_entry_ptr_entry::pointer, @VIRTUAL0A
    case 0xC02755: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:117 MOVE_INT f:BTL_ENTRY_PTR_TABLE +.SIZEOF(battle_entry_ptr_entry) * MAGIC_BUTTERFLY_BATTLEGROUP + battle_entry_ptr_entry::pointer, @VIRTUAL0A
    case 0xC02757: cpu.execute_instruction<0xAF>(0xD0D517, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:117 MOVE_INT f:BTL_ENTRY_PTR_TABLE +.SIZEOF(battle_entry_ptr_entry) * MAGIC_BUTTERFLY_BATTLEGROUP + battle_entry_ptr_entry::pointer, @VIRTUAL0A
    case 0xC0275B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C02668.asm:118 JMP @UNKNOWN31
    case 0xC0275D: cpu.execute_instruction<0x4C>(0x002A60, 3); return true;
    // src/unknown/C0/C02668.asm:120 LDY @LOCAL0E
    case 0xC02760: cpu.execute_instruction<0xA4>(0x000030, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C02668.asm:121 BEQL @UNKNOWN32
    case 0xC02762: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:121 BEQL @UNKNOWN32
    case 0xC02764: cpu.execute_instruction<0x4C>(0x002A79, 3); return true;
    // src/unknown/C0/C02668.asm:122 LDA @LOCAL0C
    case 0xC02767: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:123 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC02769: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:123 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0276A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:123 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0276B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:124 LSR
    case 0xC0276C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:125 LSR
    case 0xC0276D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:126 LSR
    case 0xC0276E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:127 LSR
    case 0xC0276F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:128 LSR
    case 0xC02770: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:129 STA @VIRTUAL02
    case 0xC02771: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:130 LDA @LOCAL0D
    case 0xC02773: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:131 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC02775: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:131 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC02776: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:131 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC02777: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:132 LSR
    case 0xC02778: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:133 LSR
    case 0xC02779: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:134 LSR
    case 0xC0277A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:135 LSR
    case 0xC0277B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0277C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0277D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0277E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0277F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C02668.asm:136 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC02780: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:137 CLC
    case 0xC02781: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:138 ADC @VIRTUAL02
    case 0xC02782: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:139 TAX
    case 0xC02784: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:140 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC02785: cpu.execute_instruction<0xBF>(0xD7A800, 4); return true;
    // src/unknown/C0/C02668.asm:141 AND #$00FF
    case 0xC02789: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC02789.
    case 0xC0278B: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C02668.asm:142 LSR
    case 0xC0278C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:143 LSR
    case 0xC0278D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:144 LSR
    case 0xC0278E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:145 CMP LOADED_MAP_TILE_COMBO
    case 0xC0278F: cpu.execute_instruction<0xCD>(0x0046F4, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:146 BNEL @UNKNOWN32
    case 0xC02792: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:146 BNEL @UNKNOWN32
    case 0xC02794: cpu.execute_instruction<0x4C>(0x002A79, 3); return true;
    // src/unknown/C0/C02668.asm:147 STY ENEMY_SPAWN_ENCOUNTER_ID
    case 0xC02797: cpu.execute_instruction<0x8C>(0x004DF2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    case 0xC0279A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x00B880, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0279A.
    case 0xC0279C: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    case 0xC0279D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    case 0xC0279F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0279F.
    case 0xC027A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C02668.asm:148 LOADPTR ENEMY_PLACEMENT_GROUPS_PTR_TABLE, @VIRTUAL06
    case 0xC027A2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:149 TYA
    case 0xC027A4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:150 ASL
    case 0xC027A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:151 ASL
    case 0xC027A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:152 CLC
    case 0xC027A7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:153 ADC @VIRTUAL06
    case 0xC027A8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:154 STA @VIRTUAL06
    case 0xC027AA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC027AC.
    case 0xC027AE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027AF: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027B1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027B2: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027B4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C02668.asm:155 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC027B6: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:156 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027B8: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:156 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027BA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:156 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027BC: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:156 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027BE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:157 LDA [@VIRTUAL06]
    case 0xC027C0: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:158 STA @LOCAL09
    case 0xC027C2: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C02668.asm:159 LDA #enemy_placement::groups
    case 0xC027C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C02668.asm:159 LDA #enemy_placement::groups
    // Overlapping static entry reached from 0xC027C4.
    case 0xC027C6: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C02668.asm:160 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC027C7: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C02668.asm:160 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC027C9: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C02668.asm:160 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC027CB: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C02668.asm:160 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC027CD: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:161 CLC
    case 0xC027CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:162 ADC @VIRTUAL06
    case 0xC027D0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:163 STA @VIRTUAL06
    case 0xC027D2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:164 STA @LOCAL08
    case 0xC027D4: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:165 LDA @VIRTUAL06+2
    case 0xC027D6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:166 STA @LOCAL08+2
    case 0xC027D8: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027DA: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027DC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027DE: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC027E0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:168 INC @VIRTUAL06
    case 0xC027E2: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:169 INC @VIRTUAL06
    case 0xC027E4: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:170 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC027E6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:170 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC027E8: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:170 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC027EA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:170 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC027EC: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C02668.asm:171 LDA [@LOCAL07] ;enemy_placement::spawn_chance
    case 0xC027EE: cpu.execute_instruction<0xA7>(0x00001E, 2); return true;
    // src/unknown/C0/C02668.asm:172 AND #$00FF
    case 0xC027F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC027F0.
    case 0xC027F2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C02668.asm:173 STA ENEMY_SPAWN_CHANCE
    case 0xC027F3: cpu.execute_instruction<0x8D>(0x004DF6, 3); return true;
    // src/unknown/C0/C02668.asm:174 LDX #0
    case 0xC027F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:174 LDX #0
    // Overlapping static entry reached from 0xC027F6.
    case 0xC027F8: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C02668.asm:175 STX @LOCAL06
    case 0xC027F9: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:176 LDA @LOCAL09
    case 0xC027FB: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C0/C02668.asm:177 BEQ @UNKNOWN13
    case 0xC027FD: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/unknown/C0/C02668.asm:178 JSL GET_EVENT_FLAG
    case 0xC027FF: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C0/C02668.asm:179 CMP #0
    case 0xC02803: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:179 CMP #0
    // Overlapping static entry reached from 0xC02803.
    case 0xC02805: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:180 BEQ @UNKNOWN13
    case 0xC02806: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C0/C02668.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC02808: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C02668.asm:182 LDY #enemy_placement::spawn_chance_alt
    case 0xC0280A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C02668.asm:182 LDY #enemy_placement::spawn_chance_alt
    // Overlapping static entry reached from 0xC0280A.
    case 0xC0280C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C02668.asm:183 LDA [@VIRTUAL0A],Y
    case 0xC0280D: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C0/C02668.asm:184 REP #PROC_FLAGS::ACCUM8
    case 0xC0280F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C02668.asm:185 AND #$00FF
    case 0xC02811: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:185 AND #$00FF
    // Overlapping static entry reached from 0xC02811.
    case 0xC02813: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C02668.asm:186 STA ENEMY_SPAWN_CHANCE
    case 0xC02814: cpu.execute_instruction<0x8D>(0x004DF6, 3); return true;
    // src/unknown/C0/C02668.asm:187 LDA [@LOCAL07]
    case 0xC02817: cpu.execute_instruction<0xA7>(0x00001E, 2); return true;
    // src/unknown/C0/C02668.asm:188 AND #$00FF
    case 0xC02819: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:188 AND #$00FF
    // Overlapping static entry reached from 0xC02819.
    case 0xC0281B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:189 BEQ @UNKNOWN13
    case 0xC0281C: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C02668.asm:190 LDX #8
    case 0xC0281E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C0/C02668.asm:190 LDX #8
    // Overlapping static entry reached from 0xC0281E.
    case 0xC02820: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C02668.asm:191 STX @LOCAL06
    case 0xC02821: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:193 LDY ENEMY_SPAWN_CHANCE
    case 0xC02823: cpu.execute_instruction<0xAC>(0x004DF6, 3); return true;
    // src/unknown/C0/C02668.asm:194 STY @LOCAL09
    case 0xC02826: cpu.execute_instruction<0x84>(0x000026, 2); return true;
    // src/unknown/C0/C02668.asm:195 LDA PIRACY_FLAG
    case 0xC02828: cpu.execute_instruction<0xAD>(0x00B6EA, 3); return true;
    // src/unknown/C0/C02668.asm:196 BNE @UNKNOWN14
    case 0xC0282B: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/unknown/C0/C02668.asm:197 JSL RAND
    case 0xC0282D: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C0/C02668.asm:198 LDY @LOCAL09
    case 0xC02831: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/unknown/C0/C02668.asm:199 STY @VIRTUAL02
    case 0xC02833: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:200 LDY #100
    case 0xC02835: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000064, 2); else cpu.execute_instruction<0xA0>(0x000064, 3); return true;
    // src/unknown/C0/C02668.asm:200 LDY #100
    // Overlapping static entry reached from 0xC02835.
    case 0xC02837: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:201 JSL MULT168
    case 0xC02838: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C02668.asm:202 XBA
    case 0xC0283C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:203 AND #$00FF
    case 0xC0283D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:203 AND #$00FF
    // Overlapping static entry reached from 0xC0283D.
    case 0xC0283F: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C0/C02668.asm:204 CMP @VIRTUAL02
    case 0xC02840: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:205 BCC @UNKNOWN14
    case 0xC02842: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C02668.asm:206 JMP @UNKNOWN32
    case 0xC02844: cpu.execute_instruction<0x4C>(0x002A79, 3); return true;
    // src/unknown/C0/C02668.asm:208 JSL RAND
    case 0xC02847: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C0/C02668.asm:209 AND #$0007
    case 0xC0284B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C02668.asm:209 AND #$0007
    // Overlapping static entry reached from 0xC0284B.
    case 0xC0284D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:210 STA @VIRTUAL02
    case 0xC0284E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:211 LDX @LOCAL06
    case 0xC02850: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:212 TXA
    case 0xC02852: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:213 CLC
    case 0xC02853: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:214 ADC @VIRTUAL02
    case 0xC02854: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:215 STA @LOCAL05
    case 0xC02856: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C02668.asm:216 LDX #0
    case 0xC02858: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:216 LDX #0
    // Overlapping static entry reached from 0xC02858.
    case 0xC0285A: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:218 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC0285B: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:218 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC0285D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:218 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC0285F: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:218 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02861: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:219 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02863: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:219 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02865: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:219 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02867: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:219 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC02869: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C02668.asm:220 LDA [@VIRTUAL0A] ;enemy_group::slots
    case 0xC0286B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C02668.asm:221 AND #$00FF
    case 0xC0286D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:221 AND #$00FF
    // Overlapping static entry reached from 0xC0286D.
    case 0xC0286F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:222 STA @VIRTUAL02
    case 0xC02870: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:223 TXA
    case 0xC02872: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:224 CLC
    case 0xC02873: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:225 ADC @VIRTUAL02
    case 0xC02874: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:226 TAX
    case 0xC02876: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:227 STX @VIRTUAL02
    case 0xC02877: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:228 LDA @LOCAL05
    case 0xC02879: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C02668.asm:229 CMP @VIRTUAL02
    case 0xC0287B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:230 BCC @UNKNOWN16
    case 0xC0287D: cpu.execute_instruction<0x90>(0x000010, 2); return true;
    // src/unknown/C0/C02668.asm:231 LDA #.SIZEOF(enemy_group)
    case 0xC0287F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C02668.asm:231 LDA #.SIZEOF(enemy_group)
    // Overlapping static entry reached from 0xC0287F.
    case 0xC02881: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:232 CLC
    case 0xC02882: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:233 ADC @VIRTUAL06
    case 0xC02883: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:234 STA @VIRTUAL06
    case 0xC02885: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:235 STA @LOCAL08
    case 0xC02887: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:236 LDA @VIRTUAL06+2
    case 0xC02889: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:237 STA @LOCAL08+2
    case 0xC0288B: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C02668.asm:238 BRA @UNKNOWN15
    case 0xC0288D: cpu.execute_instruction<0x80>(0x0000CC, 2); return true;
    // src/unknown/C0/C02668.asm:240 LDY #enemy_group::group
    case 0xC0288F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C02668.asm:240 LDY #enemy_group::group
    // Overlapping static entry reached from 0xC0288F.
    case 0xC02891: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C02668.asm:241 LDA [@VIRTUAL06],Y
    case 0xC02892: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:242 STA @LOCAL0B
    case 0xC02894: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C0/C02668.asm:243 STA SPAWNING_ENEMY_GROUP
    case 0xC02896: cpu.execute_instruction<0x8D>(0x004DF8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC02899: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00C60D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC02899.
    case 0xC0289B: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC0289C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0289B.
    case 0xC0289D: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC0289E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0289D.
    case 0xC0289F: cpu.execute_instruction<0xD0>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0289E.
    case 0xC028A0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C02668.asm:244 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL06
    case 0xC028A1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:245 LDA @LOCAL0B
    case 0xC028A3: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:246 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC028A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:246 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC028A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:246 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC028A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:247 CLC
    case 0xC028A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:248 ADC @VIRTUAL06
    case 0xC028A9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:249 STA @VIRTUAL06
    case 0xC028AB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC028AD.
    case 0xC028AF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028B0: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028B2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028B3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028B5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C02668.asm:250 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC028B7: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C0/C02668.asm:251 LDA @LOCAL0D
    case 0xC028B9: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:721 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:722 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:723 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:724 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:725 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:726 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:727 ASL
    // Macro caller: src/unknown/C0/C02668.asm:252 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC028C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:253 CLC
    case 0xC028C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:254 ADC @LOCAL0C
    case 0xC028C3: cpu.execute_instruction<0x65>(0x00002C, 2); return true;
    // src/unknown/C0/C02668.asm:255 STA @LOCAL06
    case 0xC028C5: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:256 LDY #0
    case 0xC028C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:256 LDY #0
    // Overlapping static entry reached from 0xC028C7.
    case 0xC028C9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C02668.asm:257 BRA @UNKNOWN19
    case 0xC028CA: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/unknown/C0/C02668.asm:259 TYA
    case 0xC028CC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:260 ASL
    case 0xC028CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:261 TAX
    case 0xC028CE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:262 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC028CF: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/unknown/C0/C02668.asm:263 CMP #.LOWORD(-1)
    case 0xC028D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C02668.asm:263 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC028D2.
    case 0xC028D4: cpu.execute_instruction<0xFF>(0xA515F0, 4); return true;
    // src/unknown/C0/C02668.asm:264 BEQ @UNKNOWN18
    case 0xC028D5: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C0/C02668.asm:265 LDA @LOCAL0B
    case 0xC028D7: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C0/C02668.asm:265 LDA @LOCAL0B
    // Overlapping static entry reached from 0xC028D4.
    case 0xC028D8: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:266 CLC
    case 0xC028D9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:267 ADC #$8000
    case 0xC028DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x008000, 3); return true;
    // src/unknown/C0/C02668.asm:267 ADC #$8000
    // Overlapping static entry reached from 0xC028DA.
    case 0xC028DC: cpu.execute_instruction<0x80>(0x0000DD, 2); return true;
    // src/unknown/C0/C02668.asm:268 CMP ENTITY_NPC_IDS,X
    case 0xC028DD: cpu.execute_instruction<0xDD>(0x003098, 3); return true;
    // src/unknown/C0/C02668.asm:269 BNE @UNKNOWN18
    case 0xC028E0: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C0/C02668.asm:270 LDA @LOCAL06
    case 0xC028E2: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:271 CMP ENTITY_ENEMY_SPAWN_TILES,X
    case 0xC028E4: cpu.execute_instruction<0xDD>(0x00314C, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C02668.asm:272 BEQL @UNKNOWN32
    case 0xC028E7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:272 BEQL @UNKNOWN32
    case 0xC028E9: cpu.execute_instruction<0x4C>(0x002A79, 3); return true;
    // src/unknown/C0/C02668.asm:274 INY
    case 0xC028EC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:276 CPY #23
    case 0xC028ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000017, 2); else cpu.execute_instruction<0xC0>(0x000017, 3); return true;
    // src/unknown/C0/C02668.asm:276 CPY #23
    // Overlapping static entry reached from 0xC028ED.
    case 0xC028EF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02668.asm:277 BNE @UNKNOWN17
    case 0xC028F0: cpu.execute_instruction<0xD0>(0x0000DA, 2); return true;
    // src/unknown/C0/C02668.asm:278 JMP @UNKNOWN31
    case 0xC028F2: cpu.execute_instruction<0x4C>(0x002A60, 3); return true;
    // src/unknown/C0/C02668.asm:280 LDY #battle_group_entry::id
    case 0xC028F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C02668.asm:280 LDY #battle_group_entry::id
    // Overlapping static entry reached from 0xC028F5.
    case 0xC028F7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C02668.asm:281 LDA [@VIRTUAL0A],Y
    case 0xC028F8: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C0/C02668.asm:282 STA @LOCAL04
    case 0xC028FA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC028FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC028FC.
    case 0xC028FE: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC028FF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC028FE.
    case 0xC02900: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC02901: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC02900.
    case 0xC02902: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC02901.
    case 0xC02903: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C02668.asm:283 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC02904: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:284 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC02906: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:284 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC02908: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:284 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC0290A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:284 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC0290C: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C02668.asm:285 LDA @LOCAL04
    case 0xC0290E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:286 LDY #.SIZEOF(enemy_data)
    case 0xC02910: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/unknown/C0/C02668.asm:286 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC02910.
    case 0xC02912: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:287 JSL MULT168
    case 0xC02913: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C02668.asm:288 STA @LOCAL03
    case 0xC02917: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C02668.asm:292 CLC
    case 0xC02919: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:293 ADC @VIRTUAL06
    case 0xC0291A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:294 STA @VIRTUAL06
    case 0xC0291C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:295 LDA [@VIRTUAL06]
    case 0xC0291E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:296 AND #$00FF
    case 0xC02920: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:296 AND #$00FF
    // Overlapping static entry reached from 0xC02920.
    case 0xC02922: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C02668.asm:297 STA SPAWNING_ENEMY_NAME
    case 0xC02923: cpu.execute_instruction<0x8D>(0x004DFC, 3); return true;
    // src/unknown/C0/C02668.asm:298 LDA @LOCAL03
    case 0xC02926: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C02668.asm:299 CLC
    case 0xC02928: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:300 ADC #enemy_data::overworld_sprite
    case 0xC02929: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/unknown/C0/C02668.asm:300 ADC #enemy_data::overworld_sprite
    // Overlapping static entry reached from 0xC02929.
    case 0xC0292B: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C02668.asm:301 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC0292C: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C02668.asm:301 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC0292E: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C02668.asm:301 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC02930: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C02668.asm:301 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC02932: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:302 CLC
    case 0xC02934: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:303 ADC @VIRTUAL06
    case 0xC02935: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:304 STA @VIRTUAL06
    case 0xC02937: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:305 LDA [@VIRTUAL06]
    case 0xC02939: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:306 STA @LOCAL09
    case 0xC0293B: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C02668.asm:307 STA SPAWNING_ENEMY_SPRITE
    case 0xC0293D: cpu.execute_instruction<0x8D>(0x004DFA, 3); return true;
    // src/unknown/C0/C02668.asm:308 LDA @LOCAL03
    case 0xC02940: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C02668.asm:309 CLC
    case 0xC02942: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:310 ADC #enemy_data::event_script
    case 0xC02943: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001A, 2); else cpu.execute_instruction<0x69>(0x00001A, 3); return true;
    // src/unknown/C0/C02668.asm:310 ADC #enemy_data::event_script
    // Overlapping static entry reached from 0xC02943.
    case 0xC02945: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C02668.asm:311 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC02946: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C02668.asm:311 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC02948: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C02668.asm:311 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC0294A: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C02668.asm:311 MOVE_INTX @LOCAL08, @VIRTUAL06
    case 0xC0294C: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:312 CLC
    case 0xC0294E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:313 ADC @VIRTUAL06
    case 0xC0294F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:314 STA @VIRTUAL06
    case 0xC02951: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:315 LDA [@VIRTUAL06]
    case 0xC02953: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:316 STA @LOCAL03
    case 0xC02955: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:317 BNEL @UNKNOWN29
    case 0xC02957: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:317 BNEL @UNKNOWN29
    case 0xC02959: cpu.execute_instruction<0x4C>(0x002A4A, 3); return true;
    // src/unknown/C0/C02668.asm:318 LDA #DEFAULT_ENEMY_MOVEMENT_STYLE
    case 0xC0295C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/unknown/C0/C02668.asm:318 LDA #DEFAULT_ENEMY_MOVEMENT_STYLE
    // Overlapping static entry reached from 0xC0295C.
    case 0xC0295E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02668.asm:319 STA @LOCAL03
    case 0xC0295F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C02668.asm:320 JMP @UNKNOWN29
    case 0xC02961: cpu.execute_instruction<0x4C>(0x002A4A, 3); return true;
    // src/unknown/C0/C02668.asm:322 LDA @LOCAL04
    case 0xC02964: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:323 CMP #ENEMY::MAGIC_BUTTERFLY
    case 0xC02966: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E1, 2); else cpu.execute_instruction<0xC9>(0x0000E1, 3); return true;
    // src/unknown/C0/C02668.asm:323 CMP #ENEMY::MAGIC_BUTTERFLY
    // Overlapping static entry reached from 0xC02966.
    case 0xC02968: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02668.asm:324 BNE @UNKNOWN23
    case 0xC02969: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:325 LDA MAGIC_BUTTERFLY_SPAWNED
    case 0xC0296B: cpu.execute_instruction<0xAD>(0x004DE6, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:326 BNEL @UNKNOWN29
    case 0xC0296E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:326 BNEL @UNKNOWN29
    case 0xC02970: cpu.execute_instruction<0x4C>(0x002A4A, 3); return true;
    // src/unknown/C0/C02668.asm:328 LDA OVERWORLD_ENEMY_COUNT
    case 0xC02973: cpu.execute_instruction<0xAD>(0x004DE2, 3); return true;
    // src/unknown/C0/C02668.asm:329 CMP OVERWORLD_ENEMY_MAXIMUM
    case 0xC02976: cpu.execute_instruction<0xCD>(0x004DE4, 3); return true;
    // src/unknown/C0/C02668.asm:330 BNE @UNKNOWN24
    case 0xC02979: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:331 INC ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    case 0xC0297B: cpu.execute_instruction<0xEE>(0x004DEE, 3); return true;
    // src/unknown/C0/C02668.asm:332 JMP @UNKNOWN29
    case 0xC0297E: cpu.execute_instruction<0x4C>(0x002A4A, 3); return true;
    // src/unknown/C0/C02668.asm:334 STZ ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    case 0xC02981: cpu.execute_instruction<0x9C>(0x004DEE, 3); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/C0/C02668.asm:335 STZ_BADOPT @LOCAL00
    case 0xC02984: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/C0/C02668.asm:335 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC02984.
    case 0xC02986: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:335 STZ_BADOPT @LOCAL00
    case 0xC02987: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C02668.asm:339 STA @LOCAL00+2
    case 0xC02989: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C02668.asm:341 LDY #.LOWORD(-1)
    case 0xC0298B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C02668.asm:341 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0298B.
    case 0xC0298D: cpu.execute_instruction<0xFF>(0xA516A6, 4); return true;
    // src/unknown/C0/C02668.asm:342 LDX @LOCAL03
    case 0xC0298E: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C02668.asm:343 LDA @LOCAL09
    case 0xC02990: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C0/C02668.asm:343 LDA @LOCAL09
    // Overlapping static entry reached from 0xC0298D.
    case 0xC02991: cpu.execute_instruction<0x26>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:344 JSL CREATE_ENTITY
    case 0xC02992: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/C0/C02668.asm:344 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC02991.
    case 0xC02993: cpu.execute_instruction<0x5F>(0x85C01E, 4); return true;
    // src/unknown/C0/C02668.asm:345 STA @LOCAL02
    case 0xC02996: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C02668.asm:345 STA @LOCAL02
    // Overlapping static entry reached from 0xC02993.
    case 0xC02997: cpu.execute_instruction<0x14>(0x000064, 2); return true;
    // src/unknown/C0/C02668.asm:346 STZ @LOCAL06
    case 0xC02998: cpu.execute_instruction<0x64>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:346 STZ @LOCAL06
    // Overlapping static entry reached from 0xC02997.
    case 0xC02999: cpu.execute_instruction<0x1C>(0x005680, 3); return true;
    // src/unknown/C0/C02668.asm:347 BRA @UNKNOWN27
    case 0xC0299A: cpu.execute_instruction<0x80>(0x000056, 2); return true;
    // src/unknown/C0/C02668.asm:349 JSL RAND
    case 0xC0299C: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C0/C02668.asm:350 LDY ENEMY_SPAWN_RANGE_WIDTH
    case 0xC029A0: cpu.execute_instruction<0xAC>(0x004DE8, 3); return true;
    // src/unknown/C0/C02668.asm:351 JSL MODULUS16
    case 0xC029A3: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/unknown/C0/C02668.asm:352 STA @VIRTUAL02
    case 0xC029A7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:353 LDA @LOCAL0C
    case 0xC029A9: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:354 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:354 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:354 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:355 CLC
    case 0xC029AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:356 ADC @VIRTUAL02
    case 0xC029AF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:357 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029B1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:357 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:357 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:358 STA @VIRTUAL04
    case 0xC029B4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C02668.asm:358 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC02A16.
    case 0xC029B5: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/unknown/C0/C02668.asm:359 JSL RAND
    case 0xC029B6: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C0/C02668.asm:359 JSL RAND
    // Overlapping static entry reached from 0xC029B5.
    case 0xC029B7: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:359 JSL RAND
    // Overlapping static entry reached from 0xC029B7.
    case 0xC029B8: cpu.execute_instruction<0x8E>(0x00ACC0, 3); return true;
    // src/unknown/C0/C02668.asm:360 LDY ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC029BA: cpu.execute_instruction<0xAC>(0x004DEA, 3); return true;
    // src/unknown/C0/C02668.asm:360 LDY ENEMY_SPAWN_RANGE_HEIGHT
    // Overlapping static entry reached from 0xC029B8.
    case 0xC029BB: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:360 LDY ENEMY_SPAWN_RANGE_HEIGHT
    // Overlapping static entry reached from 0xC029BB.
    case 0xC029BC: cpu.execute_instruction<0x4D>(0x001322, 3); return true;
    // src/unknown/C0/C02668.asm:361 JSL MODULUS16
    case 0xC029BD: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/unknown/C0/C02668.asm:361 JSL MODULUS16
    // Overlapping static entry reached from 0xC029BC.
    case 0xC029BF: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/unknown/C0/C02668.asm:362 STA @VIRTUAL02
    case 0xC029C1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:363 LDA @LOCAL0D
    case 0xC029C3: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:364 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:364 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:364 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:365 CLC
    case 0xC029C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:366 ADC @VIRTUAL02
    case 0xC029C9: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C02668.asm:367 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C02668.asm:367 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C02668.asm:367 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC029CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:368 STA @VIRTUAL02
    case 0xC029CE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:369 LDY @LOCAL02
    case 0xC029D0: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C02668.asm:370 LDX @VIRTUAL02
    case 0xC029D2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:371 LDA @VIRTUAL04
    case 0xC029D4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C02668.asm:372 JSL UNKNOWN_C05F33
    case 0xC029D6: cpu.execute_instruction<0x22>(0xC06161, 4); return true;
    // src/unknown/C0/C02668.asm:373 STA @LOCAL01
    case 0xC029DA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C02668.asm:374 AND #$00D0
    case 0xC029DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000D0, 2); else cpu.execute_instruction<0x29>(0x0000D0, 3); return true;
    // src/unknown/C0/C02668.asm:374 AND #$00D0
    // Overlapping static entry reached from 0xC029DC.
    case 0xC029DE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02668.asm:375 BNE @UNKNOWN26
    case 0xC029DF: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C02668.asm:376 LDY @LOCAL04
    case 0xC029E1: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:377 LDX @LOCAL02
    case 0xC029E3: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C02668.asm:378 LDA @LOCAL01
    case 0xC029E5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C02668.asm:379 JSL UNKNOWN_C05DE7
    case 0xC029E7: cpu.execute_instruction<0x22>(0xC06015, 4); return true;
    // src/unknown/C0/C02668.asm:380 CMP #0
    case 0xC029EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:380 CMP #0
    // Overlapping static entry reached from 0xC029EB.
    case 0xC029ED: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C02668.asm:381 BEQ @UNKNOWN28
    case 0xC029EE: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C02668.asm:383 INC @LOCAL06
    case 0xC029F0: cpu.execute_instruction<0xE6>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:385 LDA @LOCAL06
    case 0xC029F2: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:386 CMP #20
    case 0xC029F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/unknown/C0/C02668.asm:386 CMP #20
    // Overlapping static entry reached from 0xC029F4.
    case 0xC029F6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02668.asm:387 BNE @UNKNOWN25
    case 0xC029F7: cpu.execute_instruction<0xD0>(0x0000A3, 2); return true;
    // src/unknown/C0/C02668.asm:388 LDA @LOCAL02
    case 0xC029F9: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C02668.asm:389 JSL UNKNOWN_C02140
    case 0xC029FB: cpu.execute_instruction<0x22>(0xC0214E, 4); return true;
    // src/unknown/C0/C02668.asm:390 BRA @UNKNOWN29
    case 0xC029FF: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/unknown/C0/C02668.asm:392 LDA @LOCAL02
    case 0xC02A01: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C02668.asm:393 ASL
    case 0xC02A03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:394 TAX
    case 0xC02A04: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:395 STX @LOCAL06
    case 0xC02A05: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:396 LDA @VIRTUAL04
    case 0xC02A07: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C02668.asm:397 STA ENTITY_ABS_X_TABLE,X
    case 0xC02A09: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C02668.asm:398 LDA @VIRTUAL02
    case 0xC02A0C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C02668.asm:399 STA ENTITY_ABS_Y_TABLE,X
    case 0xC02A0E: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C02668.asm:400 LDA @LOCAL0B
    case 0xC02A11: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C0/C02668.asm:401 CLC
    case 0xC02A13: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:402 ADC #$8000
    case 0xC02A14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x008000, 3); return true;
    // src/unknown/C0/C02668.asm:402 ADC #$8000
    // Overlapping static entry reached from 0xC02A14.
    case 0xC02A16: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C0/C02668.asm:403 STA ENTITY_NPC_IDS,X
    case 0xC02A17: cpu.execute_instruction<0x9D>(0x003098, 3); return true;
    // src/unknown/C0/C02668.asm:404 LDA @LOCAL04
    case 0xC02A1A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:405 STA ENTITY_ENEMY_IDS,X
    case 0xC02A1C: cpu.execute_instruction<0x9D>(0x003110, 3); return true;
    // src/unknown/C0/C02668.asm:406 LDA @LOCAL0D
    case 0xC02A1F: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:721 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A21: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:722 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A22: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:723 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A23: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:724 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A24: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:725 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A25: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:726 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A26: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:727 ASL
    // Macro caller: src/unknown/C0/C02668.asm:407 OPTIMIZED_MULT @VIRTUAL04, 128
    case 0xC02A27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:408 CLC
    case 0xC02A28: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:409 ADC @LOCAL0C
    case 0xC02A29: cpu.execute_instruction<0x65>(0x00002C, 2); return true;
    // src/unknown/C0/C02668.asm:410 STA ENTITY_ENEMY_SPAWN_TILES,X
    case 0xC02A2B: cpu.execute_instruction<0x9D>(0x00314C, 3); return true;
    // src/unknown/C0/C02668.asm:411 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC02A2E: cpu.execute_instruction<0x9E>(0x00305C, 3); return true;
    // src/unknown/C0/C02668.asm:412 JSL RAND
    case 0xC02A31: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C0/C02668.asm:413 LDX @LOCAL06
    case 0xC02A35: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C02668.asm:414 STA ENTITY_WEAK_ENEMY_VALUE,X
    case 0xC02A37: cpu.execute_instruction<0x9D>(0x003584, 3); return true;
    // src/unknown/C0/C02668.asm:415 INC OVERWORLD_ENEMY_COUNT
    case 0xC02A3A: cpu.execute_instruction<0xEE>(0x004DE2, 3); return true;
    // src/unknown/C0/C02668.asm:416 LDA @LOCAL04
    case 0xC02A3D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:417 CMP #ENEMY::MAGIC_BUTTERFLY
    case 0xC02A3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E1, 2); else cpu.execute_instruction<0xC9>(0x0000E1, 3); return true;
    // src/unknown/C0/C02668.asm:417 CMP #ENEMY::MAGIC_BUTTERFLY
    // Overlapping static entry reached from 0xC02A3F.
    case 0xC02A41: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02668.asm:418 BNE @UNKNOWN29
    case 0xC02A42: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:419 LDA #1
    case 0xC02A44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C02668.asm:419 LDA #1
    // Overlapping static entry reached from 0xC02A44.
    case 0xC02A46: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C02668.asm:420 STA MAGIC_BUTTERFLY_SPAWNED
    case 0xC02A47: cpu.execute_instruction<0x8D>(0x004DE6, 3); return true;
    // src/unknown/C0/C02668.asm:422 LDX ENEMY_SPAWN_REMAINING_ENEMY_COUNT
    case 0xC02A4A: cpu.execute_instruction<0xAE>(0x004DF4, 3); return true;
    // src/unknown/C0/C02668.asm:423 DEC ENEMY_SPAWN_REMAINING_ENEMY_COUNT
    case 0xC02A4D: cpu.execute_instruction<0xCE>(0x004DF4, 3); return true;
    // src/unknown/C0/C02668.asm:424 CPX #0
    case 0xC02A50: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C02668.asm:424 CPX #0
    // Overlapping static entry reached from 0xC02A50.
    case 0xC02A52: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:425 BNEL @UNKNOWN22
    case 0xC02A53: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:425 BNEL @UNKNOWN22
    case 0xC02A55: cpu.execute_instruction<0x4C>(0x002964, 3); return true;
    // src/unknown/C0/C02668.asm:426 LDA #3
    case 0xC02A58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C02668.asm:426 LDA #3
    // Overlapping static entry reached from 0xC02A58.
    case 0xC02A5A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C02668.asm:427 CLC
    case 0xC02A5B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:428 ADC @VIRTUAL0A
    case 0xC02A5C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C02668.asm:429 STA @VIRTUAL0A
    case 0xC02A5E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C02668.asm:431 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02A60: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C02668.asm:431 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02A62: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C02668.asm:431 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02A64: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C02668.asm:431 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC02A66: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C02668.asm:432 LDA [@VIRTUAL06] ;battle_group_entry::count
    case 0xC02A68: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C02668.asm:433 AND #$00FF
    case 0xC02A6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:433 AND #$00FF
    // Overlapping static entry reached from 0xC02A6A.
    case 0xC02A6C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C02668.asm:434 TAX
    case 0xC02A6D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02668.asm:435 STX ENEMY_SPAWN_REMAINING_ENEMY_COUNT
    case 0xC02A6E: cpu.execute_instruction<0x8E>(0x004DF4, 3); return true;
    // src/unknown/C0/C02668.asm:436 CPX #>-1
    case 0xC02A71: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C0/C02668.asm:436 CPX #>-1
    // Overlapping static entry reached from 0xC02A71.
    case 0xC02A73: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C02668.asm:437 BNEL @UNKNOWN20
    case 0xC02A74: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C02668.asm:437 BNEL @UNKNOWN20
    case 0xC02A76: cpu.execute_instruction<0x4C>(0x0028F5, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C02668.asm:439 END_C_FUNCTION
    case 0xC02A79: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C02668.asm:439 END_C_FUNCTION
    case 0xC02A7A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C02C3E.asm (unresolved).
bool execute_unresolved_c0_c02c3e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C02C3E.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC02E13: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C02C3E.asm:4 LDA GAME_STATE+game_state::player_controlled_party_members
    case 0xC02E15: cpu.execute_instruction<0xAD>(0x009B42, 3); return true;
    // src/unknown/C0/C02C3E.asm:5 AND #$00FF
    case 0xC02E18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02C3E.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC02E18.
    case 0xC02E1A: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C02C3E.asm:6 LDY #.SIZEOF(char_struct)
    case 0xC02E1B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C02C3E.asm:6 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC02E1B.
    case 0xC02E1D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C02C3E.asm:7 JSL MULT168
    case 0xC02E1E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C02C3E.asm:8 CLC
    case 0xC02E22: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02C3E.asm:9 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC02E23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/unknown/C0/C02C3E.asm:9 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC02E23.
    case 0xC02E25: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/unknown/C0/C02C3E.asm:10 TAX
    case 0xC02E26: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02C3E.asm:11 LDA __BSS_START__+1,X
    case 0xC02E27: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/unknown/C0/C02C3E.asm:11 LDA __BSS_START__+1,X
    // Overlapping static entry reached from 0xC02E25.
    case 0xC02E28: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C02C3E.asm:12 AND #$00FF
    case 0xC02E2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C02C3E.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC02E2A.
    case 0xC02E2C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C02C3E.asm:13 CMP #$0001
    case 0xC02E2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C02C3E.asm:13 CMP #$0001
    // Overlapping static entry reached from 0xC02E2D.
    case 0xC02E2F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02C3E.asm:14 BNE @UNKNOWN1
    case 0xC02E30: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/unknown/C0/C02C3E.asm:15 LDA #$0001
    case 0xC02E32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C02C3E.asm:15 LDA #$0001
    // Overlapping static entry reached from 0xC02E32.
    case 0xC02E34: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C02C3E.asm:16 STA MUSHROOMIZED_WALKING_FLAG
    case 0xC02E35: cpu.execute_instruction<0x8D>(0x006126, 3); return true;
    // src/unknown/C0/C02C3E.asm:17 LDA MUSHROOMIZATION_TIMER
    case 0xC02E38: cpu.execute_instruction<0xAD>(0x006122, 3); return true;
    // src/unknown/C0/C02C3E.asm:18 BNE @UNKNOWN0
    case 0xC02E3B: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C0/C02C3E.asm:19 LDA #$0708
    case 0xC02E3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000708, 3); return true;
    // src/unknown/C0/C02C3E.asm:19 LDA #$0708
    // Overlapping static entry reached from 0xC02E3D.
    case 0xC02E3F: cpu.execute_instruction<0x07>(0x00008D, 2); return true;
    // src/unknown/C0/C02C3E.asm:20 STA MUSHROOMIZATION_TIMER
    case 0xC02E40: cpu.execute_instruction<0x8D>(0x006122, 3); return true;
    // src/unknown/C0/C02C3E.asm:20 STA MUSHROOMIZATION_TIMER
    // Overlapping static entry reached from 0xC02E3F.
    case 0xC02E41: cpu.execute_instruction<0x22>(0x249C61, 4); return true;
    // src/unknown/C0/C02C3E.asm:21 STZ MUSHROOMIZATION_MODIFIER
    case 0xC02E43: cpu.execute_instruction<0x9C>(0x006124, 3); return true;
    // src/unknown/C0/C02C3E.asm:21 STZ MUSHROOMIZATION_MODIFIER
    // Overlapping static entry reached from 0xC02E41.
    case 0xC02E45: cpu.execute_instruction<0x61>(0x0000AD, 2); return true;
    // src/unknown/C0/C02C3E.asm:23 LDA GAME_STATE+game_state::walking_style
    case 0xC02E46: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/unknown/C0/C02C3E.asm:23 LDA GAME_STATE+game_state::walking_style
    // Overlapping static entry reached from 0xC02E45.
    case 0xC02E47: cpu.execute_instruction<0x34>(0x00009B, 2); return true;
    // src/unknown/C0/C02C3E.asm:24 CMP #WALKING_STYLE::BICYCLE
    case 0xC02E49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C02C3E.asm:24 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC02E49.
    case 0xC02E4B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C02C3E.asm:25 BNE @UNKNOWN2
    case 0xC02E4C: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C0/C02C3E.asm:26 JSL UNKNOWN_C03CFD
    case 0xC02E4E: cpu.execute_instruction<0x22>(0xC03F64, 4); return true;
    // src/unknown/C0/C02C3E.asm:27 BRA @UNKNOWN2
    case 0xC02E52: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C02C3E.asm:29 STZ MUSHROOMIZED_WALKING_FLAG
    case 0xC02E54: cpu.execute_instruction<0x9C>(0x006126, 3); return true;
    // src/unknown/C0/C02C3E.asm:31 RTL
    case 0xC02E57: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C02D29.asm (unresolved).
bool execute_unresolved_c0_c02d29_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C02D29.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC02EFE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C02D29.asm:6 END_STACK_VARS
    case 0xC02F00: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C02D29.asm:6 END_STACK_VARS
    case 0xC02F01: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02D29.asm:6 END_STACK_VARS
    case 0xC02F02: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C02D29.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC02F02.
    case 0xC02F04: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C02D29.asm:6 END_STACK_VARS
    case 0xC02F05: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C02D29.asm:7 LDA #1
    case 0xC02F06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C02D29.asm:7 LDA #1
    // Overlapping static entry reached from 0xC02F06.
    case 0xC02F08: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C02D29.asm:8 STA ENTITY_SIZES+23 * 2
    case 0xC02F09: cpu.execute_instruction<0x8D>(0x002F9A, 3); return true;
    // src/unknown/C0/C02D29.asm:9 LDA #.LOWORD(-1)
    case 0xC02F0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C02D29.asm:9 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC02F0C.
    case 0xC02F0E: cpu.execute_instruction<0xFF>(0xA16D8D, 4); return true;
    // src/unknown/C0/C02D29.asm:10 STA MINI_GHOST_ENTITY_ID
    case 0xC02F0F: cpu.execute_instruction<0x8D>(0x00A16D, 3); return true;
    // src/unknown/C0/C02D29.asm:11 STZ GAME_STATE+game_state::unknown88
    case 0xC02F12: cpu.execute_instruction<0x9C>(0x009B2E, 3); return true;
    // src/unknown/C0/C02D29.asm:12 STZ GAME_STATE+game_state::unknownB0
    case 0xC02F15: cpu.execute_instruction<0x9C>(0x009B56, 3); return true;
    // src/unknown/C0/C02D29.asm:13 STZ GAME_STATE+game_state::unknownB2
    case 0xC02F18: cpu.execute_instruction<0x9C>(0x009B58, 3); return true;
    // src/unknown/C0/C02D29.asm:14 STZ GAME_STATE+game_state::unknownB4
    case 0xC02F1B: cpu.execute_instruction<0x9C>(0x009B5A, 3); return true;
    // src/unknown/C0/C02D29.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC02F1E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C02D29.asm:16 STZ GAME_STATE+game_state::party_status
    case 0xC02F20: cpu.execute_instruction<0x9C>(0x009AF1, 3); return true;
    // src/unknown/C0/C02D29.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC02F23: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C02D29.asm:18 LDA #PARTY_LEADER_ENTITY_INDEX
    case 0xC02F25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C02D29.asm:18 LDA #PARTY_LEADER_ENTITY_INDEX
    // Overlapping static entry reached from 0xC02F25.
    case 0xC02F27: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C02D29.asm:19 STA GAME_STATE+game_state::current_party_members
    case 0xC02F28: cpu.execute_instruction<0x8D>(0x009B3A, 3); return true;
    // src/unknown/C0/C02D29.asm:20 LDA #0
    case 0xC02F2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C02D29.asm:20 LDA #0
    // Overlapping static entry reached from 0xC02F2B.
    case 0xC02F2D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C02D29.asm:21 STA @LOCAL00
    case 0xC02F2E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C02D29.asm:22 BRA @UNKNOWN1
    case 0xC02F30: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C0/C02D29.asm:25 CLC
    case 0xC02F32: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C02D29.asm:26 ADC #.LOWORD(GAME_STATE)
    case 0xC02F33: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C02D29.asm:26 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC02F33.
    case 0xC02F35: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C02D29.asm:27 TAX
    case 0xC02F36: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02D29.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC02F37: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C02D29.asm:29 STZ a:game_state::unknown96,X
    case 0xC02F39: cpu.execute_instruction<0x9E>(0x000093, 3); return true;
    // src/unknown/C0/C02D29.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC02F3C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C02D29.asm:31 LDA @LOCAL00
    case 0xC02F3E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C02D29.asm:38 ASL
    case 0xC02F40: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C02D29.asm:39 TAX
    case 0xC02F41: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C02D29.asm:40 STZ HP_ALERT_SHOWN,X
    case 0xC02F42: cpu.execute_instruction<0x9E>(0x006112, 3); return true;
    // src/unknown/C0/C02D29.asm:41 LDA @LOCAL00
    case 0xC02F45: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C02D29.asm:42 INC
    case 0xC02F47: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C02D29.asm:43 STA @LOCAL00
    case 0xC02F48: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C02D29.asm:45 CMP #TOTAL_PARTY_COUNT
    case 0xC02F4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C02D29.asm:45 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC02F4A.
    case 0xC02F4C: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C02D29.asm:46 BCC @UNKNOWN0
    case 0xC02F4D: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/unknown/C0/C02D29.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC02F4F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C02D29.asm:48 LDA #0
    case 0xC02F51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/unknown/C0/C02D29.asm:49 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC02F53: cpu.execute_instruction<0x8D>(0x009B55, 3); return true;
    // src/unknown/C0/C02D29.asm:49 STA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC02F51.
    case 0xC02F54: cpu.execute_instruction<0x55>(0x00009B, 2); return true;
    // src/unknown/C0/C02D29.asm:50 STA GAME_STATE+game_state::party_count
    case 0xC02F56: cpu.execute_instruction<0x8D>(0x009B54, 3); return true;
    // src/unknown/C0/C02D29.asm:51 JSL VELOCITY_STORE
    case 0xC02F59: cpu.execute_instruction<0x22>(0xC02C4E, 4); return true;
    // src/unknown/C0/C02D29.asm:52 LDA f:NESS_PAJAMA_FLAG
    case 0xC02F5D: cpu.execute_instruction<0xAF>(0xC30186, 4); return true;
    // src/unknown/C0/C02D29.asm:53 JSL GET_EVENT_FLAG
    case 0xC02F61: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C0/C02D29.asm:53 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC02FDC.
    case 0xC02F63: cpu.execute_instruction<0x14>(0x0000C2, 2); return true;
    // src/unknown/C0/C02D29.asm:54 STA PAJAMA_FLAG
    case 0xC02F65: cpu.execute_instruction<0x8D>(0x00A173, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C02D29.asm:55 END_C_FUNCTION
    case 0xC02F68: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C02D29.asm:55 END_C_FUNCTION
    case 0xC02F69: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0329F.asm (unresolved).
bool execute_unresolved_c0_c0329f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0329F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0347A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0329F.asm:8 END_STACK_VARS
    case 0xC0347C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0329F.asm:8 END_STACK_VARS
    case 0xC0347D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0329F.asm:8 END_STACK_VARS
    case 0xC0347E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0329F.asm:8 END_STACK_VARS
    case 0xC0347F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0329F.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0347F.
    case 0xC03481: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0329F.asm:8 END_STACK_VARS
    case 0xC03482: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0329F.asm:8 END_STACK_VARS
    case 0xC03483: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:9 TAX
    case 0xC03484: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:10 STX @LOCAL01
    case 0xC03485: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0329F.asm:11 TXA
    case 0xC03487: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:12 LDY #.SIZEOF(char_struct)
    case 0xC03488: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C0329F.asm:12 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03488.
    case 0xC0348A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0329F.asm:13 JSL MULT168
    case 0xC0348B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C0329F.asm:14 TAX
    case 0xC0348F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC03490: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0329F.asm:16 STZ PARTY_CHARACTERS + char_struct::afflictions,X
    case 0xC03492: cpu.execute_instruction<0x9E>(0x009C8C, 3); return true;
    // src/unknown/C0/C0329F.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC03495: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0329F.asm:18 LDA #1
    case 0xC03497: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0329F.asm:18 LDA #1
    // Overlapping static entry reached from 0xC03497.
    case 0xC03499: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0329F.asm:19 STA @LOCAL00
    case 0xC0349A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0329F.asm:20 BRA @UNKNOWN1
    case 0xC0349C: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C0/C0329F.asm:22 STA @VIRTUAL02
    case 0xC0349E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0329F.asm:23 LDX @LOCAL01
    case 0xC034A0: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0329F.asm:24 TXA
    case 0xC034A2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC034A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C0329F.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC034A3.
    case 0xC034A5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0329F.asm:26 JSL MULT168
    case 0xC034A6: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C0329F.asm:27 CLC
    case 0xC034AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:28 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC034AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/unknown/C0/C0329F.asm:28 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC034AB.
    case 0xC034AD: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C0/C0329F.asm:29 CLC
    case 0xC034AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:30 ADC @VIRTUAL02
    case 0xC034AF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0329F.asm:30 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC034AD.
    case 0xC034B0: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C0/C0329F.asm:31 TAX
    case 0xC034B1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC034B2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0329F.asm:33 LDA #0
    case 0xC034B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/unknown/C0/C0329F.asm:34 STA __BSS_START__,X
    case 0xC034B6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0329F.asm:34 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC034B4.
    case 0xC034B7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0329F.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC034B9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0329F.asm:36 LDA @LOCAL00
    case 0xC034BB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0329F.asm:37 INC
    case 0xC034BD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0329F.asm:38 STA @LOCAL00
    case 0xC034BE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0329F.asm:40 CMP #7
    case 0xC034C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0329F.asm:40 CMP #7
    // Overlapping static entry reached from 0xC034C0.
    case 0xC034C2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0329F.asm:41 BCC @UNKNOWN0
    case 0xC034C3: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0329F.asm:42 END_C_FUNCTION
    case 0xC034C5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0329F.asm:42 END_C_FUNCTION
    case 0xC034C6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C032EC-jp.asm (unresolved).
bool execute_unresolved_c0_c032ec_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C032EC-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC034C7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C032EC-jp.asm:10 END_STACK_VARS
    case 0xC034C9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C032EC-jp.asm:10 END_STACK_VARS
    case 0xC034CA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C032EC-jp.asm:10 END_STACK_VARS
    case 0xC034CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C032EC-jp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC034CB.
    case 0xC034CD: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C032EC-jp.asm:10 END_STACK_VARS
    case 0xC034CE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:11 LDY #0
    case 0xC034CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:11 LDY #0
    // Overlapping static entry reached from 0xC034CF.
    case 0xC034D1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:12 BRA @UNKNOWN1
    case 0xC034D2: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:14 INY
    case 0xC034D4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:16 TYA
    case 0xC034D5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:17 CLC
    case 0xC034D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:18 ADC #.LOWORD(GAME_STATE)
    case 0xC034D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:18 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC034D7.
    case 0xC034D9: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:19 TAX
    case 0xC034DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:20 LDA a:game_state::party_members,X
    case 0xC034DB: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:21 AND #$00FF
    case 0xC034DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC034DE.
    case 0xC034E0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:22 BEQ @UNKNOWN3
    case 0xC034E1: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:23 AND #$00FF
    case 0xC034E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC034E3.
    case 0xC034E5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:24 STA @VIRTUAL02
    case 0xC034E6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:25 LDA #5
    case 0xC034E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:25 LDA #5
    // Overlapping static entry reached from 0xC034E8.
    case 0xC034EA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:26 CLC
    case 0xC034EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:27 SBC @VIRTUAL02
    case 0xC034EC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C0/C032EC-jp.asm:28 BRANCHGTS @UNKNOWN0
    case 0xC034EE: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:28 BRANCHGTS @UNKNOWN0
    case 0xC034F0: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C0/C032EC-jp.asm:28 BRANCHGTS @UNKNOWN0
    case 0xC034F2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:28 BRANCHGTS @UNKNOWN0
    case 0xC034F4: cpu.execute_instruction<0x30>(0x0000DE, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:30 TYA
    case 0xC034F6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC034F7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:32 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC034F9: cpu.execute_instruction<0x8D>(0x009B55, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC034FC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:34 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_1
    case 0xC034FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EB, 2); else cpu.execute_instruction<0xA9>(0x009AEB, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:34 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_1
    // Overlapping static entry reached from 0xC034FE.
    case 0xC03500: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:35 STA @VIRTUAL04
    case 0xC03501: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:36 LDX @VIRTUAL04
    case 0xC03503: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC03505: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:38 LDA __BSS_START__,X
    case 0xC03507: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:39 STA @LOCAL04
    case 0xC0350A: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC0350C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:41 TYA
    case 0xC0350E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:42 CLC
    case 0xC0350F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:43 ADC #.LOWORD(GAME_STATE)
    case 0xC03510: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:43 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03510.
    case 0xC03512: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:44 CLC
    case 0xC03513: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:45 ADC #game_state::party_members
    case 0xC03514: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000077, 2); else cpu.execute_instruction<0x69>(0x000077, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:45 ADC #game_state::party_members
    // Overlapping static entry reached from 0xC03514.
    case 0xC03516: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:46 STA @LOCAL03
    case 0xC03517: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC03519: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:48 LDA (@LOCAL03)
    case 0xC0351B: cpu.execute_instruction<0xB2>(0x000015, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:49 STA @VIRTUAL00
    case 0xC0351D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:50 LDA @LOCAL04
    case 0xC0351F: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:51 CMP @VIRTUAL00
    case 0xC03521: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C032EC-jp.asm:52 BEQL @UNKNOWN8
    case 0xC03523: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:52 BEQL @UNKNOWN8
    case 0xC03525: cpu.execute_instruction<0x4C>(0x00367C, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC03528: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:54 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_2
    case 0xC0352A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EC, 2); else cpu.execute_instruction<0xA9>(0x009AEC, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:54 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_2
    // Overlapping static entry reached from 0xC0352A.
    case 0xC0352C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:55 STA @VIRTUAL02
    case 0xC0352D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:56 LDX @VIRTUAL02
    case 0xC0352F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC03531: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:58 LDA __BSS_START__,X
    case 0xC03533: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:59 STA @VIRTUAL01
    case 0xC03536: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:60 CMP @VIRTUAL00
    case 0xC03538: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:61 BNE @UNKNOWN5
    case 0xC0353A: cpu.execute_instruction<0xD0>(0x000045, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:62 LDA @VIRTUAL01
    case 0xC0353C: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:63 LDX @VIRTUAL04
    case 0xC0353E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:64 STA __BSS_START__,X
    case 0xC03540: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:65 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_2_hp
    case 0xC03543: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000EF, 2); else cpu.execute_instruction<0xA2>(0x009AEF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:65 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_2_hp
    // Overlapping static entry reached from 0xC03543.
    case 0xC03545: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:66 STX @LOCAL02
    case 0xC03546: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC03548: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:68 LDA __BSS_START__,X
    case 0xC0354A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:69 STA GAME_STATE+game_state::party_npc_1_hp
    case 0xC0354D: cpu.execute_instruction<0x8D>(0x009AED, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC03550: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:71 LDA GAME_STATE + game_state::party_members + 1,Y
    case 0xC03552: cpu.execute_instruction<0xB9>(0x009B21, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:72 LDX @VIRTUAL02
    case 0xC03555: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:73 STA __BSS_START__,X
    case 0xC03557: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC0355A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:75 AND #$00FF
    case 0xC0355C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC0355C.
    case 0xC0355E: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:76 ASL
    case 0xC0355F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:77 TAX
    case 0xC03560: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:78 INX
    case 0xC03561: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:79 LDA f:NPC_AI_TABLE,X
    case 0xC03562: cpu.execute_instruction<0xBF>(0xD59DDA, 4); return true;
    // src/unknown/C0/C032EC-jp.asm:80 AND #$00FF
    case 0xC03566: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC03566.
    case 0xC03568: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:81 LDY #.SIZEOF(enemy_data)
    case 0xC03569: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:81 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC03569.
    case 0xC0356B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:82 JSL MULT168
    case 0xC0356C: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C032EC-jp.asm:83 CLC
    case 0xC03570: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:84 ADC #enemy_data::hp
    case 0xC03571: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:84 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC03571.
    case 0xC03573: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:85 TAX
    case 0xC03574: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:86 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC03575: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/unknown/C0/C032EC-jp.asm:87 LDX @LOCAL02
    case 0xC03579: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:88 STA __BSS_START__,X
    case 0xC0357B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:89 JMP @UNKNOWN9
    case 0xC0357E: cpu.execute_instruction<0x4C>(0x0036C3, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:91 LDA @LOCAL04
    case 0xC03581: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:92 CMP GAME_STATE + game_state::party_members + 1,Y
    case 0xC03583: cpu.execute_instruction<0xD9>(0x009B21, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:93 BNE @UNKNOWN6
    case 0xC03586: cpu.execute_instruction<0xD0>(0x000042, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:94 LDX @VIRTUAL02
    case 0xC03588: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:95 STA __BSS_START__,X
    case 0xC0358A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:96 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_1_hp
    case 0xC0358D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000ED, 2); else cpu.execute_instruction<0xA2>(0x009AED, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:96 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_1_hp
    // Overlapping static entry reached from 0xC0358D.
    case 0xC0358F: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:97 STX @LOCAL02
    case 0xC03590: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:98 REP #PROC_FLAGS::ACCUM8
    case 0xC03592: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:99 LDA __BSS_START__,X
    case 0xC03594: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:100 STA GAME_STATE+game_state::party_npc_2_hp
    case 0xC03597: cpu.execute_instruction<0x8D>(0x009AEF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:101 SEP #PROC_FLAGS::ACCUM8
    case 0xC0359A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:102 LDA (@LOCAL03)
    case 0xC0359C: cpu.execute_instruction<0xB2>(0x000015, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:103 LDX @VIRTUAL04
    case 0xC0359E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:104 STA __BSS_START__,X
    case 0xC035A0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:105 REP #PROC_FLAGS::ACCUM8
    case 0xC035A3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:106 AND #$00FF
    case 0xC035A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:106 AND #$00FF
    // Overlapping static entry reached from 0xC035A5.
    case 0xC035A7: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:107 ASL
    case 0xC035A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:108 TAX
    case 0xC035A9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:109 INX
    case 0xC035AA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:110 LDA f:NPC_AI_TABLE,X
    case 0xC035AB: cpu.execute_instruction<0xBF>(0xD59DDA, 4); return true;
    // src/unknown/C0/C032EC-jp.asm:111 AND #$00FF
    case 0xC035AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:111 AND #$00FF
    // Overlapping static entry reached from 0xC035AF.
    case 0xC035B1: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:112 LDY #.SIZEOF(enemy_data)
    case 0xC035B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:112 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC035B2.
    case 0xC035B4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:113 JSL MULT168
    case 0xC035B5: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C032EC-jp.asm:114 CLC
    case 0xC035B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:115 ADC #enemy_data::hp
    case 0xC035BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:115 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC035BA.
    case 0xC035BC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:116 TAX
    case 0xC035BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:117 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC035BE: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/unknown/C0/C032EC-jp.asm:118 LDX @LOCAL02
    case 0xC035C2: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:119 STA __BSS_START__,X
    case 0xC035C4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:120 JMP @UNKNOWN9
    case 0xC035C7: cpu.execute_instruction<0x4C>(0x0036C3, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:122 LDA @VIRTUAL00
    case 0xC035CA: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:123 LDX @VIRTUAL04
    case 0xC035CC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:124 STA __BSS_START__,X
    case 0xC035CE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:125 REP #PROC_FLAGS::ACCUM8
    case 0xC035D1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:126 TYA
    case 0xC035D3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:127 INC
    case 0xC035D4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:128 STA @LOCAL02
    case 0xC035D5: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:129 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC035D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:129 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC035D7.
    case 0xC035D9: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C032EC-jp.asm:129 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC035DA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C032EC-jp.asm:129 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC035D9.
    case 0xC035DB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:129 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC035DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:129 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC035DC.
    case 0xC035DE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:129 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC035DF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:130 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC035E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DA, 2); else cpu.execute_instruction<0xA9>(0x009DDA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:130 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC035E1.
    case 0xC035E3: cpu.execute_instruction<0x9D>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C032EC-jp.asm:130 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC035E4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:130 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC035E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:130 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC035E6.
    case 0xC035E8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:130 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC035E9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C032EC-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC035EB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC035ED: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC035EF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC035F1: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:132 LDA @VIRTUAL00
    case 0xC035F3: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:133 AND #$00FF
    case 0xC035F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:133 AND #$00FF
    // Overlapping static entry reached from 0xC035F5.
    case 0xC035F7: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:134 ASL
    case 0xC035F8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:135 INC
    case 0xC035F9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:136 CLC
    case 0xC035FA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:137 ADC @VIRTUAL06
    case 0xC035FB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:138 STA @VIRTUAL06
    case 0xC035FD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:139 LDA [@VIRTUAL06]
    case 0xC035FF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:140 AND #$00FF
    case 0xC03601: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:140 AND #$00FF
    // Overlapping static entry reached from 0xC03601.
    case 0xC03603: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:141 LDY #.SIZEOF(enemy_data)
    case 0xC03604: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:141 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC03604.
    case 0xC03606: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:142 JSL MULT168
    case 0xC03607: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C032EC-jp.asm:143 CLC
    case 0xC0360B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:144 ADC #enemy_data::hp
    case 0xC0360C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:144 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC0360C.
    case 0xC0360E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C032EC-jp.asm:145 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0360F: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:145 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC03611: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:145 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC03613: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:145 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC03615: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:146 CLC
    case 0xC03617: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:147 ADC @VIRTUAL06
    case 0xC03618: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:148 STA @VIRTUAL06
    case 0xC0361A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:149 LDA [@VIRTUAL06]
    case 0xC0361C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:150 STA GAME_STATE+game_state::party_npc_1_hp
    case 0xC0361E: cpu.execute_instruction<0x8D>(0x009AED, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:151 LDA @LOCAL02
    case 0xC03621: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:152 CLC
    case 0xC03623: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:153 ADC #.LOWORD(GAME_STATE)
    case 0xC03624: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:153 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03624.
    case 0xC03626: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:154 TAX
    case 0xC03627: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:155 SEP #PROC_FLAGS::ACCUM8
    case 0xC03628: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:156 LDA a:game_state::party_members,X
    case 0xC0362A: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:157 STA @LOCAL00
    case 0xC0362D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:158 STA @VIRTUAL00
    case 0xC0362F: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:159 LDX @VIRTUAL02
    case 0xC03631: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:160 LDA __BSS_START__,X
    case 0xC03633: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:161 CMP @VIRTUAL00
    case 0xC03636: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C032EC-jp.asm:162 BEQL @UNKNOWN9
    case 0xC03638: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:162 BEQL @UNKNOWN9
    case 0xC0363A: cpu.execute_instruction<0x4C>(0x0036C3, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:163 LDA @LOCAL00
    case 0xC0363D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:164 LDX @VIRTUAL02
    case 0xC0363F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:165 STA __BSS_START__,X
    case 0xC03641: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:166 REP #PROC_FLAGS::ACCUM8
    case 0xC03644: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:167 AND #$00FF
    case 0xC03646: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:167 AND #$00FF
    // Overlapping static entry reached from 0xC03646.
    case 0xC03648: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:168 ASL
    case 0xC03649: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:169 INC
    case 0xC0364A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C032EC-jp.asm:170 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC0364B: cpu.execute_instruction<0xA6>(0x00000F, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:170 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC0364D: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:170 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC0364F: cpu.execute_instruction<0xA6>(0x000011, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:170 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC03651: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:171 CLC
    case 0xC03653: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:172 ADC @VIRTUAL06
    case 0xC03654: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:173 STA @VIRTUAL06
    case 0xC03656: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:174 LDA [@VIRTUAL06]
    case 0xC03658: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:175 AND #$00FF
    case 0xC0365A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:175 AND #$00FF
    // Overlapping static entry reached from 0xC0365A.
    case 0xC0365C: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:176 LDY #.SIZEOF(enemy_data)
    case 0xC0365D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:176 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC0365D.
    case 0xC0365F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:177 JSL MULT168
    case 0xC03660: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C032EC-jp.asm:178 CLC
    case 0xC03664: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:179 ADC #enemy_data::hp
    case 0xC03665: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:179 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC03665.
    case 0xC03667: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C032EC-jp.asm:180 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC03668: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:180 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0366A: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:180 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0366C: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:180 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0366E: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:181 CLC
    case 0xC03670: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:182 ADC @VIRTUAL06
    case 0xC03671: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:183 STA @VIRTUAL06
    case 0xC03673: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:184 LDA [@VIRTUAL06]
    case 0xC03675: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:185 STA GAME_STATE+game_state::party_npc_2_hp
    case 0xC03677: cpu.execute_instruction<0x8D>(0x009AEF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:186 BRA @UNKNOWN9
    case 0xC0367A: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:188 REP #PROC_FLAGS::ACCUM8
    case 0xC0367C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:189 TYA
    case 0xC0367E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:190 INC
    case 0xC0367F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:191 LDX #.LOWORD(GAME_STATE) + game_state::party_npc_2
    case 0xC03680: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000EC, 2); else cpu.execute_instruction<0xA2>(0x009AEC, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:191 LDX #.LOWORD(GAME_STATE) + game_state::party_npc_2
    // Overlapping static entry reached from 0xC03680.
    case 0xC03682: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:192 STX @LOCAL02
    case 0xC03683: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:193 CLC
    case 0xC03685: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:194 ADC #.LOWORD(GAME_STATE)
    case 0xC03686: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:194 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03686.
    case 0xC03688: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:195 TAX
    case 0xC03689: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:196 SEP #PROC_FLAGS::ACCUM8
    case 0xC0368A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:197 LDA a:game_state::party_members,X
    case 0xC0368C: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:198 STA @LOCAL00
    case 0xC0368F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:199 STA @VIRTUAL00
    case 0xC03691: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:200 LDX @LOCAL02
    case 0xC03693: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:201 LDA __BSS_START__,X
    case 0xC03695: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:202 CMP @VIRTUAL00
    case 0xC03698: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:203 BEQ @UNKNOWN9
    case 0xC0369A: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:204 LDA @LOCAL00
    case 0xC0369C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:205 STA __BSS_START__,X
    case 0xC0369E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:206 REP #PROC_FLAGS::ACCUM8
    case 0xC036A1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:207 AND #$00FF
    case 0xC036A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:207 AND #$00FF
    // Overlapping static entry reached from 0xC036A3.
    case 0xC036A5: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:208 ASL
    case 0xC036A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:209 TAX
    case 0xC036A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:210 INX
    case 0xC036A8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:211 LDA f:NPC_AI_TABLE,X
    case 0xC036A9: cpu.execute_instruction<0xBF>(0xD59DDA, 4); return true;
    // src/unknown/C0/C032EC-jp.asm:212 AND #$00FF
    case 0xC036AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:212 AND #$00FF
    // Overlapping static entry reached from 0xC036AD.
    case 0xC036AF: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:213 LDY #.SIZEOF(enemy_data)
    case 0xC036B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:213 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC036B0.
    case 0xC036B2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:214 JSL MULT168
    case 0xC036B3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C032EC-jp.asm:215 CLC
    case 0xC036B7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:216 ADC #enemy_data::hp
    case 0xC036B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:216 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC036B8.
    case 0xC036BA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C032EC-jp.asm:217 TAX
    case 0xC036BB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C032EC-jp.asm:218 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC036BC: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/unknown/C0/C032EC-jp.asm:219 STA GAME_STATE+game_state::party_npc_2_hp
    case 0xC036C0: cpu.execute_instruction<0x8D>(0x009AEF, 3); return true;
    // src/unknown/C0/C032EC-jp.asm:221 REP #PROC_FLAGS::ACCUM8
    case 0xC036C3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C032EC-jp.asm:222 END_C_FUNCTION
    case 0xC036C5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C032EC-jp.asm:222 END_C_FUNCTION
    case 0xC036C6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0369B-jp.asm (unresolved).
bool execute_unresolved_c0_c0369b_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0369B-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0389E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0369B-jp.asm:14 END_STACK_VARS
    case 0xC038A0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0369B-jp.asm:14 END_STACK_VARS
    case 0xC038A1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0369B-jp.asm:14 END_STACK_VARS
    case 0xC038A2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0369B-jp.asm:14 END_STACK_VARS
    case 0xC038A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0369B-jp.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC038A3.
    case 0xC038A5: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0369B-jp.asm:14 END_STACK_VARS
    case 0xC038A6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0369B-jp.asm:14 END_STACK_VARS
    case 0xC038A7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:15 TAY
    case 0xC038A8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:16 STY @LOCAL06
    case 0xC038A9: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:17 LDX #0
    case 0xC038AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:17 LDX #0
    // Overlapping static entry reached from 0xC038AB.
    case 0xC038AD: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:18 STX @LOCAL05
    case 0xC038AE: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:19 CPY #5
    case 0xC038B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000005, 2); else cpu.execute_instruction<0xC0>(0x000005, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:19 CPY #5
    // Overlapping static entry reached from 0xC038B0.
    case 0xC038B2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:20 BCC @UNKNOWN1
    case 0xC038B3: cpu.execute_instruction<0x90>(0x000021, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:22 TXA
    case 0xC038B5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:23 CLC
    case 0xC038B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:24 ADC #.LOWORD(GAME_STATE)
    case 0xC038B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:24 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC038B7.
    case 0xC038B9: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:25 TAX
    case 0xC038BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:26 LDA a:game_state::unknown96,X
    case 0xC038BB: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:27 AND #$00FF
    case 0xC038BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC038BE.
    case 0xC038C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:28 BEQ @UNKNOWN5
    case 0xC038C1: cpu.execute_instruction<0xF0>(0x000061, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:29 AND #$00FF
    case 0xC038C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC038C3.
    case 0xC038C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:30 STA @VIRTUAL02
    case 0xC038C6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:31 TYA
    case 0xC038C8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:32 CMP @VIRTUAL02
    case 0xC038C9: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0369B-jp.asm:33 BLTEQ @UNKNOWN5
    case 0xC038CB: cpu.execute_instruction<0x90>(0x000057, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0369B-jp.asm:33 BLTEQ @UNKNOWN5
    case 0xC038CD: cpu.execute_instruction<0xF0>(0x000055, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:34 LDX @LOCAL05
    case 0xC038CF: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:35 INX
    case 0xC038D1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:36 STX @LOCAL05
    case 0xC038D2: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:37 BRA @UNKNOWN0
    case 0xC038D4: cpu.execute_instruction<0x80>(0x0000DF, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:39 TXA
    case 0xC038D6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:40 CLC
    case 0xC038D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:41 ADC #.LOWORD(GAME_STATE)
    case 0xC038D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:41 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC038D8.
    case 0xC038DA: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:42 TAX
    case 0xC038DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:43 LDA a:game_state::unknown96,X
    case 0xC038DC: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:44 AND #$00FF
    case 0xC038DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC038DF.
    case 0xC038E1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:45 BEQ @UNKNOWN5
    case 0xC038E2: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:46 AND #$00FF
    case 0xC038E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC038E4.
    case 0xC038E6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:47 STA @LOCAL04
    case 0xC038E7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:48 STA @VIRTUAL02
    case 0xC038E9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:49 LDA #5
    case 0xC038EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:49 LDA #5
    // Overlapping static entry reached from 0xC038EB.
    case 0xC038ED: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:50 CLC
    case 0xC038EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:51 SBC @VIRTUAL02
    case 0xC038EF: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C0369B-jp.asm:52 BRANCHLTEQS @UNKNOWN5
    case 0xC038F1: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C0369B-jp.asm:52 BRANCHLTEQS @UNKNOWN5
    case 0xC038F3: cpu.execute_instruction<0x10>(0x00002F, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C0369B-jp.asm:52 BRANCHLTEQS @UNKNOWN5
    case 0xC038F5: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C0369B-jp.asm:52 BRANCHLTEQS @UNKNOWN5
    case 0xC038F7: cpu.execute_instruction<0x30>(0x00002B, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:53 LDY @LOCAL06
    case 0xC038F9: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:54 STY @VIRTUAL02
    case 0xC038FB: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:55 LDA @LOCAL04
    case 0xC038FD: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:56 CMP @VIRTUAL02
    case 0xC038FF: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C0369B-jp.asm:57 BGT @UNKNOWN5
    case 0xC03901: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0369B-jp.asm:57 BGT @UNKNOWN5
    case 0xC03903: cpu.execute_instruction<0xB0>(0x00001F, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:58 ASL
    case 0xC03905: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:59 TAX
    case 0xC03906: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:60 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC03907: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:61 LDY #.SIZEOF(char_struct)
    case 0xC0390A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:61 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC0390A.
    case 0xC0390C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:62 JSL MULT168
    case 0xC0390D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C0369B-jp.asm:63 TAX
    case 0xC03911: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:64 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC03912: cpu.execute_instruction<0xBD>(0x009C8C, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:65 AND #$00FF
    case 0xC03915: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC03915.
    case 0xC03917: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:66 CMP #1
    case 0xC03918: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:66 CMP #1
    // Overlapping static entry reached from 0xC03918.
    case 0xC0391A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:67 BEQ @UNKNOWN5
    case 0xC0391B: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:68 LDX @LOCAL05
    case 0xC0391D: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:69 INX
    case 0xC0391F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:70 STX @LOCAL05
    case 0xC03920: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:71 BRA @UNKNOWN1
    case 0xC03922: cpu.execute_instruction<0x80>(0x0000B2, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:73 LDX @LOCAL05
    case 0xC03924: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:74 TXA
    case 0xC03926: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:75 CLC
    case 0xC03927: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:76 ADC #.LOWORD(GAME_STATE)
    case 0xC03928: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:76 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03928.
    case 0xC0392A: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:77 TAX
    case 0xC0392B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:78 LDA a:game_state::unknown96,X
    case 0xC0392C: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:79 AND #$00FF
    case 0xC0392F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC0392F.
    case 0xC03931: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:80 BEQ @UNKNOWN8
    case 0xC03932: cpu.execute_instruction<0xF0>(0x00005B, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:81 LDA #5
    case 0xC03934: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:81 LDA #5
    // Overlapping static entry reached from 0xC03934.
    case 0xC03936: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:82 STA @LOCAL03
    case 0xC03937: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:83 BRA @UNKNOWN7
    case 0xC03939: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:85 CLC
    case 0xC0393B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:86 ADC #.LOWORD(GAME_STATE)
    case 0xC0393C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:86 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0393C.
    case 0xC0393E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:87 STA @LOCAL02
    case 0xC0393F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:88 LDA @LOCAL03
    case 0xC03941: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:89 DEC
    case 0xC03943: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:90 STA @VIRTUAL04
    case 0xC03944: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:91 CLC
    case 0xC03946: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:92 ADC #.LOWORD(GAME_STATE)
    case 0xC03947: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:92 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03947.
    case 0xC03949: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:93 STA @VIRTUAL02
    case 0xC0394A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:94 LDX @VIRTUAL02
    case 0xC0394C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:95 SEP #PROC_FLAGS::ACCUM8
    case 0xC0394E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:96 LDA __BSS_START__ + game_state::unknown96,X
    case 0xC03950: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:97 LDY #game_state::unknown96
    case 0xC03953: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000093, 2); else cpu.execute_instruction<0xA0>(0x000093, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:97 LDY #game_state::unknown96
    // Overlapping static entry reached from 0xC03953.
    case 0xC03955: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:98 STA (@LOCAL02),Y
    case 0xC03956: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC03958: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:100 LDA @LOCAL03
    case 0xC0395A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:101 ASL
    case 0xC0395C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:102 CLC
    case 0xC0395D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:103 ADC #.LOWORD(GAME_STATE)
    case 0xC0395E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:103 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0395E.
    case 0xC03960: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:104 PHA
    case 0xC03961: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:105 LDA @VIRTUAL04
    case 0xC03962: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:106 ASL
    case 0xC03964: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:107 CLC
    case 0xC03965: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:108 ADC #.LOWORD(GAME_STATE)
    case 0xC03966: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:108 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03966.
    case 0xC03968: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:109 TAX
    case 0xC03969: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:110 LDA a:game_state::unknownA2,X
    case 0xC0396A: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:111 PLX
    case 0xC0396D: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:112 STA a:game_state::unknownA2,X
    case 0xC0396E: cpu.execute_instruction<0x9D>(0x00009F, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:113 LDX @VIRTUAL02
    case 0xC03971: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:114 SEP #PROC_FLAGS::ACCUM8
    case 0xC03973: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:115 LDA __BSS_START__+game_state::player_controlled_party_members,X
    case 0xC03975: cpu.execute_instruction<0xBD>(0x000099, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:116 LDY #game_state::player_controlled_party_members
    case 0xC03978: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000099, 2); else cpu.execute_instruction<0xA0>(0x000099, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:116 LDY #game_state::player_controlled_party_members
    // Overlapping static entry reached from 0xC03978.
    case 0xC0397A: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:117 STA (@LOCAL02),Y
    case 0xC0397B: cpu.execute_instruction<0x91>(0x000012, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:118 REP #PROC_FLAGS::ACCUM8
    case 0xC0397D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:119 LDA @VIRTUAL04
    case 0xC0397F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:120 STA @LOCAL03
    case 0xC03981: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:122 LDX @LOCAL05
    case 0xC03983: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:123 TXA
    case 0xC03985: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:124 DEC
    case 0xC03986: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:125 STA @VIRTUAL02
    case 0xC03987: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:126 LDA @LOCAL03
    case 0xC03989: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:127 CMP @VIRTUAL02
    case 0xC0398B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:128 BNE @UNKNOWN6
    case 0xC0398D: cpu.execute_instruction<0xD0>(0x0000AC, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:130 LDX @LOCAL05
    case 0xC0398F: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:131 TXA
    case 0xC03991: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:132 CLC
    case 0xC03992: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:133 ADC #.LOWORD(GAME_STATE)
    case 0xC03993: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:133 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03993.
    case 0xC03995: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:134 TAX
    case 0xC03996: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:135 LDY @LOCAL06
    case 0xC03997: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:136 TYA
    case 0xC03999: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:137 SEP #PROC_FLAGS::ACCUM8
    case 0xC0399A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:138 STA a:game_state::unknown96,X
    case 0xC0399C: cpu.execute_instruction<0x9D>(0x000093, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:139 REP #PROC_FLAGS::ACCUM8
    case 0xC0399F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:140 LDA #.LOWORD(GAME_STATE) + game_state::party_count
    case 0xC039A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x009B54, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:140 LDA #.LOWORD(GAME_STATE) + game_state::party_count
    // Overlapping static entry reached from 0xC039A1.
    case 0xC039A3: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:141 PHA
    case 0xC039A4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:142 TAX
    case 0xC039A5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:143 SEP #PROC_FLAGS::ACCUM8
    case 0xC039A6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:144 LDA __BSS_START__,X
    case 0xC039A8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:145 INC
    case 0xC039AB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:146 PLX
    case 0xC039AC: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:147 STA __BSS_START__,X
    case 0xC039AD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:148 REP #PROC_FLAGS::ACCUM8
    case 0xC039B0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:149 TYA
    case 0xC039B2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:150 DEC
    case 0xC039B3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:151 STA @LOCAL02
    case 0xC039B4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:152 STA NEW_ENTITY_VAR0
    case 0xC039B6: cpu.execute_instruction<0x8D>(0x000A2E, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:153 LDA @LOCAL02
    case 0xC039B9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:154 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC039BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:154 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC039BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:154 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC039BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:155 CLC
    case 0xC039BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:156 ADC #character_initial_entity_entry::unknown6
    case 0xC039BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:156 ADC #character_initial_entity_entry::unknown6
    // Overlapping static entry reached from 0xC039BF.
    case 0xC039C1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:157 TAX
    case 0xC039C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:158 LDA f:CHARACTER_INITIAL_ENTITY_DATA,X
    case 0xC039C3: cpu.execute_instruction<0xBF>(0xC3DFFC, 4); return true;
    // src/unknown/C0/C0369B-jp.asm:159 STA @LOCAL06
    case 0xC039C7: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:160 ASL
    case 0xC039C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:161 TAX
    case 0xC039CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:162 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC039CB: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:163 CMP #.LOWORD(-1)
    case 0xC039CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:163 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC039CE.
    case 0xC039D0: cpu.execute_instruction<0xFF>(0xE602F0, 4); return true;
    // src/unknown/C0/C0369B-jp.asm:164 BEQ @UNKNOWN9
    case 0xC039D1: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:165 INC @LOCAL06
    case 0xC039D3: cpu.execute_instruction<0xE6>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:165 INC @LOCAL06
    // Overlapping static entry reached from 0xC039D0.
    case 0xC039D4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:167 LDX @LOCAL05
    case 0xC039D5: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:168 TXA
    case 0xC039D7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:169 ASL
    case 0xC039D8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:170 CLC
    case 0xC039D9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:171 ADC #.LOWORD(GAME_STATE)
    case 0xC039DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:171 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC039DA.
    case 0xC039DC: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:172 TAX
    case 0xC039DD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:173 LDA @LOCAL06
    case 0xC039DE: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:174 STA a:game_state::unknownA2,X
    case 0xC039E0: cpu.execute_instruction<0x9D>(0x00009F, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:175 LDA @LOCAL06
    case 0xC039E3: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:176 STA NEW_ENTITY_VAR1
    case 0xC039E5: cpu.execute_instruction<0x8D>(0x000A30, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:177 SEC
    case 0xC039E8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:178 SBC #24
    case 0xC039E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000018, 2); else cpu.execute_instruction<0xE9>(0x000018, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:178 SBC #24
    // Overlapping static entry reached from 0xC039E9.
    case 0xC039EB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:179 STA NEW_ENTITY_VAR1
    case 0xC039EC: cpu.execute_instruction<0x8D>(0x000A30, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:180 LDX @LOCAL05
    case 0xC039EF: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:181 TXA
    case 0xC039F1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:182 CLC
    case 0xC039F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:183 ADC #.LOWORD(GAME_STATE)
    case 0xC039F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:183 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC039F3.
    case 0xC039F5: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:184 TAX
    case 0xC039F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:185 SEP #PROC_FLAGS::ACCUM8
    case 0xC039F7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:186 LDA NEW_ENTITY_VAR1
    case 0xC039F9: cpu.execute_instruction<0xAD>(0x000A30, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:187 STA a:game_state::player_controlled_party_members,X
    case 0xC039FC: cpu.execute_instruction<0x9D>(0x000099, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:188 REP #PROC_FLAGS::ACCUM8
    case 0xC039FF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:189 LDA GAME_STATE+game_state::party_count
    case 0xC03A01: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:190 AND #$00FF
    case 0xC03A04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:190 AND #$00FF
    // Overlapping static entry reached from 0xC03A04.
    case 0xC03A06: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:191 CMP #1
    case 0xC03A07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:191 CMP #1
    // Overlapping static entry reached from 0xC03A07.
    case 0xC03A09: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:192 BNE @UNKNOWN10
    case 0xC03A0A: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:193 LDA NEW_ENTITY_VAR1
    case 0xC03A0C: cpu.execute_instruction<0xAD>(0x000A30, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:194 LDY #.SIZEOF(char_struct)
    case 0xC03A0F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:194 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03A0F.
    case 0xC03A11: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:195 JSL MULT168
    case 0xC03A12: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C0369B-jp.asm:196 TAX
    case 0xC03A16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:197 LDA GAME_STATE + game_state::unknown88
    case 0xC03A17: cpu.execute_instruction<0xAD>(0x009B2E, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:198 STA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC03A1A: cpu.execute_instruction<0x9D>(0x009CBB, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:199 BRA @UNKNOWN13
    case 0xC03A1D: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:201 LDX @LOCAL05
    case 0xC03A1F: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:202 BNE @UNKNOWN11
    case 0xC03A21: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:203 LDA GAME_STATE + game_state::unknown88
    case 0xC03A23: cpu.execute_instruction<0xAD>(0x009B2E, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:204 STA @LOCAL04
    case 0xC03A26: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:205 BRA @UNKNOWN12
    case 0xC03A28: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:207 TXA
    case 0xC03A2A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:208 DEC
    case 0xC03A2B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:209 ASL
    case 0xC03A2C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:210 CLC
    case 0xC03A2D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:211 ADC #.LOWORD(GAME_STATE)
    case 0xC03A2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:211 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03A2E.
    case 0xC03A30: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:212 TAX
    case 0xC03A31: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:213 LDA a:game_state::unknownA2,X
    case 0xC03A32: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:214 ASL
    case 0xC03A35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:215 TAX
    case 0xC03A36: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:216 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC03A37: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:217 LDY #.SIZEOF(char_struct)
    case 0xC03A3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:217 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03A3A.
    case 0xC03A3C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:218 JSL MULT168
    case 0xC03A3D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C0369B-jp.asm:219 TAX
    case 0xC03A41: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:220 LDA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC03A42: cpu.execute_instruction<0xBD>(0x009CBB, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:221 STA @LOCAL04
    case 0xC03A45: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:223 LDA NEW_ENTITY_VAR1
    case 0xC03A47: cpu.execute_instruction<0xAD>(0x000A30, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:224 LDY #.SIZEOF(char_struct)
    case 0xC03A4A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:224 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03A4A.
    case 0xC03A4C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:225 JSL MULT168
    case 0xC03A4D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C0369B-jp.asm:226 TAX
    case 0xC03A51: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:227 LDA @LOCAL04
    case 0xC03A52: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:228 STA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC03A54: cpu.execute_instruction<0x9D>(0x009CBB, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:230 LDA NEW_ENTITY_VAR1
    case 0xC03A57: cpu.execute_instruction<0xAD>(0x000A30, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:231 LDY #.SIZEOF(char_struct)
    case 0xC03A5A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:231 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03A5A.
    case 0xC03A5C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:232 JSL MULT168
    case 0xC03A5D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C0369B-jp.asm:233 TAX
    case 0xC03A61: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:234 LDA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC03A62: cpu.execute_instruction<0xBD>(0x009CBB, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:235 BEQ @UNKNOWN14
    case 0xC03A65: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:236 TAX
    case 0xC03A67: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:237 DEX
    case 0xC03A68: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:238 BRA @UNKNOWN15
    case 0xC03A69: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:240 LDX #$00FF
    case 0xC03A6B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:240 LDX #$00FF
    // Overlapping static entry reached from 0xC03A6B.
    case 0xC03A6D: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:242 TXA
    case 0xC03A6E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C0369B-jp.asm:243 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC03A6F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:243 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC03A71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C0369B-jp.asm:243 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC03A72: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:243 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC03A74: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:243 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC03A75: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:244 TAX
    case 0xC03A76: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:245 LDA PLAYER_POSITION_BUFFER + player_position_buffer_entry::x_coord,X
    case 0xC03A77: cpu.execute_instruction<0xBD>(0x0054DC, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:246 STA @VIRTUAL04
    case 0xC03A7A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:247 LDA PLAYER_POSITION_BUFFER + player_position_buffer_entry::y_coord,X
    case 0xC03A7C: cpu.execute_instruction<0xBD>(0x0054DE, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:248 STA @VIRTUAL02
    case 0xC03A7F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:249 LDA GAME_STATE + game_state::unknown92
    case 0xC03A81: cpu.execute_instruction<0xAD>(0x009B38, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:250 CMP #3
    case 0xC03A84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:250 CMP #3
    // Overlapping static entry reached from 0xC03A84.
    case 0xC03A86: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:251 BEQ @UNKNOWN16
    case 0xC03A87: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:252 LDA @LOCAL02
    case 0xC03A89: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:253 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03A8B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:253 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03A8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:253 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03A8D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:254 TAX
    case 0xC03A8E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:255 LDA f:CHARACTER_INITIAL_ENTITY_DATA,X ;character_initial_entity_entry::overworld_sprite
    case 0xC03A8F: cpu.execute_instruction<0xBF>(0xC3DFFC, 4); return true;
    // src/unknown/C0/C0369B-jp.asm:256 STA @LOCAL05
    case 0xC03A93: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:257 BRA @UNKNOWN17
    case 0xC03A95: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:259 LDA @LOCAL02
    case 0xC03A97: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:260 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03A99: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:260 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03A9A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:260 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03A9B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:261 TAX
    case 0xC03A9C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:262 INX
    case 0xC03A9D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:263 INX
    case 0xC03A9E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:264 LDA f:CHARACTER_INITIAL_ENTITY_DATA,X ;character_initial_entity_entry::lost_underworld_sprite
    case 0xC03A9F: cpu.execute_instruction<0xBF>(0xC3DFFC, 4); return true;
    // src/unknown/C0/C0369B-jp.asm:265 STA @LOCAL05
    case 0xC03AA3: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0369B-jp.asm:267 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    case 0xC03AA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x00DFFC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0369B-jp.asm:267 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC03AA5.
    case 0xC03AA7: cpu.execute_instruction<0xDF>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0369B-jp.asm:267 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    case 0xC03AA8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0369B-jp.asm:267 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    case 0xC03AAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0369B-jp.asm:267 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC03AA7.
    case 0xC03AAB: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0369B-jp.asm:267 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC03AAA.
    case 0xC03AAC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0369B-jp.asm:267 LOADPTR CHARACTER_INITIAL_ENTITY_DATA, @VIRTUAL06
    case 0xC03AAD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:268 LDA @VIRTUAL04
    case 0xC03AAF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:269 STA @LOCAL00
    case 0xC03AB1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:270 LDA @VIRTUAL02
    case 0xC03AB3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:271 STA @LOCAL01
    case 0xC03AB5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:272 LDY @LOCAL06
    case 0xC03AB7: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:273 LDA @LOCAL02
    case 0xC03AB9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:274 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03ABB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:274 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03ABC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:274 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03ABD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:275 INC
    case 0xC03ABE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:276 INC
    case 0xC03ABF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:277 INC
    case 0xC03AC0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:278 INC
    case 0xC03AC1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C0369B-jp.asm:279 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC03AC2: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C0369B-jp.asm:279 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC03AC4: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C0369B-jp.asm:279 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC03AC6: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C0369B-jp.asm:279 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC03AC8: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:280 CLC
    case 0xC03ACA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:281 ADC @VIRTUAL0A
    case 0xC03ACB: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:282 STA @VIRTUAL0A
    case 0xC03ACD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:283 LDA [@VIRTUAL0A] ;character_initial_entity_entry::actionscript_id
    case 0xC03ACF: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:284 TAX
    case 0xC03AD1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:285 LDA @LOCAL05
    case 0xC03AD2: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:286 JSL CREATE_ENTITY
    case 0xC03AD4: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/C0/C0369B-jp.asm:287 LDA @LOCAL06
    case 0xC03AD8: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:288 ASL
    case 0xC03ADA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:289 TAX
    case 0xC03ADB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:290 STX @LOCAL03
    case 0xC03ADC: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:291 LDA @VIRTUAL04
    case 0xC03ADE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:292 SEC
    case 0xC03AE0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:293 SBC BG1_X_POS
    case 0xC03AE1: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:294 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC03AE4: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:295 LDA @VIRTUAL02
    case 0xC03AE7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:296 SEC
    case 0xC03AE9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:297 SBC BG1_Y_POS
    case 0xC03AEA: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:298 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC03AED: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:299 LDY #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC03AF0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003A, 2); else cpu.execute_instruction<0xA0>(0x009B3A, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:299 LDY #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC03AF0.
    case 0xC03AF2: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:300 STY @LOCAL05
    case 0xC03AF3: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:301 LDA GAME_STATE + game_state::unknown96
    case 0xC03AF5: cpu.execute_instruction<0xAD>(0x009B3C, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:302 AND #$00FF
    case 0xC03AF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:302 AND #$00FF
    // Overlapping static entry reached from 0xC03AF8.
    case 0xC03AFA: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:303 DEC
    case 0xC03AFB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:304 ASL
    case 0xC03AFC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:305 ASL
    case 0xC03AFD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:306 ASL
    case 0xC03AFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:307 CLC
    case 0xC03AFF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:308 ADC #character_initial_entity_entry::unknown6
    case 0xC03B00: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:308 ADC #character_initial_entity_entry::unknown6
    // Overlapping static entry reached from 0xC03B00.
    case 0xC03B02: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:309 CLC
    case 0xC03B03: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0369B-jp.asm:310 ADC @VIRTUAL06
    case 0xC03B04: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:311 STA @VIRTUAL06
    case 0xC03B06: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:312 LDA [@VIRTUAL06]
    case 0xC03B08: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:313 STA __BSS_START__,Y
    case 0xC03B0A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:314 JSL UNKNOWN_C09CD7
    case 0xC03B0D: cpu.execute_instruction<0x22>(0xC09CB6, 4); return true;
    // src/unknown/C0/C0369B-jp.asm:315 JSL UNKNOWN_C032EC
    case 0xC03B11: cpu.execute_instruction<0x22>(0xC034C7, 4); return true;
    // src/unknown/C0/C0369B-jp.asm:316 LDA GAME_STATE + game_state::unknownA2
    case 0xC03B15: cpu.execute_instruction<0xAD>(0x009B48, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:317 LDY @LOCAL05
    case 0xC03B18: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:318 STA __BSS_START__,Y
    case 0xC03B1A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:319 JSL UPDATE_PARTY
    case 0xC03B1D: cpu.execute_instruction<0x22>(0xC036C7, 4); return true;
    // src/unknown/C0/C0369B-jp.asm:320 LDA @VIRTUAL04
    case 0xC03B21: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:321 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC03B23: cpu.execute_instruction<0x8D>(0x00A033, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:322 LDA @VIRTUAL02
    case 0xC03B26: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:323 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC03B28: cpu.execute_instruction<0x8D>(0x00A035, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:324 LDX @LOCAL03
    case 0xC03B2B: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0369B-jp.asm:325 LDA ENTITY_DIRECTIONS,X
    case 0xC03B2D: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:326 STA ENTITY_PREPARED_DIRECTION
    case 0xC03B30: cpu.execute_instruction<0x8D>(0x00A037, 3); return true;
    // src/unknown/C0/C0369B-jp.asm:327 LDA @LOCAL06
    case 0xC03B33: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0369B-jp.asm:328 END_C_FUNCTION
    case 0xC03B35: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0369B-jp.asm:328 END_C_FUNCTION
    case 0xC03B36: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03903.asm (unresolved).
bool execute_unresolved_c0_c03903_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03903.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03B37: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03903.asm:8 END_STACK_VARS
    case 0xC03B39: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C03903.asm:8 END_STACK_VARS
    case 0xC03B3A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03903.asm:8 END_STACK_VARS
    case 0xC03B3B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03903.asm:8 END_STACK_VARS
    case 0xC03B3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03903.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC03B3C.
    case 0xC03B3E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03903.asm:8 END_STACK_VARS
    case 0xC03B3F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C03903.asm:8 END_STACK_VARS
    case 0xC03B40: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:9 STA @VIRTUAL02
    case 0xC03B41: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03903.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC03B3E.
    case 0xC03B42: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/C0/C03903.asm:10 LDY #0
    case 0xC03B43: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C03903.asm:10 LDY #0
    // Overlapping static entry reached from 0xC03B43.
    case 0xC03B45: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C03903.asm:11 BRA @UNKNOWN1
    case 0xC03B46: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C0/C03903.asm:13 INY
    case 0xC03B48: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:16 TYA
    case 0xC03B49: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:17 CLC
    case 0xC03B4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:18 ADC #.LOWORD(GAME_STATE)
    case 0xC03B4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03903.asm:18 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03B4B.
    case 0xC03B4D: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:19 TAX
    case 0xC03B4E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:20 LDA a:game_state::unknown96,X
    case 0xC03B4F: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C0/C03903.asm:24 AND #$00FF
    case 0xC03B52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03903.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC03B52.
    case 0xC03B54: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C0/C03903.asm:25 CMP @VIRTUAL02
    case 0xC03B55: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C03903.asm:26 BEQ @UNKNOWN2
    case 0xC03B57: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C03903.asm:27 CPY #6
    case 0xC03B59: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C0/C03903.asm:27 CPY #6
    // Overlapping static entry reached from 0xC03B59.
    case 0xC03B5B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C03903.asm:28 BNE @UNKNOWN0
    case 0xC03B5C: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // src/unknown/C0/C03903.asm:30 CPY #6
    case 0xC03B5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C0/C03903.asm:30 CPY #6
    // Overlapping static entry reached from 0xC03B5E.
    case 0xC03B60: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C03903.asm:31 BEQL @UNKNOWN7
    case 0xC03B61: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C03903.asm:31 BEQL @UNKNOWN7
    case 0xC03B63: cpu.execute_instruction<0x4C>(0x003C29, 3); return true;
    // src/unknown/C0/C03903.asm:32 TYA
    case 0xC03B66: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:33 ASL
    case 0xC03B67: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:35 CLC
    case 0xC03B68: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:36 ADC #.LOWORD(GAME_STATE)
    case 0xC03B69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03903.asm:36 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03B69.
    case 0xC03B6B: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:37 TAX
    case 0xC03B6C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:38 LDA a:game_state::unknownA2,X
    case 0xC03B6D: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C0/C03903.asm:43 STA @VIRTUAL02
    case 0xC03B70: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03903.asm:44 TYA
    case 0xC03B72: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:45 STA @LOCAL01
    case 0xC03B73: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C03903.asm:46 BRA @UNKNOWN5
    case 0xC03B75: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C0/C03903.asm:48 CLC
    case 0xC03B77: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:49 ADC #.LOWORD(GAME_STATE)
    case 0xC03B78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03903.asm:49 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03B78.
    case 0xC03B7A: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:50 TAX
    case 0xC03B7B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:51 STX @LOCAL00
    case 0xC03B7C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C03903.asm:52 LDA @LOCAL01
    case 0xC03B7E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C03903.asm:53 TAX
    case 0xC03B80: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC03B81: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C03903.asm:55 LDA GAME_STATE + game_state::unknown96 + 1,X
    case 0xC03B83: cpu.execute_instruction<0xBD>(0x009B3D, 3); return true;
    // src/unknown/C0/C03903.asm:56 LDX @LOCAL00
    case 0xC03B86: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C03903.asm:57 STA __BSS_START__ + game_state::unknown96,X
    case 0xC03B88: cpu.execute_instruction<0x9D>(0x000093, 3); return true;
    // src/unknown/C0/C03903.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC03B8B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C03903.asm:59 LDA @LOCAL01
    case 0xC03B8D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C03903.asm:60 ASL
    case 0xC03B8F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:61 STA @VIRTUAL04
    case 0xC03B90: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C03903.asm:63 CLC
    case 0xC03B92: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:64 ADC #.LOWORD(GAME_STATE)
    case 0xC03B93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03903.asm:64 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03B93.
    case 0xC03B95: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:65 PHA
    case 0xC03B96: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:66 LDX @VIRTUAL04
    case 0xC03B97: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C03903.asm:67 LDA GAME_STATE + game_state::unknownA2 + 2,X
    case 0xC03B99: cpu.execute_instruction<0xBD>(0x009B4A, 3); return true;
    // src/unknown/C0/C03903.asm:68 PLX
    case 0xC03B9C: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:69 STA a:game_state::unknownA2,X
    case 0xC03B9D: cpu.execute_instruction<0x9D>(0x00009F, 3); return true;
    // src/unknown/C0/C03903.asm:76 LDA @LOCAL01
    case 0xC03BA0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C03903.asm:77 TAX
    case 0xC03BA2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC03BA3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C03903.asm:79 LDA GAME_STATE + game_state::unknown9D,X
    case 0xC03BA5: cpu.execute_instruction<0xBD>(0x009B43, 3); return true;
    // src/unknown/C0/C03903.asm:80 LDX @LOCAL00
    case 0xC03BA8: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C03903.asm:81 STA __BSS_START__ + game_state::player_controlled_party_members,X
    case 0xC03BAA: cpu.execute_instruction<0x9D>(0x000099, 3); return true;
    // src/unknown/C0/C03903.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC03BAD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C03903.asm:83 LDA @LOCAL01
    case 0xC03BAF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C03903.asm:84 INC
    case 0xC03BB1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:85 STA @LOCAL01
    case 0xC03BB2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C03903.asm:87 CMP #5
    case 0xC03BB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C03903.asm:87 CMP #5
    // Overlapping static entry reached from 0xC03BB4.
    case 0xC03BB6: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C03903.asm:88 BCC @UNKNOWN4
    case 0xC03BB7: cpu.execute_instruction<0x90>(0x0000BE, 2); return true;
    // src/unknown/C0/C03903.asm:89 CPY #0
    case 0xC03BB9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C03903.asm:89 CPY #0
    // Overlapping static entry reached from 0xC03BB9.
    case 0xC03BBB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C03903.asm:90 BNE @UNKNOWN6
    case 0xC03BBC: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // src/unknown/C0/C03903.asm:91 LDA #.LOWORD(PARTY_CHARACTERS)+char_struct::position_index
    case 0xC03BBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BB, 2); else cpu.execute_instruction<0xA9>(0x009CBB, 3); return true;
    // src/unknown/C0/C03903.asm:91 LDA #.LOWORD(PARTY_CHARACTERS)+char_struct::position_index
    // Overlapping static entry reached from 0xC03BBE.
    case 0xC03BC0: cpu.execute_instruction<0x9C>(0x000485, 3); return true;
    // src/unknown/C0/C03903.asm:92 STA @VIRTUAL04
    case 0xC03BC1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C03903.asm:93 LDA GAME_STATE+game_state::player_controlled_party_members
    case 0xC03BC3: cpu.execute_instruction<0xAD>(0x009B42, 3); return true;
    // src/unknown/C0/C03903.asm:94 AND #$00FF
    case 0xC03BC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03903.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC03BC6.
    case 0xC03BC8: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C03903.asm:95 LDY #.SIZEOF(char_struct)
    case 0xC03BC9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C03903.asm:95 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03BC9.
    case 0xC03BCB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03903.asm:96 JSL MULT168
    case 0xC03BCC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C03903.asm:97 CLC
    case 0xC03BD0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:98 ADC @VIRTUAL04
    case 0xC03BD1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C03903.asm:99 PHA
    case 0xC03BD3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:100 LDA @VIRTUAL02
    case 0xC03BD4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03903.asm:101 ASL
    case 0xC03BD6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:102 TAX
    case 0xC03BD7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:103 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC03BD8: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/unknown/C0/C03903.asm:104 LDY #.SIZEOF(char_struct)
    case 0xC03BDB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C03903.asm:104 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03BDB.
    case 0xC03BDD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03903.asm:105 JSL MULT168
    case 0xC03BDE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C03903.asm:106 CLC
    case 0xC03BE2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:107 ADC @VIRTUAL04
    case 0xC03BE3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C03903.asm:108 TAX
    case 0xC03BE5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:109 LDA __BSS_START__,X
    case 0xC03BE6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C03903.asm:110 PLX
    case 0xC03BE9: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:111 STA __BSS_START__,X
    case 0xC03BEA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03903.asm:113 LDA @LOCAL01
    case 0xC03BED: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C03903.asm:115 CLC
    case 0xC03BEF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:116 ADC #.LOWORD(GAME_STATE)
    case 0xC03BF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03903.asm:116 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03BF0.
    case 0xC03BF2: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:117 TAX
    case 0xC03BF3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:118 SEP #PROC_FLAGS::ACCUM8
    case 0xC03BF4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C03903.asm:119 STZ a:game_state::unknown96,X
    case 0xC03BF6: cpu.execute_instruction<0x9E>(0x000093, 3); return true;
    // src/unknown/C0/C03903.asm:125 LDX #.LOWORD(GAME_STATE)+game_state::party_count
    case 0xC03BF9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000054, 2); else cpu.execute_instruction<0xA2>(0x009B54, 3); return true;
    // src/unknown/C0/C03903.asm:125 LDX #.LOWORD(GAME_STATE)+game_state::party_count
    // Overlapping static entry reached from 0xC03BF9.
    case 0xC03BFB: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:126 LDA __BSS_START__,X
    case 0xC03BFC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C03903.asm:127 DEC
    case 0xC03BFF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:128 STA __BSS_START__,X
    case 0xC03C00: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03903.asm:129 REP #PROC_FLAGS::ACCUM8
    case 0xC03C03: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C03903.asm:130 LDA @VIRTUAL02
    case 0xC03C05: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03903.asm:131 ASL
    case 0xC03C07: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:132 TAX
    case 0xC03C08: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03903.asm:133 LDA ENTITY_ABS_X_TABLE,X
    case 0xC03C09: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C03903.asm:134 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC03C0C: cpu.execute_instruction<0x8D>(0x00A033, 3); return true;
    // src/unknown/C0/C03903.asm:135 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC03C0F: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C03903.asm:136 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC03C12: cpu.execute_instruction<0x8D>(0x00A035, 3); return true;
    // src/unknown/C0/C03903.asm:137 LDA ENTITY_DIRECTIONS,X
    case 0xC03C15: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/unknown/C0/C03903.asm:138 STA ENTITY_PREPARED_DIRECTION
    case 0xC03C18: cpu.execute_instruction<0x8D>(0x00A037, 3); return true;
    // src/unknown/C0/C03903.asm:139 LDA @VIRTUAL02
    case 0xC03C1B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03903.asm:140 JSL UNKNOWN_C02140
    case 0xC03C1D: cpu.execute_instruction<0x22>(0xC0214E, 4); return true;
    // src/unknown/C0/C03903.asm:141 JSL UNKNOWN_C032EC
    case 0xC03C21: cpu.execute_instruction<0x22>(0xC034C7, 4); return true;
    // src/unknown/C0/C03903.asm:142 JSL UPDATE_PARTY
    case 0xC03C25: cpu.execute_instruction<0x22>(0xC036C7, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03903.asm:144 END_C_FUNCTION
    case 0xC03C29: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C03903.asm:144 END_C_FUNCTION
    case 0xC03C2A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C039E5.asm (unresolved).
bool execute_unresolved_c0_c039e5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C039E5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03C2B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C039E5.asm:7 END_STACK_VARS
    case 0xC03C2D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C039E5.asm:7 END_STACK_VARS
    case 0xC03C2E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C039E5.asm:7 END_STACK_VARS
    case 0xC03C2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C039E5.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC03C2F.
    case 0xC03C31: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C039E5.asm:7 END_STACK_VARS
    case 0xC03C32: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:8 LDY #0
    case 0xC03C33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C039E5.asm:8 LDY #0
    // Overlapping static entry reached from 0xC03C33.
    case 0xC03C35: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C039E5.asm:9 STY @LOCAL01
    case 0xC03C36: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C039E5.asm:10 BRA @UNKNOWN2
    case 0xC03C38: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C0/C039E5.asm:13 TYA
    case 0xC03C3A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:14 CLC
    case 0xC03C3B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:15 ADC #.LOWORD(GAME_STATE)
    case 0xC03C3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C039E5.asm:15 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03C3C.
    case 0xC03C3E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:16 TAX
    case 0xC03C3F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:17 LDA a:game_state::unknown96,X
    case 0xC03C40: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C0/C039E5.asm:21 AND #$00FF
    case 0xC03C43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C039E5.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC03C43.
    case 0xC03C45: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C039E5.asm:22 BEQ @UNKNOWN1
    case 0xC03C46: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C0/C039E5.asm:23 TYA
    case 0xC03C48: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:24 ASL
    case 0xC03C49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:26 CLC
    case 0xC03C4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:27 ADC #.LOWORD(GAME_STATE)
    case 0xC03C4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C039E5.asm:27 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03C4B.
    case 0xC03C4D: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:28 TAX
    case 0xC03C4E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:29 LDA a:game_state::unknownA2,X
    case 0xC03C4F: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C0/C039E5.asm:34 STA @LOCAL00
    case 0xC03C52: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C039E5.asm:35 ASL
    case 0xC03C54: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:36 TAX
    case 0xC03C55: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:37 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03C56: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C039E5.asm:38 STA ENTITY_ABS_X_TABLE,X
    case 0xC03C59: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C039E5.asm:39 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC03C5C: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C039E5.asm:40 STA ENTITY_ABS_Y_TABLE,X
    case 0xC03C5F: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C039E5.asm:41 LDA @LOCAL00
    case 0xC03C62: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C039E5.asm:42 JSL UNKNOWN_C0A254
    case 0xC03C64: cpu.execute_instruction<0x22>(0xC0A233, 4); return true;
    // src/unknown/C0/C039E5.asm:44 LDY @LOCAL01
    case 0xC03C68: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C039E5.asm:45 INY
    case 0xC03C6A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C039E5.asm:46 STY @LOCAL01
    case 0xC03C6B: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C039E5.asm:48 CPY #6
    case 0xC03C6D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C0/C039E5.asm:48 CPY #6
    // Overlapping static entry reached from 0xC03C6D.
    case 0xC03C6F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C039E5.asm:49 BCC @UNKNOWN0
    case 0xC03C70: cpu.execute_instruction<0x90>(0x0000C8, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C039E5.asm:50 END_C_FUNCTION
    case 0xC03C72: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C039E5.asm:50 END_C_FUNCTION
    case 0xC03C73: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03A24.asm (unresolved).
bool execute_unresolved_c0_c03a24_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03A24.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03C74: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03A24.asm:6 END_STACK_VARS
    case 0xC03C76: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03A24.asm:6 END_STACK_VARS
    case 0xC03C77: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03A24.asm:6 END_STACK_VARS
    case 0xC03C78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03A24.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC03C78.
    case 0xC03C7A: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03A24.asm:6 END_STACK_VARS
    case 0xC03C7B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC03C7C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C03A24.asm:8 LDA #0
    case 0xC03C7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/unknown/C0/C03A24.asm:9 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC03C80: cpu.execute_instruction<0x8D>(0x009B55, 3); return true;
    // src/unknown/C0/C03A24.asm:9 STA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC03C7E.
    case 0xC03C81: cpu.execute_instruction<0x55>(0x00009B, 2); return true;
    // src/unknown/C0/C03A24.asm:10 STA GAME_STATE+game_state::party_count
    case 0xC03C83: cpu.execute_instruction<0x8D>(0x009B54, 3); return true;
    // src/unknown/C0/C03A24.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC03C86: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C03A24.asm:12 LDA #0
    case 0xC03C88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C03A24.asm:12 LDA #0
    // Overlapping static entry reached from 0xC03C88.
    case 0xC03C8A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C03A24.asm:13 STA @LOCAL00
    case 0xC03C8B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03A24.asm:14 BRA @UNKNOWN1
    case 0xC03C8D: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C03A24.asm:16 CLC
    case 0xC03C8F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:17 ADC #.LOWORD(GAME_STATE)
    case 0xC03C90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03A24.asm:17 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03C90.
    case 0xC03C92: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:18 TAX
    case 0xC03C93: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC03C94: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C03A24.asm:20 STZ __BSS_START__+game_state::unknown96,X
    case 0xC03C96: cpu.execute_instruction<0x9E>(0x000093, 3); return true;
    // src/unknown/C0/C03A24.asm:21 STZ __BSS_START__+game_state::player_controlled_party_members,X
    case 0xC03C99: cpu.execute_instruction<0x9E>(0x000099, 3); return true;
    // src/unknown/C0/C03A24.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC03C9C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C03A24.asm:23 LDA @LOCAL00
    case 0xC03C9E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03A24.asm:24 ASL
    case 0xC03CA0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:26 CLC
    case 0xC03CA1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:27 ADC #.LOWORD(GAME_STATE)
    case 0xC03CA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03A24.asm:27 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03CA2.
    case 0xC03CA4: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:28 TAX
    case 0xC03CA5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:29 STZ a:game_state::unknownA2,X
    case 0xC03CA6: cpu.execute_instruction<0x9E>(0x00009F, 3); return true;
    // src/unknown/C0/C03A24.asm:34 LDA @LOCAL00
    case 0xC03CA9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03A24.asm:35 INC
    case 0xC03CAB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:36 STA @LOCAL00
    case 0xC03CAC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03A24.asm:38 CMP #TOTAL_PARTY_COUNT
    case 0xC03CAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C03A24.asm:38 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC03CAE.
    case 0xC03CB0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C03A24.asm:39 BCC @UNKNOWN0
    case 0xC03CB1: cpu.execute_instruction<0x90>(0x0000DC, 2); return true;
    // src/unknown/C0/C03A24.asm:40 LDA #1
    case 0xC03CB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C03A24.asm:40 LDA #1
    // Overlapping static entry reached from 0xC03CB3.
    case 0xC03CB5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C03A24.asm:41 STA UNREAD_7E5D7E
    case 0xC03CB6: cpu.execute_instruction<0x8D>(0x006104, 3); return true;
    // src/unknown/C0/C03A24.asm:42 LDX #0
    case 0xC03CB9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C03A24.asm:42 LDX #0
    // Overlapping static entry reached from 0xC03CB9.
    case 0xC03CBB: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C03A24.asm:43 STX @LOCAL00
    case 0xC03CBC: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C03A24.asm:44 BRA @UNKNOWN3
    case 0xC03CBE: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C0/C03A24.asm:47 TXA
    case 0xC03CC0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:48 CLC
    case 0xC03CC1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:49 ADC #.LOWORD(GAME_STATE)
    case 0xC03CC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03A24.asm:49 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03CC2.
    case 0xC03CC4: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:50 TAX
    case 0xC03CC5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:51 LDA a:game_state::party_members,X
    case 0xC03CC6: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C0/C03A24.asm:55 AND #$00FF
    case 0xC03CC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03A24.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC03CC9.
    case 0xC03CCB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C03A24.asm:56 BEQ @UNKNOWN4
    case 0xC03CCC: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C03A24.asm:57 AND #$00FF
    case 0xC03CCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03A24.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC03CCE.
    case 0xC03CD0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03A24.asm:58 JSL UNKNOWN_C0369B
    case 0xC03CD1: cpu.execute_instruction<0x22>(0xC0389E, 4); return true;
    // src/unknown/C0/C03A24.asm:59 LDX @LOCAL00
    case 0xC03CD5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C03A24.asm:60 INX
    case 0xC03CD7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:61 STX @LOCAL00
    case 0xC03CD8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C03A24.asm:63 CPX #TOTAL_PARTY_COUNT
    case 0xC03CDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/unknown/C0/C03A24.asm:63 CPX #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC03CDA.
    case 0xC03CDC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C03A24.asm:64 BCC @UNKNOWN2
    case 0xC03CDD: cpu.execute_instruction<0x90>(0x0000E1, 2); return true;
    // src/unknown/C0/C03A24.asm:66 STZ UNREAD_7E5D7E
    case 0xC03CDF: cpu.execute_instruction<0x9C>(0x006104, 3); return true;
    // src/unknown/C0/C03A24.asm:67 LDA GAME_STATE + game_state::unknown92
    case 0xC03CE2: cpu.execute_instruction<0xAD>(0x009B38, 3); return true;
    // src/unknown/C0/C03A24.asm:68 ASL
    case 0xC03CE5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A24.asm:69 STA FOOTSTEP_SOUND_ID
    case 0xC03CE6: cpu.execute_instruction<0x8D>(0x002C98, 3); return true;
    // src/unknown/C0/C03A24.asm:70 STZ FOOTSTEP_SOUND_ID_OVERRIDE
    case 0xC03CE9: cpu.execute_instruction<0x9C>(0x002C9A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03A24.asm:71 END_C_FUNCTION
    case 0xC03CEC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C03A24.asm:71 END_C_FUNCTION
    case 0xC03CED: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03A94.asm (unresolved).
bool execute_unresolved_c0_c03a94_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03A94.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03CEE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03A94.asm:18 END_STACK_VARS
    case 0xC03CF0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C03A94.asm:18 END_STACK_VARS
    case 0xC03CF1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03A94.asm:18 END_STACK_VARS
    case 0xC03CF2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03A94.asm:18 END_STACK_VARS
    case 0xC03CF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03A94.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC03CF3.
    case 0xC03CF5: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03A94.asm:18 END_STACK_VARS
    case 0xC03CF6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C03A94.asm:18 END_STACK_VARS
    case 0xC03CF7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:26 STA @LOCAL09
    case 0xC03CF8: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C03A94.asm:26 STA @LOCAL09
    // Overlapping static entry reached from 0xC03CF5.
    case 0xC03CF9: cpu.execute_instruction<0x20>(0x0010AD, 3); return true;
    // src/unknown/C0/C03A94.asm:27 LDA CURRENT_TELEPORT_DESTINATION_X
    case 0xC03CFA: cpu.execute_instruction<0xAD>(0x004710, 3); return true;
    // src/unknown/C0/C03A94.asm:27 LDA CURRENT_TELEPORT_DESTINATION_X
    // Overlapping static entry reached from 0xC03CF9.
    case 0xC03CFC: cpu.execute_instruction<0x47>(0x00000D, 2); return true;
    // src/unknown/C0/C03A94.asm:28 ORA CURRENT_TELEPORT_DESTINATION_Y
    case 0xC03CFD: cpu.execute_instruction<0x0D>(0x004712, 3); return true;
    // src/unknown/C0/C03A94.asm:28 ORA CURRENT_TELEPORT_DESTINATION_Y
    // Overlapping static entry reached from 0xC03CFC.
    case 0xC03CFE: cpu.execute_instruction<0x12>(0x000047, 2); return true;
    // src/unknown/C0/C03A94.asm:29 BEQ @UNKNOWN0
    case 0xC03D00: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C03A94.asm:30 LDA CURRENT_TELEPORT_DESTINATION_X
    case 0xC03D02: cpu.execute_instruction<0xAD>(0x004710, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC03D05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC03D06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC03D07: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:32 STA @LOCAL08
    case 0xC03D08: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C03A94.asm:33 LDA CURRENT_TELEPORT_DESTINATION_Y
    case 0xC03D0A: cpu.execute_instruction<0xAD>(0x004712, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:34 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC03D0D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:34 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC03D0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:34 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC03D0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:35 TAX
    case 0xC03D10: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:36 BRA @UNKNOWN1
    case 0xC03D11: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C03A94.asm:38 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03D13: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C03A94.asm:39 STA @LOCAL08
    case 0xC03D16: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C03A94.asm:40 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC03D18: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C03A94.asm:42 LDA @LOCAL08
    case 0xC03D1B: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C03A94.asm:43 JSL LOAD_SECTOR_ATTRS
    case 0xC03D1D: cpu.execute_instruction<0x22>(0xC00AB3, 4); return true;
    // src/unknown/C0/C03A94.asm:44 AND #$0007
    case 0xC03D21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C03A94.asm:44 AND #$0007
    // Overlapping static entry reached from 0xC03D21.
    case 0xC03D23: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C03A94.asm:45 STA @LOCAL07
    case 0xC03D24: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C03A94.asm:46 STA GAME_STATE+game_state::unknown92
    case 0xC03D26: cpu.execute_instruction<0x8D>(0x009B38, 3); return true;
    // src/unknown/C0/C03A94.asm:47 ASL
    case 0xC03D29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:48 STA FOOTSTEP_SOUND_ID
    case 0xC03D2A: cpu.execute_instruction<0x8D>(0x002C98, 3); return true;
    // src/unknown/C0/C03A94.asm:49 STZ FOOTSTEP_SOUND_ID_OVERRIDE
    case 0xC03D2D: cpu.execute_instruction<0x9C>(0x002C9A, 3); return true;
    // src/unknown/C0/C03A94.asm:50 LDA @LOCAL07
    case 0xC03D30: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C03A94.asm:51 CMP #3
    case 0xC03D32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C03A94.asm:51 CMP #3
    // Overlapping static entry reached from 0xC03D32.
    case 0xC03D34: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C03A94.asm:52 BEQ @UNKNOWN2
    case 0xC03D35: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C03A94.asm:53 STZ GAME_STATE+game_state::walking_style
    case 0xC03D37: cpu.execute_instruction<0x9C>(0x009B34, 3); return true;
    // src/unknown/C0/C03A94.asm:54 BRA @UNKNOWN3
    case 0xC03D3A: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C03A94.asm:56 LDA #WALKING_STYLE::SLOWEST
    case 0xC03D3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C0/C03A94.asm:56 LDA #WALKING_STYLE::SLOWEST
    // Overlapping static entry reached from 0xC03D3C.
    case 0xC03D3E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C03A94.asm:57 STA GAME_STATE+game_state::walking_style
    case 0xC03D3F: cpu.execute_instruction<0x8D>(0x009B34, 3); return true;
    // src/unknown/C0/C03A94.asm:59 LDA CURRENT_ENTITY_SLOT
    case 0xC03D42: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C03A94.asm:60 STA @LOCAL06
    case 0xC03D45: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C03A94.asm:61 LDA #.LOWORD(-1)
    case 0xC03D47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03A94.asm:61 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC03D47.
    case 0xC03D49: cpu.execute_instruction<0xFF>(0x1A388D, 4); return true;
    // src/unknown/C0/C03A94.asm:62 STA CURRENT_ENTITY_SLOT
    case 0xC03D4A: cpu.execute_instruction<0x8D>(0x001A38, 3); return true;
    // src/unknown/C0/C03A94.asm:63 STZ @LOCAL05
    case 0xC03D4D: cpu.execute_instruction<0x64>(0x000018, 2); return true;
    // src/unknown/C0/C03A94.asm:64 JMP @UNKNOWN9
    case 0xC03D4F: cpu.execute_instruction<0x4C>(0x003E3E, 3); return true;
    // src/unknown/C0/C03A94.asm:67 LDA @LOCAL05
    case 0xC03D52: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C03A94.asm:68 CLC
    case 0xC03D54: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:69 ADC #.LOWORD(GAME_STATE)
    case 0xC03D55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03A94.asm:69 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03D55.
    case 0xC03D57: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:70 TAX
    case 0xC03D58: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:71 LDA a:game_state::unknown96,X
    case 0xC03D59: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C0/C03A94.asm:76 AND #$00FF
    case 0xC03D5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03A94.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC03D5C.
    case 0xC03D5E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C03A94.asm:77 TAX
    case 0xC03D5F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C03A94.asm:78 BEQL @UNKNOWN8
    case 0xC03D60: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C03A94.asm:78 BEQL @UNKNOWN8
    case 0xC03D62: cpu.execute_instruction<0x4C>(0x003E3C, 3); return true;
    // src/unknown/C0/C03A94.asm:79 TXA
    case 0xC03D65: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:80 DEC
    case 0xC03D66: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:81 STA @VIRTUAL04
    case 0xC03D67: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C03A94.asm:82 LDA @LOCAL05
    case 0xC03D69: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C03A94.asm:83 ASL
    case 0xC03D6B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:85 STA @LOCALM2
    case 0xC03D6C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C03A94.asm:86 CLC
    case 0xC03D6E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:87 ADC #.LOWORD(GAME_STATE)
    case 0xC03D6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03A94.asm:87 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03D6F.
    case 0xC03D71: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:88 TAX
    case 0xC03D72: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:89 LDA a:game_state::unknownA2,X
    case 0xC03D73: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C0/C03A94.asm:94 STA @VIRTUAL02
    case 0xC03D76: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03A94.asm:95 ASL
    case 0xC03D78: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:96 TAX
    case 0xC03D79: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:97 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC03D7A: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C0/C03A94.asm:98 STA NEW_ENTITY_VAR0
    case 0xC03D7D: cpu.execute_instruction<0x8D>(0x000A2E, 3); return true;
    // src/unknown/C0/C03A94.asm:99 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC03D80: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/unknown/C0/C03A94.asm:100 STA NEW_ENTITY_VAR1
    case 0xC03D83: cpu.execute_instruction<0x8D>(0x000A30, 3); return true;
    // src/unknown/C0/C03A94.asm:102 LDA @LOCALM2
    case 0xC03D86: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C03A94.asm:103 STA NEW_ENTITY_VAR5
    case 0xC03D88: cpu.execute_instruction<0x8D>(0x000A38, 3); return true;
    // src/unknown/C0/C03A94.asm:107 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC03D8B: cpu.execute_instruction<0xBD>(0x001160, 3); return true;
    // src/unknown/C0/C03A94.asm:108 STA @LOCAL03
    case 0xC03D8E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C03A94.asm:109 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC03D90: cpu.execute_instruction<0xBD>(0x0010AC, 3); return true;
    // src/unknown/C0/C03A94.asm:110 STA @LOCAL07ALT
    case 0xC03D93: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C03A94.asm:111 LDA @VIRTUAL02
    case 0xC03D95: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03A94.asm:112 JSL UNKNOWN_C02140
    case 0xC03D97: cpu.execute_instruction<0x22>(0xC0214E, 4); return true;
    // src/unknown/C0/C03A94.asm:113 LDA @VIRTUAL02
    case 0xC03D9B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03A94.asm:114 STA MOVING_PARTY_MEMBER_ENTITY_ID
    case 0xC03D9D: cpu.execute_instruction<0x8D>(0x00A175, 3); return true;
    // src/unknown/C0/C03A94.asm:115 LDA GAME_STATE+game_state::unknown92
    case 0xC03DA0: cpu.execute_instruction<0xAD>(0x009B38, 3); return true;
    // src/unknown/C0/C03A94.asm:116 CMP #3
    case 0xC03DA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C03A94.asm:116 CMP #3
    // Overlapping static entry reached from 0xC03DA3.
    case 0xC03DA5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C03A94.asm:117 BEQ @UNKNOWN6
    case 0xC03DA6: cpu.execute_instruction<0xF0>(0x00003E, 2); return true;
    // src/unknown/C0/C03A94.asm:118 LDA @LOCAL05
    case 0xC03DA8: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C03A94.asm:119 LDY #.SIZEOF(char_struct)
    case 0xC03DAA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C03A94.asm:119 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03DAA.
    case 0xC03DAC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03A94.asm:120 JSL MULT168
    case 0xC03DAD: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C03A94.asm:121 CLC
    case 0xC03DB1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:122 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC03DB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C0/C03A94.asm:122 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC03DB2.
    case 0xC03DB4: cpu.execute_instruction<0x9C>(0x00A2A8, 3); return true;
    // src/unknown/C0/C03A94.asm:123 TAY
    case 0xC03DB5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:124 LDX #0
    case 0xC03DB6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C03A94.asm:124 LDX #0
    // Overlapping static entry reached from 0xC03DB4.
    case 0xC03DB7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C03A94.asm:124 LDX #0
    // Overlapping static entry reached from 0xC03DB6.
    case 0xC03DB8: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C03A94.asm:125 LDA @VIRTUAL04
    case 0xC03DB9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C03A94.asm:126 JSL UNKNOWN_C0780F
    case 0xC03DBB: cpu.execute_instruction<0x22>(0xC07A5F, 4); return true;
    // src/unknown/C0/C03A94.asm:127 STA @LOCAL08ALT
    case 0xC03DBF: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C03A94.asm:128 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03DC1: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C03A94.asm:129 STA @LOCAL00
    case 0xC03DC4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03A94.asm:130 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC03DC6: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C03A94.asm:131 STA @LOCAL01
    case 0xC03DC9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C03A94.asm:132 LDY @VIRTUAL02
    case 0xC03DCB: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C0/C03A94.asm:133 LDA @VIRTUAL04
    case 0xC03DCD: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:134 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03DCF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:134 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03DD0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:134 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03DD1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:135 TAX
    case 0xC03DD2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:136 INX
    case 0xC03DD3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:137 INX
    case 0xC03DD4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:138 INX
    case 0xC03DD5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:139 INX
    case 0xC03DD6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:140 LDA f:CHARACTER_INITIAL_ENTITY_DATA,X ;character_initial_entity_entry::actionscript_id
    case 0xC03DD7: cpu.execute_instruction<0xBF>(0xC3DFFC, 4); return true;
    // src/unknown/C0/C03A94.asm:141 TAX
    case 0xC03DDB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:142 LDA @LOCAL08ALT
    case 0xC03DDC: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C03A94.asm:143 JSL CREATE_ENTITY
    case 0xC03DDE: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/C0/C03A94.asm:144 STA @LOCAL02
    case 0xC03DE2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C03A94.asm:145 BRA @UNKNOWN7
    case 0xC03DE4: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/unknown/C0/C03A94.asm:147 LDA @LOCAL05
    case 0xC03DE6: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C03A94.asm:148 LDY #.SIZEOF(char_struct)
    case 0xC03DE8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C03A94.asm:148 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03DE8.
    case 0xC03DEA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03A94.asm:149 JSL MULT168
    case 0xC03DEB: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C03A94.asm:150 CLC
    case 0xC03DEF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:151 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC03DF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C0/C03A94.asm:151 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC03DF0.
    case 0xC03DF2: cpu.execute_instruction<0x9C>(0x00A2A8, 3); return true;
    // src/unknown/C0/C03A94.asm:152 TAY
    case 0xC03DF3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:153 LDX #10
    case 0xC03DF4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/C0/C03A94.asm:153 LDX #10
    // Overlapping static entry reached from 0xC03DF2.
    case 0xC03DF5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:153 LDX #10
    // Overlapping static entry reached from 0xC03DF4.
    case 0xC03DF6: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C03A94.asm:154 LDA @VIRTUAL04
    case 0xC03DF7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C03A94.asm:155 JSL UNKNOWN_C0780F
    case 0xC03DF9: cpu.execute_instruction<0x22>(0xC07A5F, 4); return true;
    // src/unknown/C0/C03A94.asm:156 STA @LOCAL08ALT
    case 0xC03DFD: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C03A94.asm:157 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03DFF: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C03A94.asm:158 STA @LOCAL00
    case 0xC03E02: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03A94.asm:159 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC03E04: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C03A94.asm:160 STA @LOCAL01
    case 0xC03E07: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C03A94.asm:161 LDY @VIRTUAL02
    case 0xC03E09: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C0/C03A94.asm:162 LDA @VIRTUAL04
    case 0xC03E0B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:163 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03E0D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:163 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03E0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C03A94.asm:163 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(character_initial_entity_entry)
    case 0xC03E0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:164 TAX
    case 0xC03E10: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:165 INX
    case 0xC03E11: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:166 INX
    case 0xC03E12: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:167 INX
    case 0xC03E13: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:168 INX
    case 0xC03E14: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:169 LDA f:CHARACTER_INITIAL_ENTITY_DATA,X ;character_initial_entity_entry::actionscript_id
    case 0xC03E15: cpu.execute_instruction<0xBF>(0xC3DFFC, 4); return true;
    // src/unknown/C0/C03A94.asm:170 TAX
    case 0xC03E19: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:171 LDA @LOCAL08ALT
    case 0xC03E1A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C03A94.asm:172 JSL CREATE_ENTITY
    case 0xC03E1C: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/C0/C03A94.asm:173 STA @LOCAL02
    case 0xC03E20: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C03A94.asm:175 ASL
    case 0xC03E22: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:176 TAX
    case 0xC03E23: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:177 LDA @LOCAL03
    case 0xC03E24: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C03A94.asm:178 STA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC03E26: cpu.execute_instruction<0x9D>(0x001160, 3); return true;
    // src/unknown/C0/C03A94.asm:179 LDA @LOCAL07ALT
    case 0xC03E29: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C03A94.asm:180 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC03E2B: cpu.execute_instruction<0x9D>(0x0010AC, 3); return true;
    // src/unknown/C0/C03A94.asm:181 LDA @LOCAL09
    case 0xC03E2E: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C03A94.asm:182 STA ENTITY_DIRECTIONS,X
    case 0xC03E30: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C03A94.asm:183 STZ ENTITY_ANIMATION_FRAME,X
    case 0xC03E33: cpu.execute_instruction<0x9E>(0x0010E8, 3); return true;
    // src/unknown/C0/C03A94.asm:184 LDA @LOCAL02
    case 0xC03E36: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C03A94.asm:185 JSL UNKNOWN_C0A780
    case 0xC03E38: cpu.execute_instruction<0x22>(0xC0A75F, 4); return true;
    // src/unknown/C0/C03A94.asm:187 INC @LOCAL05
    case 0xC03E3C: cpu.execute_instruction<0xE6>(0x000018, 2); return true;
    // src/unknown/C0/C03A94.asm:189 LDA @LOCAL05
    case 0xC03E3E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C03A94.asm:190 CMP #6
    case 0xC03E40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C03A94.asm:190 CMP #6
    // Overlapping static entry reached from 0xC03E40.
    case 0xC03E42: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C03A94.asm:191 BCCL @UNKNOWN4
    case 0xC03E43: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C03A94.asm:191 BCCL @UNKNOWN4
    case 0xC03E45: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C03A94.asm:191 BCCL @UNKNOWN4
    case 0xC03E47: cpu.execute_instruction<0x4C>(0x003D52, 3); return true;
    // src/unknown/C0/C03A94.asm:192 LDA @LOCAL06
    case 0xC03E4A: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C03A94.asm:193 STA CURRENT_ENTITY_SLOT
    case 0xC03E4C: cpu.execute_instruction<0x8D>(0x001A38, 3); return true;
    // src/unknown/C0/C03A94.asm:194 JSL UNKNOWN_C039E5
    case 0xC03E4F: cpu.execute_instruction<0x22>(0xC03C2B, 4); return true;
    // src/unknown/C0/C03A94.asm:195 LDA #.LOWORD(-1)
    case 0xC03E53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03A94.asm:195 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC03E53.
    case 0xC03E55: cpu.execute_instruction<0xFF>(0x612E8D, 4); return true;
    // src/unknown/C0/C03A94.asm:196 STA LADDER_STAIRS_TILE_X
    case 0xC03E56: cpu.execute_instruction<0x8D>(0x00612E, 3); return true;
    // src/unknown/C0/C03A94.asm:197 LDA PENDING_INTERACTIONS
    case 0xC03E59: cpu.execute_instruction<0xAD>(0x006120, 3); return true;
    // src/unknown/C0/C03A94.asm:198 STA @VIRTUAL02
    case 0xC03E5C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03A94.asm:199 STZ PENDING_INTERACTIONS
    case 0xC03E5E: cpu.execute_instruction<0x9C>(0x006120, 3); return true;
    // src/unknown/C0/C03A94.asm:200 LDA #4
    case 0xC03E61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C03A94.asm:200 LDA #4
    // Overlapping static entry reached from 0xC03E61.
    case 0xC03E63: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C03A94.asm:201 STA @LOCAL00
    case 0xC03E64: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03A94.asm:202 LDY GAME_STATE+game_state::current_party_members
    case 0xC03E66: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C03A94.asm:203 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC03E69: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C03A94.asm:204 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03E6C: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C03A94.asm:205 JSL UNKNOWN_C05B7B
    case 0xC03E6F: cpu.execute_instruction<0x22>(0xC05DA9, 4); return true;
    // src/unknown/C0/C03A94.asm:206 LDA @VIRTUAL02
    case 0xC03E73: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03A94.asm:207 STA PENDING_INTERACTIONS
    case 0xC03E75: cpu.execute_instruction<0x8D>(0x006120, 3); return true;
    // src/unknown/C0/C03A94.asm:208 LDA LADDER_STAIRS_TILE_X
    case 0xC03E78: cpu.execute_instruction<0xAD>(0x00612E, 3); return true;
    // src/unknown/C0/C03A94.asm:209 CMP #.LOWORD(-1)
    case 0xC03E7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03A94.asm:209 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC03E7B.
    case 0xC03E7D: cpu.execute_instruction<0xFF>(0xAE0AF0, 4); return true;
    // src/unknown/C0/C03A94.asm:210 BEQ @UNKNOWN11
    case 0xC03E7E: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C03A94.asm:211 LDX LADDER_STAIRS_TILE_Y
    case 0xC03E80: cpu.execute_instruction<0xAE>(0x006130, 3); return true;
    // src/unknown/C0/C03A94.asm:211 LDX LADDER_STAIRS_TILE_Y
    // Overlapping static entry reached from 0xC03E7D.
    case 0xC03E81: cpu.execute_instruction<0x30>(0x000061, 2); return true;
    // src/unknown/C0/C03A94.asm:212 LDA LADDER_STAIRS_TILE_X
    case 0xC03E83: cpu.execute_instruction<0xAD>(0x00612E, 3); return true;
    // src/unknown/C0/C03A94.asm:213 JSL UNKNOWN_C07526
    case 0xC03E86: cpu.execute_instruction<0x22>(0xC07765, 4); return true;
    // src/unknown/C0/C03A94.asm:215 PLD
    case 0xC03E8A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C03A94.asm:216 RTL
    case 0xC03E8B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03C25.asm (unresolved).
bool execute_unresolved_c0_c03c25_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C03C25.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC03E8C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C03C25.asm:4 LDA #$0001
    case 0xC03E8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C03C25.asm:4 LDA #$0001
    // Overlapping static entry reached from 0xC03E8E.
    case 0xC03E90: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C03C25.asm:5 STA DO_MAP_MUSIC_FADE
    case 0xC03E91: cpu.execute_instruction<0x8D>(0x006160, 3); return true;
    // src/unknown/C0/C03C25.asm:6 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC03E94: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C03C25.asm:7 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03E97: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C03C25.asm:8 JSL UNKNOWN_C068F4
    case 0xC03E9A: cpu.execute_instruction<0x22>(0xC06B22, 4); return true;
    // src/unknown/C0/C03C25.asm:9 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC03E9E: cpu.execute_instruction<0xAD>(0x00615C, 3); return true;
    // src/unknown/C0/C03C25.asm:10 CMP CURRENT_MAP_MUSIC_TRACK
    case 0xC03EA1: cpu.execute_instruction<0xCD>(0x00615A, 3); return true;
    // src/unknown/C0/C03C25.asm:11 BEQ @UNKNOWN0
    case 0xC03EA4: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C03C25.asm:12 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC03EA6: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C0/C03C25.asm:13 JSL UNKNOWN_C069AF
    case 0xC03EAA: cpu.execute_instruction<0x22>(0xC06BDD, 4); return true;
    // src/unknown/C0/C03C25.asm:15 STZ DO_MAP_MUSIC_FADE
    case 0xC03EAE: cpu.execute_instruction<0x9C>(0x006160, 3); return true;
    // src/unknown/C0/C03C25.asm:16 RTS
    case 0xC03EB1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03C4B.asm (unresolved).
bool execute_unresolved_c0_c03c4b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C03C4B.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC03EB2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C03C4B.asm:4 LDY #$000C
    case 0xC03EB4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C0/C03C4B.asm:4 LDY #$000C
    // Overlapping static entry reached from 0xC03EB4.
    case 0xC03EB6: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/C0/C03C4B.asm:5 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC03EB7: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C03C4B.asm:6 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC03EBA: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C03C4B.asm:7 JSL UNKNOWN_C05D8B
    case 0xC03EBD: cpu.execute_instruction<0x22>(0xC05FB9, 4); return true;
    // src/unknown/C0/C03C4B.asm:8 AND #$00C0
    case 0xC03EC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C03C4B.asm:8 AND #$00C0
    // Overlapping static entry reached from 0xC03EC1.
    case 0xC03EC3: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C03C4B.asm:9 RTL
    case 0xC03EC4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03CFD.asm (unresolved).
bool execute_unresolved_c0_c03cfd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03CFD.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC03F64: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03CFD.asm:7 END_STACK_VARS
    case 0xC03F66: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03CFD.asm:7 END_STACK_VARS
    case 0xC03F67: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03CFD.asm:7 END_STACK_VARS
    case 0xC03F68: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03CFD.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC03F68.
    case 0xC03F6A: cpu.execute_instruction<0xFF>(0x34AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03CFD.asm:7 END_STACK_VARS
    case 0xC03F6B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C03CFD.asm:8 LDA GAME_STATE+game_state::walking_style
    case 0xC03F6C: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/unknown/C0/C03CFD.asm:8 LDA GAME_STATE+game_state::walking_style
    // Overlapping static entry reached from 0xC03F6A.
    case 0xC03F6E: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C03CFD.asm:9 CMP #WALKING_STYLE::BICYCLE
    case 0xC03F6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C03CFD.asm:9 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC03F6F.
    case 0xC03F71: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C03CFD.asm:10 BNEL @RETURN
    case 0xC03F72: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C03CFD.asm:10 BNEL @RETURN
    case 0xC03F74: cpu.execute_instruction<0x4C>(0x004007, 3); return true;
    // src/unknown/C0/C03CFD.asm:11 LDA #1
    case 0xC03F77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C03CFD.asm:11 LDA #1
    // Overlapping static entry reached from 0xC03F77.
    case 0xC03F79: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03CFD.asm:12 JSL SET_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC03F7A: cpu.execute_instruction<0x22>(0xC4D0E4, 4); return true;
    // src/unknown/C0/C03CFD.asm:13 LDA BATTLE_MODE
    case 0xC03F7E: cpu.execute_instruction<0xAD>(0x005148, 3); return true;
    // src/unknown/C0/C03CFD.asm:14 BNE @UNKNOWN1
    case 0xC03F81: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C0/C03CFD.asm:15 LDA PENDING_INTERACTIONS
    case 0xC03F83: cpu.execute_instruction<0xAD>(0x006120, 3); return true;
    // src/unknown/C0/C03CFD.asm:16 BNE @UNKNOWN1
    case 0xC03F86: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C0/C03CFD.asm:17 JSL UNKNOWN_C06A07
    case 0xC03F88: cpu.execute_instruction<0x22>(0xC06C35, 4); return true;
    // src/unknown/C0/C03CFD.asm:19 LDA #24
    case 0xC03F8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C03CFD.asm:19 LDA #24
    // Overlapping static entry reached from 0xC03F8C.
    case 0xC03F8E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03CFD.asm:20 JSL UNKNOWN_C02140
    case 0xC03F8F: cpu.execute_instruction<0x22>(0xC0214E, 4); return true;
    // src/unknown/C0/C03CFD.asm:21 STZ GAME_STATE + game_state::unknown92
    case 0xC03F93: cpu.execute_instruction<0x9C>(0x009B38, 3); return true;
    // src/unknown/C0/C03CFD.asm:22 STZ GAME_STATE+game_state::walking_style
    case 0xC03F96: cpu.execute_instruction<0x9C>(0x009B34, 3); return true;
    // src/unknown/C0/C03CFD.asm:23 STZ PARTY_CHARACTERS+char_struct::position_index
    case 0xC03F99: cpu.execute_instruction<0x9C>(0x009CBB, 3); return true;
    // src/unknown/C0/C03CFD.asm:23 STZ PARTY_CHARACTERS+char_struct::position_index
    // Overlapping static entry reached from 0xC03FDC.
    case 0xC03F9B: cpu.execute_instruction<0x9C>(0x002E9C, 3); return true;
    // src/unknown/C0/C03CFD.asm:24 STZ GAME_STATE + game_state::unknown88
    case 0xC03F9C: cpu.execute_instruction<0x9C>(0x009B2E, 3); return true;
    // src/unknown/C0/C03CFD.asm:24 STZ GAME_STATE + game_state::unknown88
    // Overlapping static entry reached from 0xC03F9B.
    case 0xC03F9E: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C03CFD.asm:25 LDA PENDING_INTERACTIONS
    case 0xC03F9F: cpu.execute_instruction<0xAD>(0x006120, 3); return true;
    // src/unknown/C0/C03CFD.asm:26 BNE @UNKNOWN2
    case 0xC03FA2: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C0/C03CFD.asm:27 JSL OAM_CLEAR
    case 0xC03FA4: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/unknown/C0/C03CFD.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC03FA8: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/unknown/C0/C03CFD.asm:29 JSL UPDATE_SCREEN
    case 0xC03FAC: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/unknown/C0/C03CFD.asm:30 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC03FB0: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C0/C03CFD.asm:32 STZ NEW_ENTITY_VAR0
    case 0xC03FB4: cpu.execute_instruction<0x9C>(0x000A2E, 3); return true;
    // src/unknown/C0/C03CFD.asm:33 STZ NEW_ENTITY_VAR1
    case 0xC03FB7: cpu.execute_instruction<0x9C>(0x000A30, 3); return true;
    // src/unknown/C0/C03CFD.asm:34 LDA ENTITY_ABS_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03FBA: cpu.execute_instruction<0xAD>(0x000BB4, 3); return true;
    // src/unknown/C0/C03CFD.asm:35 STA @LOCAL00
    case 0xC03FBD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03CFD.asm:36 LDA ENTITY_ABS_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03FBF: cpu.execute_instruction<0xAD>(0x000BF0, 3); return true;
    // src/unknown/C0/C03CFD.asm:37 STA @LOCAL01
    case 0xC03FC2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C03CFD.asm:38 LDY #24
    case 0xC03FC4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x000018, 3); return true;
    // src/unknown/C0/C03CFD.asm:38 LDY #24
    // Overlapping static entry reached from 0xC03FC4.
    case 0xC03FC6: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C0/C03CFD.asm:39 LDX #EVENT_SCRIPT::EVENT_002
    case 0xC03FC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C0/C03CFD.asm:39 LDX #EVENT_SCRIPT::EVENT_002
    // Overlapping static entry reached from 0xC03FC7.
    case 0xC03FC9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C03CFD.asm:40 LDA #OVERWORLD_SPRITE::NESS
    case 0xC03FCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C03CFD.asm:40 LDA #OVERWORLD_SPRITE::NESS
    // Overlapping static entry reached from 0xC03FCA.
    case 0xC03FCC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03CFD.asm:41 JSL CREATE_ENTITY
    case 0xC03FCD: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/C0/C03CFD.asm:42 STZ ENTITY_ANIMATION_FRAME + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03FD1: cpu.execute_instruction<0x9C>(0x001118, 3); return true;
    // src/unknown/C0/C03CFD.asm:43 LDA GAME_STATE+game_state::leader_direction
    case 0xC03FD4: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C03CFD.asm:44 STA ENTITY_DIRECTIONS + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xC03FD7: cpu.execute_instruction<0x8D>(0x002F24, 3); return true;
    // src/unknown/C0/C03CFD.asm:45 LDX #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE) + (24 * 2)
    case 0xC03FDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000028, 2); else cpu.execute_instruction<0xA2>(0x001028, 3); return true;
    // src/unknown/C0/C03CFD.asm:45 LDX #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE) + (24 * 2)
    // Overlapping static entry reached from 0xC03FDA.
    case 0xC03FDC: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C0/C03CFD.asm:46 LDA __BSS_START__,X
    case 0xC03FDD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C03CFD.asm:46 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC03FDC.
    case 0xC03FDE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C03CFD.asm:47 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12 | SPRITE_TABLE_10_FLAGS::UNKNOWN15
    case 0xC03FE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x009000, 3); return true;
    // src/unknown/C0/C03CFD.asm:47 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12 | SPRITE_TABLE_10_FLAGS::UNKNOWN15
    // Overlapping static entry reached from 0xC03FE0.
    case 0xC03FE2: cpu.execute_instruction<0x90>(0x00009D, 2); return true;
    // src/unknown/C0/C03CFD.asm:48 STA __BSS_START__,X
    case 0xC03FE3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03CFD.asm:48 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC03FE2.
    case 0xC03FE4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C03CFD.asm:49 LDA PENDING_INTERACTIONS
    case 0xC03FE6: cpu.execute_instruction<0xAD>(0x006120, 3); return true;
    // src/unknown/C0/C03CFD.asm:50 BEQ @UNKNOWN3
    case 0xC03FE9: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C03CFD.asm:51 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + (24 * 2)
    case 0xC03FEB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000DC, 2); else cpu.execute_instruction<0xA2>(0x0010DC, 3); return true;
    // src/unknown/C0/C03CFD.asm:51 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + (24 * 2)
    // Overlapping static entry reached from 0xC03FEB.
    case 0xC03FED: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C0/C03CFD.asm:52 LDA __BSS_START__,X
    case 0xC03FEE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C03CFD.asm:52 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC03FED.
    case 0xC03FEF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C03CFD.asm:53 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC03FF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C03CFD.asm:53 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC03FF1.
    case 0xC03FF3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C0/C03CFD.asm:54 STA __BSS_START__,X
    case 0xC03FF4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03CFD.asm:54 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC03FF3.
    case 0xC03FF5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C03CFD.asm:54 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC03FF3.
    case 0xC03FF6: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C03CFD.asm:59 LDA #24
    case 0xC03FF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C03CFD.asm:59 LDA #24
    // Overlapping static entry reached from 0xC03FF7.
    case 0xC03FF9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03CFD.asm:60 JSL UNKNOWN_C0A780
    case 0xC03FFA: cpu.execute_instruction<0x22>(0xC0A75F, 4); return true;
    // src/unknown/C0/C03CFD.asm:62 STZ UNREAD_7E5DBA
    case 0xC03FFE: cpu.execute_instruction<0x9C>(0x006140, 3); return true;
    // src/unknown/C0/C03CFD.asm:63 LDA #2
    case 0xC04001: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C03CFD.asm:63 LDA #2
    // Overlapping static entry reached from 0xC04001.
    case 0xC04003: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C03CFD.asm:64 STA INPUT_DISABLE_FRAME_COUNTER
    case 0xC04004: cpu.execute_instruction<0x8D>(0x0060FA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03CFD.asm:66 END_C_FUNCTION
    case 0xC04007: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C03CFD.asm:66 END_C_FUNCTION
    case 0xC04008: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03DAA.asm (unresolved).
bool execute_unresolved_c0_c03daa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03DAA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04009: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03DAA.asm:6 END_STACK_VARS
    case 0xC0400B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03DAA.asm:6 END_STACK_VARS
    case 0xC0400C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03DAA.asm:6 END_STACK_VARS
    case 0xC0400D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03DAA.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0400D.
    case 0xC0400F: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03DAA.asm:6 END_STACK_VARS
    case 0xC04010: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC04011: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C03DAA.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0400F.
    case 0xC04013: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:8 STA @VIRTUAL02
    case 0xC04014: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03DAA.asm:9 ASL
    case 0xC04016: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:10 TAY
    case 0xC04017: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:11 STY @LOCAL00
    case 0xC04018: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C03DAA.asm:12 LDA #.LOWORD(-1)
    case 0xC0401A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03DAA.asm:12 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0401A.
    case 0xC0401C: cpu.execute_instruction<0xFF>(0x1AF499, 4); return true;
    // src/unknown/C0/C03DAA.asm:13 STA ENTITY_ANIMATION_FINGERPRINTS,Y
    case 0xC0401D: cpu.execute_instruction<0x99>(0x001AF4, 3); return true;
    // src/unknown/C0/C03DAA.asm:14 TYA
    case 0xC04020: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:15 CLC
    case 0xC04021: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:16 ADC #.LOWORD(ENTITY_SCRIPT_VAR3_TABLE)
    case 0xC04022: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000F08, 3); return true;
    // src/unknown/C0/C03DAA.asm:16 ADC #.LOWORD(ENTITY_SCRIPT_VAR3_TABLE)
    // Overlapping static entry reached from 0xC04022.
    case 0xC04024: cpu.execute_instruction<0x0F>(0xA90485, 4); return true;
    // src/unknown/C0/C03DAA.asm:17 STA @VIRTUAL04
    case 0xC04025: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C03DAA.asm:18 LDA #8
    case 0xC04027: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C03DAA.asm:18 LDA #8
    // Overlapping static entry reached from 0xC04024.
    case 0xC04028: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:18 LDA #8
    // Overlapping static entry reached from 0xC04027.
    case 0xC04029: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C03DAA.asm:19 LDX @VIRTUAL04
    case 0xC0402A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C03DAA.asm:20 STA __BSS_START__,X
    case 0xC0402C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03DAA.asm:21 JSL RAND
    case 0xC0402F: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C0/C03DAA.asm:22 AND #$000F
    case 0xC04033: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C03DAA.asm:22 AND #$000F
    // Overlapping static entry reached from 0xC04033.
    case 0xC04035: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C0/C03DAA.asm:23 LDY @LOCAL00
    case 0xC04036: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C03DAA.asm:24 STA ENTITY_SCRIPT_VAR2_TABLE,Y
    case 0xC04038: cpu.execute_instruction<0x99>(0x000ECC, 3); return true;
    // src/unknown/C0/C03DAA.asm:25 LDA @VIRTUAL02
    case 0xC0403B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03DAA.asm:26 JSL UNKNOWN_C0A780
    case 0xC0403D: cpu.execute_instruction<0x22>(0xC0A75F, 4); return true;
    // src/unknown/C0/C03DAA.asm:27 LDY @LOCAL00
    case 0xC04041: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C03DAA.asm:28 LDA ENTITY_SCRIPT_VAR1_TABLE,Y
    case 0xC04043: cpu.execute_instruction<0xB9>(0x000E90, 3); return true;
    // src/unknown/C0/C03DAA.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC04046: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C03DAA.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC04046.
    case 0xC04048: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C03DAA.asm:30 JSL MULT168
    case 0xC04049: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C03DAA.asm:31 CLC
    case 0xC0404D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC0404E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C0/C03DAA.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC0404E.
    case 0xC04050: cpu.execute_instruction<0x9C>(0x00A5AA, 3); return true;
    // src/unknown/C0/C03DAA.asm:33 TAX
    case 0xC04051: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:34 LDA @VIRTUAL02
    case 0xC04052: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03DAA.asm:34 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC04050.
    case 0xC04053: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/unknown/C0/C03DAA.asm:35 STA a:char_struct::unknown59,X
    case 0xC04054: cpu.execute_instruction<0x9D>(0x00003A, 3); return true;
    // src/unknown/C0/C03DAA.asm:36 LDY @LOCAL00
    case 0xC04057: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C03DAA.asm:37 LDA ENTITY_SCRIPT_VAR0_TABLE,Y
    case 0xC04059: cpu.execute_instruction<0xB9>(0x000E54, 3); return true;
    // src/unknown/C0/C03DAA.asm:38 STA a:char_struct::unknown53,X
    case 0xC0405C: cpu.execute_instruction<0x9D>(0x000034, 3); return true;
    // src/unknown/C0/C03DAA.asm:39 STZ a:char_struct::unknown57,X
    case 0xC0405F: cpu.execute_instruction<0x9E>(0x000038, 3); return true;
    // src/unknown/C0/C03DAA.asm:40 LDA #.LOWORD(-1)
    case 0xC04062: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03DAA.asm:40 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04062.
    case 0xC04064: cpu.execute_instruction<0xFF>(0x005B9D, 4); return true;
    // src/unknown/C0/C03DAA.asm:41 STA a:char_struct::unknown92,X
    case 0xC04065: cpu.execute_instruction<0x9D>(0x00005B, 3); return true;
    // src/unknown/C0/C03DAA.asm:42 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC04068: cpu.execute_instruction<0xBD>(0x00000D, 3); return true;
    // src/unknown/C0/C03DAA.asm:43 AND #$00FF
    case 0xC0406B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03DAA.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC0406B.
    case 0xC0406D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C03DAA.asm:44 CMP #STATUS_0::UNCONSCIOUS
    case 0xC0406E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C03DAA.asm:44 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC0406E.
    case 0xC04070: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C03DAA.asm:45 BNE @UNKNOWN0
    case 0xC04071: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C03DAA.asm:46 LDA #16
    case 0xC04073: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C0/C03DAA.asm:46 LDA #16
    // Overlapping static entry reached from 0xC04073.
    case 0xC04075: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C03DAA.asm:47 LDX @VIRTUAL04
    case 0xC04076: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C03DAA.asm:48 STA __BSS_START__,X
    case 0xC04078: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03DAA.asm:50 LDA GAME_STATE + game_state::current_party_members
    case 0xC0407B: cpu.execute_instruction<0xAD>(0x009B3A, 3); return true;
    // src/unknown/C0/C03DAA.asm:51 ASL
    case 0xC0407E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03DAA.asm:52 STA FOOTSTEP_SOUND_IGNORE_ENTITY
    case 0xC0407F: cpu.execute_instruction<0x8D>(0x002C96, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03DAA.asm:53 END_C_FUNCTION
    case 0xC04082: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C03DAA.asm:53 END_C_FUNCTION
    case 0xC04083: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03E25-jp.asm (unresolved).
bool execute_unresolved_c0_c03e25_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03E25-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC04084: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03E25-jp.asm:8 END_STACK_VARS
    case 0xC04086: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C03E25-jp.asm:8 END_STACK_VARS
    case 0xC04087: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03E25-jp.asm:8 END_STACK_VARS
    case 0xC04088: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03E25-jp.asm:8 END_STACK_VARS
    case 0xC04089: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03E25-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC04089.
    case 0xC0408B: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03E25-jp.asm:8 END_STACK_VARS
    case 0xC0408C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C03E25-jp.asm:8 END_STACK_VARS
    case 0xC0408D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C03E25-jp.asm:9 TAX
    case 0xC0408E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03E25-jp.asm:10 STX @LOCAL01
    case 0xC0408F: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:11 LDA #0
    case 0xC04091: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C03E25-jp.asm:11 LDA #0
    // Overlapping static entry reached from 0xC04091.
    case 0xC04093: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:12 STA @LOCAL00
    case 0xC04094: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:13 BRA @UNKNOWN1
    case 0xC04096: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:15 LDA @LOCAL00
    case 0xC04098: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:16 INC
    case 0xC0409A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C03E25-jp.asm:17 STA @LOCAL00
    case 0xC0409B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:17 STA @LOCAL00
    // Overlapping static entry reached from 0xC0D171.
    case 0xC0409C: cpu.execute_instruction<0x0E>(0x0010A6, 3); return true;
    // src/unknown/C0/C03E25-jp.asm:19 LDX @LOCAL01
    case 0xC0409D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:20 STX @VIRTUAL02
    case 0xC0409F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:21 INC @VIRTUAL02
    case 0xC040A1: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:22 CLC
    case 0xC040A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03E25-jp.asm:23 ADC #.LOWORD(GAME_STATE)
    case 0xC040A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03E25-jp.asm:23 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC040A4.
    case 0xC040A6: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03E25-jp.asm:24 TAX
    case 0xC040A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03E25-jp.asm:25 LDA a:game_state::unknown96,X
    case 0xC040A8: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C0/C03E25-jp.asm:26 AND #$00FF
    case 0xC040AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03E25-jp.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC040AB.
    case 0xC040AD: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:27 CMP @VIRTUAL02
    case 0xC040AE: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:28 BNE @UNKNOWN0
    case 0xC040B0: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:29 LDA @LOCAL00
    case 0xC040B2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:30 BNE @UNKNOWN2
    case 0xC040B4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:31 LDA #.LOWORD(-1)
    case 0xC040B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03E25-jp.asm:31 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC040B6.
    case 0xC040B8: cpu.execute_instruction<0xFF>(0x3A0C80, 4); return true;
    // src/unknown/C0/C03E25-jp.asm:32 BRA @UNKNOWN3
    case 0xC040B9: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C0/C03E25-jp.asm:34 DEC
    case 0xC040BB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C03E25-jp.asm:35 CLC
    case 0xC040BC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03E25-jp.asm:36 ADC #.LOWORD(GAME_STATE)
    case 0xC040BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03E25-jp.asm:36 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC040BD.
    case 0xC040BF: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03E25-jp.asm:37 TAX
    case 0xC040C0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03E25-jp.asm:38 LDA a:game_state::unknown96,X
    case 0xC040C1: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C0/C03E25-jp.asm:39 AND #$00FF
    case 0xC040C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03E25-jp.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC040C4.
    case 0xC040C6: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03E25-jp.asm:41 END_C_FUNCTION
    case 0xC040C7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C03E25-jp.asm:41 END_C_FUNCTION
    case 0xC040C8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03E5A-jp.asm (unresolved).
bool execute_unresolved_c0_c03e5a_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03E5A-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC040C9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03E5A-jp.asm:8 END_STACK_VARS
    case 0xC040CB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C03E5A-jp.asm:8 END_STACK_VARS
    case 0xC040CC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03E5A-jp.asm:8 END_STACK_VARS
    case 0xC040CD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03E5A-jp.asm:8 END_STACK_VARS
    case 0xC040CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03E5A-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC040CE.
    case 0xC040D0: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03E5A-jp.asm:8 END_STACK_VARS
    case 0xC040D1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C03E5A-jp.asm:8 END_STACK_VARS
    case 0xC040D2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:9 TAX
    case 0xC040D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:10 STX @LOCAL01
    case 0xC040D4: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:11 LDA #0
    case 0xC040D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C03E5A-jp.asm:11 LDA #0
    // Overlapping static entry reached from 0xC040D6.
    case 0xC040D8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:12 STA @LOCAL00
    case 0xC040D9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:13 BRA @UNKNOWN1
    case 0xC040DB: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:15 LDA @LOCAL00
    case 0xC040DD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:16 INC
    case 0xC040DF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:17 STA @LOCAL00
    case 0xC040E0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:19 LDX @LOCAL01
    case 0xC040E2: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:20 STX @VIRTUAL02
    case 0xC040E4: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:21 INC @VIRTUAL02
    case 0xC040E6: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:22 CLC
    case 0xC040E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:23 ADC #.LOWORD(GAME_STATE)
    case 0xC040E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03E5A-jp.asm:23 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC040E9.
    case 0xC040EB: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:24 TAX
    case 0xC040EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:25 LDA a:game_state::unknown96,X
    case 0xC040ED: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C0/C03E5A-jp.asm:26 AND #$00FF
    case 0xC040F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03E5A-jp.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC040F0.
    case 0xC040F2: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:27 CMP @VIRTUAL02
    case 0xC040F3: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:28 BNE @UNKNOWN0
    case 0xC040F5: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:29 LDA @LOCAL00
    case 0xC040F7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:30 BNE @UNKNOWN2
    case 0xC040F9: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:31 LDA #.LOWORD(-1)
    case 0xC040FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03E5A-jp.asm:31 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC040FB.
    case 0xC040FD: cpu.execute_instruction<0xFF>(0x3A1880, 4); return true;
    // src/unknown/C0/C03E5A-jp.asm:32 BRA @UNKNOWN3
    case 0xC040FE: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C0/C03E5A-jp.asm:34 DEC
    case 0xC04100: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:35 ASL
    case 0xC04101: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:36 CLC
    case 0xC04102: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:37 ADC #.LOWORD(GAME_STATE)
    case 0xC04103: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03E5A-jp.asm:37 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC04103.
    case 0xC04105: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:38 TAX
    case 0xC04106: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:39 LDA a:game_state::unknownA2,X
    case 0xC04107: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C0/C03E5A-jp.asm:40 ASL
    case 0xC0410A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:41 TAX
    case 0xC0410B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:42 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC0410C: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/unknown/C0/C03E5A-jp.asm:43 ASL
    case 0xC0410F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:44 TAX
    case 0xC04110: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:45 LDA CHOSEN_FOUR_PTRS,X
    case 0xC04111: cpu.execute_instruction<0xBD>(0x00514E, 3); return true;
    // src/unknown/C0/C03E5A-jp.asm:46 TAX
    case 0xC04114: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03E5A-jp.asm:47 LDA a:char_struct::position_index,X
    case 0xC04115: cpu.execute_instruction<0xBD>(0x00003C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03E5A-jp.asm:49 END_C_FUNCTION
    case 0xC04118: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C03E5A-jp.asm:49 END_C_FUNCTION
    case 0xC04119: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03E9D.asm (unresolved).
bool execute_unresolved_c0_c03e9d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03E9D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0411A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03E9D.asm:8 END_STACK_VARS
    case 0xC0411C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C03E9D.asm:8 END_STACK_VARS
    case 0xC0411D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03E9D.asm:8 END_STACK_VARS
    case 0xC0411E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03E9D.asm:8 END_STACK_VARS
    case 0xC0411F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03E9D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0411F.
    case 0xC04121: cpu.execute_instruction<0xFF>(0x20685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03E9D.asm:8 END_STACK_VARS
    case 0xC04122: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C03E9D.asm:8 END_STACK_VARS
    case 0xC04123: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C03E9D.asm:9 JSR UNKNOWN_C03E5A
    case 0xC04124: cpu.execute_instruction<0x20>(0x0040C9, 3); return true;
    // src/unknown/C0/C03E9D.asm:9 JSR UNKNOWN_C03E5A
    // Overlapping static entry reached from 0xC04121.
    case 0xC04125: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x008540, 3); return true;
    // src/unknown/C0/C03E9D.asm:10 STA @LOCAL00
    case 0xC04127: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03E9D.asm:10 STA @LOCAL00
    // Overlapping static entry reached from 0xC04125.
    case 0xC04128: cpu.execute_instruction<0x0E>(0x004CAE, 3); return true;
    // src/unknown/C0/C03E9D.asm:11 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC04129: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/unknown/C0/C03E9D.asm:11 LDX CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC04128.
    case 0xC0412B: cpu.execute_instruction<0x51>(0x0000BD, 2); return true;
    // src/unknown/C0/C03E9D.asm:12 LDA a:char_struct::position_index,X
    case 0xC0412C: cpu.execute_instruction<0xBD>(0x00003C, 3); return true;
    // src/unknown/C0/C03E9D.asm:12 LDA a:char_struct::position_index,X
    // Overlapping static entry reached from 0xC0412B.
    case 0xC0412D: cpu.execute_instruction<0x3C>(0x008500, 3); return true;
    // src/unknown/C0/C03E9D.asm:13 STA @VIRTUAL02
    case 0xC0412F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03E9D.asm:13 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0412D.
    case 0xC04130: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unknown/C0/C03E9D.asm:14 LDA @LOCAL00
    case 0xC04131: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03E9D.asm:15 CMP @VIRTUAL02
    case 0xC04133: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C03E9D.asm:16 BCS @UNKNOWN0
    case 0xC04135: cpu.execute_instruction<0xB0>(0x000004, 2); return true;
    // src/unknown/C0/C03E9D.asm:17 CLC
    case 0xC04137: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03E9D.asm:18 ADC #256
    case 0xC04138: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C0/C03E9D.asm:18 ADC #256
    // Overlapping static entry reached from 0xC04138.
    case 0xC0413A: cpu.execute_instruction<0x01>(0x000038, 2); return true;
    // src/unknown/C0/C03E9D.asm:20 SEC
    case 0xC0413B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C03E9D.asm:21 SBC @VIRTUAL02
    case 0xC0413C: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03E9D.asm:22 END_C_FUNCTION
    case 0xC0413E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C03E9D.asm:22 END_C_FUNCTION
    case 0xC0413F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03EC3.asm (unresolved).
bool execute_unresolved_c0_c03ec3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03EC3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04140: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03EC3.asm:11 END_STACK_VARS
    case 0xC04142: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C03EC3.asm:11 END_STACK_VARS
    case 0xC04143: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03EC3.asm:11 END_STACK_VARS
    case 0xC04144: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03EC3.asm:11 END_STACK_VARS
    case 0xC04145: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03EC3.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC04145.
    case 0xC04147: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03EC3.asm:11 END_STACK_VARS
    case 0xC04148: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C03EC3.asm:11 END_STACK_VARS
    case 0xC04149: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:12 STY @LOCAL00
    case 0xC0414A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C03EC3.asm:12 STY @LOCAL00
    // Overlapping static entry reached from 0xC04147.
    case 0xC0414B: cpu.execute_instruction<0x0E>(0x000286, 3); return true;
    // src/unknown/C0/C03EC3.asm:13 STX @VIRTUAL02
    case 0xC0414C: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C03EC3.asm:14 TAX
    case 0xC0414E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:15 LDA @PARAM03
    case 0xC0414F: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C03EC3.asm:16 STA @VIRTUAL04
    case 0xC04151: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C03EC3.asm:17 TXA
    case 0xC04153: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:18 JSL UNKNOWN_C03E9D
    case 0xC04154: cpu.execute_instruction<0x22>(0xC0411A, 4); return true;
    // src/unknown/C0/C03EC3.asm:19 CMP @VIRTUAL02
    case 0xC04158: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C03EC3.asm:20 BNE @UNKNOWN0
    case 0xC0415A: cpu.execute_instruction<0xD0>(0x000019, 2); return true;
    // src/unknown/C0/C03EC3.asm:21 LDY @LOCAL00
    case 0xC0415C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C03EC3.asm:22 INY
    case 0xC0415E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:23 STY @LOCAL00
    case 0xC0415F: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C03EC3.asm:24 LDA CURRENT_ENTITY_SLOT
    case 0xC04161: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C03EC3.asm:25 ASL
    case 0xC04164: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:26 CLC
    case 0xC04165: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:27 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC04166: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F8, 2); else cpu.execute_instruction<0x69>(0x000FF8, 3); return true;
    // src/unknown/C0/C03EC3.asm:27 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC04166.
    case 0xC04168: cpu.execute_instruction<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/C0/C03EC3.asm:28 TAX
    case 0xC04169: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:29 LDA __BSS_START__,X
    case 0xC0416A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C03EC3.asm:29 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC04168.
    case 0xC0416C: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C03EC3.asm:30 AND #$FFFF ^ SPRITE_TABLE_10_FLAGS::UNKNOWN12
    case 0xC0416D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00EFFF, 3); return true;
    // src/unknown/C0/C03EC3.asm:30 AND #$FFFF ^ SPRITE_TABLE_10_FLAGS::UNKNOWN12
    // Overlapping static entry reached from 0xC0416D.
    case 0xC0416F: cpu.execute_instruction<0xEF>(0x00009D, 4); return true;
    // src/unknown/C0/C03EC3.asm:31 STA __BSS_START__,X
    case 0xC04170: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03EC3.asm:32 BRA @UNKNOWN1
    case 0xC04173: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/unknown/C0/C03EC3.asm:34 CMP @VIRTUAL02
    case 0xC04175: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C03EC3.asm:35 BLTEQ @UNKNOWN1
    case 0xC04177: cpu.execute_instruction<0x90>(0x00001D, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C03EC3.asm:35 BLTEQ @UNKNOWN1
    case 0xC04179: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C0/C03EC3.asm:36 LDY @LOCAL00
    case 0xC0417B: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C03EC3.asm:37 TYA
    case 0xC0417D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:38 CLC
    case 0xC0417E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:39 ADC @VIRTUAL04
    case 0xC0417F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C03EC3.asm:40 TAY
    case 0xC04181: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:41 STY @LOCAL00
    case 0xC04182: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C03EC3.asm:42 LDA CURRENT_ENTITY_SLOT
    case 0xC04184: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C03EC3.asm:43 ASL
    case 0xC04187: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:44 CLC
    case 0xC04188: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:45 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC04189: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F8, 2); else cpu.execute_instruction<0x69>(0x000FF8, 3); return true;
    // src/unknown/C0/C03EC3.asm:45 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC04189.
    case 0xC0418B: cpu.execute_instruction<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/C0/C03EC3.asm:46 TAX
    case 0xC0418C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03EC3.asm:47 LDA __BSS_START__,X
    case 0xC0418D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C03EC3.asm:47 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0418B.
    case 0xC0418F: cpu.execute_instruction<0x00>(0x000009, 2); return true;
    // src/unknown/C0/C03EC3.asm:48 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12
    case 0xC04190: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x001000, 3); return true;
    // src/unknown/C0/C03EC3.asm:48 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12
    // Overlapping static entry reached from 0xC04190.
    case 0xC04192: cpu.execute_instruction<0x10>(0x00009D, 2); return true;
    // src/unknown/C0/C03EC3.asm:49 STA __BSS_START__,X
    case 0xC04193: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03EC3.asm:49 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC04192.
    case 0xC04194: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C03EC3.asm:51 LDY @LOCAL00
    case 0xC04196: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C03EC3.asm:52 TYA
    case 0xC04198: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03EC3.asm:53 END_C_FUNCTION
    case 0xC04199: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C03EC3.asm:53 END_C_FUNCTION
    case 0xC0419A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03F1E-jp.asm (unresolved).
bool execute_unresolved_c0_c03f1e_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C03F1E-jp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0419B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03F1E-jp.asm:5 END_STACK_VARS
    case 0xC0419D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03F1E-jp.asm:5 END_STACK_VARS
    case 0xC0419E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03F1E-jp.asm:5 END_STACK_VARS
    case 0xC0419F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03F1E-jp.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC0419F.
    case 0xC041A1: cpu.execute_instruction<0xFF>(0x2E9C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03F1E-jp.asm:5 END_STACK_VARS
    case 0xC041A2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:6 STZ GAME_STATE + game_state::unknown88
    case 0xC041A3: cpu.execute_instruction<0x9C>(0x009B2E, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:6 STZ GAME_STATE + game_state::unknown88
    // Overlapping static entry reached from 0xC041A1.
    case 0xC041A5: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:7 LDX #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC041A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000DC, 2); else cpu.execute_instruction<0xA2>(0x0054DC, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:7 LDX #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC041A6.
    case 0xC041A8: cpu.execute_instruction<0x54>(0x0002A0, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:8 LDY #$0002
    case 0xC041A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:8 LDY #$0002
    // Overlapping static entry reached from 0xC041A9.
    case 0xC041AB: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C0/C03F1E-jp.asm:10 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC041AC: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:11 STA a:player_position_buffer_entry::x_coord,X
    case 0xC041AF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:12 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC041B2: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:13 STA a:player_position_buffer_entry::y_coord,X
    case 0xC041B5: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:14 LDA GAME_STATE+game_state::leader_direction
    case 0xC041B8: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:15 STA a:player_position_buffer_entry::direction,X
    case 0xC041BB: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:16 LDA GAME_STATE+game_state::walking_style
    case 0xC041BE: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:17 STA a:player_position_buffer_entry::walking_style,X
    case 0xC041C1: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:18 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xC041C4: cpu.execute_instruction<0xAD>(0x009B32, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:19 STA a:player_position_buffer_entry::tile_flags,X
    case 0xC041C7: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:20 STZ PLAYER_MOVEMENT_FLAGS
    case 0xC041CA: cpu.execute_instruction<0x9C>(0x0060DC, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:21 STZ a:player_position_buffer_entry::unknown10,X
    case 0xC041CD: cpu.execute_instruction<0x9E>(0x00000A, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:22 TXA
    case 0xC041D0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:23 CLC
    case 0xC041D1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:24 ADC #.SIZEOF(player_position_buffer_entry) * 255 ;last entry
    case 0xC041D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x000BF4, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:24 ADC #.SIZEOF(player_position_buffer_entry) * 255 ;last entry
    // Overlapping static entry reached from 0xC041D2.
    case 0xC041D4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:25 TAX
    case 0xC041D5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:26 DEY
    case 0xC041D6: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:27 BNE @UNKNOWN0
    case 0xC041D7: cpu.execute_instruction<0xD0>(0x0000D3, 2); return true;
    // src/unknown/C0/C03F1E-jp.asm:28 LDY #$0000
    case 0xC041D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:28 LDY #$0000
    // Overlapping static entry reached from 0xC041D9.
    case 0xC041DB: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C03F1E-jp.asm:29 BRA @UNKNOWN2
    case 0xC041DC: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/unknown/C0/C03F1E-jp.asm:31 TYA
    case 0xC041DE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:32 CLC
    case 0xC041DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:33 ADC #.LOWORD(GAME_STATE)
    case 0xC041E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:33 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC041E0.
    case 0xC041E2: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:34 TAX
    case 0xC041E3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:35 LDA a:game_state::player_controlled_party_members,X
    case 0xC041E4: cpu.execute_instruction<0xBD>(0x000099, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:36 AND #$00FF
    case 0xC041E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC041E7.
    case 0xC041E9: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C03F1E-jp.asm:37 ASL
    case 0xC041EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:38 TAX
    case 0xC041EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:39 LDA CHOSEN_FOUR_PTRS,X
    case 0xC041EC: cpu.execute_instruction<0xBD>(0x00514E, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:40 TAX
    case 0xC041EF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:41 STZ a:char_struct::position_index,X
    case 0xC041F0: cpu.execute_instruction<0x9E>(0x00003C, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:42 LDA #$FFFF
    case 0xC041F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:42 LDA #$FFFF
    // Overlapping static entry reached from 0xC041F3.
    case 0xC041F5: cpu.execute_instruction<0xFF>(0x00409D, 4); return true;
    // src/unknown/C0/C03F1E-jp.asm:43 STA a:char_struct::unknown65,X
    case 0xC041F6: cpu.execute_instruction<0x9D>(0x000040, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:44 STA a:char_struct::unknown55,X
    case 0xC041F9: cpu.execute_instruction<0x9D>(0x000036, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:45 TYA
    case 0xC041FC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:46 ASL
    case 0xC041FD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:47 CLC
    case 0xC041FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:48 ADC #.LOWORD(GAME_STATE)
    case 0xC041FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:48 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC041FF.
    case 0xC04201: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:49 TAX
    case 0xC04202: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:50 LDA a:game_state::unknownA2,X
    case 0xC04203: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:51 ASL
    case 0xC04206: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:52 TAX
    case 0xC04207: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:53 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC04208: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:54 STA ENTITY_ABS_X_TABLE,X
    case 0xC0420B: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:55 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0420E: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:56 STA ENTITY_ABS_Y_TABLE,X
    case 0xC04211: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:57 LDA GAME_STATE+game_state::leader_direction
    case 0xC04214: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:58 STA ENTITY_DIRECTIONS,X
    case 0xC04217: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:59 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xC0421A: cpu.execute_instruction<0xAD>(0x009B32, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:60 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0421D: cpu.execute_instruction<0x9D>(0x002FA8, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:61 INY
    case 0xC04220: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:63 LDA GAME_STATE+game_state::party_count
    case 0xC04221: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:64 AND #$00FF
    case 0xC04224: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C03F1E-jp.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC04224.
    case 0xC04226: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C03F1E-jp.asm:65 STA @VIRTUAL02
    case 0xC04227: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C03F1E-jp.asm:66 TYA
    case 0xC04229: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:67 CMP @VIRTUAL02
    case 0xC0422A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C03F1E-jp.asm:68 BCC @UNKNOWN1
    case 0xC0422C: cpu.execute_instruction<0x90>(0x0000B0, 2); return true;
    // src/unknown/C0/C03F1E-jp.asm:69 PLD
    case 0xC0422E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C03F1E-jp.asm:70 RTL
    case 0xC0422F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C03FA9.asm (unresolved).
bool execute_unresolved_c0_c03fa9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C03FA9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04230: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C03FA9.asm:9 END_STACK_VARS
    case 0xC04232: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C03FA9.asm:9 END_STACK_VARS
    case 0xC04233: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C03FA9.asm:9 END_STACK_VARS
    case 0xC04234: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03FA9.asm:9 END_STACK_VARS
    case 0xC04235: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C03FA9.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC04235.
    case 0xC04237: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C03FA9.asm:9 END_STACK_VARS
    case 0xC04238: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C03FA9.asm:9 END_STACK_VARS
    case 0xC04239: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C03FA9.asm:10 STY @VIRTUAL02
    case 0xC0423A: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C03FA9.asm:10 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC04237.
    case 0xC0423B: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C0/C03FA9.asm:11 STA @LOCAL00
    case 0xC0423C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03FA9.asm:12 STA GAME_STATE+game_state::leader_x_coord
    case 0xC0423E: cpu.execute_instruction<0x8D>(0x009B28, 3); return true;
    // src/unknown/C0/C03FA9.asm:13 STX GAME_STATE+game_state::leader_y_coord
    case 0xC04241: cpu.execute_instruction<0x8E>(0x009B2C, 3); return true;
    // src/unknown/C0/C03FA9.asm:14 LDA @VIRTUAL02
    case 0xC04244: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03FA9.asm:15 STA GAME_STATE+game_state::leader_direction
    case 0xC04246: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // src/unknown/C0/C03FA9.asm:16 LDY GAME_STATE+game_state::current_party_members
    case 0xC04249: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C03FA9.asm:17 LDA @LOCAL00
    case 0xC0424C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03FA9.asm:18 JSL UNKNOWN_C05F33
    case 0xC0424E: cpu.execute_instruction<0x22>(0xC06161, 4); return true;
    // src/unknown/C0/C03FA9.asm:19 STA GAME_STATE+game_state::trodden_tile_type
    case 0xC04252: cpu.execute_instruction<0x8D>(0x009B32, 3); return true;
    // src/unknown/C0/C03FA9.asm:20 LDA @VIRTUAL02
    case 0xC04255: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C03FA9.asm:21 JSL UNKNOWN_C03A94
    case 0xC04257: cpu.execute_instruction<0x22>(0xC03CEE, 4); return true;
    // src/unknown/C0/C03FA9.asm:22 JSL UNKNOWN_C03F1E
    case 0xC0425B: cpu.execute_instruction<0x22>(0xC0419B, 4); return true;
    // src/unknown/C0/C03FA9.asm:23 LDA #0
    case 0xC0425F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C03FA9.asm:23 LDA #0
    // Overlapping static entry reached from 0xC0425F.
    case 0xC04261: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C03FA9.asm:24 STA @LOCAL00
    case 0xC04262: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03FA9.asm:25 BRA @UNKNOWN1
    case 0xC04264: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C03FA9.asm:27 ASL
    case 0xC04266: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C03FA9.asm:28 TAX
    case 0xC04267: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C03FA9.asm:29 LDA #.LOWORD(-1)
    case 0xC04268: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03FA9.asm:29 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04268.
    case 0xC0426A: cpu.execute_instruction<0xFF>(0x1B249D, 4); return true;
    // src/unknown/C0/C03FA9.asm:30 STA ENTITY_ANIMATION_FINGERPRINTS + 24 * 2,X
    case 0xC0426B: cpu.execute_instruction<0x9D>(0x001B24, 3); return true;
    // src/unknown/C0/C03FA9.asm:31 LDA @LOCAL00
    case 0xC0426E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C03FA9.asm:32 INC
    case 0xC04270: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C03FA9.asm:33 STA @LOCAL00
    case 0xC04271: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C03FA9.asm:35 CMP #TOTAL_PARTY_COUNT
    case 0xC04273: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C03FA9.asm:35 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC04273.
    case 0xC04275: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C03FA9.asm:36 BCC @UNKNOWN0
    case 0xC04276: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // src/unknown/C0/C03FA9.asm:37 LDA #.LOWORD(-1)
    case 0xC04278: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C03FA9.asm:37 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04278.
    case 0xC0427A: cpu.execute_instruction<0xFF>(0xA16D8D, 4); return true;
    // src/unknown/C0/C03FA9.asm:38 STA MINI_GHOST_ENTITY_ID
    case 0xC0427B: cpu.execute_instruction<0x8D>(0x00A16D, 3); return true;
    // src/unknown/C0/C03FA9.asm:39 STZ CURRENT_TELEPORT_DESTINATION_Y
    case 0xC0427E: cpu.execute_instruction<0x9C>(0x004712, 3); return true;
    // src/unknown/C0/C03FA9.asm:40 STZ CURRENT_TELEPORT_DESTINATION_X
    case 0xC04281: cpu.execute_instruction<0x9C>(0x004710, 3); return true;
    // src/unknown/C0/C03FA9.asm:41 LDA f:NESS_PAJAMA_FLAG
    case 0xC04284: cpu.execute_instruction<0xAF>(0xC30186, 4); return true;
    // src/unknown/C0/C03FA9.asm:41 LDA f:NESS_PAJAMA_FLAG
    // Overlapping static entry reached from 0xC042E1.
    case 0xC04285: cpu.execute_instruction<0x86>(0x000001, 2); return true;
    // src/unknown/C0/C03FA9.asm:41 LDA f:NESS_PAJAMA_FLAG
    // Overlapping static entry reached from 0xC04285.
    case 0xC04287: cpu.execute_instruction<0xC3>(0x000022, 2); return true;
    // src/unknown/C0/C03FA9.asm:42 JSL GET_EVENT_FLAG
    case 0xC04288: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C0/C03FA9.asm:42 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC04287.
    case 0xC04289: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/unknown/C0/C03FA9.asm:42 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC04289.
    case 0xC0428B: cpu.execute_instruction<0xC2>(0x00008D, 2); return true;
    // src/unknown/C0/C03FA9.asm:43 STA PAJAMA_FLAG
    case 0xC0428C: cpu.execute_instruction<0x8D>(0x00A173, 3); return true;
    // src/unknown/C0/C03FA9.asm:43 STA PAJAMA_FLAG
    // Overlapping static entry reached from 0xC0428B.
    case 0xC0428D: cpu.execute_instruction<0x73>(0x0000A1, 2); return true;
    // src/unknown/C0/C03FA9.asm:44 JSL UNKNOWN_C07B52
    case 0xC0428F: cpu.execute_instruction<0x22>(0xC07DA2, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C03FA9.asm:45 END_C_FUNCTION
    case 0xC04293: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C03FA9.asm:45 END_C_FUNCTION
    case 0xC04294: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0402B.asm (unresolved).
bool execute_unresolved_c0_c0402b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0402B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC042B2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0402B.asm:7 END_STACK_VARS
    case 0xC042B4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0402B.asm:7 END_STACK_VARS
    case 0xC042B5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0402B.asm:7 END_STACK_VARS
    case 0xC042B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0402B.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC042B6.
    case 0xC042B8: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0402B.asm:7 END_STACK_VARS
    case 0xC042B9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0402B.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC042BA: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0402B.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC042BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0402B.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC042BE: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0402B.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC042C0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0402B.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC042C2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0402B.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC042C4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0402B.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC042C6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0402B.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC042C8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0402B.asm:10 JSL UNKNOWN_C083E3
    case 0xC042CA: cpu.execute_instruction<0x22>(0xC083E3, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0402B.asm:11 END_C_FUNCTION
    case 0xC042CE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0402B.asm:11 END_C_FUNCTION
    case 0xC042CF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04049.asm (unresolved).
bool execute_unresolved_c0_c04049_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C04049.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC042D0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C04049.asm:4 STZ DEMO_FRAMES_LEFT
    case 0xC042D2: cpu.execute_instruction<0x9C>(0x000081, 3); return true;
    // src/unknown/C0/C04049.asm:5 RTL
    case 0xC042D5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04116.asm (unresolved).
bool execute_unresolved_c0_c04116_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04116.asm:3 BEGIN_C_FUNCTION
    case 0xC0439D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04116.asm:11 END_STACK_VARS
    case 0xC0439F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C04116.asm:11 END_STACK_VARS
    case 0xC043A0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04116.asm:11 END_STACK_VARS
    case 0xC043A1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04116.asm:11 END_STACK_VARS
    case 0xC043A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04116.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC043A2.
    case 0xC043A4: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04116.asm:11 END_STACK_VARS
    case 0xC043A5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C04116.asm:11 END_STACK_VARS
    case 0xC043A6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:12 STA @LOCAL04
    case 0xC043A7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C04116.asm:12 STA @LOCAL04
    // Overlapping static entry reached from 0xC043A4.
    case 0xC043A8: cpu.execute_instruction<0x16>(0x00000A, 2); return true;
    // src/unknown/C0/C04116.asm:13 ASL
    case 0xC043A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:14 TAX
    case 0xC043AA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:15 LDA f:UNKNOWN_C3E148,X
    case 0xC043AB: cpu.execute_instruction<0xBF>(0xC3E132, 4); return true;
    // src/unknown/C0/C04116.asm:16 CLC
    case 0xC043AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:17 ADC GAME_STATE+game_state::leader_x_coord
    case 0xC043B0: cpu.execute_instruction<0x6D>(0x009B28, 3); return true;
    // src/unknown/C0/C04116.asm:18 STA @LOCAL03
    case 0xC043B3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C04116.asm:19 LDA f:UNKNOWN_C3E158,X
    case 0xC043B5: cpu.execute_instruction<0xBF>(0xC3E142, 4); return true;
    // src/unknown/C0/C04116.asm:20 CLC
    case 0xC043B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:21 ADC GAME_STATE+game_state::leader_y_coord
    case 0xC043BA: cpu.execute_instruction<0x6D>(0x009B2C, 3); return true;
    // src/unknown/C0/C04116.asm:22 STA @VIRTUAL04
    case 0xC043BD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04116.asm:23 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC043BF: cpu.execute_instruction<0xAD>(0x0060DE, 3); return true;
    // src/unknown/C0/C04116.asm:24 STA @LOCAL02
    case 0xC043C2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04116.asm:25 LDA #1
    case 0xC043C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04116.asm:25 LDA #1
    // Overlapping static entry reached from 0xC043C4.
    case 0xC043C6: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C04116.asm:26 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC043C7: cpu.execute_instruction<0x8D>(0x0060DE, 3); return true;
    // src/unknown/C0/C04116.asm:28 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC043CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x009B3A, 3); return true;
    // src/unknown/C0/C04116.asm:28 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC043CA.
    case 0xC043CC: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:29 STA @VIRTUAL02
    case 0xC043CD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04116.asm:30 LDX @VIRTUAL02
    case 0xC043CF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04116.asm:31 LDA __BSS_START__,X
    case 0xC043D1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04116.asm:32 TAY
    case 0xC043D4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:33 LDX @VIRTUAL04
    case 0xC043D5: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C04116.asm:34 LDA @LOCAL03
    case 0xC043D7: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C04116.asm:35 JSL NPC_COLLISION_CHECK
    case 0xC043D9: cpu.execute_instruction<0x22>(0xC06224, 4); return true;
    // src/unknown/C0/C04116.asm:36 STA @LOCAL01
    case 0xC043DD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04116.asm:37 CMP #$8000
    case 0xC043DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C04116.asm:37 CMP #$8000
    // Overlapping static entry reached from 0xC043DF.
    case 0xC043E1: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C04116.asm:38 BCS @UNKNOWN1
    case 0xC043E2: cpu.execute_instruction<0xB0>(0x00000F, 2); return true;
    // src/unknown/C0/C04116.asm:39 ASL
    case 0xC043E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:40 TAX
    case 0xC043E5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:41 LDA ENTITY_NPC_IDS,X
    case 0xC043E6: cpu.execute_instruction<0xBD>(0x003098, 3); return true;
    // src/unknown/C0/C04116.asm:42 STA INTERACTING_NPC_ID
    case 0xC043E9: cpu.execute_instruction<0x8D>(0x0060E8, 3); return true;
    // src/unknown/C0/C04116.asm:43 LDA @LOCAL01
    case 0xC043EC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C04116.asm:44 STA INTERACTING_NPC_ENTITY
    case 0xC043EE: cpu.execute_instruction<0x8D>(0x0060EA, 3); return true;
    // src/unknown/C0/C04116.asm:45 BRA @UNKNOWN7
    case 0xC043F1: cpu.execute_instruction<0x80>(0x00005A, 2); return true;
    // src/unknown/C0/C04116.asm:47 LDA @LOCAL04
    case 0xC043F3: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C04116.asm:48 STA @LOCAL00
    case 0xC043F5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C04116.asm:49 LDX @VIRTUAL02
    case 0xC043F7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04116.asm:50 LDA __BSS_START__,X
    case 0xC043F9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04116.asm:51 TAY
    case 0xC043FC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:52 LDX @VIRTUAL04
    case 0xC043FD: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C04116.asm:53 LDA @LOCAL03
    case 0xC043FF: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C04116.asm:54 JSL UNKNOWN_C05CD7
    case 0xC04401: cpu.execute_instruction<0x22>(0xC05F05, 4); return true;
    // src/unknown/C0/C04116.asm:55 AND #$0082
    case 0xC04405: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000082, 2); else cpu.execute_instruction<0x29>(0x000082, 3); return true;
    // src/unknown/C0/C04116.asm:55 AND #$0082
    // Overlapping static entry reached from 0xC04405.
    case 0xC04407: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C04116.asm:56 CMP #130
    case 0xC04408: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000082, 2); else cpu.execute_instruction<0xC9>(0x000082, 3); return true;
    // src/unknown/C0/C04116.asm:56 CMP #130
    // Overlapping static entry reached from 0xC04408.
    case 0xC0440A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C04116.asm:57 BNE @UNKNOWN7
    case 0xC0440B: cpu.execute_instruction<0xD0>(0x000040, 2); return true;
    // src/unknown/C0/C04116.asm:58 LDA @LOCAL04
    case 0xC0440D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C04116.asm:59 ASL
    case 0xC0440F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:60 TAX
    case 0xC04410: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:61 LDA f:UNKNOWN_C3E148,X
    case 0xC04411: cpu.execute_instruction<0xBF>(0xC3E132, 4); return true;
    // src/unknown/C0/C04116.asm:62 BEQ @UNKNOWN4
    case 0xC04415: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C04116.asm:63 AND #$8000
    case 0xC04417: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C04116.asm:63 AND #$8000
    // Overlapping static entry reached from 0xC04417.
    case 0xC04419: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C04116.asm:64 BEQ @UNKNOWN2
    case 0xC0441A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C04116.asm:65 LDX #.LOWORD(-8)
    case 0xC0441C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F8, 2); else cpu.execute_instruction<0xA2>(0x00FFF8, 3); return true;
    // src/unknown/C0/C04116.asm:65 LDX #.LOWORD(-8)
    // Overlapping static entry reached from 0xC0441C.
    case 0xC0441E: cpu.execute_instruction<0xFF>(0xA20380, 4); return true;
    // src/unknown/C0/C04116.asm:66 BRA @UNKNOWN3
    case 0xC0441F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C04116.asm:68 LDX #8
    case 0xC04421: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C0/C04116.asm:68 LDX #8
    // Overlapping static entry reached from 0xC0441E.
    case 0xC04422: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:68 LDX #8
    // Overlapping static entry reached from 0xC04421.
    case 0xC04423: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C0/C04116.asm:70 TXA
    case 0xC04424: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:71 CLC
    case 0xC04425: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:72 ADC @LOCAL03
    case 0xC04426: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C0/C04116.asm:73 STA @LOCAL03
    case 0xC04428: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C04116.asm:75 LDA @LOCAL04
    case 0xC0442A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C04116.asm:76 ASL
    case 0xC0442C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:77 TAX
    case 0xC0442D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:78 LDA f:UNKNOWN_C3E158,X
    case 0xC0442E: cpu.execute_instruction<0xBF>(0xC3E142, 4); return true;
    // src/unknown/C0/C04116.asm:79 BEQ @UNKNOWN0
    case 0xC04432: cpu.execute_instruction<0xF0>(0x000096, 2); return true;
    // src/unknown/C0/C04116.asm:80 AND #$8000
    case 0xC04434: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C04116.asm:80 AND #$8000
    // Overlapping static entry reached from 0xC04434.
    case 0xC04436: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C04116.asm:81 BEQ @UNKNOWN5
    case 0xC04437: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C04116.asm:82 LDX #.LOWORD(-8)
    case 0xC04439: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F8, 2); else cpu.execute_instruction<0xA2>(0x00FFF8, 3); return true;
    // src/unknown/C0/C04116.asm:82 LDX #.LOWORD(-8)
    // Overlapping static entry reached from 0xC04439.
    case 0xC0443B: cpu.execute_instruction<0xFF>(0xA20380, 4); return true;
    // src/unknown/C0/C04116.asm:83 BRA @UNKNOWN6
    case 0xC0443C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C04116.asm:85 LDX #8
    case 0xC0443E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C0/C04116.asm:85 LDX #8
    // Overlapping static entry reached from 0xC0443B.
    case 0xC0443F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:85 LDX #8
    // Overlapping static entry reached from 0xC0443E.
    case 0xC04440: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C04116.asm:87 STX @VIRTUAL02
    case 0xC04441: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C04116.asm:88 LDA @VIRTUAL04
    case 0xC04443: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C04116.asm:89 CLC
    case 0xC04445: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:90 ADC @VIRTUAL02
    case 0xC04446: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C04116.asm:91 STA @VIRTUAL04
    case 0xC04448: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04116.asm:92 JMP @UNKNOWN0
    case 0xC0444A: cpu.execute_instruction<0x4C>(0x0043CA, 3); return true;
    // src/unknown/C0/C04116.asm:94 LDA @LOCAL02
    case 0xC0444D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C04116.asm:95 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0444F: cpu.execute_instruction<0x8D>(0x0060DE, 3); return true;
    // src/unknown/C0/C04116.asm:96 LDA INTERACTING_NPC_ID
    case 0xC04452: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // src/unknown/C0/C04116.asm:97 CMP #.LOWORD(-1)
    case 0xC04455: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C04116.asm:97 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04455.
    case 0xC04457: cpu.execute_instruction<0xFF>(0xAD05F0, 4); return true;
    // src/unknown/C0/C04116.asm:98 BEQ @UNKNOWN8
    case 0xC04458: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C04116.asm:99 LDA INTERACTING_NPC_ID
    case 0xC0445A: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // src/unknown/C0/C04116.asm:99 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC04457.
    case 0xC0445B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:99 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC0445B.
    case 0xC0445C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C04116.asm:100 BNE @UNKNOWN9
    case 0xC0445D: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C04116.asm:102 LDA @LOCAL04
    case 0xC0445F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C04116.asm:103 JSL UNKNOWN_C4334A
    case 0xC04461: cpu.execute_instruction<0x22>(0xC430C3, 4); return true;
    // src/unknown/C0/C04116.asm:105 LDA INTERACTING_NPC_ID
    case 0xC04465: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04116.asm:106 END_C_FUNCTION
    case 0xC04468: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C04116.asm:106 END_C_FUNCTION
    case 0xC04469: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
