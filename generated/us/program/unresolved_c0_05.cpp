// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C0/C0DB0F.asm (unresolved).
bool execute_unresolved_c0_c0db0f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DB0F.asm:3 BEGIN_C_FUNCTION
    case 0xC0DB0F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DB0F.asm:10 END_STACK_VARS
    case 0xC0DB11: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DB0F.asm:10 END_STACK_VARS
    case 0xC0DB12: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DB0F.asm:10 END_STACK_VARS
    case 0xC0DB13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DB0F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DB13.
    case 0xC0DB15: cpu.execute_instruction<0xFF>(0x67AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DB0F.asm:10 END_STACK_VARS
    case 0xC0DB16: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:11 LDA PAD_STATE + 2
    case 0xC0DB17: cpu.execute_instruction<0xAD>(0x000067, 3); return true;
    // src/unknown/C0/C0DB0F.asm:11 LDA PAD_STATE + 2
    // Overlapping static entry reached from 0xC0DB15.
    case 0xC0DB19: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0DB0F.asm:12 AND #PAD::SELECT_BUTTON
    case 0xC0DB1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x002000, 3); return true;
    // src/unknown/C0/C0DB0F.asm:12 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC0DB1A.
    case 0xC0DB1C: cpu.execute_instruction<0x20>(0x0006F0, 3); return true;
    // src/unknown/C0/C0DB0F.asm:13 BEQ @UNKNOWN0
    case 0xC0DB1D: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0DB0F.asm:14 JSR UNKNOWN_C0DA31
    case 0xC0DB1F: cpu.execute_instruction<0x20>(0x00DA31, 3); return true;
    // src/unknown/C0/C0DB0F.asm:15 JMP @UNKNOWN13
    case 0xC0DB22: cpu.execute_instruction<0x4C>(0x00DBE4, 3); return true;
    // src/unknown/C0/C0DB0F.asm:17 LDA #.LOWORD(-1)
    case 0xC0DB25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0DB0F.asm:17 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DB25.
    case 0xC0DB27: cpu.execute_instruction<0xFF>(0xAC1685, 4); return true;
    // src/unknown/C0/C0DB0F.asm:18 STA @LOCAL04
    case 0xC0DB28: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:19 LDY FIRST_ENTITY
    case 0xC0DB2A: cpu.execute_instruction<0xAC>(0x000A50, 3); return true;
    // src/unknown/C0/C0DB0F.asm:19 LDY FIRST_ENTITY
    // Overlapping static entry reached from 0xC0DB27.
    case 0xC0DB2B: cpu.execute_instruction<0x50>(0x00000A, 2); return true;
    // src/unknown/C0/C0DB0F.asm:20 STY @LOCAL03
    case 0xC0DB2D: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C0DB0F.asm:21 BRA @UNKNOWN6
    case 0xC0DB2F: cpu.execute_instruction<0x80>(0x00004B, 2); return true;
    // src/unknown/C0/C0DB0F.asm:23 TYA
    case 0xC0DB31: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:24 LSR
    case 0xC0DB32: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:25 ASL
    case 0xC0DB33: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:26 TAX
    case 0xC0DB34: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:27 LDA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0DB35: cpu.execute_instruction<0xBD>(0x000B52, 3); return true;
    // src/unknown/C0/C0DB0F.asm:27 LDA ENTITY_SCREEN_Y_TABLE,X
    // Overlapping static entry reached from 0xC0DB2B.
    case 0xC0DB37: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:28 CMP #256
    case 0xC0DB38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0DB0F.asm:28 CMP #256
    // Overlapping static entry reached from 0xC0DB38.
    case 0xC0DB3A: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C0/C0DB0F.asm:29 BCC @UNKNOWN2
    case 0xC0DB3B: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C0/C0DB0F.asm:29 BCC @UNKNOWN2
    // Overlapping static entry reached from 0xC0DB3A.
    case 0xC0DB3C: cpu.execute_instruction<0x05>(0x0000C9, 2); return true;
    // src/unknown/C0/C0DB0F.asm:30 CMP #.LOWORD(-64)
    case 0xC0DB3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x00FFC0, 3); return true;
    // src/unknown/C0/C0DB0F.asm:30 CMP #.LOWORD(-64)
    // Overlapping static entry reached from 0xC0DB3C.
    case 0xC0DB3E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0090FF, 3); return true;
    // src/unknown/C0/C0DB0F.asm:30 CMP #.LOWORD(-64)
    // Overlapping static entry reached from 0xC0DB3D.
    case 0xC0DB3F: cpu.execute_instruction<0xFF>(0x982F90, 4); return true;
    // src/unknown/C0/C0DB0F.asm:31 BCC @UNKNOWN5
    case 0xC0DB40: cpu.execute_instruction<0x90>(0x00002F, 2); return true;
    // src/unknown/C0/C0DB0F.asm:31 BCC @UNKNOWN5
    // Overlapping static entry reached from 0xC0DB3E.
    case 0xC0DB41: cpu.execute_instruction<0x2F>(0x0A4A98, 4); return true;
    // src/unknown/C0/C0DB0F.asm:33 TYA
    case 0xC0DB42: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:34 LSR
    case 0xC0DB43: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:35 ASL
    case 0xC0DB44: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:36 TAX
    case 0xC0DB45: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:37 LDA ENTITY_SCREEN_X_TABLE,X
    case 0xC0DB46: cpu.execute_instruction<0xBD>(0x000B16, 3); return true;
    // src/unknown/C0/C0DB0F.asm:38 CMP #320
    // Retained frozen presentation override; see program_index.json.
    case 0xC0DB49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000180, 3); return true;
    // src/unknown/C0/C0DB0F.asm:38 CMP #320
    // Overlapping static entry reached from 0xC0DB49.
    case 0xC0DB4B: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C0/C0DB0F.asm:39 BCC @UNKNOWN3
    case 0xC0DB4C: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C0/C0DB0F.asm:39 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC0DB4B.
    case 0xC0DB4D: cpu.execute_instruction<0x05>(0x0000C9, 2); return true;
    // src/unknown/C0/C0DB0F.asm:40 CMP #.LOWORD(-64)
    // Retained frozen presentation override; see program_index.json.
    case 0xC0DB4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x00FF80, 3); return true;
    // src/unknown/C0/C0DB0F.asm:40 CMP #.LOWORD(-64)
    // Retained frozen presentation override; see program_index.json.
    // Overlapping static entry reached from 0xC0DB4D.
    case 0xC0DB4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0x80>(0x0000FF, 2); else cpu.execute_instruction<0x80>(0x0090FF, 3); return true;
    // src/unknown/C0/C0DB0F.asm:40 CMP #.LOWORD(-64)
    // Overlapping static entry reached from 0xC0DB4E.
    case 0xC0DB50: cpu.execute_instruction<0xFF>(0x981E90, 4); return true;
    // src/unknown/C0/C0DB0F.asm:41 BCC @UNKNOWN5
    case 0xC0DB51: cpu.execute_instruction<0x90>(0x00001E, 2); return true;
    // src/unknown/C0/C0DB0F.asm:41 BCC @UNKNOWN5
    // Overlapping static entry reached from 0xC0DB4F.
    case 0xC0DB52: cpu.execute_instruction<0x1E>(0x004A98, 3); return true;
    // src/unknown/C0/C0DB0F.asm:43 TYA
    case 0xC0DB53: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:44 LSR
    case 0xC0DB54: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:45 STA @LOCAL02
    case 0xC0DB55: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0DB0F.asm:46 ASL
    case 0xC0DB57: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:47 TAX
    case 0xC0DB58: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:48 LDA ENTITY_DRAW_PRIORITY,X
    case 0xC0DB59: cpu.execute_instruction<0xBD>(0x00103E, 3); return true;
    // src/unknown/C0/C0DB0F.asm:49 CMP #1
    case 0xC0DB5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0DB0F.asm:49 CMP #1
    // Overlapping static entry reached from 0xC0DB5C.
    case 0xC0DB5E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0DB0F.asm:50 BNE @UNKNOWN4
    case 0xC0DB5F: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0DB0F.asm:51 LDA @LOCAL04
    case 0xC0DB61: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:52 STA ENTITY_DRAW_SORTING,X
    case 0xC0DB63: cpu.execute_instruction<0x9D>(0x00280C, 3); return true;
    // src/unknown/C0/C0DB0F.asm:53 LDA @LOCAL02
    case 0xC0DB66: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0DB0F.asm:54 STA @LOCAL04
    case 0xC0DB68: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:55 BRA @UNKNOWN5
    case 0xC0DB6A: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C0DB0F.asm:57 LDA @LOCAL02
    case 0xC0DB6C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0DB0F.asm:58 JSR UNKNOWN_C0A0CA
    case 0xC0DB6E: cpu.execute_instruction<0x20>(0x00A0CA, 3); return true;
    // src/unknown/C0/C0DB0F.asm:60 LDY @LOCAL03
    case 0xC0DB71: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C0DB0F.asm:61 TYA
    case 0xC0DB73: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:62 LSR
    case 0xC0DB74: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:63 ASL
    case 0xC0DB75: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:64 TAX
    case 0xC0DB76: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:65 LDY ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC0DB77: cpu.execute_instruction<0xBC>(0x000A9E, 3); return true;
    // src/unknown/C0/C0DB0F.asm:66 STY @LOCAL03
    case 0xC0DB7A: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C0DB0F.asm:68 TYA
    case 0xC0DB7C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:69 INC
    case 0xC0DB7D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:70 BNE @UNKNOWN1
    case 0xC0DB7E: cpu.execute_instruction<0xD0>(0x0000B1, 2); return true;
    // src/unknown/C0/C0DB0F.asm:71 BRA @UNKNOWN12
    case 0xC0DB80: cpu.execute_instruction<0x80>(0x00005D, 2); return true;
    // src/unknown/C0/C0DB0F.asm:73 LDA @LOCAL04
    case 0xC0DB82: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:74 STA @LOCAL01
    case 0xC0DB84: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DB0F.asm:75 LDA @LOCAL04
    case 0xC0DB86: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:76 ASL
    case 0xC0DB88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:77 TAX
    case 0xC0DB89: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:78 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0DB8A: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0DB0F.asm:79 STA @LOCAL00
    case 0xC0DB8D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DB0F.asm:80 LDA #.LOWORD(-1)
    case 0xC0DB8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0DB0F.asm:80 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DB8F.
    case 0xC0DB91: cpu.execute_instruction<0xFF>(0xA50485, 4); return true;
    // src/unknown/C0/C0DB0F.asm:81 STA @VIRTUAL04
    case 0xC0DB92: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0DB0F.asm:82 LDA @LOCAL04
    case 0xC0DB94: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:82 LDA @LOCAL04
    // Overlapping static entry reached from 0xC0DB91.
    case 0xC0DB95: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // src/unknown/C0/C0DB0F.asm:83 STA @VIRTUAL02
    case 0xC0DB96: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DB0F.asm:83 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0DB95.
    case 0xC0DB97: cpu.execute_instruction<0x02>(0x0000BC, 2); return true;
    // src/unknown/C0/C0DB0F.asm:84 LDY ENTITY_DRAW_SORTING,X
    case 0xC0DB98: cpu.execute_instruction<0xBC>(0x00280C, 3); return true;
    // src/unknown/C0/C0DB0F.asm:85 BRA @UNKNOWN10
    case 0xC0DB9B: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C0/C0DB0F.asm:87 TYA
    case 0xC0DB9D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:88 ASL
    case 0xC0DB9E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:89 TAX
    case 0xC0DB9F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:90 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0DBA0: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0DB0F.asm:91 CMP @LOCAL00
    case 0xC0DBA3: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // src/unknown/C0/C0DB0F.asm:92 BCC @UNKNOWN9
    case 0xC0DBA5: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // src/unknown/C0/C0DB0F.asm:93 STA @LOCAL00
    case 0xC0DBA7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DB0F.asm:94 STY @LOCAL01
    case 0xC0DBA9: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0DB0F.asm:95 LDA @VIRTUAL02
    case 0xC0DBAB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0DB0F.asm:96 STA @VIRTUAL04
    case 0xC0DBAD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0DB0F.asm:98 STY @VIRTUAL02
    case 0xC0DBAF: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0DB0F.asm:99 TYA
    case 0xC0DBB1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:100 ASL
    case 0xC0DBB2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:101 TAX
    case 0xC0DBB3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:102 LDY ENTITY_DRAW_SORTING,X
    case 0xC0DBB4: cpu.execute_instruction<0xBC>(0x00280C, 3); return true;
    // src/unknown/C0/C0DB0F.asm:104 TYA
    case 0xC0DBB7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:105 INC
    case 0xC0DBB8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:106 BNE @UNKNOWN8
    case 0xC0DBB9: cpu.execute_instruction<0xD0>(0x0000E2, 2); return true;
    // src/unknown/C0/C0DB0F.asm:107 LDA @LOCAL01
    case 0xC0DBBB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0DB0F.asm:108 JSR UNKNOWN_C0A0CA
    case 0xC0DBBD: cpu.execute_instruction<0x20>(0x00A0CA, 3); return true;
    // src/unknown/C0/C0DB0F.asm:109 LDA @VIRTUAL04
    case 0xC0DBC0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0DB0F.asm:110 INC
    case 0xC0DBC2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:111 BEQ @UNKNOWN11
    case 0xC0DBC3: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0DB0F.asm:112 LDA @VIRTUAL04
    case 0xC0DBC5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0DB0F.asm:113 ASL
    case 0xC0DBC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:114 PHA
    case 0xC0DBC8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:115 LDA @LOCAL01
    case 0xC0DBC9: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0DB0F.asm:116 ASL
    case 0xC0DBCB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:117 TAX
    case 0xC0DBCC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:118 LDA ENTITY_DRAW_SORTING,X
    case 0xC0DBCD: cpu.execute_instruction<0xBD>(0x00280C, 3); return true;
    // src/unknown/C0/C0DB0F.asm:119 PLX
    case 0xC0DBD0: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:120 STA ENTITY_DRAW_SORTING,X
    case 0xC0DBD1: cpu.execute_instruction<0x9D>(0x00280C, 3); return true;
    // src/unknown/C0/C0DB0F.asm:121 BRA @UNKNOWN12
    case 0xC0DBD4: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C0DB0F.asm:123 LDA @LOCAL01
    case 0xC0DBD6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0DB0F.asm:124 ASL
    case 0xC0DBD8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:125 TAX
    case 0xC0DBD9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:126 LDA ENTITY_DRAW_SORTING,X
    case 0xC0DBDA: cpu.execute_instruction<0xBD>(0x00280C, 3); return true;
    // src/unknown/C0/C0DB0F.asm:127 STA @LOCAL04
    case 0xC0DBDD: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:129 LDA @LOCAL04
    case 0xC0DBDF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0DB0F.asm:130 INC
    case 0xC0DBE1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0DB0F.asm:131 BNE @UNKNOWN7
    case 0xC0DBE2: cpu.execute_instruction<0xD0>(0x00009E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DB0F.asm:133 END_C_FUNCTION
    case 0xC0DBE4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0DB0F.asm:133 END_C_FUNCTION
    case 0xC0DBE5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DC38.asm (unresolved).
bool execute_unresolved_c0_c0dc38_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0DC38.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0DC38: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DC38.asm:6 END_STACK_VARS
    case 0xC0DC3A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0DC38.asm:6 END_STACK_VARS
    case 0xC0DC3B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DC38.asm:6 END_STACK_VARS
    case 0xC0DC3C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DC38.asm:6 END_STACK_VARS
    case 0xC0DC3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DC38.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DC3D.
    case 0xC0DC3F: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DC38.asm:6 END_STACK_VARS
    case 0xC0DC40: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0DC38.asm:6 END_STACK_VARS
    case 0xC0DC41: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C0/C0DC38.asm:7 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC0DC42: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C0/C0DC38.asm:7 OPTIMIZED_MULT @VIRTUAL04, 6
    // Overlapping static entry reached from 0xC0DC3F.
    case 0xC0DC43: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C0/C0DC38.asm:7 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC0DC44: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C0/C0DC38.asm:7 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC0DC45: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C0/C0DC38.asm:7 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC0DC47: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DC38.asm:8 TAX
    case 0xC0DC48: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DC38.asm:9 STZ OVERWORLD_TASKS,X
    case 0xC0DC49: cpu.execute_instruction<0x9E>(0x009E3C, 3); return true;
    // src/unknown/C0/C0DC38.asm:10 PLD
    case 0xC0DC4C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0DC38.asm:11 RTL
    case 0xC0DC4D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DD0F.asm (unresolved).
bool execute_unresolved_c0_c0dd0f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0DD0F.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0DD0F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0DD0F.asm:4 BRA @UNKNOWN1
    case 0xC0DD11: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C0/C0DD0F.asm:6 JSL OAM_CLEAR
    case 0xC0DD13: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/C0/C0DD0F.asm:7 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0DD17: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/unknown/C0/C0DD0F.asm:8 JSL UPDATE_SCREEN
    case 0xC0DD1B: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/unknown/C0/C0DD0F.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0DD1F: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C0DD0F.asm:11 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC0DD23: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/unknown/C0/C0DD0F.asm:12 AND #$00FF
    case 0xC0DD26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0DD0F.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC0DD26.
    case 0xC0DD28: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0DD0F.asm:13 BNE @UNKNOWN0
    case 0xC0DD29: cpu.execute_instruction<0xD0>(0x0000E8, 2); return true;
    // src/unknown/C0/C0DD0F.asm:14 RTS
    case 0xC0DD2B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DD2C.asm (unresolved).
bool execute_unresolved_c0_c0dd2c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DD2C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0DD2C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DD2C.asm:7 END_STACK_VARS
    case 0xC0DD2E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0DD2C.asm:7 END_STACK_VARS
    case 0xC0DD2F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DD2C.asm:7 END_STACK_VARS
    case 0xC0DD30: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DD2C.asm:7 END_STACK_VARS
    case 0xC0DD31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DD2C.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DD31.
    case 0xC0DD33: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DD2C.asm:7 END_STACK_VARS
    case 0xC0DD34: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0DD2C.asm:7 END_STACK_VARS
    case 0xC0DD35: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0DD2C.asm:8 STA @LOCAL00
    case 0xC0DD36: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DD2C.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC0DD33.
    case 0xC0DD37: cpu.execute_instruction<0x0E>(0x001580, 3); return true;
    // src/unknown/C0/C0DD2C.asm:9 BRA @UNKNOWN1
    case 0xC0DD38: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C0DD2C.asm:11 JSL OAM_CLEAR
    case 0xC0DD3A: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/C0/C0DD2C.asm:12 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0DD3E: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/unknown/C0/C0DD2C.asm:13 JSL UPDATE_SCREEN
    case 0xC0DD42: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/unknown/C0/C0DD2C.asm:14 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0DD46: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C0DD2C.asm:15 LDA @LOCAL00
    case 0xC0DD4A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0DD2C.asm:16 DEC
    case 0xC0DD4C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD2C.asm:17 STA @LOCAL00
    case 0xC0DD4D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DD2C.asm:19 BNE @UNKNOWN0
    case 0xC0DD4F: cpu.execute_instruction<0xD0>(0x0000E9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DD2C.asm:20 END_C_FUNCTION
    case 0xC0DD51: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0DD2C.asm:20 END_C_FUNCTION
    case 0xC0DD52: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DD79.asm (unresolved).
bool execute_unresolved_c0_c0dd79_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DD79.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0DD79: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DD79.asm:7 END_STACK_VARS
    case 0xC0DD7B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DD79.asm:7 END_STACK_VARS
    case 0xC0DD7C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DD79.asm:7 END_STACK_VARS
    case 0xC0DD7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DD79.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DD7D.
    case 0xC0DD7F: cpu.execute_instruction<0xFF>(0x3FAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DD79.asm:7 END_STACK_VARS
    case 0xC0DD80: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:8 LDA PSI_TELEPORT_DESTINATION
    case 0xC0DD81: cpu.execute_instruction<0xAD>(0x009F3F, 3); return true;
    // src/unknown/C0/C0DD79.asm:8 LDA PSI_TELEPORT_DESTINATION
    // Overlapping static entry reached from 0xC0DD7F.
    case 0xC0DD83: cpu.execute_instruction<0x9F>(0xA00285, 4); return true;
    // src/unknown/C0/C0DD79.asm:9 STA @VIRTUAL02
    case 0xC0DD84: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DD79.asm:10 LDY #1
    case 0xC0DD86: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0DD79.asm:10 LDY #1
    // Overlapping static entry reached from 0xC0DD83.
    case 0xC0DD87: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C0DD79.asm:10 LDY #1
    // Overlapping static entry reached from 0xC0DD86.
    case 0xC0DD88: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C0DD79.asm:11 STY @LOCAL01
    case 0xC0DD89: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0DD79.asm:12 BRA @UNKNOWN1
    case 0xC0DD8B: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0DD79.asm:14 LDX #0
    case 0xC0DD8D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0DD79.asm:14 LDX #0
    // Overlapping static entry reached from 0xC0DD8D.
    case 0xC0DD8F: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C0/C0DD79.asm:15 TYA
    case 0xC0DD90: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:16 JSL SET_EVENT_FLAG
    case 0xC0DD91: cpu.execute_instruction<0x22>(0xC2165E, 4); return true;
    // src/unknown/C0/C0DD79.asm:17 LDY @LOCAL01
    case 0xC0DD95: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C0DD79.asm:18 INY
    case 0xC0DD97: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:19 STY @LOCAL01
    case 0xC0DD98: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0DD79.asm:21 CPY #10
    case 0xC0DD9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000A, 2); else cpu.execute_instruction<0xC0>(0x00000A, 3); return true;
    // src/unknown/C0/C0DD79.asm:21 CPY #10
    // Overlapping static entry reached from 0xC0DD9A.
    case 0xC0DD9C: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0DD79.asm:22 BLTEQ @UNKNOWN0
    case 0xC0DD9D: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0DD79.asm:22 BLTEQ @UNKNOWN0
    case 0xC0DD9F: cpu.execute_instruction<0xF0>(0x0000EC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0DD79.asm:23 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC0DDA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x007880, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0DD79.asm:23 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0DDA1.
    case 0xC0DDA3: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0DD79.asm:23 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC0DDA4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0DD79.asm:23 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC0DDA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0DD79.asm:23 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0DDA6.
    case 0xC0DDA8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0DD79.asm:23 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC0DDA9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DD79.asm:24 LDA @VIRTUAL02
    case 0xC0DDAB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C0/C0DD79.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC0DDAD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001F, 2); else cpu.execute_instruction<0xA0>(0x00001F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C0/C0DD79.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    // Overlapping static entry reached from 0xC0DDAD.
    case 0xC0DDAF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C0/C0DD79.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC0DDB0: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C0DD79.asm:26 STA @LOCAL01
    case 0xC0DDB4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DD79.asm:27 CLC
    case 0xC0DDB6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:28 ADC #psi_teleport_destination::dest_x
    case 0xC0DDB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/unknown/C0/C0DD79.asm:28 ADC #psi_teleport_destination::dest_x
    // Overlapping static entry reached from 0xC0DDB7.
    case 0xC0DDB9: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C0DD79.asm:29 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0DDBA: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C0DD79.asm:29 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0DDBC: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C0DD79.asm:29 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0DDBE: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C0DD79.asm:29 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0DDC0: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C0/C0DD79.asm:30 CLC
    case 0xC0DDC2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:31 ADC @VIRTUAL0A
    case 0xC0DDC3: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C0DD79.asm:32 STA @VIRTUAL0A
    case 0xC0DDC5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0DD79.asm:33 LDA [@VIRTUAL0A]
    case 0xC0DDC7: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C0DD79.asm:34 TAX
    case 0xC0DDC9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:35 STX CURRENT_TELEPORT_DESTINATION_X
    case 0xC0DDCA: cpu.execute_instruction<0x8E>(0x00438A, 3); return true;
    // src/unknown/C0/C0DD79.asm:36 LDA @LOCAL01
    case 0xC0DDCD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0DD79.asm:37 CLC
    case 0xC0DDCF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:38 ADC #psi_teleport_destination::dest_y
    case 0xC0DDD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001D, 2); else cpu.execute_instruction<0x69>(0x00001D, 3); return true;
    // src/unknown/C0/C0DD79.asm:38 ADC #psi_teleport_destination::dest_y
    // Overlapping static entry reached from 0xC0DDD0.
    case 0xC0DDD2: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0DD79.asm:39 CLC
    case 0xC0DDD3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:40 ADC @VIRTUAL06
    case 0xC0DDD4: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0DD79.asm:41 STA @VIRTUAL06
    case 0xC0DDD6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0DD79.asm:42 LDA [@VIRTUAL06]
    case 0xC0DDD8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C0DD79.asm:43 STA @LOCAL01
    case 0xC0DDDA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DD79.asm:44 STA CURRENT_TELEPORT_DESTINATION_Y
    case 0xC0DDDC: cpu.execute_instruction<0x8D>(0x00438C, 3); return true;
    // src/unknown/C0/C0DD79.asm:45 TXA
    case 0xC0DDDF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:46 ASL
    case 0xC0DDE0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:47 ASL
    case 0xC0DDE1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:48 ASL
    case 0xC0DDE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:49 STA @VIRTUAL02
    case 0xC0DDE3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DD79.asm:50 LDA @LOCAL01
    case 0xC0DDE5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0DD79.asm:51 ASL
    case 0xC0DDE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:52 ASL
    case 0xC0DDE8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:53 ASL
    case 0xC0DDE9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:54 STA @LOCAL00
    case 0xC0DDEA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DD79.asm:55 LDA PSI_TELEPORT_STYLE
    case 0xC0DDEC: cpu.execute_instruction<0xAD>(0x009F41, 3); return true;
    // src/unknown/C0/C0DD79.asm:56 CMP #TELEPORT_STYLE::INSTANT
    case 0xC0DDEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0DD79.asm:56 CMP #TELEPORT_STYLE::INSTANT
    // Overlapping static entry reached from 0xC0DDEF.
    case 0xC0DDF1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DD79.asm:57 BEQ @UNKNOWN2
    case 0xC0DDF2: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0DD79.asm:58 LDA @VIRTUAL02
    case 0xC0DDF4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0DD79.asm:59 CLC
    case 0xC0DDF6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:60 ADC #316
    case 0xC0DDF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x00013C, 3); return true;
    // src/unknown/C0/C0DD79.asm:60 ADC #316
    // Overlapping static entry reached from 0xC0DDF7.
    case 0xC0DDF9: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/unknown/C0/C0DD79.asm:61 STA @VIRTUAL02
    case 0xC0DDFA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DD79.asm:61 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0DDF9.
    case 0xC0DDFB: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C0/C0DD79.asm:63 LDA #.LOWORD(-1)
    case 0xC0DDFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0DD79.asm:63 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DDFC.
    case 0xC0DDFE: cpu.execute_instruction<0xFF>(0x5DD48D, 4); return true;
    // src/unknown/C0/C0DD79.asm:64 STA CURRENT_MAP_MUSIC_TRACK
    case 0xC0DDFF: cpu.execute_instruction<0x8D>(0x005DD4, 3); return true;
    // src/unknown/C0/C0DD79.asm:65 STA LOADED_MAP_PALETTE
    case 0xC0DE02: cpu.execute_instruction<0x8D>(0x004370, 3); return true;
    // src/unknown/C0/C0DD79.asm:66 STA LOADED_MAP_TILE_COMBO
    case 0xC0DE05: cpu.execute_instruction<0x8D>(0x00436E, 3); return true;
    // src/unknown/C0/C0DD79.asm:67 LDY #6
    case 0xC0DE08: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C0/C0DD79.asm:67 LDY #6
    // Overlapping static entry reached from 0xC0DE08.
    case 0xC0DE0A: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0DD79.asm:68 LDA @LOCAL00
    case 0xC0DE0B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0DD79.asm:69 TAX
    case 0xC0DE0D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DD79.asm:70 LDA @VIRTUAL02
    case 0xC0DE0E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0DD79.asm:71 JSL INITIALIZE_MAP
    case 0xC0DE10: cpu.execute_instruction<0x22>(0xC019B2, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DD79.asm:72 END_C_FUNCTION
    case 0xC0DE14: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0DD79.asm:72 END_C_FUNCTION
    case 0xC0DE15: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DE16.asm (unresolved).
bool execute_unresolved_c0_c0de16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DE16.asm:3 BEGIN_C_FUNCTION
    case 0xC0DE16: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DE16.asm:6 END_STACK_VARS
    case 0xC0DE18: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DE16.asm:6 END_STACK_VARS
    case 0xC0DE19: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DE16.asm:6 END_STACK_VARS
    case 0xC0DE1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DE16.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DE1A.
    case 0xC0DE1C: cpu.execute_instruction<0xFF>(0x18A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DE16.asm:6 END_STACK_VARS
    case 0xC0DE1D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:7 LDY #24
    case 0xC0DE1E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x000018, 3); return true;
    // src/unknown/C0/C0DE16.asm:7 LDY #24
    // Overlapping static entry reached from 0xC0DE1E.
    case 0xC0DE20: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0DE16.asm:8 BRA @UNKNOWN1
    case 0xC0DE21: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C0/C0DE16.asm:10 TYA
    case 0xC0DE23: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:11 ASL
    case 0xC0DE24: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:12 STA @LOCAL00
    case 0xC0DE25: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DE16.asm:13 TAX
    case 0xC0DE27: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:14 LDA #8
    case 0xC0DE28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C0DE16.asm:14 LDA #8
    // Overlapping static entry reached from 0xC0DE28.
    case 0xC0DE2A: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0DE16.asm:15 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC0DE2B: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/C0/C0DE16.asm:16 LDA @LOCAL00
    case 0xC0DE2E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0DE16.asm:17 CLC
    case 0xC0DE30: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:18 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC0DE31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x001002, 3); return true;
    // src/unknown/C0/C0DE16.asm:18 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC0DE31.
    case 0xC0DE33: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0DE16.asm:19 TAX
    case 0xC0DE34: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:20 LDA __BSS_START__,X
    case 0xC0DE35: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0DE16.asm:21 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN11
    case 0xC0DE38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x000800, 3); return true;
    // src/unknown/C0/C0DE16.asm:21 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN11
    // Overlapping static entry reached from 0xC0DE38.
    case 0xC0DE3A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:22 STA __BSS_START__,X
    case 0xC0DE3B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0DE16.asm:23 INY
    case 0xC0DE3E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0DE16.asm:25 CPY #MAX_ENTITIES
    case 0xC0DE3F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001E, 2); else cpu.execute_instruction<0xC0>(0x00001E, 3); return true;
    // src/unknown/C0/C0DE16.asm:25 CPY #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0DE3F.
    case 0xC0DE41: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0DE16.asm:26 BCC @UNKNOWN0
    case 0xC0DE42: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DE16.asm:27 END_C_FUNCTION
    case 0xC0DE44: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0DE16.asm:27 END_C_FUNCTION
    case 0xC0DE45: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DE46.asm (unresolved).
bool execute_unresolved_c0_c0de46_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0DE46.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0DE46: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0DE46.asm:4 JSR UNKNOWN_C0DE16
    case 0xC0DE48: cpu.execute_instruction<0x20>(0x00DE16, 3); return true;
    // src/unknown/C0/C0DE46.asm:5 JSL RAND
    case 0xC0DE4B: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C0/C0DE46.asm:6 XBA
    case 0xC0DE4F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0DE46.asm:7 AND #$FF00
    case 0xC0DE50: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0DE46.asm:7 AND #$FF00
    // Overlapping static entry reached from 0xC0DE50.
    case 0xC0DE52: cpu.execute_instruction<0xFF>(0x9F618D, 4); return true;
    // src/unknown/C0/C0DE46.asm:8 STA PSI_TELEPORT_BETA_ANGLE
    case 0xC0DE53: cpu.execute_instruction<0x8D>(0x009F61, 3); return true;
    // src/unknown/C0/C0DE46.asm:9 LDA PSI_TELEPORT_STYLE
    case 0xC0DE56: cpu.execute_instruction<0xAD>(0x009F41, 3); return true;
    // src/unknown/C0/C0DE46.asm:10 CMP #TELEPORT_STYLE::PSI_BETA
    case 0xC0DE59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0DE46.asm:10 CMP #TELEPORT_STYLE::PSI_BETA
    // Overlapping static entry reached from 0xC0DE59.
    case 0xC0DE5B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0DE46.asm:11 BNE @UNKNOWN0
    case 0xC0DE5C: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C0DE46.asm:12 LDA #$0004
    case 0xC0DE5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C0DE46.asm:12 LDA #$0004
    // Overlapping static entry reached from 0xC0DE5E.
    case 0xC0DE60: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0DE46.asm:13 STA PSI_TELEPORT_BETA_PROGRESS
    case 0xC0DE61: cpu.execute_instruction<0x8D>(0x009F63, 3); return true;
    // src/unknown/C0/C0DE46.asm:14 BRA @UNKNOWN1
    case 0xC0DE64: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C0DE46.asm:16 LDA #$0008
    case 0xC0DE66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C0DE46.asm:16 LDA #$0008
    // Overlapping static entry reached from 0xC0DE66.
    case 0xC0DE68: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0DE46.asm:17 STA PSI_TELEPORT_BETA_PROGRESS
    case 0xC0DE69: cpu.execute_instruction<0x8D>(0x009F63, 3); return true;
    // src/unknown/C0/C0DE46.asm:18 STZ PSI_TELEPORT_BETTER_PROGRESS
    case 0xC0DE6C: cpu.execute_instruction<0x9C>(0x009F65, 3); return true;
    // src/unknown/C0/C0DE46.asm:20 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0DE6F: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0DE46.asm:21 STA PSI_TELEPORT_BETA_X_ADJUSTMENT
    case 0xC0DE72: cpu.execute_instruction<0x8D>(0x009F67, 3); return true;
    // src/unknown/C0/C0DE46.asm:22 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0DE75: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C0DE46.asm:23 STA PSI_TELEPORT_BETA_Y_ADJUSTMENT
    case 0xC0DE78: cpu.execute_instruction<0x8D>(0x009F69, 3); return true;
    // src/unknown/C0/C0DE46.asm:24 RTS
    case 0xC0DE7B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DE7C.asm (unresolved).
bool execute_unresolved_c0_c0de7c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DE7C.asm:3 BEGIN_C_FUNCTION
    case 0xC0DE7C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DE7C.asm:6 END_STACK_VARS
    case 0xC0DE7E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DE7C.asm:6 END_STACK_VARS
    case 0xC0DE7F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DE7C.asm:6 END_STACK_VARS
    case 0xC0DE80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DE7C.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DE80.
    case 0xC0DE82: cpu.execute_instruction<0xFF>(0xCEA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DE7C.asm:6 END_STACK_VARS
    case 0xC0DE83: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:7 LDA #.LOWORD(PARTY_CHARACTERS)
    case 0xC0DE84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0099CE, 3); return true;
    // src/unknown/C0/C0DE7C.asm:7 LDA #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC0DE84.
    case 0xC0DE86: cpu.execute_instruction<0x99>(0x00C68D, 3); return true;
    // src/unknown/C0/C0DE7C.asm:8 STA CURRENT_PARTY_MEMBER_TICK
    case 0xC0DE87: cpu.execute_instruction<0x8D>(0x004DC6, 3); return true;
    // src/unknown/C0/C0DE7C.asm:8 STA CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC0DE86.
    case 0xC0DE89: cpu.execute_instruction<0x4D>(0x0018A0, 3); return true;
    // src/unknown/C0/C0DE7C.asm:9 LDY #24
    case 0xC0DE8A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x000018, 3); return true;
    // src/unknown/C0/C0DE7C.asm:9 LDY #24
    // Overlapping static entry reached from 0xC0DE8A.
    case 0xC0DE8C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0DE7C.asm:10 BRA @UNKNOWN1
    case 0xC0DE8D: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/unknown/C0/C0DE7C.asm:12 TYA
    case 0xC0DE8F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:13 ASL
    case 0xC0DE90: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:14 STA @LOCAL00
    case 0xC0DE91: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0DE7C.asm:15 TAX
    case 0xC0DE93: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:16 LDA #8
    case 0xC0DE94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C0DE7C.asm:16 LDA #8
    // Overlapping static entry reached from 0xC0DE94.
    case 0xC0DE96: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0DE7C.asm:17 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC0DE97: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/C0/C0DE7C.asm:18 LDA @LOCAL00
    case 0xC0DE9A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0DE7C.asm:19 CLC
    case 0xC0DE9C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:20 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC0DE9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x001002, 3); return true;
    // src/unknown/C0/C0DE7C.asm:20 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC0DE9D.
    case 0xC0DE9F: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0DE7C.asm:21 TAX
    case 0xC0DEA0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:22 LDA __BSS_START__,X
    case 0xC0DEA1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0DE7C.asm:23 AND #$FFFF ^ SPRITE_TABLE_10_FLAGS::UNKNOWN11
    case 0xC0DEA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00F7FF, 3); return true;
    // src/unknown/C0/C0DE7C.asm:23 AND #$FFFF ^ SPRITE_TABLE_10_FLAGS::UNKNOWN11
    // Overlapping static entry reached from 0xC0DEA4.
    case 0xC0DEA6: cpu.execute_instruction<0xF7>(0x00009D, 2); return true;
    // src/unknown/C0/C0DE7C.asm:24 STA __BSS_START__,X
    case 0xC0DEA7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0DE7C.asm:24 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0DEA6.
    case 0xC0DEA8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0DE7C.asm:25 LDA @LOCAL00
    case 0xC0DEAA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0DE7C.asm:26 CLC
    case 0xC0DEAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:27 ADC #.LOWORD(ENTITY_COLLIDED_OBJECTS)
    case 0xC0DEAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009E, 2); else cpu.execute_instruction<0x69>(0x00289E, 3); return true;
    // src/unknown/C0/C0DE7C.asm:27 ADC #.LOWORD(ENTITY_COLLIDED_OBJECTS)
    // Overlapping static entry reached from 0xC0DEAD.
    case 0xC0DEAF: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:28 TAX
    case 0xC0DEB0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:29 LDA __BSS_START__,X
    case 0xC0DEB1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0DE7C.asm:30 AND #$7FFF
    case 0xC0DEB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C0DE7C.asm:30 AND #$7FFF
    // Overlapping static entry reached from 0xC0DEB4.
    case 0xC0DEB6: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/unknown/C0/C0DE7C.asm:31 STA __BSS_START__,X
    case 0xC0DEB7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0DE7C.asm:32 LDA #.LOWORD(-1)
    case 0xC0DEBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0DE7C.asm:32 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DEBA.
    case 0xC0DEBC: cpu.execute_instruction<0xFF>(0x4DC6AE, 4); return true;
    // src/unknown/C0/C0DE7C.asm:33 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC0DEBD: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/unknown/C0/C0DE7C.asm:34 STA a:char_struct::unknown55,X
    case 0xC0DEC0: cpu.execute_instruction<0x9D>(0x000037, 3); return true;
    // src/unknown/C0/C0DE7C.asm:35 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC0DEC3: cpu.execute_instruction<0xAD>(0x004DC6, 3); return true;
    // src/unknown/C0/C0DE7C.asm:36 CLC
    case 0xC0DEC6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:37 ADC #.SIZEOF(char_struct)
    case 0xC0DEC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005F, 2); else cpu.execute_instruction<0x69>(0x00005F, 3); return true;
    // src/unknown/C0/C0DE7C.asm:37 ADC #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC0DEC7.
    case 0xC0DEC9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0DE7C.asm:38 STA CURRENT_PARTY_MEMBER_TICK
    case 0xC0DECA: cpu.execute_instruction<0x8D>(0x004DC6, 3); return true;
    // src/unknown/C0/C0DE7C.asm:39 INY
    case 0xC0DECD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0DE7C.asm:41 CPY #MAX_ENTITIES
    case 0xC0DECE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001E, 2); else cpu.execute_instruction<0xC0>(0x00001E, 3); return true;
    // src/unknown/C0/C0DE7C.asm:41 CPY #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0DECE.
    case 0xC0DED0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0DE7C.asm:42 BCC @UNKNOWN0
    case 0xC0DED1: cpu.execute_instruction<0x90>(0x0000BC, 2); return true;
    // src/unknown/C0/C0DE7C.asm:43 JSL CHANGE_MUSIC_5DD6
    case 0xC0DED3: cpu.execute_instruction<0x22>(0xC069ED, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DE7C.asm:44 END_C_FUNCTION
    case 0xC0DED7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0DE7C.asm:44 END_C_FUNCTION
    case 0xC0DED8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DED9.asm (unresolved).
bool execute_unresolved_c0_c0ded9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DED9.asm:3 BEGIN_C_FUNCTION
    case 0xC0DED9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DED9.asm:13 END_STACK_VARS
    case 0xC0DEDB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0DED9.asm:13 END_STACK_VARS
    case 0xC0DEDC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DED9.asm:13 END_STACK_VARS
    case 0xC0DEDD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DED9.asm:13 END_STACK_VARS
    case 0xC0DEDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DED9.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DEDE.
    case 0xC0DEE0: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DED9.asm:13 END_STACK_VARS
    case 0xC0DEE1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0DED9.asm:13 END_STACK_VARS
    case 0xC0DEE2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0DED9.asm:14 STY @LOCAL02
    case 0xC0DEE3: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C0DED9.asm:14 STY @LOCAL02
    // Overlapping static entry reached from 0xC0DEE0.
    case 0xC0DEE4: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/unknown/C0/C0DED9.asm:15 STX @VIRTUAL04
    case 0xC0DEE5: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C0DED9.asm:15 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC0DEE4.
    case 0xC0DEE6: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C0/C0DED9.asm:16 STA @LOCAL01
    case 0xC0DEE7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DED9.asm:16 STA @LOCAL01
    // Overlapping static entry reached from 0xC0DEE6.
    case 0xC0DEE8: cpu.execute_instruction<0x10>(0x0000A6, 2); return true;
    // src/unknown/C0/C0DED9.asm:17 LDX @PARAM03
    case 0xC0DEE9: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0DED9.asm:17 LDX @PARAM03
    // Overlapping static entry reached from 0xC0DEE8.
    case 0xC0DEEA: cpu.execute_instruction<0x22>(0xAD0E86, 4); return true;
    // src/unknown/C0/C0DED9.asm:18 STX @LOCAL00
    case 0xC0DEEB: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0DED9.asm:19 LDA PSI_TELEPORT_STATE
    case 0xC0DEED: cpu.execute_instruction<0xAD>(0x009F43, 3); return true;
    // src/unknown/C0/C0DED9.asm:19 LDA PSI_TELEPORT_STATE
    // Overlapping static entry reached from 0xC0DEEA.
    case 0xC0DEEE: cpu.execute_instruction<0x43>(0x00009F, 2); return true;
    // src/unknown/C0/C0DED9.asm:20 BEQ @UNKNOWN0
    case 0xC0DEF0: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0DED9.asm:21 LDA #0
    case 0xC0DEF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0DED9.asm:21 LDA #0
    // Overlapping static entry reached from 0xC0DEF2.
    case 0xC0DEF4: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0DED9.asm:22 BRA @UNKNOWN1
    case 0xC0DEF5: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C0DED9.asm:24 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC0DEF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009889, 3); return true;
    // src/unknown/C0/C0DED9.asm:24 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC0DEF7.
    case 0xC0DEF9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0DED9.asm:25 STA @VIRTUAL02
    case 0xC0DEFA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DED9.asm:26 LDX @VIRTUAL02
    case 0xC0DEFC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0DED9.asm:27 LDA __BSS_START__,X
    case 0xC0DEFE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0DED9.asm:28 TAY
    case 0xC0DF01: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0DED9.asm:29 LDX @VIRTUAL04
    case 0xC0DF02: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0DED9.asm:30 LDA @LOCAL01
    case 0xC0DF04: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0DED9.asm:31 JSL UNKNOWN_C05F33
    case 0xC0DF06: cpu.execute_instruction<0x22>(0xC05F33, 4); return true;
    // src/unknown/C0/C0DED9.asm:32 STA @VIRTUAL04
    case 0xC0DF0A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0DED9.asm:33 LDX @VIRTUAL02
    case 0xC0DF0C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0DED9.asm:34 LDA __BSS_START__,X
    case 0xC0DF0E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0DED9.asm:35 TAY
    case 0xC0DF11: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0DED9.asm:36 LDX @LOCAL00
    case 0xC0DF12: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0DED9.asm:37 LDA @LOCAL02
    case 0xC0DF14: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0DED9.asm:38 JSL UNKNOWN_C05F33
    case 0xC0DF16: cpu.execute_instruction<0x22>(0xC05F33, 4); return true;
    // src/unknown/C0/C0DED9.asm:39 STA @VIRTUAL02
    case 0xC0DF1A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0DED9.asm:40 LDA @VIRTUAL04
    case 0xC0DF1C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0DED9.asm:41 ORA @VIRTUAL02
    case 0xC0DF1E: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DED9.asm:43 END_C_FUNCTION
    case 0xC0DF20: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0DED9.asm:43 END_C_FUNCTION
    case 0xC0DF21: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0DF22.asm (unresolved).
bool execute_unresolved_c0_c0df22_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0DF22.asm:3 BEGIN_C_FUNCTION
    case 0xC0DF22: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0DF22.asm:8 END_STACK_VARS
    case 0xC0DF24: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0DF22.asm:8 END_STACK_VARS
    case 0xC0DF25: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0DF22.asm:8 END_STACK_VARS
    case 0xC0DF26: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DF22.asm:8 END_STACK_VARS
    case 0xC0DF27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0DF22.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DF27.
    case 0xC0DF29: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0DF22.asm:8 END_STACK_VARS
    case 0xC0DF2A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0DF22.asm:8 END_STACK_VARS
    case 0xC0DF2B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:9 STA @LOCAL01
    case 0xC0DF2C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0DF22.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC0DF29.
    case 0xC0DF2D: cpu.execute_instruction<0x12>(0x0000AD, 2); return true;
    // src/unknown/C0/C0DF22.asm:10 LDA PSI_TELEPORT_STATE
    case 0xC0DF2E: cpu.execute_instruction<0xAD>(0x009F43, 3); return true;
    // src/unknown/C0/C0DF22.asm:10 LDA PSI_TELEPORT_STATE
    // Overlapping static entry reached from 0xC0DF2D.
    case 0xC0DF2F: cpu.execute_instruction<0x43>(0x00009F, 2); return true;
    // src/unknown/C0/C0DF22.asm:11 CMP #1
    case 0xC0DF31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0DF22.asm:11 CMP #1
    // Overlapping static entry reached from 0xC0DF31.
    case 0xC0DF33: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DF22.asm:12 BEQ @UNKNOWN0
    case 0xC0DF34: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:13 CMP #3
    case 0xC0DF36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0DF22.asm:13 CMP #3
    // Overlapping static entry reached from 0xC0DF36.
    case 0xC0DF38: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DF22.asm:14 BEQ @UNKNOWN4
    case 0xC0DF39: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/unknown/C0/C0DF22.asm:15 JMP @UNKNOWN8
    case 0xC0DF3B: cpu.execute_instruction<0x4C>(0x00DFD0, 3); return true;
    // src/unknown/C0/C0DF22.asm:17 LDA GAME_STATE + game_state::unknown92
    case 0xC0DF3E: cpu.execute_instruction<0xAD>(0x009887, 3); return true;
    // src/unknown/C0/C0DF22.asm:18 CMP #3
    case 0xC0DF41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0DF22.asm:18 CMP #3
    // Overlapping static entry reached from 0xC0DF41.
    case 0xC0DF43: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0DF22.asm:19 BNE @UNKNOWN2
    case 0xC0DF44: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:20 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF46: cpu.execute_instruction<0xAD>(0x009F45, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:20 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF49: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:20 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF4B: cpu.execute_instruction<0xAD>(0x009F47, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:20 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF4E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:21 CLC
    case 0xC0DF50: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:22 LDA @VIRTUAL06
    case 0xC0DF51: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:23 ADC #$051E
    case 0xC0DF53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00051E, 3); return true;
    // src/unknown/C0/C0DF22.asm:23 ADC #$051E
    // Overlapping static entry reached from 0xC0DF53.
    case 0xC0DF55: cpu.execute_instruction<0x05>(0x000085, 2); return true;
    // src/unknown/C0/C0DF22.asm:24 STA @VIRTUAL06
    case 0xC0DF56: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:24 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC0DF55.
    case 0xC0DF57: cpu.execute_instruction<0x06>(0x000090, 2); return true;
    // src/unknown/C0/C0DF22.asm:25 BCC @UNKNOWN1
    case 0xC0DF58: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C0/C0DF22.asm:25 BCC @UNKNOWN1
    // Overlapping static entry reached from 0xC0DF57.
    case 0xC0DF59: cpu.execute_instruction<0x02>(0x0000E6, 2); return true;
    // src/unknown/C0/C0DF22.asm:26 INC @VIRTUAL06+2
    case 0xC0DF5A: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF5C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF5E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF60: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF62: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DF22.asm:29 JMP @UNKNOWN12
    case 0xC0DF64: cpu.execute_instruction<0x4C>(0x00E016, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:31 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF67: cpu.execute_instruction<0xAD>(0x009F45, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:31 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF6A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:31 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF6C: cpu.execute_instruction<0xAD>(0x009F47, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:31 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF6F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:32 CLC
    case 0xC0DF71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:33 LDA @VIRTUAL06
    case 0xC0DF72: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:34 ADC #$3333
    case 0xC0DF74: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000033, 2); else cpu.execute_instruction<0x69>(0x003333, 3); return true;
    // src/unknown/C0/C0DF22.asm:34 ADC #$3333
    // Overlapping static entry reached from 0xC0DF74.
    case 0xC0DF76: cpu.execute_instruction<0x33>(0x000085, 2); return true;
    // src/unknown/C0/C0DF22.asm:35 STA @VIRTUAL06
    case 0xC0DF77: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:35 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC0DF76.
    case 0xC0DF78: cpu.execute_instruction<0x06>(0x000090, 2); return true;
    // src/unknown/C0/C0DF22.asm:36 BCC @UNKNOWN3
    case 0xC0DF79: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C0/C0DF22.asm:36 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC0DF78.
    case 0xC0DF7A: cpu.execute_instruction<0x02>(0x0000E6, 2); return true;
    // src/unknown/C0/C0DF22.asm:37 INC @VIRTUAL06+2
    case 0xC0DF7B: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF7D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF7F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF81: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:39 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DF83: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DF22.asm:40 JMP @UNKNOWN12
    case 0xC0DF85: cpu.execute_instruction<0x4C>(0x00E016, 3); return true;
    // src/unknown/C0/C0DF22.asm:42 LDA GAME_STATE + game_state::unknown92
    case 0xC0DF88: cpu.execute_instruction<0xAD>(0x009887, 3); return true;
    // src/unknown/C0/C0DF22.asm:43 CMP #3
    case 0xC0DF8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0DF22.asm:43 CMP #3
    // Overlapping static entry reached from 0xC0DF8B.
    case 0xC0DF8D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0DF22.asm:44 BNE @UNKNOWN6
    case 0xC0DF8E: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:45 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF90: cpu.execute_instruction<0xAD>(0x009F45, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:45 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF93: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:45 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF95: cpu.execute_instruction<0xAD>(0x009F47, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:45 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DF98: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:46 SEC
    case 0xC0DF9A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:47 LDA @VIRTUAL06
    case 0xC0DF9B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:48 SBC #$1999
    case 0xC0DF9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000099, 2); else cpu.execute_instruction<0xE9>(0x001999, 3); return true;
    // src/unknown/C0/C0DF22.asm:48 SBC #$1999
    // Overlapping static entry reached from 0xC0DF9D.
    case 0xC0DF9F: cpu.execute_instruction<0x19>(0x000685, 3); return true;
    // src/unknown/C0/C0DF22.asm:49 STA @VIRTUAL06
    case 0xC0DFA0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:50 BCS @UNKNOWN5
    case 0xC0DFA2: cpu.execute_instruction<0xB0>(0x000002, 2); return true;
    // src/unknown/C0/C0DF22.asm:51 DEC @VIRTUAL06+2
    case 0xC0DFA4: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFA6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFA8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFAA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFAC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DF22.asm:54 BRA @UNKNOWN12
    case 0xC0DFAE: cpu.execute_instruction<0x80>(0x000066, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:56 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFB0: cpu.execute_instruction<0xAD>(0x009F45, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:56 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFB3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:56 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFB5: cpu.execute_instruction<0xAD>(0x009F47, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:56 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFB8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:57 SEC
    case 0xC0DFBA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:58 LDA @VIRTUAL06
    case 0xC0DFBB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:59 SBC #$1999
    case 0xC0DFBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000099, 2); else cpu.execute_instruction<0xE9>(0x001999, 3); return true;
    // src/unknown/C0/C0DF22.asm:59 SBC #$1999
    // Overlapping static entry reached from 0xC0DFBD.
    case 0xC0DFBF: cpu.execute_instruction<0x19>(0x000685, 3); return true;
    // src/unknown/C0/C0DF22.asm:60 STA @VIRTUAL06
    case 0xC0DFC0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:61 BCS @UNKNOWN7
    case 0xC0DFC2: cpu.execute_instruction<0xB0>(0x000002, 2); return true;
    // src/unknown/C0/C0DF22.asm:62 DEC @VIRTUAL06+2
    case 0xC0DFC4: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFC6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFC8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFCA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFCC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DF22.asm:65 BRA @UNKNOWN12
    case 0xC0DFCE: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C0/C0DF22.asm:67 LDA GAME_STATE + game_state::unknown92
    case 0xC0DFD0: cpu.execute_instruction<0xAD>(0x009887, 3); return true;
    // src/unknown/C0/C0DF22.asm:68 CMP #3
    case 0xC0DFD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0DF22.asm:68 CMP #3
    // Overlapping static entry reached from 0xC0DFD3.
    case 0xC0DFD5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0DF22.asm:69 BNE @UNKNOWN10
    case 0xC0DFD6: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:70 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFD8: cpu.execute_instruction<0xAD>(0x009F45, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:70 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFDB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:70 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFDD: cpu.execute_instruction<0xAD>(0x009F47, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:70 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFE0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:71 CLC
    case 0xC0DFE2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:72 LDA @VIRTUAL06
    case 0xC0DFE3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:73 ADC #$29FB
    case 0xC0DFE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FB, 2); else cpu.execute_instruction<0x69>(0x0029FB, 3); return true;
    // src/unknown/C0/C0DF22.asm:73 ADC #$29FB
    // Overlapping static entry reached from 0xC0DFE5.
    case 0xC0DFE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000085, 2); else cpu.execute_instruction<0x29>(0x000685, 3); return true;
    // src/unknown/C0/C0DF22.asm:74 STA @VIRTUAL06
    case 0xC0DFE8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:74 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC0DFE7.
    case 0xC0DFE9: cpu.execute_instruction<0x06>(0x000090, 2); return true;
    // src/unknown/C0/C0DF22.asm:75 BCC @UNKNOWN9
    case 0xC0DFEA: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C0/C0DF22.asm:75 BCC @UNKNOWN9
    // Overlapping static entry reached from 0xC0DFE9.
    case 0xC0DFEB: cpu.execute_instruction<0x02>(0x0000E6, 2); return true;
    // src/unknown/C0/C0DF22.asm:76 INC @VIRTUAL06+2
    case 0xC0DFEC: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFEE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFF0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFF2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0DFF4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0DF22.asm:79 BRA @UNKNOWN12
    case 0xC0DFF6: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:81 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFF8: cpu.execute_instruction<0xAD>(0x009F45, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:81 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFFB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:81 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0DFFD: cpu.execute_instruction<0xAD>(0x009F47, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:81 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0E000: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:82 CLC
    case 0xC0E002: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:83 LDA @VIRTUAL06
    case 0xC0E003: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:84 ADC #$1851
    case 0xC0E005: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000051, 2); else cpu.execute_instruction<0x69>(0x001851, 3); return true;
    // src/unknown/C0/C0DF22.asm:84 ADC #$1851
    // Overlapping static entry reached from 0xC0E005.
    case 0xC0E007: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0DF22.asm:85 STA @VIRTUAL06
    case 0xC0E008: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0DF22.asm:86 BCC @UNKNOWN11
    case 0xC0E00A: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C0/C0DF22.asm:87 INC @VIRTUAL06+2
    case 0xC0E00C: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0E00E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0E010: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0E012: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0E014: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E016: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E018: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E01A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:91 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E01C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:92 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED
    case 0xC0E01E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:92 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED
    case 0xC0E020: cpu.execute_instruction<0x8D>(0x009F45, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:92 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED
    case 0xC0E023: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:92 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED
    case 0xC0E025: cpu.execute_instruction<0x8D>(0x009F47, 3); return true;
    // src/unknown/C0/C0DF22.asm:93 LDA @LOCAL01
    case 0xC0E028: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0DF22.asm:94 AND #$0001
    case 0xC0E02A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0DF22.asm:94 AND #$0001
    // Overlapping static entry reached from 0xC0E02A.
    case 0xC0E02C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DF22.asm:95 BEQ @UNKNOWN15
    case 0xC0E02D: cpu.execute_instruction<0xF0>(0x000050, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:96 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E02F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:96 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E031: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:96 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E033: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:96 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E035: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E037: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E039: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E03B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E03D: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E03F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E041: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E043: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E045: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0DF22.asm:97 ASR8_INT @VIRTUAL06
    case 0xC0E047: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:98 MOVE_INT_CONSTANT $B505, @VIRTUAL0A
    case 0xC0E049: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x00B505, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:98 MOVE_INT_CONSTANT $B505, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E049.
    case 0xC0E04B: cpu.execute_instruction<0xB5>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:98 MOVE_INT_CONSTANT $B505, @VIRTUAL0A
    case 0xC0E04C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:98 MOVE_INT_CONSTANT $B505, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E04B.
    case 0xC0E04D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:98 MOVE_INT_CONSTANT $B505, @VIRTUAL0A
    case 0xC0E04E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:98 MOVE_INT_CONSTANT $B505, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E04E.
    case 0xC0E050: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:98 MOVE_INT_CONSTANT $B505, @VIRTUAL0A
    case 0xC0E051: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C0DF22.asm:99 JSL MULT32
    case 0xC0E053: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:931 LDA addr+1
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E057: cpu.execute_instruction<0xA5>(0x000007, 2); return true;
    // include/macros.asm:932 STA addr
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E059: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:933 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E05B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:843 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E05D: cpu.execute_instruction<0xA5>(0x000009, 2); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E05F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E061: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:935 BPL :+
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E063: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:936 DEC addr + 3
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E065: cpu.execute_instruction<0xC6>(0x000009, 2); return true;
    // include/macros.asm:938 REP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0DF22.asm:100 ASR8_INT @VIRTUAL06
    case 0xC0E067: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:101 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E069: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:101 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E06B: cpu.execute_instruction<0x8D>(0x009F49, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:101 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E06E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:101 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E070: cpu.execute_instruction<0x8D>(0x009F4B, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:102 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E073: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:102 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E075: cpu.execute_instruction<0x8D>(0x009F4D, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:102 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E078: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:102 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E07A: cpu.execute_instruction<0x8D>(0x009F4F, 3); return true;
    // src/unknown/C0/C0DF22.asm:103 BRA @UNKNOWN16
    case 0xC0E07D: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:105 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E07F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:105 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E081: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:105 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E083: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:105 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC0E085: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:106 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E087: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:106 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E089: cpu.execute_instruction<0x8D>(0x009F4D, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:106 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E08C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:106 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E08E: cpu.execute_instruction<0x8D>(0x009F4F, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:107 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E091: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:107 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E093: cpu.execute_instruction<0x8D>(0x009F49, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:107 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E096: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:107 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E098: cpu.execute_instruction<0x8D>(0x009F4B, 3); return true;
    // src/unknown/C0/C0DF22.asm:109 LDA @LOCAL01
    case 0xC0E09B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0DF22.asm:110 BEQ @UNKNOWN19
    case 0xC0E09D: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C0/C0DF22.asm:111 CMP #4
    case 0xC0E09F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0DF22.asm:111 CMP #4
    // Overlapping static entry reached from 0xC0E09F.
    case 0xC0E0A1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DF22.asm:112 BEQ @UNKNOWN20
    case 0xC0E0A2: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/unknown/C0/C0DF22.asm:113 CMP #6
    case 0xC0E0A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C0DF22.asm:113 CMP #6
    // Overlapping static entry reached from 0xC0E0A4.
    case 0xC0E0A6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DF22.asm:114 BEQ @UNKNOWN21
    case 0xC0E0A7: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C0/C0DF22.asm:115 CMP #2
    case 0xC0E0A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0DF22.asm:115 CMP #2
    // Overlapping static entry reached from 0xC0E0A9.
    case 0xC0E0AB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DF22.asm:116 BEQ @UNKNOWN22
    case 0xC0E0AC: cpu.execute_instruction<0xF0>(0x00006D, 2); return true;
    // src/unknown/C0/C0DF22.asm:117 CMP #1
    case 0xC0E0AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0DF22.asm:117 CMP #1
    // Overlapping static entry reached from 0xC0E0AE.
    case 0xC0E0B0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0DF22.asm:118 BEQ @UNKNOWN23
    case 0xC0E0B1: cpu.execute_instruction<0xF0>(0x000076, 2); return true;
    // src/unknown/C0/C0DF22.asm:119 CMP #7
    case 0xC0E0B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0DF22.asm:119 CMP #7
    // Overlapping static entry reached from 0xC0E0B3.
    case 0xC0E0B5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0DF22.asm:120 BEQL @UNKNOWN24
    case 0xC0E0B6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0DF22.asm:120 BEQL @UNKNOWN24
    case 0xC0E0B8: cpu.execute_instruction<0x4C>(0x00E14E, 3); return true;
    // src/unknown/C0/C0DF22.asm:121 CMP #5
    case 0xC0E0BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C0DF22.asm:121 CMP #5
    // Overlapping static entry reached from 0xC0E0BB.
    case 0xC0E0BD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0DF22.asm:122 BEQL @UNKNOWN25
    case 0xC0E0BE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0DF22.asm:122 BEQL @UNKNOWN25
    case 0xC0E0C0: cpu.execute_instruction<0x4C>(0x00E171, 3); return true;
    // src/unknown/C0/C0DF22.asm:123 JMP @UNKNOWN26
    case 0xC0E0C3: cpu.execute_instruction<0x4C>(0x00E194, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:125 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E0C6: cpu.execute_instruction<0xAD>(0x009F4D, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:125 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E0C9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:125 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E0CB: cpu.execute_instruction<0xAD>(0x009F4F, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:125 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E0CE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:126 SEC
    case 0xC0E0D0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E0D1.
    case 0xC0E0D3: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0D4: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0D6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E0D8.
    case 0xC0E0DA: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0DB: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:127 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E0DD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:128 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E0DF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:128 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E0E1: cpu.execute_instruction<0x8D>(0x009F4D, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:128 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E0E4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:128 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E0E6: cpu.execute_instruction<0x8D>(0x009F4F, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:130 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_X
    case 0xC0E0E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:130 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_X
    // Overlapping static entry reached from 0xC0E0E9.
    case 0xC0E0EB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:130 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_X
    case 0xC0E0EC: cpu.execute_instruction<0x8D>(0x009F49, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:130 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_X
    case 0xC0E0EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:130 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_X
    // Overlapping static entry reached from 0xC0E0EF.
    case 0xC0E0F1: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:130 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_X
    case 0xC0E0F2: cpu.execute_instruction<0x8D>(0x009F4B, 3); return true;
    // src/unknown/C0/C0DF22.asm:131 JMP @UNKNOWN26
    case 0xC0E0F5: cpu.execute_instruction<0x4C>(0x00E194, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:133 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E0F8: cpu.execute_instruction<0xAD>(0x009F49, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:133 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E0FB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:133 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E0FD: cpu.execute_instruction<0xAD>(0x009F4B, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:133 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E100: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:134 SEC
    case 0xC0E102: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E103: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E103.
    case 0xC0E105: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E106: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E108: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E10A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E10A.
    case 0xC0E10C: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E10D: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:135 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E10F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:136 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E111: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:136 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E113: cpu.execute_instruction<0x8D>(0x009F49, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:136 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E116: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:136 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E118: cpu.execute_instruction<0x8D>(0x009F4B, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:138 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_Y
    case 0xC0E11B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:138 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_Y
    // Overlapping static entry reached from 0xC0E11B.
    case 0xC0E11D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:138 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_Y
    case 0xC0E11E: cpu.execute_instruction<0x8D>(0x009F4D, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:138 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_Y
    case 0xC0E121: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:138 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_Y
    // Overlapping static entry reached from 0xC0E121.
    case 0xC0E123: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:138 MOVE_INT_CONSTANT NULL, PSI_TELEPORT_SPEED_Y
    case 0xC0E124: cpu.execute_instruction<0x8D>(0x009F4F, 3); return true;
    // src/unknown/C0/C0DF22.asm:139 BRA @UNKNOWN26
    case 0xC0E127: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:141 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E129: cpu.execute_instruction<0xAD>(0x009F4D, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:141 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E12C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:141 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E12E: cpu.execute_instruction<0xAD>(0x009F4F, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:141 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E131: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:142 SEC
    case 0xC0E133: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E134: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E134.
    case 0xC0E136: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E137: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E139: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E13B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E13B.
    case 0xC0E13D: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E13E: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:143 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E140: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:144 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E142: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:144 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E144: cpu.execute_instruction<0x8D>(0x009F4D, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:144 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E147: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:144 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E149: cpu.execute_instruction<0x8D>(0x009F4F, 3); return true;
    // src/unknown/C0/C0DF22.asm:145 BRA @UNKNOWN26
    case 0xC0E14C: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:147 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E14E: cpu.execute_instruction<0xAD>(0x009F4D, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:147 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E151: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:147 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E153: cpu.execute_instruction<0xAD>(0x009F4F, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:147 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E156: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:148 SEC
    case 0xC0E158: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E159: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E159.
    case 0xC0E15B: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E15C: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E15E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E160: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E160.
    case 0xC0E162: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E163: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:149 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E165: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:150 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E167: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:150 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E169: cpu.execute_instruction<0x8D>(0x009F4D, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:150 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E16C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:150 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_Y
    case 0xC0E16E: cpu.execute_instruction<0x8D>(0x009F4F, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:152 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E171: cpu.execute_instruction<0xAD>(0x009F49, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:152 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E174: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:152 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E176: cpu.execute_instruction<0xAD>(0x009F4B, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:152 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E179: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0DF22.asm:153 SEC
    case 0xC0E17B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E17C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E17C.
    case 0xC0E17E: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E17F: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E181: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E183: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC0E183.
    case 0xC0E185: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E186: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:154 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC0E188: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0DF22.asm:155 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E18A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0DF22.asm:155 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E18C: cpu.execute_instruction<0x8D>(0x009F49, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0DF22.asm:155 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E18F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0DF22.asm:155 MOVE_INT @VIRTUAL06, PSI_TELEPORT_SPEED_X
    case 0xC0E191: cpu.execute_instruction<0x8D>(0x009F4B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0DF22.asm:157 END_C_FUNCTION
    case 0xC0E194: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0DF22.asm:157 END_C_FUNCTION
    case 0xC0E195: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E196.asm (unresolved).
bool execute_unresolved_c0_c0e196_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E196.asm:3 BEGIN_C_FUNCTION
    case 0xC0E196: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E196.asm:9 END_STACK_VARS
    case 0xC0E198: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E196.asm:9 END_STACK_VARS
    case 0xC0E199: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E196.asm:9 END_STACK_VARS
    case 0xC0E19A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E196.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E19A.
    case 0xC0E19C: cpu.execute_instruction<0xFF>(0x7DA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E196.asm:9 END_STACK_VARS
    case 0xC0E19D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:10 LDA #.LOWORD(GAME_STATE) + game_state::unknown88
    case 0xC0E19E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00987D, 3); return true;
    // src/unknown/C0/C0E196.asm:10 LDA #.LOWORD(GAME_STATE) + game_state::unknown88
    // Overlapping static entry reached from 0xC0E19E.
    case 0xC0E1A0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:11 STA @VIRTUAL04
    case 0xC0E1A1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E196.asm:12 STA @LOCAL03
    case 0xC0E1A3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0E196.asm:13 LDX @VIRTUAL04
    case 0xC0E1A5: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E196.asm:14 LDA __BSS_START__,X
    case 0xC0E1A7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C0E196.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E1AA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C0E196.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E1AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C0E196.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E1AD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C0E196.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E1AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C0E196.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E1B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:16 CLC
    case 0xC0E1B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:17 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC0E1B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x005156, 3); return true;
    // src/unknown/C0/C0E196.asm:17 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC0E1B2.
    case 0xC0E1B4: cpu.execute_instruction<0x51>(0x000085, 2); return true;
    // src/unknown/C0/C0E196.asm:18 STA @VIRTUAL02
    case 0xC0E1B5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E196.asm:18 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0E1B4.
    case 0xC0E1B6: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C0/C0E196.asm:19 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    case 0xC0E1B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000077, 2); else cpu.execute_instruction<0xA9>(0x009877, 3); return true;
    // src/unknown/C0/C0E196.asm:19 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    // Overlapping static entry reached from 0xC0E1B7.
    case 0xC0E1B9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:20 STA @LOCAL02
    case 0xC0E1BA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0E196.asm:21 TAX
    case 0xC0E1BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:22 LDA __BSS_START__,X
    case 0xC0E1BD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E196.asm:23 LDX @VIRTUAL02
    case 0xC0E1C0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E196.asm:24 STA a:player_position_buffer_entry::x_coord,X
    case 0xC0E1C2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E196.asm:25 LDX #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    case 0xC0E1C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00007B, 2); else cpu.execute_instruction<0xA2>(0x00987B, 3); return true;
    // src/unknown/C0/C0E196.asm:25 LDX #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    // Overlapping static entry reached from 0xC0E1C5.
    case 0xC0E1C7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:26 STX @LOCAL01
    case 0xC0E1C8: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0E196.asm:27 LDA __BSS_START__,X
    case 0xC0E1CA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E196.asm:28 LDX @VIRTUAL02
    case 0xC0E1CD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E196.asm:29 STA a:player_position_buffer_entry::y_coord,X
    case 0xC0E1CF: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C0/C0E196.asm:30 LDY GAME_STATE+game_state::current_party_members
    case 0xC0E1D2: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C0E196.asm:31 LDX @LOCAL01
    case 0xC0E1D5: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0E196.asm:32 LDA __BSS_START__,X
    case 0xC0E1D7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E196.asm:33 TAX
    case 0xC0E1DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:34 STX @LOCAL00
    case 0xC0E1DB: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0E196.asm:35 LDA @LOCAL02
    case 0xC0E1DD: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0E196.asm:36 TAX
    case 0xC0E1DF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:37 LDA __BSS_START__,X
    case 0xC0E1E0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E196.asm:38 LDX @LOCAL00
    case 0xC0E1E3: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0E196.asm:39 JSL UNKNOWN_C05F33
    case 0xC0E1E5: cpu.execute_instruction<0x22>(0xC05F33, 4); return true;
    // src/unknown/C0/C0E196.asm:40 LDX @VIRTUAL02
    case 0xC0E1E9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E196.asm:41 STA a:player_position_buffer_entry::tile_flags,X
    case 0xC0E1EB: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/unknown/C0/C0E196.asm:42 LDX @VIRTUAL02
    case 0xC0E1EE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E196.asm:43 STZ a:player_position_buffer_entry::walking_style,X
    case 0xC0E1F0: cpu.execute_instruction<0x9E>(0x000006, 3); return true;
    // src/unknown/C0/C0E196.asm:44 LDA GAME_STATE+game_state::leader_direction
    case 0xC0E1F3: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C0E196.asm:45 LDX @VIRTUAL02
    case 0xC0E1F6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E196.asm:46 STA a:player_position_buffer_entry::direction,X
    case 0xC0E1F8: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/unknown/C0/C0E196.asm:47 LDA @LOCAL03
    case 0xC0E1FB: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0E196.asm:48 STA @VIRTUAL04
    case 0xC0E1FD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E196.asm:49 LDX @VIRTUAL04
    case 0xC0E1FF: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E196.asm:50 LDA __BSS_START__,X
    case 0xC0E201: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E196.asm:51 INC
    case 0xC0E204: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E196.asm:52 LDX @VIRTUAL04
    case 0xC0E205: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E196.asm:53 STA __BSS_START__,X
    case 0xC0E207: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E196.asm:54 AND #$00FF
    case 0xC0E20A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0E196.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC0E20A.
    case 0xC0E20C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0E196.asm:55 LDX @VIRTUAL04
    case 0xC0E20D: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E196.asm:56 STA __BSS_START__,X
    case 0xC0E20F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E196.asm:57 END_C_FUNCTION
    case 0xC0E212: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0E196.asm:57 END_C_FUNCTION
    case 0xC0E213: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E214.asm (unresolved).
bool execute_unresolved_c0_c0e214_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E214.asm:3 BEGIN_C_FUNCTION
    case 0xC0E214: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E214.asm:8 END_STACK_VARS
    case 0xC0E216: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0E214.asm:8 END_STACK_VARS
    case 0xC0E217: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E214.asm:8 END_STACK_VARS
    case 0xC0E218: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E214.asm:8 END_STACK_VARS
    case 0xC0E219: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E214.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E219.
    case 0xC0E21B: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E214.asm:8 END_STACK_VARS
    case 0xC0E21C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0E214.asm:8 END_STACK_VARS
    case 0xC0E21D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0E214.asm:9 STA @VIRTUAL02
    case 0xC0E21E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E214.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0E21B.
    case 0xC0E21F: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C0/C0E214.asm:10 TXY
    case 0xC0E220: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0E214.asm:11 TXA
    case 0xC0E221: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0E214.asm:12 INC
    case 0xC0E222: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E214.asm:13 AND #$00FF
    case 0xC0E223: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0E214.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC0E223.
    case 0xC0E225: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0E214.asm:14 STA @LOCAL01
    case 0xC0E226: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0E214.asm:15 LDA @VIRTUAL02
    case 0xC0E228: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E214.asm:16 STA @VIRTUAL04
    case 0xC0E22A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E214.asm:17 INC @VIRTUAL04
    case 0xC0E22C: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C0/C0E214.asm:18 LDA GAME_STATE + game_state::unknown96
    case 0xC0E22E: cpu.execute_instruction<0xAD>(0x00988B, 3); return true;
    // src/unknown/C0/C0E214.asm:19 AND #$00FF
    case 0xC0E231: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0E214.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC0E231.
    case 0xC0E233: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C0/C0E214.asm:20 CMP @VIRTUAL04
    case 0xC0E234: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C0/C0E214.asm:21 BNE @UNKNOWN0
    case 0xC0E236: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C0/C0E214.asm:22 LDA @LOCAL01
    case 0xC0E238: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0E214.asm:23 BRA @UNKNOWN2
    case 0xC0E23A: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C0/C0E214.asm:25 LDA PSI_TELEPORT_SPEED + fixed_point::integer
    case 0xC0E23C: cpu.execute_instruction<0xAD>(0x009F47, 3); return true;
    // src/unknown/C0/C0E214.asm:26 BNE @UNKNOWN1
    case 0xC0E23F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C0E214.asm:27 TYA
    case 0xC0E241: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0E214.asm:28 BRA @UNKNOWN2
    case 0xC0E242: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C0E214.asm:30 LDA #2
    case 0xC0E244: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0E214.asm:30 LDA #2
    // Overlapping static entry reached from 0xC0E244.
    case 0xC0E246: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0E214.asm:31 STA @LOCAL00
    case 0xC0E247: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0E214.asm:32 LDX #6
    case 0xC0E249: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C0/C0E214.asm:32 LDX #6
    // Overlapping static entry reached from 0xC0E249.
    case 0xC0E24B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0E214.asm:33 LDA @VIRTUAL02
    case 0xC0E24C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E214.asm:34 JSL UNKNOWN_C03EC3
    case 0xC0E24E: cpu.execute_instruction<0x22>(0xC03EC3, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E214.asm:36 END_C_FUNCTION
    case 0xC0E252: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0E214.asm:36 END_C_FUNCTION
    case 0xC0E253: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E254.asm (unresolved).
bool execute_unresolved_c0_c0e254_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E254.asm:3 BEGIN_C_FUNCTION
    case 0xC0E254: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E254.asm:7 END_STACK_VARS
    case 0xC0E256: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E254.asm:7 END_STACK_VARS
    case 0xC0E257: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E254.asm:7 END_STACK_VARS
    case 0xC0E258: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E254.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E258.
    case 0xC0E25A: cpu.execute_instruction<0xFF>(0x0CA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E254.asm:7 END_STACK_VARS
    case 0xC0E25B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:8 LDA #12
    case 0xC0E25C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C0/C0E254.asm:8 LDA #12
    // Overlapping static entry reached from 0xC0E26B.
    case 0xC0E25D: cpu.execute_instruction<0x0C>(0x003800, 3); return true;
    // src/unknown/C0/C0E254.asm:8 LDA #12
    // Overlapping static entry reached from 0xC0E25C.
    case 0xC0E25E: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C0/C0E254.asm:9 SEC
    case 0xC0E25F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:10 SBC PSI_TELEPORT_SPEED + fixed_point::integer
    case 0xC0E260: cpu.execute_instruction<0xED>(0x009F47, 3); return true;
    // src/unknown/C0/C0E254.asm:11 TAX
    case 0xC0E263: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:12 STX @LOCAL01
    case 0xC0E264: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0E254.asm:13 BEQ @UNKNOWN0
    case 0xC0E266: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0E254.asm:14 TXA
    case 0xC0E268: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:15 AND #$8000
    case 0xC0E269: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C0E254.asm:15 AND #$8000
    // Overlapping static entry reached from 0xC0E269.
    case 0xC0E26B: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E254.asm:16 BEQ @UNKNOWN1
    case 0xC0E26C: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0E254.asm:18 LDX #1
    case 0xC0E26E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0E254.asm:18 LDX #1
    // Overlapping static entry reached from 0xC0E26E.
    case 0xC0E270: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0E254.asm:19 STX @LOCAL01
    case 0xC0E271: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C0E254.asm:21 LDA #24
    case 0xC0E273: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0E254.asm:21 LDA #24
    // Overlapping static entry reached from 0xC0E273.
    case 0xC0E275: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0E254.asm:22 STA @LOCAL00
    case 0xC0E276: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0E254.asm:23 BRA @UNKNOWN3
    case 0xC0E278: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C0E254.asm:25 LDX @LOCAL01
    case 0xC0E27A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C0E254.asm:26 PHX
    case 0xC0E27C: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:27 ASL
    case 0xC0E27D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:28 TAX
    case 0xC0E27E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:29 PLA
    case 0xC0E27F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:30 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC0E280: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/C0/C0E254.asm:31 LDA @LOCAL00
    case 0xC0E283: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0E254.asm:32 INC
    case 0xC0E285: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E254.asm:33 STA @LOCAL00
    case 0xC0E286: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0E254.asm:35 CMP #29
    case 0xC0E288: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/unknown/C0/C0E254.asm:35 CMP #29
    // Overlapping static entry reached from 0xC0E288.
    case 0xC0E28A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0E254.asm:36 BCC @UNKNOWN2
    case 0xC0E28B: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E254.asm:37 END_C_FUNCTION
    case 0xC0E28D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0E254.asm:37 END_C_FUNCTION
    case 0xC0E28E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E28F.asm (unresolved).
bool execute_unresolved_c0_c0e28f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E28F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0E28F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E28F.asm:10 END_STACK_VARS
    case 0xC0E291: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E28F.asm:10 END_STACK_VARS
    case 0xC0E292: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E28F.asm:10 END_STACK_VARS
    case 0xC0E293: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E28F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E293.
    case 0xC0E295: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E28F.asm:10 END_STACK_VARS
    case 0xC0E296: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E28F.asm:11 LDA #1
    case 0xC0E297: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E28F.asm:11 LDA #1
    // Overlapping static entry reached from 0xC0E297.
    case 0xC0E299: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E28F.asm:12 STA GAME_STATE + game_state::unknown90
    case 0xC0E29A: cpu.execute_instruction<0x8D>(0x009885, 3); return true;
    // src/unknown/C0/C0E28F.asm:13 LDA #0
    case 0xC0E29D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0E28F.asm:13 LDA #0
    // Overlapping static entry reached from 0xC0E29D.
    case 0xC0E29F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E28F.asm:14 JSL MAP_INPUT_TO_DIRECTION
    case 0xC0E2A0: cpu.execute_instruction<0x22>(0xC0404F, 4); return true;
    // src/unknown/C0/C0E28F.asm:15 STA @VIRTUAL02
    case 0xC0E2A4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:16 LDA GAME_STATE+game_state::leader_direction
    case 0xC0E2A6: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C0E28F.asm:17 STA @LOCAL04
    case 0xC0E2A9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0E28F.asm:18 LDA @VIRTUAL02
    case 0xC0E2AB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:19 EOR #$0004
    case 0xC0E2AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000004, 2); else cpu.execute_instruction<0x49>(0x000004, 3); return true;
    // src/unknown/C0/C0E28F.asm:19 EOR #$0004
    // Overlapping static entry reached from 0xC0E2AD.
    case 0xC0E2AF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0E28F.asm:20 STA @VIRTUAL04
    case 0xC0E2B0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E28F.asm:21 LDA @LOCAL04
    case 0xC0E2B2: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0E28F.asm:22 CMP @VIRTUAL04
    case 0xC0E2B4: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C0/C0E28F.asm:23 BNE @UNKNOWN0
    case 0xC0E2B6: cpu.execute_instruction<0xD0>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:24 STA @VIRTUAL02
    case 0xC0E2B8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:26 LDA @VIRTUAL02
    case 0xC0E2BA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:27 CMP #.LOWORD(-1)
    case 0xC0E2BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0E28F.asm:27 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0E2BC.
    case 0xC0E2BE: cpu.execute_instruction<0xFF>(0xAD05D0, 4); return true;
    // src/unknown/C0/C0E28F.asm:28 BNE @UNKNOWN1
    case 0xC0E2BF: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0E28F.asm:29 LDA GAME_STATE+game_state::leader_direction
    case 0xC0E2C1: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C0E28F.asm:29 LDA GAME_STATE+game_state::leader_direction
    // Overlapping static entry reached from 0xC0E2BE.
    case 0xC0E2C2: cpu.execute_instruction<0x7F>(0x028598, 4); return true;
    // src/unknown/C0/C0E28F.asm:30 STA @VIRTUAL02
    case 0xC0E2C4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:32 LDA @VIRTUAL02
    case 0xC0E2C6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:33 STA GAME_STATE+game_state::leader_direction
    case 0xC0E2C8: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // src/unknown/C0/C0E28F.asm:34 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0E2CB: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/unknown/C0/C0E28F.asm:35 BEQ @UNKNOWN2
    case 0xC0E2CE: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0E28F.asm:36 LDA #2
    case 0xC0E2D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0E28F.asm:36 LDA #2
    // Overlapping static entry reached from 0xC0E2D0.
    case 0xC0E2D2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E28F.asm:37 STA PSI_TELEPORT_STATE
    case 0xC0E2D3: cpu.execute_instruction<0x8D>(0x009F43, 3); return true;
    // src/unknown/C0/C0E28F.asm:38 LDA #1
    case 0xC0E2D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E28F.asm:38 LDA #1
    // Overlapping static entry reached from 0xC0E2D6.
    case 0xC0E2D8: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E28F.asm:39 STA BATTLE_MODE
    case 0xC0E2D9: cpu.execute_instruction<0x8D>(0x004DC2, 3); return true;
    // src/unknown/C0/C0E28F.asm:41 LDA @VIRTUAL02
    case 0xC0E2DC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:42 JSR UNKNOWN_C0DF22
    case 0xC0E2DE: cpu.execute_instruction<0x20>(0x00DF22, 3); return true;
    // src/unknown/C0/C0E28F.asm:43 LDA GAME_STATE + game_state::unknown80
    case 0xC0E2E1: cpu.execute_instruction<0xAD>(0x009875, 3); return true;
    // src/unknown/C0/C0E28F.asm:44 STA @VIRTUAL0A
    case 0xC0E2E4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0E28F.asm:45 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E2E6: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0E28F.asm:46 STA @VIRTUAL0A+2
    case 0xC0E2E9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E28F.asm:47 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E2EB: cpu.execute_instruction<0xAD>(0x009F49, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:47 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E2EE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E28F.asm:47 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E2F0: cpu.execute_instruction<0xAD>(0x009F4B, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:47 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL06
    case 0xC0E2F3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E28F.asm:48 CLC
    case 0xC0E2F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0E28F.asm:49 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2F6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0E28F.asm:49 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2F8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:49 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2FA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0E28F.asm:49 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2FC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0E28F.asm:49 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E2FE: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:49 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E300: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E28F.asm:50 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_X
    case 0xC0E302: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:50 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_X
    case 0xC0E304: cpu.execute_instruction<0x8D>(0x009F51, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E28F.asm:50 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_X
    case 0xC0E307: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:50 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_X
    case 0xC0E309: cpu.execute_instruction<0x8D>(0x009F53, 3); return true;
    // src/unknown/C0/C0E28F.asm:51 LDA GAME_STATE + game_state::unknown84
    case 0xC0E30C: cpu.execute_instruction<0xAD>(0x009879, 3); return true;
    // src/unknown/C0/C0E28F.asm:52 STA @VIRTUAL0A
    case 0xC0E30F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C0E28F.asm:53 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0E311: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C0E28F.asm:54 STA @VIRTUAL0A+2
    case 0xC0E314: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E28F.asm:55 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E316: cpu.execute_instruction<0xAD>(0x009F4D, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:55 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E319: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E28F.asm:55 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E31B: cpu.execute_instruction<0xAD>(0x009F4F, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:55 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL06
    case 0xC0E31E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E28F.asm:56 CLC
    case 0xC0E320: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0E28F.asm:57 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E321: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0E28F.asm:57 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E323: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:57 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E325: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0E28F.asm:57 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E327: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0E28F.asm:57 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E329: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:57 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E32B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E28F.asm:58 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_Y
    case 0xC0E32D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:58 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_Y
    case 0xC0E32F: cpu.execute_instruction<0x8D>(0x009F55, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E28F.asm:58 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_Y
    case 0xC0E332: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:58 MOVE_INT @VIRTUAL06, PSI_TELEPORT_NEXT_Y
    case 0xC0E334: cpu.execute_instruction<0x8D>(0x009F57, 3); return true;
    // src/unknown/C0/C0E28F.asm:59 LDY GAME_STATE+game_state::current_party_members
    case 0xC0E337: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C0E28F.asm:60 LDX PSI_TELEPORT_NEXT_Y + fixed_point::integer
    case 0xC0E33A: cpu.execute_instruction<0xAE>(0x009F57, 3); return true;
    // src/unknown/C0/C0E28F.asm:61 LDA PSI_TELEPORT_NEXT_X + fixed_point::integer
    case 0xC0E33D: cpu.execute_instruction<0xAD>(0x009F53, 3); return true;
    // src/unknown/C0/C0E28F.asm:62 JSL NPC_COLLISION_CHECK
    case 0xC0E340: cpu.execute_instruction<0x22>(0xC05FF6, 4); return true;
    // src/unknown/C0/C0E28F.asm:63 CMP #.LOWORD(-1)
    case 0xC0E344: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0E28F.asm:63 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0E344.
    case 0xC0E346: cpu.execute_instruction<0xFF>(0xA906F0, 4); return true;
    // src/unknown/C0/C0E28F.asm:64 BEQ @UNKNOWN3
    case 0xC0E347: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0E28F.asm:65 LDA #2
    case 0xC0E349: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0E28F.asm:65 LDA #2
    // Overlapping static entry reached from 0xC0E346.
    case 0xC0E34A: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/unknown/C0/C0E28F.asm:65 LDA #2
    // Overlapping static entry reached from 0xC0E349.
    case 0xC0E34B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E28F.asm:66 STA PSI_TELEPORT_STATE
    case 0xC0E34C: cpu.execute_instruction<0x8D>(0x009F43, 3); return true;
    // src/unknown/C0/C0E28F.asm:68 LDA PSI_TELEPORT_NEXT_Y + fixed_point::integer
    case 0xC0E34F: cpu.execute_instruction<0xAD>(0x009F57, 3); return true;
    // src/unknown/C0/C0E28F.asm:69 STA @LOCAL00
    case 0xC0E352: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0E28F.asm:70 LDA @VIRTUAL02
    case 0xC0E354: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E28F.asm:71 STA @LOCAL01
    case 0xC0E356: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0E28F.asm:72 LDY PSI_TELEPORT_NEXT_X + fixed_point::integer
    case 0xC0E358: cpu.execute_instruction<0xAC>(0x009F53, 3); return true;
    // src/unknown/C0/C0E28F.asm:73 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0E35B: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C0E28F.asm:74 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E35E: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0E28F.asm:75 JSR UNKNOWN_C0DED9
    case 0xC0E361: cpu.execute_instruction<0x20>(0x00DED9, 3); return true;
    // src/unknown/C0/C0E28F.asm:76 AND #$00C0
    case 0xC0E364: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C0E28F.asm:76 AND #$00C0
    // Overlapping static entry reached from 0xC0E364.
    case 0xC0E366: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E28F.asm:77 BEQ @UNKNOWN4
    case 0xC0E367: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0E28F.asm:78 LDA #2
    case 0xC0E369: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0E28F.asm:78 LDA #2
    // Overlapping static entry reached from 0xC0E369.
    case 0xC0E36B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E28F.asm:79 STA PSI_TELEPORT_STATE
    case 0xC0E36C: cpu.execute_instruction<0x8D>(0x009F43, 3); return true;
    // src/unknown/C0/C0E28F.asm:81 LDA PSI_TELEPORT_STATE
    case 0xC0E36F: cpu.execute_instruction<0xAD>(0x009F43, 3); return true;
    // src/unknown/C0/C0E28F.asm:82 CMP #2
    case 0xC0E372: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0E28F.asm:82 CMP #2
    // Overlapping static entry reached from 0xC0E372.
    case 0xC0E374: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E28F.asm:83 BEQ @UNKNOWN5
    case 0xC0E375: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E28F.asm:84 MOVE_INT PSI_TELEPORT_NEXT_X, @VIRTUAL06
    case 0xC0E377: cpu.execute_instruction<0xAD>(0x009F51, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:84 MOVE_INT PSI_TELEPORT_NEXT_X, @VIRTUAL06
    case 0xC0E37A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E28F.asm:84 MOVE_INT PSI_TELEPORT_NEXT_X, @VIRTUAL06
    case 0xC0E37C: cpu.execute_instruction<0xAD>(0x009F53, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:84 MOVE_INT PSI_TELEPORT_NEXT_X, @VIRTUAL06
    case 0xC0E37F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E28F.asm:85 LDA @VIRTUAL06
    case 0xC0E381: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0E28F.asm:86 STA GAME_STATE + game_state::unknown80
    case 0xC0E383: cpu.execute_instruction<0x8D>(0x009875, 3); return true;
    // src/unknown/C0/C0E28F.asm:87 LDA @VIRTUAL06+2
    case 0xC0E386: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0E28F.asm:88 STA GAME_STATE+game_state::leader_x_coord
    case 0xC0E388: cpu.execute_instruction<0x8D>(0x009877, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E28F.asm:89 MOVE_INT PSI_TELEPORT_NEXT_Y, @VIRTUAL06
    case 0xC0E38B: cpu.execute_instruction<0xAD>(0x009F55, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E28F.asm:89 MOVE_INT PSI_TELEPORT_NEXT_Y, @VIRTUAL06
    case 0xC0E38E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E28F.asm:89 MOVE_INT PSI_TELEPORT_NEXT_Y, @VIRTUAL06
    case 0xC0E390: cpu.execute_instruction<0xAD>(0x009F57, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E28F.asm:89 MOVE_INT PSI_TELEPORT_NEXT_Y, @VIRTUAL06
    case 0xC0E393: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E28F.asm:90 LDA @VIRTUAL06
    case 0xC0E395: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0E28F.asm:91 STA GAME_STATE + game_state::unknown84
    case 0xC0E397: cpu.execute_instruction<0x8D>(0x009879, 3); return true;
    // src/unknown/C0/C0E28F.asm:92 LDA @VIRTUAL06+2
    case 0xC0E39A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0E28F.asm:93 STA GAME_STATE+game_state::leader_y_coord
    case 0xC0E39C: cpu.execute_instruction<0x8D>(0x00987B, 3); return true;
    // src/unknown/C0/C0E28F.asm:95 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0E39F: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C0E28F.asm:96 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E3A2: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0E28F.asm:97 JSL CENTER_SCREEN
    case 0xC0E3A5: cpu.execute_instruction<0x22>(0xC0400E, 4); return true;
    // src/unknown/C0/C0E28F.asm:98 JSR UNKNOWN_C0E196
    case 0xC0E3A9: cpu.execute_instruction<0x20>(0x00E196, 3); return true;
    // src/unknown/C0/C0E28F.asm:99 JSR UNKNOWN_C0E254
    case 0xC0E3AC: cpu.execute_instruction<0x20>(0x00E254, 3); return true;
    // src/unknown/C0/C0E28F.asm:100 LDA PSI_TELEPORT_SPEED + fixed_point::integer
    case 0xC0E3AF: cpu.execute_instruction<0xAD>(0x009F47, 3); return true;
    // src/unknown/C0/C0E28F.asm:101 CMP #9
    case 0xC0E3B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C0/C0E28F.asm:101 CMP #9
    // Overlapping static entry reached from 0xC0E3B2.
    case 0xC0E3B4: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0E28F.asm:102 BLTEQ @UNKNOWN6
    case 0xC0E3B5: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0E28F.asm:102 BLTEQ @UNKNOWN6
    case 0xC0E3B7: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0E28F.asm:103 LDA #1
    case 0xC0E3B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E28F.asm:103 LDA #1
    // Overlapping static entry reached from 0xC0E3B9.
    case 0xC0E3BB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E28F.asm:104 STA PSI_TELEPORT_STATE
    case 0xC0E3BC: cpu.execute_instruction<0x8D>(0x009F43, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E28F.asm:106 END_C_FUNCTION
    case 0xC0E3BF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0E28F.asm:106 END_C_FUNCTION
    case 0xC0E3C0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E3C1.asm (unresolved).
bool execute_unresolved_c0_c0e3c1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E3C1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0E3C1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E3C1.asm:9 END_STACK_VARS
    case 0xC0E3C3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E3C1.asm:9 END_STACK_VARS
    case 0xC0E3C4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E3C1.asm:9 END_STACK_VARS
    case 0xC0E3C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E3C1.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E3C5.
    case 0xC0E3C7: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E3C1.asm:9 END_STACK_VARS
    case 0xC0E3C8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC0E3C9: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0E3C1.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0E3C7.
    case 0xC0E3CB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:11 ASL
    case 0xC0E3CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:12 STA @VIRTUAL04
    case 0xC0E3CD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E3C1.asm:13 STA @LOCAL03
    case 0xC0E3CF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0E3C1.asm:14 LDX @VIRTUAL04
    case 0xC0E3D1: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E3C1.asm:15 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC0E3D3: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/C0/C0E3C1.asm:16 LDY #.SIZEOF(char_struct)
    case 0xC0E3D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C0E3C1.asm:16 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC0E3D6.
    case 0xC0E3D8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E3C1.asm:17 JSL MULT168
    case 0xC0E3D9: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C0E3C1.asm:18 CLC
    case 0xC0E3DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:19 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC0E3DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C0/C0E3C1.asm:19 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC0E3DE.
    case 0xC0E3E0: cpu.execute_instruction<0x99>(0x0086AA, 3); return true;
    // src/unknown/C0/C0E3C1.asm:20 TAX
    case 0xC0E3E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:21 STX @LOCAL02
    case 0xC0E3E2: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0E3C1.asm:21 STX @LOCAL02
    // Overlapping static entry reached from 0xC0E3E0.
    case 0xC0E3E3: cpu.execute_instruction<0x12>(0x00008E, 2); return true;
    // src/unknown/C0/C0E3C1.asm:22 STX CURRENT_PARTY_MEMBER_TICK
    case 0xC0E3E4: cpu.execute_instruction<0x8E>(0x004DC6, 3); return true;
    // src/unknown/C0/C0E3C1.asm:22 STX CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC0E3E3.
    case 0xC0E3E5: cpu.execute_instruction<0xC6>(0x00004D, 2); return true;
    // src/unknown/C0/C0E3C1.asm:23 LDX @VIRTUAL04
    case 0xC0E3E7: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E3C1.asm:24 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC0E3E9: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C0/C0E3C1.asm:25 STA @LOCAL01
    case 0xC0E3EC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0E3C1.asm:26 LDX @LOCAL02
    case 0xC0E3EE: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C0E3C1.asm:27 LDA a:char_struct::position_index,X
    case 0xC0E3F0: cpu.execute_instruction<0xBD>(0x00003D, 3); return true;
    // src/unknown/C0/C0E3C1.asm:28 STA @LOCAL00
    case 0xC0E3F3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C0E3C1.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E3F5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C0E3C1.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E3F7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C0E3C1.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E3F8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C0E3C1.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E3FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C0E3C1.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E3FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:30 CLC
    case 0xC0E3FC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:31 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC0E3FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x005156, 3); return true;
    // src/unknown/C0/C0E3C1.asm:31 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC0E3FD.
    case 0xC0E3FF: cpu.execute_instruction<0x51>(0x000085, 2); return true;
    // src/unknown/C0/C0E3C1.asm:32 STA @VIRTUAL02
    case 0xC0E400: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E3C1.asm:32 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0E3FF.
    case 0xC0E401: cpu.execute_instruction<0x02>(0x0000AC, 2); return true;
    // src/unknown/C0/C0E3C1.asm:33 LDY CURRENT_ENTITY_SLOT
    case 0xC0E402: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C0/C0E3C1.asm:34 LDX @VIRTUAL02
    case 0xC0E405: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E3C1.asm:35 LDA a:player_position_buffer_entry::walking_style,X
    case 0xC0E407: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C0/C0E3C1.asm:36 TAX
    case 0xC0E40A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E3C1.asm:37 LDA @LOCAL01
    case 0xC0E40B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0E3C1.asm:38 JSL UNKNOWN_C07A56
    case 0xC0E40D: cpu.execute_instruction<0x22>(0xC07A56, 4); return true;
    // src/unknown/C0/C0E3C1.asm:39 LDX @VIRTUAL02
    case 0xC0E411: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E3C1.asm:40 LDA a:player_position_buffer_entry::x_coord,X
    case 0xC0E413: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E3C1.asm:41 LDX @LOCAL03
    case 0xC0E416: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C0E3C1.asm:42 STX @VIRTUAL04
    case 0xC0E418: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C0E3C1.asm:43 STA ENTITY_ABS_X_TABLE,X
    case 0xC0E41A: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C0E3C1.asm:44 LDX @VIRTUAL02
    case 0xC0E41D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E3C1.asm:45 LDA a:player_position_buffer_entry::y_coord,X
    case 0xC0E41F: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C0E3C1.asm:46 LDX @VIRTUAL04
    case 0xC0E422: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E3C1.asm:47 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0E424: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C0E3C1.asm:48 LDX @VIRTUAL02
    case 0xC0E427: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E3C1.asm:49 LDA a:player_position_buffer_entry::direction,X
    case 0xC0E429: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/unknown/C0/C0E3C1.asm:50 LDX @VIRTUAL04
    case 0xC0E42C: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E3C1.asm:51 STA ENTITY_DIRECTIONS,X
    case 0xC0E42E: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C0E3C1.asm:52 LDX @VIRTUAL02
    case 0xC0E431: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E3C1.asm:53 LDA a:player_position_buffer_entry::tile_flags,X
    case 0xC0E433: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C0/C0E3C1.asm:54 LDX @VIRTUAL04
    case 0xC0E436: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E3C1.asm:55 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0E438: cpu.execute_instruction<0x9D>(0x002BAA, 3); return true;
    // src/unknown/C0/C0E3C1.asm:56 LDX @LOCAL00
    case 0xC0E43B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0E3C1.asm:57 LDA @LOCAL01
    case 0xC0E43D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0E3C1.asm:58 JSR UNKNOWN_C0E214
    case 0xC0E43F: cpu.execute_instruction<0x20>(0x00E214, 3); return true;
    // src/unknown/C0/C0E3C1.asm:59 AND #$00FF
    case 0xC0E442: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0E3C1.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC0E442.
    case 0xC0E444: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/C0/C0E3C1.asm:60 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC0E445: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/unknown/C0/C0E3C1.asm:61 STA a:char_struct::position_index,X
    case 0xC0E448: cpu.execute_instruction<0x9D>(0x00003D, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E3C1.asm:62 END_C_FUNCTION
    case 0xC0E44B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0E3C1.asm:62 END_C_FUNCTION
    case 0xC0E44C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E44D.asm (unresolved).
bool execute_unresolved_c0_c0e44d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E44D.asm:3 BEGIN_C_FUNCTION
    case 0xC0E44D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E44D.asm:6 END_STACK_VARS
    case 0xC0E44F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E44D.asm:6 END_STACK_VARS
    case 0xC0E450: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E44D.asm:6 END_STACK_VARS
    case 0xC0E451: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E44D.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E451.
    case 0xC0E453: cpu.execute_instruction<0xFF>(0x41AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E44D.asm:6 END_STACK_VARS
    case 0xC0E454: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E44D.asm:7 LDA PSI_TELEPORT_STYLE
    case 0xC0E455: cpu.execute_instruction<0xAD>(0x009F41, 3); return true;
    // src/unknown/C0/C0E44D.asm:7 LDA PSI_TELEPORT_STYLE
    // Overlapping static entry reached from 0xC0E453.
    case 0xC0E457: cpu.execute_instruction<0x9F>(0x0004C9, 4); return true;
    // src/unknown/C0/C0E44D.asm:8 CMP #TELEPORT_STYLE::PSI_BETTER
    case 0xC0E458: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0E44D.asm:8 CMP #TELEPORT_STYLE::PSI_BETTER
    // Overlapping static entry reached from 0xC0E458.
    case 0xC0E45A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E44D.asm:9 BEQ @UNKNOWN3
    case 0xC0E45B: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C0/C0E44D.asm:10 LDA PAD_STATE
    case 0xC0E45D: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/C0/C0E44D.asm:11 STA @LOCAL00
    case 0xC0E460: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0E44D.asm:12 AND #PAD::UP
    case 0xC0E462: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/unknown/C0/C0E44D.asm:12 AND #PAD::UP
    // Overlapping static entry reached from 0xC0E462.
    case 0xC0E464: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0E44D.asm:13 BEQ @UNKNOWN0
    case 0xC0E465: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0E44D.asm:14 DEC PSI_TELEPORT_BETA_Y_ADJUSTMENT
    case 0xC0E467: cpu.execute_instruction<0xCE>(0x009F69, 3); return true;
    // src/unknown/C0/C0E44D.asm:16 LDA @LOCAL00
    case 0xC0E46A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0E44D.asm:17 AND #PAD::DOWN
    case 0xC0E46C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/unknown/C0/C0E44D.asm:17 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC0E46C.
    case 0xC0E46E: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E44D.asm:18 BEQ @UNKNOWN1
    case 0xC0E46F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0E44D.asm:18 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC0E46E.
    case 0xC0E470: cpu.execute_instruction<0x03>(0x0000EE, 2); return true;
    // src/unknown/C0/C0E44D.asm:19 INC PSI_TELEPORT_BETA_Y_ADJUSTMENT
    case 0xC0E471: cpu.execute_instruction<0xEE>(0x009F69, 3); return true;
    // src/unknown/C0/C0E44D.asm:19 INC PSI_TELEPORT_BETA_Y_ADJUSTMENT
    // Overlapping static entry reached from 0xC0E470.
    case 0xC0E472: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009F, 2); else cpu.execute_instruction<0x69>(0x00A59F, 3); return true;
    // src/unknown/C0/C0E44D.asm:21 LDA @LOCAL00
    case 0xC0E474: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0E44D.asm:21 LDA @LOCAL00
    // Overlapping static entry reached from 0xC0E472.
    case 0xC0E475: cpu.execute_instruction<0x0E>(0x000029, 3); return true;
    // src/unknown/C0/C0E44D.asm:22 AND #PAD::LEFT
    case 0xC0E476: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/C0/C0E44D.asm:22 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC0E476.
    case 0xC0E478: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E44D.asm:23 BEQ @UNKNOWN2
    case 0xC0E479: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0E44D.asm:24 DEC PSI_TELEPORT_BETA_X_ADJUSTMENT
    case 0xC0E47B: cpu.execute_instruction<0xCE>(0x009F67, 3); return true;
    // src/unknown/C0/C0E44D.asm:26 LDA @LOCAL00
    case 0xC0E47E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0E44D.asm:27 AND #PAD::RIGHT
    case 0xC0E480: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/C0/C0E44D.asm:27 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC0E480.
    case 0xC0E482: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E44D.asm:28 BEQ @UNKNOWN3
    case 0xC0E483: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0E44D.asm:28 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC0E482.
    case 0xC0E484: cpu.execute_instruction<0x03>(0x0000EE, 2); return true;
    // src/unknown/C0/C0E44D.asm:29 INC PSI_TELEPORT_BETA_X_ADJUSTMENT
    case 0xC0E485: cpu.execute_instruction<0xEE>(0x009F67, 3); return true;
    // src/unknown/C0/C0E44D.asm:29 INC PSI_TELEPORT_BETA_X_ADJUSTMENT
    // Overlapping static entry reached from 0xC0E484.
    case 0xC0E486: cpu.execute_instruction<0x67>(0x00009F, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E44D.asm:31 END_C_FUNCTION
    case 0xC0E488: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0E44D.asm:31 END_C_FUNCTION
    case 0xC0E489: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E48A.asm (unresolved).
bool execute_unresolved_c0_c0e48a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0E48A.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0E48A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0E48A.asm:4 LDX #.LOWORD(PSI_TELEPORT_SPEED_Y) + fixed_point::integer
    case 0xC0E48C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004F, 2); else cpu.execute_instruction<0xA2>(0x009F4F, 3); return true;
    // src/unknown/C0/C0E48A.asm:4 LDX #.LOWORD(PSI_TELEPORT_SPEED_Y) + fixed_point::integer
    // Overlapping static entry reached from 0xC0E48C.
    case 0xC0E48E: cpu.execute_instruction<0x9F>(0x0000A9, 4); return true;
    // src/unknown/C0/C0E48A.asm:5 LDA #$0000
    case 0xC0E48F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:5 LDA #$0000
    // Overlapping static entry reached from 0xC0E48F.
    case 0xC0E491: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0E48A.asm:6 STA __BSS_START__,X
    case 0xC0E492: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:7 LDY #.LOWORD(PSI_TELEPORT_SPEED_X) + fixed_point::integer
    case 0xC0E495: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004B, 2); else cpu.execute_instruction<0xA0>(0x009F4B, 3); return true;
    // src/unknown/C0/C0E48A.asm:7 LDY #.LOWORD(PSI_TELEPORT_SPEED_X) + fixed_point::integer
    // Overlapping static entry reached from 0xC0E495.
    case 0xC0E497: cpu.execute_instruction<0x9F>(0x000099, 4); return true;
    // src/unknown/C0/C0E48A.asm:8 STA __BSS_START__,Y
    case 0xC0E498: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:9 LDA GAME_STATE+game_state::leader_direction
    case 0xC0E49B: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C0E48A.asm:10 BEQ @UNKNOWN0
    case 0xC0E49E: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C0/C0E48A.asm:11 CMP #$0001
    case 0xC0E4A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0E48A.asm:11 CMP #$0001
    // Overlapping static entry reached from 0xC0E4A0.
    case 0xC0E4A2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E48A.asm:12 BEQ @UNKNOWN1
    case 0xC0E4A3: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/unknown/C0/C0E48A.asm:13 CMP #$0002
    case 0xC0E4A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0E48A.asm:13 CMP #$0002
    // Overlapping static entry reached from 0xC0E4A5.
    case 0xC0E4A7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E48A.asm:14 BEQ @UNKNOWN2
    case 0xC0E4A8: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/unknown/C0/C0E48A.asm:15 CMP #$0003
    case 0xC0E4AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0E48A.asm:15 CMP #$0003
    // Overlapping static entry reached from 0xC0E4AA.
    case 0xC0E4AC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E48A.asm:16 BEQ @UNKNOWN3
    case 0xC0E4AD: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/unknown/C0/C0E48A.asm:17 CMP #$0004
    case 0xC0E4AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0E48A.asm:17 CMP #$0004
    // Overlapping static entry reached from 0xC0E4AF.
    case 0xC0E4B1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E48A.asm:18 BEQ @UNKNOWN4
    case 0xC0E4B2: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/unknown/C0/C0E48A.asm:19 CMP #$0005
    case 0xC0E4B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C0E48A.asm:19 CMP #$0005
    // Overlapping static entry reached from 0xC0E4B4.
    case 0xC0E4B6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E48A.asm:20 BEQ @UNKNOWN5
    case 0xC0E4B7: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/unknown/C0/C0E48A.asm:21 CMP #$0006
    case 0xC0E4B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C0E48A.asm:21 CMP #$0006
    // Overlapping static entry reached from 0xC0E4B9.
    case 0xC0E4BB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E48A.asm:22 BEQ @UNKNOWN6
    case 0xC0E4BC: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/unknown/C0/C0E48A.asm:23 CMP #$0007
    case 0xC0E4BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0E48A.asm:23 CMP #$0007
    // Overlapping static entry reached from 0xC0E4BE.
    case 0xC0E4C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E48A.asm:24 BEQ @UNKNOWN7
    case 0xC0E4C1: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/unknown/C0/C0E48A.asm:25 BRA @UNKNOWN8
    case 0xC0E4C3: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/unknown/C0/C0E48A.asm:27 LDA #$FFFB
    case 0xC0E4C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x00FFFB, 3); return true;
    // src/unknown/C0/C0E48A.asm:27 LDA #$FFFB
    // Overlapping static entry reached from 0xC0E4C5.
    case 0xC0E4C7: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C0/C0E48A.asm:28 STA __BSS_START__,X
    case 0xC0E4C8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:29 BRA @UNKNOWN8
    case 0xC0E4CB: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/unknown/C0/C0E48A.asm:31 LDA #$FFFB
    case 0xC0E4CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x00FFFB, 3); return true;
    // src/unknown/C0/C0E48A.asm:31 LDA #$FFFB
    // Overlapping static entry reached from 0xC0E4CD.
    case 0xC0E4CF: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C0/C0E48A.asm:32 STA __BSS_START__,X
    case 0xC0E4D0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:33 LDA #$0005
    case 0xC0E4D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0E48A.asm:33 LDA #$0005
    // Overlapping static entry reached from 0xC0E4D3.
    case 0xC0E4D5: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0E48A.asm:34 STA __BSS_START__,Y
    case 0xC0E4D6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:35 BRA @UNKNOWN8
    case 0xC0E4D9: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C0/C0E48A.asm:37 LDA #$0005
    case 0xC0E4DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0E48A.asm:37 LDA #$0005
    // Overlapping static entry reached from 0xC0E4DB.
    case 0xC0E4DD: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0E48A.asm:38 STA __BSS_START__,Y
    case 0xC0E4DE: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:39 BRA @UNKNOWN8
    case 0xC0E4E1: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/unknown/C0/C0E48A.asm:41 LDA #$0005
    case 0xC0E4E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0E48A.asm:41 LDA #$0005
    // Overlapping static entry reached from 0xC0E4E3.
    case 0xC0E4E5: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0E48A.asm:42 STA __BSS_START__,X
    case 0xC0E4E6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:43 STA __BSS_START__,Y
    case 0xC0E4E9: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:44 BRA @UNKNOWN8
    case 0xC0E4EC: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // src/unknown/C0/C0E48A.asm:46 LDA #$0005
    case 0xC0E4EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0E48A.asm:46 LDA #$0005
    // Overlapping static entry reached from 0xC0E4EE.
    case 0xC0E4F0: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0E48A.asm:47 STA __BSS_START__,X
    case 0xC0E4F1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:48 BRA @UNKNOWN8
    case 0xC0E4F4: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C0E48A.asm:50 LDA #$0005
    case 0xC0E4F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0E48A.asm:50 LDA #$0005
    // Overlapping static entry reached from 0xC0E4F6.
    case 0xC0E4F8: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0E48A.asm:51 STA __BSS_START__,X
    case 0xC0E4F9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:52 LDA #$FFFB
    case 0xC0E4FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x00FFFB, 3); return true;
    // src/unknown/C0/C0E48A.asm:52 LDA #$FFFB
    // Overlapping static entry reached from 0xC0E4FC.
    case 0xC0E4FE: cpu.execute_instruction<0xFF>(0x000099, 4); return true;
    // src/unknown/C0/C0E48A.asm:53 STA __BSS_START__,Y
    case 0xC0E4FF: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:54 BRA @UNKNOWN8
    case 0xC0E502: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C0/C0E48A.asm:56 LDA #$FFFB
    case 0xC0E504: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x00FFFB, 3); return true;
    // src/unknown/C0/C0E48A.asm:56 LDA #$FFFB
    // Overlapping static entry reached from 0xC0E504.
    case 0xC0E506: cpu.execute_instruction<0xFF>(0x000099, 4); return true;
    // src/unknown/C0/C0E48A.asm:57 STA __BSS_START__,Y
    case 0xC0E507: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:58 BRA @UNKNOWN8
    case 0xC0E50A: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C0E48A.asm:60 LDA #$FFFB
    case 0xC0E50C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x00FFFB, 3); return true;
    // src/unknown/C0/C0E48A.asm:60 LDA #$FFFB
    // Overlapping static entry reached from 0xC0E50C.
    case 0xC0E50E: cpu.execute_instruction<0xFF>(0x000099, 4); return true;
    // src/unknown/C0/C0E48A.asm:61 STA __BSS_START__,Y
    case 0xC0E50F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:62 STA __BSS_START__,X
    case 0xC0E512: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E48A.asm:64 RTS
    case 0xC0E515: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E516.asm (unresolved).
bool execute_unresolved_c0_c0e516_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E516.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0E516: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E516.asm:9 END_STACK_VARS
    case 0xC0E518: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E516.asm:9 END_STACK_VARS
    case 0xC0E519: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E516.asm:9 END_STACK_VARS
    case 0xC0E51A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E516.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E51A.
    case 0xC0E51C: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E516.asm:9 END_STACK_VARS
    case 0xC0E51D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:10 LDA #1
    case 0xC0E51E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E516.asm:10 LDA #1
    // Overlapping static entry reached from 0xC0E51E.
    case 0xC0E520: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:11 STA GAME_STATE + game_state::unknown90
    case 0xC0E521: cpu.execute_instruction<0x8D>(0x009885, 3); return true;
    // src/unknown/C0/C0E516.asm:12 JSR UNKNOWN_C0E44D
    case 0xC0E524: cpu.execute_instruction<0x20>(0x00E44D, 3); return true;
    // src/unknown/C0/C0E516.asm:13 LDX PSI_TELEPORT_BETA_PROGRESS
    case 0xC0E527: cpu.execute_instruction<0xAE>(0x009F63, 3); return true;
    // src/unknown/C0/C0E516.asm:14 LDA PSI_TELEPORT_BETA_ANGLE
    case 0xC0E52A: cpu.execute_instruction<0xAD>(0x009F61, 3); return true;
    // src/unknown/C0/C0E516.asm:15 JSL UNKNOWN_C41FFF
    case 0xC0E52D: cpu.execute_instruction<0x22>(0xC41FFF, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E516.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0E531: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E516.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0E533: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E516.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0E535: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E516.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0E537: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0E516.asm:17 AND #$FF00
    case 0xC0E539: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0E516.asm:17 AND #$FF00
    // Overlapping static entry reached from 0xC0E539.
    case 0xC0E53B: cpu.execute_instruction<0xFF>(0x0310EB, 4); return true;
    // src/unknown/C0/C0E516.asm:18 XBA
    case 0xC0E53C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:19 BPL @UNKNOWN0
    case 0xC0E53D: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/unknown/C0/C0E516.asm:20 ORA #$FF00
    case 0xC0E53F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/unknown/C0/C0E516.asm:20 ORA #$FF00
    // Overlapping static entry reached from 0xC0E53F.
    case 0xC0E541: cpu.execute_instruction<0xFF>(0x676D18, 4); return true;
    // src/unknown/C0/C0E516.asm:22 CLC
    case 0xC0E542: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:23 ADC PSI_TELEPORT_BETA_X_ADJUSTMENT
    case 0xC0E543: cpu.execute_instruction<0x6D>(0x009F67, 3); return true;
    // src/unknown/C0/C0E516.asm:23 ADC PSI_TELEPORT_BETA_X_ADJUSTMENT
    // Overlapping static entry reached from 0xC0E541.
    case 0xC0E545: cpu.execute_instruction<0x9F>(0x538EAA, 4); return true;
    // src/unknown/C0/C0E516.asm:24 TAX
    case 0xC0E546: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:25 STX PSI_TELEPORT_NEXT_X + fixed_point::integer
    case 0xC0E547: cpu.execute_instruction<0x8E>(0x009F53, 3); return true;
    // src/unknown/C0/C0E516.asm:25 STX PSI_TELEPORT_NEXT_X + fixed_point::integer
    // Overlapping static entry reached from 0xC0E545.
    case 0xC0E549: cpu.execute_instruction<0x9F>(0x2912A5, 4); return true;
    // src/unknown/C0/C0E516.asm:26 LDA @LOCAL02
    case 0xC0E54A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0E516.asm:27 AND #$FF00
    case 0xC0E54C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0E516.asm:27 AND #$FF00
    // Overlapping static entry reached from 0xC0E549.
    case 0xC0E54D: cpu.execute_instruction<0x00>(0x0000FF, 2); return true;
    // src/unknown/C0/C0E516.asm:27 AND #$FF00
    // Overlapping static entry reached from 0xC0E54C.
    case 0xC0E54E: cpu.execute_instruction<0xFF>(0x0310EB, 4); return true;
    // src/unknown/C0/C0E516.asm:28 XBA
    case 0xC0E54F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:29 BPL @UNKNOWN1
    case 0xC0E550: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/unknown/C0/C0E516.asm:30 ORA #$FF00
    case 0xC0E552: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/unknown/C0/C0E516.asm:30 ORA #$FF00
    // Overlapping static entry reached from 0xC0E552.
    case 0xC0E554: cpu.execute_instruction<0xFF>(0x696D18, 4); return true;
    // src/unknown/C0/C0E516.asm:32 CLC
    case 0xC0E555: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:33 ADC PSI_TELEPORT_BETA_Y_ADJUSTMENT
    case 0xC0E556: cpu.execute_instruction<0x6D>(0x009F69, 3); return true;
    // src/unknown/C0/C0E516.asm:33 ADC PSI_TELEPORT_BETA_Y_ADJUSTMENT
    // Overlapping static entry reached from 0xC0E554.
    case 0xC0E558: cpu.execute_instruction<0x9F>(0x8D1685, 4); return true;
    // src/unknown/C0/C0E516.asm:34 STA @LOCAL03
    case 0xC0E559: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0E516.asm:35 STA PSI_TELEPORT_NEXT_Y + fixed_point::integer
    case 0xC0E55B: cpu.execute_instruction<0x8D>(0x009F57, 3); return true;
    // src/unknown/C0/C0E516.asm:35 STA PSI_TELEPORT_NEXT_Y + fixed_point::integer
    // Overlapping static entry reached from 0xC0E558.
    case 0xC0E55C: cpu.execute_instruction<0x57>(0x00009F, 2); return true;
    // src/unknown/C0/C0E516.asm:36 LDA PSI_TELEPORT_STYLE
    case 0xC0E55E: cpu.execute_instruction<0xAD>(0x009F41, 3); return true;
    // src/unknown/C0/C0E516.asm:37 CMP #TELEPORT_STYLE::PSI_BETTER
    case 0xC0E561: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0E516.asm:37 CMP #TELEPORT_STYLE::PSI_BETTER
    // Overlapping static entry reached from 0xC0E561.
    case 0xC0E563: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E516.asm:38 BEQ @UNKNOWN4
    case 0xC0E564: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/unknown/C0/C0E516.asm:39 LDA @LOCAL03
    case 0xC0E566: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0E516.asm:40 STA @LOCAL00
    case 0xC0E568: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0E516.asm:41 LDA GAME_STATE+game_state::leader_direction
    case 0xC0E56A: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C0E516.asm:42 STA @LOCAL01
    case 0xC0E56D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0E516.asm:43 TXY
    case 0xC0E56F: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:44 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0E570: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C0E516.asm:45 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E573: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0E516.asm:46 JSR UNKNOWN_C0DED9
    case 0xC0E576: cpu.execute_instruction<0x20>(0x00DED9, 3); return true;
    // src/unknown/C0/C0E516.asm:47 AND #$00C0
    case 0xC0E579: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C0E516.asm:47 AND #$00C0
    // Overlapping static entry reached from 0xC0E579.
    case 0xC0E57B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E516.asm:48 BEQ @UNKNOWN2
    case 0xC0E57C: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0E516.asm:49 LDA #2
    case 0xC0E57E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0E516.asm:49 LDA #2
    // Overlapping static entry reached from 0xC0E57E.
    case 0xC0E580: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:50 STA PSI_TELEPORT_STATE
    case 0xC0E581: cpu.execute_instruction<0x8D>(0x009F43, 3); return true;
    // src/unknown/C0/C0E516.asm:52 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0E584: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/unknown/C0/C0E516.asm:53 BEQ @UNKNOWN3
    case 0xC0E587: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0E516.asm:54 LDA #2
    case 0xC0E589: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0E516.asm:54 LDA #2
    // Overlapping static entry reached from 0xC0E589.
    case 0xC0E58B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:55 STA PSI_TELEPORT_STATE
    case 0xC0E58C: cpu.execute_instruction<0x8D>(0x009F43, 3); return true;
    // src/unknown/C0/C0E516.asm:56 LDA #1
    case 0xC0E58F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E516.asm:56 LDA #1
    // Overlapping static entry reached from 0xC0E58F.
    case 0xC0E591: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:57 STA BATTLE_MODE
    case 0xC0E592: cpu.execute_instruction<0x8D>(0x004DC2, 3); return true;
    // src/unknown/C0/C0E516.asm:59 LDY GAME_STATE+game_state::current_party_members
    case 0xC0E595: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C0/C0E516.asm:60 LDX PSI_TELEPORT_NEXT_Y + fixed_point::integer
    case 0xC0E598: cpu.execute_instruction<0xAE>(0x009F57, 3); return true;
    // src/unknown/C0/C0E516.asm:61 LDA PSI_TELEPORT_NEXT_X + fixed_point::integer
    case 0xC0E59B: cpu.execute_instruction<0xAD>(0x009F53, 3); return true;
    // src/unknown/C0/C0E516.asm:62 JSL NPC_COLLISION_CHECK
    case 0xC0E59E: cpu.execute_instruction<0x22>(0xC05FF6, 4); return true;
    // src/unknown/C0/C0E516.asm:63 CMP #.LOWORD(-1)
    case 0xC0E5A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0E516.asm:63 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0E5A2.
    case 0xC0E5A4: cpu.execute_instruction<0xFF>(0xA906F0, 4); return true;
    // src/unknown/C0/C0E516.asm:64 BEQ @UNKNOWN4
    case 0xC0E5A5: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0E516.asm:65 LDA #2
    case 0xC0E5A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0E516.asm:65 LDA #2
    // Overlapping static entry reached from 0xC0E5A4.
    case 0xC0E5A8: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/unknown/C0/C0E516.asm:65 LDA #2
    // Overlapping static entry reached from 0xC0E5A7.
    case 0xC0E5A9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:66 STA PSI_TELEPORT_STATE
    case 0xC0E5AA: cpu.execute_instruction<0x8D>(0x009F43, 3); return true;
    // src/unknown/C0/C0E516.asm:68 LDA PSI_TELEPORT_STATE
    case 0xC0E5AD: cpu.execute_instruction<0xAD>(0x009F43, 3); return true;
    // src/unknown/C0/C0E516.asm:69 CMP #2
    case 0xC0E5B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0E516.asm:69 CMP #2
    // Overlapping static entry reached from 0xC0E5B0.
    case 0xC0E5B2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E516.asm:70 BEQ @UNKNOWN5
    case 0xC0E5B3: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0E516.asm:71 LDA PSI_TELEPORT_NEXT_X + fixed_point::integer
    case 0xC0E5B5: cpu.execute_instruction<0xAD>(0x009F53, 3); return true;
    // src/unknown/C0/C0E516.asm:72 STA GAME_STATE+game_state::leader_x_coord
    case 0xC0E5B8: cpu.execute_instruction<0x8D>(0x009877, 3); return true;
    // src/unknown/C0/C0E516.asm:73 LDA PSI_TELEPORT_NEXT_Y + fixed_point::integer
    case 0xC0E5BB: cpu.execute_instruction<0xAD>(0x009F57, 3); return true;
    // src/unknown/C0/C0E516.asm:74 STA GAME_STATE+game_state::leader_y_coord
    case 0xC0E5BE: cpu.execute_instruction<0x8D>(0x00987B, 3); return true;
    // src/unknown/C0/C0E516.asm:76 SEP #PROC_FLAGS::INDEX8
    case 0xC0E5C1: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C0E516.asm:77 LDY #13
    case 0xC0E5C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000D, 2); else cpu.execute_instruction<0xA0>(0x00AD0D, 3); return true;
    // src/unknown/C0/C0E516.asm:78 LDA PSI_TELEPORT_BETA_ANGLE
    case 0xC0E5C5: cpu.execute_instruction<0xAD>(0x009F61, 3); return true;
    // src/unknown/C0/C0E516.asm:78 LDA PSI_TELEPORT_BETA_ANGLE
    // Overlapping static entry reached from 0xC0E5C3.
    case 0xC0E5C6: cpu.execute_instruction<0x61>(0x00009F, 2); return true;
    // src/unknown/C0/C0E516.asm:79 JSL ASR8_UNKNOWN1
    case 0xC0E5C8: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C0/C0E516.asm:80 INC
    case 0xC0E5CC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:81 INC
    case 0xC0E5CD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:82 AND #$0007
    case 0xC0E5CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0E516.asm:82 AND #$0007
    // Overlapping static entry reached from 0xC0E5CE.
    case 0xC0E5D0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:83 STA GAME_STATE+game_state::leader_direction
    case 0xC0E5D1: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // src/unknown/C0/C0E516.asm:84 REP #PROC_FLAGS::INDEX8
    case 0xC0E5D4: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0E516.asm:85 LDY #.LOWORD(PSI_TELEPORT_SPEED)
    case 0xC0E5D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000045, 2); else cpu.execute_instruction<0xA0>(0x009F45, 3); return true;
    // src/unknown/C0/C0E516.asm:85 LDY #.LOWORD(PSI_TELEPORT_SPEED)
    // Overlapping static entry reached from 0xC0E5D6.
    case 0xC0E5D8: cpu.execute_instruction<0x9F>(0x0000B9, 4); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0E516.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E5D9: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0E516.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E5DC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0E516.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E5DE: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0E516.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E5E1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E516.asm:87 CLC
    case 0xC0E5E3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:88 LDA @VIRTUAL06 + fixed_point::fraction
    case 0xC0E5E4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0E516.asm:89 ADC #$1851 ;approx +0.95
    case 0xC0E5E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000051, 2); else cpu.execute_instruction<0x69>(0x001851, 3); return true;
    // src/unknown/C0/C0E516.asm:89 ADC #$1851 ;approx +0.95
    // Overlapping static entry reached from 0xC0E5E6.
    case 0xC0E5E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:90 STA @VIRTUAL06 + fixed_point::fraction
    case 0xC0E5E9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0E516.asm:91 BCC @UNKNOWN6
    case 0xC0E5EB: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C0/C0E516.asm:92 INC @VIRTUAL06 + fixed_point::integer
    case 0xC0E5ED: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C0E516.asm:94 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E5EF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C0E516.asm:94 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E5F1: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C0E516.asm:94 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E5F4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C0E516.asm:94 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E5F6: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C0E516.asm:95 LDA PSI_TELEPORT_STYLE
    case 0xC0E5F9: cpu.execute_instruction<0xAD>(0x009F41, 3); return true;
    // src/unknown/C0/C0E516.asm:96 CMP #TELEPORT_STYLE::PSI_BETA
    case 0xC0E5FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0E516.asm:96 CMP #TELEPORT_STYLE::PSI_BETA
    // Overlapping static entry reached from 0xC0E5FC.
    case 0xC0E5FE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0E516.asm:97 BNE @UNKNOWN7
    case 0xC0E5FF: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/unknown/C0/C0E516.asm:98 LDA PSI_TELEPORT_BETA_ANGLE
    case 0xC0E601: cpu.execute_instruction<0xAD>(0x009F61, 3); return true;
    // src/unknown/C0/C0E516.asm:99 CLC
    case 0xC0E604: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:100 ADC #$0A00
    case 0xC0E605: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000A00, 3); return true;
    // src/unknown/C0/C0E516.asm:100 ADC #$0A00
    // Overlapping static entry reached from 0xC0E605.
    case 0xC0E607: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:101 STA PSI_TELEPORT_BETA_ANGLE
    case 0xC0E608: cpu.execute_instruction<0x8D>(0x009F61, 3); return true;
    // src/unknown/C0/C0E516.asm:102 LDA PSI_TELEPORT_BETA_PROGRESS
    case 0xC0E60B: cpu.execute_instruction<0xAD>(0x009F63, 3); return true;
    // src/unknown/C0/C0E516.asm:103 CLC
    case 0xC0E60E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:104 ADC #12
    case 0xC0E60F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/unknown/C0/C0E516.asm:104 ADC #12
    // Overlapping static entry reached from 0xC0E60F.
    case 0xC0E611: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:105 STA PSI_TELEPORT_BETA_PROGRESS
    case 0xC0E612: cpu.execute_instruction<0x8D>(0x009F63, 3); return true;
    // src/unknown/C0/C0E516.asm:106 BRA @UNKNOWN8
    case 0xC0E615: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C0E516.asm:108 LDA PSI_TELEPORT_BETTER_PROGRESS
    case 0xC0E617: cpu.execute_instruction<0xAD>(0x009F65, 3); return true;
    // src/unknown/C0/C0E516.asm:109 CLC
    case 0xC0E61A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:110 ADC #32
    case 0xC0E61B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/unknown/C0/C0E516.asm:110 ADC #32
    // Overlapping static entry reached from 0xC0E61B.
    case 0xC0E61D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:111 STA PSI_TELEPORT_BETTER_PROGRESS
    case 0xC0E61E: cpu.execute_instruction<0x8D>(0x009F65, 3); return true;
    // src/unknown/C0/C0E516.asm:112 CLC
    case 0xC0E621: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:113 ADC PSI_TELEPORT_BETA_ANGLE
    case 0xC0E622: cpu.execute_instruction<0x6D>(0x009F61, 3); return true;
    // src/unknown/C0/C0E516.asm:114 STA PSI_TELEPORT_BETA_ANGLE
    case 0xC0E625: cpu.execute_instruction<0x8D>(0x009F61, 3); return true;
    // src/unknown/C0/C0E516.asm:115 LDA PSI_TELEPORT_BETA_PROGRESS
    case 0xC0E628: cpu.execute_instruction<0xAD>(0x009F63, 3); return true;
    // src/unknown/C0/C0E516.asm:116 CLC
    case 0xC0E62B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E516.asm:117 ADC #16
    case 0xC0E62C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C0/C0E516.asm:117 ADC #16
    // Overlapping static entry reached from 0xC0E62C.
    case 0xC0E62E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:118 STA PSI_TELEPORT_BETA_PROGRESS
    case 0xC0E62F: cpu.execute_instruction<0x8D>(0x009F63, 3); return true;
    // src/unknown/C0/C0E516.asm:120 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0E632: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C0E516.asm:121 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E635: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0E516.asm:122 JSL CENTER_SCREEN
    case 0xC0E638: cpu.execute_instruction<0x22>(0xC0400E, 4); return true;
    // src/unknown/C0/C0E516.asm:123 JSR UNKNOWN_C0E196
    case 0xC0E63C: cpu.execute_instruction<0x20>(0x00E196, 3); return true;
    // src/unknown/C0/C0E516.asm:124 JSR UNKNOWN_C0E254
    case 0xC0E63F: cpu.execute_instruction<0x20>(0x00E254, 3); return true;
    // src/unknown/C0/C0E516.asm:125 LDA PSI_TELEPORT_STYLE
    case 0xC0E642: cpu.execute_instruction<0xAD>(0x009F41, 3); return true;
    // src/unknown/C0/C0E516.asm:126 CMP #TELEPORT_STYLE::PSI_BETA
    case 0xC0E645: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0E516.asm:126 CMP #TELEPORT_STYLE::PSI_BETA
    // Overlapping static entry reached from 0xC0E645.
    case 0xC0E647: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0E516.asm:127 BNE @UNKNOWN9
    case 0xC0E648: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/unknown/C0/C0E516.asm:128 LDA PSI_TELEPORT_BETA_PROGRESS
    case 0xC0E64A: cpu.execute_instruction<0xAD>(0x009F63, 3); return true;
    // src/unknown/C0/C0E516.asm:129 CMP #$1000
    case 0xC0E64D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x001000, 3); return true;
    // src/unknown/C0/C0E516.asm:129 CMP #$1000
    // Overlapping static entry reached from 0xC0E64D.
    case 0xC0E64F: cpu.execute_instruction<0x10>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0E516.asm:130 BLTEQ @UNKNOWN10
    case 0xC0E650: cpu.execute_instruction<0x90>(0x000020, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0E516.asm:130 BLTEQ @UNKNOWN10
    // Overlapping static entry reached from 0xC0E64F.
    case 0xC0E651: cpu.execute_instruction<0x20>(0x001EF0, 3); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0E516.asm:130 BLTEQ @UNKNOWN10
    case 0xC0E652: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C0/C0E516.asm:131 LDA #1
    case 0xC0E654: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E516.asm:131 LDA #1
    // Overlapping static entry reached from 0xC0E654.
    case 0xC0E656: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:132 STA PSI_TELEPORT_STATE
    case 0xC0E657: cpu.execute_instruction<0x8D>(0x009F43, 3); return true;
    // src/unknown/C0/C0E516.asm:133 JSR UNKNOWN_C0E48A
    case 0xC0E65A: cpu.execute_instruction<0x20>(0x00E48A, 3); return true;
    // src/unknown/C0/C0E516.asm:134 BRA @UNKNOWN10
    case 0xC0E65D: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C0/C0E516.asm:136 LDA PSI_TELEPORT_BETTER_PROGRESS
    case 0xC0E65F: cpu.execute_instruction<0xAD>(0x009F65, 3); return true;
    // src/unknown/C0/C0E516.asm:137 CMP #$1800
    case 0xC0E662: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x001800, 3); return true;
    // src/unknown/C0/C0E516.asm:137 CMP #$1800
    // Overlapping static entry reached from 0xC0E662.
    case 0xC0E664: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0E516.asm:138 BLTEQ @UNKNOWN10
    case 0xC0E665: cpu.execute_instruction<0x90>(0x00000B, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0E516.asm:138 BLTEQ @UNKNOWN10
    case 0xC0E667: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C0E516.asm:139 LDA #1
    case 0xC0E669: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E516.asm:139 LDA #1
    // Overlapping static entry reached from 0xC0E669.
    case 0xC0E66B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E516.asm:140 STA PSI_TELEPORT_STATE
    case 0xC0E66C: cpu.execute_instruction<0x8D>(0x009F43, 3); return true;
    // src/unknown/C0/C0E516.asm:141 JSR UNKNOWN_C0E48A
    case 0xC0E66F: cpu.execute_instruction<0x20>(0x00E48A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E516.asm:143 END_C_FUNCTION
    case 0xC0E672: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0E516.asm:143 END_C_FUNCTION
    case 0xC0E673: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E674.asm (unresolved).
bool execute_unresolved_c0_c0e674_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0E674.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0E674: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E674.asm:5 END_STACK_VARS
    case 0xC0E676: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E674.asm:5 END_STACK_VARS
    case 0xC0E677: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E674.asm:5 END_STACK_VARS
    case 0xC0E678: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E674.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E678.
    case 0xC0E67A: cpu.execute_instruction<0xFF>(0x7FAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E674.asm:5 END_STACK_VARS
    case 0xC0E67B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:6 LDA GAME_STATE+game_state::leader_direction
    case 0xC0E67C: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C0E674.asm:6 LDA GAME_STATE+game_state::leader_direction
    // Overlapping static entry reached from 0xC0E67A.
    case 0xC0E67E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:7 JSR UNKNOWN_C0DF22
    case 0xC0E67F: cpu.execute_instruction<0x20>(0x00DF22, 3); return true;
    // src/unknown/C0/C0E674.asm:8 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    case 0xC0E682: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000075, 2); else cpu.execute_instruction<0xA0>(0x009875, 3); return true;
    // src/unknown/C0/C0E674.asm:8 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    // Overlapping static entry reached from 0xC0E682.
    case 0xC0E684: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E674.asm:9 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E685: cpu.execute_instruction<0xAD>(0x009F49, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E674.asm:9 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E688: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E674.asm:9 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E68A: cpu.execute_instruction<0xAD>(0x009F4B, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E674.asm:9 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E68D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0E674.asm:10 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E68F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0E674.asm:10 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E692: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0E674.asm:10 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E694: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0E674.asm:10 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E697: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E674.asm:11 CLC
    case 0xC0E699: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0E674.asm:12 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E69A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0E674.asm:12 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E69C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0E674.asm:12 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E69E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0E674.asm:12 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E6A0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0E674.asm:12 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E6A2: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0E674.asm:12 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E6A4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C0E674.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E6A6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C0E674.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E6A8: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C0E674.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E6AB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C0E674.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E6AD: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C0E674.asm:14 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    case 0xC0E6B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000079, 2); else cpu.execute_instruction<0xA0>(0x009879, 3); return true;
    // src/unknown/C0/C0E674.asm:14 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    // Overlapping static entry reached from 0xC0E6B0.
    case 0xC0E6B2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E674.asm:15 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E6B3: cpu.execute_instruction<0xAD>(0x009F4D, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E674.asm:15 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E6B6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E674.asm:15 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E6B8: cpu.execute_instruction<0xAD>(0x009F4F, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E674.asm:15 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E6BB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0E674.asm:16 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E6BD: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0E674.asm:16 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E6C0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0E674.asm:16 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E6C2: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0E674.asm:16 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E6C5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E674.asm:17 CLC
    case 0xC0E6C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0E674.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E6C8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0E674.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E6CA: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0E674.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E6CC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0E674.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E6CE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0E674.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E6D0: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0E674.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E6D2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C0E674.asm:19 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E6D4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C0E674.asm:19 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E6D6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C0E674.asm:19 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E6D9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C0E674.asm:19 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E6DB: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C0E674.asm:20 LDA PSI_TELEPORT_SUCCESS_SCREEN_X
    case 0xC0E6DE: cpu.execute_instruction<0xAD>(0x009F5B, 3); return true;
    // src/unknown/C0/C0E674.asm:21 CLC
    case 0xC0E6E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:22 ADC PSI_TELEPORT_SUCCESS_SCREEN_SPEED_X
    case 0xC0E6E2: cpu.execute_instruction<0x6D>(0x009F59, 3); return true;
    // src/unknown/C0/C0E674.asm:23 TAY
    case 0xC0E6E5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:24 STY PSI_TELEPORT_SUCCESS_SCREEN_X
    case 0xC0E6E6: cpu.execute_instruction<0x8C>(0x009F5B, 3); return true;
    // src/unknown/C0/C0E674.asm:25 LDA PSI_TELEPORT_SUCCESS_SCREEN_Y
    case 0xC0E6E9: cpu.execute_instruction<0xAD>(0x009F5F, 3); return true;
    // src/unknown/C0/C0E674.asm:26 CLC
    case 0xC0E6EC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:27 ADC PSI_TELEPORT_SUCCESS_SCREEN_SPEED_Y
    case 0xC0E6ED: cpu.execute_instruction<0x6D>(0x009F5D, 3); return true;
    // src/unknown/C0/C0E674.asm:28 STA PSI_TELEPORT_SUCCESS_SCREEN_Y
    case 0xC0E6F0: cpu.execute_instruction<0x8D>(0x009F5F, 3); return true;
    // src/unknown/C0/C0E674.asm:29 TAX
    case 0xC0E6F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:30 TYA
    case 0xC0E6F4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:31 JSL CENTER_SCREEN
    case 0xC0E6F5: cpu.execute_instruction<0x22>(0xC0400E, 4); return true;
    // src/unknown/C0/C0E674.asm:32 JSR UNKNOWN_C0E196
    case 0xC0E6F9: cpu.execute_instruction<0x20>(0x00E196, 3); return true;
    // src/unknown/C0/C0E674.asm:33 PLD
    case 0xC0E6FC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0E674.asm:34 RTL
    case 0xC0E6FD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E6FE.asm (unresolved).
bool execute_unresolved_c0_c0e6fe_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E6FE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0E6FE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E6FE.asm:7 END_STACK_VARS
    case 0xC0E700: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E6FE.asm:7 END_STACK_VARS
    case 0xC0E701: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E6FE.asm:7 END_STACK_VARS
    case 0xC0E702: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E6FE.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E702.
    case 0xC0E704: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E6FE.asm:7 END_STACK_VARS
    case 0xC0E705: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC0E706: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0E6FE.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0E704.
    case 0xC0E708: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:9 ASL
    case 0xC0E709: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:10 TAY
    case 0xC0E70A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:11 STY @LOCAL01
    case 0xC0E70B: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0E6FE.asm:12 LDA ENTITY_SCRIPT_VAR1_TABLE,Y
    case 0xC0E70D: cpu.execute_instruction<0xB9>(0x000E9A, 3); return true;
    // src/unknown/C0/C0E6FE.asm:13 LDY #.SIZEOF(char_struct)
    case 0xC0E710: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C0E6FE.asm:13 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC0E710.
    case 0xC0E712: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E6FE.asm:14 JSL MULT168
    case 0xC0E713: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C0E6FE.asm:15 CLC
    case 0xC0E717: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:16 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC0E718: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C0/C0E6FE.asm:16 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC0E718.
    case 0xC0E71A: cpu.execute_instruction<0x99>(0x008EAA, 3); return true;
    // src/unknown/C0/C0E6FE.asm:17 TAX
    case 0xC0E71B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:18 STX CURRENT_PARTY_MEMBER_TICK
    case 0xC0E71C: cpu.execute_instruction<0x8E>(0x004DC6, 3); return true;
    // src/unknown/C0/C0E6FE.asm:18 STX CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC0E71A.
    case 0xC0E71D: cpu.execute_instruction<0xC6>(0x00004D, 2); return true;
    // src/unknown/C0/C0E6FE.asm:19 LDA a:char_struct::position_index,X
    case 0xC0E71F: cpu.execute_instruction<0xBD>(0x00003D, 3); return true;
    // src/unknown/C0/C0E6FE.asm:20 STA @VIRTUAL04
    case 0xC0E722: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E6FE.asm:21 STA @LOCAL00
    case 0xC0E724: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0E6FE.asm:22 LDA @VIRTUAL04
    case 0xC0E726: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C0E6FE.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E728: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C0E6FE.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E72A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C0E6FE.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E72B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C0E6FE.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E72D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C0E6FE.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0E72E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:24 CLC
    case 0xC0E72F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:25 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC0E730: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x005156, 3); return true;
    // src/unknown/C0/C0E6FE.asm:25 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC0E730.
    case 0xC0E732: cpu.execute_instruction<0x51>(0x0000AA, 2); return true;
    // src/unknown/C0/C0E6FE.asm:26 TAX
    case 0xC0E733: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:27 LDY @LOCAL01
    case 0xC0E734: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C0E6FE.asm:28 LDA ENTITY_SCRIPT_VAR0_TABLE,Y
    case 0xC0E736: cpu.execute_instruction<0xB9>(0x000E5E, 3); return true;
    // src/unknown/C0/C0E6FE.asm:29 STA @VIRTUAL02
    case 0xC0E739: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E6FE.asm:30 LDA a:player_position_buffer_entry::x_coord,X
    case 0xC0E73B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E6FE.asm:31 STA ENTITY_ABS_X_TABLE,Y
    case 0xC0E73E: cpu.execute_instruction<0x99>(0x000B8E, 3); return true;
    // src/unknown/C0/C0E6FE.asm:32 LDA a:player_position_buffer_entry::y_coord,X
    case 0xC0E741: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C0E6FE.asm:33 STA ENTITY_ABS_Y_TABLE,Y
    case 0xC0E744: cpu.execute_instruction<0x99>(0x000BCA, 3); return true;
    // src/unknown/C0/C0E6FE.asm:34 LDA a:player_position_buffer_entry::direction,X
    case 0xC0E747: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/unknown/C0/C0E6FE.asm:35 STA ENTITY_DIRECTIONS,Y
    case 0xC0E74A: cpu.execute_instruction<0x99>(0x002AF6, 3); return true;
    // src/unknown/C0/C0E6FE.asm:36 LDA a:player_position_buffer_entry::tile_flags,X
    case 0xC0E74D: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C0/C0E6FE.asm:37 STA ENTITY_SURFACE_FLAGS,Y
    case 0xC0E750: cpu.execute_instruction<0x99>(0x002BAA, 3); return true;
    // src/unknown/C0/C0E6FE.asm:38 LDY CURRENT_ENTITY_SLOT
    case 0xC0E753: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/C0/C0E6FE.asm:39 LDA a:player_position_buffer_entry::walking_style,X
    case 0xC0E756: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C0/C0E6FE.asm:40 TAX
    case 0xC0E759: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E6FE.asm:41 LDA @VIRTUAL02
    case 0xC0E75A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E6FE.asm:42 JSL UNKNOWN_C07A56
    case 0xC0E75C: cpu.execute_instruction<0x22>(0xC07A56, 4); return true;
    // src/unknown/C0/C0E6FE.asm:43 LDA @LOCAL00
    case 0xC0E760: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0E6FE.asm:44 STA @VIRTUAL04
    case 0xC0E762: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E6FE.asm:45 LDX @VIRTUAL04
    case 0xC0E764: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0E6FE.asm:46 LDA @VIRTUAL02
    case 0xC0E766: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E6FE.asm:47 JSR UNKNOWN_C0E214
    case 0xC0E768: cpu.execute_instruction<0x20>(0x00E214, 3); return true;
    // src/unknown/C0/C0E6FE.asm:48 AND #$00FF
    case 0xC0E76B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0E6FE.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC0E76B.
    case 0xC0E76D: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/C0/C0E6FE.asm:49 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC0E76E: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/unknown/C0/C0E6FE.asm:50 STA a:char_struct::position_index,X
    case 0xC0E771: cpu.execute_instruction<0x9D>(0x00003D, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E6FE.asm:51 END_C_FUNCTION
    case 0xC0E774: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0E6FE.asm:51 END_C_FUNCTION
    case 0xC0E775: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E776.asm (unresolved).
bool execute_unresolved_c0_c0e776_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E776.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0E776: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E776.asm:6 END_STACK_VARS
    case 0xC0E778: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E776.asm:6 END_STACK_VARS
    case 0xC0E779: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E776.asm:6 END_STACK_VARS
    case 0xC0E77A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E776.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E77A.
    case 0xC0E77C: cpu.execute_instruction<0xFF>(0x7FAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E776.asm:6 END_STACK_VARS
    case 0xC0E77D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E776.asm:7 LDA GAME_STATE+game_state::leader_direction
    case 0xC0E77E: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C0E776.asm:7 LDA GAME_STATE+game_state::leader_direction
    // Overlapping static entry reached from 0xC0E77C.
    case 0xC0E780: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0E776.asm:8 JSR UNKNOWN_C0DF22
    case 0xC0E781: cpu.execute_instruction<0x20>(0x00DF22, 3); return true;
    // src/unknown/C0/C0E776.asm:9 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    case 0xC0E784: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000075, 2); else cpu.execute_instruction<0xA0>(0x009875, 3); return true;
    // src/unknown/C0/C0E776.asm:9 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    // Overlapping static entry reached from 0xC0E784.
    case 0xC0E786: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E776.asm:10 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E787: cpu.execute_instruction<0xAD>(0x009F49, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:10 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E78A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E776.asm:10 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E78C: cpu.execute_instruction<0xAD>(0x009F4B, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:10 MOVE_INT PSI_TELEPORT_SPEED_X, @VIRTUAL0A
    case 0xC0E78F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0E776.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E791: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E794: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0E776.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E796: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E799: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E776.asm:12 CLC
    case 0xC0E79B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0E776.asm:13 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E79C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0E776.asm:13 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E79E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:13 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E7A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0E776.asm:13 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E7A2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0E776.asm:13 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E7A4: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:13 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E7A6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C0E776.asm:14 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E7A8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C0E776.asm:14 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E7AA: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C0E776.asm:14 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E7AD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C0E776.asm:14 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E7AF: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C0E776.asm:15 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    case 0xC0E7B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000079, 2); else cpu.execute_instruction<0xA0>(0x009879, 3); return true;
    // src/unknown/C0/C0E776.asm:15 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    // Overlapping static entry reached from 0xC0E7B2.
    case 0xC0E7B4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E776.asm:16 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E7B5: cpu.execute_instruction<0xAD>(0x009F4D, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:16 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E7B8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E776.asm:16 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E7BA: cpu.execute_instruction<0xAD>(0x009F4F, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:16 MOVE_INT PSI_TELEPORT_SPEED_Y, @VIRTUAL0A
    case 0xC0E7BD: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0E776.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E7BF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E7C2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0E776.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E7C4: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0E7C7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E776.asm:18 CLC
    case 0xC0E7C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E7CA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E7CC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E7CE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E830.
    case 0xC0E7CF: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E7D0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E7CF.
    case 0xC0E7D1: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E7D2: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:19 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0E7D4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C0E776.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E7D6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C0E776.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E7D8: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C0E776.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E7DB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C0E776.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0E7DD: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0E776.asm:21 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC0E7E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0E776.asm:21 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E7E0.
    case 0xC0E7E2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:21 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC0E7E3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0E776.asm:21 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC0E7E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0E776.asm:21 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E7E5.
    case 0xC0E7E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:21 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC0E7E8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E776.asm:22 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0E7EA: cpu.execute_instruction<0xAD>(0x009F45, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:22 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0E7ED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E776.asm:22 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0E7EF: cpu.execute_instruction<0xAD>(0x009F47, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:22 MOVE_INT PSI_TELEPORT_SPEED, @VIRTUAL06
    case 0xC0E7F2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0E776.asm:23 JSL MULT32
    case 0xC0E7F4: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0E776.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0E7F8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0E776.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0E7FA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0E776.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0E7FC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0E776.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0E7FE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0E776.asm:25 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0E800: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C0E776.asm:26 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E803: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0E776.asm:27 SEC
    case 0xC0E806: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0E776.asm:28 SBC @LOCAL00 + fixed_point::integer
    case 0xC0E807: cpu.execute_instruction<0xE5>(0x000010, 2); return true;
    // src/unknown/C0/C0E776.asm:29 JSL CENTER_SCREEN
    case 0xC0E809: cpu.execute_instruction<0x22>(0xC0400E, 4); return true;
    // src/unknown/C0/C0E776.asm:30 JSR UNKNOWN_C0E196
    case 0xC0E80D: cpu.execute_instruction<0x20>(0x00E196, 3); return true;
    // src/unknown/C0/C0E776.asm:31 JSR UNKNOWN_C0E254
    case 0xC0E810: cpu.execute_instruction<0x20>(0x00E254, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E776.asm:32 END_C_FUNCTION
    case 0xC0E813: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0E776.asm:32 END_C_FUNCTION
    case 0xC0E814: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E815.asm (unresolved).
bool execute_unresolved_c0_c0e815_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E815.asm:3 BEGIN_C_FUNCTION
    case 0xC0E815: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E815.asm:9 END_STACK_VARS
    case 0xC0E817: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E815.asm:9 END_STACK_VARS
    case 0xC0E818: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E815.asm:9 END_STACK_VARS
    case 0xC0E819: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E815.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E819.
    case 0xC0E81B: cpu.execute_instruction<0xFF>(0x41AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E815.asm:9 END_STACK_VARS
    case 0xC0E81C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E815.asm:10 LDA PSI_TELEPORT_STYLE
    case 0xC0E81D: cpu.execute_instruction<0xAD>(0x009F41, 3); return true;
    // src/unknown/C0/C0E815.asm:10 LDA PSI_TELEPORT_STYLE
    // Overlapping static entry reached from 0xC0E81B.
    case 0xC0E81F: cpu.execute_instruction<0x9F>(0x0003C9, 4); return true;
    // src/unknown/C0/C0E815.asm:11 CMP #TELEPORT_STYLE::INSTANT
    case 0xC0E820: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0E815.asm:11 CMP #TELEPORT_STYLE::INSTANT
    // Overlapping static entry reached from 0xC0E820.
    case 0xC0E822: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0E815.asm:12 BEQ @UNKNOWN2
    case 0xC0E823: cpu.execute_instruction<0xF0>(0x000070, 2); return true;
    // src/unknown/C0/C0E815.asm:13 LDA #24
    case 0xC0E825: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0E815.asm:13 LDA #24
    // Overlapping static entry reached from 0xC0E825.
    case 0xC0E827: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0E815.asm:14 STA @LOCAL03
    case 0xC0E828: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0E815.asm:15 BRA @UNKNOWN1
    case 0xC0E82A: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0E815.asm:17 ASL
    case 0xC0E82C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E815.asm:18 TAX
    case 0xC0E82D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E815.asm:19 LDA #ENTITY_COLLISION_DISABLED
    case 0xC0E82E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C0/C0E815.asm:19 LDA #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC0E82E.
    case 0xC0E830: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C0/C0E815.asm:20 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0E831: cpu.execute_instruction<0x9D>(0x00289E, 3); return true;
    // src/unknown/C0/C0E815.asm:21 LDA @LOCAL03
    case 0xC0E834: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0E815.asm:22 INC
    case 0xC0E836: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E815.asm:23 STA @LOCAL03
    case 0xC0E837: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0E815.asm:25 CMP #MAX_ENTITIES
    case 0xC0E839: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0E815.asm:25 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0E839.
    case 0xC0E83B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0E815.asm:26 BCC @UNKNOWN0
    case 0xC0E83C: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // src/unknown/C0/C0E815.asm:27 LDY #.LOWORD(PSI_TELEPORT_SPEED_Y) + fixed_point::integer
    case 0xC0E83E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004F, 2); else cpu.execute_instruction<0xA0>(0x009F4F, 3); return true;
    // src/unknown/C0/C0E815.asm:27 LDY #.LOWORD(PSI_TELEPORT_SPEED_Y) + fixed_point::integer
    // Overlapping static entry reached from 0xC0E83E.
    case 0xC0E840: cpu.execute_instruction<0x9F>(0xA91684, 4); return true;
    // src/unknown/C0/C0E815.asm:28 STY @LOCAL02
    case 0xC0E841: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C0/C0E815.asm:29 LDA #00
    case 0xC0E843: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0E815.asm:29 LDA #00
    // Overlapping static entry reached from 0xC0E840.
    case 0xC0E844: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0E815.asm:29 LDA #00
    // Overlapping static entry reached from 0xC0E843.
    case 0xC0E845: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C0E815.asm:30 STA __BSS_START__,Y
    case 0xC0E846: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C0E815.asm:31 LDX #.LOWORD(PSI_TELEPORT_SPEED_X) + fixed_point::integer
    case 0xC0E849: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004B, 2); else cpu.execute_instruction<0xA2>(0x009F4B, 3); return true;
    // src/unknown/C0/C0E815.asm:31 LDX #.LOWORD(PSI_TELEPORT_SPEED_X) + fixed_point::integer
    // Overlapping static entry reached from 0xC0E849.
    case 0xC0E84B: cpu.execute_instruction<0x9F>(0x9D1886, 4); return true;
    // src/unknown/C0/C0E815.asm:32 STX @LOCAL03
    case 0xC0E84C: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C0E815.asm:33 STA __BSS_START__,X
    case 0xC0E84E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E815.asm:33 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0E84B.
    case 0xC0E84F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:34 LOADPTR UNKNOWN_C0E674, @LOCAL00
    case 0xC0E851: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000074, 2); else cpu.execute_instruction<0xA9>(0x00E674, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:34 LOADPTR UNKNOWN_C0E674, @LOCAL00
    // Overlapping static entry reached from 0xC0E851.
    case 0xC0E853: cpu.execute_instruction<0xE6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E815.asm:34 LOADPTR UNKNOWN_C0E674, @LOCAL00
    case 0xC0E854: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E815.asm:34 LOADPTR UNKNOWN_C0E674, @LOCAL00
    // Overlapping static entry reached from 0xC0E853.
    case 0xC0E855: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:34 LOADPTR UNKNOWN_C0E674, @LOCAL00
    case 0xC0E856: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:34 LOADPTR UNKNOWN_C0E674, @LOCAL00
    // Overlapping static entry reached from 0xC0E856.
    case 0xC0E858: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E815.asm:34 LOADPTR UNKNOWN_C0E674, @LOCAL00
    case 0xC0E859: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E85B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x00E3C1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E85B.
    case 0xC0E85D: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E85E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E85D.
    case 0xC0E85F: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E860: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E85F.
    case 0xC0E861: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E860.
    case 0xC0E862: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E863: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E815.asm:35 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E861.
    case 0xC0E864: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/unknown/C0/C0E815.asm:36 LDA #23
    case 0xC0E865: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/C0/C0E815.asm:36 LDA #23
    // Overlapping static entry reached from 0xC0E864.
    case 0xC0E866: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/unknown/C0/C0E815.asm:36 LDA #23
    // Overlapping static entry reached from 0xC0E865.
    case 0xC0E867: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E815.asm:37 JSL SET_PARTY_TICK_CALLBACKS
    case 0xC0E868: cpu.execute_instruction<0x22>(0xC42F45, 4); return true;
    // src/unknown/C0/C0E815.asm:38 LDX @LOCAL03
    case 0xC0E86C: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0E815.asm:39 LDA __BSS_START__,X
    case 0xC0E86E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E815.asm:40 STA PSI_TELEPORT_SUCCESS_SCREEN_SPEED_X
    case 0xC0E871: cpu.execute_instruction<0x8D>(0x009F59, 3); return true;
    // src/unknown/C0/C0E815.asm:41 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E874: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0E815.asm:42 STA PSI_TELEPORT_SUCCESS_SCREEN_X
    case 0xC0E877: cpu.execute_instruction<0x8D>(0x009F5B, 3); return true;
    // src/unknown/C0/C0E815.asm:43 LDY @LOCAL02
    case 0xC0E87A: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C0E815.asm:44 LDA __BSS_START__,Y
    case 0xC0E87C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C0E815.asm:45 STA PSI_TELEPORT_SUCCESS_SCREEN_SPEED_Y
    case 0xC0E87F: cpu.execute_instruction<0x8D>(0x009F5D, 3); return true;
    // src/unknown/C0/C0E815.asm:46 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0E882: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C0E815.asm:47 STA PSI_TELEPORT_SUCCESS_SCREEN_Y
    case 0xC0E885: cpu.execute_instruction<0x8D>(0x009F5F, 3); return true;
    // src/unknown/C0/C0E815.asm:48 LDX #4
    case 0xC0E888: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C0/C0E815.asm:48 LDX #4
    // Overlapping static entry reached from 0xC0E888.
    case 0xC0E88A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0E815.asm:49 LDA #1
    case 0xC0E88B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E815.asm:49 LDA #1
    // Overlapping static entry reached from 0xC0E88B.
    case 0xC0E88D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E815.asm:50 JSL FADE_OUT
    case 0xC0E88E: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/unknown/C0/C0E815.asm:51 JSR UNKNOWN_C0DD0F
    case 0xC0E892: cpu.execute_instruction<0x20>(0x00DD0F, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E815.asm:53 END_C_FUNCTION
    case 0xC0E895: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0E815.asm:53 END_C_FUNCTION
    case 0xC0E896: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E897.asm (unresolved).
bool execute_unresolved_c0_c0e897_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E897.asm:3 BEGIN_C_FUNCTION
    case 0xC0E897: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E897.asm:9 END_STACK_VARS
    case 0xC0E899: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E897.asm:9 END_STACK_VARS
    case 0xC0E89A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E897.asm:9 END_STACK_VARS
    case 0xC0E89B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E897.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E89B.
    case 0xC0E89D: cpu.execute_instruction<0xFF>(0x41AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E897.asm:9 END_STACK_VARS
    case 0xC0E89E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:10 LDA PSI_TELEPORT_STYLE
    case 0xC0E89F: cpu.execute_instruction<0xAD>(0x009F41, 3); return true;
    // src/unknown/C0/C0E897.asm:10 LDA PSI_TELEPORT_STYLE
    // Overlapping static entry reached from 0xC0E89D.
    case 0xC0E8A1: cpu.execute_instruction<0x9F>(0x0003C9, 4); return true;
    // src/unknown/C0/C0E897.asm:11 CMP #TELEPORT_STYLE::INSTANT
    case 0xC0E8A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0E897.asm:11 CMP #TELEPORT_STYLE::INSTANT
    // Overlapping static entry reached from 0xC0E8A2.
    case 0xC0E8A4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0E897.asm:12 BNE @UNKNOWN0
    case 0xC0E8A5: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/unknown/C0/C0E897.asm:13 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0E8A7: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C0E897.asm:14 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E8AA: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0E897.asm:15 JSL CENTER_SCREEN
    case 0xC0E8AD: cpu.execute_instruction<0x22>(0xC0400E, 4); return true;
    // src/unknown/C0/C0E897.asm:16 LDX #1
    case 0xC0E8B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0E897.asm:16 LDX #1
    // Overlapping static entry reached from 0xC0E8B1.
    case 0xC0E8B3: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C0/C0E897.asm:17 TXA
    case 0xC0E8B4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:18 JSL FADE_IN
    case 0xC0E8B5: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/C0/C0E897.asm:19 JSR UNKNOWN_C0DD0F
    case 0xC0E8B9: cpu.execute_instruction<0x20>(0x00DD0F, 3); return true;
    // src/unknown/C0/C0E897.asm:20 JMP @UNKNOWN7
    case 0xC0E8BC: cpu.execute_instruction<0x4C>(0x00E977, 3); return true;
    // src/unknown/C0/C0E897.asm:22 LDA #0
    case 0xC0E8BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0E897.asm:22 LDA #0
    // Overlapping static entry reached from 0xC0E8BF.
    case 0xC0E8C1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0E897.asm:23 STA @VIRTUAL02
    case 0xC0E8C2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E897.asm:24 BRA @UNKNOWN2
    case 0xC0E8C4: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C0/C0E897.asm:26 LDA @VIRTUAL02
    case 0xC0E8C6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E897.asm:27 LDY #.SIZEOF(char_struct)
    case 0xC0E8C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C0E897.asm:27 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC0E8C8.
    case 0xC0E8CA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E897.asm:28 JSL MULT168
    case 0xC0E8CB: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C0E897.asm:29 TAX
    case 0xC0E8CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:30 LDA #.LOWORD(-1)
    case 0xC0E8D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0E897.asm:30 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0E8D0.
    case 0xC0E8D2: cpu.execute_instruction<0xFF>(0x9A059D, 4); return true;
    // src/unknown/C0/C0E897.asm:31 STA PARTY_CHARACTERS + char_struct::unknown55,X
    case 0xC0E8D3: cpu.execute_instruction<0x9D>(0x009A05, 3); return true;
    // src/unknown/C0/C0E897.asm:32 LDA @VIRTUAL02
    case 0xC0E8D6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E897.asm:33 CLC
    case 0xC0E8D8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:34 ADC #24
    case 0xC0E8D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000018, 2); else cpu.execute_instruction<0x69>(0x000018, 3); return true;
    // src/unknown/C0/C0E897.asm:34 ADC #24
    // Overlapping static entry reached from 0xC0E8D9.
    case 0xC0E8DB: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C0E897.asm:35 TAY
    case 0xC0E8DC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:36 LDX #0
    case 0xC0E8DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0E897.asm:36 LDX #0
    // Overlapping static entry reached from 0xC0E8DD.
    case 0xC0E8DF: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0E897.asm:37 STX @LOCAL03
    case 0xC0E8E0: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C0E897.asm:45 LDX @VIRTUAL02
    case 0xC0E8E2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E897.asm:46 LDA GAME_STATE + game_state::unknown96,X
    case 0xC0E8E4: cpu.execute_instruction<0xBD>(0x00988B, 3); return true;
    // src/unknown/C0/C0E897.asm:48 AND #$00FF
    case 0xC0E8E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0E897.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC0E8E7.
    case 0xC0E8E9: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C0/C0E897.asm:49 DEC
    case 0xC0E8EA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:50 LDX @LOCAL03
    case 0xC0E8EB: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0E897.asm:51 JSL UNKNOWN_C07A56
    case 0xC0E8ED: cpu.execute_instruction<0x22>(0xC07A56, 4); return true;
    // src/unknown/C0/C0E897.asm:52 INC @VIRTUAL02
    case 0xC0E8F1: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0E897.asm:54 LDA @VIRTUAL02
    case 0xC0E8F3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0E897.asm:55 CMP #6
    case 0xC0E8F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C0E897.asm:55 CMP #6
    // Overlapping static entry reached from 0xC0E8F5.
    case 0xC0E8F7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0E897.asm:56 BCC @UNKNOWN1
    case 0xC0E8F8: cpu.execute_instruction<0x90>(0x0000CC, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0E897.asm:57 MOVE_INT_CONSTANT $00080000, PSI_TELEPORT_SPEED
    case 0xC0E8FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C0E897.asm:57 MOVE_INT_CONSTANT $00080000, PSI_TELEPORT_SPEED
    // Overlapping static entry reached from 0xC0E8FA.
    case 0xC0E8FC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C0E897.asm:57 MOVE_INT_CONSTANT $00080000, PSI_TELEPORT_SPEED
    case 0xC0E8FD: cpu.execute_instruction<0x8D>(0x009F45, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0E897.asm:57 MOVE_INT_CONSTANT $00080000, PSI_TELEPORT_SPEED
    case 0xC0E900: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C0E897.asm:57 MOVE_INT_CONSTANT $00080000, PSI_TELEPORT_SPEED
    // Overlapping static entry reached from 0xC0E900.
    case 0xC0E902: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C0E897.asm:57 MOVE_INT_CONSTANT $00080000, PSI_TELEPORT_SPEED
    case 0xC0E903: cpu.execute_instruction<0x8D>(0x009F47, 3); return true;
    // src/unknown/C0/C0E897.asm:58 LDA #6
    case 0xC0E906: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C0E897.asm:58 LDA #6
    // Overlapping static entry reached from 0xC0E906.
    case 0xC0E908: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E897.asm:59 STA GAME_STATE+game_state::leader_direction
    case 0xC0E909: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // src/unknown/C0/C0E897.asm:60 LDA #3
    case 0xC0E90C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0E897.asm:60 LDA #3
    // Overlapping static entry reached from 0xC0E90C.
    case 0xC0E90E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E897.asm:61 STA PSI_TELEPORT_STATE
    case 0xC0E90F: cpu.execute_instruction<0x8D>(0x009F43, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:62 LOADPTR UNKNOWN_C0E776, @LOCAL00
    case 0xC0E912: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x00E776, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:62 LOADPTR UNKNOWN_C0E776, @LOCAL00
    // Overlapping static entry reached from 0xC0E912.
    case 0xC0E914: cpu.execute_instruction<0xE7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E897.asm:62 LOADPTR UNKNOWN_C0E776, @LOCAL00
    case 0xC0E915: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E897.asm:62 LOADPTR UNKNOWN_C0E776, @LOCAL00
    // Overlapping static entry reached from 0xC0E914.
    case 0xC0E916: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:62 LOADPTR UNKNOWN_C0E776, @LOCAL00
    case 0xC0E917: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:62 LOADPTR UNKNOWN_C0E776, @LOCAL00
    // Overlapping static entry reached from 0xC0E917.
    case 0xC0E919: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E897.asm:62 LOADPTR UNKNOWN_C0E776, @LOCAL00
    case 0xC0E91A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E91C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x00E3C1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E91C.
    case 0xC0E91E: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E91F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E91E.
    case 0xC0E920: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E921: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E920.
    case 0xC0E922: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E921.
    case 0xC0E923: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    case 0xC0E924: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E897.asm:63 LOADPTR UNKNOWN_C0E3C1, @LOCAL01
    // Overlapping static entry reached from 0xC0E922.
    case 0xC0E925: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/unknown/C0/C0E897.asm:64 LDA #23
    case 0xC0E926: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/C0/C0E897.asm:64 LDA #23
    // Overlapping static entry reached from 0xC0E925.
    case 0xC0E927: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/unknown/C0/C0E897.asm:64 LDA #23
    // Overlapping static entry reached from 0xC0E926.
    case 0xC0E928: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E897.asm:65 JSL SET_PARTY_TICK_CALLBACKS
    case 0xC0E929: cpu.execute_instruction<0x22>(0xC42F45, 4); return true;
    // src/unknown/C0/C0E897.asm:66 JSR UNKNOWN_C0DE16
    case 0xC0E92D: cpu.execute_instruction<0x20>(0x00DE16, 3); return true;
    // src/unknown/C0/C0E897.asm:67 LDA #MUSIC::TELEPORT_IN
    case 0xC0E930: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000087, 2); else cpu.execute_instruction<0xA9>(0x000087, 3); return true;
    // src/unknown/C0/C0E897.asm:67 LDA #MUSIC::TELEPORT_IN
    // Overlapping static entry reached from 0xC0E930.
    case 0xC0E932: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E897.asm:68 JSL CHANGE_MUSIC
    case 0xC0E933: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/C0/C0E897.asm:69 LDX #0
    case 0xC0E937: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0E897.asm:69 LDX #0
    // Overlapping static entry reached from 0xC0E937.
    case 0xC0E939: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0E897.asm:70 STX @LOCAL02
    case 0xC0E93A: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C0E897.asm:71 BRA @UNKNOWN4
    case 0xC0E93C: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C0E897.asm:73 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0E93E: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C0E897.asm:74 LDX @LOCAL02
    case 0xC0E942: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C0E897.asm:75 INX
    case 0xC0E944: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0E897.asm:76 STX @LOCAL02
    case 0xC0E945: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C0E897.asm:78 CPX #30
    case 0xC0E947: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/unknown/C0/C0E897.asm:78 CPX #30
    // Overlapping static entry reached from 0xC0E947.
    case 0xC0E949: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0E897.asm:79 BCC @UNKNOWN3
    case 0xC0E94A: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // src/unknown/C0/C0E897.asm:80 LDX #4
    case 0xC0E94C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C0/C0E897.asm:80 LDX #4
    // Overlapping static entry reached from 0xC0E94C.
    case 0xC0E94E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0E897.asm:81 LDA #1
    case 0xC0E94F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E897.asm:81 LDA #1
    // Overlapping static entry reached from 0xC0E94F.
    case 0xC0E951: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E897.asm:82 JSL FADE_IN
    case 0xC0E952: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/C0/C0E897.asm:83 BRA @UNKNOWN6
    case 0xC0E956: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C0/C0E897.asm:85 JSL OAM_CLEAR
    case 0xC0E958: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/C0/C0E897.asm:86 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0E95C: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/unknown/C0/C0E897.asm:87 JSL UPDATE_SCREEN
    case 0xC0E960: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/unknown/C0/C0E897.asm:88 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0E964: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C0E897.asm:90 LDA PSI_TELEPORT_SPEED + fixed_point::integer
    case 0xC0E968: cpu.execute_instruction<0xAD>(0x009F47, 3); return true;
    // src/unknown/C0/C0E897.asm:91 BNE @UNKNOWN5
    case 0xC0E96B: cpu.execute_instruction<0xD0>(0x0000EB, 2); return true;
    // src/unknown/C0/C0E897.asm:92 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0E96D: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C0E897.asm:93 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0E970: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C0E897.asm:94 JSL CENTER_SCREEN
    case 0xC0E973: cpu.execute_instruction<0x22>(0xC0400E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E897.asm:96 END_C_FUNCTION
    case 0xC0E977: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0E897.asm:96 END_C_FUNCTION
    case 0xC0E978: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E979.asm (unresolved).
bool execute_unresolved_c0_c0e979_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0E979.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0E979: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0E979.asm:4 RTL
    case 0xC0E97B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E97C.asm (unresolved).
bool execute_unresolved_c0_c0e97c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E97C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0E97C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E97C.asm:6 END_STACK_VARS
    case 0xC0E97E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E97C.asm:6 END_STACK_VARS
    case 0xC0E97F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E97C.asm:6 END_STACK_VARS
    case 0xC0E980: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E97C.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E980.
    case 0xC0E982: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E97C.asm:6 END_STACK_VARS
    case 0xC0E983: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E97C.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC0E984: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0E97C.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0E982.
    case 0xC0E986: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E97C.asm:8 STA @VIRTUAL04
    case 0xC0E987: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0E97C.asm:9 ASL
    case 0xC0E989: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E97C.asm:10 STA @VIRTUAL02
    case 0xC0E98A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0E97C.asm:11 LDY @VIRTUAL04
    case 0xC0E98C: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C0/C0E97C.asm:12 LDX @VIRTUAL02
    case 0xC0E98E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E97C.asm:13 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0E990: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0E97C.asm:14 TAX
    case 0xC0E993: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E97C.asm:15 STX @LOCAL00
    case 0xC0E994: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0E97C.asm:16 LDX @VIRTUAL02
    case 0xC0E996: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E97C.asm:17 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0E998: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0E97C.asm:18 LDX @LOCAL00
    case 0xC0E99B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0E97C.asm:19 JSL UNKNOWN_C05F33
    case 0xC0E99D: cpu.execute_instruction<0x22>(0xC05F33, 4); return true;
    // src/unknown/C0/C0E97C.asm:20 LDX @VIRTUAL02
    case 0xC0E9A1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E97C.asm:21 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0E9A3: cpu.execute_instruction<0x9D>(0x002BAA, 3); return true;
    // src/unknown/C0/C0E97C.asm:22 LDY @VIRTUAL04
    case 0xC0E9A6: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C0/C0E97C.asm:23 LDX #.LOWORD(-1)
    case 0xC0E9A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0E97C.asm:23 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0E9A8.
    case 0xC0E9AA: cpu.execute_instruction<0xFF>(0xA60E86, 4); return true;
    // src/unknown/C0/C0E97C.asm:24 STX @LOCAL00
    case 0xC0E9AB: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C0E97C.asm:25 LDX @VIRTUAL02
    case 0xC0E9AD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C0E97C.asm:25 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC0E9AA.
    case 0xC0E9AE: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/unknown/C0/C0E97C.asm:26 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC0E9AF: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C0/C0E97C.asm:27 LDX @LOCAL00
    case 0xC0E9B2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C0E97C.asm:28 JSL UNKNOWN_C07A56
    case 0xC0E9B4: cpu.execute_instruction<0x22>(0xC07A56, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E97C.asm:29 END_C_FUNCTION
    case 0xC0E9B8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0E97C.asm:29 END_C_FUNCTION
    case 0xC0E9B9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0E9BA.asm (unresolved).
bool execute_unresolved_c0_c0e9ba_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0E9BA.asm:3 BEGIN_C_FUNCTION
    case 0xC0E9BA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0E9BA.asm:8 END_STACK_VARS
    case 0xC0E9BC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0E9BA.asm:8 END_STACK_VARS
    case 0xC0E9BD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E9BA.asm:8 END_STACK_VARS
    case 0xC0E9BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0E9BA.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0E9BE.
    case 0xC0E9C0: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0E9BA.asm:8 END_STACK_VARS
    case 0xC0E9C1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0E9BA.asm:9 LDA #1
    case 0xC0E9C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0E9BA.asm:9 LDA #1
    // Overlapping static entry reached from 0xC0E9C2.
    case 0xC0E9C4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0E9BA.asm:10 STA DISABLED_TRANSITIONS
    case 0xC0E9C5: cpu.execute_instruction<0x8D>(0x00B4B6, 3); return true;
    // src/unknown/C0/C0E9BA.asm:11 LDA #MUSIC::TELEPORT_FAIL
    case 0xC0E9C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C0/C0E9BA.asm:11 LDA #MUSIC::TELEPORT_FAIL
    // Overlapping static entry reached from 0xC0E9C8.
    case 0xC0E9CA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E9BA.asm:12 JSL CHANGE_MUSIC
    case 0xC0E9CB: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/C0/C0E9BA.asm:13 LDA #PARTY_LEADER_ENTITY_INDEX
    case 0xC0E9CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0E9BA.asm:13 LDA #PARTY_LEADER_ENTITY_INDEX
    // Overlapping static entry reached from 0xC0E9CF.
    case 0xC0E9D1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0E9BA.asm:14 STA @LOCAL02
    case 0xC0E9D2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0E9BA.asm:15 BRA @UNKNOWN1
    case 0xC0E9D4: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C0E9BA.asm:17 ASL
    case 0xC0E9D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0E9BA.asm:18 CLC
    case 0xC0E9D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0E9BA.asm:19 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC0E9D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x001002, 3); return true;
    // src/unknown/C0/C0E9BA.asm:19 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC0E9D8.
    case 0xC0E9DA: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C0E9BA.asm:20 TAX
    case 0xC0E9DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0E9BA.asm:21 LDA __BSS_START__,X
    case 0xC0E9DC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0E9BA.asm:22 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN15
    case 0xC0E9DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C0/C0E9BA.asm:22 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN15
    // Overlapping static entry reached from 0xC0E9DF.
    case 0xC0E9E1: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C0/C0E9BA.asm:23 STA __BSS_START__,X
    case 0xC0E9E2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0E9BA.asm:24 LDA @LOCAL02
    case 0xC0E9E5: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C0E9BA.asm:25 INC
    case 0xC0E9E7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0E9BA.asm:26 STA @LOCAL02
    case 0xC0E9E8: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0E9BA.asm:28 CMP #MAX_ENTITIES
    case 0xC0E9EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0E9BA.asm:28 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0E9EA.
    case 0xC0E9EC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0E9BA.asm:29 BCC @UNKNOWN0
    case 0xC0E9ED: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:30 LOADPTR UNKNOWN_C0E979, @LOCAL00
    case 0xC0E9EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x00E979, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:30 LOADPTR UNKNOWN_C0E979, @LOCAL00
    // Overlapping static entry reached from 0xC0E9EF.
    case 0xC0E9F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000085, 2); else cpu.execute_instruction<0xE9>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E9BA.asm:30 LOADPTR UNKNOWN_C0E979, @LOCAL00
    case 0xC0E9F2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E9BA.asm:30 LOADPTR UNKNOWN_C0E979, @LOCAL00
    // Overlapping static entry reached from 0xC0E9F1.
    case 0xC0E9F3: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:30 LOADPTR UNKNOWN_C0E979, @LOCAL00
    case 0xC0E9F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:30 LOADPTR UNKNOWN_C0E979, @LOCAL00
    // Overlapping static entry reached from 0xC0E9F4.
    case 0xC0E9F6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E9BA.asm:30 LOADPTR UNKNOWN_C0E979, @LOCAL00
    case 0xC0E9F7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    case 0xC0E9F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x00E97C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    // Overlapping static entry reached from 0xC0E9F9.
    case 0xC0E9FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000085, 2); else cpu.execute_instruction<0xE9>(0x001285, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    case 0xC0E9FC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    // Overlapping static entry reached from 0xC0E9FB.
    case 0xC0E9FD: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    case 0xC0E9FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    // Overlapping static entry reached from 0xC0E9FD.
    case 0xC0E9FF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    // Overlapping static entry reached from 0xC0E9FE.
    case 0xC0EA00: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    case 0xC0EA01: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0E9BA.asm:31 LOADPTR UNKNOWN_C0E97C, @LOCAL01
    // Overlapping static entry reached from 0xC0E9FF.
    case 0xC0EA02: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/unknown/C0/C0E9BA.asm:32 LDA #23
    case 0xC0EA03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/C0/C0E9BA.asm:32 LDA #23
    // Overlapping static entry reached from 0xC0EA02.
    case 0xC0EA04: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/unknown/C0/C0E9BA.asm:32 LDA #23
    // Overlapping static entry reached from 0xC0EA03.
    case 0xC0EA05: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0E9BA.asm:33 JSL SET_PARTY_TICK_CALLBACKS
    case 0xC0EA06: cpu.execute_instruction<0x22>(0xC42F45, 4); return true;
    // src/unknown/C0/C0E9BA.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EA0A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0E9BA.asm:35 LDA #1
    case 0xC0EA0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C0/C0E9BA.asm:36 STA GAME_STATE + game_state::party_status
    case 0xC0EA0E: cpu.execute_instruction<0x8D>(0x009840, 3); return true;
    // src/unknown/C0/C0E9BA.asm:36 STA GAME_STATE + game_state::party_status
    // Overlapping static entry reached from 0xC0EA0C.
    case 0xC0EA0F: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C0E9BA.asm:37 LDX #0
    case 0xC0EA11: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0E9BA.asm:37 LDX #0
    // Overlapping static entry reached from 0xC0EA11.
    case 0xC0EA13: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C0E9BA.asm:38 STX @LOCAL02
    case 0xC0EA14: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C0E9BA.asm:39 BRA @UNKNOWN3
    case 0xC0EA16: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C0E9BA.asm:41 JSL OAM_CLEAR
    case 0xC0EA18: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/C0/C0E9BA.asm:42 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0EA1C: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/unknown/C0/C0E9BA.asm:43 JSL UPDATE_SCREEN
    case 0xC0EA20: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/unknown/C0/C0E9BA.asm:44 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0EA24: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C0E9BA.asm:44 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC0EA7A.
    case 0xC0EA26: cpu.execute_instruction<0x87>(0x0000C0, 2); return true;
    // src/unknown/C0/C0E9BA.asm:45 LDX @LOCAL02
    case 0xC0EA28: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C0E9BA.asm:46 INX
    case 0xC0EA2A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0E9BA.asm:47 STX @LOCAL02
    case 0xC0EA2B: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C0E9BA.asm:49 CPX #180
    case 0xC0EA2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000B4, 2); else cpu.execute_instruction<0xE0>(0x0000B4, 3); return true;
    // src/unknown/C0/C0E9BA.asm:49 CPX #180
    // Overlapping static entry reached from 0xC0EA2D.
    case 0xC0EA2F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0E9BA.asm:50 BCC @UNKNOWN2
    case 0xC0EA30: cpu.execute_instruction<0x90>(0x0000E6, 2); return true;
    // src/unknown/C0/C0E9BA.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EA32: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0E9BA.asm:52 STZ GAME_STATE + game_state::party_status
    case 0xC0EA34: cpu.execute_instruction<0x9C>(0x009840, 3); return true;
    // src/unknown/C0/C0E9BA.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC0EA37: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0E9BA.asm:54 STZ DISABLED_TRANSITIONS
    case 0xC0EA39: cpu.execute_instruction<0x9C>(0x00B4B6, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0E9BA.asm:55 END_C_FUNCTION
    case 0xC0EA3C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0E9BA.asm:55 END_C_FUNCTION
    case 0xC0EA3D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0EBE0.asm (unresolved).
bool execute_unresolved_c0_c0ebe0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0EBE0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0EBE0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0EBE0.asm:7 END_STACK_VARS
    case 0xC0EBE2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0EBE0.asm:7 END_STACK_VARS
    case 0xC0EBE3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0EBE0.asm:7 END_STACK_VARS
    case 0xC0EBE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0EBE0.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EBE4.
    case 0xC0EBE6: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0EBE0.asm:7 END_STACK_VARS
    case 0xC0EBE7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0EBE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EBE8.
    case 0xC0EBEA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0EBEB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0EBED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EBED.
    case 0xC0EBEF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0EBF0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:9 LOADPTR TITLE_SCREEN_GRAPHICS, @LOCAL00
    case 0xC0EBF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x00B211, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:9 LOADPTR TITLE_SCREEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EBF2.
    case 0xC0EBF4: cpu.execute_instruction<0xB2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0.asm:9 LOADPTR TITLE_SCREEN_GRAPHICS, @LOCAL00
    case 0xC0EBF5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0.asm:9 LOADPTR TITLE_SCREEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EBF4.
    case 0xC0EBF6: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:9 LOADPTR TITLE_SCREEN_GRAPHICS, @LOCAL00
    case 0xC0EBF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:9 LOADPTR TITLE_SCREEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EBF7.
    case 0xC0EBF9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:9 LOADPTR TITLE_SCREEN_GRAPHICS, @LOCAL00
    case 0xC0EBFA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EBFC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EBFE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC00: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC02: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0EBE0.asm:11 JSL DECOMP
    case 0xC0EC04: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::LOGO_TILES, $B000, 0
    case 0xC0EC08: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::LOGO_TILES, $B000, 0
    case 0xC0EC0A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::LOGO_TILES, $B000, 0
    case 0xC0EC0C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::LOGO_TILES, $B000, 0
    case 0xC0EC0E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::LOGO_TILES, $B000, 0
    case 0xC0EC10: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::LOGO_TILES, $B000, 0
    // Overlapping static entry reached from 0xC0EC10.
    case 0xC0EC12: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::LOGO_TILES, $B000, 0
    case 0xC0EC13: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x00B000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::LOGO_TILES, $B000, 0
    // Overlapping static entry reached from 0xC0EC13.
    case 0xC0EC15: cpu.execute_instruction<0xB0>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0EBE0.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::LOGO_TILES, $B000, 0
    case 0xC0EC16: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0EBE0.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::LOGO_TILES, $B000, 0
    // Overlapping static entry reached from 0xC0EC15.
    case 0xC0EC17: cpu.execute_instruction<0x20>(0x002298, 3); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/unknown/C0/C0EBE0.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::LOGO_TILES, $B000, 0
    case 0xC0EC18: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::LOGO_TILES, $B000, 0
    case 0xC0EC19: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::LOGO_TILES, $B000, 0
    // Overlapping static entry reached from 0xC0EC17.
    case 0xC0EC1A: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0.asm:12 COPY_TO_VRAM1P @VIRTUAL06, VRAM::LOGO_TILES, $B000, 0
    // Overlapping static entry reached from 0xC0EC1A.
    case 0xC0EC1C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x007DA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    case 0xC0EC1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00AF7D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EC1C.
    case 0xC0EC1E: cpu.execute_instruction<0x7D>(0x0085AF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EC1D.
    case 0xC0EC1F: cpu.execute_instruction<0xAF>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    case 0xC0EC20: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EC1E.
    case 0xC0EC21: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    case 0xC0EC22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EC1F.
    case 0xC0EC23: cpu.execute_instruction<0xE1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EC22.
    case 0xC0EC24: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:14 LOADPTR TITLE_SCREEN_ARRANGEMENT, @LOCAL00
    case 0xC0EC25: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0.asm:15 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC27: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0.asm:15 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC29: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:15 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC2B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:15 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC2D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0EBE0.asm:16 JSL DECOMP
    case 0xC0EC2F: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_EB, $1000, 0
    case 0xC0EC33: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_EB, $1000, 0
    case 0xC0EC35: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_EB, $1000, 0
    case 0xC0EC37: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_EB, $1000, 0
    case 0xC0EC39: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_EB, $1000, 0
    case 0xC0EC3B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_EB, $1000, 0
    // Overlapping static entry reached from 0xC0EC3B.
    case 0xC0EC3D: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_EB, $1000, 0
    case 0xC0EC3E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_EB, $1000, 0
    // Overlapping static entry reached from 0xC0EC3E.
    case 0xC0EC40: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0EBE0.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_EB, $1000, 0
    case 0xC0EC41: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0EBE0.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_EB, $1000, 0
    // Overlapping static entry reached from 0xC0EC40.
    case 0xC0EC42: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C0/C0EBE0.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_EB, $1000, 0
    case 0xC0EC43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_EB, $1000, 0
    case 0xC0EC45: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_EB, $1000, 0
    // Overlapping static entry reached from 0xC0EC43.
    case 0xC0EC46: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_TILEMAP_EB, $1000, 0
    // Overlapping static entry reached from 0xC0EC46.
    case 0xC0EC48: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00E5A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:19 LOADPTR UNKNOWN_E1C6E5, @LOCAL00
    case 0xC0EC49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E5, 2); else cpu.execute_instruction<0xA9>(0x00C6E5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:19 LOADPTR UNKNOWN_E1C6E5, @LOCAL00
    // Overlapping static entry reached from 0xC0EC48.
    case 0xC0EC4A: cpu.execute_instruction<0xE5>(0x0000C6, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:19 LOADPTR UNKNOWN_E1C6E5, @LOCAL00
    // Overlapping static entry reached from 0xC0EC49.
    case 0xC0EC4B: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0.asm:19 LOADPTR UNKNOWN_E1C6E5, @LOCAL00
    case 0xC0EC4C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EBE0.asm:19 LOADPTR UNKNOWN_E1C6E5, @LOCAL00
    // Overlapping static entry reached from 0xC0EC4B.
    case 0xC0EC4D: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:19 LOADPTR UNKNOWN_E1C6E5, @LOCAL00
    case 0xC0EC4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EBE0.asm:19 LOADPTR UNKNOWN_E1C6E5, @LOCAL00
    // Overlapping static entry reached from 0xC0EC4E.
    case 0xC0EC50: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:19 LOADPTR UNKNOWN_E1C6E5, @LOCAL00
    case 0xC0EC51: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC53: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC55: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC57: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EC59: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0EBE0.asm:21 JSL DECOMP
    case 0xC0EC5B: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0EBE0.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_EB, $4000, 0
    case 0xC0EC5F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0EBE0.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_EB, $4000, 0
    case 0xC0EC61: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_EB, $4000, 0
    case 0xC0EC63: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0EBE0.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_EB, $4000, 0
    case 0xC0EC65: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_EB, $4000, 0
    case 0xC0EC67: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C0/C0EBE0.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_EB, $4000, 0
    // Overlapping static entry reached from 0xC0EC67.
    case 0xC0EC69: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_EB, $4000, 0
    case 0xC0EC6A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x004000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C0/C0EBE0.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_EB, $4000, 0
    // Overlapping static entry reached from 0xC0EC6A.
    case 0xC0EC6C: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0EBE0.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_EB, $4000, 0
    case 0xC0EC6D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C0/C0EBE0.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_EB, $4000, 0
    case 0xC0EC6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_EB, $4000, 0
    case 0xC0EC71: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_EB, $4000, 0
    // Overlapping static entry reached from 0xC0EC6F.
    case 0xC0EC72: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C0/C0EBE0.asm:22 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TITLE_SCREEN_OBJ_EB, $4000, 0
    // Overlapping static entry reached from 0xC0EC72.
    case 0xC0EC74: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0EBE0.asm:24 END_C_FUNCTION
    case 0xC0EC75: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0EBE0.asm:24 END_C_FUNCTION
    case 0xC0EC76: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0EC77.asm (unresolved).
bool execute_unresolved_c0_c0ec77_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0EC77.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0EC77: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0EC77.asm:8 END_STACK_VARS
    case 0xC0EC79: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0EC77.asm:8 END_STACK_VARS
    case 0xC0EC7A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0EC77.asm:8 END_STACK_VARS
    case 0xC0EC7B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0EC77.asm:8 END_STACK_VARS
    case 0xC0EC7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0EC77.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EC7C.
    case 0xC0EC7E: cpu.execute_instruction<0xFF>(0xD0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0EC77.asm:8 END_STACK_VARS
    case 0xC0EC7F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0EC77.asm:8 END_STACK_VARS
    case 0xC0EC80: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0EC77.asm:9 BNE @UNKNOWN0
    case 0xC0EC81: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/unknown/C0/C0EC77.asm:9 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC0EC7E.
    case 0xC0EC82: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:10 LOADPTR UNKNOWN_E1AE83, @LOCAL00
    case 0xC0EC83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000083, 2); else cpu.execute_instruction<0xA9>(0x00AE83, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:10 LOADPTR UNKNOWN_E1AE83, @LOCAL00
    // Overlapping static entry reached from 0xC0EC83.
    case 0xC0EC85: cpu.execute_instruction<0xAE>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EC77.asm:10 LOADPTR UNKNOWN_E1AE83, @LOCAL00
    case 0xC0EC86: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:10 LOADPTR UNKNOWN_E1AE83, @LOCAL00
    case 0xC0EC88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:10 LOADPTR UNKNOWN_E1AE83, @LOCAL00
    // Overlapping static entry reached from 0xC0EC88.
    case 0xC0EC8A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EC77.asm:10 LOADPTR UNKNOWN_E1AE83, @LOCAL00
    case 0xC0EC8B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:11 LOADPTR BUFFER, @LOCAL01
    case 0xC0EC8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:11 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EC8D.
    case 0xC0EC8F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EC77.asm:11 LOADPTR BUFFER, @LOCAL01
    case 0xC0EC90: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:11 LOADPTR BUFFER, @LOCAL01
    case 0xC0EC92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:11 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EC92.
    case 0xC0EC94: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EC77.asm:11 LOADPTR BUFFER, @LOCAL01
    case 0xC0EC95: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0EC77.asm:12 JSL DECOMP
    case 0xC0EC97: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/unknown/C0/C0EC77.asm:13 BRA @UNKNOWN1
    case 0xC0EC9B: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:15 LOADPTR UNKNOWN_E1AEFD, @LOCAL00
    case 0xC0EC9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x00AEFD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:15 LOADPTR UNKNOWN_E1AEFD, @LOCAL00
    // Overlapping static entry reached from 0xC0EC9D.
    case 0xC0EC9F: cpu.execute_instruction<0xAE>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EC77.asm:15 LOADPTR UNKNOWN_E1AEFD, @LOCAL00
    case 0xC0ECA0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:15 LOADPTR UNKNOWN_E1AEFD, @LOCAL00
    case 0xC0ECA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:15 LOADPTR UNKNOWN_E1AEFD, @LOCAL00
    // Overlapping static entry reached from 0xC0ECA2.
    case 0xC0ECA4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EC77.asm:15 LOADPTR UNKNOWN_E1AEFD, @LOCAL00
    case 0xC0ECA5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:16 LOADPTR BUFFER, @LOCAL01
    case 0xC0ECA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:16 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0ECA7.
    case 0xC0ECA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EC77.asm:16 LOADPTR BUFFER, @LOCAL01
    case 0xC0ECAA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:16 LOADPTR BUFFER, @LOCAL01
    case 0xC0ECAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EC77.asm:16 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0ECAC.
    case 0xC0ECAE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EC77.asm:16 LOADPTR BUFFER, @LOCAL01
    case 0xC0ECAF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0EC77.asm:17 JSL DECOMP
    case 0xC0ECB1: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0EC77.asm:19 END_C_FUNCTION
    case 0xC0ECB5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0EC77.asm:19 END_C_FUNCTION
    case 0xC0ECB6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0ECB7.asm (unresolved).
bool execute_unresolved_c0_c0ecb7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0ECB7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0ECB7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0ECB7.asm:7 END_STACK_VARS
    case 0xC0ECB9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0ECB7.asm:7 END_STACK_VARS
    case 0xC0ECBA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0ECB7.asm:7 END_STACK_VARS
    case 0xC0ECBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0ECB7.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0ECBB.
    case 0xC0ECBD: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0ECB7.asm:7 END_STACK_VARS
    case 0xC0ECBE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0ECB7.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ECBF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0ECB7.asm:9 STZ PALETTE_UPLOAD_MODE
    case 0xC0ECC1: cpu.execute_instruction<0x9C>(0x000030, 3); return true;
    // src/unknown/C0/C0ECB7.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC0ECC4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0ECB7.asm:11 LOADPTR TITLE_SCREEN_PALETTE, @LOCAL00
    case 0xC0ECC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x00CDE1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0ECB7.asm:11 LOADPTR TITLE_SCREEN_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0ECC6.
    case 0xC0ECC8: cpu.execute_instruction<0xCD>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0ECB7.asm:11 LOADPTR TITLE_SCREEN_PALETTE, @LOCAL00
    case 0xC0ECC9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0ECB7.asm:11 LOADPTR TITLE_SCREEN_PALETTE, @LOCAL00
    case 0xC0ECCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0ECB7.asm:11 LOADPTR TITLE_SCREEN_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0ECCB.
    case 0xC0ECCD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0ECB7.asm:11 LOADPTR TITLE_SCREEN_PALETTE, @LOCAL00
    case 0xC0ECCE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0ECB7.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0ECD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0ECB7.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0ECD0.
    case 0xC0ECD2: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0ECB7.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0ECD3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C0ECB7.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0ECD5: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0ECB7.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0ECD6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C0ECB7.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0ECD8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0ECB7.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0ECD9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0ECB7.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0ECDB: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C0ECB7.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0ECDD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0ECB7.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ECDF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0ECB7.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ECE1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0ECB7.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ECE3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0ECB7.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ECE5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0ECB7.asm:15 JSL DECOMP
    case 0xC0ECE7: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/unknown/C0/C0ECB7.asm:16 JSL UNKNOWN_C496F9
    case 0xC0ECEB: cpu.execute_instruction<0x22>(0xC496F9, 4); return true;
    // src/unknown/C0/C0ECB7.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ECEF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0ECB7.asm:18 STZ @LOCAL00
    case 0xC0ECF1: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C0/C0ECB7.asm:19 LDX #BPP4PALETTE_SIZE * 8
    case 0xC0ECF3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/unknown/C0/C0ECB7.asm:19 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0ECF3.
    case 0xC0ECF5: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/unknown/C0/C0ECB7.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC0ECF6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0ECB7.asm:20 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0ECF5.
    case 0xC0ECF7: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C0/C0ECB7.asm:21 LDA #.LOWORD(PALETTES)
    case 0xC0ECF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C0/C0ECB7.asm:21 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0ECF8.
    case 0xC0ECFA: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C0ECB7.asm:22 JSL MEMSET16
    case 0xC0ECFB: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C0/C0ECB7.asm:23 LDX #<-1
    case 0xC0ECFF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/unknown/C0/C0ECB7.asm:23 LDX #<-1
    // Overlapping static entry reached from 0xC0ECFF.
    case 0xC0ED01: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0ECB7.asm:24 LDA #165
    case 0xC0ED02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A5, 2); else cpu.execute_instruction<0xA9>(0x0000A5, 3); return true;
    // src/unknown/C0/C0ECB7.asm:24 LDA #165
    // Overlapping static entry reached from 0xC0ED02.
    case 0xC0ED04: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0ECB7.asm:25 JSL UNKNOWN_C496E7
    case 0xC0ED05: cpu.execute_instruction<0x22>(0xC496E7, 4); return true;
    // src/unknown/C0/C0ECB7.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ED09: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0ECB7.asm:27 LDA #PALETTE_UPLOAD::FULL
    case 0xC0ED0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C0/C0ECB7.asm:28 STA PALETTE_UPLOAD_MODE
    case 0xC0ED0D: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C0ECB7.asm:28 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0ED0B.
    case 0xC0ED0E: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C0/C0ECB7.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC0ED10: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0ECB7.asm:30 END_C_FUNCTION
    case 0xC0ED12: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0ECB7.asm:30 END_C_FUNCTION
    case 0xC0ED13: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0ED14.asm (unresolved).
bool execute_unresolved_c0_c0ed14_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0ED14.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0ED14: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0ED14.asm:6 END_STACK_VARS
    case 0xC0ED16: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0ED14.asm:6 END_STACK_VARS
    case 0xC0ED17: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0ED14.asm:6 END_STACK_VARS
    case 0xC0ED18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0ED14.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0ED18.
    case 0xC0ED1A: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0ED14.asm:6 END_STACK_VARS
    case 0xC0ED1B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0ED14.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ED1C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0ED14.asm:8 LDA #$00FF
    case 0xC0ED1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C0/C0ED14.asm:9 STA @LOCAL00
    case 0xC0ED20: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0ED14.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC0ED1E.
    case 0xC0ED21: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/C0/C0ED14.asm:10 LDX #BPP4PALETTE_SIZE * 8
    case 0xC0ED22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/unknown/C0/C0ED14.asm:10 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0ED22.
    case 0xC0ED24: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/unknown/C0/C0ED14.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC0ED25: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0ED14.asm:11 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0ED24.
    case 0xC0ED26: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C0/C0ED14.asm:12 LDA #.LOWORD(PALETTES)
    case 0xC0ED27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C0/C0ED14.asm:12 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0ED27.
    case 0xC0ED29: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C0ED14.asm:13 JSL MEMSET16
    case 0xC0ED2A: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C0/C0ED14.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ED2E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0ED14.asm:15 LDA #PALETTE_UPLOAD::FULL
    case 0xC0ED30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C0/C0ED14.asm:16 STA PALETTE_UPLOAD_MODE
    case 0xC0ED32: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C0ED14.asm:16 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0ED30.
    case 0xC0ED33: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C0/C0ED14.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC0ED35: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0ED14.asm:18 END_C_FUNCTION
    case 0xC0ED37: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0ED14.asm:18 END_C_FUNCTION
    case 0xC0ED38: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0ED39.asm (unresolved).
bool execute_unresolved_c0_c0ed39_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0ED39.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0ED39: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0ED39.asm:6 END_STACK_VARS
    case 0xC0ED3B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0ED39.asm:6 END_STACK_VARS
    case 0xC0ED3C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0ED39.asm:6 END_STACK_VARS
    case 0xC0ED3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0ED39.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0ED3D.
    case 0xC0ED3F: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0ED39.asm:6 END_STACK_VARS
    case 0xC0ED40: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0ED39.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ED41: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0ED39.asm:8 STZ @LOCAL00
    case 0xC0ED43: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C0/C0ED39.asm:9 LDX #BPP4PALETTE_SIZE * 8
    case 0xC0ED45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/unknown/C0/C0ED39.asm:9 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0ED45.
    case 0xC0ED47: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/unknown/C0/C0ED39.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC0ED48: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0ED39.asm:10 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0ED47.
    case 0xC0ED49: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C0/C0ED39.asm:11 LDA #.LOWORD(PALETTES)
    case 0xC0ED4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C0/C0ED39.asm:11 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0ED4A.
    case 0xC0ED4C: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C0ED39.asm:12 JSL MEMSET16
    case 0xC0ED4D: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C0/C0ED39.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ED51: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0ED39.asm:14 LDA #PALETTE_UPLOAD::FULL
    case 0xC0ED53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C0/C0ED39.asm:15 STA PALETTE_UPLOAD_MODE
    case 0xC0ED55: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C0ED39.asm:15 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0ED53.
    case 0xC0ED56: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C0/C0ED39.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC0ED58: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0ED39.asm:17 END_C_FUNCTION
    case 0xC0ED5A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0ED39.asm:17 END_C_FUNCTION
    case 0xC0ED5B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0ED5C.asm (unresolved).
bool execute_unresolved_c0_c0ed5c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0ED5C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0ED5C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0ED5C.asm:7 END_STACK_VARS
    case 0xC0ED5E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0ED5C.asm:7 END_STACK_VARS
    case 0xC0ED5F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0ED5C.asm:7 END_STACK_VARS
    case 0xC0ED60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0ED5C.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0ED60.
    case 0xC0ED62: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0ED5C.asm:7 END_STACK_VARS
    case 0xC0ED63: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0ED5C.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ED64: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0ED5C.asm:9 STZ PALETTE_UPLOAD_MODE
    case 0xC0ED66: cpu.execute_instruction<0x9C>(0x000030, 3); return true;
    // src/unknown/C0/C0ED5C.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC0ED69: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0ED5C.asm:11 LOADPTR TITLE_SCREEN_PALETTE, @LOCAL00
    case 0xC0ED6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x00CDE1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0ED5C.asm:11 LOADPTR TITLE_SCREEN_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0ED6B.
    case 0xC0ED6D: cpu.execute_instruction<0xCD>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0ED5C.asm:11 LOADPTR TITLE_SCREEN_PALETTE, @LOCAL00
    case 0xC0ED6E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0ED5C.asm:11 LOADPTR TITLE_SCREEN_PALETTE, @LOCAL00
    case 0xC0ED70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0ED5C.asm:11 LOADPTR TITLE_SCREEN_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0ED70.
    case 0xC0ED72: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0ED5C.asm:11 LOADPTR TITLE_SCREEN_PALETTE, @LOCAL00
    case 0xC0ED73: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0ED5C.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0ED75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0ED5C.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0ED75.
    case 0xC0ED77: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0ED5C.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0ED78: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C0ED5C.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0ED7A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0ED5C.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0ED7B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C0ED5C.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0ED7D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0ED5C.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0ED7E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0ED5C.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0ED80: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C0ED5C.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0ED82: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0ED5C.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ED84: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0ED5C.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ED86: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0ED5C.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ED88: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0ED5C.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0ED8A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0ED5C.asm:15 JSL DECOMP
    case 0xC0ED8C: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/unknown/C0/C0ED5C.asm:16 LDA #0
    case 0xC0ED90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0ED5C.asm:16 LDA #0
    // Overlapping static entry reached from 0xC0ED90.
    case 0xC0ED92: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0ED5C.asm:17 JSL UNKNOWN_C0EC77
    case 0xC0ED93: cpu.execute_instruction<0x22>(0xC0EC77, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0ED5C.asm:18 LOADPTR BUFFER+$1A0, @LOCAL00
    case 0xC0ED97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x0001A0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0ED5C.asm:18 LOADPTR BUFFER+$1A0, @LOCAL00
    // Overlapping static entry reached from 0xC0ED97.
    case 0xC0ED99: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0ED5C.asm:18 LOADPTR BUFFER+$1A0, @LOCAL00
    case 0xC0ED9A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0ED5C.asm:18 LOADPTR BUFFER+$1A0, @LOCAL00
    // Overlapping static entry reached from 0xC0ED99.
    case 0xC0ED9B: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0ED5C.asm:18 LOADPTR BUFFER+$1A0, @LOCAL00
    case 0xC0ED9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0ED5C.asm:18 LOADPTR BUFFER+$1A0, @LOCAL00
    // Overlapping static entry reached from 0xC0ED9C.
    case 0xC0ED9E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0ED5C.asm:18 LOADPTR BUFFER+$1A0, @LOCAL00
    case 0xC0ED9F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0ED5C.asm:19 LDX #BPP4PALETTE_SIZE
    case 0xC0EDA1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C0/C0ED5C.asm:19 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0EDA1.
    case 0xC0EDA3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0ED5C.asm:20 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC0EDA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/unknown/C0/C0ED5C.asm:20 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0EDA4.
    case 0xC0EDA6: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C0/C0ED5C.asm:21 JSL MEMCPY16
    case 0xC0EDA7: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C0/C0ED5C.asm:21 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0EDA6.
    case 0xC0EDA8: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/unknown/C0/C0ED5C.asm:21 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0EDA8.
    case 0xC0EDAA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0001A9, 3); return true;
    // src/unknown/C0/C0ED5C.asm:22 LDA #1
    case 0xC0EDAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0ED5C.asm:22 LDA #1
    // Overlapping static entry reached from 0xC0EDAA.
    case 0xC0EDAC: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C0ED5C.asm:22 LDA #1
    // Overlapping static entry reached from 0xC0EDAB.
    case 0xC0EDAD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0ED5C.asm:23 JSL UNKNOWN_C0EC77
    case 0xC0EDAE: cpu.execute_instruction<0x22>(0xC0EC77, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0ED5C.asm:24 LOADPTR BUFFER+$260, @LOCAL00
    case 0xC0EDB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000060, 2); else cpu.execute_instruction<0xA9>(0x000260, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0ED5C.asm:24 LOADPTR BUFFER+$260, @LOCAL00
    // Overlapping static entry reached from 0xC0EDB2.
    case 0xC0EDB4: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0ED5C.asm:24 LOADPTR BUFFER+$260, @LOCAL00
    case 0xC0EDB5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0ED5C.asm:24 LOADPTR BUFFER+$260, @LOCAL00
    case 0xC0EDB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0ED5C.asm:24 LOADPTR BUFFER+$260, @LOCAL00
    // Overlapping static entry reached from 0xC0EDB7.
    case 0xC0EDB9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0ED5C.asm:24 LOADPTR BUFFER+$260, @LOCAL00
    case 0xC0EDBA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0ED5C.asm:25 LDX #BPP4PALETTE_SIZE
    case 0xC0EDBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C0/C0ED5C.asm:25 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0EDBC.
    case 0xC0EDBE: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0ED5C.asm:26 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 7
    case 0xC0EDBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0002E0, 3); return true;
    // src/unknown/C0/C0ED5C.asm:26 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 7
    // Overlapping static entry reached from 0xC0EDBF.
    case 0xC0EDC1: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C0ED5C.asm:27 JSL MEMCPY16
    case 0xC0EDC2: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C0/C0ED5C.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EDC6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0ED5C.asm:29 LDA #PALETTE_UPLOAD::FULL
    case 0xC0EDC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C0/C0ED5C.asm:30 STA PALETTE_UPLOAD_MODE
    case 0xC0EDCA: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C0ED5C.asm:30 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0EDC8.
    case 0xC0EDCB: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C0/C0ED5C.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC0EDCD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0ED5C.asm:32 END_C_FUNCTION
    case 0xC0EDCF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0ED5C.asm:32 END_C_FUNCTION
    case 0xC0EDD0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0EDD1.asm (unresolved).
bool execute_unresolved_c0_c0edd1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0EDD1.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0EDD1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0EDD1.asm:4 LDA #$0002
    case 0xC0EDD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0EDD1.asm:4 LDA #$0002
    // Overlapping static entry reached from 0xC0EDD3.
    case 0xC0EDD5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0EDD1.asm:5 STA ACTIONSCRIPT_STATE
    case 0xC0EDD6: cpu.execute_instruction<0x8D>(0x009641, 3); return true;
    // src/unknown/C0/C0EDD1.asm:6 RTL
    case 0xC0EDD9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0EDDA.asm (unresolved).
bool execute_unresolved_c0_c0edda_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0EDDA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0EDDA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0EDDA.asm:9 END_STACK_VARS
    case 0xC0EDDC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0EDDA.asm:9 END_STACK_VARS
    case 0xC0EDDD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0EDDA.asm:9 END_STACK_VARS
    case 0xC0EDDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0EDDA.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EDDE.
    case 0xC0EDE0: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0EDDA.asm:9 END_STACK_VARS
    case 0xC0EDE1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0EDDA.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC0EDE2: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0EDDA.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0EDE0.
    case 0xC0EDE4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0EDDA.asm:11 ASL
    case 0xC0EDE5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0EDDA.asm:12 TAX
    case 0xC0EDE6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0EDDA.asm:13 LDY ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC0EDE7: cpu.execute_instruction<0xBC>(0x000E5E, 3); return true;
    // src/unknown/C0/C0EDDA.asm:14 STY @LOCAL03
    case 0xC0EDEA: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C0/C0EDDA.asm:15 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC0EDEC: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/C0/C0EDDA.asm:16 STA @LOCAL02
    case 0xC0EDEF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0EDDA.asm:17 LDA ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC0EDF1: cpu.execute_instruction<0xBD>(0x000ED6, 3); return true;
    // src/unknown/C0/C0EDDA.asm:18 STA @VIRTUAL02
    case 0xC0EDF4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EDDA.asm:19 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0EDF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C0EDDA.asm:19 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EDF6.
    case 0xC0EDF8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C0EDDA.asm:19 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0EDF9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EDDA.asm:19 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0EDFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C0EDDA.asm:19 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EDFB.
    case 0xC0EDFD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C0EDDA.asm:19 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0EDFE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0EDDA.asm:20 TYA
    case 0xC0EE00: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0EDDA.asm:21 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0EE01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0EDDA.asm:21 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0EE02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0EDDA.asm:21 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0EE03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0EDDA.asm:21 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0EE04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0EDDA.asm:21 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0EE05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0EDDA.asm:22 CLC
    case 0xC0EE06: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0EDDA.asm:23 ADC @VIRTUAL06
    case 0xC0EE07: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C0EDDA.asm:24 STA @VIRTUAL06
    case 0xC0EE09: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0EDDA.asm:25 STA @LOCAL00
    case 0xC0EE0B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0EDDA.asm:26 LDA @VIRTUAL06+2
    case 0xC0EE0D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0EDDA.asm:27 STA @LOCAL00+2
    case 0xC0EE0F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0EDDA.asm:28 LDX #BPP4PALETTE_SIZE
    case 0xC0EE11: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C0/C0EDDA.asm:28 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0EE11.
    case 0xC0EE13: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C0EDDA.asm:29 LDA @LOCAL02
    case 0xC0EE14: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C0EDDA.asm:30 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0EE16: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C0EDDA.asm:30 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0EE17: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C0EDDA.asm:30 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0EE18: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C0EDDA.asm:30 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0EE19: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C0EDDA.asm:30 OPTIMIZED_MULT @VIRTUAL04, BPP4PALETTE_SIZE
    case 0xC0EE1A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0EDDA.asm:31 CLC
    case 0xC0EE1B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0EDDA.asm:32 ADC #.LOWORD(PALETTES)
    case 0xC0EE1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000200, 3); return true;
    // src/unknown/C0/C0EDDA.asm:32 ADC #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0EE1C.
    case 0xC0EE1E: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C0/C0EDDA.asm:33 JSL MEMCPY16
    case 0xC0EE1F: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C0/C0EDDA.asm:34 LDY @LOCAL03
    case 0xC0EE23: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C0EDDA.asm:35 TYA
    case 0xC0EE25: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0EDDA.asm:36 INC
    case 0xC0EE26: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0EDDA.asm:37 STA @LOCAL01
    case 0xC0EE27: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0EDDA.asm:38 CMP @VIRTUAL02
    case 0xC0EE29: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0EDDA.asm:39 BNE @UNKNOWN0
    case 0xC0EE2B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0EDDA.asm:40 LDA #0
    case 0xC0EE2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0EDDA.asm:40 LDA #0
    // Overlapping static entry reached from 0xC0EE2D.
    case 0xC0EE2F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0EDDA.asm:41 STA @LOCAL01
    case 0xC0EE30: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0EDDA.asm:43 LDA CURRENT_ENTITY_SLOT
    case 0xC0EE32: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0EDDA.asm:44 ASL
    case 0xC0EE35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0EDDA.asm:45 TAX
    case 0xC0EE36: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0EDDA.asm:46 LDA @LOCAL01
    case 0xC0EE37: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0EDDA.asm:47 STA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC0EE39: cpu.execute_instruction<0x9D>(0x000E5E, 3); return true;
    // src/unknown/C0/C0EDDA.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EE3C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0EDDA.asm:49 LDA #PALETTE_UPLOAD::FULL
    case 0xC0EE3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C0/C0EDDA.asm:50 STA PALETTE_UPLOAD_MODE
    case 0xC0EE40: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C0EDDA.asm:50 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0EE3E.
    case 0xC0EE41: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C0/C0EDDA.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC0EE43: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0EDDA.asm:52 END_C_FUNCTION
    case 0xC0EE45: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0EDDA.asm:52 END_C_FUNCTION
    case 0xC0EE46: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0EE47.asm (unresolved).
bool execute_unresolved_c0_c0ee47_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0EE47.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0EE47: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0EE47.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EE49: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0EE47.asm:5 LDA #$0013
    case 0xC0EE4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008D13, 3); return true;
    // src/unknown/C0/C0EE47.asm:6 STA TM_MIRROR
    case 0xC0EE4D: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C0/C0EE47.asm:6 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EE4B.
    case 0xC0EE4E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0EE47.asm:6 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EE4E.
    case 0xC0EE4F: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C0/C0EE47.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0xC0EE50: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0EE47.asm:8 RTL
    case 0xC0EE52: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0EE53.asm (unresolved).
bool execute_unresolved_c0_c0ee53_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0EE53.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0EE53: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0EE53.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC0EE55: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0EE53.asm:5 ASL
    case 0xC0EE58: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0EE53.asm:6 CLC
    case 0xC0EE59: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0EE53.asm:7 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC0EE5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/unknown/C0/C0EE53.asm:7 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC0EE5A.
    case 0xC0EE5C: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C0/C0EE53.asm:8 TAX
    case 0xC0EE5D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0EE53.asm:9 LDA __BSS_START__,X
    case 0xC0EE5E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0EE53.asm:10 AND #$7FFF
    case 0xC0EE61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C0EE53.asm:10 AND #$7FFF
    // Overlapping static entry reached from 0xC0EE61.
    case 0xC0EE63: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/unknown/C0/C0EE53.asm:11 STA __BSS_START__,X
    case 0xC0EE64: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0EE53.asm:12 RTL
    case 0xC0EE67: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0EFE1.asm (unresolved).
bool execute_unresolved_c0_c0efe1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0EFE1.asm:3 BEGIN_C_FUNCTION
    case 0xC0EFE1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0EFE1.asm:8 END_STACK_VARS
    case 0xC0EFE3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0EFE1.asm:8 END_STACK_VARS
    case 0xC0EFE4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0EFE1.asm:8 END_STACK_VARS
    case 0xC0EFE5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0EFE1.asm:8 END_STACK_VARS
    case 0xC0EFE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0EFE1.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EFE6.
    case 0xC0EFE8: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0EFE1.asm:8 END_STACK_VARS
    case 0xC0EFE9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0EFE1.asm:8 END_STACK_VARS
    case 0xC0EFEA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0EFE1.asm:9 STA @LOCAL00
    case 0xC0EFEB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0EFE1.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC0EFE8.
    case 0xC0EFEC: cpu.execute_instruction<0x0E>(0x001380, 3); return true;
    // src/unknown/C0/C0EFE1.asm:10 BRA @UNKNOWN2
    case 0xC0EFED: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C0/C0EFE1.asm:12 LDA PAD_PRESS
    case 0xC0EFEF: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C0/C0EFE1.asm:13 BEQ @UNKNOWN1
    case 0xC0EFF2: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0EFE1.asm:14 LDA #1
    case 0xC0EFF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0EFE1.asm:14 LDA #1
    // Overlapping static entry reached from 0xC0EFF4.
    case 0xC0EFF6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0EFE1.asm:15 BRA @UNKNOWN3
    case 0xC0EFF7: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C0EFE1.asm:17 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0EFF9: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C0EFE1.asm:18 LDA @LOCAL00
    case 0xC0EFFD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0EFE1.asm:19 DEC
    case 0xC0EFFF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0EFE1.asm:20 STA @LOCAL00
    case 0xC0F000: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0EFE1.asm:22 BNE @UNKNOWN0
    case 0xC0F002: cpu.execute_instruction<0xD0>(0x0000EB, 2); return true;
    // src/unknown/C0/C0EFE1.asm:23 LDA #0
    case 0xC0F004: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0EFE1.asm:23 LDA #0
    // Overlapping static entry reached from 0xC0F004.
    case 0xC0F006: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0EFE1.asm:25 END_C_FUNCTION
    case 0xC0F007: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0EFE1.asm:25 END_C_FUNCTION
    case 0xC0F008: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0F1D2.asm (unresolved).
bool execute_unresolved_c0_c0f1d2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0F1D2.asm:3 BEGIN_C_FUNCTION
    case 0xC0F1D2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0F1D2.asm:9 END_STACK_VARS
    case 0xC0F1D4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0F1D2.asm:9 END_STACK_VARS
    case 0xC0F1D5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0F1D2.asm:9 END_STACK_VARS
    case 0xC0F1D6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0F1D2.asm:9 END_STACK_VARS
    case 0xC0F1D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0F1D2.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F1D7.
    case 0xC0F1D9: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0F1D2.asm:9 END_STACK_VARS
    case 0xC0F1DA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0F1D2.asm:9 END_STACK_VARS
    case 0xC0F1DB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0F1D2.asm:10 TAY
    case 0xC0F1DC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0F1D2.asm:11 STY @LOCAL02
    case 0xC0F1DD: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F1DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F1DF.
    case 0xC0F1E1: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F1E2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F1E4: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F1E5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F1E7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F1E8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0F1D2.asm:12 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F1EA: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C0F1D2.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0F1EC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0F1D2.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1EE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0F1D2.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1F0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0F1D2.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1F2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0F1D2.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1F4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0F1D2.asm:15 LDA #^PALETTES
    case 0xC0F1F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/C0/C0F1D2.asm:15 LDA #^PALETTES
    // Overlapping static entry reached from 0xC0F1F6.
    case 0xC0F1F8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0F1D2.asm:16 STA @LOCAL01+2
    case 0xC0F1F9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0F1D2.asm:17 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0F1FB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0F1D2.asm:17 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0F1FD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0F1D2.asm:17 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0F1FF: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0F1D2.asm:17 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0F201: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0F1D2.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F203: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0F1D2.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F205: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0F1D2.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F207: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0F1D2.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F209: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0F1D2.asm:19 LDA #100
    case 0xC0F20B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // src/unknown/C0/C0F1D2.asm:19 LDA #100
    // Overlapping static entry reached from 0xC0F20B.
    case 0xC0F20D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0F1D2.asm:20 JSL UNKNOWN_C4954C
    case 0xC0F20E: cpu.execute_instruction<0x22>(0xC4954C, 4); return true;
    // src/unknown/C0/C0F1D2.asm:21 LDX #.LOWORD(-1)
    case 0xC0F212: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0F1D2.asm:21 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0F212.
    case 0xC0F214: cpu.execute_instruction<0xFF>(0x9816A4, 4); return true;
    // src/unknown/C0/C0F1D2.asm:22 LDY @LOCAL02
    case 0xC0F215: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C0F1D2.asm:23 TYA
    case 0xC0F217: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0F1D2.asm:24 JSL UNKNOWN_C496E7
    case 0xC0F218: cpu.execute_instruction<0x22>(0xC496E7, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0F1D2.asm:25 END_C_FUNCTION
    case 0xC0F21C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0F1D2.asm:25 END_C_FUNCTION
    case 0xC0F21D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0F21E.asm (unresolved).
bool execute_unresolved_c0_c0f21e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0F21E.asm:3 BEGIN_C_FUNCTION
    case 0xC0F21E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0F21E.asm:7 END_STACK_VARS
    case 0xC0F220: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0F21E.asm:7 END_STACK_VARS
    case 0xC0F221: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0F21E.asm:7 END_STACK_VARS
    case 0xC0F222: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0F21E.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F222.
    case 0xC0F224: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0F21E.asm:7 END_STACK_VARS
    case 0xC0F225: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:8 LDA #0
    case 0xC0F226: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0F21E.asm:8 LDA #0
    // Overlapping static entry reached from 0xC0F226.
    case 0xC0F228: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0F21E.asm:9 STA @VIRTUAL04
    case 0xC0F229: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0F21E.asm:10 TAX
    case 0xC0F22B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:11 STX @LOCAL01
    case 0xC0F22C: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:12 BRA @UNKNOWN2
    case 0xC0F22E: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C0/C0F21E.asm:14 LDA PAD_PRESS
    case 0xC0F230: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C0/C0F21E.asm:15 BEQ @UNKNOWN1
    case 0xC0F233: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0F21E.asm:16 LDA #1
    case 0xC0F235: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0F21E.asm:16 LDA #1
    // Overlapping static entry reached from 0xC0F235.
    case 0xC0F237: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0F21E.asm:17 JMP @UNKNOWN10
    case 0xC0F238: cpu.execute_instruction<0x4C>(0x00F33A, 3); return true;
    // src/unknown/C0/C0F21E.asm:19 JSL UNKNOWN_C2DB3F
    case 0xC0F23B: cpu.execute_instruction<0x22>(0xC2DB3F, 4); return true;
    // src/unknown/C0/C0F21E.asm:20 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F23F: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C0F21E.asm:21 LDX @LOCAL01
    case 0xC0F243: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:22 INX
    case 0xC0F245: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:23 STX @LOCAL01
    case 0xC0F246: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:25 CPX #236
    case 0xC0F248: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000EC, 2); else cpu.execute_instruction<0xE0>(0x0000EC, 3); return true;
    // src/unknown/C0/C0F21E.asm:25 CPX #236
    // Overlapping static entry reached from 0xC0F248.
    case 0xC0F24A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0F21E.asm:26 BCC @UNKNOWN0
    case 0xC0F24B: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/unknown/C0/C0F21E.asm:27 LDA #0
    case 0xC0F24D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0F21E.asm:27 LDA #0
    // Overlapping static entry reached from 0xC0F24D.
    case 0xC0F24F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0F21E.asm:28 STA @VIRTUAL02
    case 0xC0F250: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0F21E.asm:29 BRA @UNKNOWN5
    case 0xC0F252: cpu.execute_instruction<0x80>(0x00006E, 2); return true;
    // src/unknown/C0/C0F21E.asm:31 LDA PAD_PRESS
    case 0xC0F254: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C0/C0F21E.asm:32 BEQ @UNKNOWN4
    case 0xC0F257: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0F21E.asm:33 LDA #1
    case 0xC0F259: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0F21E.asm:33 LDA #1
    // Overlapping static entry reached from 0xC0F259.
    case 0xC0F25B: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0F21E.asm:34 JMP @UNKNOWN10
    case 0xC0F25C: cpu.execute_instruction<0x4C>(0x00F33A, 3); return true;
    // src/unknown/C0/C0F21E.asm:36 LDY #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC0F25F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000240, 3); return true;
    // src/unknown/C0/C0F21E.asm:36 LDY #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC0F25F.
    case 0xC0F261: cpu.execute_instruction<0x02>(0x000084, 2); return true;
    // src/unknown/C0/C0F21E.asm:37 STY @LOCAL01
    case 0xC0F262: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:38 TYA
    case 0xC0F264: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0F21E.asm:39 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F265: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C0F21E.asm:39 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F267: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0F21E.asm:39 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F268: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C0F21E.asm:39 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F26A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0F21E.asm:39 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F26B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0F21E.asm:39 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F26D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C0F21E.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC0F26F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0F21E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F271: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0F21E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F273: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0F21E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F275: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0F21E.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F277: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0F21E.asm:42 LDX #BPP4PALETTE_SIZE
    case 0xC0F279: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C0/C0F21E.asm:42 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F279.
    case 0xC0F27B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0F21E.asm:43 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    case 0xC0F27C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x004476, 3); return true;
    // src/unknown/C0/C0F21E.asm:43 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    // Overlapping static entry reached from 0xC0F27C.
    case 0xC0F27E: cpu.execute_instruction<0x44>(0x00D222, 3); return true;
    // src/unknown/C0/C0F21E.asm:44 JSL MEMCPY16
    case 0xC0F27F: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C0/C0F21E.asm:44 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0F27E.
    case 0xC0F281: cpu.execute_instruction<0x8E>(0x0022C0, 3); return true;
    // src/unknown/C0/C0F21E.asm:45 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC0F283: cpu.execute_instruction<0x22>(0xC426ED, 4); return true;
    // src/unknown/C0/C0F21E.asm:45 JSL UPDATE_MAP_PALETTE_ANIMATION
    // Overlapping static entry reached from 0xC0F281.
    case 0xC0F284: cpu.execute_instruction<0xED>(0x00C426, 3); return true;
    // src/unknown/C0/C0F21E.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F287: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0F21E.asm:47 STZ PALETTE_UPLOAD_MODE
    case 0xC0F289: cpu.execute_instruction<0x9C>(0x000030, 3); return true;
    // src/unknown/C0/C0F21E.asm:48 JSL UNKNOWN_C2DB14
    case 0xC0F28C: cpu.execute_instruction<0x22>(0xC2DB14, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC0F290: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x004476, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F290.
    case 0xC0F292: cpu.execute_instruction<0x44>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC0F293: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC0F295: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC0F296: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC0F298: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC0F299: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C0/C0F21E.asm:50 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC0F29B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C0/C0F21E.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC0F29D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0F21E.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F29F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0F21E.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F2A1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0F21E.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F2A3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0F21E.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F2A5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0F21E.asm:53 LDX #BPP4PALETTE_SIZE
    case 0xC0F2A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C0/C0F21E.asm:53 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F2A7.
    case 0xC0F2A9: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C0/C0F21E.asm:54 LDY @LOCAL01
    case 0xC0F2AA: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:55 TYA
    case 0xC0F2AC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:56 JSL MEMCPY16
    case 0xC0F2AD: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C0/C0F21E.asm:57 JSL UNKNOWN_C2DB3F
    case 0xC0F2B1: cpu.execute_instruction<0x22>(0xC2DB3F, 4); return true;
    // src/unknown/C0/C0F21E.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F2B5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0F21E.asm:59 LDA #PALETTE_UPLOAD::FULL
    case 0xC0F2B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C0/C0F21E.asm:60 STA PALETTE_UPLOAD_MODE
    case 0xC0F2B9: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C0F21E.asm:60 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0F2B7.
    case 0xC0F2BA: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C0/C0F21E.asm:61 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F2BC: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C0F21E.asm:62 INC @VIRTUAL02
    case 0xC0F2C0: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0F21E.asm:64 LDA @VIRTUAL02
    case 0xC0F2C2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0F21E.asm:66 CMP #$01E0
    case 0xC0F2C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E0, 2); else cpu.execute_instruction<0xC9>(0x0001E0, 3); return true;
    // src/unknown/C0/C0F21E.asm:66 CMP #$01E0
    // Overlapping static entry reached from 0xC0F2C4.
    case 0xC0F2C6: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0F21E.asm:67 BCCL @UNKNOWN3
    case 0xC0F2C7: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C0F21E.asm:67 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC0F2C6.
    case 0xC0F2C8: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0F21E.asm:67 BCCL @UNKNOWN3
    case 0xC0F2C9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C0F21E.asm:67 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC0F2C8.
    case 0xC0F2CA: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0F21E.asm:67 BCCL @UNKNOWN3
    case 0xC0F2CB: cpu.execute_instruction<0x4C>(0x00F254, 3); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C0F21E.asm:67 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC0F2CA.
    case 0xC0F2CC: cpu.execute_instruction<0x54>(0x0022F2, 3); return true;
    // src/unknown/C0/C0F21E.asm:68 JSL UNKNOWN_C49740
    case 0xC0F2CE: cpu.execute_instruction<0x22>(0xC49740, 4); return true;
    // src/unknown/C0/C0F21E.asm:68 JSL UNKNOWN_C49740
    // Overlapping static entry reached from 0xC0F2CC.
    case 0xC0F2CF: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F2D2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0F21E.asm:70 LDA #$00
    case 0xC0F2D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C0/C0F21E.asm:71 STA f:CGADSUB
    case 0xC0F2D6: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C0/C0F21E.asm:71 STA f:CGADSUB
    // Overlapping static entry reached from 0xC0F2D4.
    case 0xC0F2D7: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/C0/C0F21E.asm:71 STA f:CGADSUB
    // Overlapping static entry reached from 0xC0F2D7.
    case 0xC0F2D9: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C0/C0F21E.asm:72 STA f:CGWSEL
    case 0xC0F2DA: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C0/C0F21E.asm:73 LDA #$01
    case 0xC0F2DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C0/C0F21E.asm:74 STA TM_MIRROR
    case 0xC0F2E0: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C0/C0F21E.asm:74 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0F2DE.
    case 0xC0F2E1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:74 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0F2E1.
    case 0xC0F2E2: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/unknown/C0/C0F21E.asm:75 STZ TD_MIRROR
    case 0xC0F2E3: cpu.execute_instruction<0x9C>(0x00001B, 3); return true;
    // src/unknown/C0/C0F21E.asm:76 REP #PROC_FLAGS::ACCUM8
    case 0xC0F2E6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0F21E.asm:77 LDA #120
    case 0xC0F2E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/unknown/C0/C0F21E.asm:77 LDA #120
    // Overlapping static entry reached from 0xC0F2E8.
    case 0xC0F2EA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C0F21E.asm:78 JSR UNKNOWN_C0EFE1
    case 0xC0F2EB: cpu.execute_instruction<0x20>(0x00EFE1, 3); return true;
    // src/unknown/C0/C0F21E.asm:79 CMP #0
    case 0xC0F2EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0F21E.asm:79 CMP #0
    // Overlapping static entry reached from 0xC0F2EE.
    case 0xC0F2F0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0F21E.asm:80 BEQ @UNKNOWN7
    case 0xC0F2F1: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0F21E.asm:81 LDA #1
    case 0xC0F2F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0F21E.asm:81 LDA #1
    // Overlapping static entry reached from 0xC0F2F3.
    case 0xC0F2F5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0F21E.asm:82 BRA @UNKNOWN10
    case 0xC0F2F6: cpu.execute_instruction<0x80>(0x000042, 2); return true;
    // src/unknown/C0/C0F21E.asm:84 LDA #MUSIC::GAS_STATION_2
    case 0xC0F2F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x0000AE, 3); return true;
    // src/unknown/C0/C0F21E.asm:84 LDA #MUSIC::GAS_STATION_2
    // Overlapping static entry reached from 0xC0F2F8.
    case 0xC0F2FA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0F21E.asm:85 JSL CHANGE_MUSIC
    case 0xC0F2FB: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/C0/C0F21E.asm:86 LDY #0
    case 0xC0F2FF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0F21E.asm:86 LDY #0
    // Overlapping static entry reached from 0xC0F2FF.
    case 0xC0F301: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C0/C0F21E.asm:87 TYX
    case 0xC0F302: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:88 LDA #EVENT_SCRIPT::EVENT_860
    case 0xC0F303: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005C, 2); else cpu.execute_instruction<0xA9>(0x00035C, 3); return true;
    // src/unknown/C0/C0F21E.asm:88 LDA #EVENT_SCRIPT::EVENT_860
    // Overlapping static entry reached from 0xC0F303.
    case 0xC0F305: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C0/C0F21E.asm:89 JSL INIT_ENTITY_WIPE
    case 0xC0F306: cpu.execute_instruction<0x22>(0xC092F5, 4); return true;
    // src/unknown/C0/C0F21E.asm:89 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC0F305.
    case 0xC0F307: cpu.execute_instruction<0xF5>(0x000092, 2); return true;
    // src/unknown/C0/C0F21E.asm:89 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC0F307.
    case 0xC0F309: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001285, 3); return true;
    // src/unknown/C0/C0F21E.asm:90 STA @LOCAL01
    case 0xC0F30A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:90 STA @LOCAL01
    // Overlapping static entry reached from 0xC0F309.
    case 0xC0F30B: cpu.execute_instruction<0x12>(0x000080, 2); return true;
    // src/unknown/C0/C0F21E.asm:91 BRA @UNKNOWN9
    case 0xC0F30C: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C0/C0F21E.asm:91 BRA @UNKNOWN9
    // Overlapping static entry reached from 0xC0F30B.
    case 0xC0F30D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:93 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0F30E: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/unknown/C0/C0F21E.asm:94 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F312: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C0F21E.asm:95 LDA PAD_PRESS
    case 0xC0F316: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C0/C0F21E.asm:96 BEQ @UNKNOWN9
    case 0xC0F319: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C0/C0F21E.asm:97 LDA @LOCAL01
    case 0xC0F31B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:98 JSL UNKNOWN_C09C35
    case 0xC0F31D: cpu.execute_instruction<0x22>(0xC09C35, 4); return true;
    // src/unknown/C0/C0F21E.asm:99 LDA #1
    case 0xC0F321: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0F21E.asm:99 LDA #1
    // Overlapping static entry reached from 0xC0F321.
    case 0xC0F323: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0F21E.asm:100 BRA @UNKNOWN10
    case 0xC0F324: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C0F21E.asm:102 LDA @LOCAL01
    case 0xC0F326: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0F21E.asm:103 ASL
    case 0xC0F328: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:104 TAX
    case 0xC0F329: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:105 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC0F32A: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/unknown/C0/C0F21E.asm:106 CMP #.LOWORD(-1)
    case 0xC0F32D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0F21E.asm:106 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0F32D.
    case 0xC0F32F: cpu.execute_instruction<0xFF>(0xA9DCD0, 4); return true;
    // src/unknown/C0/C0F21E.asm:107 BNE @UNKNOWN8
    case 0xC0F330: cpu.execute_instruction<0xD0>(0x0000DC, 2); return true;
    // src/unknown/C0/C0F21E.asm:108 LDA #330
    case 0xC0F332: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x00014A, 3); return true;
    // src/unknown/C0/C0F21E.asm:108 LDA #330
    // Overlapping static entry reached from 0xC0F32F.
    case 0xC0F333: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0F21E.asm:108 LDA #330
    // Overlapping static entry reached from 0xC0F332.
    case 0xC0F334: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/unknown/C0/C0F21E.asm:109 JSR UNKNOWN_C0F1D2
    case 0xC0F335: cpu.execute_instruction<0x20>(0x00F1D2, 3); return true;
    // src/unknown/C0/C0F21E.asm:109 JSR UNKNOWN_C0F1D2
    // Overlapping static entry reached from 0xC0F334.
    case 0xC0F336: cpu.execute_instruction<0xD2>(0x0000F1, 2); return true;
    // src/unknown/C0/C0F21E.asm:110 LDA @VIRTUAL04
    case 0xC0F338: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0F21E.asm:112 END_C_FUNCTION
    case 0xC0F33A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0F21E.asm:112 END_C_FUNCTION
    case 0xC0F33B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
