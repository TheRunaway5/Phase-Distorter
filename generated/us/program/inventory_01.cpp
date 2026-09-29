// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/inventory/get_item_subtype.asm (source_named).
bool execute_inventory_get_item_subtype_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/inventory/get_item_subtype.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC224E1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/inventory/get_item_subtype.asm:4 LDY #.SIZEOF(item)
    case 0xC224E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/inventory/get_item_subtype.asm:4 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC224E3.
    case 0xC224E5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/inventory/get_item_subtype.asm:5 JSL MULT168
    case 0xC224E6: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/inventory/get_item_subtype.asm:6 CLC
    case 0xC224EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/inventory/get_item_subtype.asm:7 ADC #item::type
    case 0xC224EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/inventory/get_item_subtype.asm:7 ADC #item::type
    // Overlapping static entry reached from 0xC224EB.
    case 0xC224ED: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/inventory/get_item_subtype.asm:8 TAX
    case 0xC224EE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/inventory/get_item_subtype.asm:9 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC224EF: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/inventory/get_item_subtype.asm:10 AND #$00FF
    case 0xC224F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/inventory/get_item_subtype.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC224F3.
    case 0xC224F5: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/inventory/get_item_subtype.asm:11 AND #$000C
    case 0xC224F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/inventory/get_item_subtype.asm:11 AND #$000C
    // Overlapping static entry reached from 0xC224F6.
    case 0xC224F8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype.asm:12 BEQ @UNKNOWN0
    case 0xC224F9: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/inventory/get_item_subtype.asm:13 CMP #$0004
    case 0xC224FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/inventory/get_item_subtype.asm:13 CMP #$0004
    // Overlapping static entry reached from 0xC224FB.
    case 0xC224FD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype.asm:14 BEQ @UNKNOWN1
    case 0xC224FE: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/inventory/get_item_subtype.asm:15 CMP #$0008
    case 0xC22500: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/inventory/get_item_subtype.asm:15 CMP #$0008
    // Overlapping static entry reached from 0xC22500.
    case 0xC22502: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype.asm:16 BEQ @UNKNOWN2
    case 0xC22503: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/inventory/get_item_subtype.asm:17 CMP #$000C
    case 0xC22505: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/inventory/get_item_subtype.asm:17 CMP #$000C
    // Overlapping static entry reached from 0xC22505.
    case 0xC22507: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype.asm:18 BEQ @UNKNOWN3
    case 0xC22508: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/inventory/get_item_subtype.asm:19 BRA @UNKNOWN4
    case 0xC2250A: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/inventory/get_item_subtype.asm:21 LDA #$0001
    case 0xC2250C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/inventory/get_item_subtype.asm:21 LDA #$0001
    // Overlapping static entry reached from 0xC2250C.
    case 0xC2250E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/inventory/get_item_subtype.asm:22 BRA @UNKNOWN5
    case 0xC2250F: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/inventory/get_item_subtype.asm:24 LDA #$0002
    case 0xC22511: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/inventory/get_item_subtype.asm:24 LDA #$0002
    // Overlapping static entry reached from 0xC22511.
    case 0xC22513: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/inventory/get_item_subtype.asm:25 BRA @UNKNOWN5
    case 0xC22514: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/inventory/get_item_subtype.asm:27 LDA #$0003
    case 0xC22516: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/inventory/get_item_subtype.asm:27 LDA #$0003
    // Overlapping static entry reached from 0xC22516.
    case 0xC22518: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/inventory/get_item_subtype.asm:28 BRA @UNKNOWN5
    case 0xC22519: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/inventory/get_item_subtype.asm:30 LDA #$0004
    case 0xC2251B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/inventory/get_item_subtype.asm:30 LDA #$0004
    // Overlapping static entry reached from 0xC2251B.
    case 0xC2251D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/inventory/get_item_subtype.asm:31 BRA @UNKNOWN5
    case 0xC2251E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/inventory/get_item_subtype.asm:33 LDA #$0000
    case 0xC22520: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/inventory/get_item_subtype.asm:33 LDA #$0000
    // Overlapping static entry reached from 0xC22520.
    case 0xC22522: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/inventory/get_item_subtype.asm:35 RTL
    case 0xC22523: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/inventory/get_item_subtype2.asm (source_named).
bool execute_inventory_get_item_subtype2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/inventory/get_item_subtype2.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC22524: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/inventory/get_item_subtype2.asm:4 LDY #.SIZEOF(item)
    case 0xC22526: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/inventory/get_item_subtype2.asm:4 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC22526.
    case 0xC22528: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/inventory/get_item_subtype2.asm:5 JSL MULT168
    case 0xC22529: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/inventory/get_item_subtype2.asm:6 CLC
    case 0xC2252D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/inventory/get_item_subtype2.asm:7 ADC #item::type
    case 0xC2252E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/inventory/get_item_subtype2.asm:7 ADC #item::type
    // Overlapping static entry reached from 0xC2252E.
    case 0xC22530: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/inventory/get_item_subtype2.asm:8 TAX
    case 0xC22531: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/inventory/get_item_subtype2.asm:9 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC22532: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/inventory/get_item_subtype2.asm:10 AND #$00FF
    case 0xC22536: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/inventory/get_item_subtype2.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC22536.
    case 0xC22538: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/inventory/get_item_subtype2.asm:11 AND #$000C
    case 0xC22539: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/inventory/get_item_subtype2.asm:11 AND #$000C
    // Overlapping static entry reached from 0xC22539.
    case 0xC2253B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype2.asm:12 BEQ @UNKNOWN0
    case 0xC2253C: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/inventory/get_item_subtype2.asm:13 CMP #$000C
    case 0xC2253E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/inventory/get_item_subtype2.asm:13 CMP #$000C
    // Overlapping static entry reached from 0xC2253E.
    case 0xC22540: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype2.asm:14 BEQ @UNKNOWN0
    case 0xC22541: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/inventory/get_item_subtype2.asm:15 CMP #$0004
    case 0xC22543: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/inventory/get_item_subtype2.asm:15 CMP #$0004
    // Overlapping static entry reached from 0xC22543.
    case 0xC22545: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype2.asm:16 BEQ @UNKNOWN1
    case 0xC22546: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/inventory/get_item_subtype2.asm:17 CMP #$0008
    case 0xC22548: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/inventory/get_item_subtype2.asm:17 CMP #$0008
    // Overlapping static entry reached from 0xC22548.
    case 0xC2254A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/inventory/get_item_subtype2.asm:18 BEQ @UNKNOWN2
    case 0xC2254B: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/inventory/get_item_subtype2.asm:19 BRA @UNKNOWN3
    case 0xC2254D: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/inventory/get_item_subtype2.asm:21 LDA #$0001
    case 0xC2254F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/inventory/get_item_subtype2.asm:21 LDA #$0001
    // Overlapping static entry reached from 0xC2254F.
    case 0xC22551: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/inventory/get_item_subtype2.asm:22 BRA @UNKNOWN4
    case 0xC22552: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/inventory/get_item_subtype2.asm:24 LDA #$0002
    case 0xC22554: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/inventory/get_item_subtype2.asm:24 LDA #$0002
    // Overlapping static entry reached from 0xC22554.
    case 0xC22556: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/inventory/get_item_subtype2.asm:25 BRA @UNKNOWN4
    case 0xC22557: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/inventory/get_item_subtype2.asm:27 LDA #$0003
    case 0xC22559: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/inventory/get_item_subtype2.asm:27 LDA #$0003
    // Overlapping static entry reached from 0xC22559.
    case 0xC2255B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/inventory/get_item_subtype2.asm:28 BRA @UNKNOWN4
    case 0xC2255C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/inventory/get_item_subtype2.asm:30 LDA #$0000
    case 0xC2255E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/inventory/get_item_subtype2.asm:30 LDA #$0000
    // Overlapping static entry reached from 0xC2255E.
    case 0xC22560: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/inventory/get_item_subtype2.asm:32 RTL
    case 0xC22561: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
