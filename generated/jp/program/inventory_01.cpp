// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/inventory/get_item_subtype-jp.asm (source_named).
bool execute_inventory_get_item_subtype_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/inventory/get_item_subtype-jp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC22388: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/inventory/get_item_subtype-jp.asm:7 END_STACK_VARS
    case 0xC2238A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/inventory/get_item_subtype-jp.asm:7 END_STACK_VARS
    case 0xC2238B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/inventory/get_item_subtype-jp.asm:7 END_STACK_VARS
    case 0xC2238C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/inventory/get_item_subtype-jp.asm:7 END_STACK_VARS
    case 0xC2238D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/inventory/get_item_subtype-jp.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2238D.
    case 0xC2238F: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/inventory/get_item_subtype-jp.asm:7 END_STACK_VARS
    case 0xC22390: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/inventory/get_item_subtype-jp.asm:7 END_STACK_VARS
    case 0xC22391: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/inventory/get_item_subtype-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22392: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/inventory/get_item_subtype-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC2238F.
    case 0xC22393: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/inventory/get_item_subtype-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22394: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/inventory/get_item_subtype-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22395: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/inventory/get_item_subtype-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22397: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/inventory/get_item_subtype-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22398: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/inventory/get_item_subtype-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC22399: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/inventory/get_item_subtype-jp.asm:9 CLC
    case 0xC2239A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/inventory/get_item_subtype-jp.asm:10 ADC #item::type
    case 0xC2239B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/inventory/get_item_subtype-jp.asm:10 ADC #item::type
    // Overlapping static entry reached from 0xC2239B.
    case 0xC2239D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:11 TAX
    case 0xC2239E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/inventory/get_item_subtype-jp.asm:12 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC2239F: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/inventory/get_item_subtype-jp.asm:13 AND #$00FF
    case 0xC223A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/inventory/get_item_subtype-jp.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC223A3.
    case 0xC223A5: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:14 AND #$000C
    case 0xC223A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/inventory/get_item_subtype-jp.asm:14 AND #$000C
    // Overlapping static entry reached from 0xC223A6.
    case 0xC223A8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:15 BEQ @UNKNOWN0
    case 0xC223A9: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:16 CMP #$0004
    case 0xC223AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/inventory/get_item_subtype-jp.asm:16 CMP #$0004
    // Overlapping static entry reached from 0xC223AB.
    case 0xC223AD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:17 BEQ @UNKNOWN1
    case 0xC223AE: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:18 CMP #$0008
    case 0xC223B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/inventory/get_item_subtype-jp.asm:18 CMP #$0008
    // Overlapping static entry reached from 0xC223B0.
    case 0xC223B2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:19 BEQ @UNKNOWN2
    case 0xC223B3: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:20 CMP #$000C
    case 0xC223B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/inventory/get_item_subtype-jp.asm:20 CMP #$000C
    // Overlapping static entry reached from 0xC223B5.
    case 0xC223B7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:21 BEQ @UNKNOWN3
    case 0xC223B8: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:22 BRA @UNKNOWN4
    case 0xC223BA: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:24 LDA #$0001
    case 0xC223BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/inventory/get_item_subtype-jp.asm:24 LDA #$0001
    // Overlapping static entry reached from 0xC223BC.
    case 0xC223BE: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:25 BRA @UNKNOWN5
    case 0xC223BF: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:27 LDA #$0002
    case 0xC223C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/inventory/get_item_subtype-jp.asm:27 LDA #$0002
    // Overlapping static entry reached from 0xC223C1.
    case 0xC223C3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:28 BRA @UNKNOWN5
    case 0xC223C4: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:30 LDA #$0003
    case 0xC223C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/inventory/get_item_subtype-jp.asm:30 LDA #$0003
    // Overlapping static entry reached from 0xC223C6.
    case 0xC223C8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:31 BRA @UNKNOWN5
    case 0xC223C9: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:33 LDA #$0004
    case 0xC223CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/inventory/get_item_subtype-jp.asm:33 LDA #$0004
    // Overlapping static entry reached from 0xC223CB.
    case 0xC223CD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:34 BRA @UNKNOWN5
    case 0xC223CE: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:36 LDA #$0000
    case 0xC223D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/inventory/get_item_subtype-jp.asm:36 LDA #$0000
    // Overlapping static entry reached from 0xC223D0.
    case 0xC223D2: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/inventory/get_item_subtype-jp.asm:38 PLD
    case 0xC223D3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/inventory/get_item_subtype-jp.asm:39 RTL
    case 0xC223D4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/inventory/get_item_subtype2-jp.asm (source_named).
bool execute_inventory_get_item_subtype2_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/inventory/get_item_subtype2-jp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC223D5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/inventory/get_item_subtype2-jp.asm:7 END_STACK_VARS
    case 0xC223D7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/inventory/get_item_subtype2-jp.asm:7 END_STACK_VARS
    case 0xC223D8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/inventory/get_item_subtype2-jp.asm:7 END_STACK_VARS
    case 0xC223D9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/inventory/get_item_subtype2-jp.asm:7 END_STACK_VARS
    case 0xC223DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/inventory/get_item_subtype2-jp.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC223DA.
    case 0xC223DC: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/inventory/get_item_subtype2-jp.asm:7 END_STACK_VARS
    case 0xC223DD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/inventory/get_item_subtype2-jp.asm:7 END_STACK_VARS
    case 0xC223DE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/inventory/get_item_subtype2-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC223DF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/inventory/get_item_subtype2-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC223DC.
    case 0xC223E0: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/inventory/get_item_subtype2-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC223E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/inventory/get_item_subtype2-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC223E2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/inventory/get_item_subtype2-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC223E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/inventory/get_item_subtype2-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC223E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/inventory/get_item_subtype2-jp.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC223E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/inventory/get_item_subtype2-jp.asm:9 CLC
    case 0xC223E7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/inventory/get_item_subtype2-jp.asm:10 ADC #item::type
    case 0xC223E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/inventory/get_item_subtype2-jp.asm:10 ADC #item::type
    // Overlapping static entry reached from 0xC223E8.
    case 0xC223EA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:11 TAX
    case 0xC223EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/inventory/get_item_subtype2-jp.asm:12 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC223EC: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/inventory/get_item_subtype2-jp.asm:13 AND #$00FF
    case 0xC223F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/inventory/get_item_subtype2-jp.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC223F0.
    case 0xC223F2: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:14 AND #$000C
    case 0xC223F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/inventory/get_item_subtype2-jp.asm:14 AND #$000C
    // Overlapping static entry reached from 0xC223F3.
    case 0xC223F5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:15 BEQ @UNKNOWN0
    case 0xC223F6: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:16 CMP #$000C
    case 0xC223F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/inventory/get_item_subtype2-jp.asm:16 CMP #$000C
    // Overlapping static entry reached from 0xC223F8.
    case 0xC223FA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:17 BEQ @UNKNOWN0
    case 0xC223FB: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:18 CMP #$0004
    case 0xC223FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/inventory/get_item_subtype2-jp.asm:18 CMP #$0004
    // Overlapping static entry reached from 0xC223FD.
    case 0xC223FF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:19 BEQ @UNKNOWN1
    case 0xC22400: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:20 CMP #$0008
    case 0xC22402: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/inventory/get_item_subtype2-jp.asm:20 CMP #$0008
    // Overlapping static entry reached from 0xC22402.
    case 0xC22404: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:21 BEQ @UNKNOWN2
    case 0xC22405: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:22 BRA @UNKNOWN3
    case 0xC22407: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:24 LDA #$0001
    case 0xC22409: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/inventory/get_item_subtype2-jp.asm:24 LDA #$0001
    // Overlapping static entry reached from 0xC22409.
    case 0xC2240B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:25 BRA @UNKNOWN4
    case 0xC2240C: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:27 LDA #$0002
    case 0xC2240E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/inventory/get_item_subtype2-jp.asm:27 LDA #$0002
    // Overlapping static entry reached from 0xC2240E.
    case 0xC22410: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:28 BRA @UNKNOWN4
    case 0xC22411: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:30 LDA #$0003
    case 0xC22413: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/inventory/get_item_subtype2-jp.asm:30 LDA #$0003
    // Overlapping static entry reached from 0xC22413.
    case 0xC22415: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:31 BRA @UNKNOWN4
    case 0xC22416: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:33 LDA #$0000
    case 0xC22418: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/inventory/get_item_subtype2-jp.asm:33 LDA #$0000
    // Overlapping static entry reached from 0xC22418.
    case 0xC2241A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/inventory/get_item_subtype2-jp.asm:35 PLD
    case 0xC2241B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/inventory/get_item_subtype2-jp.asm:36 RTL
    case 0xC2241C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
