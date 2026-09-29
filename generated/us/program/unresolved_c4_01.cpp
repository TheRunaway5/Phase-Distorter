// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C4/C40000.asm (unresolved).
bool execute_unresolved_c4_c40000_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C40000.asm:3 PHP
    case 0xC40000: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C40000.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC40001: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C40000.asm:5 STA f:INIDISP
    case 0xC40003: cpu.execute_instruction<0x8F>(0x002100, 4); return true;
    // src/unknown/C4/C40000.asm:6 PLP
    case 0xC40007: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C4/C40000.asm:7 RTL
    case 0xC40008: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C40009.asm (unresolved).
bool execute_unresolved_c4_c40009_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C40009.asm:3 PHP
    case 0xC40009: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C40009.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC4000A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C40009.asm:5 LDA INIDISP_MIRROR
    case 0xC4000C: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/unknown/C4/C40009.asm:6 STA f:INIDISP
    case 0xC4000F: cpu.execute_instruction<0x8F>(0x002100, 4); return true;
    // src/unknown/C4/C40009.asm:7 PLP
    case 0xC40013: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C4/C40009.asm:8 RTL
    case 0xC40014: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C40015.asm (unresolved).
bool execute_unresolved_c4_c40015_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C40015.asm:3 LDX $88
    case 0xC40015: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C4/C40015.asm:4 STZ ENTITY_ANIMATION_FRAME,X
    case 0xC40017: cpu.execute_instruction<0x9E>(0x0010F2, 3); return true;
    // src/unknown/C4/C40015.asm:5 JSL UNKNOWN_C0A443_ENTRY3
    case 0xC4001A: cpu.execute_instruction<0x22>(0xC0A4A8, 4); return true;
    // src/unknown/C4/C40015.asm:6 JSL UNKNOWN_C0C6B6
    case 0xC4001E: cpu.execute_instruction<0x22>(0xC0C6B6, 4); return true;
    // src/unknown/C4/C40015.asm:7 RTL
    case 0xC40022: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C40023.asm (unresolved).
bool execute_unresolved_c4_c40023_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C40023.asm:4 LDX $8A
    case 0xC40023: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/unknown/C4/C40023.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC40025: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C40023.asm:6 AND #$000F
    case 0xC40028: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C4/C40023.asm:6 AND #$000F
    // Overlapping static entry reached from 0xC40028.
    case 0xC4002A: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C40023.asm:7 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC4002B: cpu.execute_instruction<0x9D>(0x001372, 3); return true;
    // src/unknown/C4/C40023.asm:8 RTL
    case 0xC4002E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4002F.asm (unresolved).
bool execute_unresolved_c4_c4002f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4002F.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC4002F: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C4002F.asm:4 ASL
    case 0xC40031: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:5 ASL
    case 0xC40032: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:6 ASL
    case 0xC40033: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:7 ASL
    case 0xC40034: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:8 ASL
    case 0xC40035: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:9 CLC
    case 0xC40036: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:10 ADC #.LOWORD(VWF_BUFFER)
    case 0xC40037: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000092, 2); else cpu.execute_instruction<0x69>(0x003492, 3); return true;
    // src/unknown/C4/C4002F.asm:10 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC40037.
    case 0xC40039: cpu.execute_instruction<0x34>(0x00008D, 2); return true;
    // src/unknown/C4/C4002F.asm:11 STA DMA_COPY_RAM_SRC
    case 0xC4003A: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C4/C4002F.asm:11 STA DMA_COPY_RAM_SRC
    // Overlapping static entry reached from 0xC40039.
    case 0xC4003B: cpu.execute_instruction<0x94>(0x000000, 2); return true;
    // src/unknown/C4/C4002F.asm:12 LDA #$0000
    case 0xC4003D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4002F.asm:12 LDA #$0000
    // Overlapping static entry reached from 0xC4003D.
    case 0xC4003F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4002F.asm:13 STA DMA_COPY_MODE
    case 0xC40040: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/unknown/C4/C4002F.asm:14 LDA #$0010
    case 0xC40043: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C4002F.asm:14 LDA #$0010
    // Overlapping static entry reached from 0xC40043.
    case 0xC40045: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4002F.asm:15 STA DMA_COPY_SIZE
    case 0xC40046: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/unknown/C4/C4002F.asm:16 LDA #$007E
    case 0xC40049: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/C4/C4002F.asm:16 LDA #$007E
    // Overlapping static entry reached from 0xC40049.
    case 0xC4004B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4002F.asm:17 STA DMA_COPY_RAM_SRC + 2
    case 0xC4004C: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/unknown/C4/C4002F.asm:18 TXA
    case 0xC4004F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:19 ASL
    case 0xC40050: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:20 ASL
    case 0xC40051: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:21 ASL
    case 0xC40052: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:22 CLC
    case 0xC40053: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:23 ADC #$6000
    case 0xC40054: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x006000, 3); return true;
    // src/unknown/C4/C4002F.asm:23 ADC #$6000
    // Overlapping static entry reached from 0xC40054.
    case 0xC40056: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:24 STA DMA_COPY_VRAM_DEST
    case 0xC40057: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C4/C4002F.asm:25 PHY
    case 0xC4005A: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:26 JSL PREPARE_VRAM_COPY_COMMON
    case 0xC4005B: cpu.execute_instruction<0x22>(0xC08643, 4); return true;
    // src/unknown/C4/C4002F.asm:27 LDA DMA_COPY_RAM_SRC
    case 0xC4005F: cpu.execute_instruction<0xAD>(0x000094, 3); return true;
    // src/unknown/C4/C4002F.asm:28 CLC
    case 0xC40062: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:29 ADC #$0010
    case 0xC40063: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4002F.asm:29 ADC #$0010
    // Overlapping static entry reached from 0xC40063.
    case 0xC40065: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4002F.asm:30 STA DMA_COPY_RAM_SRC
    case 0xC40066: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C4/C4002F.asm:31 PLA
    case 0xC40069: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:32 ASL
    case 0xC4006A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:33 ASL
    case 0xC4006B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:34 ASL
    case 0xC4006C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:35 CLC
    case 0xC4006D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:36 ADC #$6000
    case 0xC4006E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x006000, 3); return true;
    // src/unknown/C4/C4002F.asm:36 ADC #$6000
    // Overlapping static entry reached from 0xC4006E.
    case 0xC40070: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C4/C4002F.asm:37 STA DMA_COPY_VRAM_DEST
    case 0xC40071: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C4/C4002F.asm:38 JSL PREPARE_VRAM_COPY_COMMON
    case 0xC40074: cpu.execute_instruction<0x22>(0xC08643, 4); return true;
    // src/unknown/C4/C4002F.asm:39 LDA INIDISP_MIRROR
    case 0xC40078: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/unknown/C4/C4002F.asm:40 AND #$0080
    case 0xC4007B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C4/C4002F.asm:40 AND #$0080
    // Overlapping static entry reached from 0xC4007B.
    case 0xC4007D: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C4/C4002F.asm:41 EOR #$0080
    case 0xC4007E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x000080, 3); return true;
    // src/unknown/C4/C4002F.asm:41 EOR #$0080
    // Overlapping static entry reached from 0xC4007E.
    case 0xC40080: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4002F.asm:42 STA DMA_TRANSFER_FLAG
    case 0xC40081: cpu.execute_instruction<0x8D>(0x009E2B, 3); return true;
    // src/unknown/C4/C4002F.asm:43 RTS
    case 0xC40084: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C40085.asm (unresolved).
bool execute_unresolved_c4_c40085_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C40085.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC40085: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C40085.asm:4 LDY #$0008
    case 0xC40087: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C40085.asm:4 LDY #$0008
    // Overlapping static entry reached from 0xC40087.
    case 0xC40089: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C40085.asm:5 LDA #$FFFF
    case 0xC4008A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C40085.asm:5 LDA #$FFFF
    // Overlapping static entry reached from 0xC4008A.
    case 0xC4008C: cpu.execute_instruction<0xFF>(0xC81A80, 4); return true;
    // src/unknown/C4/C40085.asm:6 BRA @UNKNOWN1
    case 0xC4008D: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C4/C40085.asm:8 INY
    case 0xC4008F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C40085.asm:9 INY
    case 0xC40090: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C40085.asm:10 CPY #$0040
    case 0xC40091: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000040, 2); else cpu.execute_instruction<0xC0>(0x000040, 3); return true;
    // src/unknown/C4/C40085.asm:10 CPY #$0040
    // Overlapping static entry reached from 0xC40091.
    case 0xC40093: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C40085.asm:11 BNE @UNKNOWN1
    case 0xC40094: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/C4/C40085.asm:12 JSL UNKNOWN_C10000
    case 0xC40096: cpu.execute_instruction<0x22>(0xC10000, 4); return true;
    // src/unknown/C4/C40085.asm:13 JSL REDIRECT_C1008E
    case 0xC4009A: cpu.execute_instruction<0x22>(0xC10BF8, 4); return true;
    // src/unknown/C4/C40085.asm:14 JSL UNKNOWN_C09451
    case 0xC4009E: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/unknown/C4/C40085.asm:15 LDA #.LOWORD(JMP_BUF2)
    case 0xC400A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x000A2A, 3); return true;
    // src/unknown/C4/C40085.asm:15 LDA #.LOWORD(JMP_BUF2)
    // Overlapping static entry reached from 0xC400A2.
    case 0xC400A4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C40085.asm:16 JSL LONGJMP
    case 0xC400A5: cpu.execute_instruction<0x22>(0xC08F68, 4); return true;
    // src/unknown/C4/C40085.asm:18 CMP USED_BG2_TILE_MAP,Y
    case 0xC400A9: cpu.execute_instruction<0xD9>(0x001AD6, 3); return true;
    // src/unknown/C4/C40085.asm:19 BEQ @UNKNOWN0
    case 0xC400AC: cpu.execute_instruction<0xF0>(0x0000E1, 2); return true;
    // src/unknown/C4/C40085.asm:20 LDX #$001E
    case 0xC400AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001E, 2); else cpu.execute_instruction<0xA2>(0x00001E, 3); return true;
    // src/unknown/C4/C40085.asm:20 LDX #$001E
    // Overlapping static entry reached from 0xC400AE.
    case 0xC400B0: cpu.execute_instruction<0x00>(0x0000B9, 2); return true;
    // src/unknown/C4/C40085.asm:21 LDA USED_BG2_TILE_MAP,Y
    case 0xC400B1: cpu.execute_instruction<0xB9>(0x001AD6, 3); return true;
    // src/unknown/C4/C40085.asm:22 BRA @UNKNOWN3
    case 0xC400B4: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C40085.asm:24 DEX
    case 0xC400B6: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C40085.asm:25 DEX
    case 0xC400B7: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C40085.asm:26 ASL
    case 0xC400B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C40085.asm:28 BMI @UNKNOWN2
    case 0xC400B9: cpu.execute_instruction<0x30>(0x0000FB, 2); return true;
    // src/unknown/C4/C40085.asm:29 LDA USED_BG2_TILE_MAP,Y
    case 0xC400BB: cpu.execute_instruction<0xB9>(0x001AD6, 3); return true;
    // src/unknown/C4/C40085.asm:29 LDA USED_BG2_TILE_MAP,Y
    // Overlapping static entry reached from 0xC48CFC.
    case 0xC400BD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C40085.asm:30 ORA f:POWERS_OF_TWO_16BIT,X
    case 0xC400BE: cpu.execute_instruction<0x1F>(0xC44C6C, 4); return true;
    // src/unknown/C4/C40085.asm:31 STA USED_BG2_TILE_MAP,Y
    case 0xC400C2: cpu.execute_instruction<0x99>(0x001AD6, 3); return true;
    // src/unknown/C4/C40085.asm:32 STX USED_BG2_TILEMAP_FIRST_FREE_BIT
    case 0xC400C5: cpu.execute_instruction<0x8E>(0x00288E, 3); return true;
    // src/unknown/C4/C40085.asm:33 LSR USED_BG2_TILEMAP_FIRST_FREE_BIT
    case 0xC400C8: cpu.execute_instruction<0x4E>(0x00288E, 3); return true;
    // src/unknown/C4/C40085.asm:34 TYA
    case 0xC400CB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C40085.asm:35 ASL
    case 0xC400CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C40085.asm:36 ASL
    case 0xC400CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C40085.asm:37 ASL
    case 0xC400CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C40085.asm:38 CLC
    case 0xC400CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C40085.asm:39 ADC USED_BG2_TILEMAP_FIRST_FREE_BIT
    case 0xC400D0: cpu.execute_instruction<0x6D>(0x00288E, 3); return true;
    // src/unknown/C4/C40085.asm:40 RTS
    case 0xC400D3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C40B51.asm (unresolved).
bool execute_unresolved_c4_c40b51_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C40B51.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC40B51: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C40B51.asm:4 JSL STOP_MUSIC
    case 0xC40B53: cpu.execute_instruction<0x22>(0xC0ABC6, 4); return true;
    // src/unknown/C4/C40B51.asm:5 LDA #$0001
    case 0xC40B57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C40B51.asm:5 LDA #$0001
    // Overlapping static entry reached from 0xC40B57.
    case 0xC40B59: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C40B51.asm:6 JSL UNKNOWN_C08D79
    case 0xC40B5A: cpu.execute_instruction<0x22>(0xC08D79, 4); return true;
    // src/unknown/C4/C40B51.asm:7 LDY #VRAM::ERROR_SCREEN_TILES
    case 0xC40B5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C40B51.asm:7 LDY #VRAM::ERROR_SCREEN_TILES
    // Overlapping static entry reached from 0xC40B5E.
    case 0xC40B60: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C40B51.asm:8 LDX #VRAM::ERROR_SCREEN_TILEMAP
    case 0xC40B61: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x004000, 3); return true;
    // src/unknown/C4/C40B51.asm:8 LDX #VRAM::ERROR_SCREEN_TILEMAP
    // Overlapping static entry reached from 0xC40B61.
    case 0xC40B63: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C4/C40B51.asm:9 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC40B64: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C40B51.asm:10 JSL SET_BG3_VRAM_LOCATION
    case 0xC40B65: cpu.execute_instruction<0x22>(0xC08E1C, 4); return true;
    // src/unknown/C4/C40B51.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC40B69: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C40B51.asm:12 LDA #$0004
    case 0xC40B6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008D04, 3); return true;
    // src/unknown/C4/C40B51.asm:13 STA TM_MIRROR
    case 0xC40B6D: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C4/C40B51.asm:13 STA TM_MIRROR
    // Overlapping static entry reached from 0xC40B6B.
    case 0xC40B6E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C40B51.asm:13 STA TM_MIRROR
    // Overlapping static entry reached from 0xC40B6E.
    case 0xC40B6F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C40B51.asm:14 JSL UNKNOWN_C08726
    case 0xC40B70: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/unknown/C4/C40B51.asm:15 RTL
    case 0xC40B74: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C40B75.asm (unresolved).
bool execute_unresolved_c4_c40b75_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C40B75.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC40B75: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C40B75.asm:6 END_STACK_VARS
    case 0xC40B77: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C40B75.asm:6 END_STACK_VARS
    case 0xC40B78: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C40B75.asm:6 END_STACK_VARS
    case 0xC40B79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C40B75.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC40B79.
    case 0xC40B7B: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C40B75.asm:6 END_STACK_VARS
    case 0xC40B7C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40B7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    // Overlapping static entry reached from 0xC40B7D.
    case 0xC40B7F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40B80: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40B82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    // Overlapping static entry reached from 0xC40B82.
    case 0xC40B84: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40B85: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40B87: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    // Overlapping static entry reached from 0xC40B87.
    case 0xC40B89: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40B8A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000A00, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    // Overlapping static entry reached from 0xC40B8A.
    case 0xC40B8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40B8D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40B8F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40B90: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40B94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    // Overlapping static entry reached from 0xC40B94.
    case 0xC40B96: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40B97: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40B99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    // Overlapping static entry reached from 0xC40B99.
    case 0xC40B9B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40B9C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40B9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x004000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    // Overlapping static entry reached from 0xC40B9E.
    case 0xC40BA0: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40BA1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    // Overlapping static entry reached from 0xC40BA1.
    case 0xC40BA3: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40BA4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40BA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40BA8: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    // Overlapping static entry reached from 0xC40BA6.
    case 0xC40BA9: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    // Overlapping static entry reached from 0xC40BA9.
    case 0xC40BAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00BEA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    case 0xC40BAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BE, 2); else cpu.execute_instruction<0xA9>(0x00F3BE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC40BAB.
    case 0xC40BAD: cpu.execute_instruction<0xBE>(0x0085F3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC40BAC.
    case 0xC40BAE: cpu.execute_instruction<0xF3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    case 0xC40BAF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC40BAE.
    case 0xC40BB0: cpu.execute_instruction<0x0E>(0x00D8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    case 0xC40BB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D8, 2); else cpu.execute_instruction<0xA9>(0x0000D8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC40BB1.
    case 0xC40BB3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    case 0xC40BB4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C40B75.asm:12 LDX #BPP2PALETTE_SIZE * 2
    case 0xC40BB6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/unknown/C4/C40B75.asm:12 LDX #BPP2PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC40BB6.
    case 0xC40BB8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C40B75.asm:13 LDA #.LOWORD(PALETTES)
    case 0xC40BB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C40B75.asm:13 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC40BB9.
    case 0xC40BBB: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C40B75.asm:14 JSL MEMCPY16
    case 0xC40BBC: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C4/C40B75.asm:15 LDA #24
    case 0xC40BC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C40B75.asm:15 LDA #24
    // Overlapping static entry reached from 0xC40BC0.
    case 0xC40BC2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C40B75.asm:16 JSL UNKNOWN_C0856B
    case 0xC40BC3: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C4/C40B75.asm:17 LDY #0
    case 0xC40BC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C40B75.asm:17 LDY #0
    // Overlapping static entry reached from 0xC40BC7.
    case 0xC40BC9: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C40B75.asm:18 LDX #1
    case 0xC40BCA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C40B75.asm:18 LDX #1
    // Overlapping static entry reached from 0xC40BCA.
    case 0xC40BCC: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C40B75.asm:19 TXA
    case 0xC40BCD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C40B75.asm:20 JSL FADE_IN_WITH_MOSAIC
    case 0xC40BCE: cpu.execute_instruction<0x22>(0xC087CE, 4); return true;
    // src/unknown/C4/C40B75.asm:22 BRA @UNKNOWN0
    case 0xC40BD2: cpu.execute_instruction<0x80>(0x0000FE, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C41DB6.asm (unresolved).
bool execute_unresolved_c4_c41db6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C41DB6.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC41DB6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:4 PHD
    case 0xC41DB8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:5 PHA
    case 0xC41DB9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:6 TDC
    case 0xC41DBA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:7 SEC
    case 0xC41DBB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:8 SBC #$0014
    case 0xC41DBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000014, 2); else cpu.execute_instruction<0xE9>(0x000014, 3); return true;
    // src/unknown/C4/C41DB6.asm:8 SBC #$0014
    // Overlapping static entry reached from 0xC41DBC.
    case 0xC41DBE: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C41DB6.asm:9 TCD
    case 0xC41DBF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:10 PLA
    case 0xC41DC0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:11 STA $00
    case 0xC41DC1: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C41DB6.asm:12 LDA UNKNOWN_7E3C14
    case 0xC41DC3: cpu.execute_instruction<0xAD>(0x003C14, 3); return true;
    // src/unknown/C4/C41DB6.asm:13 AND #$0007
    case 0xC41DC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C41DB6.asm:13 AND #$0007
    // Overlapping static entry reached from 0xC41DC6.
    case 0xC41DC8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C41DB6.asm:14 STA $06
    case 0xC41DC9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C41DB6.asm:15 LDA UNKNOWN_7E3C16
    case 0xC41DCB: cpu.execute_instruction<0xAD>(0x003C16, 3); return true;
    // src/unknown/C4/C41DB6.asm:16 AND #$0007
    case 0xC41DCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C41DB6.asm:16 AND #$0007
    // Overlapping static entry reached from 0xC41DCE.
    case 0xC41DD0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C41DB6.asm:17 STA $08
    case 0xC41DD1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C41DB6.asm:18 LDA UNKNOWN_7E3C14
    case 0xC41DD3: cpu.execute_instruction<0xAD>(0x003C14, 3); return true;
    // src/unknown/C4/C41DB6.asm:19 LSR
    case 0xC41DD6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:20 LSR
    case 0xC41DD7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:21 LSR
    case 0xC41DD8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:22 STA $02
    case 0xC41DD9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C41DB6.asm:23 LDA UNKNOWN_7E3C16
    case 0xC41DDB: cpu.execute_instruction<0xAD>(0x003C16, 3); return true;
    // src/unknown/C4/C41DB6.asm:24 LSR
    case 0xC41DDE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:25 LSR
    case 0xC41DDF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:26 LSR
    case 0xC41DE0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:27 STA $04
    case 0xC41DE1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C41DB6.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC41DE3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:29 XBA
    case 0xC41DE5: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:30 LDA UNKNOWN_7E3C18
    case 0xC41DE6: cpu.execute_instruction<0xAD>(0x003C18, 3); return true;
    // src/unknown/C4/C41DB6.asm:30 LDA UNKNOWN_7E3C18
    // Overlapping static entry reached from 0xC41E23.
    case 0xC41DE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:30 LDA UNKNOWN_7E3C18
    // Overlapping static entry reached from 0xC41DE7.
    case 0xC41DE8: cpu.execute_instruction<0x3C>(0x0020C2, 3); return true;
    // src/unknown/C4/C41DB6.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC41DE9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:32 STA f:WRMPYA
    case 0xC41DEB: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/unknown/C4/C41DB6.asm:33 NOP
    case 0xC41DEF: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:34 NOP
    case 0xC41DF0: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:35 LDA f:RDMPYL
    case 0xC41DF1: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/unknown/C4/C41DB6.asm:36 CLC
    case 0xC41DF5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:37 ADC $02
    case 0xC41DF6: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C41DB6.asm:38 CLC
    case 0xC41DF8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:39 ADC UNKNOWN_7E3C1C
    case 0xC41DF9: cpu.execute_instruction<0x6D>(0x003C1C, 3); return true;
    // src/unknown/C4/C41DB6.asm:40 ASL
    case 0xC41DFC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:41 ASL
    case 0xC41DFD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:42 ASL
    case 0xC41DFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:43 CLC
    case 0xC41DFF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:44 ADC $08
    case 0xC41E00: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // src/unknown/C4/C41DB6.asm:45 ASL
    case 0xC41E02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:46 STA $0A
    case 0xC41E03: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:47 JSR UNKNOWN_C41EE9
    case 0xC41E05: cpu.execute_instruction<0x20>(0x001EE9, 3); return true;
    // src/unknown/C4/C41DB6.asm:48 LDA $06
    case 0xC41E08: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C4/C41DB6.asm:49 ASL
    case 0xC41E0A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:50 TAX
    case 0xC41E0B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:51 LDA f:UNKNOWN_C41EB9,X
    case 0xC41E0C: cpu.execute_instruction<0xBF>(0xC41EB9, 4); return true;
    // src/unknown/C4/C41DB6.asm:52 STA $0E
    case 0xC41E10: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C41DB6.asm:53 LDA f:UNKNOWN_C41EC9,X
    case 0xC41E12: cpu.execute_instruction<0xBF>(0xC41EC9, 4); return true;
    // src/unknown/C4/C41DB6.asm:54 STA $10
    case 0xC41E16: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C41DB6.asm:55 LDA f:UNKNOWN_C41ED9,X
    case 0xC41E18: cpu.execute_instruction<0xBF>(0xC41ED9, 4); return true;
    // src/unknown/C4/C41DB6.asm:56 STA $12
    case 0xC41E1C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C41DB6.asm:57 LDA $00
    case 0xC41E1E: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C41DB6.asm:58 SEC
    case 0xC41E20: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:59 SBC #$8000
    case 0xC41E21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x008000, 3); return true;
    // src/unknown/C4/C41DB6.asm:59 SBC #$8000
    // Overlapping static entry reached from 0xC41E21.
    case 0xC41E23: cpu.execute_instruction<0x80>(0x0000C2, 2); return true;
    // src/unknown/C4/C41DB6.asm:60 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41E24: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C41DB6.asm:61 LDX #.LOWORD(UNKNOWN_7E3B12)
    case 0xC41E26: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000012, 2); else cpu.execute_instruction<0xA2>(0x003B12, 3); return true;
    // src/unknown/C4/C41DB6.asm:61 LDX #.LOWORD(UNKNOWN_7E3B12)
    // Overlapping static entry reached from 0xC41E26.
    case 0xC41E28: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:62 LDY $06
    case 0xC41E29: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // src/unknown/C4/C41DB6.asm:63 JSR DECOMP_ENTRY2
    case 0xC41E2B: cpu.execute_instruction<0x20>(0x001BCA, 3); return true;
    // src/unknown/C4/C41DB6.asm:64 LDY #$0000
    case 0xC41E2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C41DB6.asm:64 LDY #$0000
    // Overlapping static entry reached from 0xC41E2E.
    case 0xC41E30: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C41DB6.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC41E31: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:67 LDA UNKNOWN_7E3B12,Y
    case 0xC41E33: cpu.execute_instruction<0xB9>(0x003B12, 3); return true;
    // src/unknown/C4/C41DB6.asm:68 XBA
    case 0xC41E36: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:69 LDA UNKNOWN_7E3B12,Y
    case 0xC41E37: cpu.execute_instruction<0xB9>(0x003B12, 3); return true;
    // src/unknown/C4/C41DB6.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC41E3A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:71 LDX $0A
    case 0xC41E3C: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:72 EOR VWF_BUFFER,X
    case 0xC41E3E: cpu.execute_instruction<0x5D>(0x003492, 3); return true;
    // src/unknown/C4/C41DB6.asm:73 AND $0E
    case 0xC41E41: cpu.execute_instruction<0x25>(0x00000E, 2); return true;
    // src/unknown/C4/C41DB6.asm:74 EOR VWF_BUFFER,X
    case 0xC41E43: cpu.execute_instruction<0x5D>(0x003492, 3); return true;
    // src/unknown/C4/C41DB6.asm:75 STA VWF_BUFFER,X
    case 0xC41E46: cpu.execute_instruction<0x9D>(0x003492, 3); return true;
    // src/unknown/C4/C41DB6.asm:76 INY
    case 0xC41E49: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:77 SEP #PROC_FLAGS::ACCUM8
    case 0xC41E4A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:78 LDA UNKNOWN_7E3B12,Y
    case 0xC41E4C: cpu.execute_instruction<0xB9>(0x003B12, 3); return true;
    // src/unknown/C4/C41DB6.asm:79 XBA
    case 0xC41E4F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:80 LDA UNKNOWN_7E3B12,Y
    case 0xC41E50: cpu.execute_instruction<0xB9>(0x003B12, 3); return true;
    // src/unknown/C4/C41DB6.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xC41E53: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:82 LDX $0A
    case 0xC41E55: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:83 EOR VWF_BUFFER + 16,X
    case 0xC41E57: cpu.execute_instruction<0x5D>(0x0034A2, 3); return true;
    // src/unknown/C4/C41DB6.asm:84 AND $10
    case 0xC41E5A: cpu.execute_instruction<0x25>(0x000010, 2); return true;
    // src/unknown/C4/C41DB6.asm:85 EOR VWF_BUFFER + 16,X
    case 0xC41E5C: cpu.execute_instruction<0x5D>(0x0034A2, 3); return true;
    // src/unknown/C4/C41DB6.asm:86 STA VWF_BUFFER + 16,X
    case 0xC41E5F: cpu.execute_instruction<0x9D>(0x0034A2, 3); return true;
    // src/unknown/C4/C41DB6.asm:87 INY
    case 0xC41E62: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:88 LDA $12
    case 0xC41E63: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C41DB6.asm:89 BEQ @UNKNOWN1
    case 0xC41E65: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C41DB6.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC41E67: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:91 LDA UNKNOWN_7E3B12,Y
    case 0xC41E69: cpu.execute_instruction<0xB9>(0x003B12, 3); return true;
    // src/unknown/C4/C41DB6.asm:92 XBA
    case 0xC41E6C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:93 LDA UNKNOWN_7E3B12,Y
    case 0xC41E6D: cpu.execute_instruction<0xB9>(0x003B12, 3); return true;
    // src/unknown/C4/C41DB6.asm:94 REP #PROC_FLAGS::ACCUM8
    case 0xC41E70: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:95 LDX $0A
    case 0xC41E72: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:96 EOR VWF_BUFFER + 32,X
    case 0xC41E74: cpu.execute_instruction<0x5D>(0x0034B2, 3); return true;
    // src/unknown/C4/C41DB6.asm:97 AND $12
    case 0xC41E77: cpu.execute_instruction<0x25>(0x000012, 2); return true;
    // src/unknown/C4/C41DB6.asm:98 EOR VWF_BUFFER + 32,X
    case 0xC41E79: cpu.execute_instruction<0x5D>(0x0034B2, 3); return true;
    // src/unknown/C4/C41DB6.asm:99 STA VWF_BUFFER + 32,X
    case 0xC41E7C: cpu.execute_instruction<0x9D>(0x0034B2, 3); return true;
    // src/unknown/C4/C41DB6.asm:101 INY
    case 0xC41E7F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:102 INC $0A
    case 0xC41E80: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:103 INC $0A
    case 0xC41E82: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:104 CPY #$0024
    case 0xC41E84: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/unknown/C4/C41DB6.asm:104 CPY #$0024
    // Overlapping static entry reached from 0xC41E84.
    case 0xC41E86: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C41DB6.asm:105 BCS @UNKNOWN3
    case 0xC41E87: cpu.execute_instruction<0xB0>(0x00001A, 2); return true;
    // src/unknown/C4/C41DB6.asm:106 LDA $08
    case 0xC41E89: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C41DB6.asm:107 INC
    case 0xC41E8B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:108 AND #$0007
    case 0xC41E8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C41DB6.asm:108 AND #$0007
    // Overlapping static entry reached from 0xC41E8C.
    case 0xC41E8E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C41DB6.asm:109 STA $08
    case 0xC41E8F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C41DB6.asm:110 BNE @UNKNOWN2
    case 0xC41E91: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C4/C41DB6.asm:111 LDA UNKNOWN_7E3C18
    case 0xC41E93: cpu.execute_instruction<0xAD>(0x003C18, 3); return true;
    // src/unknown/C4/C41DB6.asm:112 DEC
    case 0xC41E96: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:113 ASL
    case 0xC41E97: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:114 ASL
    case 0xC41E98: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:115 ASL
    case 0xC41E99: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:116 ASL
    case 0xC41E9A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:117 CLC
    case 0xC41E9B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:118 ADC $0A
    case 0xC41E9C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:119 STA $0A
    case 0xC41E9E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:121 JMP @UNKNOWN0
    case 0xC41EA0: cpu.execute_instruction<0x4C>(0x001E31, 3); return true;
    // src/unknown/C4/C41DB6.asm:123 LDA $0A
    case 0xC41EA3: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:124 CLC
    case 0xC41EA5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:125 ADC #$0010
    case 0xC41EA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C41DB6.asm:125 ADC #$0010
    // Overlapping static entry reached from 0xC41EA6.
    case 0xC41EA8: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C4/C41DB6.asm:126 LDX $12
    case 0xC41EA9: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C41DB6.asm:127 BEQ @UNKNOWN4
    case 0xC41EAB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C41DB6.asm:128 ADC #$0010
    case 0xC41EAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C41DB6.asm:128 ADC #$0010
    // Overlapping static entry reached from 0xC41EAD.
    case 0xC41EAF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C41DB6.asm:130 STA $0A
    case 0xC41EB0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:131 JSR UNKNOWN_C41EF4
    case 0xC41EB2: cpu.execute_instruction<0x20>(0x001EF4, 3); return true;
    // src/unknown/C4/C41DB6.asm:132 PLD
    case 0xC41EB5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:133 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41EB6: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C41DB6.asm:134 RTL
    case 0xC41EB8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C41EE9.asm (unresolved).
bool execute_unresolved_c4_c41ee9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C41EE9.asm:3 LDA $0A
    case 0xC41EE9: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C4/C41EE9.asm:4 CMP UNKNOWN_7E3C1E
    case 0xC41EEB: cpu.execute_instruction<0xCD>(0x003C1E, 3); return true;
    // src/unknown/C4/C41EE9.asm:5 BCS @UNKNOWN0
    case 0xC41EEE: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C4/C41EE9.asm:6 STA UNKNOWN_7E3C1E
    case 0xC41EF0: cpu.execute_instruction<0x8D>(0x003C1E, 3); return true;
    // src/unknown/C4/C41EE9.asm:8 RTS
    case 0xC41EF3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C41EF4.asm (unresolved).
bool execute_unresolved_c4_c41ef4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C41EF4.asm:3 LDA $0A
    case 0xC41EF4: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C4/C41EF4.asm:4 CMP UNKNOWN_7E3C20
    case 0xC41EF6: cpu.execute_instruction<0xCD>(0x003C20, 3); return true;
    // src/unknown/C4/C41EF4.asm:5 BCC @UNKNOWN0
    case 0xC41EF9: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C4/C41EF4.asm:6 STA UNKNOWN_7E3C20
    case 0xC41EFB: cpu.execute_instruction<0x8D>(0x003C20, 3); return true;
    // src/unknown/C4/C41EF4.asm:8 RTS
    case 0xC41EFE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C41EFF.asm (unresolved).
bool execute_unresolved_c4_c41eff_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C41EFF.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC41EFF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41EFF.asm:4 PHD
    case 0xC41F01: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:5 PHA
    case 0xC41F02: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:6 TDC
    case 0xC41F03: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:7 SEC
    case 0xC41F04: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:8 SBC #$0010
    case 0xC41F05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/C4/C41EFF.asm:8 SBC #$0010
    // Overlapping static entry reached from 0xC41F05.
    case 0xC41F07: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C41EFF.asm:9 TCD
    case 0xC41F08: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:10 PLA
    case 0xC41F09: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:11 STA $00
    case 0xC41F0A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C41EFF.asm:12 STX $02
    case 0xC41F0C: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C41EFF.asm:13 STY $04
    case 0xC41F0E: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C41EFF.asm:14 LDA $1E
    case 0xC41F10: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C41EFF.asm:15 STA $06
    case 0xC41F12: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C41EFF.asm:16 LDA $00
    case 0xC41F14: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C41EFF.asm:17 SEC
    case 0xC41F16: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:18 SBC $04
    case 0xC41F17: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C4/C41EFF.asm:19 PHA
    case 0xC41F19: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:20 BPL @UNKNOWN0
    case 0xC41F1A: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C4/C41EFF.asm:21 EOR #$FFFF
    case 0xC41F1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C41EFF.asm:21 EOR #$FFFF
    // Overlapping static entry reached from 0xC41F1C.
    case 0xC41F1E: cpu.execute_instruction<0xFF>(0xA5A81A, 4); return true;
    // src/unknown/C4/C41EFF.asm:22 INC
    case 0xC41F1F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:24 TAY
    case 0xC41F20: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:25 LDA $02
    case 0xC41F21: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C41EFF.asm:25 LDA $02
    // Overlapping static entry reached from 0xC41F1E.
    case 0xC41F22: cpu.execute_instruction<0x02>(0x000038, 2); return true;
    // src/unknown/C4/C41EFF.asm:26 SEC
    case 0xC41F23: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:27 SBC $06
    case 0xC41F24: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C4/C41EFF.asm:28 PHA
    case 0xC41F26: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:29 BPL @UNKNOWN1
    case 0xC41F27: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C4/C41EFF.asm:30 EOR #$FFFF
    case 0xC41F29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C41EFF.asm:30 EOR #$FFFF
    // Overlapping static entry reached from 0xC41F29.
    case 0xC41F2B: cpu.execute_instruction<0xFF>(0x0C851A, 4); return true;
    // src/unknown/C4/C41EFF.asm:31 INC
    case 0xC41F2C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:33 STA $0C
    case 0xC41F2D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C41EFF.asm:34 TYA
    case 0xC41F2F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:36 CMP #$0100
    case 0xC41F30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C41EFF.asm:36 CMP #$0100
    // Overlapping static entry reached from 0xC41F30.
    case 0xC41F32: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C4/C41EFF.asm:37 BCC @UNKNOWN3
    case 0xC41F33: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C4/C41EFF.asm:37 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC41F32.
    case 0xC41F34: cpu.execute_instruction<0x05>(0x00004A, 2); return true;
    // src/unknown/C4/C41EFF.asm:38 LSR
    case 0xC41F35: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:39 LSR $0C
    case 0xC41F36: cpu.execute_instruction<0x46>(0x00000C, 2); return true;
    // src/unknown/C4/C41EFF.asm:40 BRA @UNKNOWN2
    case 0xC41F38: cpu.execute_instruction<0x80>(0x0000F6, 2); return true;
    // src/unknown/C4/C41EFF.asm:42 STA $0A
    case 0xC41F3A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C41EFF.asm:43 PLA
    case 0xC41F3C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:44 BEQ @UNKNOWN4
    case 0xC41F3D: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C41EFF.asm:45 BPL @UNKNOWN5
    case 0xC41F3F: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // src/unknown/C4/C41EFF.asm:46 LDA #$0000
    case 0xC41F41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C41EFF.asm:46 LDA #$0000
    // Overlapping static entry reached from 0xC41F41.
    case 0xC41F43: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C41EFF.asm:47 BRA @UNKNOWN6
    case 0xC41F44: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C4/C41EFF.asm:49 LDA #$0008
    case 0xC41F46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C41EFF.asm:49 LDA #$0008
    // Overlapping static entry reached from 0xC41F46.
    case 0xC41F48: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C41EFF.asm:50 BRA @UNKNOWN6
    case 0xC41F49: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C41EFF.asm:52 LDA #$0002
    case 0xC41F4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C41EFF.asm:52 LDA #$0002
    // Overlapping static entry reached from 0xC41F4B.
    case 0xC41F4D: cpu.execute_instruction<0x00>(0x0000FA, 2); return true;
    // src/unknown/C4/C41EFF.asm:54 PLX
    case 0xC41F4E: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:55 BEQ @UNKNOWN7
    case 0xC41F4F: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C41EFF.asm:56 BPL @UNKNOWN8
    case 0xC41F51: cpu.execute_instruction<0x10>(0x000007, 2); return true;
    // src/unknown/C4/C41EFF.asm:57 BRA @UNKNOWN9
    case 0xC41F53: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C4/C41EFF.asm:59 ORA #$0004
    case 0xC41F55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000004, 2); else cpu.execute_instruction<0x09>(0x000004, 3); return true;
    // src/unknown/C4/C41EFF.asm:59 ORA #$0004
    // Overlapping static entry reached from 0xC41F55.
    case 0xC41F57: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C41EFF.asm:60 BRA @UNKNOWN10
    case 0xC41F58: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C4/C41EFF.asm:62 ORA #$0001
    case 0xC41F5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000001, 2); else cpu.execute_instruction<0x09>(0x000001, 3); return true;
    // src/unknown/C4/C41EFF.asm:62 ORA #$0001
    // Overlapping static entry reached from 0xC41F5A.
    case 0xC41F5C: cpu.execute_instruction<0x00>(0x000089, 2); return true;
    // src/unknown/C4/C41EFF.asm:64 BIT #$000C
    case 0xC41F5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000C, 2); else cpu.execute_instruction<0x89>(0x00000C, 3); return true;
    // src/unknown/C4/C41EFF.asm:64 BIT #$000C
    // Overlapping static entry reached from 0xC41F5D.
    case 0xC41F5F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C41EFF.asm:65 BEQ @UNKNOWN10
    case 0xC41F60: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C41EFF.asm:66 ASL
    case 0xC41F62: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:67 TAX
    case 0xC41F63: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:68 LDA f:UNKNOWN_C41FC5,X
    case 0xC41F64: cpu.execute_instruction<0xBF>(0xC41FC5, 4); return true;
    // src/unknown/C4/C41EFF.asm:69 STA $0E
    case 0xC41F68: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C41EFF.asm:70 JMP @UNKNOWN16
    case 0xC41F6A: cpu.execute_instruction<0x4C>(0x001FC1, 3); return true;
    // src/unknown/C4/C41EFF.asm:72 STA $0E
    case 0xC41F6D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C41EFF.asm:73 ASL
    case 0xC41F6F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:74 STA $08
    case 0xC41F70: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C41EFF.asm:75 LDA $0C
    case 0xC41F72: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C4/C41EFF.asm:76 XBA
    case 0xC41F74: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:77 BIT #$00FF
    case 0xC41F75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000FF, 2); else cpu.execute_instruction<0x89>(0x0000FF, 3); return true;
    // src/unknown/C4/C41EFF.asm:77 BIT #$00FF
    // Overlapping static entry reached from 0xC41F75.
    case 0xC41F77: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C41EFF.asm:78 BEQ @UNKNOWN11
    case 0xC41F78: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C41EFF.asm:79 LDA #$FFFF
    case 0xC41F7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C41EFF.asm:79 LDA #$FFFF
    // Overlapping static entry reached from 0xC41F7A.
    case 0xC41F7C: cpu.execute_instruction<0xFF>(0x42048F, 4); return true;
    // src/unknown/C4/C41EFF.asm:82 STA f:WRDIVL
    case 0xC41F7D: cpu.execute_instruction<0x8F>(0x004204, 4); return true;
    // src/unknown/C4/C41EFF.asm:82 STA f:WRDIVL
    // Overlapping static entry reached from 0xC41F7C.
    case 0xC41F80: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C41EFF.asm:83 LDA $0A
    case 0xC41F81: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C4/C41EFF.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC41F83: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C41EFF.asm:85 STA f:WRDIVB
    case 0xC41F85: cpu.execute_instruction<0x8F>(0x004206, 4); return true;
    // src/unknown/C4/C41EFF.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC41F89: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41EFF.asm:87 NOP
    case 0xC41F8B: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:88 NOP
    case 0xC41F8C: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:89 NOP
    case 0xC41F8D: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:90 NOP
    case 0xC41F8E: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:91 NOP
    case 0xC41F8F: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:92 LDA f:RDDIVL
    case 0xC41F90: cpu.execute_instruction<0xAF>(0x004214, 4); return true;
    // src/unknown/C4/C41EFF.asm:93 LDX #$0000
    case 0xC41F94: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C41EFF.asm:93 LDX #$0000
    // Overlapping static entry reached from 0xC41F94.
    case 0xC41F96: cpu.execute_instruction<0x00>(0x0000DF, 2); return true;
    // src/unknown/C4/C41EFF.asm:96 CMP f:UNKNOWN_C41FDF,X
    case 0xC41F97: cpu.execute_instruction<0xDF>(0xC41FDF, 4); return true;
    // src/unknown/C4/C41EFF.asm:97 BCC @UNKNOWN13
    case 0xC41F9B: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/unknown/C4/C41EFF.asm:98 INX
    case 0xC41F9D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:99 INX
    case 0xC41F9E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:100 CPX #$0020
    case 0xC41F9F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C4/C41EFF.asm:100 CPX #$0020
    // Overlapping static entry reached from 0xC41F9F.
    case 0xC41FA1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C41EFF.asm:101 BCC @UNKNOWN12
    case 0xC41FA2: cpu.execute_instruction<0x90>(0x0000F3, 2); return true;
    // src/unknown/C4/C41EFF.asm:103 LDA $0E
    case 0xC41FA4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C41EFF.asm:104 BEQ @UNKNOWN14
    case 0xC41FA6: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C4/C41EFF.asm:105 EOR #$0003
    case 0xC41FA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000003, 2); else cpu.execute_instruction<0x49>(0x000003, 3); return true;
    // src/unknown/C4/C41EFF.asm:105 EOR #$0003
    // Overlapping static entry reached from 0xC41FA8.
    case 0xC41FAA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C41EFF.asm:106 BEQ @UNKNOWN14
    case 0xC41FAB: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C4/C41EFF.asm:107 STX $0E
    case 0xC41FAD: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C41EFF.asm:108 LDA #$0020
    case 0xC41FAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C4/C41EFF.asm:108 LDA #$0020
    // Overlapping static entry reached from 0xC41FAF.
    case 0xC41FB1: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C41EFF.asm:109 SEC
    case 0xC41FB2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:110 SBC $0E
    case 0xC41FB3: cpu.execute_instruction<0xE5>(0x00000E, 2); return true;
    // src/unknown/C4/C41EFF.asm:111 BRA @UNKNOWN15
    case 0xC41FB5: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C4/C41EFF.asm:113 TXA
    case 0xC41FB7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:115 ASL
    case 0xC41FB8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:116 XBA
    case 0xC41FB9: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:117 LDX $08
    case 0xC41FBA: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // src/unknown/C4/C41EFF.asm:118 CLC
    case 0xC41FBC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:119 ADC f:UNKNOWN_C41FC5,X
    case 0xC41FBD: cpu.execute_instruction<0x7F>(0xC41FC5, 4); return true;
    // src/unknown/C4/C41EFF.asm:121 PLD
    case 0xC41FC1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:122 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41FC2: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C41EFF.asm:123 RTL
    case 0xC41FC4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C41FFF.asm (unresolved).
bool execute_unresolved_c4_c41fff_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C41FFF.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC41FFF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41FFF.asm:4 PHD
    case 0xC42001: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:5 PHA
    case 0xC42002: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:6 TDC
    case 0xC42003: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:7 SEC
    case 0xC42004: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:8 SBC #$000E
    case 0xC42005: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000E, 2); else cpu.execute_instruction<0xE9>(0x00000E, 3); return true;
    // src/unknown/C4/C41FFF.asm:8 SBC #$000E
    // Overlapping static entry reached from 0xC42005.
    case 0xC42007: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C41FFF.asm:9 TCD
    case 0xC42008: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:10 PLA
    case 0xC42009: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:11 TXY
    case 0xC4200A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:12 PHY
    case 0xC4200B: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:13 XBA
    case 0xC4200C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:14 AND #$00FC
    case 0xC4200D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x0000FC, 3); return true;
    // src/unknown/C4/C41FFF.asm:14 AND #$00FC
    // Overlapping static entry reached from 0xC4200D.
    case 0xC4200F: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C4/C41FFF.asm:15 LSR
    case 0xC42010: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:16 PHA
    case 0xC42011: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:17 TAX
    case 0xC42012: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:18 LDA f:UNKNOWN_C4205D,X
    case 0xC42013: cpu.execute_instruction<0xBF>(0xC4205D, 4); return true;
    // src/unknown/C4/C41FFF.asm:19 CMP #$0100
    case 0xC42017: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C41FFF.asm:19 CMP #$0100
    // Overlapping static entry reached from 0xC42017.
    case 0xC42019: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C4/C41FFF.asm:20 BNE @FLAG_UNSET
    case 0xC4201A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C4/C41FFF.asm:20 BNE @FLAG_UNSET
    // Overlapping static entry reached from 0xC42019.
    case 0xC4201B: cpu.execute_instruction<0x03>(0x000098, 2); return true;
    // src/unknown/C4/C41FFF.asm:21 TYA
    case 0xC4201C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:22 BRA @POST_FLAG
    case 0xC4201D: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C41FFF.asm:24 JSR UNKNOWN_C4213F
    case 0xC4201F: cpu.execute_instruction<0x20>(0x00213F, 3); return true;
    // src/unknown/C4/C41FFF.asm:26 PLX
    case 0xC42022: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:27 PLY
    case 0xC42023: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:28 PHA
    case 0xC42024: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:29 LDA f:UNKNOWN_C420BD,X
    case 0xC42025: cpu.execute_instruction<0xBF>(0xC420BD, 4); return true;
    // src/unknown/C4/C41FFF.asm:30 PHX
    case 0xC42029: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:31 CMP #$0100
    case 0xC4202A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C41FFF.asm:31 CMP #$0100
    // Overlapping static entry reached from 0xC4202A.
    case 0xC4202C: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C4/C41FFF.asm:32 BNE @FLAG2_UNSET
    case 0xC4202D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C4/C41FFF.asm:32 BNE @FLAG2_UNSET
    // Overlapping static entry reached from 0xC4202C.
    case 0xC4202E: cpu.execute_instruction<0x03>(0x000098, 2); return true;
    // src/unknown/C4/C41FFF.asm:33 TYA
    case 0xC4202F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:34 BRA @POST_FLAG2
    case 0xC42030: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C41FFF.asm:36 JSR UNKNOWN_C4213F
    case 0xC42032: cpu.execute_instruction<0x20>(0x00213F, 3); return true;
    // src/unknown/C4/C41FFF.asm:38 PLX
    case 0xC42035: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:39 CPX #$0020
    case 0xC42036: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C4/C41FFF.asm:39 CPX #$0020
    // Overlapping static entry reached from 0xC42036.
    case 0xC42038: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C41FFF.asm:40 BCC @UNKNOWN4
    case 0xC42039: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C4/C41FFF.asm:41 CPX #$0062
    case 0xC4203B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000062, 2); else cpu.execute_instruction<0xE0>(0x000062, 3); return true;
    // src/unknown/C4/C41FFF.asm:41 CPX #$0062
    // Overlapping static entry reached from 0xC4203B.
    case 0xC4203D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C41FFF.asm:42 BCC @UNKNOWN5
    case 0xC4203E: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/unknown/C4/C41FFF.asm:44 EOR #$FFFF
    case 0xC42040: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C41FFF.asm:44 EOR #$FFFF
    // Overlapping static entry reached from 0xC42040.
    case 0xC42042: cpu.execute_instruction<0xFF>(0x68A81A, 4); return true;
    // src/unknown/C4/C41FFF.asm:45 INC
    case 0xC42043: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:47 TAY
    case 0xC42044: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:48 PLA
    case 0xC42045: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:49 CPX #$0042
    case 0xC42046: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000042, 2); else cpu.execute_instruction<0xE0>(0x000042, 3); return true;
    // src/unknown/C4/C41FFF.asm:49 CPX #$0042
    // Overlapping static entry reached from 0xC42046.
    case 0xC42048: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C41FFF.asm:50 BCC @UNKNOWN6
    case 0xC42049: cpu.execute_instruction<0x90>(0x000009, 2); return true;
    // src/unknown/C4/C41FFF.asm:51 CPX #$0080
    case 0xC4204B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x000080, 3); return true;
    // src/unknown/C4/C41FFF.asm:51 CPX #$0080
    // Overlapping static entry reached from 0xC4204B.
    case 0xC4204D: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C41FFF.asm:52 BCS @UNKNOWN6
    case 0xC4204E: cpu.execute_instruction<0xB0>(0x000004, 2); return true;
    // src/unknown/C4/C41FFF.asm:53 EOR #$FFFF
    case 0xC42050: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C41FFF.asm:53 EOR #$FFFF
    // Overlapping static entry reached from 0xC42050.
    case 0xC42052: cpu.execute_instruction<0xFF>(0x86AA1A, 4); return true;
    // src/unknown/C4/C41FFF.asm:54 INC
    case 0xC42053: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:56 TAX
    case 0xC42054: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:57 STX $16
    case 0xC42055: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C4/C41FFF.asm:57 STX $16
    // Overlapping static entry reached from 0xC42052.
    case 0xC42056: cpu.execute_instruction<0x16>(0x000084, 2); return true;
    // src/unknown/C4/C41FFF.asm:58 STY $14
    case 0xC42057: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C41FFF.asm:58 STY $14
    // Overlapping static entry reached from 0xC42056.
    case 0xC42058: cpu.execute_instruction<0x14>(0x00002B, 2); return true;
    // src/unknown/C4/C41FFF.asm:59 PLD
    case 0xC42059: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:60 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC4205A: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C41FFF.asm:61 RTL
    case 0xC4205C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4213F.asm (unresolved).
bool execute_unresolved_c4_c4213f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4213F.asm:3 STY $00
    case 0xC4213F: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C4/C4213F.asm:4 STA $02
    case 0xC42141: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4213F.asm:5 TYA
    case 0xC42143: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4213F.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC42144: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4213F.asm:7 LDA $02
    case 0xC42146: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4213F.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC42148: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4213F.asm:9 STA f:WRMPYA
    case 0xC4214A: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/unknown/C4/C4213F.asm:10 NOP
    case 0xC4214E: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C4213F.asm:11 CLC
    case 0xC4214F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4213F.asm:12 LDA f:RDMPYL
    case 0xC42150: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/unknown/C4/C4213F.asm:13 STA $04
    case 0xC42154: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4213F.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC42156: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4213F.asm:15 LDA $00
    case 0xC42158: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4213F.asm:16 STA f:WRMPYB
    case 0xC4215A: cpu.execute_instruction<0x8F>(0x004203, 4); return true;
    // src/unknown/C4/C4213F.asm:17 NOP
    case 0xC4215E: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C4213F.asm:18 NOP
    case 0xC4215F: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C4213F.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC42160: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4213F.asm:20 LDA f:RDMPYL
    case 0xC42162: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/unknown/C4/C4213F.asm:21 XBA
    case 0xC42166: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C4213F.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC42167: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4213F.asm:23 STA $02
    case 0xC42169: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4213F.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC4216B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4213F.asm:25 LDA $02
    case 0xC4216D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4213F.asm:26 ADC $04
    case 0xC4216F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4213F.asm:27 RTS
    case 0xC42171: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C423DC.asm (unresolved).
bool execute_unresolved_c4_c423dc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C423DC.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC423DC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C423DC.asm:4 LDA #$0080
    case 0xC423DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008F80, 3); return true;
    // src/unknown/C4/C423DC.asm:5 STA f:WH0
    case 0xC423E0: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/C4/C423DC.asm:5 STA f:WH0
    // Overlapping static entry reached from 0xC423DE.
    case 0xC423E1: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/C4/C423DC.asm:5 STA f:WH0
    // Overlapping static entry reached from 0xC423E1.
    case 0xC423E3: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C4/C423DC.asm:6 STA f:WH2
    case 0xC423E4: cpu.execute_instruction<0x8F>(0x002128, 4); return true;
    // src/unknown/C4/C423DC.asm:7 DEC
    case 0xC423E8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C423DC.asm:8 STA f:WH1
    case 0xC423E9: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/C4/C423DC.asm:9 STA f:WH3
    case 0xC423ED: cpu.execute_instruction<0x8F>(0x002129, 4); return true;
    // src/unknown/C4/C423DC.asm:10 LDA #$0010
    case 0xC423F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x008F10, 3); return true;
    // src/unknown/C4/C423DC.asm:11 STA f:CGWSEL
    case 0xC423F3: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C4/C423DC.asm:11 STA f:CGWSEL
    // Overlapping static entry reached from 0xC423F1.
    case 0xC423F4: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/C4/C423DC.asm:11 STA f:CGWSEL
    // Overlapping static entry reached from 0xC423F4.
    case 0xC423F6: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C423DC.asm:12 LDA #$0013
    case 0xC423F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008F13, 3); return true;
    // src/unknown/C4/C423DC.asm:13 STA f:TMW
    case 0xC423F9: cpu.execute_instruction<0x8F>(0x00212E, 4); return true;
    // src/unknown/C4/C423DC.asm:13 STA f:TMW
    // Overlapping static entry reached from 0xC423F7.
    case 0xC423FA: cpu.execute_instruction<0x2E>(0x000021, 3); return true;
    // src/unknown/C4/C423DC.asm:14 LDA #$0000
    case 0xC423FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C423DC.asm:15 STA f:WBGLOG
    case 0xC423FF: cpu.execute_instruction<0x8F>(0x00212A, 4); return true;
    // src/unknown/C4/C423DC.asm:15 STA f:WBGLOG
    // Overlapping static entry reached from 0xC423FD.
    case 0xC42400: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C423DC.asm:15 STA f:WBGLOG
    // Overlapping static entry reached from 0xC42400.
    case 0xC42401: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/C4/C423DC.asm:16 STA f:WOBJLOG
    case 0xC42403: cpu.execute_instruction<0x8F>(0x00212B, 4); return true;
    // src/unknown/C4/C423DC.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC42407: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C423DC.asm:18 RTL
    case 0xC42409: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4240A.asm (unresolved).
bool execute_unresolved_c4_c4240a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4240A.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC4240A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4240A.asm:4 LDA #$0000
    case 0xC4240C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C4240A.asm:5 STA f:WH0
    case 0xC4240E: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/C4/C4240A.asm:5 STA f:WH0
    // Overlapping static entry reached from 0xC4240C.
    case 0xC4240F: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/C4/C4240A.asm:5 STA f:WH0
    // Overlapping static entry reached from 0xC4240F.
    case 0xC42411: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C4/C4240A.asm:6 STA f:WH2
    case 0xC42412: cpu.execute_instruction<0x8F>(0x002128, 4); return true;
    // src/unknown/C4/C4240A.asm:7 LDA #$00FF
    case 0xC42416: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x008FFF, 3); return true;
    // src/unknown/C4/C4240A.asm:7 LDA #$00FF
    // Overlapping static entry reached from 0xC423F4.
    case 0xC42417: cpu.execute_instruction<0xFF>(0x21278F, 4); return true;
    // src/unknown/C4/C4240A.asm:8 STA f:WH1
    case 0xC42418: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/C4/C4240A.asm:8 STA f:WH1
    // Overlapping static entry reached from 0xC42416.
    case 0xC42419: cpu.execute_instruction<0x27>(0x000021, 2); return true;
    // src/unknown/C4/C4240A.asm:8 STA f:WH1
    // Overlapping static entry reached from 0xC42419.
    case 0xC4241B: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C4/C4240A.asm:9 STA f:WH3
    case 0xC4241C: cpu.execute_instruction<0x8F>(0x002129, 4); return true;
    // src/unknown/C4/C4240A.asm:10 LDA #$0020
    case 0xC42420: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/C4/C4240A.asm:11 STA f:CGWSEL
    case 0xC42422: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C4/C4240A.asm:11 STA f:CGWSEL
    // Overlapping static entry reached from 0xC42420.
    case 0xC42423: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/C4/C4240A.asm:11 STA f:CGWSEL
    // Overlapping static entry reached from 0xC42423.
    case 0xC42425: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4240A.asm:12 LDA #$0013
    case 0xC42426: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008F13, 3); return true;
    // src/unknown/C4/C4240A.asm:13 STA f:TMW
    case 0xC42428: cpu.execute_instruction<0x8F>(0x00212E, 4); return true;
    // src/unknown/C4/C4240A.asm:13 STA f:TMW
    // Overlapping static entry reached from 0xC42426.
    case 0xC42429: cpu.execute_instruction<0x2E>(0x000021, 3); return true;
    // src/unknown/C4/C4240A.asm:14 LDA #$0000
    case 0xC4242C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C4240A.asm:15 STA f:WBGLOG
    case 0xC4242E: cpu.execute_instruction<0x8F>(0x00212A, 4); return true;
    // src/unknown/C4/C4240A.asm:15 STA f:WBGLOG
    // Overlapping static entry reached from 0xC4242C.
    case 0xC4242F: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C4240A.asm:15 STA f:WBGLOG
    // Overlapping static entry reached from 0xC4242F.
    case 0xC42430: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/C4/C4240A.asm:16 STA f:WOBJLOG
    case 0xC42432: cpu.execute_instruction<0x8F>(0x00212B, 4); return true;
    // src/unknown/C4/C4240A.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC42436: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4240A.asm:18 RTL
    case 0xC42438: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42439.asm (unresolved).
bool execute_unresolved_c4_c42439_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42439.asm:3 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC42439: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/unknown/C4/C42439.asm:4 STA f:CGADSUB
    case 0xC4243B: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C4/C42439.asm:5 LDA ACTIONSCRIPT_COLDATA_BLUE
    case 0xC4243F: cpu.execute_instruction<0xAD>(0x009E37, 3); return true;
    // src/unknown/C4/C42439.asm:6 ORA #$0080
    case 0xC42442: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x008F80, 3); return true;
    // src/unknown/C4/C42439.asm:7 STA f:FIXED_COLOR_DATA
    case 0xC42444: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/C4/C42439.asm:7 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42442.
    case 0xC42445: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/C4/C42439.asm:7 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42423.
    case 0xC42446: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/C4/C42439.asm:7 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42445.
    case 0xC42447: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C42439.asm:8 LDA ACTIONSCRIPT_COLDATA_GREEN
    case 0xC42448: cpu.execute_instruction<0xAD>(0x009E38, 3); return true;
    // src/unknown/C4/C42439.asm:9 ORA #$0040
    case 0xC4244B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000040, 2); else cpu.execute_instruction<0x09>(0x008F40, 3); return true;
    // src/unknown/C4/C42439.asm:10 STA f:FIXED_COLOR_DATA
    case 0xC4244D: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/C4/C42439.asm:10 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC4244B.
    case 0xC4244E: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/C4/C42439.asm:10 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC4244E.
    case 0xC42450: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C42439.asm:11 LDA ACTIONSCRIPT_COLDATA_RED
    case 0xC42451: cpu.execute_instruction<0xAD>(0x009E39, 3); return true;
    // src/unknown/C4/C42439.asm:12 ORA #$0020
    case 0xC42454: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000020, 2); else cpu.execute_instruction<0x09>(0x008F20, 3); return true;
    // src/unknown/C4/C42439.asm:13 STA f:FIXED_COLOR_DATA
    case 0xC42456: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/C4/C42439.asm:13 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42454.
    case 0xC42457: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/C4/C42439.asm:13 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42457.
    case 0xC42459: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C42439.asm:14 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC4245A: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C42439.asm:15 RTL
    case 0xC4245C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4245D.asm (unresolved).
bool execute_unresolved_c4_c4245d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4245D.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC4245D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4245D.asm:4 STA f:A1B4
    case 0xC4245F: cpu.execute_instruction<0x8F>(0x004344, 4); return true;
    // src/unknown/C4/C4245D.asm:5 STA f:DASB4
    case 0xC42463: cpu.execute_instruction<0x8F>(0x004347, 4); return true;
    // src/unknown/C4/C4245D.asm:5 STA f:DASB4
    // Overlapping static entry reached from 0xC483FB.
    case 0xC42464: cpu.execute_instruction<0x47>(0x000043, 2); return true;
    // src/unknown/C4/C4245D.asm:5 STA f:DASB4
    // Overlapping static entry reached from 0xC42464.
    case 0xC42466: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4245D.asm:6 LDA #$0001
    case 0xC42467: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008F01, 3); return true;
    // src/unknown/C4/C4245D.asm:7 STA f:DMAP4
    case 0xC42469: cpu.execute_instruction<0x8F>(0x004340, 4); return true;
    // src/unknown/C4/C4245D.asm:7 STA f:DMAP4
    // Overlapping static entry reached from 0xC42467.
    case 0xC4246A: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C4/C4245D.asm:8 LDA #$0026
    case 0xC4246D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x008F26, 3); return true;
    // src/unknown/C4/C4245D.asm:9 STA f:BBAD4
    case 0xC4246F: cpu.execute_instruction<0x8F>(0x004341, 4); return true;
    // src/unknown/C4/C4245D.asm:9 STA f:BBAD4
    // Overlapping static entry reached from 0xC4246D.
    case 0xC42470: cpu.execute_instruction<0x41>(0x000043, 2); return true;
    // src/unknown/C4/C4245D.asm:9 STA f:BBAD4
    // Overlapping static entry reached from 0xC42470.
    case 0xC42472: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4245D.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC42473: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4245D.asm:11 TXA
    case 0xC42475: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4245D.asm:12 STA f:A1T4L
    case 0xC42476: cpu.execute_instruction<0x8F>(0x004342, 4); return true;
    // src/unknown/C4/C4245D.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC4247A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4245D.asm:14 LDA #$00A0
    case 0xC4247C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x008FA0, 3); return true;
    // src/unknown/C4/C4245D.asm:15 STA f:WOBJSEL
    case 0xC4247E: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/unknown/C4/C4245D.asm:15 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC4247C.
    case 0xC4247F: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/unknown/C4/C4245D.asm:15 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC4247F.
    case 0xC42481: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4245D.asm:16 LDA #$0010
    case 0xC42482: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000C10, 3); return true;
    // src/unknown/C4/C4245D.asm:17 TSB HDMAEN_MIRROR
    case 0xC42484: cpu.execute_instruction<0x0C>(0x00001F, 3); return true;
    // src/unknown/C4/C4245D.asm:17 TSB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC42482.
    case 0xC42485: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/C4/C4245D.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC42487: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4245D.asm:19 RTL
    case 0xC42489: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4248A.asm (unresolved).
bool execute_unresolved_c4_c4248a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4248A.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC4248A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4248A.asm:4 LDA #$0010
    case 0xC4248C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x001C10, 3); return true;
    // src/unknown/C4/C4248A.asm:5 TRB HDMAEN_MIRROR
    case 0xC4248E: cpu.execute_instruction<0x1C>(0x00001F, 3); return true;
    // src/unknown/C4/C4248A.asm:5 TRB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC4248C.
    case 0xC4248F: cpu.execute_instruction<0x1F>(0x00A900, 4); return true;
    // src/unknown/C4/C4248A.asm:6 LDA #$0000
    case 0xC42491: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C4248A.asm:7 STA f:WOBJSEL
    case 0xC42493: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/unknown/C4/C4248A.asm:7 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC42491.
    case 0xC42494: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/unknown/C4/C4248A.asm:7 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC42494.
    case 0xC42496: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4248A.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC42497: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4248A.asm:9 RTL
    case 0xC42499: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4249A.asm (unresolved).
bool execute_unresolved_c4_c4249a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4249A.asm:3 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC4249A: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/unknown/C4/C4249A.asm:4 STA f:CGADSUB
    case 0xC4249C: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C4/C4249A.asm:5 LDA #$0020
    case 0xC424A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/C4/C4249A.asm:6 STA f:WOBJSEL
    case 0xC424A2: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/unknown/C4/C4249A.asm:6 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC424A0.
    case 0xC424A3: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/unknown/C4/C4249A.asm:6 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC424A3.
    case 0xC424A5: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4249A.asm:7 LDA #$0000
    case 0xC424A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C4249A.asm:8 STA f:WH0
    case 0xC424A8: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/C4/C4249A.asm:8 STA f:WH0
    // Overlapping static entry reached from 0xC424A6.
    case 0xC424A9: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/C4/C4249A.asm:8 STA f:WH0
    // Overlapping static entry reached from 0xC424A9.
    case 0xC424AB: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4249A.asm:9 LDA #$00FF
    case 0xC424AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x008FFF, 3); return true;
    // src/unknown/C4/C4249A.asm:10 STA f:WH1
    case 0xC424AE: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/C4/C4249A.asm:10 STA f:WH1
    // Overlapping static entry reached from 0xC424AC.
    case 0xC424AF: cpu.execute_instruction<0x27>(0x000021, 2); return true;
    // src/unknown/C4/C4249A.asm:10 STA f:WH1
    // Overlapping static entry reached from 0xC424AF.
    case 0xC424B1: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4249A.asm:11 LDA #$0013
    case 0xC424B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008D13, 3); return true;
    // src/unknown/C4/C4249A.asm:12 STA TMW
    case 0xC424B4: cpu.execute_instruction<0x8D>(0x00212E, 3); return true;
    // src/unknown/C4/C4249A.asm:12 STA TMW
    // Overlapping static entry reached from 0xC424B2.
    case 0xC424B5: cpu.execute_instruction<0x2E>(0x00A921, 3); return true;
    // src/unknown/C4/C4249A.asm:13 LDA #$0000
    case 0xC424B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C4249A.asm:13 LDA #$0000
    // Overlapping static entry reached from 0xC424B5.
    case 0xC424B8: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C4/C4249A.asm:14 STA f:WBGLOG
    case 0xC424B9: cpu.execute_instruction<0x8F>(0x00212A, 4); return true;
    // src/unknown/C4/C4249A.asm:14 STA f:WBGLOG
    // Overlapping static entry reached from 0xC424B7.
    case 0xC424BA: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C4249A.asm:14 STA f:WBGLOG
    // Overlapping static entry reached from 0xC424BA.
    case 0xC424BB: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/C4/C4249A.asm:15 STA f:WOBJLOG
    case 0xC424BD: cpu.execute_instruction<0x8F>(0x00212B, 4); return true;
    // src/unknown/C4/C4249A.asm:16 LDA #$0010
    case 0xC424C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x008F10, 3); return true;
    // src/unknown/C4/C4249A.asm:17 STA f:CGWSEL
    case 0xC424C3: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C4/C4249A.asm:17 STA f:CGWSEL
    // Overlapping static entry reached from 0xC424C1.
    case 0xC424C4: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/C4/C4249A.asm:17 STA f:CGWSEL
    // Overlapping static entry reached from 0xC424C4.
    case 0xC424C6: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C4249A.asm:18 TXA
    case 0xC424C7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4249A.asm:19 ORA #$00E0
    case 0xC424C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000E0, 2); else cpu.execute_instruction<0x09>(0x008FE0, 3); return true;
    // src/unknown/C4/C4249A.asm:20 STA f:FIXED_COLOR_DATA
    case 0xC424CA: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/C4/C4249A.asm:20 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC424C8.
    case 0xC424CB: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/C4/C4249A.asm:20 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC424CB.
    case 0xC424CD: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4249A.asm:21 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC424CE: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C4249A.asm:22 RTL
    case 0xC424D0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C424D1.asm (unresolved).
bool execute_unresolved_c4_c424d1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C424D1.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC424D1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C424D1.asm:4 LDA #$0020
    case 0xC424D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/C4/C424D1.asm:5 STA f:WOBJSEL
    case 0xC424D5: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/unknown/C4/C424D1.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC424D3.
    case 0xC424D6: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/unknown/C4/C424D1.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC424D6.
    case 0xC424D8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C424D1.asm:6 LDA #$0080
    case 0xC424D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008F80, 3); return true;
    // src/unknown/C4/C424D1.asm:7 STA f:WH0
    case 0xC424DB: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/C4/C424D1.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xC424D9.
    case 0xC424DC: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/C4/C424D1.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xC424DC.
    case 0xC424DE: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C4/C424D1.asm:8 DEC
    case 0xC424DF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C424D1.asm:9 STA f:WH1
    case 0xC424E0: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/C4/C424D1.asm:10 LDA #$0013
    case 0xC424E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008F13, 3); return true;
    // src/unknown/C4/C424D1.asm:11 STA f:TMW
    case 0xC424E6: cpu.execute_instruction<0x8F>(0x00212E, 4); return true;
    // src/unknown/C4/C424D1.asm:11 STA f:TMW
    // Overlapping static entry reached from 0xC424E4.
    case 0xC424E7: cpu.execute_instruction<0x2E>(0x000021, 3); return true;
    // src/unknown/C4/C424D1.asm:12 LDA #$0000
    case 0xC424EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C424D1.asm:13 STA f:WBGLOG
    case 0xC424EC: cpu.execute_instruction<0x8F>(0x00212A, 4); return true;
    // src/unknown/C4/C424D1.asm:13 STA f:WBGLOG
    // Overlapping static entry reached from 0xC424EA.
    case 0xC424ED: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C424D1.asm:13 STA f:WBGLOG
    // Overlapping static entry reached from 0xC424ED.
    case 0xC424EE: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/C4/C424D1.asm:14 STA f:WOBJLOG
    case 0xC424F0: cpu.execute_instruction<0x8F>(0x00212B, 4); return true;
    // src/unknown/C4/C424D1.asm:15 LDA #$0020
    case 0xC424F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/C4/C424D1.asm:16 STA f:CGWSEL
    case 0xC424F6: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C4/C424D1.asm:16 STA f:CGWSEL
    // Overlapping static entry reached from 0xC424F4.
    case 0xC424F7: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/C4/C424D1.asm:16 STA f:CGWSEL
    // Overlapping static entry reached from 0xC424F7.
    case 0xC424F9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C424D1.asm:17 LDA #$00B3
    case 0xC424FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x008FB3, 3); return true;
    // src/unknown/C4/C424D1.asm:18 STA f:CGADSUB
    case 0xC424FC: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C4/C424D1.asm:18 STA f:CGADSUB
    // Overlapping static entry reached from 0xC424FA.
    case 0xC424FD: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/C4/C424D1.asm:18 STA f:CGADSUB
    // Overlapping static entry reached from 0xC424FD.
    case 0xC424FF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C424D1.asm:19 LDA #$00EF
    case 0xC42500: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x008FEF, 3); return true;
    // src/unknown/C4/C424D1.asm:20 STA f:FIXED_COLOR_DATA
    case 0xC42502: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/C4/C424D1.asm:20 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42500.
    case 0xC42503: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/C4/C424D1.asm:20 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42503.
    case 0xC42505: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C424D1.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC42506: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C424D1.asm:22 RTL
    case 0xC42508: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42509.asm (unresolved).
bool execute_unresolved_c4_c42509_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42509.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC42509: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C42509.asm:4 LDA #$0020
    case 0xC4250B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/C4/C42509.asm:5 STA f:WOBJSEL
    case 0xC4250D: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/unknown/C4/C42509.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC4250B.
    case 0xC4250E: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/unknown/C4/C42509.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC4250E.
    case 0xC42510: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C42509.asm:6 LDA #$0000
    case 0xC42511: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C42509.asm:7 STA f:WH0
    case 0xC42513: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/C4/C42509.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xC42511.
    case 0xC42514: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/C4/C42509.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xC42514.
    case 0xC42516: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C42509.asm:8 LDA #$00FF
    case 0xC42517: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x008FFF, 3); return true;
    // src/unknown/C4/C42509.asm:9 STA f:WH1
    case 0xC42519: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/C4/C42509.asm:9 STA f:WH1
    // Overlapping static entry reached from 0xC42517.
    case 0xC4251A: cpu.execute_instruction<0x27>(0x000021, 2); return true;
    // src/unknown/C4/C42509.asm:9 STA f:WH1
    // Overlapping static entry reached from 0xC4251A.
    case 0xC4251C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C42509.asm:10 LDA #$0013
    case 0xC4251D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008F13, 3); return true;
    // src/unknown/C4/C42509.asm:11 STA f:TMW
    case 0xC4251F: cpu.execute_instruction<0x8F>(0x00212E, 4); return true;
    // src/unknown/C4/C42509.asm:11 STA f:TMW
    // Overlapping static entry reached from 0xC4251D.
    case 0xC42520: cpu.execute_instruction<0x2E>(0x000021, 3); return true;
    // src/unknown/C4/C42509.asm:12 LDA #$0000
    case 0xC42523: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C42509.asm:13 STA f:WBGLOG
    case 0xC42525: cpu.execute_instruction<0x8F>(0x00212A, 4); return true;
    // src/unknown/C4/C42509.asm:13 STA f:WBGLOG
    // Overlapping static entry reached from 0xC42523.
    case 0xC42526: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C42509.asm:13 STA f:WBGLOG
    // Overlapping static entry reached from 0xC42526.
    case 0xC42527: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/C4/C42509.asm:14 STA f:WOBJLOG
    case 0xC42529: cpu.execute_instruction<0x8F>(0x00212B, 4); return true;
    // src/unknown/C4/C42509.asm:15 LDA #$0020
    case 0xC4252D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/C4/C42509.asm:16 STA f:CGWSEL
    case 0xC4252F: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C4/C42509.asm:16 STA f:CGWSEL
    // Overlapping static entry reached from 0xC4252D.
    case 0xC42530: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/C4/C42509.asm:16 STA f:CGWSEL
    // Overlapping static entry reached from 0xC42530.
    case 0xC42532: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C42509.asm:17 LDA #$00B3
    case 0xC42533: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x008FB3, 3); return true;
    // src/unknown/C4/C42509.asm:18 STA f:CGADSUB
    case 0xC42535: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C4/C42509.asm:18 STA f:CGADSUB
    // Overlapping static entry reached from 0xC42533.
    case 0xC42536: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/C4/C42509.asm:18 STA f:CGADSUB
    // Overlapping static entry reached from 0xC42536.
    case 0xC42538: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C42509.asm:19 LDA #$00FF
    case 0xC42539: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x008FFF, 3); return true;
    // src/unknown/C4/C42509.asm:20 STA f:FIXED_COLOR_DATA
    case 0xC4253B: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/C4/C42509.asm:20 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42539.
    case 0xC4253C: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/C4/C42509.asm:20 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC4253C.
    case 0xC4253E: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C42509.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC4253F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42509.asm:22 RTL
    case 0xC42541: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42542.asm (unresolved).
bool execute_unresolved_c4_c42542_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42542.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC42542: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C42542.asm:4 STA f:A1B4
    case 0xC42544: cpu.execute_instruction<0x8F>(0x004344, 4); return true;
    // src/unknown/C4/C42542.asm:5 STA f:DASB4
    case 0xC42548: cpu.execute_instruction<0x8F>(0x004347, 4); return true;
    // src/unknown/C4/C42542.asm:6 LDA #$0001
    case 0xC4254C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008F01, 3); return true;
    // src/unknown/C4/C42542.asm:7 STA f:DMAP4
    case 0xC4254E: cpu.execute_instruction<0x8F>(0x004340, 4); return true;
    // src/unknown/C4/C42542.asm:7 STA f:DMAP4
    // Overlapping static entry reached from 0xC4254C.
    case 0xC4254F: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C4/C42542.asm:8 LDA #$0026
    case 0xC42552: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x008F26, 3); return true;
    // src/unknown/C4/C42542.asm:8 LDA #$0026
    // Overlapping static entry reached from 0xC42530.
    case 0xC42553: cpu.execute_instruction<0x26>(0x00008F, 2); return true;
    // src/unknown/C4/C42542.asm:9 STA f:BBAD4
    case 0xC42554: cpu.execute_instruction<0x8F>(0x004341, 4); return true;
    // src/unknown/C4/C42542.asm:9 STA f:BBAD4
    // Overlapping static entry reached from 0xC42552.
    case 0xC42555: cpu.execute_instruction<0x41>(0x000043, 2); return true;
    // src/unknown/C4/C42542.asm:9 STA f:BBAD4
    // Overlapping static entry reached from 0xC42555.
    case 0xC42557: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C42542.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC42558: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42542.asm:11 TXA
    case 0xC4255A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C42542.asm:12 STA f:A1T4L
    case 0xC4255B: cpu.execute_instruction<0x8F>(0x004342, 4); return true;
    // src/unknown/C4/C42542.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC4255F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C42542.asm:14 LDA #$0010
    case 0xC42561: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000C10, 3); return true;
    // src/unknown/C4/C42542.asm:15 TSB HDMAEN_MIRROR
    case 0xC42563: cpu.execute_instruction<0x0C>(0x00001F, 3); return true;
    // src/unknown/C4/C42542.asm:15 TSB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC42561.
    case 0xC42564: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/C4/C42542.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC42566: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42542.asm:17 RTL
    case 0xC42568: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42569.asm (unresolved).
bool execute_unresolved_c4_c42569_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42569.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC42569: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C42569.asm:4 LDA #$0033
    case 0xC4256B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000033, 2); else cpu.execute_instruction<0xA9>(0x008F33, 3); return true;
    // src/unknown/C4/C42569.asm:5 STA f:CGADSUB
    case 0xC4256D: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C4/C42569.asm:5 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4256B.
    case 0xC4256E: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/C4/C42569.asm:5 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4256E.
    case 0xC42570: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C42569.asm:6 REP #PROC_FLAGS::ACCUM8
    case 0xC42571: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42569.asm:7 RTL
    case 0xC42573: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42574.asm (unresolved).
bool execute_unresolved_c4_c42574_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42574.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC42574: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C42574.asm:4 LDA #$00B3
    case 0xC42576: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x008FB3, 3); return true;
    // src/unknown/C4/C42574.asm:5 STA f:CGADSUB
    case 0xC42578: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C4/C42574.asm:5 STA f:CGADSUB
    // Overlapping static entry reached from 0xC42576.
    case 0xC42579: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/C4/C42574.asm:5 STA f:CGADSUB
    // Overlapping static entry reached from 0xC42579.
    case 0xC4257B: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C42574.asm:6 REP #PROC_FLAGS::ACCUM8
    case 0xC4257C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42574.asm:7 RTL
    case 0xC4257E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4257F.asm (unresolved).
bool execute_unresolved_c4_c4257f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4257F.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC4257F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4257F.asm:4 LDA HDMAEN_MIRROR
    case 0xC42581: cpu.execute_instruction<0xAD>(0x00001F, 3); return true;
    // src/unknown/C4/C4257F.asm:5 AND #$00EF
    case 0xC42584: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000EF, 2); else cpu.execute_instruction<0x29>(0x008DEF, 3); return true;
    // src/unknown/C4/C4257F.asm:6 STA HDMAEN_MIRROR
    case 0xC42586: cpu.execute_instruction<0x8D>(0x00001F, 3); return true;
    // src/unknown/C4/C4257F.asm:6 STA HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC42584.
    case 0xC42587: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/C4/C4257F.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0xC42589: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4257F.asm:8 RTL
    case 0xC4258B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4258C.asm (unresolved).
bool execute_unresolved_c4_c4258c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4258C.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC4258C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4258C.asm:4 LDA #$00A0
    case 0xC4258E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x008FA0, 3); return true;
    // src/unknown/C4/C4258C.asm:5 STA f:WOBJSEL
    case 0xC42590: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/unknown/C4/C4258C.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC4258E.
    case 0xC42591: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/unknown/C4/C4258C.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC42591.
    case 0xC42593: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4258C.asm:6 LDA #$0080
    case 0xC42594: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008F80, 3); return true;
    // src/unknown/C4/C4258C.asm:7 STA f:WH0
    case 0xC42596: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/C4/C4258C.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xC42594.
    case 0xC42597: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/C4/C4258C.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xC42597.
    case 0xC42599: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C4/C4258C.asm:8 STA f:WH2
    case 0xC4259A: cpu.execute_instruction<0x8F>(0x002128, 4); return true;
    // src/unknown/C4/C4258C.asm:9 DEC
    case 0xC4259E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4258C.asm:10 STA f:WH1
    case 0xC4259F: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/C4/C4258C.asm:11 STA f:WH3
    case 0xC425A3: cpu.execute_instruction<0x8F>(0x002129, 4); return true;
    // src/unknown/C4/C4258C.asm:12 LDA #$0013
    case 0xC425A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008F13, 3); return true;
    // src/unknown/C4/C4258C.asm:13 STA f:TMW
    case 0xC425A9: cpu.execute_instruction<0x8F>(0x00212E, 4); return true;
    // src/unknown/C4/C4258C.asm:13 STA f:TMW
    // Overlapping static entry reached from 0xC425A7.
    case 0xC425AA: cpu.execute_instruction<0x2E>(0x000021, 3); return true;
    // src/unknown/C4/C4258C.asm:14 LDA #$0000
    case 0xC425AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C4258C.asm:15 STA f:WBGLOG
    case 0xC425AF: cpu.execute_instruction<0x8F>(0x00212A, 4); return true;
    // src/unknown/C4/C4258C.asm:15 STA f:WBGLOG
    // Overlapping static entry reached from 0xC425AD.
    case 0xC425B0: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C4258C.asm:15 STA f:WBGLOG
    // Overlapping static entry reached from 0xC425B0.
    case 0xC425B1: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/C4/C4258C.asm:16 STA f:WOBJLOG
    case 0xC425B3: cpu.execute_instruction<0x8F>(0x00212B, 4); return true;
    // src/unknown/C4/C4258C.asm:17 LDA #$0020
    case 0xC425B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/C4/C4258C.asm:18 STA f:CGWSEL
    case 0xC425B9: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C4/C4258C.asm:18 STA f:CGWSEL
    // Overlapping static entry reached from 0xC425B7.
    case 0xC425BA: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/C4/C4258C.asm:18 STA f:CGWSEL
    // Overlapping static entry reached from 0xC425BA.
    case 0xC425BC: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4258C.asm:19 LDA #$00B3
    case 0xC425BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x008FB3, 3); return true;
    // src/unknown/C4/C4258C.asm:20 STA f:CGADSUB
    case 0xC425BF: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C4/C4258C.asm:20 STA f:CGADSUB
    // Overlapping static entry reached from 0xC425BD.
    case 0xC425C0: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/C4/C4258C.asm:20 STA f:CGADSUB
    // Overlapping static entry reached from 0xC425C0.
    case 0xC425C2: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4258C.asm:21 LDA #$00EF
    case 0xC425C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x008FEF, 3); return true;
    // src/unknown/C4/C4258C.asm:22 STA f:FIXED_COLOR_DATA
    case 0xC425C5: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/C4/C4258C.asm:22 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC425C3.
    case 0xC425C6: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/C4/C4258C.asm:22 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC425C6.
    case 0xC425C8: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4258C.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC425C9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4258C.asm:24 RTL
    case 0xC425CB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C425CC.asm (unresolved).
bool execute_unresolved_c4_c425cc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C425CC.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC425CC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C425CC.asm:4 STA f:A1B4
    case 0xC425CE: cpu.execute_instruction<0x8F>(0x004344, 4); return true;
    // src/unknown/C4/C425CC.asm:5 STA f:DASB4
    case 0xC425D2: cpu.execute_instruction<0x8F>(0x004347, 4); return true;
    // src/unknown/C4/C425CC.asm:6 LDA #$0001
    case 0xC425D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008F01, 3); return true;
    // src/unknown/C4/C425CC.asm:7 STA f:DMAP4
    case 0xC425D8: cpu.execute_instruction<0x8F>(0x004340, 4); return true;
    // src/unknown/C4/C425CC.asm:7 STA f:DMAP4
    // Overlapping static entry reached from 0xC425D6.
    case 0xC425D9: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C4/C425CC.asm:8 LDA #$0026
    case 0xC425DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x008F26, 3); return true;
    // src/unknown/C4/C425CC.asm:8 LDA #$0026
    // Overlapping static entry reached from 0xC425BA.
    case 0xC425DD: cpu.execute_instruction<0x26>(0x00008F, 2); return true;
    // src/unknown/C4/C425CC.asm:9 STA f:BBAD4
    case 0xC425DE: cpu.execute_instruction<0x8F>(0x004341, 4); return true;
    // src/unknown/C4/C425CC.asm:9 STA f:BBAD4
    // Overlapping static entry reached from 0xC425DC.
    case 0xC425DF: cpu.execute_instruction<0x41>(0x000043, 2); return true;
    // src/unknown/C4/C425CC.asm:9 STA f:BBAD4
    // Overlapping static entry reached from 0xC425DF.
    case 0xC425E1: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C425CC.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC425E2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C425CC.asm:11 TXA
    case 0xC425E4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C425CC.asm:12 STA f:A1T4L
    case 0xC425E5: cpu.execute_instruction<0x8F>(0x004342, 4); return true;
    // src/unknown/C4/C425CC.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC425E9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C425CC.asm:14 LDA #$0010
    case 0xC425EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000C10, 3); return true;
    // src/unknown/C4/C425CC.asm:15 TSB HDMAEN_MIRROR
    case 0xC425ED: cpu.execute_instruction<0x0C>(0x00001F, 3); return true;
    // src/unknown/C4/C425CC.asm:15 TSB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC425EB.
    case 0xC425EE: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/C4/C425CC.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC425F0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C425CC.asm:17 RTL
    case 0xC425F2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C425F3.asm (unresolved).
bool execute_unresolved_c4_c425f3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C425F3.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC425F3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C425F3.asm:4 LDA #$0010
    case 0xC425F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x001C10, 3); return true;
    // src/unknown/C4/C425F3.asm:5 TRB HDMAEN_MIRROR
    case 0xC425F7: cpu.execute_instruction<0x1C>(0x00001F, 3); return true;
    // src/unknown/C4/C425F3.asm:5 TRB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC425F5.
    case 0xC425F8: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/C4/C425F3.asm:6 REP #PROC_FLAGS::ACCUM8
    case 0xC425FA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C425F3.asm:7 RTL
    case 0xC425FC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C425FD.asm (unresolved).
bool execute_unresolved_c4_c425fd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C425FD.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC425FD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C425FD.asm:4 STA f:A1B5
    case 0xC425FF: cpu.execute_instruction<0x8F>(0x004354, 4); return true;
    // src/unknown/C4/C425FD.asm:5 STA f:DASB5
    case 0xC42603: cpu.execute_instruction<0x8F>(0x004357, 4); return true;
    // src/unknown/C4/C425FD.asm:6 LDA #$0001
    case 0xC42607: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008F01, 3); return true;
    // src/unknown/C4/C425FD.asm:7 STA f:DMAP5
    case 0xC42609: cpu.execute_instruction<0x8F>(0x004350, 4); return true;
    // src/unknown/C4/C425FD.asm:7 STA f:DMAP5
    // Overlapping static entry reached from 0xC42607.
    case 0xC4260A: cpu.execute_instruction<0x50>(0x000043, 2); return true;
    // src/unknown/C4/C425FD.asm:7 STA f:DMAP5
    // Overlapping static entry reached from 0xC4260A.
    case 0xC4260C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C425FD.asm:8 LDA #$0028
    case 0xC4260D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x008F28, 3); return true;
    // src/unknown/C4/C425FD.asm:9 STA f:BBAD5
    case 0xC4260F: cpu.execute_instruction<0x8F>(0x004351, 4); return true;
    // src/unknown/C4/C425FD.asm:9 STA f:BBAD5
    // Overlapping static entry reached from 0xC4260D.
    case 0xC42610: cpu.execute_instruction<0x51>(0x000043, 2); return true;
    // src/unknown/C4/C425FD.asm:9 STA f:BBAD5
    // Overlapping static entry reached from 0xC42610.
    case 0xC42612: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C425FD.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC42613: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C425FD.asm:11 TXA
    case 0xC42615: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C425FD.asm:12 STA f:A1T5L
    case 0xC42616: cpu.execute_instruction<0x8F>(0x004352, 4); return true;
    // src/unknown/C4/C425FD.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC4261A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C425FD.asm:14 LDA #$0020
    case 0xC4261C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000C20, 3); return true;
    // src/unknown/C4/C425FD.asm:15 TSB HDMAEN_MIRROR
    case 0xC4261E: cpu.execute_instruction<0x0C>(0x00001F, 3); return true;
    // src/unknown/C4/C425FD.asm:15 TSB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC4261C.
    case 0xC4261F: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/C4/C425FD.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC42621: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C425FD.asm:17 RTL
    case 0xC42623: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42624.asm (unresolved).
bool execute_unresolved_c4_c42624_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42624.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC42624: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C42624.asm:4 LDA HDMAEN_MIRROR
    case 0xC42626: cpu.execute_instruction<0xAD>(0x00001F, 3); return true;
    // src/unknown/C4/C42624.asm:5 AND #$00DF
    case 0xC42629: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000DF, 2); else cpu.execute_instruction<0x29>(0x008DDF, 3); return true;
    // src/unknown/C4/C42624.asm:6 STA HDMAEN_MIRROR
    case 0xC4262B: cpu.execute_instruction<0x8D>(0x00001F, 3); return true;
    // src/unknown/C4/C42624.asm:6 STA HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC42629.
    case 0xC4262C: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/C4/C42624.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0xC4262E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42624.asm:8 RTL
    case 0xC42630: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42631.asm (unresolved).
bool execute_unresolved_c4_c42631_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42631.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC42631: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C42631.asm:4 STZ UNKNOWN_7E3C22
    case 0xC42633: cpu.execute_instruction<0x9C>(0x003C22, 3); return true;
    // src/unknown/C4/C42631.asm:5 STZ TRANSITION_BACKGROUND_X_VELOCITY
    case 0xC42636: cpu.execute_instruction<0x9C>(0x003C24, 3); return true;
    // src/unknown/C4/C42631.asm:6 STZ UNKNOWN_7E3C26
    case 0xC42639: cpu.execute_instruction<0x9C>(0x003C26, 3); return true;
    // src/unknown/C4/C42631.asm:7 STZ TRANSITION_BACKGROUND_Y_VELOCITY
    case 0xC4263C: cpu.execute_instruction<0x9C>(0x003C28, 3); return true;
    // src/unknown/C4/C42631.asm:8 TAY
    case 0xC4263F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:9 TXA
    case 0xC42640: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:10 CLC
    case 0xC42641: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:11 ADC #$0080
    case 0xC42642: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000080, 3); return true;
    // src/unknown/C4/C42631.asm:11 ADC #$0080
    // Overlapping static entry reached from 0xC42642.
    case 0xC42644: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C42631.asm:12 AND #$00FF
    case 0xC42645: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C42631.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC42645.
    case 0xC42647: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C42631.asm:13 TAX
    case 0xC42648: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:14 PHX
    case 0xC42649: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:15 TYA
    case 0xC4264A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:16 JSL COSINE_SINE
    case 0xC4264B: cpu.execute_instruction<0x22>(0xC0B40B, 4); return true;
    // src/unknown/C4/C42631.asm:17 STA UNKNOWN_7E3C22 + 1
    case 0xC4264F: cpu.execute_instruction<0x8D>(0x003C23, 3); return true;
    // src/unknown/C4/C42631.asm:18 LDA UNKNOWN_7E3C22 + 1
    case 0xC42652: cpu.execute_instruction<0xAD>(0x003C23, 3); return true;
    // src/unknown/C4/C42631.asm:19 BPL @UNKNOWN0
    case 0xC42655: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // src/unknown/C4/C42631.asm:20 LDA #$FF00
    case 0xC42657: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C4/C42631.asm:20 LDA #$FF00
    // Overlapping static entry reached from 0xC42657.
    case 0xC42659: cpu.execute_instruction<0xFF>(0x3C240D, 4); return true;
    // src/unknown/C4/C42631.asm:21 ORA TRANSITION_BACKGROUND_X_VELOCITY
    case 0xC4265A: cpu.execute_instruction<0x0D>(0x003C24, 3); return true;
    // src/unknown/C4/C42631.asm:22 STA TRANSITION_BACKGROUND_X_VELOCITY
    case 0xC4265D: cpu.execute_instruction<0x8D>(0x003C24, 3); return true;
    // src/unknown/C4/C42631.asm:24 PLX
    case 0xC42660: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:25 TYA
    case 0xC42661: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:26 JSL COSINE
    case 0xC42662: cpu.execute_instruction<0x22>(0xC0B400, 4); return true;
    // src/unknown/C4/C42631.asm:27 STA UNKNOWN_7E3C26 + 1
    case 0xC42666: cpu.execute_instruction<0x8D>(0x003C27, 3); return true;
    // src/unknown/C4/C42631.asm:28 LDA UNKNOWN_7E3C26 + 1
    case 0xC42669: cpu.execute_instruction<0xAD>(0x003C27, 3); return true;
    // src/unknown/C4/C42631.asm:29 BPL @UNKNOWN1
    case 0xC4266C: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // src/unknown/C4/C42631.asm:30 LDA #$FF00
    case 0xC4266E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C4/C42631.asm:30 LDA #$FF00
    // Overlapping static entry reached from 0xC4266E.
    case 0xC42670: cpu.execute_instruction<0xFF>(0x3C280D, 4); return true;
    // src/unknown/C4/C42631.asm:31 ORA TRANSITION_BACKGROUND_Y_VELOCITY
    case 0xC42671: cpu.execute_instruction<0x0D>(0x003C28, 3); return true;
    // src/unknown/C4/C42631.asm:32 STA TRANSITION_BACKGROUND_Y_VELOCITY
    case 0xC42674: cpu.execute_instruction<0x8D>(0x003C28, 3); return true;
    // src/unknown/C4/C42631.asm:34 LDA BG1_X_POS
    case 0xC42677: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/C4/C42631.asm:35 STA TRANSITION_BACKGROUND_X
    case 0xC4267A: cpu.execute_instruction<0x8D>(0x003C2C, 3); return true;
    // src/unknown/C4/C42631.asm:36 LDA BG1_Y_POS
    case 0xC4267D: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/unknown/C4/C42631.asm:37 STA TRANSITION_BACKGROUND_Y
    case 0xC42680: cpu.execute_instruction<0x8D>(0x003C30, 3); return true;
    // src/unknown/C4/C42631.asm:38 STZ UNREAD_7E3C2A
    case 0xC42683: cpu.execute_instruction<0x9C>(0x003C2A, 3); return true;
    // src/unknown/C4/C42631.asm:39 STZ UNREAD_7E3C2E
    case 0xC42686: cpu.execute_instruction<0x9C>(0x003C2E, 3); return true;
    // src/unknown/C4/C42631.asm:40 RTL
    case 0xC42689: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4268A.asm (unresolved).
bool execute_unresolved_c4_c4268a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4268A.asm:3 LDA UNKNOWN_7E3C22
    case 0xC4268A: cpu.execute_instruction<0xAD>(0x003C22, 3); return true;
    // src/unknown/C4/C4268A.asm:4 CLC
    case 0xC4268D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4268A.asm:5 ADC UNREAD_7E3C2A
    case 0xC4268E: cpu.execute_instruction<0x6D>(0x003C2A, 3); return true;
    // src/unknown/C4/C4268A.asm:6 STA UNREAD_7E3C2A
    case 0xC42691: cpu.execute_instruction<0x8D>(0x003C2A, 3); return true;
    // src/unknown/C4/C4268A.asm:7 LDA TRANSITION_BACKGROUND_X_VELOCITY
    case 0xC42694: cpu.execute_instruction<0xAD>(0x003C24, 3); return true;
    // src/unknown/C4/C4268A.asm:8 ADC TRANSITION_BACKGROUND_X
    case 0xC42697: cpu.execute_instruction<0x6D>(0x003C2C, 3); return true;
    // src/unknown/C4/C4268A.asm:9 STA TRANSITION_BACKGROUND_X
    case 0xC4269A: cpu.execute_instruction<0x8D>(0x003C2C, 3); return true;
    // src/unknown/C4/C4268A.asm:10 STA BG1_X_POS
    case 0xC4269D: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/unknown/C4/C4268A.asm:11 STA BG2_X_POS
    case 0xC426A0: cpu.execute_instruction<0x8D>(0x000035, 3); return true;
    // src/unknown/C4/C4268A.asm:12 LDA UNKNOWN_7E3C26
    case 0xC426A3: cpu.execute_instruction<0xAD>(0x003C26, 3); return true;
    // src/unknown/C4/C4268A.asm:13 CLC
    case 0xC426A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4268A.asm:14 ADC UNREAD_7E3C2E
    case 0xC426A7: cpu.execute_instruction<0x6D>(0x003C2E, 3); return true;
    // src/unknown/C4/C4268A.asm:15 STA UNREAD_7E3C2E
    case 0xC426AA: cpu.execute_instruction<0x8D>(0x003C2E, 3); return true;
    // src/unknown/C4/C4268A.asm:16 LDA TRANSITION_BACKGROUND_Y_VELOCITY
    case 0xC426AD: cpu.execute_instruction<0xAD>(0x003C28, 3); return true;
    // src/unknown/C4/C4268A.asm:17 ADC TRANSITION_BACKGROUND_Y
    case 0xC426B0: cpu.execute_instruction<0x6D>(0x003C30, 3); return true;
    // src/unknown/C4/C4268A.asm:18 STA TRANSITION_BACKGROUND_Y
    case 0xC426B3: cpu.execute_instruction<0x8D>(0x003C30, 3); return true;
    // src/unknown/C4/C4268A.asm:19 STA BG1_Y_POS
    case 0xC426B6: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/unknown/C4/C4268A.asm:20 STA BG2_Y_POS
    case 0xC426B9: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/unknown/C4/C4268A.asm:21 LDA BG1_X_POS
    case 0xC426BC: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/C4/C4268A.asm:22 LDX BG1_Y_POS
    case 0xC426BF: cpu.execute_instruction<0xAE>(0x000033, 3); return true;
    // src/unknown/C4/C4268A.asm:23 JSL UNKNOWN_C01731
    case 0xC426C2: cpu.execute_instruction<0x22>(0xC01731, 4); return true;
    // src/unknown/C4/C4268A.asm:24 RTL
    case 0xC426C6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C426C7.asm (unresolved).
bool execute_unresolved_c4_c426c7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C426C7.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC426C7: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C426C7.asm:4 LDX #$0000
    case 0xC426C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C426C7.asm:4 LDX #$0000
    // Overlapping static entry reached from 0xC426C9.
    case 0xC426CB: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/unknown/C4/C426C7.asm:6 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC426CC: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/unknown/C4/C426C7.asm:7 BMI @UNKNOWN1
    case 0xC426CF: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/unknown/C4/C426C7.asm:8 LDA ENTITY_ABS_X_TABLE,X
    case 0xC426D1: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C4/C426C7.asm:9 SEC
    case 0xC426D4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C426C7.asm:10 SBC BG1_X_POS
    case 0xC426D5: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C4/C426C7.asm:11 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC426D8: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/unknown/C4/C426C7.asm:12 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC426DB: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C426C7.asm:13 SEC
    case 0xC426DE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C426C7.asm:14 SBC BG1_Y_POS
    case 0xC426DF: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C4/C426C7.asm:15 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC426E2: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // src/unknown/C4/C426C7.asm:17 INX
    case 0xC426E5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C426C7.asm:18 INX
    case 0xC426E6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C426C7.asm:19 CPX #$003C
    case 0xC426E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00003C, 2); else cpu.execute_instruction<0xE0>(0x00003C, 3); return true;
    // src/unknown/C4/C426C7.asm:19 CPX #$003C
    // Overlapping static entry reached from 0xC426E7.
    case 0xC426E9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C426C7.asm:20 BNE @UNKNOWN0
    case 0xC426EA: cpu.execute_instruction<0xD0>(0x0000E0, 2); return true;
    // src/unknown/C4/C426C7.asm:21 RTL
    case 0xC426EC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C426ED.asm (unresolved).
bool execute_unresolved_c4_c426ed_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C426ED.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC426ED: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C426ED.asm:4 PHD
    case 0xC426EF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:5 PHA
    case 0xC426F0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:6 TDC
    case 0xC426F1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:7 SEC
    case 0xC426F2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:8 SBC #$0002
    case 0xC426F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000002, 2); else cpu.execute_instruction<0xE9>(0x000002, 3); return true;
    // src/unknown/C4/C426ED.asm:8 SBC #$0002
    // Overlapping static entry reached from 0xC426F3.
    case 0xC426F5: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C426ED.asm:9 TCD
    case 0xC426F6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:10 PLA
    case 0xC426F7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:11 LDX #$0000
    case 0xC426F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C426ED.asm:11 LDX #$0000
    // Overlapping static entry reached from 0xC426F8.
    case 0xC426FA: cpu.execute_instruction<0x00>(0x0000BF, 2); return true;
    // src/unknown/C4/C426ED.asm:13 LDA BUFFER + $200,X
    case 0xC426FB: cpu.execute_instruction<0xBF>(0x7F0200, 4); return true;
    // src/unknown/C4/C426ED.asm:14 CLC
    case 0xC426FF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:15 ADC BUFFER + $800,X
    case 0xC42700: cpu.execute_instruction<0x7F>(0x7F0800, 4); return true;
    // src/unknown/C4/C426ED.asm:16 STA BUFFER + $800,X
    case 0xC42704: cpu.execute_instruction<0x9F>(0x7F0800, 4); return true;
    // src/unknown/C4/C426ED.asm:17 BPL @UNKNOWN1
    case 0xC42708: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // src/unknown/C4/C426ED.asm:18 LDA #$0000
    case 0xC4270A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C426ED.asm:18 LDA #$0000
    // Overlapping static entry reached from 0xC4270A.
    case 0xC4270C: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C4/C426ED.asm:19 STA BUFFER + $200,X
    case 0xC4270D: cpu.execute_instruction<0x9F>(0x7F0200, 4); return true;
    // src/unknown/C4/C426ED.asm:20 BRA @UNKNOWN2
    case 0xC42711: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C426ED.asm:22 AND #$1F00
    case 0xC42713: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:22 AND #$1F00
    // Overlapping static entry reached from 0xC42713.
    case 0xC42715: cpu.execute_instruction<0x1F>(0x1F00C9, 4); return true;
    // src/unknown/C4/C426ED.asm:23 CMP #$1F00
    case 0xC42716: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:23 CMP #$1F00
    // Overlapping static entry reached from 0xC42716.
    case 0xC42718: cpu.execute_instruction<0x1F>(0xA90AD0, 4); return true;
    // src/unknown/C4/C426ED.asm:24 BNE @UNKNOWN2
    case 0xC42719: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C4/C426ED.asm:25 LDA #$0000
    case 0xC4271B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C426ED.asm:25 LDA #$0000
    // Overlapping static entry reached from 0xC42718.
    case 0xC4271C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:25 LDA #$0000
    // Overlapping static entry reached from 0xC4271B.
    case 0xC4271D: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C4/C426ED.asm:26 STA BUFFER + $200,X
    case 0xC4271E: cpu.execute_instruction<0x9F>(0x7F0200, 4); return true;
    // src/unknown/C4/C426ED.asm:27 LDA #$1F00
    case 0xC42722: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:27 LDA #$1F00
    // Overlapping static entry reached from 0xC42722.
    case 0xC42724: cpu.execute_instruction<0x1F>(0x0085EB, 4); return true;
    // src/unknown/C4/C426ED.asm:29 XBA
    case 0xC42725: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:30 STA $00
    case 0xC42726: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:31 LDA BUFFER + $400,X
    case 0xC42728: cpu.execute_instruction<0xBF>(0x7F0400, 4); return true;
    // src/unknown/C4/C426ED.asm:32 CLC
    case 0xC4272C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:33 ADC BUFFER + $A00,X
    case 0xC4272D: cpu.execute_instruction<0x7F>(0x7F0A00, 4); return true;
    // src/unknown/C4/C426ED.asm:34 STA BUFFER + $A00,X
    case 0xC42731: cpu.execute_instruction<0x9F>(0x7F0A00, 4); return true;
    // src/unknown/C4/C426ED.asm:35 BPL @UNKNOWN3
    case 0xC42735: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // src/unknown/C4/C426ED.asm:36 LDA #$0000
    case 0xC42737: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C426ED.asm:36 LDA #$0000
    // Overlapping static entry reached from 0xC42737.
    case 0xC42739: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C4/C426ED.asm:37 STA BUFFER + $400,X
    case 0xC4273A: cpu.execute_instruction<0x9F>(0x7F0400, 4); return true;
    // src/unknown/C4/C426ED.asm:38 BRA @UNKNOWN4
    case 0xC4273E: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C426ED.asm:40 AND #$1F00
    case 0xC42740: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:40 AND #$1F00
    // Overlapping static entry reached from 0xC42740.
    case 0xC42742: cpu.execute_instruction<0x1F>(0x1F00C9, 4); return true;
    // src/unknown/C4/C426ED.asm:41 CMP #$1F00
    case 0xC42743: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:41 CMP #$1F00
    // Overlapping static entry reached from 0xC42743.
    case 0xC42745: cpu.execute_instruction<0x1F>(0xA90AD0, 4); return true;
    // src/unknown/C4/C426ED.asm:42 BNE @UNKNOWN4
    case 0xC42746: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C4/C426ED.asm:43 LDA #$0000
    case 0xC42748: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C426ED.asm:43 LDA #$0000
    // Overlapping static entry reached from 0xC42745.
    case 0xC42749: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:43 LDA #$0000
    // Overlapping static entry reached from 0xC42748.
    case 0xC4274A: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C4/C426ED.asm:44 STA BUFFER + $400,X
    case 0xC4274B: cpu.execute_instruction<0x9F>(0x7F0400, 4); return true;
    // src/unknown/C4/C426ED.asm:45 LDA #$1F00
    case 0xC4274F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:45 LDA #$1F00
    // Overlapping static entry reached from 0xC4274F.
    case 0xC42751: cpu.execute_instruction<0x1F>(0x4A4A4A, 4); return true;
    // src/unknown/C4/C426ED.asm:47 LSR
    case 0xC42752: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:48 LSR
    case 0xC42753: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:49 LSR
    case 0xC42754: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:50 ORA $00
    case 0xC42755: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:51 STA $00
    case 0xC42757: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:52 LDA BUFFER + $600,X
    case 0xC42759: cpu.execute_instruction<0xBF>(0x7F0600, 4); return true;
    // src/unknown/C4/C426ED.asm:53 CLC
    case 0xC4275D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:54 ADC BUFFER + $C00,X
    case 0xC4275E: cpu.execute_instruction<0x7F>(0x7F0C00, 4); return true;
    // src/unknown/C4/C426ED.asm:55 STA BUFFER + $C00,X
    case 0xC42762: cpu.execute_instruction<0x9F>(0x7F0C00, 4); return true;
    // src/unknown/C4/C426ED.asm:56 BPL @UNKNOWN5
    case 0xC42766: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // src/unknown/C4/C426ED.asm:57 LDA #$0000
    case 0xC42768: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C426ED.asm:57 LDA #$0000
    // Overlapping static entry reached from 0xC42768.
    case 0xC4276A: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C4/C426ED.asm:58 STA BUFFER + $400,X
    case 0xC4276B: cpu.execute_instruction<0x9F>(0x7F0400, 4); return true;
    // src/unknown/C4/C426ED.asm:59 BRA @UNKNOWN6
    case 0xC4276F: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C426ED.asm:61 AND #$1F00
    case 0xC42771: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:61 AND #$1F00
    // Overlapping static entry reached from 0xC42771.
    case 0xC42773: cpu.execute_instruction<0x1F>(0x1F00C9, 4); return true;
    // src/unknown/C4/C426ED.asm:62 CMP #$1F00
    case 0xC42774: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:62 CMP #$1F00
    // Overlapping static entry reached from 0xC42774.
    case 0xC42776: cpu.execute_instruction<0x1F>(0xA90AD0, 4); return true;
    // src/unknown/C4/C426ED.asm:63 BNE @UNKNOWN6
    case 0xC42777: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C4/C426ED.asm:64 LDA #$0000
    case 0xC42779: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C426ED.asm:64 LDA #$0000
    // Overlapping static entry reached from 0xC42776.
    case 0xC4277A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:64 LDA #$0000
    // Overlapping static entry reached from 0xC42779.
    case 0xC4277B: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C4/C426ED.asm:65 STA BUFFER + $600,X
    case 0xC4277C: cpu.execute_instruction<0x9F>(0x7F0600, 4); return true;
    // src/unknown/C4/C426ED.asm:66 LDA #$1F00
    case 0xC42780: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:66 LDA #$1F00
    // Overlapping static entry reached from 0xC42780.
    case 0xC42782: cpu.execute_instruction<0x1F>(0x050A0A, 4); return true;
    // src/unknown/C4/C426ED.asm:68 ASL
    case 0xC42783: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:69 ASL
    case 0xC42784: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:70 ORA $00
    case 0xC42785: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:70 ORA $00
    // Overlapping static entry reached from 0xC42782.
    case 0xC42786: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C426ED.asm:71 STA PALETTES,X
    case 0xC42787: cpu.execute_instruction<0x9D>(0x000200, 3); return true;
    // src/unknown/C4/C426ED.asm:72 INX
    case 0xC4278A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:73 INX
    case 0xC4278B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:74 CPX #$0200
    case 0xC4278C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000200, 3); return true;
    // src/unknown/C4/C426ED.asm:74 CPX #$0200
    // Overlapping static entry reached from 0xC4278C.
    case 0xC4278E: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C426ED.asm:75 BNEL @UNKNOWN0
    case 0xC4278F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C426ED.asm:75 BNEL @UNKNOWN0
    case 0xC42791: cpu.execute_instruction<0x4C>(0x0026FB, 3); return true;
    // src/unknown/C4/C426ED.asm:76 SEP #PROC_FLAGS::ACCUM8
    case 0xC42794: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C426ED.asm:77 LDA #PALETTE_UPLOAD::FULL
    case 0xC42796: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C4/C426ED.asm:78 STA PALETTE_UPLOAD_MODE
    case 0xC42798: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C4/C426ED.asm:78 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC42796.
    case 0xC42799: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC4279B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C426ED.asm:80 PLD
    case 0xC4279D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:81 RTL
    case 0xC4279E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4283F.asm (unresolved).
bool execute_unresolved_c4_c4283f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4283F.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC4283F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4283F.asm:4 PHD
    case 0xC42841: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:5 PHA
    case 0xC42842: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:6 TDC
    case 0xC42843: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:7 SEC
    case 0xC42844: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:8 SBC #$0008
    case 0xC42845: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C4283F.asm:8 SBC #$0008
    // Overlapping static entry reached from 0xC42845.
    case 0xC42847: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C4283F.asm:9 TCD
    case 0xC42848: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:10 PLA
    case 0xC42849: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:11 PHY
    case 0xC4284A: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:12 STX $04
    case 0xC4284B: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C4283F.asm:13 ASL
    case 0xC4284D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:14 TAY
    case 0xC4284E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:15 LDA #$007F
    case 0xC4284F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // src/unknown/C4/C4283F.asm:15 LDA #$007F
    // Overlapping static entry reached from 0xC4284F.
    case 0xC42851: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4283F.asm:16 STA $06
    case 0xC42852: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4283F.asm:17 LDA ENTITY_GRAPHICS_PTR_HIGH,Y
    case 0xC42854: cpu.execute_instruction<0xB9>(0x002A06, 3); return true;
    // src/unknown/C4/C4283F.asm:18 STA $02
    case 0xC42857: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4283F.asm:19 LDA ENTITY_DIRECTIONS,Y
    case 0xC42859: cpu.execute_instruction<0xB9>(0x002AF6, 3); return true;
    // src/unknown/C4/C4283F.asm:20 ASL
    case 0xC4285C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:21 TAX
    case 0xC4285D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:22 LDA SPRITE_DIRECTION_MAPPING_8_DIRECTION,X
    case 0xC4285E: cpu.execute_instruction<0xBF>(0xC0A623, 4); return true;
    // src/unknown/C4/C4283F.asm:23 ASL
    case 0xC42862: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:24 ASL
    case 0xC42863: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:25 CLC
    case 0xC42864: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:26 ADC ENTITY_GRAPHICS_PTR_LOW,Y
    case 0xC42865: cpu.execute_instruction<0x79>(0x0029CA, 3); return true;
    // src/unknown/C4/C4283F.asm:27 ADC ENTITY_ANIMATION_FRAME,Y
    case 0xC42868: cpu.execute_instruction<0x79>(0x0010F2, 3); return true;
    // src/unknown/C4/C4283F.asm:28 STA $00
    case 0xC4286B: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4283F.asm:29 LDA [$00]
    case 0xC4286D: cpu.execute_instruction<0xA7>(0x000000, 2); return true;
    // src/unknown/C4/C4283F.asm:30 AND #$FFF0
    case 0xC4286F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/unknown/C4/C4283F.asm:30 AND #$FFF0
    // Overlapping static entry reached from 0xC4286F.
    case 0xC42871: cpu.execute_instruction<0xFF>(0xB90085, 4); return true;
    // src/unknown/C4/C4283F.asm:31 STA $00
    case 0xC42872: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4283F.asm:32 LDA ENTITY_GRAPHICS_SPRITE_BANK,Y
    case 0xC42874: cpu.execute_instruction<0xB9>(0x002A42, 3); return true;
    // src/unknown/C4/C4283F.asm:32 LDA ENTITY_GRAPHICS_SPRITE_BANK,Y
    // Overlapping static entry reached from 0xC42871.
    case 0xC42875: cpu.execute_instruction<0x42>(0x00002A, 2); return true;
    // src/unknown/C4/C4283F.asm:33 STA $02
    case 0xC42877: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4283F.asm:34 PLY
    case 0xC42879: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:36 LDA [$00],Y
    case 0xC4287A: cpu.execute_instruction<0xB7>(0x000000, 2); return true;
    // src/unknown/C4/C4283F.asm:37 STA [$04],Y
    case 0xC4287C: cpu.execute_instruction<0x97>(0x000004, 2); return true;
    // src/unknown/C4/C4283F.asm:38 DEY
    case 0xC4287E: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:39 DEY
    case 0xC4287F: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:40 BPL @UNKNOWN0
    case 0xC42880: cpu.execute_instruction<0x10>(0x0000F8, 2); return true;
    // src/unknown/C4/C4283F.asm:41 PLD
    case 0xC42882: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:42 RTL
    case 0xC42883: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42884.asm (unresolved).
bool execute_unresolved_c4_c42884_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42884.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC42884: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42884.asm:4 PHD
    case 0xC42886: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:5 PHA
    case 0xC42887: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:6 TDC
    case 0xC42888: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:7 SEC
    case 0xC42889: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:8 SBC #$0008
    case 0xC4288A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C42884.asm:8 SBC #$0008
    // Overlapping static entry reached from 0xC4288A.
    case 0xC4288C: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C42884.asm:9 TCD
    case 0xC4288D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:10 PLA
    case 0xC4288E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:11 PHY
    case 0xC4288F: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:12 STX $04
    case 0xC42890: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C42884.asm:13 ASL
    case 0xC42892: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:14 TAY
    case 0xC42893: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:15 LDA #$007F
    case 0xC42894: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // src/unknown/C4/C42884.asm:15 LDA #$007F
    // Overlapping static entry reached from 0xC42894.
    case 0xC42896: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C42884.asm:16 STA $06
    case 0xC42897: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C42884.asm:17 LDA ENTITY_GRAPHICS_PTR_HIGH,Y
    case 0xC42899: cpu.execute_instruction<0xB9>(0x002A06, 3); return true;
    // src/unknown/C4/C42884.asm:18 STA $02
    case 0xC4289C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C42884.asm:19 LDA ENTITY_GRAPHICS_PTR_LOW,Y
    case 0xC4289E: cpu.execute_instruction<0xB9>(0x0029CA, 3); return true;
    // src/unknown/C4/C42884.asm:20 STA $00
    case 0xC428A1: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C42884.asm:21 LDA ENTITY_DIRECTIONS,Y
    case 0xC428A3: cpu.execute_instruction<0xB9>(0x002AF6, 3); return true;
    // src/unknown/C4/C42884.asm:22 ASL
    case 0xC428A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:23 TAX
    case 0xC428A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:24 LDA SPRITE_DIRECTION_MAPPING_4_DIRECTION,X
    case 0xC428A8: cpu.execute_instruction<0xBF>(0xC0A60B, 4); return true;
    // src/unknown/C4/C42884.asm:25 BEQ @UNKNOWN1
    case 0xC428AC: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C4/C42884.asm:26 TAX
    case 0xC428AE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:27 LDA $00
    case 0xC428AF: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C42884.asm:28 CLC
    case 0xC428B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:30 ADC #$0004
    case 0xC428B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000004, 2); else cpu.execute_instruction<0x69>(0x000004, 3); return true;
    // src/unknown/C4/C42884.asm:30 ADC #$0004
    // Overlapping static entry reached from 0xC428B2.
    case 0xC428B4: cpu.execute_instruction<0x00>(0x0000CA, 2); return true;
    // src/unknown/C4/C42884.asm:31 DEX
    case 0xC428B5: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:32 BNE @UNKNOWN0
    case 0xC428B6: cpu.execute_instruction<0xD0>(0x0000FA, 2); return true;
    // src/unknown/C4/C42884.asm:33 STA $00
    case 0xC428B8: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C42884.asm:35 LDA [$00]
    case 0xC428BA: cpu.execute_instruction<0xA7>(0x000000, 2); return true;
    // src/unknown/C4/C42884.asm:36 AND #$FFF0
    case 0xC428BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/unknown/C4/C42884.asm:36 AND #$FFF0
    // Overlapping static entry reached from 0xC428BC.
    case 0xC428BE: cpu.execute_instruction<0xFF>(0xB90085, 4); return true;
    // src/unknown/C4/C42884.asm:37 STA $00
    case 0xC428BF: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C42884.asm:38 LDA ENTITY_GRAPHICS_SPRITE_BANK,Y
    case 0xC428C1: cpu.execute_instruction<0xB9>(0x002A42, 3); return true;
    // src/unknown/C4/C42884.asm:38 LDA ENTITY_GRAPHICS_SPRITE_BANK,Y
    // Overlapping static entry reached from 0xC428BE.
    case 0xC428C2: cpu.execute_instruction<0x42>(0x00002A, 2); return true;
    // src/unknown/C4/C42884.asm:39 STA $02
    case 0xC428C4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C42884.asm:40 PLY
    case 0xC428C6: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:42 LDA [$00],Y
    case 0xC428C7: cpu.execute_instruction<0xB7>(0x000000, 2); return true;
    // src/unknown/C4/C42884.asm:43 STA [$04],Y
    case 0xC428C9: cpu.execute_instruction<0x97>(0x000004, 2); return true;
    // src/unknown/C4/C42884.asm:44 DEY
    case 0xC428CB: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:45 DEY
    case 0xC428CC: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:46 BPL @UNKNOWN2
    case 0xC428CD: cpu.execute_instruction<0x10>(0x0000F8, 2); return true;
    // src/unknown/C4/C42884.asm:47 PLD
    case 0xC428CF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:48 RTL
    case 0xC428D0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C428D1.asm (unresolved).
bool execute_unresolved_c4_c428d1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C428D1.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC428D1: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C428D1.asm:4 REP #PROC_FLAGS::ACCUM8
    case 0xC428D3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C428D1.asm:5 PHD
    case 0xC428D5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:6 PHA
    case 0xC428D6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:7 TDC
    case 0xC428D7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:8 SEC
    case 0xC428D8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:9 SBC #$0008
    case 0xC428D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C428D1.asm:9 SBC #$0008
    // Overlapping static entry reached from 0xC428D9.
    case 0xC428DB: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C428D1.asm:10 TCD
    case 0xC428DC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:11 PLA
    case 0xC428DD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:12 STA $00
    case 0xC428DE: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C428D1.asm:13 STX $04
    case 0xC428E0: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C428D1.asm:14 LDA #$007F
    case 0xC428E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // src/unknown/C4/C428D1.asm:14 LDA #$007F
    // Overlapping static entry reached from 0xC428E2.
    case 0xC428E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C428D1.asm:15 STA $02
    case 0xC428E5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C428D1.asm:16 STA $06
    case 0xC428E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C428D1.asm:17 LDA $16
    case 0xC428E9: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C428D1.asm:18 ASL
    case 0xC428EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:19 TAX
    case 0xC428EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:21 LDA [$04],Y
    case 0xC428ED: cpu.execute_instruction<0xB7>(0x000004, 2); return true;
    // src/unknown/C4/C428D1.asm:22 STA [$00],Y
    case 0xC428EF: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C4/C428D1.asm:23 TYA
    case 0xC428F1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:24 CLC
    case 0xC428F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:25 ADC #$0010
    case 0xC428F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C428D1.asm:25 ADC #$0010
    // Overlapping static entry reached from 0xC428F3.
    case 0xC428F5: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C428D1.asm:26 TAY
    case 0xC428F6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:27 DEX
    case 0xC428F7: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:28 BNE @UNKNOWN0
    case 0xC428F8: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/unknown/C4/C428D1.asm:29 PLD
    case 0xC428FA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:30 RTL
    case 0xC428FB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C428FC.asm (unresolved).
bool execute_unresolved_c4_c428fc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C428FC.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC428FC: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C428FC.asm:4 REP #PROC_FLAGS::ACCUM8
    case 0xC428FE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C428FC.asm:5 PHD
    case 0xC42900: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:6 PHA
    case 0xC42901: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:7 TDC
    case 0xC42902: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:8 SEC
    case 0xC42903: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:9 SBC #$0010
    case 0xC42904: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/C4/C428FC.asm:9 SBC #$0010
    // Overlapping static entry reached from 0xC42904.
    case 0xC42906: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C428FC.asm:10 TCD
    case 0xC42907: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:11 PLA
    case 0xC42908: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:12 STA $00
    case 0xC42909: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C428FC.asm:13 STX $04
    case 0xC4290B: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C428FC.asm:14 LDA #$007F
    case 0xC4290D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // src/unknown/C4/C428FC.asm:14 LDA #$007F
    // Overlapping static entry reached from 0xC4290D.
    case 0xC4290F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C428FC.asm:15 STA $02
    case 0xC42910: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C428FC.asm:16 STA $06
    case 0xC42912: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C428FC.asm:17 TYA
    case 0xC42914: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:18 AND #$0007
    case 0xC42915: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C428FC.asm:18 AND #$0007
    // Overlapping static entry reached from 0xC42915.
    case 0xC42917: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C428FC.asm:19 ASL
    case 0xC42918: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:20 TAX
    case 0xC42919: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:21 LDA f:UNKNOWN_C42955,X
    case 0xC4291A: cpu.execute_instruction<0xBF>(0xC42955, 4); return true;
    // src/unknown/C4/C428FC.asm:22 STA $08
    case 0xC4291E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C428FC.asm:23 EOR #$FFFF
    case 0xC42920: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C428FC.asm:23 EOR #$FFFF
    // Overlapping static entry reached from 0xC42920.
    case 0xC42922: cpu.execute_instruction<0xFF>(0x980A85, 4); return true;
    // src/unknown/C4/C428FC.asm:24 STA $0A
    case 0xC42923: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C428FC.asm:25 TYA
    case 0xC42925: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:26 AND #$FFF8
    case 0xC42926: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/unknown/C4/C428FC.asm:26 AND #$FFF8
    // Overlapping static entry reached from 0xC42926.
    case 0xC42928: cpu.execute_instruction<0xFF>(0xA80A0A, 4); return true;
    // src/unknown/C4/C428FC.asm:27 ASL
    case 0xC42929: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:28 ASL
    case 0xC4292A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:29 TAY
    case 0xC4292B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:30 LDA $1E
    case 0xC4292C: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C428FC.asm:31 LSR
    case 0xC4292E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:32 LSR
    case 0xC4292F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:33 LSR
    case 0xC42930: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:34 STA $0E
    case 0xC42931: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C428FC.asm:36 LDX #$0010
    case 0xC42933: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/unknown/C4/C428FC.asm:36 LDX #$0010
    // Overlapping static entry reached from 0xC42933.
    case 0xC42935: cpu.execute_instruction<0x00>(0x00005A, 2); return true;
    // src/unknown/C4/C428FC.asm:37 PHY
    case 0xC42936: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:39 LDA [$04],Y
    case 0xC42937: cpu.execute_instruction<0xB7>(0x000004, 2); return true;
    // src/unknown/C4/C428FC.asm:40 AND $08
    case 0xC42939: cpu.execute_instruction<0x25>(0x000008, 2); return true;
    // src/unknown/C4/C428FC.asm:41 STA $0C
    case 0xC4293B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C428FC.asm:42 LDA [$00],Y
    case 0xC4293D: cpu.execute_instruction<0xB7>(0x000000, 2); return true;
    // src/unknown/C4/C428FC.asm:43 AND $0A
    case 0xC4293F: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // src/unknown/C4/C428FC.asm:44 ORA $0C
    case 0xC42941: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // src/unknown/C4/C428FC.asm:45 STA [$00],Y
    case 0xC42943: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C4/C428FC.asm:46 INY
    case 0xC42945: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:47 INY
    case 0xC42946: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:48 DEX
    case 0xC42947: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:49 BNE @UNKNOWN1
    case 0xC42948: cpu.execute_instruction<0xD0>(0x0000ED, 2); return true;
    // src/unknown/C4/C428FC.asm:50 PLA
    case 0xC4294A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:51 CLC
    case 0xC4294B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:52 ADC $20
    case 0xC4294C: cpu.execute_instruction<0x65>(0x000020, 2); return true;
    // src/unknown/C4/C428FC.asm:53 TAY
    case 0xC4294E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:54 DEC $0E
    case 0xC4294F: cpu.execute_instruction<0xC6>(0x00000E, 2); return true;
    // src/unknown/C4/C428FC.asm:55 BNE @UNKNOWN0
    case 0xC42951: cpu.execute_instruction<0xD0>(0x0000E0, 2); return true;
    // src/unknown/C4/C428FC.asm:56 PLD
    case 0xC42953: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:57 RTL
    case 0xC42954: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42965.asm (unresolved).
bool execute_unresolved_c4_c42965_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42965.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC42965: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42965.asm:4 PHD
    case 0xC42967: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:5 PHA
    case 0xC42968: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:6 TDC
    case 0xC42969: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:7 SEC
    case 0xC4296A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:8 SBC #$000E
    case 0xC4296B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000E, 2); else cpu.execute_instruction<0xE9>(0x00000E, 3); return true;
    // src/unknown/C4/C42965.asm:8 SBC #$000E
    // Overlapping static entry reached from 0xC4296B.
    case 0xC4296D: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C42965.asm:9 TCD
    case 0xC4296E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:10 PLA
    case 0xC4296F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:11 STA $00
    case 0xC42970: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C42965.asm:12 STX $04
    case 0xC42972: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C42965.asm:13 LDA #$007F
    case 0xC42974: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // src/unknown/C4/C42965.asm:13 LDA #$007F
    // Overlapping static entry reached from 0xC42974.
    case 0xC42976: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C42965.asm:14 STA $02
    case 0xC42977: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C42965.asm:15 STA $06
    case 0xC42979: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C42965.asm:16 LDA $1C
    case 0xC4297B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C42965.asm:17 ASL
    case 0xC4297D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:18 TAX
    case 0xC4297E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:19 LDA f:UNKNOWN_C42955,X
    case 0xC4297F: cpu.execute_instruction<0xBF>(0xC42955, 4); return true;
    // src/unknown/C4/C42965.asm:20 STA $08
    case 0xC42983: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C42965.asm:21 EOR #$FFFF
    case 0xC42985: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C42965.asm:21 EOR #$FFFF
    // Overlapping static entry reached from 0xC42985.
    case 0xC42987: cpu.execute_instruction<0xFF>(0xB70A85, 4); return true;
    // src/unknown/C4/C42965.asm:22 STA $0A
    case 0xC42988: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C42965.asm:23 LDA [$04],Y
    case 0xC4298A: cpu.execute_instruction<0xB7>(0x000004, 2); return true;
    // src/unknown/C4/C42965.asm:23 LDA [$04],Y
    // Overlapping static entry reached from 0xC42987.
    case 0xC4298B: cpu.execute_instruction<0x04>(0x000025, 2); return true;
    // src/unknown/C4/C42965.asm:24 AND $08
    case 0xC4298C: cpu.execute_instruction<0x25>(0x000008, 2); return true;
    // src/unknown/C4/C42965.asm:24 AND $08
    // Overlapping static entry reached from 0xC4298B.
    case 0xC4298D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:25 STA $0C
    case 0xC4298E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C42965.asm:26 LDA [$00],Y
    case 0xC42990: cpu.execute_instruction<0xB7>(0x000000, 2); return true;
    // src/unknown/C4/C42965.asm:27 AND $0A
    case 0xC42992: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // src/unknown/C4/C42965.asm:28 ORA $0C
    case 0xC42994: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // src/unknown/C4/C42965.asm:29 STA [$00],Y
    case 0xC42996: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C4/C42965.asm:30 TYA
    case 0xC42998: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:31 CLC
    case 0xC42999: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:32 ADC #$0010
    case 0xC4299A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C42965.asm:32 ADC #$0010
    // Overlapping static entry reached from 0xC4299A.
    case 0xC4299C: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C42965.asm:33 TAY
    case 0xC4299D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:34 LDA [$04],Y
    case 0xC4299E: cpu.execute_instruction<0xB7>(0x000004, 2); return true;
    // src/unknown/C4/C42965.asm:35 AND $08
    case 0xC429A0: cpu.execute_instruction<0x25>(0x000008, 2); return true;
    // src/unknown/C4/C42965.asm:36 STA $0C
    case 0xC429A2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C42965.asm:37 LDA [$00],Y
    case 0xC429A4: cpu.execute_instruction<0xB7>(0x000000, 2); return true;
    // src/unknown/C4/C42965.asm:38 AND $0A
    case 0xC429A6: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // src/unknown/C4/C42965.asm:39 ORA $0C
    case 0xC429A8: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // src/unknown/C4/C42965.asm:40 STA [$00],Y
    case 0xC429AA: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C4/C42965.asm:41 PLD
    case 0xC429AC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:42 RTL
    case 0xC429AD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C429AE.asm (unresolved).
bool execute_unresolved_c4_c429ae_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C429AE.asm:3 PHA
    case 0xC429AE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C429AE.asm:4 TXA
    case 0xC429AF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C429AE.asm:5 ASL
    case 0xC429B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C429AE.asm:6 TAX
    case 0xC429B1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C429AE.asm:7 LDA ENTITY_TILE_HEIGHTS,X
    case 0xC429B2: cpu.execute_instruction<0xBD>(0x002ABA, 3); return true;
    // src/unknown/C4/C429AE.asm:8 STA $00
    case 0xC429B5: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C429AE.asm:9 LDA #$0000
    case 0xC429B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C429AE.asm:9 LDA #$0000
    // Overlapping static entry reached from 0xC429B7.
    case 0xC429B9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C429AE.asm:10 STA DMA_COPY_MODE
    case 0xC429BA: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/unknown/C4/C429AE.asm:11 LDA ENTITY_BYTE_WIDTHS,X
    case 0xC429BD: cpu.execute_instruction<0xBD>(0x002A7E, 3); return true;
    // src/unknown/C4/C429AE.asm:12 STA DMA_COPY_SIZE
    case 0xC429C0: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/unknown/C4/C429AE.asm:13 LDA #$007F
    case 0xC429C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // src/unknown/C4/C429AE.asm:13 LDA #$007F
    // Overlapping static entry reached from 0xC429C3.
    case 0xC429C5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C429AE.asm:14 STA DMA_COPY_RAM_SRC + 2
    case 0xC429C6: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/unknown/C4/C429AE.asm:15 PLA
    case 0xC429C9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C429AE.asm:16 STA DMA_COPY_RAM_SRC
    case 0xC429CA: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C4/C429AE.asm:17 LDA ENTITY_VRAM_ADDRESS,X
    case 0xC429CD: cpu.execute_instruction<0xBD>(0x00298E, 3); return true;
    // src/unknown/C4/C429AE.asm:18 STA DMA_COPY_VRAM_DEST
    case 0xC429D0: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C4/C429AE.asm:20 JSL UNKNOWN_C0A56E
    case 0xC429D3: cpu.execute_instruction<0x22>(0xC0A56E, 4); return true;
    // src/unknown/C4/C429AE.asm:21 DEC $00
    case 0xC429D7: cpu.execute_instruction<0xC6>(0x000000, 2); return true;
    // src/unknown/C4/C429AE.asm:22 BEQ @UNKNOWN1
    case 0xC429D9: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C4/C429AE.asm:23 LDA DMA_COPY_RAM_SRC
    case 0xC429DB: cpu.execute_instruction<0xAD>(0x000094, 3); return true;
    // src/unknown/C4/C429AE.asm:24 CLC
    case 0xC429DE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C429AE.asm:25 ADC DMA_COPY_SIZE
    case 0xC429DF: cpu.execute_instruction<0x6D>(0x000092, 3); return true;
    // src/unknown/C4/C429AE.asm:26 STA DMA_COPY_RAM_SRC
    case 0xC429E2: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C4/C429AE.asm:27 BRA @UNKNOWN0
    case 0xC429E5: cpu.execute_instruction<0x80>(0x0000EC, 2); return true;
    // src/unknown/C4/C429AE.asm:29 RTL
    case 0xC429E7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C429E8.asm (unresolved).
bool execute_unresolved_c4_c429e8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C429E8.asm:4 TAY
    case 0xC429E8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C429E8.asm:5 ASL
    case 0xC429E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C429E8.asm:6 ASL
    case 0xC429EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C429E8.asm:7 ASL
    case 0xC429EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C429E8.asm:8 ASL
    case 0xC429EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C429E8.asm:9 TAX
    case 0xC429ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C429E8.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC429EE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C429E8.asm:11 LDA #^__BSS_START__
    case 0xC429F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x009F7E, 3); return true;
    // src/unknown/C4/C429E8.asm:12 STA f:A1B0,X
    case 0xC429F2: cpu.execute_instruction<0x9F>(0x004304, 4); return true;
    // src/unknown/C4/C429E8.asm:12 STA f:A1B0,X
    // Overlapping static entry reached from 0xC429F0.
    case 0xC429F3: cpu.execute_instruction<0x04>(0x000043, 2); return true;
    // src/unknown/C4/C429E8.asm:12 STA f:A1B0,X
    // Overlapping static entry reached from 0xC429F3.
    case 0xC429F5: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C4/C429E8.asm:13 STA f:DASB0,X
    case 0xC429F6: cpu.execute_instruction<0x9F>(0x004307, 4); return true;
    // src/unknown/C4/C429E8.asm:14 LDA #$002C
    case 0xC429FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x009F2C, 3); return true;
    // src/unknown/C4/C429E8.asm:15 STA f:BBAD0,X
    case 0xC429FC: cpu.execute_instruction<0x9F>(0x004301, 4); return true;
    // src/unknown/C4/C429E8.asm:15 STA f:BBAD0,X
    // Overlapping static entry reached from 0xC429FA.
    case 0xC429FD: cpu.execute_instruction<0x01>(0x000043, 2); return true;
    // src/unknown/C4/C429E8.asm:15 STA f:BBAD0,X
    // Overlapping static entry reached from 0xC429FD.
    case 0xC429FF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C429E8.asm:16 LDA #DMA_TRANSFER_UNIT::WORD
    case 0xC42A00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009F01, 3); return true;
    // src/unknown/C4/C429E8.asm:17 STA f:DMAP0,X
    case 0xC42A02: cpu.execute_instruction<0x9F>(0x004300, 4); return true;
    // src/unknown/C4/C429E8.asm:17 STA f:DMAP0,X
    // Overlapping static entry reached from 0xC42A00.
    case 0xC42A03: cpu.execute_instruction<0x00>(0x000043, 2); return true;
    // src/unknown/C4/C429E8.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC42A06: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C429E8.asm:19 LDA #.LOWORD(LETTERBOX_HDMA_TABLE)
    case 0xC42A08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B8, 2); else cpu.execute_instruction<0xA9>(0x00ADB8, 3); return true;
    // src/unknown/C4/C429E8.asm:19 LDA #.LOWORD(LETTERBOX_HDMA_TABLE)
    // Overlapping static entry reached from 0xC42A08.
    case 0xC42A0A: cpu.execute_instruction<0xAD>(0x00029F, 3); return true;
    // src/unknown/C4/C429E8.asm:20 STA f:A1T0L,X
    case 0xC42A0B: cpu.execute_instruction<0x9F>(0x004302, 4); return true;
    // src/unknown/C4/C429E8.asm:20 STA f:A1T0L,X
    // Overlapping static entry reached from 0xC42A0A.
    case 0xC42A0D: cpu.execute_instruction<0x43>(0x000000, 2); return true;
    // src/unknown/C4/C429E8.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC42A0F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C429E8.asm:22 TYX
    case 0xC42A11: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C429E8.asm:23 LDA HDMAEN_MIRROR
    case 0xC42A12: cpu.execute_instruction<0xAD>(0x00001F, 3); return true;
    // src/unknown/C4/C429E8.asm:24 ORA DMA_FLAGS,X
    case 0xC42A15: cpu.execute_instruction<0x1F>(0xC0AE16, 4); return true;
    // src/unknown/C4/C429E8.asm:25 STA HDMAEN_MIRROR
    case 0xC42A19: cpu.execute_instruction<0x8D>(0x00001F, 3); return true;
    // src/unknown/C4/C429E8.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC42A1C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C429E8.asm:27 RTL
    case 0xC42A1E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C432B1.asm (unresolved).
bool execute_unresolved_c4_c432b1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C432B1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC432B1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C432B1.asm:7 END_STACK_VARS
    case 0xC432B3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C432B1.asm:7 END_STACK_VARS
    case 0xC432B4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C432B1.asm:7 END_STACK_VARS
    case 0xC432B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C432B1.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC432B5.
    case 0xC432B7: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C432B1.asm:7 END_STACK_VARS
    case 0xC432B8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:8 LDA #0
    case 0xC432B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C432B1.asm:8 LDA #0
    // Overlapping static entry reached from 0xC432B9.
    case 0xC432BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C432B1.asm:9 STA @LOCAL01
    case 0xC432BC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C432B1.asm:10 BRA @UNKNOWN1
    case 0xC432BE: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C4/C432B1.asm:12 ASL
    case 0xC432C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:13 TAX
    case 0xC432C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:14 STZ ENTITY_SURFACE_FLAGS,X
    case 0xC432C2: cpu.execute_instruction<0x9E>(0x002BAA, 3); return true;
    // src/unknown/C4/C432B1.asm:15 LDA @LOCAL01
    case 0xC432C5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C432B1.asm:16 INC
    case 0xC432C7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:17 STA @LOCAL01
    case 0xC432C8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C432B1.asm:19 CMP #MAX_ENTITIES
    case 0xC432CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C4/C432B1.asm:19 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC432CA.
    case 0xC432CC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C432B1.asm:20 BCC @UNKNOWN0
    case 0xC432CD: cpu.execute_instruction<0x90>(0x0000F1, 2); return true;
    // src/unknown/C4/C432B1.asm:21 LDX #0
    case 0xC432CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C432B1.asm:21 LDX #0
    // Overlapping static entry reached from 0xC432CF.
    case 0xC432D1: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C432B1.asm:22 STX @LOCAL00
    case 0xC432D2: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C432B1.asm:23 BRA @UNKNOWN5
    case 0xC432D4: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C4/C432B1.asm:25 LDA #0
    case 0xC432D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C432B1.asm:25 LDA #0
    // Overlapping static entry reached from 0xC432D6.
    case 0xC432D8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C432B1.asm:26 STA @LOCAL01
    case 0xC432D9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C432B1.asm:27 BRA @UNKNOWN4
    case 0xC432DB: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C4/C432B1.asm:29 STA @VIRTUAL02
    case 0xC432DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C432B1.asm:30 LDX @LOCAL00
    case 0xC432DF: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C432B1.asm:31 TXA
    case 0xC432E1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:32 LDY #.SIZEOF(char_struct)
    case 0xC432E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C4/C432B1.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC432E2.
    case 0xC432E4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C432B1.asm:33 JSL MULT168
    case 0xC432E5: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C432B1.asm:34 CLC
    case 0xC432E9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC432EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/unknown/C4/C432B1.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC432EA.
    case 0xC432EC: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C4/C432B1.asm:36 CLC
    case 0xC432ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:37 ADC @VIRTUAL02
    case 0xC432EE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C432B1.asm:37 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC432EC.
    case 0xC432EF: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C4/C432B1.asm:38 TAX
    case 0xC432F0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC432F1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C432B1.asm:40 LDA #0
    case 0xC432F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/unknown/C4/C432B1.asm:41 STA __BSS_START__,X
    case 0xC432F5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C432B1.asm:41 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC432F3.
    case 0xC432F6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C432B1.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC432F8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C432B1.asm:43 LDA @LOCAL01
    case 0xC432FA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C432B1.asm:44 INC
    case 0xC432FC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:45 STA @LOCAL01
    case 0xC432FD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C432B1.asm:47 CMP #7
    case 0xC432FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C4/C432B1.asm:47 CMP #7
    // Overlapping static entry reached from 0xC432FF.
    case 0xC43301: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C432B1.asm:48 BCC @UNKNOWN3
    case 0xC43302: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/unknown/C4/C432B1.asm:49 LDX @LOCAL00
    case 0xC43304: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C432B1.asm:50 INX
    case 0xC43306: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:51 STX @LOCAL00
    case 0xC43307: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C432B1.asm:53 CPX #6
    case 0xC43309: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/unknown/C4/C432B1.asm:53 CPX #6
    // Overlapping static entry reached from 0xC43309.
    case 0xC4330B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C432B1.asm:54 BCC @UNKNOWN2
    case 0xC4330C: cpu.execute_instruction<0x90>(0x0000C8, 2); return true;
    // src/unknown/C4/C432B1.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC4330E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C432B1.asm:56 STZ GAME_STATE + game_state::party_status
    case 0xC43310: cpu.execute_instruction<0x9C>(0x009840, 3); return true;
    // src/unknown/C4/C432B1.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC43313: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C432B1.asm:58 END_C_FUNCTION
    case 0xC43315: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C432B1.asm:58 END_C_FUNCTION
    case 0xC43316: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43317.asm (unresolved).
bool execute_unresolved_c4_c43317_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43317.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43317: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43317.asm:6 END_STACK_VARS
    case 0xC43319: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43317.asm:6 END_STACK_VARS
    case 0xC4331A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43317.asm:6 END_STACK_VARS
    case 0xC4331B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43317.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4331B.
    case 0xC4331D: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43317.asm:6 END_STACK_VARS
    case 0xC4331E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C43317.asm:7 LDA #0
    case 0xC4331F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C43317.asm:7 LDA #0
    // Overlapping static entry reached from 0xC4331F.
    case 0xC43321: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C43317.asm:8 STA @LOCAL00
    case 0xC43322: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43317.asm:9 BRA @UNKNOWN1
    case 0xC43324: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C4/C43317.asm:11 ASL
    case 0xC43326: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43317.asm:12 TAX
    case 0xC43327: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43317.asm:13 LDA @LOCAL00
    case 0xC43328: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43317.asm:14 LDY #.SIZEOF(char_struct)
    case 0xC4332A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C4/C43317.asm:14 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4332A.
    case 0xC4332C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43317.asm:15 JSL MULT168
    case 0xC4332D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C43317.asm:16 CLC
    case 0xC43331: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43317.asm:17 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC43332: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C4/C43317.asm:17 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC43332.
    case 0xC43334: cpu.execute_instruction<0x99>(0x00C89D, 3); return true;
    // src/unknown/C4/C43317.asm:18 STA CHOSEN_FOUR_PTRS,X
    case 0xC43335: cpu.execute_instruction<0x9D>(0x004DC8, 3); return true;
    // src/unknown/C4/C43317.asm:18 STA CHOSEN_FOUR_PTRS,X
    // Overlapping static entry reached from 0xC43334.
    case 0xC43337: cpu.execute_instruction<0x4D>(0x000EA5, 3); return true;
    // src/unknown/C4/C43317.asm:19 LDA @LOCAL00
    case 0xC43338: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43317.asm:20 INC
    case 0xC4333A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C43317.asm:21 STA @LOCAL00
    case 0xC4333B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43317.asm:23 CMP #6
    case 0xC4333D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C4/C43317.asm:23 CMP #6
    // Overlapping static entry reached from 0xC4333D.
    case 0xC4333F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C43317.asm:24 BCC @UNKNOWN0
    case 0xC43340: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43317.asm:25 END_C_FUNCTION
    case 0xC43342: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43317.asm:25 END_C_FUNCTION
    case 0xC43343: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43344.asm (unresolved).
bool execute_unresolved_c4_c43344_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43344.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43344: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C43344.asm:5 STA OVERWORLD_STATUS_SUPPRESSION
    case 0xC43346: cpu.execute_instruction<0x8D>(0x005D98, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43344.asm:6 END_C_FUNCTION
    case 0xC43349: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4334A.asm (unresolved).
bool execute_unresolved_c4_c4334a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4334A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4334A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4334A.asm:8 END_STACK_VARS
    case 0xC4334C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4334A.asm:8 END_STACK_VARS
    case 0xC4334D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4334A.asm:8 END_STACK_VARS
    case 0xC4334E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4334A.asm:8 END_STACK_VARS
    case 0xC4334F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4334A.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4334F.
    case 0xC43351: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4334A.asm:8 END_STACK_VARS
    case 0xC43352: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4334A.asm:8 END_STACK_VARS
    case 0xC43353: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:16 STA @TMP2
    case 0xC43354: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4334A.asm:16 STA @TMP2
    // Overlapping static entry reached from 0xC43351.
    case 0xC43355: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C4/C4334A.asm:17 ASL
    case 0xC43356: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:18 TAX
    case 0xC43357: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:19 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC43358: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C4/C4334A.asm:20 LSR
    case 0xC4335B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:21 LSR
    case 0xC4335C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:22 LSR
    case 0xC4335D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:23 CLC
    case 0xC4335E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:24 ADC UNKNOWN_C3E230,X
    case 0xC4335F: cpu.execute_instruction<0x7F>(0xC3E230, 4); return true;
    // src/unknown/C4/C4334A.asm:25 STA @LOCAL01
    case 0xC43363: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:26 LDA @TMP2
    case 0xC43365: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4334A.asm:27 CMP #4
    case 0xC43367: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C4/C4334A.asm:27 CMP #4
    // Overlapping static entry reached from 0xC43367.
    case 0xC43369: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4334A.asm:28 BNE @UNKNOWN0
    case 0xC4336A: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:29 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC4336C: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C4/C4334A.asm:30 INC
    case 0xC4336F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:31 LSR
    case 0xC43370: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:32 LSR
    case 0xC43371: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:33 LSR
    case 0xC43372: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:34 CLC
    case 0xC43373: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:35 ADC UNKNOWN_C3E240,X
    case 0xC43374: cpu.execute_instruction<0x7F>(0xC3E240, 4); return true;
    // src/unknown/C4/C4334A.asm:36 STA @TMP1
    case 0xC43378: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4334A.asm:37 BRA @UNKNOWN1
    case 0xC4337A: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C4334A.asm:39 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC4337C: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C4/C4334A.asm:40 LSR
    case 0xC4337F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:41 LSR
    case 0xC43380: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:42 LSR
    case 0xC43381: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:43 CLC
    case 0xC43382: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:44 ADC UNKNOWN_C3E240,X
    case 0xC43383: cpu.execute_instruction<0x7F>(0xC3E240, 4); return true;
    // src/unknown/C4/C4334A.asm:45 STA @TMP1
    case 0xC43387: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4334A.asm:47 LDA @TMP2
    case 0xC43389: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4334A.asm:48 STA @LOCAL00
    case 0xC4338B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4334A.asm:49 LDY GAME_STATE+game_state::current_party_members
    case 0xC4338D: cpu.execute_instruction<0xAC>(0x009889, 3); return true;
    // src/unknown/C4/C4334A.asm:50 LDA @TMP1
    case 0xC43390: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4334A.asm:51 ASL
    case 0xC43392: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:52 ASL
    case 0xC43393: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:53 ASL
    case 0xC43394: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:54 TAX
    case 0xC43395: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:55 LDA @LOCAL01
    case 0xC43396: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:56 ASL
    case 0xC43398: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:57 ASL
    case 0xC43399: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:58 ASL
    case 0xC4339A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:59 JSL UNKNOWN_C05CD7
    case 0xC4339B: cpu.execute_instruction<0x22>(0xC05CD7, 4); return true;
    // src/unknown/C4/C4334A.asm:60 AND #$0082
    case 0xC4339F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000082, 2); else cpu.execute_instruction<0x29>(0x000082, 3); return true;
    // src/unknown/C4/C4334A.asm:60 AND #$0082
    // Overlapping static entry reached from 0xC4339F.
    case 0xC433A1: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4334A.asm:61 CMP #$0082
    case 0xC433A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000082, 2); else cpu.execute_instruction<0xC9>(0x000082, 3); return true;
    // src/unknown/C4/C4334A.asm:61 CMP #$0082
    // Overlapping static entry reached from 0xC433A2.
    case 0xC433A4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4334A.asm:62 BNE @UNKNOWN2
    case 0xC433A5: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/unknown/C4/C4334A.asm:63 LDA @TMP2
    case 0xC433A7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4334A.asm:64 ASL
    case 0xC433A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:65 TAX
    case 0xC433AA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:66 LDA UNKNOWN_C3E230,X
    case 0xC433AB: cpu.execute_instruction<0xBF>(0xC3E230, 4); return true;
    // src/unknown/C4/C4334A.asm:67 CLC
    case 0xC433AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:68 ADC @LOCAL01
    case 0xC433B0: cpu.execute_instruction<0x65>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:69 STA @LOCAL01
    case 0xC433B2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:70 LDA @TMP1
    case 0xC433B4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4334A.asm:71 CLC
    case 0xC433B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:72 ADC UNKNOWN_C3E240,X
    case 0xC433B7: cpu.execute_instruction<0x7F>(0xC3E240, 4); return true;
    // src/unknown/C4/C4334A.asm:73 STA @TMP1
    case 0xC433BB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4334A.asm:75 LDX @TMP1
    case 0xC433BD: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4334A.asm:76 LDA @LOCAL01
    case 0xC433BF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:77 JSL UNKNOWN_C07477
    case 0xC433C1: cpu.execute_instruction<0x22>(0xC07477, 4); return true;
    // src/unknown/C4/C4334A.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC433C5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4334A.asm:79 AND #$00FF
    case 0xC433C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4334A.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC433C7.
    case 0xC433C9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4334A.asm:80 TAX
    case 0xC433CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:81 CPX #<-1
    case 0xC433CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C4/C4334A.asm:81 CPX #<-1
    // Overlapping static entry reached from 0xC433CB.
    case 0xC433CD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4334A.asm:82 BNE @UNKNOWN3
    case 0xC433CE: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C4/C4334A.asm:83 LDX @TMP1
    case 0xC433D0: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4334A.asm:84 LDA @LOCAL01
    case 0xC433D2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:85 INC
    case 0xC433D4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:86 JSL UNKNOWN_C07477
    case 0xC433D5: cpu.execute_instruction<0x22>(0xC07477, 4); return true;
    // src/unknown/C4/C4334A.asm:87 REP #PROC_FLAGS::ACCUM8
    case 0xC433D9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4334A.asm:88 AND #$00FF
    case 0xC433DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4334A.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC433DB.
    case 0xC433DD: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4334A.asm:89 TAX
    case 0xC433DE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:91 CPX #<-1
    case 0xC433DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C4/C4334A.asm:91 CPX #<-1
    // Overlapping static entry reached from 0xC433DF.
    case 0xC433E1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4334A.asm:92 BNE @UNKNOWN4
    case 0xC433E2: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C4/C4334A.asm:93 LDX @TMP1
    case 0xC433E4: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4334A.asm:94 LDA @LOCAL01
    case 0xC433E6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:95 DEC
    case 0xC433E8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:96 JSL UNKNOWN_C07477
    case 0xC433E9: cpu.execute_instruction<0x22>(0xC07477, 4); return true;
    // src/unknown/C4/C4334A.asm:97 REP #PROC_FLAGS::ACCUM8
    case 0xC433ED: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4334A.asm:98 AND #$00FF
    case 0xC433EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4334A.asm:98 AND #$00FF
    // Overlapping static entry reached from 0xC433EF.
    case 0xC433F1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4334A.asm:99 TAX
    case 0xC433F2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:101 CPX #<-1
    case 0xC433F3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C4/C4334A.asm:101 CPX #<-1
    // Overlapping static entry reached from 0xC433F3.
    case 0xC433F5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4334A.asm:102 BEQ @UNKNOWN5
    case 0xC433F6: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/unknown/C4/C4334A.asm:103 CPX #5
    case 0xC433F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000005, 2); else cpu.execute_instruction<0xE0>(0x000005, 3); return true;
    // src/unknown/C4/C4334A.asm:103 CPX #5
    // Overlapping static entry reached from 0xC433F8.
    case 0xC433FA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4334A.asm:104 BNE @UNKNOWN5
    case 0xC433FB: cpu.execute_instruction<0xD0>(0x00003F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4334A.asm:105 LOADPTR DOOR_DATA&$FF0000, @VIRTUAL06
    case 0xC433FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4334A.asm:105 LOADPTR DOOR_DATA&$FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC433FD.
    case 0xC433FF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4334A.asm:105 LOADPTR DOOR_DATA&$FF0000, @VIRTUAL06
    case 0xC43400: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4334A.asm:105 LOADPTR DOOR_DATA&$FF0000, @VIRTUAL06
    case 0xC43402: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4334A.asm:105 LOADPTR DOOR_DATA&$FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC43402.
    case 0xC43404: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4334A.asm:105 LOADPTR DOOR_DATA&$FF0000, @VIRTUAL06
    case 0xC43405: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4334A.asm:106 LDA DOOR_FOUND
    case 0xC43407: cpu.execute_instruction<0xAD>(0x005DBC, 3); return true;
    // src/unknown/C4/C4334A.asm:107 AND #$7FFF
    case 0xC4340A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C4/C4334A.asm:107 AND #$7FFF
    // Overlapping static entry reached from 0xC4340A.
    case 0xC4340C: cpu.execute_instruction<0x7F>(0x066518, 4); return true;
    // src/unknown/C4/C4334A.asm:108 CLC
    case 0xC4340D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:109 ADC @VIRTUAL06
    case 0xC4340E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4334A.asm:110 STA @VIRTUAL06
    case 0xC43410: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4334A.asm:111 LDA DOOR_FOUND_TYPE
    case 0xC43412: cpu.execute_instruction<0xAD>(0x005DBE, 3); return true;
    // src/unknown/C4/C4334A.asm:112 STA UNREAD_7E5DDC
    case 0xC43415: cpu.execute_instruction<0x8D>(0x005DDC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4334A.asm:113 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC43418: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4334A.asm:113 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4341A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4334A.asm:113 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4341C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4334A.asm:113 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4341E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4334A.asm:114 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43420: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4334A.asm:114 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC43420.
    case 0xC43422: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4334A.asm:114 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43423: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4334A.asm:114 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43425: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4334A.asm:114 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43426: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4334A.asm:114 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43428: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4334A.asm:114 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4342A: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4334A.asm:115 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC4342C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4334A.asm:115 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC4342E: cpu.execute_instruction<0x8D>(0x005DDE, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4334A.asm:115 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC43431: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4334A.asm:115 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC43433: cpu.execute_instruction<0x8D>(0x005DE0, 3); return true;
    // src/unknown/C4/C4334A.asm:116 LDA #.LOWORD(-2)
    case 0xC43436: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x00FFFE, 3); return true;
    // src/unknown/C4/C4334A.asm:116 LDA #.LOWORD(-2)
    // Overlapping static entry reached from 0xC43436.
    case 0xC43438: cpu.execute_instruction<0xFF>(0x5D628D, 4); return true;
    // src/unknown/C4/C4334A.asm:117 STA INTERACTING_NPC_ID
    case 0xC43439: cpu.execute_instruction<0x8D>(0x005D62, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4334A.asm:119 END_C_FUNCTION
    case 0xC4343C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4334A.asm:119 END_C_FUNCTION
    case 0xC4343D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4343E.asm (unresolved).
bool execute_unresolved_c4_c4343e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4343E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4343E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4343E.asm:9 END_STACK_VARS
    case 0xC43440: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4343E.asm:9 END_STACK_VARS
    case 0xC43441: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4343E.asm:9 END_STACK_VARS
    case 0xC43442: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4343E.asm:9 END_STACK_VARS
    case 0xC43443: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4343E.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC43443.
    case 0xC43445: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4343E.asm:9 END_STACK_VARS
    case 0xC43446: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4343E.asm:9 END_STACK_VARS
    case 0xC43447: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:10 TAX
    case 0xC43448: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:11 DEC
    case 0xC43449: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:12 STA @VIRTUAL02
    case 0xC4344A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:13 LOADINT32 3600, @VIRTUAL0A
    case 0xC4344C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000E10, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:13 LOADINT32 3600, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4344C.
    case 0xC4344E: cpu.execute_instruction<0x0E>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4343E.asm:13 LOADINT32 3600, @VIRTUAL0A
    case 0xC4344F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:13 LOADINT32 3600, @VIRTUAL0A
    case 0xC43451: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:13 LOADINT32 3600, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43451.
    case 0xC43453: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4343E.asm:13 LOADINT32 3600, @VIRTUAL0A
    case 0xC43454: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:230 LDA .LOWORD(ptr)
    // Macro caller: src/unknown/C4/C4343E.asm:14 LOADPTRPTR TIMER, @VIRTUAL06
    case 0xC43456: cpu.execute_instruction<0xAD>(0x0000A7, 3); return true;
    // include/macros.asm:231 STA var
    // Macro caller: src/unknown/C4/C4343E.asm:14 LOADPTRPTR TIMER, @VIRTUAL06
    case 0xC43459: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:232 LDA .LOWORD(ptr)+2
    // Macro caller: src/unknown/C4/C4343E.asm:14 LOADPTRPTR TIMER, @VIRTUAL06
    case 0xC4345B: cpu.execute_instruction<0xAD>(0x0000A9, 3); return true;
    // include/macros.asm:233 STA var+2
    // Macro caller: src/unknown/C4/C4343E.asm:14 LOADPTRPTR TIMER, @VIRTUAL06
    case 0xC4345E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4343E.asm:15 JSL DIVISION32
    case 0xC43460: cpu.execute_instruction<0x22>(0xC090FF, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:16 LOADINT32 60000, @VIRTUAL0A
    case 0xC43464: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000060, 2); else cpu.execute_instruction<0xA9>(0x00EA60, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:16 LOADINT32 60000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43464.
    case 0xC43466: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4343E.asm:16 LOADINT32 60000, @VIRTUAL0A
    case 0xC43467: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:16 LOADINT32 60000, @VIRTUAL0A
    case 0xC43469: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:16 LOADINT32 60000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43469.
    case 0xC4346B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4343E.asm:16 LOADINT32 60000, @VIRTUAL0A
    case 0xC4346C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4343E.asm:17 CLC
    case 0xC4346E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:18 LDA @VIRTUAL0A
    case 0xC4346F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C4/C4343E.asm:19 SBC @VIRTUAL06
    case 0xC43471: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C4/C4343E.asm:20 LDA @VIRTUAL0A+2
    case 0xC43473: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C4/C4343E.asm:21 SBC @VIRTUAL06+2
    case 0xC43475: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C4343E.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC43477: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C4343E.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC43479: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C4343E.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC4347B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C4343E.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC4347D: cpu.execute_instruction<0x30>(0x000006, 2); return true;
    // src/unknown/C4/C4343E.asm:23 LDA @VIRTUAL06
    case 0xC4347F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C4/C4343E.asm:24 STA @LOCAL02
    case 0xC43481: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:25 BRA @UNKNOWN3
    case 0xC43483: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C4343E.asm:27 LDA #59999
    case 0xC43485: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005F, 2); else cpu.execute_instruction<0xA9>(0x00EA5F, 3); return true;
    // src/unknown/C4/C4343E.asm:27 LDA #59999
    // Overlapping static entry reached from 0xC43485.
    case 0xC43487: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:28 STA @LOCAL02
    case 0xC43488: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:30 LDA @VIRTUAL02
    case 0xC4348A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4343E.asm:31 ASL
    case 0xC4348C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:32 ASL
    case 0xC4348D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:33 ASL
    case 0xC4348E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:41 TAX
    case 0xC4348F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:42 LDA @LOCAL02
    case 0xC43490: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:43 STA GAME_STATE + game_state::saved_photo_states,X
    case 0xC43492: cpu.execute_instruction<0x9D>(0x0098C9, 3); return true;
    // src/unknown/C4/C4343E.asm:45 LDY #0
    case 0xC43495: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4343E.asm:45 LDY #0
    // Overlapping static entry reached from 0xC43495.
    case 0xC43497: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4343E.asm:46 STY @LOCAL01
    case 0xC43498: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C4343E.asm:47 JMP @UNKNOWN10
    case 0xC4349A: cpu.execute_instruction<0x4C>(0x003542, 3); return true;
    // src/unknown/C4/C4343E.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC4349D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4343E.asm:50 TYA
    case 0xC4349F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:51 CLC
    case 0xC434A0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:52 ADC #.LOWORD(GAME_STATE)
    case 0xC434A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F5, 2); else cpu.execute_instruction<0x69>(0x0097F5, 3); return true;
    // src/unknown/C4/C4343E.asm:52 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC434A1.
    case 0xC434A3: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // src/unknown/C4/C4343E.asm:53 STA @LOCAL02
    case 0xC434A4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:53 STA @LOCAL02
    // Overlapping static entry reached from 0xC434A3.
    case 0xC434A5: cpu.execute_instruction<0x12>(0x000018, 2); return true;
    // src/unknown/C4/C4343E.asm:54 CLC
    case 0xC434A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:55 ADC #game_state::unknown96
    case 0xC434A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000096, 2); else cpu.execute_instruction<0x69>(0x000096, 3); return true;
    // src/unknown/C4/C4343E.asm:55 ADC #game_state::unknown96
    // Overlapping static entry reached from 0xC434A7.
    case 0xC434A9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4343E.asm:56 TAX
    case 0xC434AA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:57 STX @LOCAL00
    case 0xC434AB: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:58 LDA __BSS_START__,X
    case 0xC434AD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4343E.asm:59 AND #$00FF
    case 0xC434B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4343E.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC434B0.
    case 0xC434B2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4343E.asm:60 BNE @UNKNOWN5
    case 0xC434B3: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:61 STY @VIRTUAL04
    case 0xC434B5: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C4343E.asm:62 LDA @VIRTUAL02
    case 0xC434B7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4343E.asm:63 ASL
    case 0xC434B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:64 ASL
    case 0xC434BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:65 ASL
    case 0xC434BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:66 CLC
    case 0xC434BC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:76 ADC @VIRTUAL04
    case 0xC434BD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4343E.asm:77 TAX
    case 0xC434BF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC434C0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4343E.asm:79 STZ GAME_STATE + game_state::saved_photo_states + photo_state::party,X
    case 0xC434C2: cpu.execute_instruction<0x9E>(0x0098CB, 3); return true;
    // src/unknown/C4/C4343E.asm:80 BRA @UNKNOWN9
    case 0xC434C5: cpu.execute_instruction<0x80>(0x000078, 2); return true;
    // src/unknown/C4/C4343E.asm:84 LDA @LOCAL02
    case 0xC434C7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:85 TAX
    case 0xC434C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:86 LDA __BSS_START__+game_state::player_controlled_party_members,X
    case 0xC434CA: cpu.execute_instruction<0xBD>(0x00009C, 3); return true;
    // src/unknown/C4/C4343E.asm:87 AND #$00FF
    case 0xC434CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4343E.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC434CD.
    case 0xC434CF: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C4343E.asm:88 LDY #.SIZEOF(char_struct)
    case 0xC434D0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C4/C4343E.asm:88 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC434D0.
    case 0xC434D2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4343E.asm:89 JSL MULT168
    case 0xC434D3: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C4343E.asm:90 CLC
    case 0xC434D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:91 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC434D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C4/C4343E.asm:91 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC434D8.
    case 0xC434DA: cpu.execute_instruction<0x99>(0x001285, 3); return true;
    // src/unknown/C4/C4343E.asm:92 STA @LOCAL02
    case 0xC434DB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:93 STA CURRENT_PARTY_MEMBER_TICK
    case 0xC434DD: cpu.execute_instruction<0x8D>(0x004DC6, 3); return true;
    // src/unknown/C4/C4343E.asm:94 LDX @LOCAL00
    case 0xC434E0: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:95 LDA __BSS_START__,X
    case 0xC434E2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4343E.asm:96 AND #$00FF
    case 0xC434E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4343E.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC434E5.
    case 0xC434E7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4343E.asm:97 TAX
    case 0xC434E8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:98 STX @LOCAL00
    case 0xC434E9: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:99 LDA @LOCAL02
    case 0xC434EB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:100 TAX
    case 0xC434ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:101 LDA a:char_struct::afflictions,X
    case 0xC434EE: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C4/C4343E.asm:102 AND #$00FF
    case 0xC434F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4343E.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC434F1.
    case 0xC434F3: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4343E.asm:103 CMP #STATUS_0::UNCONSCIOUS
    case 0xC434F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4343E.asm:103 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC434F4.
    case 0xC434F6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4343E.asm:104 BNE @UNKNOWN6
    case 0xC434F7: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C4/C4343E.asm:105 LDX @LOCAL00
    case 0xC434F9: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:106 TXA
    case 0xC434FB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:107 ORA #$0020
    case 0xC434FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000020, 2); else cpu.execute_instruction<0x09>(0x000020, 3); return true;
    // src/unknown/C4/C4343E.asm:107 ORA #$0020
    // Overlapping static entry reached from 0xC434FC.
    case 0xC434FE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4343E.asm:108 TAX
    case 0xC434FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:109 STX @LOCAL00
    case 0xC43500: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:110 BRA @UNKNOWN7
    case 0xC43502: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:112 CMP #STATUS_0::DIAMONDIZED
    case 0xC43504: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4343E.asm:112 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC43504.
    case 0xC43506: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4343E.asm:113 BNE @UNKNOWN7
    case 0xC43507: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C4/C4343E.asm:114 LDX @LOCAL00
    case 0xC43509: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:115 TXA
    case 0xC4350B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:116 ORA #$0040
    case 0xC4350C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000040, 2); else cpu.execute_instruction<0x09>(0x000040, 3); return true;
    // src/unknown/C4/C4343E.asm:116 ORA #$0040
    // Overlapping static entry reached from 0xC4350C.
    case 0xC4350E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4343E.asm:117 TAX
    case 0xC4350F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:118 STX @LOCAL00
    case 0xC43510: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:120 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC43512: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/unknown/C4/C4343E.asm:121 LDA a:char_struct::afflictions+STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC43515: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/unknown/C4/C4343E.asm:122 AND #$00FF
    case 0xC43518: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4343E.asm:122 AND #$00FF
    // Overlapping static entry reached from 0xC43518.
    case 0xC4351A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4343E.asm:123 CMP #STATUS_1::MUSHROOMIZED
    case 0xC4351B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4343E.asm:123 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC4351B.
    case 0xC4351D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4343E.asm:124 BNE @UNKNOWN8
    case 0xC4351E: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C4/C4343E.asm:125 LDX @LOCAL00
    case 0xC43520: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:126 TXA
    case 0xC43522: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:127 ORA #$0080
    case 0xC43523: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x000080, 3); return true;
    // src/unknown/C4/C4343E.asm:127 ORA #$0080
    // Overlapping static entry reached from 0xC43523.
    case 0xC43525: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4343E.asm:128 TAX
    case 0xC43526: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:129 STX @LOCAL00
    case 0xC43527: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:131 LDY @LOCAL01
    case 0xC43529: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C4343E.asm:132 STY @VIRTUAL04
    case 0xC4352B: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C4343E.asm:133 LDA @VIRTUAL02
    case 0xC4352D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4343E.asm:134 ASL
    case 0xC4352F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:135 ASL
    case 0xC43530: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:136 ASL
    case 0xC43531: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:137 CLC
    case 0xC43532: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:149 ADC @VIRTUAL04
    case 0xC43533: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4343E.asm:150 PHA
    case 0xC43535: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:151 LDX @LOCAL00
    case 0xC43536: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:152 TXA
    case 0xC43538: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:153 SEP #PROC_FLAGS::ACCUM8
    case 0xC43539: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4343E.asm:154 PLX
    case 0xC4353B: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:155 STA GAME_STATE + game_state::saved_photo_states + photo_state::party,X
    case 0xC4353C: cpu.execute_instruction<0x9D>(0x0098CB, 3); return true;
    // src/unknown/C4/C4343E.asm:158 INY
    case 0xC4353F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:159 STY @LOCAL01
    case 0xC43540: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C4343E.asm:161 CPY #6
    case 0xC43542: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C4/C4343E.asm:161 CPY #6
    // Overlapping static entry reached from 0xC43542.
    case 0xC43544: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4343E.asm:162 BCCL @UNKNOWN4
    case 0xC43545: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4343E.asm:162 BCCL @UNKNOWN4
    case 0xC43547: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4343E.asm:162 BCCL @UNKNOWN4
    case 0xC43549: cpu.execute_instruction<0x4C>(0x00349D, 3); return true;
    // src/unknown/C4/C4343E.asm:163 REP #PROC_FLAGS::ACCUM8
    case 0xC4354C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4343E.asm:164 END_C_FUNCTION
    case 0xC4354E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4343E.asm:164 END_C_FUNCTION
    case 0xC4354F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43568.asm (unresolved).
bool execute_unresolved_c4_c43568_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43568.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43568: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C43568.asm:5 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4356A: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C4/C43568.asm:6 JSL UNKNOWN_C2DB3F
    case 0xC4356E: cpu.execute_instruction<0x22>(0xC2DB3F, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43568.asm:7 END_C_FUNCTION
    case 0xC43572: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43573.asm (unresolved).
bool execute_unresolved_c4_c43573_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43573.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC43573: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43573.asm:11 END_STACK_VARS
    case 0xC43575: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43573.asm:11 END_STACK_VARS
    case 0xC43576: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43573.asm:11 END_STACK_VARS
    case 0xC43577: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43573.asm:11 END_STACK_VARS
    case 0xC43578: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43573.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC43578.
    case 0xC4357A: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43573.asm:11 END_STACK_VARS
    case 0xC4357B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43573.asm:11 END_STACK_VARS
    case 0xC4357C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:12 STA @LOCAL00
    case 0xC4357D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43573.asm:12 STA @LOCAL00
    // Overlapping static entry reached from 0xC4357A.
    case 0xC4357E: cpu.execute_instruction<0x0E>(0x00CAAD, 3); return true;
    // src/unknown/C4/C43573.asm:13 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC4357F: cpu.execute_instruction<0xAD>(0x0089CA, 3); return true;
    // src/unknown/C4/C43573.asm:13 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC4357E.
    case 0xC43581: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000C9, 2); else cpu.execute_instruction<0x89>(0x00FFC9, 3); return true;
    // src/unknown/C4/C43573.asm:14 CMP #.LOWORD(-1)
    case 0xC43582: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C43573.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC43581.
    case 0xC43583: cpu.execute_instruction<0xFF>(0x04F0FF, 4); return true;
    // src/unknown/C4/C43573.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC43582.
    case 0xC43584: cpu.execute_instruction<0xFF>(0x2204F0, 4); return true;
    // src/unknown/C4/C43573.asm:15 BEQ @UNKNOWN0
    case 0xC43585: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C43573.asm:19 JSR UNKNOWN_C3E6F8
    case 0xC43587: cpu.execute_instruction<0x22>(0xC3E6F8, 4); return true;
    // src/unknown/C4/C43573.asm:19 JSR UNKNOWN_C3E6F8
    // Overlapping static entry reached from 0xC43584.
    case 0xC43588: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:19 JSR UNKNOWN_C3E6F8
    // Overlapping static entry reached from 0xC43588.
    case 0xC43589: cpu.execute_instruction<0xE6>(0x0000C3, 2); return true;
    // src/unknown/C4/C43573.asm:22 LDA @LOCAL00
    case 0xC4358B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43573.asm:23 STA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC4358D: cpu.execute_instruction<0x8D>(0x0089CA, 3); return true;
    // src/unknown/C4/C43573.asm:25 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC43590: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C4/C43573.asm:26 LDA @LOCAL00
    case 0xC43594: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/unknown/C4/C43573.asm:28 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC43596: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/unknown/C4/C43573.asm:28 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC43598: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/unknown/C4/C43573.asm:28 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC43599: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/unknown/C4/C43573.asm:28 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC4359B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/unknown/C4/C43573.asm:28 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC4359C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C43573.asm:29 STA @VIRTUAL02
    case 0xC4359E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43573.asm:30 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC435A0: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C4/C43573.asm:31 AND #$00FF
    case 0xC435A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43573.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC435A3.
    case 0xC435A5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/unknown/C4/C43573.asm:32 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC435A6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/unknown/C4/C43573.asm:32 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC435A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/unknown/C4/C43573.asm:32 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC435A9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/unknown/C4/C43573.asm:32 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC435AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/unknown/C4/C43573.asm:32 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC435AC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C43573.asm:33 PHA
    case 0xC435AE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:34 ASL
    case 0xC435AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:35 PLA
    case 0xC435B0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:36 ROR
    case 0xC435B1: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:37 STA @VIRTUAL04
    case 0xC435B2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C43573.asm:38 LDA #16
    case 0xC435B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C43573.asm:38 LDA #16
    // Overlapping static entry reached from 0xC435B4.
    case 0xC435B6: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C43573.asm:39 SEC
    case 0xC435B7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:40 SBC @VIRTUAL04
    case 0xC435B8: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C4/C43573.asm:41 CLC
    case 0xC435BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:42 ADC @VIRTUAL02
    case 0xC435BB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C43573.asm:43 ASL
    case 0xC435BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:44 CLC
    case 0xC435BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:50 ADC #.LOWORD(BG2_BUFFER) + ((ACTIVE_HPPP_WINDOW_Y_OFFSET + HPPP_WINDOW_HEIGHT) * 32) * 2
    case 0xC435BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007E, 2); else cpu.execute_instruction<0x69>(0x00847E, 3); return true;
    // src/unknown/C4/C43573.asm:50 ADC #.LOWORD(BG2_BUFFER) + ((ACTIVE_HPPP_WINDOW_Y_OFFSET + HPPP_WINDOW_HEIGHT) * 32) * 2
    // Overlapping static entry reached from 0xC435BF.
    case 0xC435C1: cpu.execute_instruction<0x84>(0x0000AA, 2); return true;
    // src/unknown/C4/C43573.asm:52 TAX
    case 0xC435C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:53 LDA #7
    case 0xC435C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C4/C43573.asm:53 LDA #7
    // Overlapping static entry reached from 0xC435C3.
    case 0xC435C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C43573.asm:54 STA @LOCAL00
    case 0xC435C6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43573.asm:55 BRA @UNKNOWN2
    case 0xC435C8: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C43573.asm:57 LDA #0
    case 0xC435CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C43573.asm:57 LDA #0
    // Overlapping static entry reached from 0xC435CA.
    case 0xC435CC: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C43573.asm:58 STA __BSS_START__,X
    case 0xC435CD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C43573.asm:59 INX
    case 0xC435D0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:60 INX
    case 0xC435D1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:61 LDA @LOCAL00
    case 0xC435D2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43573.asm:62 DEC
    case 0xC435D4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:63 STA @LOCAL00
    case 0xC435D5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43573.asm:65 BNE @UNKNOWN1
    case 0xC435D7: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/unknown/C4/C43573.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC435D9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43573.asm:67 LDA #1
    case 0xC435DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C43573.asm:68 STA REDRAW_ALL_WINDOWS
    case 0xC435DD: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/unknown/C4/C43573.asm:68 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC435DB.
    case 0xC435DE: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/unknown/C4/C43573.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC435E0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43573.asm:70 END_C_FUNCTION
    case 0xC435E2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43573.asm:70 END_C_FUNCTION
    case 0xC435E3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43573_redirect.asm (unresolved).
bool execute_unresolved_c4_c43573_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43573_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DDCC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C43573_redirect.asm:5 JSR UNKNOWN_C43573
    case 0xC1DDCE: cpu.execute_instruction<0x22>(0xC43573, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43573_redirect.asm:6 END_C_FUNCTION
    case 0xC1DDD2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C435E4.asm (unresolved).
bool execute_unresolved_c4_c435e4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C435E4.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC435E4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C435E4.asm:10 END_STACK_VARS
    case 0xC435E6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C435E4.asm:10 END_STACK_VARS
    case 0xC435E7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C435E4.asm:10 END_STACK_VARS
    case 0xC435E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C435E4.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC435E8.
    case 0xC435EA: cpu.execute_instruction<0xFF>(0xCEAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C435E4.asm:10 END_STACK_VARS
    case 0xC435EB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C435E4.asm:11 LDA CURRENT_FLASHING_ROW
    case 0xC435EC: cpu.execute_instruction<0xAD>(0x0089CE, 3); return true;
    // src/unknown/C4/C435E4.asm:11 LDA CURRENT_FLASHING_ROW
    // Overlapping static entry reached from 0xC435EA.
    case 0xC435EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000C9, 2); else cpu.execute_instruction<0x89>(0x00FFC9, 3); return true;
    // src/unknown/C4/C435E4.asm:12 CMP #.LOWORD(-1)
    case 0xC435EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C435E4.asm:12 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC435EE.
    case 0xC435F0: cpu.execute_instruction<0xFF>(0x5FF0FF, 4); return true;
    // src/unknown/C4/C435E4.asm:12 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC435EF.
    case 0xC435F1: cpu.execute_instruction<0xFF>(0xAD5FF0, 4); return true;
    // src/unknown/C4/C435E4.asm:13 BEQ @UNKNOWN6
    case 0xC435F2: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/unknown/C4/C435E4.asm:14 LDA CURRENT_FLASHING_ROW
    case 0xC435F4: cpu.execute_instruction<0xAD>(0x0089CE, 3); return true;
    // src/unknown/C4/C435E4.asm:14 LDA CURRENT_FLASHING_ROW
    // Overlapping static entry reached from 0xC435F1.
    case 0xC435F5: cpu.execute_instruction<0xCE>(0x00F089, 3); return true;
    // src/unknown/C4/C435E4.asm:15 BEQ @UNKNOWN0
    case 0xC435F7: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C435E4.asm:15 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC435F5.
    case 0xC435F8: cpu.execute_instruction<0x05>(0x0000AE, 2); return true;
    // src/unknown/C4/C435E4.asm:16 LDX NUM_BATTLERS_IN_BACK_ROW
    case 0xC435F9: cpu.execute_instruction<0xAE>(0x00AD58, 3); return true;
    // src/unknown/C4/C435E4.asm:16 LDX NUM_BATTLERS_IN_BACK_ROW
    // Overlapping static entry reached from 0xC435F8.
    case 0xC435FA: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C4/C435E4.asm:16 LDX NUM_BATTLERS_IN_BACK_ROW
    // Overlapping static entry reached from 0xC435FA.
    case 0xC435FB: cpu.execute_instruction<0xAD>(0x000380, 3); return true;
    // src/unknown/C4/C435E4.asm:17 BRA @UNKNOWN1
    case 0xC435FC: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C435E4.asm:19 LDX NUM_BATTLERS_IN_FRONT_ROW
    case 0xC435FE: cpu.execute_instruction<0xAE>(0x00AD56, 3); return true;
    // src/unknown/C4/C435E4.asm:21 STX @VIRTUAL02
    case 0xC43601: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C435E4.asm:22 LDX #0
    case 0xC43603: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C435E4.asm:22 LDX #0
    // Overlapping static entry reached from 0xC43603.
    case 0xC43605: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C435E4.asm:23 STX @LOCAL00
    case 0xC43606: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C435E4.asm:24 BRA @UNKNOWN5
    case 0xC43608: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/unknown/C4/C435E4.asm:26 LDA CURRENT_FLASHING_ROW
    case 0xC4360A: cpu.execute_instruction<0xAD>(0x0089CE, 3); return true;
    // src/unknown/C4/C435E4.asm:27 BEQ @UNKNOWN3
    case 0xC4360D: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C4/C435E4.asm:28 LDA BACK_ROW_BATTLERS,X
    case 0xC4360F: cpu.execute_instruction<0xBD>(0x00AD82, 3); return true;
    // src/unknown/C4/C435E4.asm:29 AND #$00FF
    case 0xC43612: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C435E4.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC43612.
    case 0xC43614: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C435E4.asm:30 LDY #.SIZEOF(battler)
    case 0xC43615: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C4/C435E4.asm:30 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC43615.
    case 0xC43617: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C435E4.asm:31 JSL MULT168
    case 0xC43618: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C435E4.asm:32 TAX
    case 0xC4361C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C435E4.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC4361D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C435E4.asm:34 STZ BATTLERS_TABLE + battler::unknown74,X
    case 0xC4361F: cpu.execute_instruction<0x9E>(0x009FF6, 3); return true;
    // src/unknown/C4/C435E4.asm:35 BRA @UNKNOWN4
    case 0xC43622: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C4/C435E4.asm:38 LDA FRONT_ROW_BATTLERS,X
    case 0xC43624: cpu.execute_instruction<0xBD>(0x00AD7A, 3); return true;
    // src/unknown/C4/C435E4.asm:39 AND #$00FF
    case 0xC43627: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C435E4.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC43627.
    case 0xC43629: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C435E4.asm:40 LDY #.SIZEOF(battler)
    case 0xC4362A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C4/C435E4.asm:40 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC4362A.
    case 0xC4362C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C435E4.asm:41 JSL MULT168
    case 0xC4362D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C435E4.asm:42 TAX
    case 0xC43631: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C435E4.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC43632: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C435E4.asm:44 STZ BATTLERS_TABLE + battler::unknown74,X
    case 0xC43634: cpu.execute_instruction<0x9E>(0x009FF6, 3); return true;
    // src/unknown/C4/C435E4.asm:46 LDX @LOCAL00
    case 0xC43637: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C435E4.asm:47 INX
    case 0xC43639: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C435E4.asm:48 STX @LOCAL00
    case 0xC4363A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C435E4.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC4363C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C435E4.asm:51 TXA
    case 0xC4363E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C435E4.asm:52 CMP @VIRTUAL02
    case 0xC4363F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C435E4.asm:53 BCC @UNKNOWN2
    case 0xC43641: cpu.execute_instruction<0x90>(0x0000C7, 2); return true;
    // src/unknown/C4/C435E4.asm:54 STZ ENEMY_TARGETTING_FLASHING
    case 0xC43643: cpu.execute_instruction<0x9C>(0x00ADA2, 3); return true;
    // src/unknown/C4/C435E4.asm:55 LDA #.LOWORD(-1)
    case 0xC43646: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C435E4.asm:55 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC43646.
    case 0xC43648: cpu.execute_instruction<0xFF>(0x89CE8D, 4); return true;
    // src/unknown/C4/C435E4.asm:56 STA CURRENT_FLASHING_ROW
    case 0xC43649: cpu.execute_instruction<0x8D>(0x0089CE, 3); return true;
    // src/unknown/C4/C435E4.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC4364C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C435E4.asm:58 LDA #1
    case 0xC4364E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C435E4.asm:59 STA REDRAW_ALL_WINDOWS
    case 0xC43650: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/unknown/C4/C435E4.asm:59 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC4364E.
    case 0xC43651: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/unknown/C4/C435E4.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xC43653: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C435E4.asm:62 END_C_FUNCTION
    case 0xC43655: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C435E4.asm:62 END_C_FUNCTION
    case 0xC43656: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43657.asm (unresolved).
bool execute_unresolved_c4_c43657_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43657.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC43657: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43657.asm:11 END_STACK_VARS
    case 0xC43659: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43657.asm:11 END_STACK_VARS
    case 0xC4365A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43657.asm:11 END_STACK_VARS
    case 0xC4365B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43657.asm:11 END_STACK_VARS
    case 0xC4365C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43657.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4365C.
    case 0xC4365E: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43657.asm:11 END_STACK_VARS
    case 0xC4365F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43657.asm:11 END_STACK_VARS
    case 0xC43660: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:12 TAX
    case 0xC43661: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:13 STX @LOCAL00
    case 0xC43662: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C43657.asm:14 LDA CURRENT_FLASHING_ROW
    case 0xC43664: cpu.execute_instruction<0xAD>(0x0089CE, 3); return true;
    // src/unknown/C4/C43657.asm:15 CMP #.LOWORD(-1)
    case 0xC43667: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C43657.asm:15 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC43667.
    case 0xC43669: cpu.execute_instruction<0xFF>(0x2204F0, 4); return true;
    // src/unknown/C4/C43657.asm:16 BEQ @UNKNOWN0
    case 0xC4366A: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C43657.asm:20 JSL UNKNOWN_C435E4
    case 0xC4366C: cpu.execute_instruction<0x22>(0xC435E4, 4); return true;
    // src/unknown/C4/C43657.asm:20 JSL UNKNOWN_C435E4
    // Overlapping static entry reached from 0xC43669.
    case 0xC4366D: cpu.execute_instruction<0xE4>(0x000035, 2); return true;
    // src/unknown/C4/C43657.asm:20 JSL UNKNOWN_C435E4
    // Overlapping static entry reached from 0xC4366D.
    case 0xC4366F: cpu.execute_instruction<0xC4>(0x0000A6, 2); return true;
    // src/unknown/C4/C43657.asm:23 LDX @LOCAL00
    case 0xC43670: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C43657.asm:23 LDX @LOCAL00
    // Overlapping static entry reached from 0xC4366F.
    case 0xC43671: cpu.execute_instruction<0x0E>(0x00CE8E, 3); return true;
    // src/unknown/C4/C43657.asm:24 STX CURRENT_FLASHING_ROW
    case 0xC43672: cpu.execute_instruction<0x8E>(0x0089CE, 3); return true;
    // src/unknown/C4/C43657.asm:24 STX CURRENT_FLASHING_ROW
    // Overlapping static entry reached from 0xC43671.
    case 0xC43674: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AD, 2); else cpu.execute_instruction<0x89>(0x00CEAD, 3); return true;
    // src/unknown/C4/C43657.asm:25 LDA CURRENT_FLASHING_ROW
    case 0xC43675: cpu.execute_instruction<0xAD>(0x0089CE, 3); return true;
    // src/unknown/C4/C43657.asm:25 LDA CURRENT_FLASHING_ROW
    // Overlapping static entry reached from 0xC43674.
    case 0xC43676: cpu.execute_instruction<0xCE>(0x00F089, 3); return true;
    // src/unknown/C4/C43657.asm:25 LDA CURRENT_FLASHING_ROW
    // Overlapping static entry reached from 0xC43674.
    case 0xC43677: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000F0, 2); else cpu.execute_instruction<0x89>(0x0005F0, 3); return true;
    // src/unknown/C4/C43657.asm:26 BEQ @UNKNOWN1
    case 0xC43678: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C43657.asm:26 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC43677.
    case 0xC43679: cpu.execute_instruction<0x05>(0x0000AD, 2); return true;
    // src/unknown/C4/C43657.asm:27 LDA NUM_BATTLERS_IN_BACK_ROW
    case 0xC4367A: cpu.execute_instruction<0xAD>(0x00AD58, 3); return true;
    // src/unknown/C4/C43657.asm:27 LDA NUM_BATTLERS_IN_BACK_ROW
    // Overlapping static entry reached from 0xC43679.
    case 0xC4367B: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:27 LDA NUM_BATTLERS_IN_BACK_ROW
    // Overlapping static entry reached from 0xC4367B.
    case 0xC4367C: cpu.execute_instruction<0xAD>(0x000380, 3); return true;
    // src/unknown/C4/C43657.asm:28 BRA @UNKNOWN2
    case 0xC4367D: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C43657.asm:30 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC4367F: cpu.execute_instruction<0xAD>(0x00AD56, 3); return true;
    // src/unknown/C4/C43657.asm:32 STA @VIRTUAL02
    case 0xC43682: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43657.asm:33 LDX #0
    case 0xC43684: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C43657.asm:33 LDX #0
    // Overlapping static entry reached from 0xC43684.
    case 0xC43686: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C43657.asm:34 STX @LOCAL00
    case 0xC43687: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C43657.asm:35 BRA @UNKNOWN6
    case 0xC43689: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/unknown/C4/C43657.asm:37 LDA CURRENT_FLASHING_ROW
    case 0xC4368B: cpu.execute_instruction<0xAD>(0x0089CE, 3); return true;
    // src/unknown/C4/C43657.asm:38 BEQ @UNKNOWN4
    case 0xC4368E: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/unknown/C4/C43657.asm:39 LDA BACK_ROW_BATTLERS,X
    case 0xC43690: cpu.execute_instruction<0xBD>(0x00AD82, 3); return true;
    // src/unknown/C4/C43657.asm:40 AND #$00FF
    case 0xC43693: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43657.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC43693.
    case 0xC43695: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C43657.asm:41 LDY #.SIZEOF(battler)
    case 0xC43696: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C4/C43657.asm:41 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC43696.
    case 0xC43698: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43657.asm:42 JSL MULT168
    case 0xC43699: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C43657.asm:43 TAX
    case 0xC4369D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC4369E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43657.asm:45 LDA #1
    case 0xC436A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/unknown/C4/C43657.asm:46 STA BATTLERS_TABLE + battler::unknown74,X
    case 0xC436A2: cpu.execute_instruction<0x9D>(0x009FF6, 3); return true;
    // src/unknown/C4/C43657.asm:46 STA BATTLERS_TABLE + battler::unknown74,X
    // Overlapping static entry reached from 0xC436A0.
    case 0xC436A3: cpu.execute_instruction<0xF6>(0x00009F, 2); return true;
    // src/unknown/C4/C43657.asm:47 BRA @UNKNOWN5
    case 0xC436A5: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C4/C43657.asm:50 LDA FRONT_ROW_BATTLERS,X
    case 0xC436A7: cpu.execute_instruction<0xBD>(0x00AD7A, 3); return true;
    // src/unknown/C4/C43657.asm:51 AND #$00FF
    case 0xC436AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43657.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC436AA.
    case 0xC436AC: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C43657.asm:52 LDY #.SIZEOF(battler)
    case 0xC436AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C4/C43657.asm:52 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC436AD.
    case 0xC436AF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43657.asm:53 JSL MULT168
    case 0xC436B0: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C43657.asm:54 TAX
    case 0xC436B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC436B5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43657.asm:56 LDA #1
    case 0xC436B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/unknown/C4/C43657.asm:57 STA BATTLERS_TABLE + battler::unknown74,X
    case 0xC436B9: cpu.execute_instruction<0x9D>(0x009FF6, 3); return true;
    // src/unknown/C4/C43657.asm:57 STA BATTLERS_TABLE + battler::unknown74,X
    // Overlapping static entry reached from 0xC436B7.
    case 0xC436BA: cpu.execute_instruction<0xF6>(0x00009F, 2); return true;
    // src/unknown/C4/C43657.asm:59 LDX @LOCAL00
    case 0xC436BC: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C43657.asm:60 INX
    case 0xC436BE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:61 STX @LOCAL00
    case 0xC436BF: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C43657.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC436C1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C43657.asm:64 TXA
    case 0xC436C3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:65 CMP @VIRTUAL02
    case 0xC436C4: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C43657.asm:66 BCC @UNKNOWN3
    case 0xC436C6: cpu.execute_instruction<0x90>(0x0000C3, 2); return true;
    // src/unknown/C4/C43657.asm:67 LDA #1
    case 0xC436C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C43657.asm:67 LDA #1
    // Overlapping static entry reached from 0xC436C8.
    case 0xC436CA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C43657.asm:68 STA ENEMY_TARGETTING_FLASHING
    case 0xC436CB: cpu.execute_instruction<0x8D>(0x00ADA2, 3); return true;
    // src/unknown/C4/C43657.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC436CE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43657.asm:70 STA REDRAW_ALL_WINDOWS
    case 0xC436D0: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/unknown/C4/C43657.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC436D3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43657.asm:72 END_C_FUNCTION
    case 0xC436D5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43657.asm:72 END_C_FUNCTION
    case 0xC436D6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C436D7.asm (unresolved).
bool execute_unresolved_c4_c436d7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C436D7.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC436D7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC436D9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC436DA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC436DB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC436DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC436DC.
    case 0xC436DE: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC436DF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC436E0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:14 STX @LOCAL02
    case 0xC436E1: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C436D7.asm:14 STX @LOCAL02
    // Overlapping static entry reached from 0xC436DE.
    case 0xC436E2: cpu.execute_instruction<0x12>(0x00000A, 2); return true;
    // src/unknown/C4/C436D7.asm:15 ASL
    case 0xC436E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:16 TAX
    case 0xC436E4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:17 LDY OPEN_WINDOW_TABLE,X
    case 0xC436E5: cpu.execute_instruction<0xBC>(0x0088E4, 3); return true;
    // src/unknown/C4/C436D7.asm:18 STY @LOCAL01
    case 0xC436E8: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C436D7.asm:19 TYA
    case 0xC436EA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:20 LDY #.SIZEOF(window_stats)
    case 0xC436EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C436D7.asm:20 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC436EB.
    case 0xC436ED: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C436D7.asm:21 JSL MULT168
    case 0xC436EE: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C436D7.asm:22 PHA
    case 0xC436F2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:23 TAX
    case 0xC436F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:24 LDY WINDOW_STATS+window_stats::width,X
    case 0xC436F4: cpu.execute_instruction<0xBC>(0x00865A, 3); return true;
    // src/unknown/C4/C436D7.asm:25 LDX @LOCAL02
    case 0xC436F7: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C436D7.asm:26 TXA
    case 0xC436F9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:27 JSL MULT16
    case 0xC436FA: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C436D7.asm:28 ASL
    case 0xC436FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:29 ASL
    case 0xC436FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:30 PLX
    case 0xC43700: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:31 CLC
    case 0xC43701: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:32 ADC WINDOW_STATS+window_stats::tilemap_address,X
    case 0xC43702: cpu.execute_instruction<0x7D>(0x008685, 3); return true;
    // src/unknown/C4/C436D7.asm:33 TAX
    case 0xC43705: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:34 STX @LOCAL00
    case 0xC43706: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C436D7.asm:35 LDA #0
    case 0xC43708: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C436D7.asm:35 LDA #0
    // Overlapping static entry reached from 0xC43708.
    case 0xC4370A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C436D7.asm:36 STA @LOCAL02
    case 0xC4370B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C436D7.asm:37 BRA @UNKNOWN1
    case 0xC4370D: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C4/C436D7.asm:39 LDA #64
    case 0xC4370F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C4/C436D7.asm:39 LDA #64
    // Overlapping static entry reached from 0xC4370F.
    case 0xC43711: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C4/C436D7.asm:40 LDX @LOCAL00
    case 0xC43712: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C436D7.asm:41 STA __BSS_START__,X
    case 0xC43714: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C436D7.asm:42 INX
    case 0xC43717: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:43 INX
    case 0xC43718: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:44 STX @LOCAL00
    case 0xC43719: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C436D7.asm:45 LDA @LOCAL02
    case 0xC4371B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C436D7.asm:46 INC
    case 0xC4371D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:47 STA @LOCAL02
    case 0xC4371E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C436D7.asm:49 LDY @LOCAL01
    case 0xC43720: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C436D7.asm:50 TYA
    case 0xC43722: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:51 LDY #.SIZEOF(window_stats)
    case 0xC43723: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C436D7.asm:51 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC43723.
    case 0xC43725: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C436D7.asm:52 JSL MULT168
    case 0xC43726: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C436D7.asm:53 TAX
    case 0xC4372A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:54 LDA WINDOW_STATS+window_stats::width,X
    case 0xC4372B: cpu.execute_instruction<0xBD>(0x00865A, 3); return true;
    // src/unknown/C4/C436D7.asm:55 ASL
    case 0xC4372E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:56 STA @VIRTUAL02
    case 0xC4372F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C436D7.asm:57 LDA @LOCAL02
    case 0xC43731: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C436D7.asm:58 CMP @VIRTUAL02
    case 0xC43733: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C436D7.asm:59 BNE @UNKNOWN0
    case 0xC43735: cpu.execute_instruction<0xD0>(0x0000D8, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C436D7.asm:60 END_C_FUNCTION
    case 0xC43737: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C436D7.asm:60 END_C_FUNCTION
    case 0xC43738: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43739.asm (unresolved).
bool execute_unresolved_c4_c43739_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43739.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43739: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43739.asm:9 END_STACK_VARS
    case 0xC4373B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43739.asm:9 END_STACK_VARS
    case 0xC4373C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43739.asm:9 END_STACK_VARS
    case 0xC4373D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43739.asm:9 END_STACK_VARS
    case 0xC4373E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43739.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4373E.
    case 0xC43740: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43739.asm:9 END_STACK_VARS
    case 0xC43741: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43739.asm:9 END_STACK_VARS
    case 0xC43742: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:10 STA @VIRTUAL02
    case 0xC43743: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43739.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC43740.
    case 0xC43744: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C43739.asm:11 STA @LOCAL02
    case 0xC43745: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C43739.asm:12 LDA @VIRTUAL02
    case 0xC43747: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C43739.asm:13 ASL
    case 0xC43749: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:14 TAX
    case 0xC4374A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:15 LDA OPEN_WINDOW_TABLE,X
    case 0xC4374B: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C43739.asm:16 STA @VIRTUAL04
    case 0xC4374E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C43739.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC43750: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C43739.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC43750.
    case 0xC43752: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43739.asm:18 JSL MULT168
    case 0xC43753: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C43739.asm:19 TAX
    case 0xC43757: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:20 LDY WINDOW_STATS+window_stats::width,X
    case 0xC43758: cpu.execute_instruction<0xBC>(0x00865A, 3); return true;
    // src/unknown/C4/C43739.asm:21 LDA WINDOW_STATS+window_stats::text_y,X
    case 0xC4375B: cpu.execute_instruction<0xBD>(0x008660, 3); return true;
    // src/unknown/C4/C43739.asm:22 JSL MULT16
    case 0xC4375E: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C43739.asm:23 ASL
    case 0xC43762: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:24 ASL
    case 0xC43763: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:25 CLC
    case 0xC43764: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:26 ADC WINDOW_STATS+window_stats::tilemap_address,X
    case 0xC43765: cpu.execute_instruction<0x7D>(0x008685, 3); return true;
    // src/unknown/C4/C43739.asm:27 TAY
    case 0xC43768: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:28 STY @LOCAL01
    case 0xC43769: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C43739.asm:29 LDX #0
    case 0xC4376B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C43739.asm:29 LDX #0
    // Overlapping static entry reached from 0xC4376B.
    case 0xC4376D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C43739.asm:30 STX @LOCAL00
    case 0xC4376E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C43739.asm:31 BRA @UNKNOWN1
    case 0xC43770: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C43739.asm:33 LDY @LOCAL01
    case 0xC43772: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C43739.asm:34 LDA __BSS_START__,Y
    case 0xC43774: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C43739.asm:35 INY
    case 0xC43777: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:36 INY
    case 0xC43778: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:37 STY @LOCAL01
    case 0xC43779: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C43739.asm:38 JSL FREE_TILE
    case 0xC4377B: cpu.execute_instruction<0x22>(0xC44AF7, 4); return true;
    // src/unknown/C4/C43739.asm:39 LDX @LOCAL00
    case 0xC4377F: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C43739.asm:40 INX
    case 0xC43781: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:41 STX @LOCAL00
    case 0xC43782: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C43739.asm:43 LDA @VIRTUAL04
    case 0xC43784: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C43739.asm:44 LDY #.SIZEOF(window_stats)
    case 0xC43786: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C43739.asm:44 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC43786.
    case 0xC43788: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43739.asm:45 JSL MULT168
    case 0xC43789: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C43739.asm:46 TAX
    case 0xC4378D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:47 LDA WINDOW_STATS+window_stats::width,X
    case 0xC4378E: cpu.execute_instruction<0xBD>(0x00865A, 3); return true;
    // src/unknown/C4/C43739.asm:48 ASL
    case 0xC43791: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:49 STA @VIRTUAL02
    case 0xC43792: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43739.asm:50 LDX @LOCAL00
    case 0xC43794: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C43739.asm:51 TXA
    case 0xC43796: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:52 CMP @VIRTUAL02
    case 0xC43797: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C43739.asm:53 BNE @UNKNOWN0
    case 0xC43799: cpu.execute_instruction<0xD0>(0x0000D7, 2); return true;
    // src/unknown/C4/C43739.asm:54 LDA @LOCAL02
    case 0xC4379B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C43739.asm:55 STA @VIRTUAL02
    case 0xC4379D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43739.asm:56 ASL
    case 0xC4379F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:57 TAX
    case 0xC437A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:58 LDA OPEN_WINDOW_TABLE,X
    case 0xC437A1: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C43739.asm:59 LDY #.SIZEOF(window_stats)
    case 0xC437A4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C43739.asm:59 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC437A4.
    case 0xC437A6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43739.asm:60 JSL MULT168
    case 0xC437A7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C43739.asm:61 TAX
    case 0xC437AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:62 LDA WINDOW_STATS+window_stats::text_y,X
    case 0xC437AC: cpu.execute_instruction<0xBD>(0x008660, 3); return true;
    // src/unknown/C4/C43739.asm:63 TAX
    case 0xC437AF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43739.asm:64 LDA @VIRTUAL02
    case 0xC437B0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C43739.asm:65 JSL UNKNOWN_C436D7
    case 0xC437B2: cpu.execute_instruction<0x22>(0xC436D7, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43739.asm:66 END_C_FUNCTION
    case 0xC437B6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43739.asm:66 END_C_FUNCTION
    case 0xC437B7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C437B8.asm (unresolved).
bool execute_unresolved_c4_c437b8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C437B8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC437B8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C437B8.asm:12 END_STACK_VARS
    case 0xC437BA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C437B8.asm:12 END_STACK_VARS
    case 0xC437BB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C437B8.asm:12 END_STACK_VARS
    case 0xC437BC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C437B8.asm:12 END_STACK_VARS
    case 0xC437BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C437B8.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC437BD.
    case 0xC437BF: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C437B8.asm:12 END_STACK_VARS
    case 0xC437C0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C437B8.asm:12 END_STACK_VARS
    case 0xC437C1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:13 STA @LOCAL05
    case 0xC437C2: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C437B8.asm:13 STA @LOCAL05
    // Overlapping static entry reached from 0xC437BF.
    case 0xC437C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:14 ASL
    case 0xC437C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:15 TAX
    case 0xC437C5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC437C6: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C437B8.asm:17 STA @LOCAL04
    case 0xC437C9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C437B8.asm:18 LDY #.SIZEOF(window_stats)
    case 0xC437CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C437B8.asm:18 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC437CB.
    case 0xC437CD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C437B8.asm:19 JSL MULT168
    case 0xC437CE: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C437B8.asm:20 TAX
    case 0xC437D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:21 LDA WINDOW_STATS+window_stats::tilemap_address,X
    case 0xC437D3: cpu.execute_instruction<0xBD>(0x008685, 3); return true;
    // src/unknown/C4/C437B8.asm:22 STA @LOCAL03
    case 0xC437D6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C437B8.asm:23 LDA WINDOW_STATS+window_stats::width,X
    case 0xC437D8: cpu.execute_instruction<0xBD>(0x00865A, 3); return true;
    // src/unknown/C4/C437B8.asm:24 ASL
    case 0xC437DB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:25 ASL
    case 0xC437DC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:26 STA @VIRTUAL02
    case 0xC437DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C437B8.asm:27 LDA @LOCAL03
    case 0xC437DF: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C437B8.asm:28 CLC
    case 0xC437E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:29 ADC @VIRTUAL02
    case 0xC437E2: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C437B8.asm:30 STA @VIRTUAL04
    case 0xC437E4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C437B8.asm:31 LDA @LOCAL03
    case 0xC437E6: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C437B8.asm:32 STA @VIRTUAL02
    case 0xC437E8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C437B8.asm:33 LDX @VIRTUAL02
    case 0xC437EA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C437B8.asm:34 STX @LOCAL02
    case 0xC437EC: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C437B8.asm:35 TAY
    case 0xC437EE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:36 STY @LOCAL03
    case 0xC437EF: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C437B8.asm:37 LDX #0
    case 0xC437F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C437B8.asm:37 LDX #0
    // Overlapping static entry reached from 0xC437F1.
    case 0xC437F3: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C437B8.asm:38 STX @LOCAL01
    case 0xC437F4: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C437B8.asm:39 BRA @UNKNOWN1
    case 0xC437F6: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C437B8.asm:41 LDY @LOCAL03
    case 0xC437F8: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C4/C437B8.asm:42 LDA __BSS_START__,Y
    case 0xC437FA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C437B8.asm:43 INY
    case 0xC437FD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:44 INY
    case 0xC437FE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:45 STY @LOCAL03
    case 0xC437FF: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C437B8.asm:46 JSL FREE_TILE
    case 0xC43801: cpu.execute_instruction<0x22>(0xC44AF7, 4); return true;
    // src/unknown/C4/C437B8.asm:47 LDX @LOCAL01
    case 0xC43805: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C437B8.asm:48 INX
    case 0xC43807: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:49 STX @LOCAL01
    case 0xC43808: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C437B8.asm:51 LDA @LOCAL04
    case 0xC4380A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C437B8.asm:52 LDY #.SIZEOF(window_stats)
    case 0xC4380C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C437B8.asm:52 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC4380C.
    case 0xC4380E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C437B8.asm:53 JSL MULT168
    case 0xC4380F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C437B8.asm:54 TAX
    case 0xC43813: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:55 LDA WINDOW_STATS+window_stats::width,X
    case 0xC43814: cpu.execute_instruction<0xBD>(0x00865A, 3); return true;
    // src/unknown/C4/C437B8.asm:56 ASL
    case 0xC43817: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:57 STA @VIRTUAL02
    case 0xC43818: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C437B8.asm:58 LDX @LOCAL01
    case 0xC4381A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C437B8.asm:59 TXA
    case 0xC4381C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:60 CMP @VIRTUAL02
    case 0xC4381D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C437B8.asm:61 BNE @UNKNOWN0
    case 0xC4381F: cpu.execute_instruction<0xD0>(0x0000D7, 2); return true;
    // src/unknown/C4/C437B8.asm:62 LDX #0
    case 0xC43821: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C437B8.asm:62 LDX #0
    // Overlapping static entry reached from 0xC43821.
    case 0xC43823: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C437B8.asm:63 STX @LOCAL03
    case 0xC43824: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C437B8.asm:64 BRA @UNKNOWN3
    case 0xC43826: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C4/C437B8.asm:66 LDX @VIRTUAL04
    case 0xC43828: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C437B8.asm:67 LDA __BSS_START__,X
    case 0xC4382A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C437B8.asm:68 LDX @LOCAL02
    case 0xC4382D: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C437B8.asm:69 STX @VIRTUAL02
    case 0xC4382F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C437B8.asm:70 STA __BSS_START__,X
    case 0xC43831: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C437B8.asm:71 INC @VIRTUAL04
    case 0xC43834: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C437B8.asm:72 INC @VIRTUAL04
    case 0xC43836: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C437B8.asm:73 INC @VIRTUAL02
    case 0xC43838: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C437B8.asm:74 INC @VIRTUAL02
    case 0xC4383A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C437B8.asm:75 LDA @VIRTUAL02
    case 0xC4383C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C437B8.asm:76 STA @LOCAL02
    case 0xC4383E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C437B8.asm:77 LDX @LOCAL03
    case 0xC43840: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C437B8.asm:78 INX
    case 0xC43842: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:79 STX @LOCAL03
    case 0xC43843: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C437B8.asm:81 LDA @LOCAL04
    case 0xC43845: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C437B8.asm:82 LDY #.SIZEOF(window_stats)
    case 0xC43847: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C437B8.asm:82 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC43847.
    case 0xC43849: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C437B8.asm:83 JSL MULT168
    case 0xC4384A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C437B8.asm:84 TAY
    case 0xC4384E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:85 LDA WINDOW_STATS+window_stats::height,Y
    case 0xC4384F: cpu.execute_instruction<0xB9>(0x00865C, 3); return true;
    // src/unknown/C4/C437B8.asm:86 STA @LOCAL00
    case 0xC43852: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C437B8.asm:87 LDA WINDOW_STATS+window_stats::width,Y
    case 0xC43854: cpu.execute_instruction<0xB9>(0x00865A, 3); return true;
    // src/unknown/C4/C437B8.asm:88 TAY
    case 0xC43857: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:89 LDA @LOCAL00
    case 0xC43858: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C437B8.asm:90 DEC
    case 0xC4385A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:91 DEC
    case 0xC4385B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:92 JSL MULT16
    case 0xC4385C: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C437B8.asm:93 STA @VIRTUAL02
    case 0xC43860: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C437B8.asm:94 TXA
    case 0xC43862: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:95 CMP @VIRTUAL02
    case 0xC43863: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C437B8.asm:96 BNE @UNKNOWN2
    case 0xC43865: cpu.execute_instruction<0xD0>(0x0000C1, 2); return true;
    // src/unknown/C4/C437B8.asm:97 LDA @LOCAL00
    case 0xC43867: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C437B8.asm:98 LSR
    case 0xC43869: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:99 TAX
    case 0xC4386A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:100 DEX
    case 0xC4386B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C437B8.asm:101 LDA @LOCAL05
    case 0xC4386C: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C437B8.asm:102 JSL UNKNOWN_C436D7
    case 0xC4386E: cpu.execute_instruction<0x22>(0xC436D7, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C437B8.asm:103 END_C_FUNCTION
    case 0xC43872: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C437B8.asm:103 END_C_FUNCTION
    case 0xC43873: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C437B8_redirect.asm (unresolved).
bool execute_unresolved_c4_c437b8_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C437B8_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10CAF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C437B8_redirect.asm:5 JSL UNKNOWN_C437B8
    case 0xC10CB1: cpu.execute_instruction<0x22>(0xC437B8, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C437B8_redirect.asm:6 END_C_FUNCTION
    case 0xC10CB5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43874.asm (unresolved).
bool execute_unresolved_c4_c43874_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43874.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC43874: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43874.asm:16 END_STACK_VARS
    case 0xC43876: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43874.asm:16 END_STACK_VARS
    case 0xC43877: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43874.asm:16 END_STACK_VARS
    case 0xC43878: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43874.asm:16 END_STACK_VARS
    case 0xC43879: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43874.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC43879.
    case 0xC4387B: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43874.asm:16 END_STACK_VARS
    case 0xC4387C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43874.asm:16 END_STACK_VARS
    case 0xC4387D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43874.asm:17 STY @VIRTUAL02
    case 0xC4387E: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C43874.asm:17 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC4387B.
    case 0xC4387F: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C4/C43874.asm:18 TXY
    case 0xC43880: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C43874.asm:19 STY @LOCAL01
    case 0xC43881: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C43874.asm:21 STA @LOCAL00
    case 0xC43883: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43874.asm:22 JSL UNKNOWN_C43CAA
    case 0xC43885: cpu.execute_instruction<0x22>(0xC43CAA, 4); return true;
    // src/unknown/C4/C43874.asm:23 LDA @LOCAL00
    case 0xC43889: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43874.asm:25 ASL
    case 0xC4388B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43874.asm:26 TAX
    case 0xC4388C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43874.asm:27 LDA OPEN_WINDOW_TABLE,X
    case 0xC4388D: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C43874.asm:28 LDY #.SIZEOF(window_stats)
    case 0xC43890: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C43874.asm:28 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC43890.
    case 0xC43892: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43874.asm:29 JSL MULT168
    case 0xC43893: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C43874.asm:30 TAX
    case 0xC43897: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43874.asm:31 LDY @LOCAL01
    case 0xC43898: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C43874.asm:32 TYA
    case 0xC4389A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C43874.asm:33 STA WINDOW_STATS + window_stats::text_x,X
    case 0xC4389B: cpu.execute_instruction<0x9D>(0x00865E, 3); return true;
    // src/unknown/C4/C43874.asm:34 LDA @VIRTUAL02
    case 0xC4389E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C43874.asm:35 STA WINDOW_STATS + window_stats::text_y,X
    case 0xC438A0: cpu.execute_instruction<0x9D>(0x008660, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43874.asm:36 END_C_FUNCTION
    case 0xC438A3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43874.asm:36 END_C_FUNCTION
    case 0xC438A4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C438A5.asm (unresolved).
bool execute_unresolved_c4_c438a5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C438A5.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC438A5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C438A5.asm:9 TXY
    case 0xC438A7: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C438A5.asm:10 TAX
    case 0xC438A8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C438A5.asm:11 LDA CURRENT_FOCUS_WINDOW
    case 0xC438A9: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C438A5.asm:15 JSL UNKNOWN_C43874
    case 0xC438AC: cpu.execute_instruction<0x22>(0xC43874, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C438A5.asm:17 END_C_FUNCTION
    case 0xC438B0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C438A5_redirect.asm (unresolved).
bool execute_unresolved_c4_c438a5_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C438A5_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10C72: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C438A5_redirect.asm:5 JSL UNKNOWN_C438A5
    case 0xC10C74: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C438A5_redirect.asm:6 END_C_FUNCTION
    case 0xC10C78: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43B15.asm (unresolved).
bool execute_unresolved_c4_c43b15_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43B15.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43B15: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43B15.asm:8 END_STACK_VARS
    case 0xC43B17: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43B15.asm:8 END_STACK_VARS
    case 0xC43B18: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43B15.asm:8 END_STACK_VARS
    case 0xC43B19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43B15.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC43B19.
    case 0xC43B1B: cpu.execute_instruction<0xFF>(0x58AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43B15.asm:8 END_STACK_VARS
    case 0xC43B1C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:9 LDA CURRENT_FOCUS_WINDOW
    case 0xC43B1D: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C43B15.asm:9 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC43B1B.
    case 0xC43B1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/unknown/C4/C43B15.asm:10 ASL
    case 0xC43B20: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:11 TAX
    case 0xC43B21: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:12 LDA OPEN_WINDOW_TABLE,X
    case 0xC43B22: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C43B15.asm:13 LDY #.SIZEOF(window_stats)
    case 0xC43B25: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C43B15.asm:13 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC43B25.
    case 0xC43B27: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43B15.asm:14 JSL MULT168
    case 0xC43B28: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C43B15.asm:15 CLC
    case 0xC43B2C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:16 ADC #.LOWORD(WINDOW_STATS)
    case 0xC43B2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C4/C43B15.asm:16 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC43B2D.
    case 0xC43B2F: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/unknown/C4/C43B15.asm:17 TAX
    case 0xC43B30: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:18 STX @LOCAL02
    case 0xC43B31: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C43B15.asm:19 LDA a:window_stats::curr_tile_attributes,X
    case 0xC43B33: cpu.execute_instruction<0xBD>(0x000013, 3); return true;
    // src/unknown/C4/C43B15.asm:20 STA @LOCAL01
    case 0xC43B36: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C43B15.asm:21 LDA a:window_stats::width,X
    case 0xC43B38: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C4/C43B15.asm:22 STA @VIRTUAL04
    case 0xC43B3B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C43B15.asm:23 LDY @VIRTUAL04
    case 0xC43B3D: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C4/C43B15.asm:24 LDA a:window_stats::text_y,X
    case 0xC43B3F: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/unknown/C4/C43B15.asm:25 JSL MULT16
    case 0xC43B42: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C43B15.asm:26 ASL
    case 0xC43B46: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:27 ASL
    case 0xC43B47: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:28 CLC
    case 0xC43B48: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:29 ADC a:window_stats::tilemap_address,X
    case 0xC43B49: cpu.execute_instruction<0x7D>(0x000035, 3); return true;
    // src/unknown/C4/C43B15.asm:30 TAY
    case 0xC43B4C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:31 LDA @VIRTUAL04
    case 0xC43B4D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C43B15.asm:32 DEC
    case 0xC43B4F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:33 STA @VIRTUAL02
    case 0xC43B50: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43B15.asm:34 STA @LOCAL00
    case 0xC43B52: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43B15.asm:35 BRA @UNKNOWN1
    case 0xC43B54: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C4/C43B15.asm:37 LDA @LOCAL00
    case 0xC43B56: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43B15.asm:38 STA @VIRTUAL02
    case 0xC43B58: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43B15.asm:39 DEC
    case 0xC43B5A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:40 STA @VIRTUAL02
    case 0xC43B5B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43B15.asm:41 STA @LOCAL00
    case 0xC43B5D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43B15.asm:43 LDA @VIRTUAL02
    case 0xC43B5F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C43B15.asm:44 ASL
    case 0xC43B61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:45 STA @VIRTUAL02
    case 0xC43B62: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43B15.asm:46 TYA
    case 0xC43B64: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:47 CLC
    case 0xC43B65: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:48 ADC @VIRTUAL02
    case 0xC43B66: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C43B15.asm:49 TAX
    case 0xC43B68: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:50 LDA __BSS_START__,X
    case 0xC43B69: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C43B15.asm:51 CMP #64
    case 0xC43B6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C4/C43B15.asm:51 CMP #64
    // Overlapping static entry reached from 0xC43B6C.
    case 0xC43B6E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C43B15.asm:52 BEQ @UNKNOWN0
    case 0xC43B6F: cpu.execute_instruction<0xF0>(0x0000E5, 2); return true;
    // src/unknown/C4/C43B15.asm:53 LDX @LOCAL02
    case 0xC43B71: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C43B15.asm:54 LDA a:window_stats::text_x,X
    case 0xC43B73: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C4/C43B15.asm:55 STA @LOCAL02
    case 0xC43B76: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C43B15.asm:56 ASL
    case 0xC43B78: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:57 STA @VIRTUAL02
    case 0xC43B79: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43B15.asm:58 TYA
    case 0xC43B7B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:59 CLC
    case 0xC43B7C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:60 ADC @VIRTUAL02
    case 0xC43B7D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C43B15.asm:61 TAX
    case 0xC43B7F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:62 LDA @LOCAL02
    case 0xC43B80: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C43B15.asm:63 STA @LOCAL02
    case 0xC43B82: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C43B15.asm:64 BRA @UNKNOWN3
    case 0xC43B84: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // src/unknown/C4/C43B15.asm:66 LDA __BSS_START__,X
    case 0xC43B86: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C43B15.asm:67 AND #$03FF
    case 0xC43B89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/C4/C43B15.asm:67 AND #$03FF
    // Overlapping static entry reached from 0xC43B89.
    case 0xC43B8B: cpu.execute_instruction<0x03>(0x000005, 2); return true;
    // src/unknown/C4/C43B15.asm:68 ORA @LOCAL01
    case 0xC43B8C: cpu.execute_instruction<0x05>(0x000010, 2); return true;
    // src/unknown/C4/C43B15.asm:68 ORA @LOCAL01
    // Overlapping static entry reached from 0xC43B8B.
    case 0xC43B8D: cpu.execute_instruction<0x10>(0x00009D, 2); return true;
    // src/unknown/C4/C43B15.asm:69 STA __BSS_START__,X
    case 0xC43B8E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C43B15.asm:69 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC43B8D.
    case 0xC43B8F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C43B15.asm:70 LDA @VIRTUAL04
    case 0xC43B91: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C43B15.asm:71 ASL
    case 0xC43B93: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:72 STA @VIRTUAL02
    case 0xC43B94: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43B15.asm:73 TXA
    case 0xC43B96: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:74 CLC
    case 0xC43B97: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:75 ADC @VIRTUAL02
    case 0xC43B98: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C43B15.asm:76 TAY
    case 0xC43B9A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:77 LDA __BSS_START__,Y
    case 0xC43B9B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C43B15.asm:78 AND #$03FF
    case 0xC43B9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/C4/C43B15.asm:78 AND #$03FF
    // Overlapping static entry reached from 0xC43B9E.
    case 0xC43BA0: cpu.execute_instruction<0x03>(0x000005, 2); return true;
    // src/unknown/C4/C43B15.asm:79 ORA @LOCAL01
    case 0xC43BA1: cpu.execute_instruction<0x05>(0x000010, 2); return true;
    // src/unknown/C4/C43B15.asm:79 ORA @LOCAL01
    // Overlapping static entry reached from 0xC43BA0.
    case 0xC43BA2: cpu.execute_instruction<0x10>(0x000099, 2); return true;
    // src/unknown/C4/C43B15.asm:80 STA __BSS_START__,Y
    case 0xC43BA3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C43B15.asm:80 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC43BA2.
    case 0xC43BA4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C43B15.asm:81 INX
    case 0xC43BA6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:82 INX
    case 0xC43BA7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:83 LDA @LOCAL02
    case 0xC43BA8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C43B15.asm:84 INC
    case 0xC43BAA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C43B15.asm:85 STA @LOCAL02
    case 0xC43BAB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C43B15.asm:87 LDY @LOCAL00
    case 0xC43BAD: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C43B15.asm:88 STY @VIRTUAL02
    case 0xC43BAF: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C43B15.asm:89 INC @VIRTUAL02
    case 0xC43BB1: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C43B15.asm:90 CMP @VIRTUAL02
    case 0xC43BB3: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C43B15.asm:91 BCC @UNKNOWN2
    case 0xC43BB5: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43B15.asm:92 END_C_FUNCTION
    case 0xC43BB7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43B15.asm:92 END_C_FUNCTION
    case 0xC43BB8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43BB9.asm (unresolved).
bool execute_unresolved_c4_c43bb9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43BB9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43BB9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43BB9.asm:14 END_STACK_VARS
    case 0xC43BBB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43BB9.asm:14 END_STACK_VARS
    case 0xC43BBC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43BB9.asm:14 END_STACK_VARS
    case 0xC43BBD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43BB9.asm:14 END_STACK_VARS
    case 0xC43BBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43BB9.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC43BBE.
    case 0xC43BC0: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43BB9.asm:14 END_STACK_VARS
    case 0xC43BC1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43BB9.asm:14 END_STACK_VARS
    case 0xC43BC2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:15 STX @LOCAL05
    case 0xC43BC3: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C4/C43BB9.asm:15 STX @LOCAL05
    // Overlapping static entry reached from 0xC43BC0.
    case 0xC43BC4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:16 STA @LOCAL04
    case 0xC43BC5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C43BB9.asm:17 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC43BC7: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C43BB9.asm:17 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC43BC9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C43BB9.asm:17 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC43BCB: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C43BB9.asm:17 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC43BCD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C43BB9.asm:18 LDA CURRENT_FOCUS_WINDOW
    case 0xC43BCF: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C43BB9.asm:19 ASL
    case 0xC43BD2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:20 TAX
    case 0xC43BD3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:21 LDA OPEN_WINDOW_TABLE,X
    case 0xC43BD4: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C43BB9.asm:22 CMP #.LOWORD(-1)
    case 0xC43BD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C43BB9.asm:22 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC43BD7.
    case 0xC43BD9: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C43BB9.asm:23 BEQL @UNKNOWN7
    case 0xC43BDA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C43BB9.asm:23 BEQL @UNKNOWN7
    case 0xC43BDC: cpu.execute_instruction<0x4C>(0x003CA6, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C43BB9.asm:23 BEQL @UNKNOWN7
    // Overlapping static entry reached from 0xC43BD9.
    case 0xC43BDD: cpu.execute_instruction<0xA6>(0x00003C, 2); return true;
    // src/unknown/C4/C43BB9.asm:24 LDA CURRENT_FOCUS_WINDOW
    case 0xC43BDF: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C43BB9.asm:25 CMP #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC43BE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000018, 3); return true;
    // src/unknown/C4/C43BB9.asm:25 CMP #WINDOW::FILE_SELECT_TEXT_SPEED
    // Overlapping static entry reached from 0xC43BE2.
    case 0xC43BE4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C43BB9.asm:26 BEQ @UNKNOWN1
    case 0xC43BE5: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C4/C43BB9.asm:27 LDA CURRENT_FOCUS_WINDOW
    case 0xC43BE7: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C43BB9.asm:28 CMP #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC43BEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/unknown/C4/C43BB9.asm:28 CMP #WINDOW::FILE_SELECT_MUSIC_MODE
    // Overlapping static entry reached from 0xC43BEA.
    case 0xC43BEC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C43BB9.asm:29 BEQ @UNKNOWN1
    case 0xC43BED: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C4/C43BB9.asm:30 LDA CURRENT_FOCUS_WINDOW
    case 0xC43BEF: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C43BB9.asm:31 CMP #WINDOW::FILE_SELECT_MENU
    case 0xC43BF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/unknown/C4/C43BB9.asm:31 CMP #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC43BF2.
    case 0xC43BF4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C43BB9.asm:32 BEQ @UNKNOWN1
    case 0xC43BF5: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C43BB9.asm:33 LDA CURRENT_FOCUS_WINDOW
    case 0xC43BF7: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C43BB9.asm:34 CMP #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_MESSAGE
    case 0xC43BFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000024, 3); return true;
    // src/unknown/C4/C43BB9.asm:34 CMP #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_MESSAGE
    // Overlapping static entry reached from 0xC43BFA.
    case 0xC43BFC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C43BB9.asm:35 BEQ @UNKNOWN1
    case 0xC43BFD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C43BB9.asm:36 JMP @UNKNOWN7
    case 0xC43BFF: cpu.execute_instruction<0x4C>(0x003CA6, 3); return true;
    // src/unknown/C4/C43BB9.asm:38 LDA CURRENT_FOCUS_WINDOW
    case 0xC43C02: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C43BB9.asm:39 ASL
    case 0xC43C05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:40 TAX
    case 0xC43C06: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:41 LDA OPEN_WINDOW_TABLE,X
    case 0xC43C07: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C43BB9.asm:42 LDY #.SIZEOF(window_stats)
    case 0xC43C0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C43BB9.asm:42 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC43C0A.
    case 0xC43C0C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43BB9.asm:43 JSL MULT168
    case 0xC43C0D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C43BB9.asm:44 CLC
    case 0xC43C11: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:45 ADC #.LOWORD(WINDOW_STATS)
    case 0xC43C12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C4/C43BB9.asm:45 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC43C12.
    case 0xC43C14: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/unknown/C4/C43BB9.asm:46 STA @VIRTUAL02
    case 0xC43C15: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43BB9.asm:46 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC43C14.
    case 0xC43C16: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C43BB9.asm:47 STA @LOCAL03
    case 0xC43C17: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C43BB9.asm:48 LDX @VIRTUAL02
    case 0xC43C19: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C43BB9.asm:49 LDA a:window_stats::curr_tile_attributes,X
    case 0xC43C1B: cpu.execute_instruction<0xBD>(0x000013, 3); return true;
    // src/unknown/C4/C43BB9.asm:50 STA @LOCAL02
    case 0xC43C1E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C43BB9.asm:51 LDX @VIRTUAL02
    case 0xC43C20: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C43BB9.asm:52 LDA a:window_stats::text_x,X
    case 0xC43C22: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C4/C43BB9.asm:53 STA @LOCAL01
    case 0xC43C25: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C43BB9.asm:54 LDX @VIRTUAL02
    case 0xC43C27: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C43BB9.asm:55 LDA a:window_stats::text_y,X
    case 0xC43C29: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/unknown/C4/C43BB9.asm:56 STA @LOCAL00
    case 0xC43C2C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43BB9.asm:57 LDA @LOCAL01
    case 0xC43C2E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C43BB9.asm:58 ASL
    case 0xC43C30: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:59 PHA
    case 0xC43C31: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:60 LDX @VIRTUAL02
    case 0xC43C32: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C43BB9.asm:61 LDY a:window_stats::width,X
    case 0xC43C34: cpu.execute_instruction<0xBC>(0x00000A, 3); return true;
    // src/unknown/C4/C43BB9.asm:62 LDA @LOCAL00
    case 0xC43C37: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43BB9.asm:63 JSL MULT16
    case 0xC43C39: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C43BB9.asm:64 ASL
    case 0xC43C3D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:65 ASL
    case 0xC43C3E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:66 LDX @VIRTUAL02
    case 0xC43C3F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C43BB9.asm:67 CLC
    case 0xC43C41: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:68 ADC a:window_stats::tilemap_address,X
    case 0xC43C42: cpu.execute_instruction<0x7D>(0x000035, 3); return true;
    // src/unknown/C4/C43BB9.asm:69 PLY
    case 0xC43C45: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:70 STY @VIRTUAL02
    case 0xC43C46: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C43BB9.asm:71 CLC
    case 0xC43C48: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:72 ADC @VIRTUAL02
    case 0xC43C49: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C43BB9.asm:73 STA @VIRTUAL04
    case 0xC43C4B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C43BB9.asm:74 BRA @UNKNOWN5
    case 0xC43C4D: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/unknown/C4/C43BB9.asm:76 LDX @VIRTUAL04
    case 0xC43C4F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C43BB9.asm:77 LDA __BSS_START__,X
    case 0xC43C51: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C43BB9.asm:78 CMP #64
    case 0xC43C54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C4/C43BB9.asm:78 CMP #64
    // Overlapping static entry reached from 0xC43C54.
    case 0xC43C56: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C43BB9.asm:79 BEQ @UNKNOWN6
    case 0xC43C57: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/unknown/C4/C43BB9.asm:80 LDA @LOCAL05
    case 0xC43C59: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C43BB9.asm:81 BEQ @UNKNOWN3
    case 0xC43C5B: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C4/C43BB9.asm:82 LDY @LOCAL02
    case 0xC43C5D: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C43BB9.asm:83 LDA @LOCAL03
    case 0xC43C5F: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C43BB9.asm:84 STA @VIRTUAL02
    case 0xC43C61: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43BB9.asm:85 LDX @VIRTUAL02
    case 0xC43C63: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C43BB9.asm:86 LDA a:window_stats::width,X
    case 0xC43C65: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C4/C43BB9.asm:87 TAX
    case 0xC43C68: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:88 LDA @VIRTUAL04
    case 0xC43C69: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C43BB9.asm:89 JSL UNKNOWN_EF00E6
    case 0xC43C6B: cpu.execute_instruction<0x22>(0xEF00E6, 4); return true;
    // src/unknown/C4/C43BB9.asm:90 BRA @UNKNOWN4
    case 0xC43C6F: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C43BB9.asm:92 LDY @LOCAL02
    case 0xC43C71: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C43BB9.asm:93 LDA @LOCAL03
    case 0xC43C73: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C43BB9.asm:94 STA @VIRTUAL02
    case 0xC43C75: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43BB9.asm:95 LDX @VIRTUAL02
    case 0xC43C77: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C43BB9.asm:96 LDA a:window_stats::width,X
    case 0xC43C79: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C4/C43BB9.asm:97 TAX
    case 0xC43C7C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43BB9.asm:98 LDA @VIRTUAL04
    case 0xC43C7D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C43BB9.asm:99 JSL UNKNOWN_EF00BB
    case 0xC43C7F: cpu.execute_instruction<0x22>(0xEF00BB, 4); return true;
    // src/unknown/C4/C43BB9.asm:101 INC @LOCAL01
    case 0xC43C83: cpu.execute_instruction<0xE6>(0x000010, 2); return true;
    // src/unknown/C4/C43BB9.asm:102 INC @VIRTUAL04
    case 0xC43C85: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C43BB9.asm:103 INC @VIRTUAL04
    case 0xC43C87: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C43BB9.asm:104 INC @VIRTUAL06
    case 0xC43C89: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C43BB9.asm:105 DEC @LOCAL04
    case 0xC43C8B: cpu.execute_instruction<0xC6>(0x000016, 2); return true;
    // src/unknown/C4/C43BB9.asm:107 LDA [@VIRTUAL06]
    case 0xC43C8D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C43BB9.asm:108 AND #$00FF
    case 0xC43C8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43BB9.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC43C8F.
    case 0xC43C91: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C43BB9.asm:109 BEQ @UNKNOWN6
    case 0xC43C92: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C43BB9.asm:110 LDA @LOCAL04
    case 0xC43C94: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C43BB9.asm:111 BNE @UNKNOWN2
    case 0xC43C96: cpu.execute_instruction<0xD0>(0x0000B7, 2); return true;
    // src/unknown/C4/C43BB9.asm:113 LDA @LOCAL01
    case 0xC43C98: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C43BB9.asm:114 LDX @LOCAL03
    case 0xC43C9A: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C43BB9.asm:115 STX @VIRTUAL02
    case 0xC43C9C: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C43BB9.asm:116 STA a:window_stats::text_x,X
    case 0xC43C9E: cpu.execute_instruction<0x9D>(0x00000E, 3); return true;
    // src/unknown/C4/C43BB9.asm:117 SEP #PROC_FLAGS::ACCUM8
    case 0xC43CA1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43BB9.asm:118 STZ INSTANT_PRINTING
    case 0xC43CA3: cpu.execute_instruction<0x9C>(0x009622, 3); return true;
    // src/unknown/C4/C43BB9.asm:120 REP #PROC_FLAGS::ACCUM8
    case 0xC43CA6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43BB9.asm:121 END_C_FUNCTION
    case 0xC43CA8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43BB9.asm:121 END_C_FUNCTION
    case 0xC43CA9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43CAA.asm (unresolved).
bool execute_unresolved_c4_c43caa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43CAA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43CAA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C43CAA.asm:5 LDA VWF_TILE
    case 0xC43CAC: cpu.execute_instruction<0xAD>(0x009E25, 3); return true;
    // src/unknown/C4/C43CAA.asm:6 INC
    case 0xC43CAF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C43CAA.asm:7 STA VWF_TILE
    case 0xC43CB0: cpu.execute_instruction<0x8D>(0x009E25, 3); return true;
    // src/unknown/C4/C43CAA.asm:8 CMP #$0033
    case 0xC43CB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000033, 2); else cpu.execute_instruction<0xC9>(0x000033, 3); return true;
    // src/unknown/C4/C43CAA.asm:8 CMP #$0033
    // Overlapping static entry reached from 0xC43CB3.
    case 0xC43CB5: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C43CAA.asm:9 BLTEQ @UNKNOWN0
    case 0xC43CB6: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C43CAA.asm:9 BLTEQ @UNKNOWN0
    case 0xC43CB8: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C4/C43CAA.asm:10 STZ VWF_TILE
    case 0xC43CBA: cpu.execute_instruction<0x9C>(0x009E25, 3); return true;
    // src/unknown/C4/C43CAA.asm:11 STZ VWF_X
    case 0xC43CBD: cpu.execute_instruction<0x9C>(0x009E23, 3); return true;
    // src/unknown/C4/C43CAA.asm:12 BRA @UNKNOWN1
    case 0xC43CC0: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C4/C43CAA.asm:14 ASL
    case 0xC43CC2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43CAA.asm:15 ASL
    case 0xC43CC3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43CAA.asm:16 ASL
    case 0xC43CC4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43CAA.asm:17 STA VWF_X
    case 0xC43CC5: cpu.execute_instruction<0x8D>(0x009E23, 3); return true;
    // src/unknown/C4/C43CAA.asm:19 STZ TEXT_RENDER_STATE + 2
    case 0xC43CC8: cpu.execute_instruction<0x9C>(0x009654, 3); return true;
    // src/unknown/C4/C43CAA.asm:20 LDA VWF_X
    case 0xC43CCB: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C43CAA.asm:21 STA TEXT_RENDER_STATE
    case 0xC43CCE: cpu.execute_instruction<0x8D>(0x009652, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43CAA.asm:22 END_C_FUNCTION
    case 0xC43CD1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43CD2.asm (unresolved).
bool execute_unresolved_c4_c43cd2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43CD2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43CD2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43CD2.asm:10 END_STACK_VARS
    case 0xC43CD4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43CD2.asm:10 END_STACK_VARS
    case 0xC43CD5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43CD2.asm:10 END_STACK_VARS
    case 0xC43CD6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43CD2.asm:10 END_STACK_VARS
    case 0xC43CD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EF, 2); else cpu.execute_instruction<0x69>(0x00FFEF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43CD2.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC43CD7.
    case 0xC43CD9: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43CD2.asm:10 END_STACK_VARS
    case 0xC43CDA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43CD2.asm:10 END_STACK_VARS
    case 0xC43CDB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43CD2.asm:11 STY @VIRTUAL02
    case 0xC43CDC: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C43CD2.asm:11 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC43CD9.
    case 0xC43CDD: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C4/C43CD2.asm:12 TXY
    case 0xC43CDE: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C43CD2.asm:13 STA @VIRTUAL04
    case 0xC43CDF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C43CD2.asm:14 LDX @VIRTUAL02
    case 0xC43CE1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C43CD2.asm:15 TYA
    case 0xC43CE3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C43CD2.asm:16 JSL REDIRECT_C438A5
    case 0xC43CE4: cpu.execute_instruction<0x22>(0xC10C72, 4); return true;
    // src/unknown/C4/C43CD2.asm:17 LDX @VIRTUAL04
    case 0xC43CE8: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C43CD2.asm:18 LDA a:menu_option::pixel_align,X
    case 0xC43CEA: cpu.execute_instruction<0xBD>(0x00002C, 3); return true;
    // src/unknown/C4/C43CD2.asm:19 AND #$00FF
    case 0xC43CED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43CD2.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC43CED.
    case 0xC43CEF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C43CD2.asm:20 BEQ @UNKNOWN0
    case 0xC43CF0: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/unknown/C4/C43CD2.asm:21 AND #$00FF
    case 0xC43CF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43CD2.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC43CF2.
    case 0xC43CF4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C43CD2.asm:22 CLC
    case 0xC43CF5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43CD2.asm:23 ADC VWF_X
    case 0xC43CF6: cpu.execute_instruction<0x6D>(0x009E23, 3); return true;
    // src/unknown/C4/C43CD2.asm:24 STA VWF_X
    case 0xC43CF9: cpu.execute_instruction<0x8D>(0x009E23, 3); return true;
    // src/unknown/C4/C43CD2.asm:25 LDA VWF_TILE
    case 0xC43CFC: cpu.execute_instruction<0xAD>(0x009E25, 3); return true;
    // src/unknown/C4/C43CD2.asm:26 ASL
    case 0xC43CFF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43CD2.asm:27 ASL
    case 0xC43D00: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43CD2.asm:28 ASL
    case 0xC43D01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43CD2.asm:29 ASL
    case 0xC43D02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43CD2.asm:30 ASL
    case 0xC43D03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43CD2.asm:31 CLC
    case 0xC43D04: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43CD2.asm:32 ADC #.LOWORD(VWF_BUFFER)
    case 0xC43D05: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000092, 2); else cpu.execute_instruction<0x69>(0x003492, 3); return true;
    // src/unknown/C4/C43CD2.asm:32 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC43D05.
    case 0xC43D07: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // src/unknown/C4/C43CD2.asm:33 STA @LOCAL01
    case 0xC43D08: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C4/C43CD2.asm:33 STA @LOCAL01
    // Overlapping static entry reached from 0xC43D07.
    case 0xC43D09: cpu.execute_instruction<0x0F>(0xA920E2, 4); return true;
    // src/unknown/C4/C43CD2.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC43D0A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43CD2.asm:35 LDA #<-1
    case 0xC43D0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C4/C43CD2.asm:35 LDA #<-1
    // Overlapping static entry reached from 0xC43D09.
    case 0xC43D0D: cpu.execute_instruction<0xFF>(0xA20E85, 4); return true;
    // src/unknown/C4/C43CD2.asm:36 STA @LOCAL00
    case 0xC43D0E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43CD2.asm:36 STA @LOCAL00
    // Overlapping static entry reached from 0xC43D0C.
    case 0xC43D0F: cpu.execute_instruction<0x0E>(0x0020A2, 3); return true;
    // src/unknown/C4/C43CD2.asm:37 LDX #32
    case 0xC43D10: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C4/C43CD2.asm:37 LDX #32
    // Overlapping static entry reached from 0xC43D0D.
    case 0xC43D11: cpu.execute_instruction<0x20>(0x00C200, 3); return true;
    // src/unknown/C4/C43CD2.asm:37 LDX #32
    // Overlapping static entry reached from 0xC43D10.
    case 0xC43D12: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C43CD2.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC43D13: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C43CD2.asm:38 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC43D11.
    case 0xC43D14: cpu.execute_instruction<0x20>(0x000FA5, 3); return true;
    // src/unknown/C4/C43CD2.asm:39 LDA @LOCAL01
    case 0xC43D15: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C4/C43CD2.asm:40 JSL MEMSET16
    case 0xC43D17: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C43CD2.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC43D1B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43CD2.asm:44 STZ RESTORE_MENU_BACKUP
    case 0xC43D1D: cpu.execute_instruction<0x9C>(0x005E79, 3); return true;
    // src/unknown/C4/C43CD2.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC43D20: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43CD2.asm:47 END_C_FUNCTION
    case 0xC43D22: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43CD2.asm:47 END_C_FUNCTION
    case 0xC43D23: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43D24.asm (unresolved).
bool execute_unresolved_c4_c43d24_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43D24.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43D24: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43D24.asm:8 END_STACK_VARS
    case 0xC43D26: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43D24.asm:8 END_STACK_VARS
    case 0xC43D27: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43D24.asm:8 END_STACK_VARS
    case 0xC43D28: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43D24.asm:8 END_STACK_VARS
    case 0xC43D29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EF, 2); else cpu.execute_instruction<0x69>(0x00FFEF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43D24.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC43D29.
    case 0xC43D2B: cpu.execute_instruction<0xFF>(0x22685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43D24.asm:8 END_STACK_VARS
    case 0xC43D2C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43D24.asm:8 END_STACK_VARS
    case 0xC43D2D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43D24.asm:9 JSL REDIRECT_C438A5
    case 0xC43D2E: cpu.execute_instruction<0x22>(0xC10C72, 4); return true;
    // src/unknown/C4/C43D24.asm:9 JSL REDIRECT_C438A5
    // Overlapping static entry reached from 0xC43D2B.
    case 0xC43D2F: cpu.execute_instruction<0x72>(0x00000C, 2); return true;
    // src/unknown/C4/C43D24.asm:9 JSL REDIRECT_C438A5
    // Overlapping static entry reached from 0xC43D2F.
    case 0xC43D31: cpu.execute_instruction<0xC1>(0x0000AD, 2); return true;
    // src/unknown/C4/C43D24.asm:10 LDA NEW_TEXT_PIXEL_OFFSET
    case 0xC43D32: cpu.execute_instruction<0xAD>(0x005E72, 3); return true;
    // src/unknown/C4/C43D24.asm:10 LDA NEW_TEXT_PIXEL_OFFSET
    // Overlapping static entry reached from 0xC43D31.
    case 0xC43D33: cpu.execute_instruction<0x72>(0x00005E, 2); return true;
    // src/unknown/C4/C43D24.asm:11 AND #$00FF
    case 0xC43D35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43D24.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC43D35.
    case 0xC43D37: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C43D24.asm:12 BEQ @UNKNOWN0
    case 0xC43D38: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/unknown/C4/C43D24.asm:13 LDA NEW_TEXT_PIXEL_OFFSET
    case 0xC43D3A: cpu.execute_instruction<0xAD>(0x005E72, 3); return true;
    // src/unknown/C4/C43D24.asm:14 AND #$00FF
    case 0xC43D3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43D24.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC43D3D.
    case 0xC43D3F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C43D24.asm:15 CLC
    case 0xC43D40: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43D24.asm:16 ADC VWF_X
    case 0xC43D41: cpu.execute_instruction<0x6D>(0x009E23, 3); return true;
    // src/unknown/C4/C43D24.asm:17 STA VWF_X
    case 0xC43D44: cpu.execute_instruction<0x8D>(0x009E23, 3); return true;
    // src/unknown/C4/C43D24.asm:18 LDA VWF_TILE
    case 0xC43D47: cpu.execute_instruction<0xAD>(0x009E25, 3); return true;
    // src/unknown/C4/C43D24.asm:19 ASL
    case 0xC43D4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43D24.asm:20 ASL
    case 0xC43D4B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43D24.asm:21 ASL
    case 0xC43D4C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43D24.asm:22 ASL
    case 0xC43D4D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43D24.asm:23 ASL
    case 0xC43D4E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43D24.asm:24 CLC
    case 0xC43D4F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43D24.asm:25 ADC #.LOWORD(VWF_BUFFER)
    case 0xC43D50: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000092, 2); else cpu.execute_instruction<0x69>(0x003492, 3); return true;
    // src/unknown/C4/C43D24.asm:25 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC43D50.
    case 0xC43D52: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // src/unknown/C4/C43D24.asm:26 STA @LOCAL01
    case 0xC43D53: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C4/C43D24.asm:26 STA @LOCAL01
    // Overlapping static entry reached from 0xC43D52.
    case 0xC43D54: cpu.execute_instruction<0x0F>(0xA920E2, 4); return true;
    // src/unknown/C4/C43D24.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC43D55: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43D24.asm:28 LDA #<-1
    case 0xC43D57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C4/C43D24.asm:28 LDA #<-1
    // Overlapping static entry reached from 0xC43D54.
    case 0xC43D58: cpu.execute_instruction<0xFF>(0xA20E85, 4); return true;
    // src/unknown/C4/C43D24.asm:29 STA @LOCAL00
    case 0xC43D59: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43D24.asm:29 STA @LOCAL00
    // Overlapping static entry reached from 0xC43D57.
    case 0xC43D5A: cpu.execute_instruction<0x0E>(0x0020A2, 3); return true;
    // src/unknown/C4/C43D24.asm:30 LDX #32
    case 0xC43D5B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C4/C43D24.asm:30 LDX #32
    // Overlapping static entry reached from 0xC43D58.
    case 0xC43D5C: cpu.execute_instruction<0x20>(0x00C200, 3); return true;
    // src/unknown/C4/C43D24.asm:30 LDX #32
    // Overlapping static entry reached from 0xC43D5B.
    case 0xC43D5D: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C43D24.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC43D5E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C43D24.asm:31 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC43D5C.
    case 0xC43D5F: cpu.execute_instruction<0x20>(0x000FA5, 3); return true;
    // src/unknown/C4/C43D24.asm:32 LDA @LOCAL01
    case 0xC43D60: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C4/C43D24.asm:33 JSL MEMSET16
    case 0xC43D62: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C43D24.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC43D66: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43D24.asm:35 LDA NEW_TEXT_PIXEL_OFFSET
    case 0xC43D68: cpu.execute_instruction<0xAD>(0x005E72, 3); return true;
    // src/unknown/C4/C43D24.asm:36 STA LAST_TEXT_PIXEL_OFFSET_SET
    case 0xC43D6B: cpu.execute_instruction<0x8D>(0x005E73, 3); return true;
    // src/unknown/C4/C43D24.asm:37 STZ NEW_TEXT_PIXEL_OFFSET
    case 0xC43D6E: cpu.execute_instruction<0x9C>(0x005E72, 3); return true;
    // src/unknown/C4/C43D24.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC43D71: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43D24.asm:40 END_C_FUNCTION
    case 0xC43D73: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43D24.asm:40 END_C_FUNCTION
    case 0xC43D74: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43D75.asm (unresolved).
bool execute_unresolved_c4_c43d75_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43D75.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43D75: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43D75.asm:7 END_STACK_VARS
    case 0xC43D77: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43D75.asm:7 END_STACK_VARS
    case 0xC43D78: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43D75.asm:7 END_STACK_VARS
    case 0xC43D79: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43D75.asm:7 END_STACK_VARS
    case 0xC43D7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43D75.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC43D7A.
    case 0xC43D7C: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43D75.asm:7 END_STACK_VARS
    case 0xC43D7D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43D75.asm:7 END_STACK_VARS
    case 0xC43D7E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43D75.asm:8 STA @LOCAL00
    case 0xC43D7F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43D75.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC43D7C.
    case 0xC43D80: cpu.execute_instruction<0x0E>(0x0020E2, 3); return true;
    // src/unknown/C4/C43D75.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC43D81: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43D75.asm:10 AND #$0007
    case 0xC43D83: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x008D07, 3); return true;
    // src/unknown/C4/C43D75.asm:11 STA NEW_TEXT_PIXEL_OFFSET
    case 0xC43D85: cpu.execute_instruction<0x8D>(0x005E72, 3); return true;
    // src/unknown/C4/C43D75.asm:11 STA NEW_TEXT_PIXEL_OFFSET
    // Overlapping static entry reached from 0xC43D83.
    case 0xC43D86: cpu.execute_instruction<0x72>(0x00005E, 2); return true;
    // src/unknown/C4/C43D75.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC43D88: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C43D75.asm:13 LDA @LOCAL00
    case 0xC43D8A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43D75.asm:14 LSR
    case 0xC43D8C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C43D75.asm:15 LSR
    case 0xC43D8D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C43D75.asm:16 LSR
    case 0xC43D8E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C43D75.asm:17 JSL UNKNOWN_C43D24
    case 0xC43D8F: cpu.execute_instruction<0x22>(0xC43D24, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43D75.asm:18 END_C_FUNCTION
    case 0xC43D93: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43D75.asm:18 END_C_FUNCTION
    case 0xC43D94: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43D95.asm (unresolved).
bool execute_unresolved_c4_c43d95_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43D95.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43D95: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43D95.asm:8 END_STACK_VARS
    case 0xC43D97: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43D95.asm:8 END_STACK_VARS
    case 0xC43D98: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43D95.asm:8 END_STACK_VARS
    case 0xC43D99: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43D95.asm:8 END_STACK_VARS
    case 0xC43D9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43D95.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC43D9A.
    case 0xC43D9C: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43D95.asm:8 END_STACK_VARS
    case 0xC43D9D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43D95.asm:8 END_STACK_VARS
    case 0xC43D9E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43D95.asm:9 STA @LOCAL01
    case 0xC43D9F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C43D95.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC43D9C.
    case 0xC43DA0: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C4/C43D95.asm:10 LDA CURRENT_FOCUS_WINDOW
    case 0xC43DA1: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C43D95.asm:10 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC43DA0.
    case 0xC43DA2: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C4/C43D95.asm:10 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC43DA2.
    case 0xC43DA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/unknown/C4/C43D95.asm:11 ASL
    case 0xC43DA4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43D95.asm:12 TAX
    case 0xC43DA5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43D95.asm:13 LDA OPEN_WINDOW_TABLE,X
    case 0xC43DA6: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C43D95.asm:14 LDY #.SIZEOF(window_stats)
    case 0xC43DA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C43D95.asm:14 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC43DA9.
    case 0xC43DAB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43D95.asm:15 JSL MULT168
    case 0xC43DAC: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C43D95.asm:16 TAX
    case 0xC43DB0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43D95.asm:17 LDA WINDOW_STATS + window_stats::text_x,X
    case 0xC43DB1: cpu.execute_instruction<0xBD>(0x00865E, 3); return true;
    // src/unknown/C4/C43D95.asm:18 ASL
    case 0xC43DB4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43D95.asm:19 ASL
    case 0xC43DB5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43D95.asm:20 ASL
    case 0xC43DB6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43D95.asm:21 STA @VIRTUAL02
    case 0xC43DB7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43D95.asm:22 LDA @LOCAL01
    case 0xC43DB9: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C43D95.asm:23 CLC
    case 0xC43DBB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43D95.asm:24 ADC @VIRTUAL02
    case 0xC43DBC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C43D95.asm:25 STA @LOCAL01
    case 0xC43DBE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C43D95.asm:26 LDA LAST_TEXT_PIXEL_OFFSET_SET
    case 0xC43DC0: cpu.execute_instruction<0xAD>(0x005E73, 3); return true;
    // src/unknown/C4/C43D95.asm:27 AND #$00FF
    case 0xC43DC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43D95.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC43DC3.
    case 0xC43DC5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C43D95.asm:28 STA @VIRTUAL02
    case 0xC43DC6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43D95.asm:29 LDA @LOCAL01
    case 0xC43DC8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C43D95.asm:30 CLC
    case 0xC43DCA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43D95.asm:31 ADC @VIRTUAL02
    case 0xC43DCB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C43D95.asm:32 STA @LOCAL00
    case 0xC43DCD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43D95.asm:33 LDA WINDOW_STATS + window_stats::text_y,X
    case 0xC43DCF: cpu.execute_instruction<0xBD>(0x008660, 3); return true;
    // src/unknown/C4/C43D95.asm:34 TAX
    case 0xC43DD2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43D95.asm:35 LDA @LOCAL00
    case 0xC43DD3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43D95.asm:36 JSL UNKNOWN_C43D75
    case 0xC43DD5: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43D95.asm:37 END_C_FUNCTION
    case 0xC43DD9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43D95.asm:37 END_C_FUNCTION
    case 0xC43DDA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43DDB.asm (unresolved).
bool execute_unresolved_c4_c43ddb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43DDB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43DDB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43DDB.asm:8 END_STACK_VARS
    case 0xC43DDD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43DDB.asm:8 END_STACK_VARS
    case 0xC43DDE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43DDB.asm:8 END_STACK_VARS
    case 0xC43DDF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43DDB.asm:8 END_STACK_VARS
    case 0xC43DE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43DDB.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC43DE0.
    case 0xC43DE2: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43DDB.asm:8 END_STACK_VARS
    case 0xC43DE3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43DDB.asm:8 END_STACK_VARS
    case 0xC43DE4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43DDB.asm:9 STA @VIRTUAL02
    case 0xC43DE5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43DDB.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC43DE2.
    case 0xC43DE6: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C4/C43DDB.asm:10 CLC
    case 0xC43DE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43DDB.asm:11 ADC #menu_option::text_x
    case 0xC43DE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C4/C43DDB.asm:11 ADC #menu_option::text_x
    // Overlapping static entry reached from 0xC43DE8.
    case 0xC43DEA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C43DDB.asm:12 STA @VIRTUAL04
    case 0xC43DEB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C43DDB.asm:13 LDA @VIRTUAL02
    case 0xC43DED: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C43DDB.asm:14 CLC
    case 0xC43DEF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43DDB.asm:15 ADC #menu_option::text_y
    case 0xC43DF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/C4/C43DDB.asm:15 ADC #menu_option::text_y
    // Overlapping static entry reached from 0xC43DF0.
    case 0xC43DF2: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C43DDB.asm:16 TAY
    case 0xC43DF3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C43DDB.asm:17 STY @LOCAL01
    case 0xC43DF4: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C43DDB.asm:18 LDA __BSS_START__,Y
    case 0xC43DF6: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C43DDB.asm:19 TAX
    case 0xC43DF9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43DDB.asm:20 STX @LOCAL00
    case 0xC43DFA: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C43DDB.asm:21 LDX @VIRTUAL04
    case 0xC43DFC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C43DDB.asm:22 LDA __BSS_START__,X
    case 0xC43DFE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C43DDB.asm:23 LDX @LOCAL00
    case 0xC43E01: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C43DDB.asm:24 JSL REDIRECT_C438A5
    case 0xC43E03: cpu.execute_instruction<0x22>(0xC10C72, 4); return true;
    // src/unknown/C4/C43DDB.asm:25 LDA #47
    case 0xC43E07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // src/unknown/C4/C43DDB.asm:25 LDA #47
    // Overlapping static entry reached from 0xC43E07.
    case 0xC43E09: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43DDB.asm:26 JSL UNKNOWN_C43F77
    case 0xC43E0A: cpu.execute_instruction<0x22>(0xC43F77, 4); return true;
    // src/unknown/C4/C43DDB.asm:27 JSL UNKNOWN_C43CAA
    case 0xC43E0E: cpu.execute_instruction<0x22>(0xC43CAA, 4); return true;
    // src/unknown/C4/C43DDB.asm:28 LDX @VIRTUAL02
    case 0xC43E12: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C43DDB.asm:29 LDA a:menu_option::pixel_align,X
    case 0xC43E14: cpu.execute_instruction<0xBD>(0x00002C, 3); return true;
    // src/unknown/C4/C43DDB.asm:30 AND #$00FF
    case 0xC43E17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43DDB.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC43E17.
    case 0xC43E19: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C43DDB.asm:31 BEQ @UNKNOWN0
    case 0xC43E1A: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C4/C43DDB.asm:32 LDY @LOCAL01
    case 0xC43E1C: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C43DDB.asm:33 LDA __BSS_START__,Y
    case 0xC43E1E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C43DDB.asm:34 TAY
    case 0xC43E21: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C43DDB.asm:35 LDX @VIRTUAL04
    case 0xC43E22: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C43DDB.asm:36 LDA __BSS_START__,X
    case 0xC43E24: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C43DDB.asm:37 TAX
    case 0xC43E27: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43DDB.asm:38 INX
    case 0xC43E28: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C43DDB.asm:39 LDA @VIRTUAL02
    case 0xC43E29: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C43DDB.asm:40 JSL UNKNOWN_C43CD2
    case 0xC43E2B: cpu.execute_instruction<0x22>(0xC43CD2, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43DDB.asm:42 END_C_FUNCTION
    case 0xC43E2F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43DDB.asm:42 END_C_FUNCTION
    case 0xC43E30: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43E31.asm (unresolved).
bool execute_unresolved_c4_c43e31_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43E31.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43E31: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43E31.asm:12 END_STACK_VARS
    case 0xC43E33: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43E31.asm:12 END_STACK_VARS
    case 0xC43E34: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43E31.asm:12 END_STACK_VARS
    case 0xC43E35: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43E31.asm:12 END_STACK_VARS
    case 0xC43E36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43E31.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC43E36.
    case 0xC43E38: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43E31.asm:12 END_STACK_VARS
    case 0xC43E39: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43E31.asm:12 END_STACK_VARS
    case 0xC43E3A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:13 TAY
    case 0xC43E3B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:14 STY @LOCAL03
    case 0xC43E3C: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C43E31.asm:15 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43E3E: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C43E31.asm:15 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43E40: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C43E31.asm:15 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43E42: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C43E31.asm:15 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43E44: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C43E31.asm:16 LDX #0
    case 0xC43E46: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C43E31.asm:16 LDX #0
    // Overlapping static entry reached from 0xC43E46.
    case 0xC43E48: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C43E31.asm:17 STX @LOCAL02
    case 0xC43E49: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C43E31.asm:18 LDA CURRENT_FOCUS_WINDOW
    case 0xC43E4B: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C43E31.asm:19 ASL
    case 0xC43E4E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:20 TAX
    case 0xC43E4F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:21 LDA OPEN_WINDOW_TABLE,X
    case 0xC43E50: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C43E31.asm:22 LDY #.SIZEOF(window_stats)
    case 0xC43E53: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C43E31.asm:22 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC43E53.
    case 0xC43E55: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43E31.asm:23 JSL MULT168
    case 0xC43E56: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C43E31.asm:24 CLC
    case 0xC43E5A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:25 ADC #.LOWORD(WINDOW_STATS)
    case 0xC43E5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C4/C43E31.asm:25 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC43E5B.
    case 0xC43E5D: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/unknown/C4/C43E31.asm:26 STA @VIRTUAL02
    case 0xC43E5E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43E31.asm:26 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC43E5D.
    case 0xC43E5F: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C43E31.asm:27 STA @LOCAL01
    case 0xC43E60: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C43E31.asm:31 JMP @UNKNOWN3
    case 0xC43E62: cpu.execute_instruction<0x4C>(0x003EE5, 3); return true;
    // src/unknown/C4/C43E31.asm:34 DEY
    case 0xC43E65: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:35 STY @LOCAL03
    case 0xC43E66: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C43E31.asm:36 AND #$00FF
    case 0xC43E68: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43E31.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC43E68.
    case 0xC43E6A: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C43E31.asm:37 SEC
    case 0xC43E6B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:38 SBC #$50
    case 0xC43E6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/unknown/C4/C43E31.asm:38 SBC #$50
    // Overlapping static entry reached from 0xC43E6C.
    case 0xC43E6E: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C43E31.asm:39 AND #$007F
    case 0xC43E6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/unknown/C4/C43E31.asm:39 AND #$007F
    // Overlapping static entry reached from 0xC43E6F.
    case 0xC43E71: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C43E31.asm:40 STA @LOCAL00
    case 0xC43E72: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43E31.asm:41 INC @VIRTUAL06
    case 0xC43E74: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C43E31.asm:43 LDA FORCE_NORMAL_FONT_FOR_LENGTH_CALCULATIONS
    case 0xC43E76: cpu.execute_instruction<0xAD>(0x00B4CE, 3); return true;
    // src/unknown/C4/C43E31.asm:44 AND #$00FF
    case 0xC43E79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43E31.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC43E79.
    case 0xC43E7B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C43E31.asm:45 BEQ @UNKNOWN1
    case 0xC43E7C: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C43E31.asm:46 MOVE_INT FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43E7E: cpu.execute_instruction<0xAF>(0xC3F054, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C43E31.asm:46 MOVE_INT FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43E82: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C43E31.asm:46 MOVE_INT FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43E84: cpu.execute_instruction<0xAF>(0xC3F056, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C43E31.asm:46 MOVE_INT FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43E88: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C43E31.asm:47 LDA @LOCAL00
    case 0xC43E8A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43E31.asm:48 CLC
    case 0xC43E8C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:49 ADC @VIRTUAL0A
    case 0xC43E8D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C43E31.asm:50 STA @VIRTUAL0A
    case 0xC43E8F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C43E31.asm:51 LDA [@VIRTUAL0A]
    case 0xC43E91: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C43E31.asm:52 AND #$00FF
    case 0xC43E93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43E31.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC43E93.
    case 0xC43E95: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C43E31.asm:53 BRA @UNKNOWN2
    case 0xC43E96: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C43E31.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43E98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x00F054, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C43E31.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43E98.
    case 0xC43E9A: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C43E31.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43E9B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C43E31.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43E9A.
    case 0xC43E9C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C43E31.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43E9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C43E31.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43E9D.
    case 0xC43E9F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C43E31.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43EA0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C43E31.asm:57 LDA @LOCAL01
    case 0xC43EA2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C43E31.asm:58 STA @VIRTUAL02
    case 0xC43EA4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43E31.asm:59 LDX @VIRTUAL02
    case 0xC43EA6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C43E31.asm:60 LDA a:window_stats::font,X
    case 0xC43EA8: cpu.execute_instruction<0xBD>(0x000015, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C4/C43E31.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC43EAB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C4/C43E31.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC43EAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C4/C43E31.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC43EAE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C4/C43E31.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC43EB0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C4/C43E31.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC43EB1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:62 CLC
    case 0xC43EB2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:63 ADC @VIRTUAL0A
    case 0xC43EB3: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C43E31.asm:64 STA @VIRTUAL0A
    case 0xC43EB5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C43E31.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC43EB7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C43E31.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43EB7.
    case 0xC43EB9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C43E31.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC43EBA: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C43E31.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC43EBC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C43E31.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC43EBD: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C43E31.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC43EBF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C43E31.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC43EC1: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C4/C43E31.asm:66 LDA @LOCAL00
    case 0xC43EC3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43E31.asm:67 CLC
    case 0xC43EC5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:68 ADC @VIRTUAL0A
    case 0xC43EC6: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C43E31.asm:69 STA @VIRTUAL0A
    case 0xC43EC8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C43E31.asm:70 LDA [@VIRTUAL0A]
    case 0xC43ECA: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C43E31.asm:71 AND #$00FF
    case 0xC43ECC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43E31.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC43ECC.
    case 0xC43ECE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C43E31.asm:73 STA @VIRTUAL02
    case 0xC43ECF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43E31.asm:74 LDA CHARACTER_PADDING
    case 0xC43ED1: cpu.execute_instruction<0xAD>(0x005E6D, 3); return true;
    // src/unknown/C4/C43E31.asm:75 AND #$00FF
    case 0xC43ED4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43E31.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC43ED4.
    case 0xC43ED6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C43E31.asm:76 CLC
    case 0xC43ED7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:77 ADC @VIRTUAL02
    case 0xC43ED8: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C43E31.asm:78 STA @VIRTUAL04
    case 0xC43EDA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C43E31.asm:79 LDX @LOCAL02
    case 0xC43EDC: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C43E31.asm:80 TXA
    case 0xC43EDE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:81 CLC
    case 0xC43EDF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:82 ADC @VIRTUAL04
    case 0xC43EE0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C43E31.asm:83 TAX
    case 0xC43EE2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43E31.asm:84 STX @LOCAL02
    case 0xC43EE3: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C43E31.asm:86 LDA [@VIRTUAL06]
    case 0xC43EE5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C43E31.asm:87 AND #$00FF
    case 0xC43EE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43E31.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC43EE7.
    case 0xC43EE9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C43E31.asm:88 BEQ @UNKNOWN4
    case 0xC43EEA: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C43E31.asm:89 LDY @LOCAL03
    case 0xC43EEC: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C43E31.asm:93 BNEL @UNKNOWN0
    case 0xC43EEE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C43E31.asm:93 BNEL @UNKNOWN0
    case 0xC43EF0: cpu.execute_instruction<0x4C>(0x003E65, 3); return true;
    // src/unknown/C4/C43E31.asm:96 LDX @LOCAL02
    case 0xC43EF3: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C43E31.asm:97 TXA
    case 0xC43EF5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43E31.asm:98 END_C_FUNCTION
    case 0xC43EF6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43E31.asm:98 END_C_FUNCTION
    case 0xC43EF7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43EF8.asm (unresolved).
bool execute_unresolved_c4_c43ef8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43EF8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43EF8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43EF8.asm:11 END_STACK_VARS
    case 0xC43EFA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43EF8.asm:11 END_STACK_VARS
    case 0xC43EFB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43EF8.asm:11 END_STACK_VARS
    case 0xC43EFC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43EF8.asm:11 END_STACK_VARS
    case 0xC43EFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43EF8.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC43EFD.
    case 0xC43EFF: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43EF8.asm:11 END_STACK_VARS
    case 0xC43F00: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43EF8.asm:11 END_STACK_VARS
    case 0xC43F01: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43EF8.asm:12 STA @LOCAL03
    case 0xC43F02: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C43EF8.asm:12 STA @LOCAL03
    // Overlapping static entry reached from 0xC43EFF.
    case 0xC43F03: cpu.execute_instruction<0x16>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C43EF8.asm:13 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43F04: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C43EF8.asm:13 MOVE_INT @PARAM01, @VIRTUAL06
    // Overlapping static entry reached from 0xC43F03.
    case 0xC43F05: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C43EF8.asm:13 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43F06: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C43EF8.asm:13 MOVE_INT @PARAM01, @VIRTUAL06
    // Overlapping static entry reached from 0xC43F05.
    case 0xC43F07: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C43EF8.asm:13 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43F08: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C43EF8.asm:13 MOVE_INT @PARAM01, @VIRTUAL06
    // Overlapping static entry reached from 0xC43F07.
    case 0xC43F09: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C43EF8.asm:13 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43F0A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C43EF8.asm:14 LDA CURRENT_FOCUS_WINDOW
    case 0xC43F0C: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C43EF8.asm:15 ASL
    case 0xC43F0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43EF8.asm:16 TAX
    case 0xC43F10: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43EF8.asm:17 LDA OPEN_WINDOW_TABLE,X
    case 0xC43F11: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C43EF8.asm:18 LDY #.SIZEOF(window_stats)
    case 0xC43F14: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C43EF8.asm:18 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC43F14.
    case 0xC43F16: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43EF8.asm:19 JSL MULT168
    case 0xC43F17: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C43EF8.asm:20 CLC
    case 0xC43F1B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43EF8.asm:21 ADC #.LOWORD(WINDOW_STATS)
    case 0xC43F1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C4/C43EF8.asm:21 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC43F1C.
    case 0xC43F1E: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/unknown/C4/C43EF8.asm:22 TAX
    case 0xC43F1F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43EF8.asm:23 STX @LOCAL02
    case 0xC43F20: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C43EF8.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43F22: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C43EF8.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43F24: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C43EF8.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43F26: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C43EF8.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43F28: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C43EF8.asm:25 LDA @LOCAL03
    case 0xC43F2A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C43EF8.asm:26 JSL UNKNOWN_C43E31
    case 0xC43F2C: cpu.execute_instruction<0x22>(0xC43E31, 4); return true;
    // src/unknown/C4/C43EF8.asm:27 STA @VIRTUAL02
    case 0xC43F30: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43EF8.asm:28 LDX @LOCAL02
    case 0xC43F32: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C43EF8.asm:29 LDA a:window_stats::width,X
    case 0xC43F34: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C4/C43EF8.asm:30 ASL
    case 0xC43F37: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43EF8.asm:31 ASL
    case 0xC43F38: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43EF8.asm:32 ASL
    case 0xC43F39: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43EF8.asm:33 SEC
    case 0xC43F3A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C43EF8.asm:34 SBC @VIRTUAL02
    case 0xC43F3B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C43EF8.asm:35 LSR
    case 0xC43F3D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C43EF8.asm:36 STA @LOCAL01
    case 0xC43F3E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C43EF8.asm:37 LDA a:window_stats::text_y,X
    case 0xC43F40: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/unknown/C4/C43EF8.asm:38 TAX
    case 0xC43F43: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43EF8.asm:39 LDA @LOCAL01
    case 0xC43F44: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C43EF8.asm:40 JSL UNKNOWN_C43D75
    case 0xC43F46: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C4/C43EF8.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC43F4A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43EF8.asm:42 STZ FORCE_CENTRE_TEXT_ALIGNMENT
    case 0xC43F4C: cpu.execute_instruction<0x9C>(0x005E74, 3); return true;
    // src/unknown/C4/C43EF8.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC43F4F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43EF8.asm:44 END_C_FUNCTION
    case 0xC43F51: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43EF8.asm:44 END_C_FUNCTION
    case 0xC43F52: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43F53.asm (unresolved).
bool execute_unresolved_c4_c43f53_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43F53.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43F53: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43F53.asm:6 END_STACK_VARS
    case 0xC43F55: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43F53.asm:6 END_STACK_VARS
    case 0xC43F56: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43F53.asm:6 END_STACK_VARS
    case 0xC43F57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43F53.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC43F57.
    case 0xC43F59: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43F53.asm:6 END_STACK_VARS
    case 0xC43F5A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C43F53.asm:7 LDA #0
    case 0xC43F5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C43F53.asm:7 LDA #0
    // Overlapping static entry reached from 0xC43F5B.
    case 0xC43F5D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C43F53.asm:8 STA @LOCAL00
    case 0xC43F5E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43F53.asm:9 BRA @UNKNOWN1
    case 0xC43F60: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C4/C43F53.asm:11 ASL
    case 0xC43F62: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43F53.asm:12 TAX
    case 0xC43F63: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43F53.asm:13 LDA f:UNKNOWN_C20958,X
    case 0xC43F64: cpu.execute_instruction<0xBF>(0xC20958, 4); return true;
    // src/unknown/C4/C43F53.asm:14 STA USED_BG2_TILE_MAP,X
    case 0xC43F68: cpu.execute_instruction<0x9D>(0x001AD6, 3); return true;
    // src/unknown/C4/C43F53.asm:15 LDA @LOCAL00
    case 0xC43F6B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43F53.asm:16 INC
    case 0xC43F6D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C43F53.asm:17 STA @LOCAL00
    case 0xC43F6E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43F53.asm:19 CMP #32
    case 0xC43F70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C4/C43F53.asm:19 CMP #32
    // Overlapping static entry reached from 0xC43F70.
    case 0xC43F72: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C43F53.asm:20 BCC @UNKNOWN0
    case 0xC43F73: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43F53.asm:21 END_C_FUNCTION
    case 0xC43F75: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43F53.asm:21 END_C_FUNCTION
    case 0xC43F76: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43F77.asm (unresolved).
bool execute_unresolved_c4_c43f77_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43F77.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43F77: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43F77.asm:8 END_STACK_VARS
    case 0xC43F79: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43F77.asm:8 END_STACK_VARS
    case 0xC43F7A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43F77.asm:8 END_STACK_VARS
    case 0xC43F7B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43F77.asm:8 END_STACK_VARS
    case 0xC43F7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43F77.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC43F7C.
    case 0xC43F7E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43F77.asm:8 END_STACK_VARS
    case 0xC43F7F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43F77.asm:8 END_STACK_VARS
    case 0xC43F80: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:9 STA @VIRTUAL02
    case 0xC43F81: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43F77.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC43F7E.
    case 0xC43F82: cpu.execute_instruction<0x02>(0x0000AD, 2); return true;
    // src/unknown/C4/C43F77.asm:11 LDA CURRENT_FOCUS_WINDOW
    case 0xC43F83: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C43F77.asm:12 CMP #.LOWORD(-1)
    case 0xC43F86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C43F77.asm:12 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC43F86.
    case 0xC43F88: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C43F77.asm:13 BEQL @UNKNOWN9
    case 0xC43F89: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C43F77.asm:13 BEQL @UNKNOWN9
    case 0xC43F8B: cpu.execute_instruction<0x4C>(0x004068, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C43F77.asm:13 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC43F88.
    case 0xC43F8C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C43F77.asm:13 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC43F8C.
    case 0xC43F8D: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:15 LDA CURRENT_FOCUS_WINDOW
    case 0xC43F8E: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C43F77.asm:16 ASL
    case 0xC43F91: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:17 TAX
    case 0xC43F92: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xC43F93: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C43F77.asm:19 LDY #.SIZEOF(window_stats)
    case 0xC43F96: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C43F77.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC43F96.
    case 0xC43F98: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43F77.asm:20 JSL MULT168
    case 0xC43F99: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C43F77.asm:21 CLC
    case 0xC43F9D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:22 ADC #.LOWORD(WINDOW_STATS)
    case 0xC43F9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C4/C43F77.asm:22 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC43F9E.
    case 0xC43FA0: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/unknown/C4/C43F77.asm:23 TAX
    case 0xC43FA1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:24 CLC
    case 0xC43FA2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:25 ADC #window_stats::width
    case 0xC43FA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/C4/C43F77.asm:25 ADC #window_stats::width
    // Overlapping static entry reached from 0xC43FA3.
    case 0xC43FA5: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C43F77.asm:26 TAY
    case 0xC43FA6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:27 STY @LOCAL01
    case 0xC43FA7: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C43F77.asm:28 LDA a:window_stats::text_x,X
    case 0xC43FA9: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C4/C43F77.asm:29 ASL
    case 0xC43FAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:30 STA @VIRTUAL04
    case 0xC43FAD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C43F77.asm:31 LDA __BSS_START__,Y
    case 0xC43FAF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C43F77.asm:32 TAY
    case 0xC43FB2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:33 LDA a:window_stats::text_y,X
    case 0xC43FB3: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/unknown/C4/C43F77.asm:34 JSL MULT16
    case 0xC43FB6: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C43F77.asm:35 ASL
    case 0xC43FBA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:36 ASL
    case 0xC43FBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:37 CLC
    case 0xC43FBC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:38 ADC a:window_stats::tilemap_address,X
    case 0xC43FBD: cpu.execute_instruction<0x7D>(0x000035, 3); return true;
    // src/unknown/C4/C43F77.asm:39 CLC
    case 0xC43FC0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:40 ADC @VIRTUAL04
    case 0xC43FC1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C43F77.asm:41 TAX
    case 0xC43FC3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:42 STX @LOCAL00
    case 0xC43FC4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C43F77.asm:43 LDA __BSS_START__,X
    case 0xC43FC6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C43F77.asm:44 JSL FREE_TILE_SAFE
    case 0xC43FC9: cpu.execute_instruction<0x22>(0xC44E4D, 4); return true;
    // src/unknown/C4/C43F77.asm:45 LDY @LOCAL01
    case 0xC43FCD: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C43F77.asm:46 LDA __BSS_START__,Y
    case 0xC43FCF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C43F77.asm:47 ASL
    case 0xC43FD2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:48 STA @VIRTUAL04
    case 0xC43FD3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C43F77.asm:49 LDX @LOCAL00
    case 0xC43FD5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C43F77.asm:50 TXA
    case 0xC43FD7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:51 CLC
    case 0xC43FD8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:52 ADC @VIRTUAL04
    case 0xC43FD9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C43F77.asm:53 TAX
    case 0xC43FDB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:54 LDA __BSS_START__,X
    case 0xC43FDC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C43F77.asm:55 JSL FREE_TILE_SAFE
    case 0xC43FDF: cpu.execute_instruction<0x22>(0xC44E4D, 4); return true;
    // src/unknown/C4/C43F77.asm:56 LDA @VIRTUAL02
    case 0xC43FE3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C43F77.asm:57 CMP #47
    case 0xC43FE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C4/C43F77.asm:57 CMP #47
    // Overlapping static entry reached from 0xC43FE5.
    case 0xC43FE7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C43F77.asm:58 BNE @UNKNOWN1
    case 0xC43FE8: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C43F77.asm:59 SEP #PROC_FLAGS::ACCUM8
    case 0xC43FEA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43F77.asm:60 STZ VWF_INDENT_NEW_LINE
    case 0xC43FEC: cpu.execute_instruction<0x9C>(0x005E75, 3); return true;
    // src/unknown/C4/C43F77.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC43FEF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C43F77.asm:63 LDA @VIRTUAL02
    case 0xC43FF1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C43F77.asm:64 JSL REDIRECT_C10BA1
    case 0xC43FF3: cpu.execute_instruction<0x22>(0xC10C80, 4); return true;
    // src/unknown/C4/C43F77.asm:65 LDA CURRENT_FOCUS_WINDOW
    case 0xC43FF7: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C43F77.asm:66 ASL
    case 0xC43FFA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:67 TAX
    case 0xC43FFB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:68 LDA OPEN_WINDOW_TABLE,X
    case 0xC43FFC: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C43F77.asm:69 CMP WINDOW_TAIL
    case 0xC43FFF: cpu.execute_instruction<0xCD>(0x0088E2, 3); return true;
    // src/unknown/C4/C43F77.asm:70 BEQ @UNKNOWN2
    case 0xC44002: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C43F77.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC44004: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43F77.asm:72 LDA #1
    case 0xC44006: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C43F77.asm:73 STA REDRAW_ALL_WINDOWS
    case 0xC44008: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/unknown/C4/C43F77.asm:73 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC44006.
    case 0xC44009: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/unknown/C4/C43F77.asm:75 REP #PROC_FLAGS::ACCUM8
    case 0xC4400B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C43F77.asm:76 LDA TEXT_SOUND_MODE
    case 0xC4400D: cpu.execute_instruction<0xAD>(0x00964F, 3); return true;
    // src/unknown/C4/C43F77.asm:77 CMP #2
    case 0xC44010: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C43F77.asm:77 CMP #2
    // Overlapping static entry reached from 0xC44010.
    case 0xC44012: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C43F77.asm:78 BNE @UNKNOWN3
    case 0xC44013: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C43F77.asm:79 LDX #1
    case 0xC44015: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C43F77.asm:79 LDX #1
    // Overlapping static entry reached from 0xC44015.
    case 0xC44017: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C43F77.asm:80 BRA @UNKNOWN5
    case 0xC44018: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C4/C43F77.asm:82 LDA TEXT_SOUND_MODE
    case 0xC4401A: cpu.execute_instruction<0xAD>(0x00964F, 3); return true;
    // src/unknown/C4/C43F77.asm:83 CMP #3
    case 0xC4401D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C43F77.asm:83 CMP #3
    // Overlapping static entry reached from 0xC4401D.
    case 0xC4401F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C43F77.asm:84 BNE @UNKNOWN4
    case 0xC44020: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C43F77.asm:85 LDX #0
    case 0xC44022: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C43F77.asm:85 LDX #0
    // Overlapping static entry reached from 0xC44022.
    case 0xC44024: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C43F77.asm:86 BRA @UNKNOWN5
    case 0xC44025: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C4/C43F77.asm:88 LDX #0
    case 0xC44027: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C43F77.asm:88 LDX #0
    // Overlapping static entry reached from 0xC44027.
    case 0xC44029: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C43F77.asm:89 LDA BLINKING_TRIANGLE_FLAG
    case 0xC4402A: cpu.execute_instruction<0xAD>(0x00964D, 3); return true;
    // src/unknown/C4/C43F77.asm:90 BNE @UNKNOWN5
    case 0xC4402D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C4/C43F77.asm:91 LDX #1
    case 0xC4402F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C43F77.asm:91 LDX #1
    // Overlapping static entry reached from 0xC4402F.
    case 0xC44031: cpu.execute_instruction<0x00>(0x0000E0, 2); return true;
    // src/unknown/C4/C43F77.asm:93 CPX #0
    case 0xC44032: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C4/C43F77.asm:93 CPX #0
    // Overlapping static entry reached from 0xC44032.
    case 0xC44034: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C43F77.asm:94 BEQ @UNKNOWN6
    case 0xC44035: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C4/C43F77.asm:95 LDA INSTANT_PRINTING
    case 0xC44037: cpu.execute_instruction<0xAD>(0x009622, 3); return true;
    // src/unknown/C4/C43F77.asm:96 AND #$00FF
    case 0xC4403A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43F77.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC4403A.
    case 0xC4403C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C43F77.asm:97 BNE @UNKNOWN6
    case 0xC4403D: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C4/C43F77.asm:98 LDA @VIRTUAL02
    case 0xC4403F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C43F77.asm:99 CMP #32
    case 0xC44041: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C4/C43F77.asm:99 CMP #32
    // Overlapping static entry reached from 0xC44041.
    case 0xC44043: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C43F77.asm:100 BEQ @UNKNOWN6
    case 0xC44044: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C43F77.asm:101 LDA #SFX::TEXT_PRINT
    case 0xC44046: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C4/C43F77.asm:101 LDA #SFX::TEXT_PRINT
    // Overlapping static entry reached from 0xC44046.
    case 0xC44048: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43F77.asm:102 JSL PLAY_SOUND
    case 0xC44049: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C4/C43F77.asm:104 LDA INSTANT_PRINTING
    case 0xC4404D: cpu.execute_instruction<0xAD>(0x009622, 3); return true;
    // src/unknown/C4/C43F77.asm:105 AND #$00FF
    case 0xC44050: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43F77.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC44050.
    case 0xC44052: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C43F77.asm:106 BNE @UNKNOWN9
    case 0xC44053: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/C4/C43F77.asm:107 LDX SELECTED_TEXT_SPEED
    case 0xC44055: cpu.execute_instruction<0xAE>(0x009625, 3); return true;
    // src/unknown/C4/C43F77.asm:108 INX
    case 0xC44058: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:109 STX @LOCAL01
    case 0xC44059: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C43F77.asm:110 BRA @UNKNOWN8
    case 0xC4405B: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C4/C43F77.asm:112 JSL WINDOW_TICK
    case 0xC4405D: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C4/C43F77.asm:113 LDX @LOCAL01
    case 0xC44061: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C43F77.asm:114 DEX
    case 0xC44063: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C43F77.asm:115 STX @LOCAL01
    case 0xC44064: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C43F77.asm:117 BNE @UNKNOWN7
    case 0xC44066: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43F77.asm:119 END_C_FUNCTION
    case 0xC44068: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43F77.asm:119 END_C_FUNCTION
    case 0xC44069: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C440B5.asm (unresolved).
bool execute_unresolved_c4_c440b5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C440B5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC440B5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C440B5.asm:10 END_STACK_VARS
    case 0xC440B7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C440B5.asm:10 END_STACK_VARS
    case 0xC440B8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C440B5.asm:10 END_STACK_VARS
    case 0xC440B9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C440B5.asm:10 END_STACK_VARS
    case 0xC440BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C440B5.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC440BA.
    case 0xC440BC: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C440B5.asm:10 END_STACK_VARS
    case 0xC440BD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C440B5.asm:10 END_STACK_VARS
    case 0xC440BE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:11 STX @VIRTUAL04
    case 0xC440BF: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C440B5.asm:11 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC440BC.
    case 0xC440C0: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C4/C440B5.asm:12 STA @VIRTUAL02
    case 0xC440C1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C440B5.asm:12 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC440C0.
    case 0xC440C2: cpu.execute_instruction<0x02>(0x0000E2, 2); return true;
    // src/unknown/C4/C440B5.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC440C3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:14 STZ @LOCAL00
    case 0xC440C5: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C4/C440B5.asm:15 LDX #24
    case 0xC440C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000018, 2); else cpu.execute_instruction<0xA2>(0x000018, 3); return true;
    // src/unknown/C4/C440B5.asm:15 LDX #24
    // Overlapping static entry reached from 0xC440C7.
    case 0xC440C9: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C440B5.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC440CA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:17 LDA #.LOWORD(KEYBOARD_INPUT_CHARACTER_WIDTHS)
    case 0xC440CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x001B6E, 3); return true;
    // src/unknown/C4/C440B5.asm:17 LDA #.LOWORD(KEYBOARD_INPUT_CHARACTER_WIDTHS)
    // Overlapping static entry reached from 0xC440CC.
    case 0xC440CE: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:18 JSL MEMSET16
    case 0xC440CF: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C440B5.asm:19 LDY #0
    case 0xC440D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C440B5.asm:19 LDY #0
    // Overlapping static entry reached from 0xC440D3.
    case 0xC440D5: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C440B5.asm:20 STY @LOCAL02
    case 0xC440D6: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C440B5.asm:21 BRA @UNKNOWN1
    case 0xC440D8: cpu.execute_instruction<0x80>(0x000058, 2); return true;
    // src/unknown/C4/C440B5.asm:23 LDA @LOCAL01
    case 0xC440DA: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C4/C440B5.asm:24 AND #$00FF
    case 0xC440DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C440B5.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC440DC.
    case 0xC440DE: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C440B5.asm:25 SEC
    case 0xC440DF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:26 SBC #$50
    case 0xC440E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/unknown/C4/C440B5.asm:26 SBC #$50
    // Overlapping static entry reached from 0xC440E0.
    case 0xC440E2: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C440B5.asm:27 AND #$007F
    case 0xC440E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/unknown/C4/C440B5.asm:27 AND #$007F
    // Overlapping static entry reached from 0xC440E3.
    case 0xC440E5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C440B5.asm:28 TAX
    case 0xC440E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC440E7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:30 LDA @LOCAL01
    case 0xC440E9: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C4/C440B5.asm:31 STA KEYBOARD_INPUT_CHARACTERS,Y
    case 0xC440EB: cpu.execute_instruction<0x99>(0x001B86, 3); return true;
    // src/unknown/C4/C440B5.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC440EE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:33 TXA
    case 0xC440F0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC440F1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:35 STA KEYBOARD_INPUT_CHARACTER_OFFSETS,Y
    case 0xC440F3: cpu.execute_instruction<0x99>(0x001B56, 3); return true;
    // src/unknown/C4/C440B5.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC440F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C440B5.asm:37 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xC440F8: cpu.execute_instruction<0xAF>(0xC3F054, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C440B5.asm:37 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xC440FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C440B5.asm:37 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xC440FE: cpu.execute_instruction<0xAF>(0xC3F056, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C440B5.asm:37 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44102: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C440B5.asm:38 TXA
    case 0xC44104: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:39 CLC
    case 0xC44105: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:40 ADC @VIRTUAL06
    case 0xC44106: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C440B5.asm:41 STA @VIRTUAL06
    case 0xC44108: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C440B5.asm:42 LDA [@VIRTUAL06]
    case 0xC4410A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C440B5.asm:43 AND #$00FF
    case 0xC4410C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C440B5.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC4410C.
    case 0xC4410E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C440B5.asm:44 TAX
    case 0xC4410F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC44110: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:46 CLC
    case 0xC44112: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:47 ADC CHARACTER_PADDING
    case 0xC44113: cpu.execute_instruction<0x6D>(0x005E6D, 3); return true;
    // src/unknown/C4/C440B5.asm:48 STA KEYBOARD_INPUT_CHARACTER_WIDTHS,Y
    case 0xC44116: cpu.execute_instruction<0x99>(0x001B6E, 3); return true;
    // src/unknown/C4/C440B5.asm:49 LDX @VIRTUAL02
    case 0xC44119: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C440B5.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC4411B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:51 LDA __BSS_START__,X
    case 0xC4411D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C440B5.asm:52 AND #$00FF
    case 0xC44120: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C440B5.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC44120.
    case 0xC44122: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C440B5.asm:53 TAX
    case 0xC44123: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:54 LDA #0
    case 0xC44124: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C440B5.asm:54 LDA #0
    // Overlapping static entry reached from 0xC44124.
    case 0xC44126: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C440B5.asm:55 JSL UNKNOWN_C44E61
    case 0xC44127: cpu.execute_instruction<0x22>(0xC44E61, 4); return true;
    // src/unknown/C4/C440B5.asm:56 LDY @LOCAL02
    case 0xC4412B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C440B5.asm:57 INY
    case 0xC4412D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:58 STY @LOCAL02
    case 0xC4412E: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C440B5.asm:59 INC @VIRTUAL02
    case 0xC44130: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C440B5.asm:61 LDX @VIRTUAL02
    case 0xC44132: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C440B5.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC44134: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:63 LDA __BSS_START__,X
    case 0xC44136: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C440B5.asm:64 STA @LOCAL01
    case 0xC44139: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C4/C440B5.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC4413B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:66 AND #$00FF
    case 0xC4413D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C440B5.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC441A3.
    case 0xC4413E: cpu.execute_instruction<0xFF>(0x05F000, 4); return true;
    // src/unknown/C4/C440B5.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC4413D.
    case 0xC4413F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C440B5.asm:67 BEQ @UNKNOWN2
    case 0xC44140: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C440B5.asm:68 TYA
    case 0xC44142: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:69 CMP @VIRTUAL04
    case 0xC44143: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C440B5.asm:70 BNE @UNKNOWN0
    case 0xC44145: cpu.execute_instruction<0xD0>(0x000093, 2); return true;
    // src/unknown/C4/C440B5.asm:72 STY NEXT_KEYBOARD_INPUT_INDEX
    case 0xC44147: cpu.execute_instruction<0x8C>(0x009662, 3); return true;
    // src/unknown/C4/C440B5.asm:73 TYA
    case 0xC4414A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:74 CMP @VIRTUAL04
    case 0xC4414B: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C440B5.asm:75 BCS @UNKNOWN7
    case 0xC4414D: cpu.execute_instruction<0xB0>(0x000066, 2); return true;
    // src/unknown/C4/C440B5.asm:76 SEP #PROC_FLAGS::ACCUM8
    case 0xC4414F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:77 LDA #32
    case 0xC44151: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x009920, 3); return true;
    // src/unknown/C4/C440B5.asm:78 STA KEYBOARD_INPUT_CHARACTER_OFFSETS,Y
    case 0xC44153: cpu.execute_instruction<0x99>(0x001B56, 3); return true;
    // src/unknown/C4/C440B5.asm:78 STA KEYBOARD_INPUT_CHARACTER_OFFSETS,Y
    // Overlapping static entry reached from 0xC44151.
    case 0xC44154: cpu.execute_instruction<0x56>(0x00001B, 2); return true;
    // src/unknown/C4/C440B5.asm:79 LDA #6
    case 0xC44156: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009906, 3); return true;
    // src/unknown/C4/C440B5.asm:80 STA KEYBOARD_INPUT_CHARACTER_WIDTHS,Y
    case 0xC44158: cpu.execute_instruction<0x99>(0x001B6E, 3); return true;
    // src/unknown/C4/C440B5.asm:80 STA KEYBOARD_INPUT_CHARACTER_WIDTHS,Y
    // Overlapping static entry reached from 0xC44156.
    case 0xC44159: cpu.execute_instruction<0x6E>(0x00A21B, 3); return true;
    // src/unknown/C4/C440B5.asm:81 LDX #112
    case 0xC4415B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000070, 2); else cpu.execute_instruction<0xA2>(0x000070, 3); return true;
    // src/unknown/C4/C440B5.asm:81 LDX #112
    // Overlapping static entry reached from 0xC44159.
    case 0xC4415C: cpu.execute_instruction<0x70>(0x000000, 2); return true;
    // src/unknown/C4/C440B5.asm:81 LDX #112
    // Overlapping static entry reached from 0xC4415B.
    case 0xC4415D: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C440B5.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC4415E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:83 LDA #0
    case 0xC44160: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C440B5.asm:83 LDA #0
    // Overlapping static entry reached from 0xC44160.
    case 0xC44162: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C440B5.asm:84 JSL UNKNOWN_C44E61
    case 0xC44163: cpu.execute_instruction<0x22>(0xC44E61, 4); return true;
    // src/unknown/C4/C440B5.asm:85 LDY @LOCAL02
    case 0xC44167: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C440B5.asm:86 TYX
    case 0xC44169: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC4416A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:88 STZ KEYBOARD_INPUT_CHARACTERS,X
    case 0xC4416C: cpu.execute_instruction<0x9E>(0x001B86, 3); return true;
    // src/unknown/C4/C440B5.asm:89 INY
    case 0xC4416F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:90 STY @LOCAL02
    case 0xC44170: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C440B5.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC44172: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:92 LDA @VIRTUAL04
    case 0xC44174: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C440B5.asm:93 STY @VIRTUAL04
    case 0xC44176: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C440B5.asm:94 SEC
    case 0xC44178: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:95 SBC @VIRTUAL04
    case 0xC44179: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C4/C440B5.asm:96 STA @VIRTUAL02
    case 0xC4417B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C440B5.asm:97 CLC
    case 0xC4417D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:98 SBC #0
    case 0xC4417E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/unknown/C4/C440B5.asm:98 SBC #0
    // Overlapping static entry reached from 0xC4417E.
    case 0xC44180: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C440B5.asm:99 BRANCHLTEQS @UNKNOWN7
    case 0xC44181: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C440B5.asm:99 BRANCHLTEQS @UNKNOWN7
    case 0xC44183: cpu.execute_instruction<0x10>(0x000030, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C440B5.asm:99 BRANCHLTEQS @UNKNOWN7
    case 0xC44185: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C440B5.asm:99 BRANCHLTEQS @UNKNOWN7
    case 0xC44187: cpu.execute_instruction<0x30>(0x00002C, 2); return true;
    // src/unknown/C4/C440B5.asm:100 BRA @UNKNOWN6
    case 0xC44189: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C4/C440B5.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC4418B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:103 LDA #3
    case 0xC4418D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x009903, 3); return true;
    // src/unknown/C4/C440B5.asm:104 STA KEYBOARD_INPUT_CHARACTER_OFFSETS,Y
    case 0xC4418F: cpu.execute_instruction<0x99>(0x001B56, 3); return true;
    // src/unknown/C4/C440B5.asm:104 STA KEYBOARD_INPUT_CHARACTER_OFFSETS,Y
    // Overlapping static entry reached from 0xC4418D.
    case 0xC44190: cpu.execute_instruction<0x56>(0x00001B, 2); return true;
    // src/unknown/C4/C440B5.asm:105 LDX #83
    case 0xC44192: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000053, 2); else cpu.execute_instruction<0xA2>(0x000053, 3); return true;
    // src/unknown/C4/C440B5.asm:105 LDX #83
    // Overlapping static entry reached from 0xC44192.
    case 0xC44194: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C440B5.asm:106 REP #PROC_FLAGS::ACCUM8
    case 0xC44195: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:107 LDA #0
    case 0xC44197: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C440B5.asm:107 LDA #0
    // Overlapping static entry reached from 0xC44197.
    case 0xC44199: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C440B5.asm:108 JSL UNKNOWN_C44E61
    case 0xC4419A: cpu.execute_instruction<0x22>(0xC44E61, 4); return true;
    // src/unknown/C4/C440B5.asm:109 SEP #PROC_FLAGS::ACCUM8
    case 0xC4419E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:110 LDA #3
    case 0xC441A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x00A403, 3); return true;
    // src/unknown/C4/C440B5.asm:111 LDY @LOCAL02
    case 0xC441A2: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C440B5.asm:111 LDY @LOCAL02
    // Overlapping static entry reached from 0xC441A0.
    case 0xC441A3: cpu.execute_instruction<0x10>(0x000099, 2); return true;
    // src/unknown/C4/C440B5.asm:112 STA KEYBOARD_INPUT_CHARACTER_WIDTHS,Y
    case 0xC441A4: cpu.execute_instruction<0x99>(0x001B6E, 3); return true;
    // src/unknown/C4/C440B5.asm:112 STA KEYBOARD_INPUT_CHARACTER_WIDTHS,Y
    // Overlapping static entry reached from 0xC441A3.
    case 0xC441A5: cpu.execute_instruction<0x6E>(0x00C21B, 3); return true;
    // src/unknown/C4/C440B5.asm:113 REP #PROC_FLAGS::ACCUM8
    case 0xC441A7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C440B5.asm:113 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC441A5.
    case 0xC441A8: cpu.execute_instruction<0x20>(0x0002A5, 3); return true;
    // src/unknown/C4/C440B5.asm:114 LDA @VIRTUAL02
    case 0xC441A9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C440B5.asm:115 DEC
    case 0xC441AB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:116 STA @VIRTUAL02
    case 0xC441AC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C440B5.asm:117 INY
    case 0xC441AE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:118 STY @LOCAL02
    case 0xC441AF: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C440B5.asm:120 LDA @VIRTUAL02
    case 0xC441B1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C440B5.asm:121 BNE @UNKNOWN5
    case 0xC441B3: cpu.execute_instruction<0xD0>(0x0000D6, 2); return true;
    // src/unknown/C4/C440B5.asm:123 PLD
    case 0xC441B5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C440B5.asm:124 RTL
    case 0xC441B6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C441B7.asm (unresolved).
bool execute_unresolved_c4_c441b7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C441B7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC441B7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C441B7.asm:8 END_STACK_VARS
    case 0xC441B9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C441B7.asm:8 END_STACK_VARS
    case 0xC441BA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C441B7.asm:8 END_STACK_VARS
    case 0xC441BB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C441B7.asm:8 END_STACK_VARS
    case 0xC441BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EF, 2); else cpu.execute_instruction<0x69>(0x00FFEF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C441B7.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC441BC.
    case 0xC441BE: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C441B7.asm:8 END_STACK_VARS
    case 0xC441BF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C441B7.asm:8 END_STACK_VARS
    case 0xC441C0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C441B7.asm:9 STA @VIRTUAL04
    case 0xC441C1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C441B7.asm:9 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC441BE.
    case 0xC441C2: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // src/unknown/C4/C441B7.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC441C3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C441B7.asm:10 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC441C2.
    case 0xC441C4: cpu.execute_instruction<0x20>(0x00FFA9, 3); return true;
    // src/unknown/C4/C441B7.asm:11 LDA #$00FF
    case 0xC441C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C4/C441B7.asm:12 STA @LOCAL00
    case 0xC441C7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C441B7.asm:12 STA @LOCAL00
    // Overlapping static entry reached from 0xC441C5.
    case 0xC441C8: cpu.execute_instruction<0x0E>(0x0080A2, 3); return true;
    // src/unknown/C4/C441B7.asm:13 LDX #32 * 52
    case 0xC441C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000680, 3); return true;
    // src/unknown/C4/C441B7.asm:13 LDX #32 * 52
    // Overlapping static entry reached from 0xC441C9.
    case 0xC441CB: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C441B7.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xC441CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C441B7.asm:14 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC441CB.
    case 0xC441CD: cpu.execute_instruction<0x20>(0x0092A9, 3); return true;
    // src/unknown/C4/C441B7.asm:15 LDA #.LOWORD(VWF_BUFFER)
    case 0xC441CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // src/unknown/C4/C441B7.asm:15 LDA #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC441CE.
    case 0xC441D0: cpu.execute_instruction<0x34>(0x000022, 2); return true;
    // src/unknown/C4/C441B7.asm:16 JSL MEMSET16
    case 0xC441D1: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C441B7.asm:16 JSL MEMSET16
    // Overlapping static entry reached from 0xC441D0.
    case 0xC441D2: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/unknown/C4/C441B7.asm:17 LDA #3
    case 0xC441D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C4/C441B7.asm:17 LDA #3
    // Overlapping static entry reached from 0xC441D5.
    case 0xC441D7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C441B7.asm:18 STA @VIRTUAL02
    case 0xC441D8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C441B7.asm:19 STZ NEXT_KEYBOARD_INPUT_INDEX
    case 0xC441DA: cpu.execute_instruction<0x9C>(0x009662, 3); return true;
    // src/unknown/C4/C441B7.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC441DD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C441B7.asm:21 STZ @LOCAL00
    case 0xC441DF: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C4/C441B7.asm:22 LDX #24
    case 0xC441E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000018, 2); else cpu.execute_instruction<0xA2>(0x000018, 3); return true;
    // src/unknown/C4/C441B7.asm:22 LDX #24
    // Overlapping static entry reached from 0xC441E1.
    case 0xC441E3: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C441B7.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC441E4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C441B7.asm:24 LDA #.LOWORD(KEYBOARD_INPUT_CHARACTERS)
    case 0xC441E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x001B86, 3); return true;
    // src/unknown/C4/C441B7.asm:24 LDA #.LOWORD(KEYBOARD_INPUT_CHARACTERS)
    // Overlapping static entry reached from 0xC441E6.
    case 0xC441E8: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C4/C441B7.asm:25 JSL MEMSET16
    case 0xC441E9: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C441B7.asm:26 LDX #112
    case 0xC441ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000070, 2); else cpu.execute_instruction<0xA2>(0x000070, 3); return true;
    // src/unknown/C4/C441B7.asm:26 LDX #112
    // Overlapping static entry reached from 0xC441ED.
    case 0xC441EF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C441B7.asm:27 LDA #0
    case 0xC441F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C441B7.asm:27 LDA #0
    // Overlapping static entry reached from 0xC441F0.
    case 0xC441F2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C441B7.asm:28 JSL UNKNOWN_C44E61
    case 0xC441F3: cpu.execute_instruction<0x22>(0xC44E61, 4); return true;
    // src/unknown/C4/C441B7.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC441F7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C441B7.asm:30 LDA #32
    case 0xC441F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008D20, 3); return true;
    // src/unknown/C4/C441B7.asm:31 STA KEYBOARD_INPUT_CHARACTER_OFFSETS
    case 0xC441FB: cpu.execute_instruction<0x8D>(0x001B56, 3); return true;
    // src/unknown/C4/C441B7.asm:31 STA KEYBOARD_INPUT_CHARACTER_OFFSETS
    // Overlapping static entry reached from 0xC441F9.
    case 0xC441FC: cpu.execute_instruction<0x56>(0x00001B, 2); return true;
    // src/unknown/C4/C441B7.asm:32 LDY #1
    case 0xC441FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C441B7.asm:32 LDY #1
    // Overlapping static entry reached from 0xC441FE.
    case 0xC44200: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C441B7.asm:33 STY @LOCAL01
    case 0xC44201: cpu.execute_instruction<0x84>(0x00000F, 2); return true;
    // src/unknown/C4/C441B7.asm:34 BRA @UNKNOWN1
    case 0xC44203: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/unknown/C4/C441B7.asm:36 LDA @VIRTUAL02
    case 0xC44205: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C441B7.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC44207: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C441B7.asm:38 STA KEYBOARD_INPUT_CHARACTER_OFFSETS,Y
    case 0xC44209: cpu.execute_instruction<0x99>(0x001B56, 3); return true;
    // src/unknown/C4/C441B7.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC4420C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C441B7.asm:40 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xC4420E: cpu.execute_instruction<0xAF>(0xC3F054, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C441B7.asm:40 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44212: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C441B7.asm:40 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44214: cpu.execute_instruction<0xAF>(0xC3F056, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C441B7.asm:40 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44218: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C441B7.asm:41 LDA @VIRTUAL02
    case 0xC4421A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C441B7.asm:42 CLC
    case 0xC4421C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C441B7.asm:43 ADC @VIRTUAL06
    case 0xC4421D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C441B7.asm:44 STA @VIRTUAL06
    case 0xC4421F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C441B7.asm:45 LDA [@VIRTUAL06]
    case 0xC44221: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C441B7.asm:46 AND #$00FF
    case 0xC44223: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C441B7.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC44223.
    case 0xC44225: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C441B7.asm:47 TAX
    case 0xC44226: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C441B7.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC44227: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C441B7.asm:49 CLC
    case 0xC44229: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C441B7.asm:50 ADC CHARACTER_PADDING
    case 0xC4422A: cpu.execute_instruction<0x6D>(0x005E6D, 3); return true;
    // src/unknown/C4/C441B7.asm:51 STA KEYBOARD_INPUT_CHARACTER_WIDTHS,Y
    case 0xC4422D: cpu.execute_instruction<0x99>(0x001B6E, 3); return true;
    // src/unknown/C4/C441B7.asm:52 LDX #83
    case 0xC44230: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000053, 2); else cpu.execute_instruction<0xA2>(0x000053, 3); return true;
    // src/unknown/C4/C441B7.asm:52 LDX #83
    // Overlapping static entry reached from 0xC44230.
    case 0xC44232: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C441B7.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC44233: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C441B7.asm:54 LDA #0
    case 0xC44235: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C441B7.asm:54 LDA #0
    // Overlapping static entry reached from 0xC44235.
    case 0xC44237: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C441B7.asm:55 JSL UNKNOWN_C44E61
    case 0xC44238: cpu.execute_instruction<0x22>(0xC44E61, 4); return true;
    // src/unknown/C4/C441B7.asm:56 LDY @LOCAL01
    case 0xC4423C: cpu.execute_instruction<0xA4>(0x00000F, 2); return true;
    // src/unknown/C4/C441B7.asm:57 INY
    case 0xC4423E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C441B7.asm:58 STY @LOCAL01
    case 0xC4423F: cpu.execute_instruction<0x84>(0x00000F, 2); return true;
    // src/unknown/C4/C441B7.asm:60 REP #PROC_FLAGS::ACCUM8
    case 0xC44241: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C441B7.asm:61 TYA
    case 0xC44243: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C441B7.asm:62 CMP @VIRTUAL04
    case 0xC44244: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C441B7.asm:63 BCC @UNKNOWN0
    case 0xC44246: cpu.execute_instruction<0x90>(0x0000BD, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C441B7.asm:64 END_C_FUNCTION
    case 0xC44248: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C441B7.asm:64 END_C_FUNCTION
    case 0xC44249: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4424A.asm (unresolved).
bool execute_unresolved_c4_c4424a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4424A.asm:3 BEGIN_C_FUNCTION
    case 0xC4424A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4424A.asm:7 END_STACK_VARS
    case 0xC4424C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4424A.asm:7 END_STACK_VARS
    case 0xC4424D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4424A.asm:7 END_STACK_VARS
    case 0xC4424E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4424A.asm:7 END_STACK_VARS
    case 0xC4424F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4424A.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4424F.
    case 0xC44251: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4424A.asm:7 END_STACK_VARS
    case 0xC44252: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4424A.asm:7 END_STACK_VARS
    case 0xC44253: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4424A.asm:8 STA @LOCAL00
    case 0xC44254: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4424A.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC44251.
    case 0xC44255: cpu.execute_instruction<0x0E>(0x0070C9, 3); return true;
    // src/unknown/C4/C4424A.asm:9 CMP #112
    case 0xC44256: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000070, 2); else cpu.execute_instruction<0xC9>(0x000070, 3); return true;
    // src/unknown/C4/C4424A.asm:9 CMP #112
    // Overlapping static entry reached from 0xC44256.
    case 0xC44258: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4424A.asm:10 BNE @UNKNOWN0
    case 0xC44259: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C4/C4424A.asm:11 LDX NEXT_KEYBOARD_INPUT_INDEX
    case 0xC4425B: cpu.execute_instruction<0xAE>(0x009662, 3); return true;
    // src/unknown/C4/C4424A.asm:12 SEP #PROC_FLAGS::ACCUM8
    case 0xC4425E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4424A.asm:13 STZ KEYBOARD_INPUT_CHARACTERS,X
    case 0xC44260: cpu.execute_instruction<0x9E>(0x001B86, 3); return true;
    // src/unknown/C4/C4424A.asm:14 BRA @UNKNOWN1
    case 0xC44263: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C4/C4424A.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC44265: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4424A.asm:17 LDX NEXT_KEYBOARD_INPUT_INDEX
    case 0xC44267: cpu.execute_instruction<0xAE>(0x009662, 3); return true;
    // src/unknown/C4/C4424A.asm:18 STA KEYBOARD_INPUT_CHARACTERS,X
    case 0xC4426A: cpu.execute_instruction<0x9D>(0x001B86, 3); return true;
    // src/unknown/C4/C4424A.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC4426D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4424A.asm:21 LDA @LOCAL00
    case 0xC4426F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4424A.asm:22 SEC
    case 0xC44271: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4424A.asm:23 SBC #$50
    case 0xC44272: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/unknown/C4/C4424A.asm:23 SBC #$50
    // Overlapping static entry reached from 0xC44272.
    case 0xC44274: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C4424A.asm:24 AND #$007F
    case 0xC44275: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/unknown/C4/C4424A.asm:24 AND #$007F
    // Overlapping static entry reached from 0xC44275.
    case 0xC44277: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4424A.asm:25 STA @LOCAL00
    case 0xC44278: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4424A.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC4427A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4424A.asm:27 LDX NEXT_KEYBOARD_INPUT_INDEX
    case 0xC4427C: cpu.execute_instruction<0xAE>(0x009662, 3); return true;
    // src/unknown/C4/C4424A.asm:28 STA KEYBOARD_INPUT_CHARACTER_OFFSETS,X
    case 0xC4427F: cpu.execute_instruction<0x9D>(0x001B56, 3); return true;
    // src/unknown/C4/C4424A.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC44282: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4424A.asm:30 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44284: cpu.execute_instruction<0xAF>(0xC3F054, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4424A.asm:30 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44288: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4424A.asm:30 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xC4428A: cpu.execute_instruction<0xAF>(0xC3F056, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4424A.asm:30 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xC4428E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4424A.asm:31 LDA @LOCAL00
    case 0xC44290: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4424A.asm:32 CLC
    case 0xC44292: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4424A.asm:33 ADC @VIRTUAL06
    case 0xC44293: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4424A.asm:34 STA @VIRTUAL06
    case 0xC44295: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4424A.asm:35 LDA [@VIRTUAL06]
    case 0xC44297: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4424A.asm:36 AND #$00FF
    case 0xC44299: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4424A.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC44299.
    case 0xC4429B: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C4424A.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC4429C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4424A.asm:38 CLC
    case 0xC4429E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4424A.asm:39 ADC CHARACTER_PADDING
    case 0xC4429F: cpu.execute_instruction<0x6D>(0x005E6D, 3); return true;
    // src/unknown/C4/C4424A.asm:40 LDX NEXT_KEYBOARD_INPUT_INDEX
    case 0xC442A2: cpu.execute_instruction<0xAE>(0x009662, 3); return true;
    // src/unknown/C4/C4424A.asm:41 STA KEYBOARD_INPUT_CHARACTER_WIDTHS,X
    case 0xC442A5: cpu.execute_instruction<0x9D>(0x001B6E, 3); return true;
    // src/unknown/C4/C4424A.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC442A8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4424A.asm:43 END_C_FUNCTION
    case 0xC442AA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4424A.asm:43 END_C_FUNCTION
    case 0xC442AB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C442AC.asm (unresolved).
bool execute_unresolved_c4_c442ac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C442AC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC442AC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C442AC.asm:16 END_STACK_VARS
    case 0xC442AE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C442AC.asm:16 END_STACK_VARS
    case 0xC442AF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C442AC.asm:16 END_STACK_VARS
    case 0xC442B0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C442AC.asm:16 END_STACK_VARS
    case 0xC442B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C442AC.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC442B1.
    case 0xC442B3: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C442AC.asm:16 END_STACK_VARS
    case 0xC442B4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C442AC.asm:16 END_STACK_VARS
    case 0xC442B5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:17 STY @LOCAL06
    case 0xC442B6: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C4/C442AC.asm:17 STY @LOCAL06
    // Overlapping static entry reached from 0xC442B3.
    case 0xC442B7: cpu.execute_instruction<0x1C>(0x001A86, 3); return true;
    // src/unknown/C4/C442AC.asm:18 STX @LOCAL05
    case 0xC442B8: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C4/C442AC.asm:19 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC442BA: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C4/C442AC.asm:20 STZ VWF_TILE
    case 0xC442BE: cpu.execute_instruction<0x9C>(0x009E25, 3); return true;
    // src/unknown/C4/C442AC.asm:21 STZ VWF_X
    case 0xC442C1: cpu.execute_instruction<0x9C>(0x009E23, 3); return true;
    // src/unknown/C4/C442AC.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC442C4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C442AC.asm:23 LDA #<-1
    case 0xC442C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C4/C442AC.asm:24 STA @LOCAL00
    case 0xC442C8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C442AC.asm:24 STA @LOCAL00
    // Overlapping static entry reached from 0xC442C6.
    case 0xC442C9: cpu.execute_instruction<0x0E>(0x0040A2, 3); return true;
    // src/unknown/C4/C442AC.asm:25 LDX #32 * 26
    case 0xC442CA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000340, 3); return true;
    // src/unknown/C4/C442AC.asm:25 LDX #32 * 26
    // Overlapping static entry reached from 0xC442CA.
    case 0xC442CC: cpu.execute_instruction<0x03>(0x0000C2, 2); return true;
    // src/unknown/C4/C442AC.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC442CD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C442AC.asm:26 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC442CC.
    case 0xC442CE: cpu.execute_instruction<0x20>(0x0092A9, 3); return true;
    // src/unknown/C4/C442AC.asm:27 LDA #.LOWORD(VWF_BUFFER)
    case 0xC442CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // src/unknown/C4/C442AC.asm:27 LDA #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC442CF.
    case 0xC442D1: cpu.execute_instruction<0x34>(0x000022, 2); return true;
    // src/unknown/C4/C442AC.asm:28 JSL MEMSET16
    case 0xC442D2: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C442AC.asm:28 JSL MEMSET16
    // Overlapping static entry reached from 0xC442D1.
    case 0xC442D3: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/unknown/C4/C442AC.asm:29 STZ TEXT_RENDER_STATE + 2
    case 0xC442D6: cpu.execute_instruction<0x9C>(0x009654, 3); return true;
    // src/unknown/C4/C442AC.asm:30 STZ TEXT_RENDER_STATE
    case 0xC442D9: cpu.execute_instruction<0x9C>(0x009652, 3); return true;
    // src/unknown/C4/C442AC.asm:31 LDA CURRENT_FOCUS_WINDOW
    case 0xC442DC: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C442AC.asm:32 ASL
    case 0xC442DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:33 TAX
    case 0xC442E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:34 LDA OPEN_WINDOW_TABLE,X
    case 0xC442E1: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C442AC.asm:35 LDY #.SIZEOF(window_stats)
    case 0xC442E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C442AC.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC442E4.
    case 0xC442E6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C442AC.asm:36 JSL MULT168
    case 0xC442E7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C442AC.asm:37 CLC
    case 0xC442EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:38 ADC #.LOWORD(WINDOW_STATS)
    case 0xC442EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C4/C442AC.asm:38 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC442EC.
    case 0xC442EE: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/unknown/C4/C442AC.asm:39 STA @LOCAL04
    case 0xC442EF: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C442AC.asm:39 STA @LOCAL04
    // Overlapping static entry reached from 0xC442EE.
    case 0xC442F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:40 LDA @LOCAL06
    case 0xC442F1: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C442AC.asm:41 CMP #.LOWORD(-1)
    case 0xC442F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C442AC.asm:41 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC442F3.
    case 0xC442F5: cpu.execute_instruction<0xFF>(0xAD23D0, 4); return true;
    // src/unknown/C4/C442AC.asm:42 BNE @UNKNOWN2
    case 0xC442F6: cpu.execute_instruction<0xD0>(0x000023, 2); return true;
    // src/unknown/C4/C442AC.asm:43 LDA NEXT_KEYBOARD_INPUT_INDEX
    case 0xC442F8: cpu.execute_instruction<0xAD>(0x009662, 3); return true;
    // src/unknown/C4/C442AC.asm:43 LDA NEXT_KEYBOARD_INPUT_INDEX
    // Overlapping static entry reached from 0xC442F5.
    case 0xC442F9: cpu.execute_instruction<0x62>(0x00D096, 3); return true;
    // src/unknown/C4/C442AC.asm:44 BNE @UNKNOWN0
    case 0xC442FB: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C4/C442AC.asm:44 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC442F9.
    case 0xC442FC: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // src/unknown/C4/C442AC.asm:45 LDA #TRUE
    case 0xC442FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C442AC.asm:45 LDA #TRUE
    // Overlapping static entry reached from 0xC442FC.
    case 0xC442FE: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C4/C442AC.asm:45 LDA #TRUE
    // Overlapping static entry reached from 0xC442FD.
    case 0xC442FF: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C4/C442AC.asm:46 JMP @RETURN
    case 0xC44300: cpu.execute_instruction<0x4C>(0x0044F9, 3); return true;
    // src/unknown/C4/C442AC.asm:48 LDA NEXT_KEYBOARD_INPUT_INDEX
    case 0xC44303: cpu.execute_instruction<0xAD>(0x009662, 3); return true;
    // src/unknown/C4/C442AC.asm:49 CMP @LOCAL05
    case 0xC44306: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C4/C442AC.asm:50 BCS @UNKNOWN1
    case 0xC44308: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/unknown/C4/C442AC.asm:51 LDA #83
    case 0xC4430A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000053, 2); else cpu.execute_instruction<0xA9>(0x000053, 3); return true;
    // src/unknown/C4/C442AC.asm:51 LDA #83
    // Overlapping static entry reached from 0xC4430A.
    case 0xC4430C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C442AC.asm:52 JSR UNKNOWN_C4424A
    case 0xC4430D: cpu.execute_instruction<0x20>(0x00424A, 3); return true;
    // src/unknown/C4/C442AC.asm:54 DEC NEXT_KEYBOARD_INPUT_INDEX
    case 0xC44310: cpu.execute_instruction<0xCE>(0x009662, 3); return true;
    // src/unknown/C4/C442AC.asm:55 LDA #112
    case 0xC44313: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x000070, 3); return true;
    // src/unknown/C4/C442AC.asm:55 LDA #112
    // Overlapping static entry reached from 0xC44313.
    case 0xC44315: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C442AC.asm:56 JSR UNKNOWN_C4424A
    case 0xC44316: cpu.execute_instruction<0x20>(0x00424A, 3); return true;
    // src/unknown/C4/C442AC.asm:57 BRA @UNKNOWN4
    case 0xC44319: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C4/C442AC.asm:59 LDA @LOCAL05
    case 0xC4431B: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C442AC.asm:60 DEC
    case 0xC4431D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:61 CMP NEXT_KEYBOARD_INPUT_INDEX
    case 0xC4431E: cpu.execute_instruction<0xCD>(0x009662, 3); return true;
    // src/unknown/C4/C442AC.asm:62 BCS @UNKNOWN3
    case 0xC44321: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/unknown/C4/C442AC.asm:63 LDA #FALSE
    case 0xC44323: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C442AC.asm:63 LDA #FALSE
    // Overlapping static entry reached from 0xC44323.
    case 0xC44325: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C4/C442AC.asm:64 JMP @RETURN
    case 0xC44326: cpu.execute_instruction<0x4C>(0x0044F9, 3); return true;
    // src/unknown/C4/C442AC.asm:66 LDA @LOCAL06
    case 0xC44329: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C442AC.asm:67 JSR UNKNOWN_C4424A
    case 0xC4432B: cpu.execute_instruction<0x20>(0x00424A, 3); return true;
    // src/unknown/C4/C442AC.asm:68 LDA NEXT_KEYBOARD_INPUT_INDEX
    case 0xC4432E: cpu.execute_instruction<0xAD>(0x009662, 3); return true;
    // src/unknown/C4/C442AC.asm:69 INC
    case 0xC44331: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:70 STA NEXT_KEYBOARD_INPUT_INDEX
    case 0xC44332: cpu.execute_instruction<0x8D>(0x009662, 3); return true;
    // src/unknown/C4/C442AC.asm:71 CMP @LOCAL05
    case 0xC44335: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C4/C442AC.asm:72 BCS @UNKNOWN4
    case 0xC44337: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/unknown/C4/C442AC.asm:73 LDA #112
    case 0xC44339: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x000070, 3); return true;
    // src/unknown/C4/C442AC.asm:73 LDA #112
    // Overlapping static entry reached from 0xC44339.
    case 0xC4433B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C442AC.asm:74 JSR UNKNOWN_C4424A
    case 0xC4433C: cpu.execute_instruction<0x20>(0x00424A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C442AC.asm:76 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC4433F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x00F054, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C442AC.asm:76 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4433F.
    case 0xC44341: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C442AC.asm:76 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44342: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C442AC.asm:76 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44341.
    case 0xC44343: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C442AC.asm:76 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44344: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C442AC.asm:76 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44343.
    case 0xC44345: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C442AC.asm:76 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44344.
    case 0xC44346: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C442AC.asm:76 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44347: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C442AC.asm:77 LDY #font_table_entry::width
    case 0xC44349: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C442AC.asm:77 LDY #font_table_entry::width
    // Overlapping static entry reached from 0xC44349.
    case 0xC4434B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C442AC.asm:78 LDA [@VIRTUAL06],Y
    case 0xC4434C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C442AC.asm:79 STA @VIRTUAL04
    case 0xC4434E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C442AC.asm:80 LDX @LOCAL04
    case 0xC44350: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C4/C442AC.asm:81 STZ a:window_stats::text_x,X
    case 0xC44352: cpu.execute_instruction<0x9E>(0x00000E, 3); return true;
    // src/unknown/C4/C442AC.asm:82 LDY #font_table_entry::height
    case 0xC44355: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C442AC.asm:82 LDY #font_table_entry::height
    // Overlapping static entry reached from 0xC44355.
    case 0xC44357: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C442AC.asm:83 LDA [@VIRTUAL06],Y
    case 0xC44358: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C442AC.asm:84 STA @LOCAL03
    case 0xC4435A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C442AC.asm:85 LDA #0
    case 0xC4435C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C442AC.asm:85 LDA #0
    // Overlapping static entry reached from 0xC4435C.
    case 0xC4435E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C442AC.asm:86 STA @VIRTUAL02
    case 0xC4435F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:87 BRA @UNKNOWN8
    case 0xC44361: cpu.execute_instruction<0x80>(0x000065, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C442AC.asm:89 MOVE_INT FONT_PTR_TABLE + font_table_entry::graphics, @VIRTUAL06
    case 0xC44363: cpu.execute_instruction<0xAF>(0xC3F058, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C442AC.asm:89 MOVE_INT FONT_PTR_TABLE + font_table_entry::graphics, @VIRTUAL06
    case 0xC44367: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C442AC.asm:89 MOVE_INT FONT_PTR_TABLE + font_table_entry::graphics, @VIRTUAL06
    case 0xC44369: cpu.execute_instruction<0xAF>(0xC3F05A, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C442AC.asm:89 MOVE_INT FONT_PTR_TABLE + font_table_entry::graphics, @VIRTUAL06
    case 0xC4436D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C442AC.asm:90 LDX @VIRTUAL02
    case 0xC4436F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:91 LDA KEYBOARD_INPUT_CHARACTER_OFFSETS,X
    case 0xC44371: cpu.execute_instruction<0xBD>(0x001B56, 3); return true;
    // src/unknown/C4/C442AC.asm:92 AND #$00FF
    case 0xC44374: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C442AC.asm:92 AND #$00FF
    // Overlapping static entry reached from 0xC44374.
    case 0xC44376: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C442AC.asm:93 TAY
    case 0xC44377: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:94 LDA @LOCAL03
    case 0xC44378: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C442AC.asm:95 JSL MULT16
    case 0xC4437A: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C442AC.asm:96 CLC
    case 0xC4437E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:97 ADC @VIRTUAL06
    case 0xC4437F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C442AC.asm:98 STA @VIRTUAL06
    case 0xC44381: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C442AC.asm:99 LDX @VIRTUAL02
    case 0xC44383: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:100 LDA KEYBOARD_INPUT_CHARACTER_WIDTHS,X
    case 0xC44385: cpu.execute_instruction<0xBD>(0x001B6E, 3); return true;
    // src/unknown/C4/C442AC.asm:101 AND #$00FF
    case 0xC44388: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C442AC.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC44388.
    case 0xC4438A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C442AC.asm:102 TAY
    case 0xC4438B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:103 STY @LOCAL02
    case 0xC4438C: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C442AC.asm:104 BRA @UNKNOWN7
    case 0xC4438E: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C442AC.asm:106 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44390: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C442AC.asm:106 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44392: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C442AC.asm:106 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44394: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C442AC.asm:106 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44396: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C442AC.asm:107 LDX @VIRTUAL04
    case 0xC44398: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C442AC.asm:108 LDA #8
    case 0xC4439A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C442AC.asm:108 LDA #8
    // Overlapping static entry reached from 0xC4439A.
    case 0xC4439C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C442AC.asm:109 JSL UNKNOWN_C44B3A
    case 0xC4439D: cpu.execute_instruction<0x22>(0xC44B3A, 4); return true;
    // src/unknown/C4/C442AC.asm:110 LDY @LOCAL02
    case 0xC443A1: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C4/C442AC.asm:111 TYA
    case 0xC443A3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:112 SEC
    case 0xC443A4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:113 SBC #8
    case 0xC443A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C442AC.asm:113 SBC #8
    // Overlapping static entry reached from 0xC443A5.
    case 0xC443A7: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C442AC.asm:114 TAY
    case 0xC443A8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:115 STY @LOCAL02
    case 0xC443A9: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C442AC.asm:116 LDA @VIRTUAL04
    case 0xC443AB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C442AC.asm:117 CLC
    case 0xC443AD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:118 ADC @VIRTUAL06
    case 0xC443AE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C442AC.asm:119 STA @VIRTUAL06
    case 0xC443B0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C442AC.asm:121 CPY #8
    case 0xC443B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/unknown/C4/C442AC.asm:121 CPY #8
    // Overlapping static entry reached from 0xC443B2.
    case 0xC443B4: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C442AC.asm:122 BCS @UNKNOWN6
    case 0xC443B5: cpu.execute_instruction<0xB0>(0x0000D9, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C442AC.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC443B7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C442AC.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC443B9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C442AC.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC443BB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C442AC.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC443BD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C442AC.asm:124 LDX @VIRTUAL04
    case 0xC443BF: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C442AC.asm:125 TYA
    case 0xC443C1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:126 JSL UNKNOWN_C44B3A
    case 0xC443C2: cpu.execute_instruction<0x22>(0xC44B3A, 4); return true;
    // src/unknown/C4/C442AC.asm:127 INC @VIRTUAL02
    case 0xC443C6: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:129 LDA @VIRTUAL02
    case 0xC443C8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:130 CMP @LOCAL05
    case 0xC443CA: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C4/C442AC.asm:131 BCC @UNKNOWN5
    case 0xC443CC: cpu.execute_instruction<0x90>(0x000095, 2); return true;
    // src/unknown/C4/C442AC.asm:132 LDX @LOCAL04
    case 0xC443CE: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C4/C442AC.asm:133 STZ a:window_stats::text_x,X
    case 0xC443D0: cpu.execute_instruction<0x9E>(0x00000E, 3); return true;
    // src/unknown/C4/C442AC.asm:134 LDA #VRAM::TEXT_LAYER_TILES + $1700
    case 0xC443D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007700, 3); return true;
    // src/unknown/C4/C442AC.asm:134 LDA #VRAM::TEXT_LAYER_TILES + $1700
    // Overlapping static entry reached from 0xC443D3.
    case 0xC443D5: cpu.execute_instruction<0x77>(0x000085, 2); return true;
    // src/unknown/C4/C442AC.asm:135 STA @VIRTUAL04
    case 0xC443D6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C442AC.asm:135 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC443D5.
    case 0xC443D7: cpu.execute_instruction<0x04>(0x0000A0, 2); return true;
    // src/unknown/C4/C442AC.asm:136 LDY #window_stats::width
    case 0xC443D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C442AC.asm:136 LDY #window_stats::width
    // Overlapping static entry reached from 0xC443D7.
    case 0xC443D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:136 LDY #window_stats::width
    // Overlapping static entry reached from 0xC443D8.
    case 0xC443DA: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C442AC.asm:137 LDA (@LOCAL04),Y
    case 0xC443DB: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/unknown/C4/C442AC.asm:138 STA @LOCAL01
    case 0xC443DD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C442AC.asm:139 LDA #0
    case 0xC443DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C442AC.asm:139 LDA #0
    // Overlapping static entry reached from 0xC443DF.
    case 0xC443E1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C442AC.asm:140 STA @VIRTUAL02
    case 0xC443E2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:141 STA @LOCAL02
    case 0xC443E4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C442AC.asm:142 BRA @UNKNOWN10
    case 0xC443E6: cpu.execute_instruction<0x80>(0x00006A, 2); return true;
    // src/unknown/C4/C442AC.asm:144 LDA @LOCAL02
    case 0xC443E8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C442AC.asm:145 STA @VIRTUAL02
    case 0xC443EA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:146 ASL
    case 0xC443EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:147 ASL
    case 0xC443ED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:148 ASL
    case 0xC443EE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:149 ASL
    case 0xC443EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:150 ASL
    case 0xC443F0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:151 STA @LOCAL04
    case 0xC443F1: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C442AC.asm:152 CLC
    case 0xC443F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:153 ADC #.LOWORD(VWF_BUFFER)
    case 0xC443F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000092, 2); else cpu.execute_instruction<0x69>(0x003492, 3); return true;
    // src/unknown/C4/C442AC.asm:153 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC443F4.
    case 0xC443F6: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C442AC.asm:154 PROMOTENEARPTRA @VIRTUAL06
    case 0xC443F7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C442AC.asm:154 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC443F6.
    case 0xC443F8: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C442AC.asm:154 PROMOTENEARPTRA @VIRTUAL06
    case 0xC443F9: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C442AC.asm:154 PROMOTENEARPTRA @VIRTUAL06
    case 0xC443FA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C442AC.asm:154 PROMOTENEARPTRA @VIRTUAL06
    case 0xC443FC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C442AC.asm:154 PROMOTENEARPTRA @VIRTUAL06
    case 0xC443FD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C442AC.asm:154 PROMOTENEARPTRA @VIRTUAL06
    case 0xC443FF: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C442AC.asm:155 REP #PROC_FLAGS::ACCUM8
    case 0xC44401: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C442AC.asm:156 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44403: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C442AC.asm:156 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44405: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C442AC.asm:156 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44407: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C442AC.asm:156 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44409: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C442AC.asm:157 LDY @VIRTUAL04
    case 0xC4440B: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C4/C442AC.asm:158 LDX #16
    case 0xC4440D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/unknown/C4/C442AC.asm:158 LDX #16
    // Overlapping static entry reached from 0xC4440D.
    case 0xC4440F: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C442AC.asm:159 SEP #PROC_FLAGS::ACCUM8
    case 0xC44410: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C442AC.asm:160 LDA #0
    case 0xC44412: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C442AC.asm:161 JSL PREPARE_VRAM_COPY
    case 0xC44414: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C442AC.asm:161 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC44412.
    case 0xC44415: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C442AC.asm:161 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC44415.
    case 0xC44417: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0018A5, 3); return true;
    // src/unknown/C4/C442AC.asm:163 LDA @LOCAL04
    case 0xC44418: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C442AC.asm:163 LDA @LOCAL04
    // Overlapping static entry reached from 0xC44417.
    case 0xC44419: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:164 CLC
    case 0xC4441A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:165 ADC #.LOWORD(VWF_BUFFER) + 16
    case 0xC4441B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A2, 2); else cpu.execute_instruction<0x69>(0x0034A2, 3); return true;
    // src/unknown/C4/C442AC.asm:165 ADC #.LOWORD(VWF_BUFFER) + 16
    // Overlapping static entry reached from 0xC4441B.
    case 0xC4441D: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C442AC.asm:166 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4441E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C442AC.asm:166 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC4441D.
    case 0xC4441F: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C442AC.asm:166 PROMOTENEARPTRA @VIRTUAL06
    case 0xC44420: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C442AC.asm:166 PROMOTENEARPTRA @VIRTUAL06
    case 0xC44421: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C442AC.asm:166 PROMOTENEARPTRA @VIRTUAL06
    case 0xC44423: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C442AC.asm:166 PROMOTENEARPTRA @VIRTUAL06
    case 0xC44424: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C442AC.asm:166 PROMOTENEARPTRA @VIRTUAL06
    case 0xC44426: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C442AC.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC44428: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    case 0xC4442A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    case 0xC4442C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    case 0xC4442E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    case 0xC44430: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    case 0xC44432: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    case 0xC44434: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    case 0xC44435: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    // Overlapping static entry reached from 0xC44435.
    case 0xC44437: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    case 0xC44438: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    case 0xC44439: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    // Overlapping static entry reached from 0xC44439.
    case 0xC4443B: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    case 0xC4443C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    case 0xC4443E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    case 0xC44440: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    // Overlapping static entry reached from 0xC4443E.
    case 0xC44441: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C442AC.asm:168 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 8, 0
    // Overlapping static entry reached from 0xC44441.
    case 0xC44443: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0004A5, 3); return true;
    // src/unknown/C4/C442AC.asm:170 LDA @VIRTUAL04
    case 0xC44444: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C442AC.asm:170 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC44443.
    case 0xC44445: cpu.execute_instruction<0x04>(0x000018, 2); return true;
    // src/unknown/C4/C442AC.asm:171 CLC
    case 0xC44446: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:172 ADC #16
    case 0xC44447: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C442AC.asm:172 ADC #16
    // Overlapping static entry reached from 0xC44447.
    case 0xC44449: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C442AC.asm:173 STA @VIRTUAL04
    case 0xC4444A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C442AC.asm:174 INC @VIRTUAL02
    case 0xC4444C: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:175 LDA @VIRTUAL02
    case 0xC4444E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:176 STA @LOCAL02
    case 0xC44450: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C442AC.asm:178 LDA @VIRTUAL02
    case 0xC44452: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:179 PHA
    case 0xC44454: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:180 LDA @LOCAL01
    case 0xC44455: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C442AC.asm:181 STA @VIRTUAL02
    case 0xC44457: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:182 INC @VIRTUAL02
    case 0xC44459: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:183 PLA
    case 0xC4445B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:184 CMP @VIRTUAL02
    case 0xC4445C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C442AC.asm:185 BCCL @UNKNOWN9
    case 0xC4445E: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C442AC.asm:185 BCCL @UNKNOWN9
    case 0xC44460: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C442AC.asm:185 BCCL @UNKNOWN9
    case 0xC44462: cpu.execute_instruction<0x4C>(0x0043E8, 3); return true;
    // src/unknown/C4/C442AC.asm:186 LDA #1
    case 0xC44465: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C442AC.asm:186 LDA #1
    // Overlapping static entry reached from 0xC44465.
    case 0xC44467: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C442AC.asm:187 STA DMA_TRANSFER_FLAG
    case 0xC44468: cpu.execute_instruction<0x8D>(0x009E2B, 3); return true;
    // src/unknown/C4/C442AC.asm:188 LDY #0
    case 0xC4446B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C442AC.asm:188 LDY #0
    // Overlapping static entry reached from 0xC4446B.
    case 0xC4446D: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C442AC.asm:189 STY @LOCAL05
    case 0xC4446E: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C4/C442AC.asm:190 BRA @UNKNOWN13
    case 0xC44470: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C4/C442AC.asm:192 TYA
    case 0xC44472: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:193 ASL
    case 0xC44473: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:194 CLC
    case 0xC44474: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:195 ADC #$02E0
    case 0xC44475: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x0002E0, 3); return true;
    // src/unknown/C4/C442AC.asm:195 ADC #$02E0
    // Overlapping static entry reached from 0xC44475.
    case 0xC44477: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C4/C442AC.asm:196 TAX
    case 0xC44478: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:197 INX
    case 0xC44479: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:198 JSR UNKNOWN_C44C8C
    case 0xC4447A: cpu.execute_instruction<0x20>(0x004C8C, 3); return true;
    // src/unknown/C4/C442AC.asm:199 LDY @LOCAL05
    case 0xC4447D: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C4/C442AC.asm:200 INY
    case 0xC4447F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:201 STY @LOCAL05
    case 0xC44480: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C4/C442AC.asm:203 LDA @LOCAL01
    case 0xC44482: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C442AC.asm:204 STA @VIRTUAL02
    case 0xC44484: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:205 INC @VIRTUAL02
    case 0xC44486: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:206 TYA
    case 0xC44488: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:207 CMP @VIRTUAL02
    case 0xC44489: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C442AC.asm:208 BCC @UNKNOWN12
    case 0xC4448B: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/unknown/C4/C442AC.asm:209 LDA CURRENT_FOCUS_WINDOW
    case 0xC4448D: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C442AC.asm:210 ASL
    case 0xC44490: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:211 TAX
    case 0xC44491: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:212 LDA OPEN_WINDOW_TABLE,X
    case 0xC44492: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C442AC.asm:213 CMP WINDOW_TAIL
    case 0xC44495: cpu.execute_instruction<0xCD>(0x0088E2, 3); return true;
    // src/unknown/C4/C442AC.asm:214 BEQ @UNKNOWN14
    case 0xC44498: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C442AC.asm:215 SEP #PROC_FLAGS::ACCUM8
    case 0xC4449A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C442AC.asm:215 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC44514.
    case 0xC4449B: cpu.execute_instruction<0x20>(0x0001A9, 3); return true;
    // src/unknown/C4/C442AC.asm:216 LDA #1
    case 0xC4449C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C442AC.asm:217 STA REDRAW_ALL_WINDOWS
    case 0xC4449E: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/unknown/C4/C442AC.asm:217 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC4449C.
    case 0xC4449F: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/unknown/C4/C442AC.asm:219 REP #PROC_FLAGS::ACCUM8
    case 0xC444A1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C442AC.asm:220 LDA TEXT_SOUND_MODE
    case 0xC444A3: cpu.execute_instruction<0xAD>(0x00964F, 3); return true;
    // src/unknown/C4/C442AC.asm:221 CMP #2
    case 0xC444A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C442AC.asm:221 CMP #2
    // Overlapping static entry reached from 0xC444A6.
    case 0xC444A8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C442AC.asm:222 BNE @UNKNOWN15
    case 0xC444A9: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C442AC.asm:223 LDX #1
    case 0xC444AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C442AC.asm:223 LDX #1
    // Overlapping static entry reached from 0xC444AB.
    case 0xC444AD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C442AC.asm:224 BRA @UNKNOWN17
    case 0xC444AE: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C4/C442AC.asm:226 LDA TEXT_SOUND_MODE
    case 0xC444B0: cpu.execute_instruction<0xAD>(0x00964F, 3); return true;
    // src/unknown/C4/C442AC.asm:227 CMP #3
    case 0xC444B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C442AC.asm:227 CMP #3
    // Overlapping static entry reached from 0xC444B3.
    case 0xC444B5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C442AC.asm:228 BNE @UNKNOWN16
    case 0xC444B6: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C442AC.asm:229 LDX #0
    case 0xC444B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C442AC.asm:229 LDX #0
    // Overlapping static entry reached from 0xC444B8.
    case 0xC444BA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C442AC.asm:230 BRA @UNKNOWN17
    case 0xC444BB: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C4/C442AC.asm:232 LDX #0
    case 0xC444BD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C442AC.asm:232 LDX #0
    // Overlapping static entry reached from 0xC444BD.
    case 0xC444BF: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C442AC.asm:233 LDA BLINKING_TRIANGLE_FLAG
    case 0xC444C0: cpu.execute_instruction<0xAD>(0x00964D, 3); return true;
    // src/unknown/C4/C442AC.asm:234 BNE @UNKNOWN17
    case 0xC444C3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C4/C442AC.asm:235 LDX #1
    case 0xC444C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C442AC.asm:235 LDX #1
    // Overlapping static entry reached from 0xC444C5.
    case 0xC444C7: cpu.execute_instruction<0x00>(0x0000E0, 2); return true;
    // src/unknown/C4/C442AC.asm:237 CPX #0
    case 0xC444C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C4/C442AC.asm:237 CPX #0
    // Overlapping static entry reached from 0xC444C8.
    case 0xC444CA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C442AC.asm:238 BEQ @UNKNOWN18
    case 0xC444CB: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C4/C442AC.asm:239 LDA INSTANT_PRINTING
    case 0xC444CD: cpu.execute_instruction<0xAD>(0x009622, 3); return true;
    // src/unknown/C4/C442AC.asm:240 AND #$00FF
    case 0xC444D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C442AC.asm:240 AND #$00FF
    // Overlapping static entry reached from 0xC444D0.
    case 0xC444D2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C442AC.asm:241 BNE @UNKNOWN18
    case 0xC444D3: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C4/C442AC.asm:242 LDA @LOCAL06
    case 0xC444D5: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C442AC.asm:243 CMP #32
    case 0xC444D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C4/C442AC.asm:243 CMP #32
    // Overlapping static entry reached from 0xC444D7.
    case 0xC444D9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C442AC.asm:244 BEQ @UNKNOWN18
    case 0xC444DA: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C442AC.asm:245 LDA #SFX::TEXT_PRINT
    case 0xC444DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C4/C442AC.asm:245 LDA #SFX::TEXT_PRINT
    // Overlapping static entry reached from 0xC444DC.
    case 0xC444DE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C442AC.asm:246 JSL PLAY_SOUND
    case 0xC444DF: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C4/C442AC.asm:248 LDX SELECTED_TEXT_SPEED
    case 0xC444E3: cpu.execute_instruction<0xAE>(0x009625, 3); return true;
    // src/unknown/C4/C442AC.asm:249 INX
    case 0xC444E6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:250 STX @LOCAL06
    case 0xC444E7: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C4/C442AC.asm:251 BRA @UNKNOWN20
    case 0xC444E9: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C4/C442AC.asm:253 JSL WINDOW_TICK
    case 0xC444EB: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C4/C442AC.asm:254 LDX @LOCAL06
    case 0xC444EF: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C4/C442AC.asm:255 DEX
    case 0xC444F1: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C442AC.asm:256 STX @LOCAL06
    case 0xC444F2: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C4/C442AC.asm:258 BNE @UNKNOWN19
    case 0xC444F4: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // src/unknown/C4/C442AC.asm:259 LDA #FALSE
    case 0xC444F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C442AC.asm:259 LDA #FALSE
    // Overlapping static entry reached from 0xC444F6.
    case 0xC444F8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C442AC.asm:261 END_C_FUNCTION
    case 0xC444F9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C442AC.asm:261 END_C_FUNCTION
    case 0xC444FA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C444FB.asm (unresolved).
bool execute_unresolved_c4_c444fb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C444FB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC444FB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C444FB.asm:13 END_STACK_VARS
    case 0xC444FD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C444FB.asm:13 END_STACK_VARS
    case 0xC444FE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C444FB.asm:13 END_STACK_VARS
    case 0xC444FF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C444FB.asm:13 END_STACK_VARS
    case 0xC44500: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C444FB.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC44500.
    case 0xC44502: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C444FB.asm:13 END_STACK_VARS
    case 0xC44503: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C444FB.asm:13 END_STACK_VARS
    case 0xC44504: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C444FB.asm:14 STX @LOCAL05
    case 0xC44505: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C4/C444FB.asm:14 STX @LOCAL05
    // Overlapping static entry reached from 0xC44502.
    case 0xC44506: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C444FB.asm:15 STA @VIRTUAL02
    case 0xC44507: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C444FB.asm:16 JSL UNKNOWN_C43CAA
    case 0xC44509: cpu.execute_instruction<0x22>(0xC43CAA, 4); return true;
    // src/unknown/C4/C444FB.asm:17 LDA VWF_TILE
    case 0xC4450D: cpu.execute_instruction<0xAD>(0x009E25, 3); return true;
    // src/unknown/C4/C444FB.asm:18 STA @LOCAL04
    case 0xC44510: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C444FB.asm:19 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44512: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x00F054, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C444FB.asm:19 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44512.
    case 0xC44514: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C444FB.asm:19 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44515: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C444FB.asm:19 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44514.
    case 0xC44516: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C444FB.asm:19 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44517: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C444FB.asm:19 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44516.
    case 0xC44518: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C444FB.asm:19 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44517.
    case 0xC44519: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C444FB.asm:19 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC4451A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C444FB.asm:20 LDY #.SIZEOF(font_table_entry) * FONT::TINY + font_table_entry::height
    case 0xC4451C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002C, 2); else cpu.execute_instruction<0xA0>(0x00002C, 3); return true;
    // src/unknown/C4/C444FB.asm:20 LDY #.SIZEOF(font_table_entry) * FONT::TINY + font_table_entry::height
    // Overlapping static entry reached from 0xC4451C.
    case 0xC4451E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C444FB.asm:21 LDA [@VIRTUAL06],Y
    case 0xC4451F: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C444FB.asm:22 STA @LOCAL03
    case 0xC44521: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C444FB.asm:23 LDY #.SIZEOF(font_table_entry) * FONT::TINY + font_table_entry::width
    case 0xC44523: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002E, 2); else cpu.execute_instruction<0xA0>(0x00002E, 3); return true;
    // src/unknown/C4/C444FB.asm:23 LDY #.SIZEOF(font_table_entry) * FONT::TINY + font_table_entry::width
    // Overlapping static entry reached from 0xC44523.
    case 0xC44525: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C444FB.asm:24 LDA [@VIRTUAL06],Y
    case 0xC44526: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C444FB.asm:25 STA @LOCAL02
    case 0xC44528: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C444FB.asm:26 LDA #6
    case 0xC4452A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C4/C444FB.asm:26 LDA #6
    // Overlapping static entry reached from 0xC4452A.
    case 0xC4452C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C444FB.asm:27 STA @LOCAL01
    case 0xC4452D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C444FB.asm:28 LDA @VIRTUAL02
    case 0xC4452F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C444FB.asm:29 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC44531: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C444FB.asm:29 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC44533: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C444FB.asm:29 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC44534: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C444FB.asm:29 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC44536: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C444FB.asm:29 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC44537: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C444FB.asm:29 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC44539: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/unknown/C4/C444FB.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC4453B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C444FB.asm:31 LDA #0
    case 0xC4453D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C444FB.asm:31 LDA #0
    // Overlapping static entry reached from 0xC4453D.
    case 0xC4453F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C444FB.asm:32 STA @VIRTUAL04
    case 0xC44540: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C444FB.asm:33 BRA @UNKNOWN1
    case 0xC44542: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/unknown/C4/C444FB.asm:35 AND #$00FF
    case 0xC44544: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C444FB.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC44544.
    case 0xC44546: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/C4/C444FB.asm:36 INC @VIRTUAL02
    case 0xC44547: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C444FB.asm:37 SEC
    case 0xC44549: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C444FB.asm:38 SBC #CHAR::SPACE
    case 0xC4454A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/unknown/C4/C444FB.asm:38 SBC #CHAR::SPACE
    // Overlapping static entry reached from 0xC4454A.
    case 0xC4454C: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C444FB.asm:39 AND #$007F
    case 0xC4454D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/unknown/C4/C444FB.asm:39 AND #$007F
    // Overlapping static entry reached from 0xC4454D.
    case 0xC4454F: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C444FB.asm:40 TAY
    case 0xC44550: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C444FB.asm:41 MOVE_INT FONT_PTR_TABLE + .SIZEOF(font_table_entry) * FONT::TINY + font_table_entry::graphics, @VIRTUAL06
    case 0xC44551: cpu.execute_instruction<0xAF>(0xC3F07C, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C444FB.asm:41 MOVE_INT FONT_PTR_TABLE + .SIZEOF(font_table_entry) * FONT::TINY + font_table_entry::graphics, @VIRTUAL06
    case 0xC44555: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C444FB.asm:41 MOVE_INT FONT_PTR_TABLE + .SIZEOF(font_table_entry) * FONT::TINY + font_table_entry::graphics, @VIRTUAL06
    case 0xC44557: cpu.execute_instruction<0xAF>(0xC3F07E, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C444FB.asm:41 MOVE_INT FONT_PTR_TABLE + .SIZEOF(font_table_entry) * FONT::TINY + font_table_entry::graphics, @VIRTUAL06
    case 0xC4455B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C444FB.asm:42 LDA @LOCAL03
    case 0xC4455D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C444FB.asm:43 JSL MULT16
    case 0xC4455F: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C444FB.asm:44 CLC
    case 0xC44563: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C444FB.asm:45 ADC @VIRTUAL06
    case 0xC44564: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C444FB.asm:46 STA @VIRTUAL06
    case 0xC44566: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C444FB.asm:47 STA @LOCAL00
    case 0xC44568: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C444FB.asm:48 LDA @VIRTUAL06+2
    case 0xC4456A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C444FB.asm:49 STA @LOCAL00+2
    case 0xC4456C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C444FB.asm:50 LDX @LOCAL02
    case 0xC4456E: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C444FB.asm:51 LDA @LOCAL01
    case 0xC44570: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C444FB.asm:52 JSL UNKNOWN_C44B3A
    case 0xC44572: cpu.execute_instruction<0x22>(0xC44B3A, 4); return true;
    // src/unknown/C4/C444FB.asm:53 INC @VIRTUAL04
    case 0xC44576: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C444FB.asm:55 LDX @VIRTUAL02
    case 0xC44578: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C444FB.asm:56 LDA __BSS_START__,X
    case 0xC4457A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C444FB.asm:57 AND #$00FF
    case 0xC4457D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C444FB.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC4457D.
    case 0xC4457F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C444FB.asm:58 BNE @UNKNOWN0
    case 0xC44580: cpu.execute_instruction<0xD0>(0x0000C2, 2); return true;
    // src/unknown/C4/C444FB.asm:59 LDA @LOCAL04
    case 0xC44582: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C444FB.asm:60 STA @VIRTUAL02
    case 0xC44584: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C444FB.asm:61 BRA @UNKNOWN4
    case 0xC44586: cpu.execute_instruction<0x80>(0x000042, 2); return true;
    // src/unknown/C4/C444FB.asm:63 LDA @VIRTUAL02
    case 0xC44588: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C444FB.asm:64 ASL
    case 0xC4458A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C444FB.asm:65 ASL
    case 0xC4458B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C444FB.asm:66 ASL
    case 0xC4458C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C444FB.asm:67 ASL
    case 0xC4458D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C444FB.asm:68 ASL
    case 0xC4458E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C444FB.asm:69 CLC
    case 0xC4458F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C444FB.asm:70 ADC #.LOWORD(VWF_BUFFER)
    case 0xC44590: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000092, 2); else cpu.execute_instruction<0x69>(0x003492, 3); return true;
    // src/unknown/C4/C444FB.asm:70 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC44590.
    case 0xC44592: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C444FB.asm:71 PROMOTENEARPTRA @VIRTUAL06
    case 0xC44593: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C444FB.asm:71 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC44592.
    case 0xC44594: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C444FB.asm:71 PROMOTENEARPTRA @VIRTUAL06
    case 0xC44595: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C444FB.asm:71 PROMOTENEARPTRA @VIRTUAL06
    case 0xC44596: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C444FB.asm:71 PROMOTENEARPTRA @VIRTUAL06
    case 0xC44598: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C444FB.asm:71 PROMOTENEARPTRA @VIRTUAL06
    case 0xC44599: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C444FB.asm:71 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4459B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C444FB.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC4459D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C444FB.asm:73 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4459F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C444FB.asm:73 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC445A1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C444FB.asm:73 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC445A3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C444FB.asm:73 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC445A5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C444FB.asm:74 LDY @LOCAL05
    case 0xC445A7: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C4/C444FB.asm:75 LDX #16
    case 0xC445A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/unknown/C4/C444FB.asm:75 LDX #16
    // Overlapping static entry reached from 0xC445A9.
    case 0xC445AB: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C444FB.asm:76 SEP #PROC_FLAGS::ACCUM8
    case 0xC445AC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C444FB.asm:77 LDA #0
    case 0xC445AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C444FB.asm:78 JSL PREPARE_VRAM_COPY
    case 0xC445B0: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C444FB.asm:78 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC445AE.
    case 0xC445B1: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C444FB.asm:78 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC445B1.
    case 0xC445B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x001AA5, 3); return true;
    // src/unknown/C4/C444FB.asm:80 LDA @LOCAL05
    case 0xC445B4: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C444FB.asm:80 LDA @LOCAL05
    // Overlapping static entry reached from 0xC445B3.
    case 0xC445B5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C444FB.asm:81 CLC
    case 0xC445B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C444FB.asm:82 ADC #8
    case 0xC445B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C4/C444FB.asm:82 ADC #8
    // Overlapping static entry reached from 0xC445B7.
    case 0xC445B9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C444FB.asm:83 STA @LOCAL05
    case 0xC445BA: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C444FB.asm:84 LDA @VIRTUAL02
    case 0xC445BC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C444FB.asm:85 CMP #51
    case 0xC445BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000033, 2); else cpu.execute_instruction<0xC9>(0x000033, 3); return true;
    // src/unknown/C4/C444FB.asm:85 CMP #51
    // Overlapping static entry reached from 0xC445BE.
    case 0xC445C0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C444FB.asm:86 BNE @UNKNOWN3
    case 0xC445C1: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C444FB.asm:87 LDA #.LOWORD(-1)
    case 0xC445C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C444FB.asm:87 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC445C3.
    case 0xC445C5: cpu.execute_instruction<0xFF>(0xE60285, 4); return true;
    // src/unknown/C4/C444FB.asm:88 STA @VIRTUAL02
    case 0xC445C6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C444FB.asm:90 INC @VIRTUAL02
    case 0xC445C8: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C444FB.asm:90 INC @VIRTUAL02
    // Overlapping static entry reached from 0xC445C5.
    case 0xC445C9: cpu.execute_instruction<0x02>(0x0000E2, 2); return true;
    // src/unknown/C4/C444FB.asm:92 SEP #PROC_FLAGS::ACCUM8
    case 0xC445CA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C444FB.asm:93 LDA [@VIRTUAL0A]
    case 0xC445CC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C444FB.asm:94 REP #PROC_FLAGS::ACCUM8
    case 0xC445CE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C444FB.asm:95 INC @VIRTUAL0A
    case 0xC445D0: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C444FB.asm:96 AND #$00FF
    case 0xC445D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C444FB.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC445D2.
    case 0xC445D4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C444FB.asm:97 BNE @UNKNOWN2
    case 0xC445D5: cpu.execute_instruction<0xD0>(0x0000B1, 2); return true;
    // src/unknown/C4/C444FB.asm:98 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC445D7: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C4/C444FB.asm:99 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC445DB: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C444FB.asm:100 END_C_FUNCTION
    case 0xC445DF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C444FB.asm:100 END_C_FUNCTION
    case 0xC445E0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C445E1.asm (unresolved).
bool execute_unresolved_c4_c445e1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C445E1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC445E1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C445E1.asm:12 END_STACK_VARS
    case 0xC445E3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C445E1.asm:12 END_STACK_VARS
    case 0xC445E4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C445E1.asm:12 END_STACK_VARS
    case 0xC445E5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C445E1.asm:12 END_STACK_VARS
    case 0xC445E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C445E1.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC445E6.
    case 0xC445E8: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C445E1.asm:12 END_STACK_VARS
    case 0xC445E9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C445E1.asm:12 END_STACK_VARS
    case 0xC445EA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:13 TAY
    case 0xC445EB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC445EC: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC445EE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC445F0: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC445F2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C445E1.asm:15 LDX #0
    case 0xC445F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C445E1.asm:15 LDX #0
    // Overlapping static entry reached from 0xC445F4.
    case 0xC445F6: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C445E1.asm:16 STX @LOCAL04
    case 0xC445F7: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C445E1.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC445F9: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC445FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C445E1.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC445FE: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:17 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC44601: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:18 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC44603: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:18 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC44605: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:18 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC44607: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:18 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC44609: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C445E1.asm:19 LDA CURRENT_FOCUS_WINDOW
    case 0xC4460B: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C445E1.asm:20 CMP #.LOWORD(-1)
    case 0xC4460E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C445E1.asm:20 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4460E.
    case 0xC44610: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C445E1.asm:21 BEQL @UNKNOWN14
    case 0xC44611: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C445E1.asm:21 BEQL @UNKNOWN14
    case 0xC44613: cpu.execute_instruction<0x4C>(0x0047F7, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C445E1.asm:21 BEQL @UNKNOWN14
    // Overlapping static entry reached from 0xC44610.
    case 0xC44614: cpu.execute_instruction<0xF7>(0x000047, 2); return true;
    // src/unknown/C4/C445E1.asm:22 LDA CURRENT_FOCUS_WINDOW
    case 0xC44616: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C445E1.asm:23 ASL
    case 0xC44619: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:24 TAX
    case 0xC4461A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:25 LDA OPEN_WINDOW_TABLE,X
    case 0xC4461B: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C445E1.asm:26 LDY #.SIZEOF(window_stats)
    case 0xC4461E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C445E1.asm:26 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC4461E.
    case 0xC44620: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C445E1.asm:27 JSL MULT168
    case 0xC44621: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C445E1.asm:28 CLC
    case 0xC44625: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:29 ADC #.LOWORD(WINDOW_STATS)
    case 0xC44626: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C4/C445E1.asm:29 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC44626.
    case 0xC44628: cpu.execute_instruction<0x86>(0x0000A8, 2); return true;
    // src/unknown/C4/C445E1.asm:30 TAY
    case 0xC44629: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:31 STY @LOCAL02
    case 0xC4462A: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C445E1.asm:33 LDA [@VIRTUAL0A]
    case 0xC4462C: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C445E1.asm:34 AND #$00FF
    case 0xC4462E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C445E1.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC4462E.
    case 0xC44630: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C445E1.asm:35 BEQ @UNKNOWN2
    case 0xC44631: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C445E1.asm:36 AND #$00FF
    case 0xC44633: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C445E1.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC44633.
    case 0xC44635: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/C4/C445E1.asm:37 INC @VIRTUAL0A
    case 0xC44636: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C445E1.asm:38 BRA @UNKNOWN3
    case 0xC44638: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:40 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4463A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:40 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4463C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:40 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4463E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:40 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44640: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C445E1.asm:41 LDA [@VIRTUAL06]
    case 0xC44642: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C445E1.asm:42 AND #$00FF
    case 0xC44644: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C445E1.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC44644.
    case 0xC44646: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/C4/C445E1.asm:43 INC @VIRTUAL06
    case 0xC44647: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C445E1.asm:44 MOVE_INTX @VIRTUAL06, @LOCAL03
    case 0xC44649: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C445E1.asm:44 MOVE_INTX @VIRTUAL06, @LOCAL03
    case 0xC4464B: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C445E1.asm:44 MOVE_INTX @VIRTUAL06, @LOCAL03
    case 0xC4464D: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:44 MOVE_INTX @VIRTUAL06, @LOCAL03
    case 0xC4464F: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C4/C445E1.asm:46 CMP #$15
    case 0xC44651: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000015, 2); else cpu.execute_instruction<0xC9>(0x000015, 3); return true;
    // src/unknown/C4/C445E1.asm:46 CMP #$15
    // Overlapping static entry reached from 0xC44651.
    case 0xC44653: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C445E1.asm:47 BEQ @DICT1
    case 0xC44654: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C4/C445E1.asm:48 CMP #$16
    case 0xC44656: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000016, 2); else cpu.execute_instruction<0xC9>(0x000016, 3); return true;
    // src/unknown/C4/C445E1.asm:48 CMP #$16
    // Overlapping static entry reached from 0xC44656.
    case 0xC44658: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C445E1.asm:49 BEQ @DICT2
    case 0xC44659: cpu.execute_instruction<0xF0>(0x000053, 2); return true;
    // src/unknown/C4/C445E1.asm:50 CMP #$17
    case 0xC4465B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C4/C445E1.asm:50 CMP #$17
    // Overlapping static entry reached from 0xC4465B.
    case 0xC4465D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C445E1.asm:51 BEQL @DICT3
    case 0xC4465E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C445E1.asm:51 BEQL @DICT3
    case 0xC44660: cpu.execute_instruction<0x4C>(0x0046F5, 3); return true;
    // src/unknown/C4/C445E1.asm:52 JMP @UNKNOWN8
    case 0xC44663: cpu.execute_instruction<0x4C>(0x00473A, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:54 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44666: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:54 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44668: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:54 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4466A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:54 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4466C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C445E1.asm:55 LDA [@VIRTUAL06]
    case 0xC4466E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C445E1.asm:56 AND #$00FF
    case 0xC44670: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C445E1.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC44670.
    case 0xC44672: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C445E1.asm:57 ASL
    case 0xC44673: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:58 ASL
    case 0xC44674: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:59 PHA
    case 0xC44675: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:60 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC44676: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000ED, 2); else cpu.execute_instruction<0xA9>(0x00CDED, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:60 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    // Overlapping static entry reached from 0xC44676.
    case 0xC44678: cpu.execute_instruction<0xCD>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C445E1.asm:60 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC44679: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:60 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC4467B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:60 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4467B.
    case 0xC4467D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C445E1.asm:60 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC4467E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C445E1.asm:61 PLA
    case 0xC44680: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:62 CLC
    case 0xC44681: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:63 ADC @VIRTUAL06
    case 0xC44682: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C445E1.asm:64 STA @VIRTUAL06
    case 0xC44684: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:65 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC44686: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:65 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44686.
    case 0xC44688: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C445E1.asm:65 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC44689: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C445E1.asm:65 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4468B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C445E1.asm:65 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4468C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:65 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4468E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:65 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC44690: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:66 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44692: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:66 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44694: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:66 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44696: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:66 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44698: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C445E1.asm:67 INC @VIRTUAL06
    case 0xC4469A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:68 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4469C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:68 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4469E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:68 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC446A0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:68 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC446A2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C445E1.asm:69 LDA [@VIRTUAL0A]
    case 0xC446A4: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C445E1.asm:70 AND #$00FF
    case 0xC446A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C445E1.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC446A6.
    case 0xC446A8: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/C4/C445E1.asm:71 INC @VIRTUAL0A
    case 0xC446A9: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C445E1.asm:72 JMP @UNKNOWN8
    case 0xC446AB: cpu.execute_instruction<0x4C>(0x00473A, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:74 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446AE: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:74 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446B0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:74 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446B2: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:74 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446B4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C445E1.asm:75 LDA [@VIRTUAL06]
    case 0xC446B6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C445E1.asm:76 AND #$00FF
    case 0xC446B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C445E1.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC446B8.
    case 0xC446BA: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C445E1.asm:77 ASL
    case 0xC446BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:78 ASL
    case 0xC446BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:79 PHA
    case 0xC446BD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC446BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000ED, 2); else cpu.execute_instruction<0xA9>(0x00D1ED, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC446BE.
    case 0xC446C0: cpu.execute_instruction<0xD1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC446C1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC446C0.
    case 0xC446C2: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC446C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC446C2.
    case 0xC446C4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC446C3.
    case 0xC446C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C445E1.asm:80 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC446C6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C445E1.asm:81 PLA
    case 0xC446C8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:82 CLC
    case 0xC446C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:83 ADC @VIRTUAL06
    case 0xC446CA: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C445E1.asm:84 STA @VIRTUAL06
    case 0xC446CC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC446CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC446CE.
    case 0xC446D0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C445E1.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC446D1: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C445E1.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC446D3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C445E1.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC446D4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC446D6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC446D8: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:86 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446DA: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:86 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446DC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:86 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446DE: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:86 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446E0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C445E1.asm:87 INC @VIRTUAL06
    case 0xC446E2: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:88 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC446E4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:88 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC446E6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:88 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC446E8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:88 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC446EA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C445E1.asm:89 LDA [@VIRTUAL0A]
    case 0xC446EC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C445E1.asm:90 AND #$00FF
    case 0xC446EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C445E1.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC446EE.
    case 0xC446F0: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/C4/C445E1.asm:91 INC @VIRTUAL0A
    case 0xC446F1: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C445E1.asm:92 BRA @UNKNOWN8
    case 0xC446F3: cpu.execute_instruction<0x80>(0x000045, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:94 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446F5: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:94 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446F7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:94 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446F9: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:94 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC446FB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C445E1.asm:95 LDA [@VIRTUAL06]
    case 0xC446FD: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C445E1.asm:96 AND #$00FF
    case 0xC446FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C445E1.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC446FF.
    case 0xC44701: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C445E1.asm:97 ASL
    case 0xC44702: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:98 ASL
    case 0xC44703: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:99 PHA
    case 0xC44704: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC44705: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000ED, 2); else cpu.execute_instruction<0xA9>(0x00D5ED, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC44705.
    case 0xC44707: cpu.execute_instruction<0xD5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC44708: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC44707.
    case 0xC44709: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC4470A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC44709.
    case 0xC4470B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC4470A.
    case 0xC4470C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C445E1.asm:100 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC4470D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C445E1.asm:101 PLA
    case 0xC4470F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:102 CLC
    case 0xC44710: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:103 ADC @VIRTUAL06
    case 0xC44711: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C445E1.asm:104 STA @VIRTUAL06
    case 0xC44713: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:105 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC44715: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:105 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44715.
    case 0xC44717: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C445E1.asm:105 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC44718: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C445E1.asm:105 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4471A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C445E1.asm:105 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4471B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:105 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4471D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:105 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4471F: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:106 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44721: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:106 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44723: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:106 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44725: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:106 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44727: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C445E1.asm:107 INC @VIRTUAL06
    case 0xC44729: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C445E1.asm:108 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4472B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:108 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4472D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C445E1.asm:108 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4472F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:108 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC44731: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C445E1.asm:109 LDA [@VIRTUAL0A]
    case 0xC44733: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C445E1.asm:110 AND #$00FF
    case 0xC44735: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C445E1.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xC44735.
    case 0xC44737: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/C4/C445E1.asm:111 INC @VIRTUAL0A
    case 0xC44738: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C445E1.asm:113 CMP #$50
    case 0xC4473A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000050, 2); else cpu.execute_instruction<0xC9>(0x000050, 3); return true;
    // src/unknown/C4/C445E1.asm:113 CMP #$50
    // Overlapping static entry reached from 0xC4473A.
    case 0xC4473C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C445E1.asm:114 BEQ @UNKNOWN11
    case 0xC4473D: cpu.execute_instruction<0xF0>(0x00006F, 2); return true;
    // src/unknown/C4/C445E1.asm:115 CMP #$20
    case 0xC4473F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C4/C445E1.asm:115 CMP #$20
    // Overlapping static entry reached from 0xC4473F.
    case 0xC44741: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C445E1.asm:116 BCC @UNKNOWN11
    case 0xC44742: cpu.execute_instruction<0x90>(0x00006A, 2); return true;
    // src/unknown/C4/C445E1.asm:117 INC UPCOMING_WORD_LENGTH
    case 0xC44744: cpu.execute_instruction<0xEE>(0x009660, 3); return true;
    // src/unknown/C4/C445E1.asm:118 CMP #$2F
    case 0xC44747: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C4/C445E1.asm:118 CMP #$2F
    // Overlapping static entry reached from 0xC44747.
    case 0xC44749: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C445E1.asm:119 BNE @UNKNOWN9
    case 0xC4474A: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C445E1.asm:120 LDA #8
    case 0xC4474C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C445E1.asm:120 LDA #8
    // Overlapping static entry reached from 0xC4474C.
    case 0xC4474E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C445E1.asm:121 BRA @UNKNOWN10
    case 0xC4474F: cpu.execute_instruction<0x80>(0x00004F, 2); return true;
    // src/unknown/C4/C445E1.asm:123 SEC
    case 0xC44751: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:124 SBC #$50
    case 0xC44752: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/unknown/C4/C445E1.asm:124 SBC #$50
    // Overlapping static entry reached from 0xC44752.
    case 0xC44754: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C445E1.asm:125 AND #$007F
    case 0xC44755: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/unknown/C4/C445E1.asm:125 AND #$007F
    // Overlapping static entry reached from 0xC44755.
    case 0xC44757: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C445E1.asm:126 STA @VIRTUAL02
    case 0xC44758: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C445E1.asm:127 LDY @LOCAL02
    case 0xC4475A: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C445E1.asm:128 LDA a:window_stats::font,Y
    case 0xC4475C: cpu.execute_instruction<0xB9>(0x000015, 3); return true;
    // src/unknown/C4/C445E1.asm:129 STA @LOCAL01
    case 0xC4475F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44761: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x00F054, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44761.
    case 0xC44763: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44764: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44763.
    case 0xC44765: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44766: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44765.
    case 0xC44767: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44766.
    case 0xC44768: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C445E1.asm:130 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC44769: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C445E1.asm:131 LDA @LOCAL01
    case 0xC4476B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C4/C445E1.asm:132 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC4476D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C4/C445E1.asm:132 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC4476F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C4/C445E1.asm:132 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC44770: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C4/C445E1.asm:132 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC44772: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C4/C445E1.asm:132 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC44773: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:133 CLC
    case 0xC44774: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:134 ADC @VIRTUAL06
    case 0xC44775: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C445E1.asm:135 STA @VIRTUAL06
    case 0xC44777: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:136 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44779: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C445E1.asm:136 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC44779.
    case 0xC4477B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C445E1.asm:136 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4477C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C445E1.asm:136 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4477E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C445E1.asm:136 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4477F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C445E1.asm:136 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44781: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C445E1.asm:136 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC44783: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C445E1.asm:137 LDA @VIRTUAL02
    case 0xC44785: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C445E1.asm:138 CLC
    case 0xC44787: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:139 ADC @VIRTUAL06
    case 0xC44788: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C445E1.asm:140 STA @VIRTUAL06
    case 0xC4478A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C445E1.asm:141 LDA [@VIRTUAL06]
    case 0xC4478C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C445E1.asm:142 AND #$00FF
    case 0xC4478E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C445E1.asm:142 AND #$00FF
    // Overlapping static entry reached from 0xC4478E.
    case 0xC44790: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C445E1.asm:143 STA @LOCAL01
    case 0xC44791: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C445E1.asm:144 LDA CHARACTER_PADDING
    case 0xC44793: cpu.execute_instruction<0xAD>(0x005E6D, 3); return true;
    // src/unknown/C4/C445E1.asm:145 AND #$00FF
    case 0xC44796: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C445E1.asm:145 AND #$00FF
    // Overlapping static entry reached from 0xC44796.
    case 0xC44798: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C445E1.asm:146 STA @VIRTUAL02
    case 0xC44799: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C445E1.asm:147 LDA @LOCAL01
    case 0xC4479B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C445E1.asm:148 CLC
    case 0xC4479D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:149 ADC @VIRTUAL02
    case 0xC4479E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C445E1.asm:151 STA @VIRTUAL02
    case 0xC447A0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C445E1.asm:152 LDX @LOCAL04
    case 0xC447A2: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C4/C445E1.asm:153 TXA
    case 0xC447A4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:154 CLC
    case 0xC447A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:155 ADC @VIRTUAL02
    case 0xC447A6: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C445E1.asm:156 TAX
    case 0xC447A8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:157 STX @LOCAL04
    case 0xC447A9: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C4/C445E1.asm:158 JMP @UNKNOWN1
    case 0xC447AB: cpu.execute_instruction<0x4C>(0x00462C, 3); return true;
    // src/unknown/C4/C445E1.asm:160 LDY @LOCAL02
    case 0xC447AE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C445E1.asm:161 LDA a:window_stats::text_x,Y
    case 0xC447B0: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/unknown/C4/C445E1.asm:162 STA @LOCAL00
    case 0xC447B3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C445E1.asm:163 BEQ @UNKNOWN12
    case 0xC447B5: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C4/C445E1.asm:164 LDA VWF_X
    case 0xC447B7: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C445E1.asm:165 AND #$0007
    case 0xC447BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C445E1.asm:165 AND #$0007
    // Overlapping static entry reached from 0xC447BA.
    case 0xC447BC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C445E1.asm:166 STA @VIRTUAL04
    case 0xC447BD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C445E1.asm:167 LDA @LOCAL00
    case 0xC447BF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C445E1.asm:168 DEC
    case 0xC447C1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:169 ASL
    case 0xC447C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:170 ASL
    case 0xC447C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:171 ASL
    case 0xC447C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:172 CLC
    case 0xC447C5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:173 ADC @VIRTUAL04
    case 0xC447C6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C445E1.asm:174 STA @VIRTUAL02
    case 0xC447C8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C445E1.asm:175 LDX @LOCAL04
    case 0xC447CA: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C4/C445E1.asm:176 TXA
    case 0xC447CC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:177 CLC
    case 0xC447CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:178 ADC @VIRTUAL02
    case 0xC447CE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C445E1.asm:179 BRA @UNKNOWN13
    case 0xC447D0: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C4/C445E1.asm:181 LDA VWF_X
    case 0xC447D2: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C445E1.asm:182 AND #$0007
    case 0xC447D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C445E1.asm:182 AND #$0007
    // Overlapping static entry reached from 0xC447D5.
    case 0xC447D7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C445E1.asm:183 STA @VIRTUAL02
    case 0xC447D8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C445E1.asm:184 LDX @LOCAL04
    case 0xC447DA: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C4/C445E1.asm:185 TXA
    case 0xC447DC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:186 CLC
    case 0xC447DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:187 ADC @VIRTUAL02
    case 0xC447DE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C445E1.asm:189 STA @VIRTUAL02
    case 0xC447E0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C445E1.asm:190 LDA a:window_stats::width,Y
    case 0xC447E2: cpu.execute_instruction<0xB9>(0x00000A, 3); return true;
    // src/unknown/C4/C445E1.asm:191 ASL
    case 0xC447E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:192 ASL
    case 0xC447E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:193 ASL
    case 0xC447E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C445E1.asm:194 CMP @VIRTUAL02
    case 0xC447E8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C445E1.asm:195 BCS @UNKNOWN14
    case 0xC447EA: cpu.execute_instruction<0xB0>(0x00000B, 2); return true;
    // src/unknown/C4/C445E1.asm:196 JSL REDIRECT_PRINT_NEWLINE
    case 0xC447EC: cpu.execute_instruction<0x22>(0xC10C79, 4); return true;
    // src/unknown/C4/C445E1.asm:197 SEP #PROC_FLAGS::ACCUM8
    case 0xC447F0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C445E1.asm:198 LDA #1
    case 0xC447F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C445E1.asm:199 STA VWF_INDENT_NEW_LINE
    case 0xC447F4: cpu.execute_instruction<0x8D>(0x005E75, 3); return true;
    // src/unknown/C4/C445E1.asm:199 STA VWF_INDENT_NEW_LINE
    // Overlapping static entry reached from 0xC447F2.
    case 0xC447F5: cpu.execute_instruction<0x75>(0x00005E, 2); return true;
    // src/unknown/C4/C445E1.asm:201 REP #PROC_FLAGS::ACCUM8
    case 0xC447F7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C445E1.asm:202 END_C_FUNCTION
    case 0xC447F9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C445E1.asm:202 END_C_FUNCTION
    case 0xC447FA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C447FB.asm (unresolved).
bool execute_unresolved_c4_c447fb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C447FB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC447FB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C447FB.asm:11 END_STACK_VARS
    case 0xC447FD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C447FB.asm:11 END_STACK_VARS
    case 0xC447FE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C447FB.asm:11 END_STACK_VARS
    case 0xC447FF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C447FB.asm:11 END_STACK_VARS
    case 0xC44800: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C447FB.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC44800.
    case 0xC44802: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C447FB.asm:11 END_STACK_VARS
    case 0xC44803: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C447FB.asm:11 END_STACK_VARS
    case 0xC44804: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:12 TAY
    case 0xC44805: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:13 STY @LOCAL03
    case 0xC44806: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C447FB.asm:14 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC44808: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C447FB.asm:14 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC4480A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C447FB.asm:14 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC4480C: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C447FB.asm:14 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC4480E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C447FB.asm:15 LDA CURRENT_FOCUS_WINDOW
    case 0xC44810: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C447FB.asm:16 ASL
    case 0xC44813: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:17 TAX
    case 0xC44814: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xC44815: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C447FB.asm:19 LDY #.SIZEOF(window_stats)
    case 0xC44818: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C447FB.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC44818.
    case 0xC4481A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C447FB.asm:20 JSL MULT168
    case 0xC4481B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C447FB.asm:21 CLC
    case 0xC4481F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:22 ADC #.LOWORD(WINDOW_STATS)
    case 0xC44820: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C4/C447FB.asm:22 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC44820.
    case 0xC44822: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/unknown/C4/C447FB.asm:23 TAX
    case 0xC44823: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:24 STX @LOCAL02
    case 0xC44824: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C447FB.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44826: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C447FB.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44828: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C447FB.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4482A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C447FB.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4482C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C447FB.asm:26 LDY @LOCAL03
    case 0xC4482E: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C447FB.asm:27 TYA
    case 0xC44830: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:28 JSL UNKNOWN_C43E31
    case 0xC44831: cpu.execute_instruction<0x22>(0xC43E31, 4); return true;
    // src/unknown/C4/C447FB.asm:29 STA @LOCAL01
    case 0xC44835: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C447FB.asm:30 LDA VWF_X
    case 0xC44837: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C447FB.asm:31 AND #$0007
    case 0xC4483A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C447FB.asm:31 AND #$0007
    // Overlapping static entry reached from 0xC4483A.
    case 0xC4483C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C447FB.asm:32 STA @VIRTUAL04
    case 0xC4483D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C447FB.asm:33 LDX @LOCAL02
    case 0xC4483F: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C447FB.asm:34 LDA __BSS_START__ + window_stats::text_x,X
    case 0xC44841: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C4/C447FB.asm:35 DEC
    case 0xC44844: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:36 ASL
    case 0xC44845: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:37 ASL
    case 0xC44846: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:38 ASL
    case 0xC44847: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:39 CLC
    case 0xC44848: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:40 ADC @VIRTUAL04
    case 0xC44849: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C447FB.asm:41 STA @VIRTUAL02
    case 0xC4484B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C447FB.asm:42 LDA @LOCAL01
    case 0xC4484D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C447FB.asm:43 CLC
    case 0xC4484F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:44 ADC @VIRTUAL02
    case 0xC44850: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C447FB.asm:45 STA @VIRTUAL02
    case 0xC44852: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C447FB.asm:46 LDA __BSS_START__ + window_stats::width,X
    case 0xC44854: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C4/C447FB.asm:47 ASL
    case 0xC44857: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:48 ASL
    case 0xC44858: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:49 ASL
    case 0xC44859: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:50 CMP @VIRTUAL02
    case 0xC4485A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C447FB.asm:51 BCS @UNKNOWN0
    case 0xC4485C: cpu.execute_instruction<0xB0>(0x00000B, 2); return true;
    // src/unknown/C4/C447FB.asm:52 JSL REDIRECT_PRINT_NEWLINE
    case 0xC4485E: cpu.execute_instruction<0x22>(0xC10C79, 4); return true;
    // src/unknown/C4/C447FB.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC44862: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C447FB.asm:54 LDA #1
    case 0xC44864: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C447FB.asm:55 STA VWF_INDENT_NEW_LINE
    case 0xC44866: cpu.execute_instruction<0x8D>(0x005E75, 3); return true;
    // src/unknown/C4/C447FB.asm:55 STA VWF_INDENT_NEW_LINE
    // Overlapping static entry reached from 0xC44864.
    case 0xC44867: cpu.execute_instruction<0x75>(0x00005E, 2); return true;
    // src/unknown/C4/C447FB.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC44869: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C447FB.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4486B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C447FB.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4486D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C447FB.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4486F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C447FB.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44871: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C447FB.asm:59 LDY @LOCAL03
    case 0xC44873: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C447FB.asm:60 TYA
    case 0xC44875: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C447FB.asm:61 JSL REDIRECT_PRINT_STRING
    case 0xC44876: cpu.execute_instruction<0x22>(0xC10C8C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C447FB.asm:62 END_C_FUNCTION
    case 0xC4487A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C447FB.asm:62 END_C_FUNCTION
    case 0xC4487B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4487C.asm (unresolved).
bool execute_unresolved_c4_c4487c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4487C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4487C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4487C.asm:11 END_STACK_VARS
    case 0xC4487E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4487C.asm:11 END_STACK_VARS
    case 0xC4487F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4487C.asm:11 END_STACK_VARS
    case 0xC44880: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4487C.asm:11 END_STACK_VARS
    case 0xC44881: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E7, 2); else cpu.execute_instruction<0x69>(0x00FFE7, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4487C.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC44881.
    case 0xC44883: cpu.execute_instruction<0xFF>(0xA5685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4487C.asm:11 END_STACK_VARS
    case 0xC44884: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4487C.asm:11 END_STACK_VARS
    case 0xC44885: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4487C.asm:12 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC44886: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4487C.asm:12 MOVE_INT @PARAM01, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44883.
    case 0xC44887: cpu.execute_instruction<0x27>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4487C.asm:12 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC44888: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4487C.asm:12 MOVE_INT @PARAM01, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44887.
    case 0xC44889: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4487C.asm:12 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC4488A: cpu.execute_instruction<0xA5>(0x000029, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4487C.asm:12 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC4488C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4487C.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC4488E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4487C.asm:14 LDA #0
    case 0xC44890: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/unknown/C4/C4487C.asm:15 STA @VIRTUAL00
    case 0xC44892: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4487C.asm:15 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC44890.
    case 0xC44893: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4487C.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC44894: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4487C.asm:17 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    case 0xC44896: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x009664, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4487C.asm:17 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC44896.
    case 0xC44898: cpu.execute_instruction<0x96>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4487C.asm:17 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    case 0xC44899: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4487C.asm:17 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC44898.
    case 0xC4489A: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4487C.asm:17 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    case 0xC4489B: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4487C.asm:17 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    case 0xC4489C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4487C.asm:17 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    case 0xC4489E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4487C.asm:17 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    case 0xC4489F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4487C.asm:17 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    case 0xC448A1: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4487C.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC448A3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4487C.asm:19 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC448A5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4487C.asm:19 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC448A7: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4487C.asm:19 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC448A9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4487C.asm:19 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC448AB: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/unknown/C4/C4487C.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC448AD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4487C.asm:22 LDA [@VIRTUAL0A]
    case 0xC448AF: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4487C.asm:23 STA @LOCAL02
    case 0xC448B1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4487C.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC448B3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4487C.asm:25 AND #$00FF
    case 0xC448B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4487C.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC448B5.
    case 0xC448B7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4487C.asm:26 TAX
    case 0xC448B8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4487C.asm:27 STX @LOCAL01
    case 0xC448B9: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C4487C.asm:28 LDA @VIRTUAL00
    case 0xC448BB: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4487C.asm:29 AND #$00FF
    case 0xC448BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4487C.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC448BD.
    case 0xC448BF: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4487C.asm:30 MOVE_INTY @LOCAL03, @VIRTUAL06
    case 0xC448C0: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4487C.asm:30 MOVE_INTY @LOCAL03, @VIRTUAL06
    case 0xC448C2: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4487C.asm:30 MOVE_INTY @LOCAL03, @VIRTUAL06
    case 0xC448C4: cpu.execute_instruction<0xA4>(0x000017, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4487C.asm:30 MOVE_INTY @LOCAL03, @VIRTUAL06
    case 0xC448C6: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4487C.asm:31 CLC
    case 0xC448C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4487C.asm:32 ADC @VIRTUAL06
    case 0xC448C9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4487C.asm:33 STA @VIRTUAL06
    case 0xC448CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4487C.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC448CD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4487C.asm:35 LDA @LOCAL02
    case 0xC448CF: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4487C.asm:36 STA [@VIRTUAL06]
    case 0xC448D1: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4487C.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC448D3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4487C.asm:38 INC @VIRTUAL0A
    case 0xC448D5: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4487C.asm:39 CPX #CHAR::SPACE
    case 0xC448D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000050, 2); else cpu.execute_instruction<0xE0>(0x000050, 3); return true;
    // src/unknown/C4/C4487C.asm:39 CPX #CHAR::SPACE
    // Overlapping static entry reached from 0xC448D7.
    case 0xC448D9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4487C.asm:40 BEQ @UNKNOWN1
    case 0xC448DA: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4487C.asm:41 CPX #0
    case 0xC448DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C4/C4487C.asm:41 CPX #0
    // Overlapping static entry reached from 0xC448DC.
    case 0xC448DE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4487C.asm:42 BNE @UNKNOWN3
    case 0xC448DF: cpu.execute_instruction<0xD0>(0x000073, 2); return true;
    // src/unknown/C4/C4487C.asm:44 CPX #CHAR::SPACE
    case 0xC448E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000050, 2); else cpu.execute_instruction<0xE0>(0x000050, 3); return true;
    // src/unknown/C4/C4487C.asm:44 CPX #CHAR::SPACE
    // Overlapping static entry reached from 0xC448E1.
    case 0xC448E3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4487C.asm:45 BNE @UNKNOWN2
    case 0xC448E4: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/unknown/C4/C4487C.asm:46 LDA @VIRTUAL00
    case 0xC448E6: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4487C.asm:47 AND #$00FF
    case 0xC448E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4487C.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC448E8.
    case 0xC448EA: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4487C.asm:48 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC448EB: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4487C.asm:48 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC448ED: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4487C.asm:48 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC448EF: cpu.execute_instruction<0xA6>(0x000017, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4487C.asm:48 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC448F1: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4487C.asm:49 CLC
    case 0xC448F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4487C.asm:50 ADC @VIRTUAL06
    case 0xC448F4: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4487C.asm:51 STA @VIRTUAL06
    case 0xC448F6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4487C.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC448F8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4487C.asm:53 LDA #CHAR::SPACE
    case 0xC448FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008750, 3); return true;
    // src/unknown/C4/C4487C.asm:54 STA [@VIRTUAL06]
    case 0xC448FC: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4487C.asm:54 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC448FA.
    case 0xC448FD: cpu.execute_instruction<0x06>(0x0000E6, 2); return true;
    // src/unknown/C4/C4487C.asm:55 INC @VIRTUAL00
    case 0xC448FE: cpu.execute_instruction<0xE6>(0x000000, 2); return true;
    // src/unknown/C4/C4487C.asm:55 INC @VIRTUAL00
    // Overlapping static entry reached from 0xC448FD.
    case 0xC448FF: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4487C.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC44900: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4487C.asm:58 LDA @VIRTUAL00
    case 0xC44902: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4487C.asm:59 AND #$00FF
    case 0xC44904: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4487C.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC44904.
    case 0xC44906: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4487C.asm:60 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC44907: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4487C.asm:60 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC44909: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4487C.asm:60 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC4490B: cpu.execute_instruction<0xA6>(0x000017, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4487C.asm:60 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC4490D: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4487C.asm:61 CLC
    case 0xC4490F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4487C.asm:62 ADC @VIRTUAL06
    case 0xC44910: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4487C.asm:63 STA @VIRTUAL06
    case 0xC44912: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4487C.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC44914: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4487C.asm:65 LDA #0
    case 0xC44916: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C4487C.asm:66 STA [@VIRTUAL06]
    case 0xC44918: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4487C.asm:66 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC44916.
    case 0xC44919: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4487C.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC4491A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4487C.asm:67 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC44919.
    case 0xC4491B: cpu.execute_instruction<0x20>(0x0015A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4487C.asm:68 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4491C: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4487C.asm:68 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4491E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4487C.asm:68 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44920: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4487C.asm:68 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC44922: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4487C.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44924: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4487C.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44926: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4487C.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44928: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4487C.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4492A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4487C.asm:70 LDA #.LOWORD(-1)
    case 0xC4492C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4487C.asm:70 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4492C.
    case 0xC4492E: cpu.execute_instruction<0xFF>(0x47FB22, 4); return true;
    // src/unknown/C4/C4487C.asm:71 JSL UNKNOWN_C447FB
    case 0xC4492F: cpu.execute_instruction<0x22>(0xC447FB, 4); return true;
    // src/unknown/C4/C4487C.asm:71 JSL UNKNOWN_C447FB
    // Overlapping static entry reached from 0xC4492E.
    case 0xC44932: cpu.execute_instruction<0xC4>(0x0000E2, 2); return true;
    // src/unknown/C4/C4487C.asm:72 SEP #PROC_FLAGS::ACCUM8
    case 0xC44933: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4487C.asm:72 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC44932.
    case 0xC44934: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C4/C4487C.asm:73 LDA #0
    case 0xC44935: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/unknown/C4/C4487C.asm:74 STA @VIRTUAL00
    case 0xC44937: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4487C.asm:74 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC44935.
    case 0xC44938: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4487C.asm:75 REP #PROC_FLAGS::ACCUM8
    case 0xC44939: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4487C.asm:76 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    case 0xC4493B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x009664, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4487C.asm:76 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4493B.
    case 0xC4493D: cpu.execute_instruction<0x96>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4487C.asm:76 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    case 0xC4493E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4487C.asm:76 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4493D.
    case 0xC4493F: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4487C.asm:76 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    case 0xC44940: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4487C.asm:76 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    case 0xC44941: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4487C.asm:76 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    case 0xC44943: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4487C.asm:76 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    case 0xC44944: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4487C.asm:76 PROMOTENEARPTR WORD_SPLITTING_BUFFER, @VIRTUAL06
    case 0xC44946: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4487C.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC44948: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4487C.asm:78 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4494A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4487C.asm:78 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4494C: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4487C.asm:78 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4494E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4487C.asm:78 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC44950: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/unknown/C4/C4487C.asm:79 BRA @UNKNOWN4
    case 0xC44952: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C4487C.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC44954: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4487C.asm:82 INC @VIRTUAL00
    case 0xC44956: cpu.execute_instruction<0xE6>(0x000000, 2); return true;
    // src/unknown/C4/C4487C.asm:84 LDX @LOCAL01
    case 0xC44958: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4487C.asm:85 BNEL @UNKNOWN0
    case 0xC4495A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4487C.asm:85 BNEL @UNKNOWN0
    case 0xC4495C: cpu.execute_instruction<0x4C>(0x0048AD, 3); return true;
    // src/unknown/C4/C4487C.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC4495F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4487C.asm:87 END_C_FUNCTION
    case 0xC44961: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4487C.asm:87 END_C_FUNCTION
    case 0xC44962: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C44963.asm (unresolved).
bool execute_unresolved_c4_c44963_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C44963.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44963: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C44963.asm:7 END_STACK_VARS
    case 0xC44965: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C44963.asm:7 END_STACK_VARS
    case 0xC44966: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C44963.asm:7 END_STACK_VARS
    case 0xC44967: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44963.asm:7 END_STACK_VARS
    case 0xC44968: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44963.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC44968.
    case 0xC4496A: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C44963.asm:7 END_STACK_VARS
    case 0xC4496B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C44963.asm:7 END_STACK_VARS
    case 0xC4496C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C44963.asm:8 CMP #1
    case 0xC4496D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C44963.asm:8 CMP #1
    // Overlapping static entry reached from 0xC4496A.
    case 0xC4496E: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C4/C44963.asm:8 CMP #1
    // Overlapping static entry reached from 0xC4496D.
    case 0xC4496F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C44963.asm:9 BEQ @LOAD_VRAM1
    case 0xC44970: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C4/C44963.asm:10 CMP #0
    case 0xC44972: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C44963.asm:10 CMP #0
    // Overlapping static entry reached from 0xC44972.
    case 0xC44974: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C44963.asm:11 BEQ @LOAD_VRAM2
    case 0xC44975: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/C4/C44963.asm:12 CMP #2
    case 0xC44977: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C44963.asm:12 CMP #2
    // Overlapping static entry reached from 0xC44977.
    case 0xC44979: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C44963.asm:13 BEQL @LOAD_VRAM3
    case 0xC4497A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C44963.asm:13 BEQL @LOAD_VRAM3
    case 0xC4497C: cpu.execute_instruction<0x4C>(0x004A2D, 3); return true;
    // src/unknown/C4/C44963.asm:14 JMP @RETURN
    case 0xC4497F: cpu.execute_instruction<0x4C>(0x004AD5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44982: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC44982.
    case 0xC44984: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44985: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44987: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC44987.
    case 0xC44989: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC4498A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC4498C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC4498C.
    case 0xC4498E: cpu.execute_instruction<0x70>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC4498F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC4498E.
    case 0xC44990: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC4498F.
    case 0xC44991: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44992: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44994: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44996: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC44994.
    case 0xC44997: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:16 COPY_TO_VRAM1 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC44997.
    case 0xC44999: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC4499A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC44999.
    case 0xC4499B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC4499A.
    case 0xC4499C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC4499D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC4499F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC4499F.
    case 0xC449A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC449A2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC449A4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC449A4.
    case 0xC449A6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC449A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000050, 2); else cpu.execute_instruction<0xA2>(0x000450, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC449A7.
    case 0xC449A9: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC449AA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC449A9.
    case 0xC449AB: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC449AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC449AE: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC449AC.
    case 0xC449AF: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:18 COPY_TO_VRAM1 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC449AF.
    case 0xC449B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00F0A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC449B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x0004F0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC449B1.
    case 0xC449B3: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC449B2.
    case 0xC449B4: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC449B5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC449B4.
    case 0xC449B6: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC449B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC449B7.
    case 0xC449B9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC449BA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC449BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000078, 2); else cpu.execute_instruction<0xA0>(0x006278, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC449BC.
    case 0xC449BE: cpu.execute_instruction<0x62>(0x0060A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC449BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000060, 2); else cpu.execute_instruction<0xA2>(0x000060, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC449BF.
    case 0xC449C1: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC449C2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC449C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC449C6: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC449C4.
    case 0xC449C7: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:19 COPY_TO_VRAM1 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC449C7.
    case 0xC449C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00F0A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC449CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x0005F0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC449C9.
    case 0xC449CB: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC449CA.
    case 0xC449CC: cpu.execute_instruction<0x05>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC449CD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC449CC.
    case 0xC449CE: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC449CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC449CF.
    case 0xC449D1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC449D2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC449D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F8, 2); else cpu.execute_instruction<0xA0>(0x0062F8, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC449D4.
    case 0xC449D6: cpu.execute_instruction<0x62>(0x00B0A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC449D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B0, 2); else cpu.execute_instruction<0xA2>(0x0000B0, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC449D7.
    case 0xC449D9: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC449DA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC449DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC449DE: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC449DC.
    case 0xC449DF: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:20 COPY_TO_VRAM1 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC449DF.
    case 0xC449E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC449E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000700, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC449E1.
    case 0xC449E3: cpu.execute_instruction<0x00>(0x000007, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC449E2.
    case 0xC449E4: cpu.execute_instruction<0x07>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC449E5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC449E4.
    case 0xC449E6: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC449E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC449E7.
    case 0xC449E9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC449EA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC449EC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x006380, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC449EC.
    case 0xC449EE: cpu.execute_instruction<0x63>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC449EF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A0, 2); else cpu.execute_instruction<0xA2>(0x0000A0, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC449EE.
    case 0xC449F0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x00E200, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC449EF.
    case 0xC449F1: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC449F2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC449F0.
    case 0xC449F3: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC449F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC449F6: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC449F4.
    case 0xC449F7: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:21 COPY_TO_VRAM1 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC449F7.
    case 0xC449F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC449FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC449F9.
    case 0xC449FB: cpu.execute_instruction<0x00>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC449FA.
    case 0xC449FC: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC449FD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC449FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC449FF.
    case 0xC44A01: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44A02: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44A04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006400, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC44A04.
    case 0xC44A06: cpu.execute_instruction<0x64>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44A07: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC44A06.
    case 0xC44A08: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC44A07.
    case 0xC44A09: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44A0A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44A0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44A0E: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC44A0C.
    case 0xC44A0F: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:22 COPY_TO_VRAM1 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC44A0F.
    case 0xC44A11: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44A12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000900, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44A11.
    case 0xC44A13: cpu.execute_instruction<0x00>(0x000009, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44A12.
    case 0xC44A14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000085, 2); else cpu.execute_instruction<0x09>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44A15: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44A14.
    case 0xC44A16: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44A17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44A17.
    case 0xC44A19: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44A1A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44A1C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x006480, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44A1C.
    case 0xC44A1E: cpu.execute_instruction<0x64>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44A1F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44A1E.
    case 0xC44A20: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44A1F.
    case 0xC44A21: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44A22: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44A24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44A26: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44A24.
    case 0xC44A27: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C44963.asm:23 COPY_TO_VRAM1 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44A27.
    case 0xC44A29: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00004C, 2); else cpu.execute_instruction<0xC0>(0x00D54C, 3); return true;
    // src/unknown/C4/C44963.asm:24 JMP @RETURN
    case 0xC44A2A: cpu.execute_instruction<0x4C>(0x004AD5, 3); return true;
    // src/unknown/C4/C44963.asm:24 JMP @RETURN
    // Overlapping static entry reached from 0xC44A29.
    case 0xC44A2B: cpu.execute_instruction<0xD5>(0x00004A, 2); return true;
    // src/unknown/C4/C44963.asm:24 JMP @RETURN
    // Overlapping static entry reached from 0xC44A29.
    case 0xC44A2C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC44A2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC44A2D.
    case 0xC44A2F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC44A30: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC44A32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC44A32.
    case 0xC44A34: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC44A35: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC44A37: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC44A37.
    case 0xC44A39: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC44A3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000050, 2); else cpu.execute_instruction<0xA2>(0x000450, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC44A3A.
    case 0xC44A3C: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC44A3D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC44A3C.
    case 0xC44A3E: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1209 LDA #unk
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC44A3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    case 0xC44A41: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC44A3F.
    case 0xC44A42: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:26 COPY_TO_VRAM3 BUFFER, VRAM::TEXT_LAYER_TILES + 0, $450, 0
    // Overlapping static entry reached from 0xC44A42.
    case 0xC44A44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00F0A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC44A45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x0004F0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC44A44.
    case 0xC44A46: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC44A45.
    case 0xC44A47: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC44A48: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC44A47.
    case 0xC44A49: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC44A4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC44A4A.
    case 0xC44A4C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC44A4D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC44A4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000078, 2); else cpu.execute_instruction<0xA0>(0x006278, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC44A4F.
    case 0xC44A51: cpu.execute_instruction<0x62>(0x0060A2, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC44A52: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000060, 2); else cpu.execute_instruction<0xA2>(0x000060, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC44A52.
    case 0xC44A54: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC44A55: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1209 LDA #unk
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC44A57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    case 0xC44A59: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC44A57.
    case 0xC44A5A: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:27 COPY_TO_VRAM3 BUFFER + $4F0, VRAM::TEXT_LAYER_TILES + $278, $60, 0
    // Overlapping static entry reached from 0xC44A5A.
    case 0xC44A5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00F0A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC44A5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x0005F0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC44A5C.
    case 0xC44A5E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC44A5D.
    case 0xC44A5F: cpu.execute_instruction<0x05>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC44A60: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC44A5F.
    case 0xC44A61: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC44A62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC44A62.
    case 0xC44A64: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC44A65: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC44A67: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F8, 2); else cpu.execute_instruction<0xA0>(0x0062F8, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC44A67.
    case 0xC44A69: cpu.execute_instruction<0x62>(0x00B0A2, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC44A6A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B0, 2); else cpu.execute_instruction<0xA2>(0x0000B0, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC44A6A.
    case 0xC44A6C: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC44A6D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1209 LDA #unk
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC44A6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    case 0xC44A71: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC44A6F.
    case 0xC44A72: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:28 COPY_TO_VRAM3 BUFFER + $5F0, VRAM::TEXT_LAYER_TILES + $2F8, $B0, 0
    // Overlapping static entry reached from 0xC44A72.
    case 0xC44A74: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC44A75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000700, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC44A74.
    case 0xC44A76: cpu.execute_instruction<0x00>(0x000007, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC44A75.
    case 0xC44A77: cpu.execute_instruction<0x07>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC44A78: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC44A77.
    case 0xC44A79: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC44A7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC44A7A.
    case 0xC44A7C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC44A7D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC44A7F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x006380, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC44A7F.
    case 0xC44A81: cpu.execute_instruction<0x63>(0x0000A2, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC44A82: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A0, 2); else cpu.execute_instruction<0xA2>(0x0000A0, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC44A81.
    case 0xC44A83: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x00E200, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC44A82.
    case 0xC44A84: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC44A85: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC44A83.
    case 0xC44A86: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1209 LDA #unk
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC44A87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    case 0xC44A89: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC44A87.
    case 0xC44A8A: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:29 COPY_TO_VRAM3 BUFFER + $700, VRAM::TEXT_LAYER_TILES + $380, $A0, 0
    // Overlapping static entry reached from 0xC44A8A.
    case 0xC44A8C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44A8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC44A8C.
    case 0xC44A8E: cpu.execute_instruction<0x00>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC44A8D.
    case 0xC44A8F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44A90: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44A92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC44A92.
    case 0xC44A94: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44A95: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44A97: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006400, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC44A97.
    case 0xC44A99: cpu.execute_instruction<0x64>(0x0000A2, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44A9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC44A99.
    case 0xC44A9B: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC44A9A.
    case 0xC44A9C: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44A9D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1209 LDA #unk
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44A9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    case 0xC44AA1: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC44A9F.
    case 0xC44AA2: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:30 COPY_TO_VRAM3 BUFFER + $800, VRAM::TEXT_LAYER_TILES + $400, $10, 0
    // Overlapping static entry reached from 0xC44AA2.
    case 0xC44AA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44AA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000900, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44AA4.
    case 0xC44AA6: cpu.execute_instruction<0x00>(0x000009, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44AA5.
    case 0xC44AA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000085, 2); else cpu.execute_instruction<0x09>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44AA8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44AA7.
    case 0xC44AA9: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44AAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44AAA.
    case 0xC44AAC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44AAD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44AAF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x006480, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44AAF.
    case 0xC44AB1: cpu.execute_instruction<0x64>(0x0000A2, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44AB2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44AB1.
    case 0xC44AB3: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44AB2.
    case 0xC44AB4: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44AB5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1209 LDA #unk
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44AB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    case 0xC44AB9: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44AB7.
    case 0xC44ABA: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:31 COPY_TO_VRAM3 BUFFER + $900, VRAM::TEXT_LAYER_TILES + $480, $10, 0
    // Overlapping static entry reached from 0xC44ABA.
    case 0xC44ABC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44ABD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC44ABC.
    case 0xC44ABE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC44ABD.
    case 0xC44ABF: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44AC0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44AC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC44AC2.
    case 0xC44AC4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44AC5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44AC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007000, 3); return true;
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC44AC7.
    case 0xC44AC9: cpu.execute_instruction<0x70>(0x0000A2, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44ACA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001800, 3); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC44AC9.
    case 0xC44ACB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC44ACA.
    case 0xC44ACC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44ACD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1209 LDA #unk
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44ACF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    case 0xC44AD1: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC44ACF.
    case 0xC44AD2: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/unknown/C4/C44963.asm:32 COPY_TO_VRAM3 BUFFER + $2000, VRAM::TEXT_LAYER_TILES + $1000, $1800, 0
    // Overlapping static entry reached from 0xC44AD2.
    case 0xC44AD4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C44963.asm:34 END_C_FUNCTION
    case 0xC44AD5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C44963.asm:34 END_C_FUNCTION
    case 0xC44AD6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C44B3A.asm (unresolved).
bool execute_unresolved_c4_c44b3a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C44B3A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44B3A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C44B3A.asm:13 END_STACK_VARS
    case 0xC44B3C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C44B3A.asm:13 END_STACK_VARS
    case 0xC44B3D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C44B3A.asm:13 END_STACK_VARS
    case 0xC44B3E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44B3A.asm:13 END_STACK_VARS
    case 0xC44B3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E9, 2); else cpu.execute_instruction<0x69>(0x00FFE9, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44B3A.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC44B3F.
    case 0xC44B41: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C44B3A.asm:13 END_STACK_VARS
    case 0xC44B42: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C44B3A.asm:13 END_STACK_VARS
    case 0xC44B43: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:14 STX @VIRTUAL04
    case 0xC44B44: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C44B3A.asm:14 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC44B41.
    case 0xC44B45: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C4/C44B3A.asm:15 STA @LOCAL04
    case 0xC44B46: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C4/C44B3A.asm:15 STA @LOCAL04
    // Overlapping static entry reached from 0xC44B45.
    case 0xC44B47: cpu.execute_instruction<0x15>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44B3A.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC44B48: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44B3A.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44B47.
    case 0xC44B49: cpu.execute_instruction<0x25>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44B3A.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC44B4A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44B3A.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44B49.
    case 0xC44B4B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44B3A.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC44B4C: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44B3A.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC44B4E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C44B3A.asm:17 LDA VWF_X
    case 0xC44B50: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C44B3A.asm:18 AND #$0007
    case 0xC44B53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C44B3A.asm:18 AND #$0007
    // Overlapping static entry reached from 0xC44B53.
    case 0xC44B55: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C44B3A.asm:19 STA @VIRTUAL02
    case 0xC44B56: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44B3A.asm:20 STA @LOCAL03
    case 0xC44B58: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/unknown/C4/C44B3A.asm:21 LDA VWF_TILE
    case 0xC44B5A: cpu.execute_instruction<0xAD>(0x009E25, 3); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:22 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44B5D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:22 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44B5E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:22 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44B5F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:22 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44B60: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:22 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44B61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:23 CLC
    case 0xC44B62: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:24 ADC #.LOWORD(VWF_BUFFER)
    case 0xC44B63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000092, 2); else cpu.execute_instruction<0x69>(0x003492, 3); return true;
    // src/unknown/C4/C44B3A.asm:24 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC44B63.
    case 0xC44B65: cpu.execute_instruction<0x34>(0x0000A8, 2); return true;
    // src/unknown/C4/C44B3A.asm:25 TAY
    case 0xC44B66: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:26 STY @LOCAL02
    case 0xC44B67: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44B3A.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44B69: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44B3A.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44B6B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44B3A.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44B6D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44B3A.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44B6F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C44B3A.asm:28 LDA @VIRTUAL02
    case 0xC44B71: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C44B3A.asm:29 BNE @UNKNOWN0
    case 0xC44B73: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/unknown/C4/C44B3A.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC44B75: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C44B3A.asm:31 LDA #<-1
    case 0xC44B77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C4/C44B3A.asm:32 STA @LOCAL00
    case 0xC44B79: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C44B3A.asm:32 STA @LOCAL00
    // Overlapping static entry reached from 0xC44B77.
    case 0xC44B7A: cpu.execute_instruction<0x0E>(0x0020C2, 3); return true;
    // src/unknown/C4/C44B3A.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC44B7B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C44B3A.asm:34 LDA @VIRTUAL04
    case 0xC44B7D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C44B3A.asm:35 ASL
    case 0xC44B7F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:36 TAX
    case 0xC44B80: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:37 TYA
    case 0xC44B81: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:38 JSL MEMSET16
    case 0xC44B82: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C44B3A.asm:40 LDY @LOCAL02
    case 0xC44B86: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/unknown/C4/C44B3A.asm:41 TYX
    case 0xC44B88: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:42 INX
    case 0xC44B89: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:43 STX @LOCAL01
    case 0xC44B8A: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/unknown/C4/C44B3A.asm:44 LDA #0
    case 0xC44B8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C44B3A.asm:44 LDA #0
    // Overlapping static entry reached from 0xC44B8C.
    case 0xC44B8E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C44B3A.asm:45 STA @LOCAL02
    case 0xC44B8F: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C4/C44B3A.asm:46 BRA @UNKNOWN2
    case 0xC44B91: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C4/C44B3A.asm:48 LDA [@VIRTUAL06]
    case 0xC44B93: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C44B3A.asm:49 AND #$00FF
    case 0xC44B95: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C44B3A.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC44B95.
    case 0xC44B97: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C4/C44B3A.asm:50 PHA
    case 0xC44B98: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:51 LDA @LOCAL03
    case 0xC44B99: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C4/C44B3A.asm:52 STA @VIRTUAL02
    case 0xC44B9B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44B3A.asm:52 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4A589.
    case 0xC44B9C: cpu.execute_instruction<0x02>(0x0000EB, 2); return true;
    // src/unknown/C4/C44B3A.asm:53 XBA
    case 0xC44B9D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:54 AND #$FF00
    case 0xC44B9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C44B3A.asm:54 AND #$FF00
    // Overlapping static entry reached from 0xC44B9E.
    case 0xC44BA0: cpu.execute_instruction<0xFF>(0x02847A, 4); return true;
    // src/unknown/C4/C44B3A.asm:55 PLY
    case 0xC44BA1: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:56 STY @VIRTUAL02
    case 0xC44BA2: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C44B3A.asm:57 CLC
    case 0xC44BA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:58 ADC @VIRTUAL02
    case 0xC44BA5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C44B3A.asm:59 PHA
    case 0xC44BA7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC44BA8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C44B3A.asm:61 LDA __BSS_START__,X
    case 0xC44BAA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C44B3A.asm:62 PLX
    case 0xC44BAD: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:63 AND f:UNKNOWN_EFC51B,X
    case 0xC44BAE: cpu.execute_instruction<0x3F>(0xEFC51B, 4); return true;
    // src/unknown/C4/C44B3A.asm:64 LDX @LOCAL01
    case 0xC44BB2: cpu.execute_instruction<0xA6>(0x00000F, 2); return true;
    // src/unknown/C4/C44B3A.asm:65 STA __BSS_START__,X
    case 0xC44BB4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C44B3A.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC44BB7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C44B3A.asm:67 INC @VIRTUAL06
    case 0xC44BB9: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C44B3A.asm:68 INX
    case 0xC44BBB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:69 INX
    case 0xC44BBC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:70 STX @LOCAL01
    case 0xC44BBD: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/unknown/C4/C44B3A.asm:71 LDA @LOCAL02
    case 0xC44BBF: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C4/C44B3A.asm:72 INC
    case 0xC44BC1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:73 STA @LOCAL02
    case 0xC44BC2: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C4/C44B3A.asm:75 CMP @VIRTUAL04
    case 0xC44BC4: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C44B3A.asm:76 BCC @UNKNOWN1
    case 0xC44BC6: cpu.execute_instruction<0x90>(0x0000CB, 2); return true;
    // src/unknown/C4/C44B3A.asm:77 LDA VWF_X
    case 0xC44BC8: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C44B3A.asm:78 CLC
    case 0xC44BCB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:79 ADC @LOCAL04
    case 0xC44BCC: cpu.execute_instruction<0x65>(0x000015, 2); return true;
    // src/unknown/C4/C44B3A.asm:80 STA VWF_X
    case 0xC44BCE: cpu.execute_instruction<0x8D>(0x009E23, 3); return true;
    // src/unknown/C4/C44B3A.asm:81 CMP #52 * 8
    case 0xC44BD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000A0, 2); else cpu.execute_instruction<0xC9>(0x0001A0, 3); return true;
    // src/unknown/C4/C44B3A.asm:81 CMP #52 * 8
    // Overlapping static entry reached from 0xC44BD1.
    case 0xC44BD3: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C4/C44B3A.asm:82 BCC @UNKNOWN3
    case 0xC44BD4: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/unknown/C4/C44B3A.asm:82 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC44BD3.
    case 0xC44BD5: cpu.execute_instruction<0x07>(0x000038, 2); return true;
    // src/unknown/C4/C44B3A.asm:83 SEC
    case 0xC44BD6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:84 SBC #52 * 8
    case 0xC44BD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000A0, 2); else cpu.execute_instruction<0xE9>(0x0001A0, 3); return true;
    // src/unknown/C4/C44B3A.asm:84 SBC #52 * 8
    // Overlapping static entry reached from 0xC44BD7.
    case 0xC44BD9: cpu.execute_instruction<0x01>(0x00008D, 2); return true;
    // src/unknown/C4/C44B3A.asm:85 STA VWF_X
    case 0xC44BDA: cpu.execute_instruction<0x8D>(0x009E23, 3); return true;
    // src/unknown/C4/C44B3A.asm:85 STA VWF_X
    // Overlapping static entry reached from 0xC44BD9.
    case 0xC44BDB: cpu.execute_instruction<0x23>(0x00009E, 2); return true;
    // src/unknown/C4/C44B3A.asm:87 LDA VWF_X
    case 0xC44BDD: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C44B3A.asm:88 LSR
    case 0xC44BE0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:89 LSR
    case 0xC44BE1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:90 LSR
    case 0xC44BE2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:91 STA @LOCAL04
    case 0xC44BE3: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C4/C44B3A.asm:92 CMP VWF_TILE
    case 0xC44BE5: cpu.execute_instruction<0xCD>(0x009E25, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C44B3A.asm:93 BEQL @UNKNOWN7
    case 0xC44BE8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C44B3A.asm:93 BEQL @UNKNOWN7
    case 0xC44BEA: cpu.execute_instruction<0x4C>(0x004C6A, 3); return true;
    // src/unknown/C4/C44B3A.asm:94 STA VWF_TILE
    case 0xC44BED: cpu.execute_instruction<0x8D>(0x009E25, 3); return true;
    // src/unknown/C4/C44B3A.asm:95 LDA @LOCAL03
    case 0xC44BF0: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C4/C44B3A.asm:96 STA @VIRTUAL02
    case 0xC44BF2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44B3A.asm:97 LDA #8
    case 0xC44BF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C44B3A.asm:97 LDA #8
    // Overlapping static entry reached from 0xC44BF4.
    case 0xC44BF6: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C44B3A.asm:98 SEC
    case 0xC44BF7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:99 SBC @VIRTUAL02
    case 0xC44BF8: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C44B3A.asm:100 STA @VIRTUAL02
    case 0xC44BFA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44B3A.asm:101 STA @LOCAL03
    case 0xC44BFC: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/unknown/C4/C44B3A.asm:102 LDA @LOCAL04
    case 0xC44BFE: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:103 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44C00: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:103 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44C01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:103 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44C02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:103 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44C03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C4/C44B3A.asm:103 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC44C04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:104 CLC
    case 0xC44C05: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:105 ADC #.LOWORD(VWF_BUFFER)
    case 0xC44C06: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000092, 2); else cpu.execute_instruction<0x69>(0x003492, 3); return true;
    // src/unknown/C4/C44B3A.asm:105 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC44C06.
    case 0xC44C08: cpu.execute_instruction<0x34>(0x0000A8, 2); return true;
    // src/unknown/C4/C44B3A.asm:106 TAY
    case 0xC44C09: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:107 STY @LOCAL02
    case 0xC44C0A: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C44B3A.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44C0C: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C44B3A.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44C0E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C44B3A.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44C10: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C44B3A.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC44C12: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C44B3A.asm:109 SEP #PROC_FLAGS::ACCUM8
    case 0xC44C14: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C44B3A.asm:110 LDA #<-1
    case 0xC44C16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C4/C44B3A.asm:111 STA @LOCAL00
    case 0xC44C18: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C44B3A.asm:111 STA @LOCAL00
    // Overlapping static entry reached from 0xC44C16.
    case 0xC44C19: cpu.execute_instruction<0x0E>(0x0020C2, 3); return true;
    // src/unknown/C4/C44B3A.asm:112 REP #PROC_FLAGS::ACCUM8
    case 0xC44C1A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C44B3A.asm:113 LDA @VIRTUAL04
    case 0xC44C1C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C44B3A.asm:114 ASL
    case 0xC44C1E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:115 TAX
    case 0xC44C1F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:116 TYA
    case 0xC44C20: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:117 JSL MEMSET16
    case 0xC44C21: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C44B3A.asm:118 LDA @VIRTUAL02
    case 0xC44C25: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C44B3A.asm:119 CMP #8
    case 0xC44C27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C4/C44B3A.asm:119 CMP #8
    // Overlapping static entry reached from 0xC44C27.
    case 0xC44C29: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C44B3A.asm:120 BEQ @UNKNOWN7
    case 0xC44C2A: cpu.execute_instruction<0xF0>(0x00003E, 2); return true;
    // src/unknown/C4/C44B3A.asm:121 LDY @LOCAL02
    case 0xC44C2C: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/unknown/C4/C44B3A.asm:122 TYX
    case 0xC44C2E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:123 INX
    case 0xC44C2F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:124 STX @LOCAL01
    case 0xC44C30: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/unknown/C4/C44B3A.asm:125 LDA #0
    case 0xC44C32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C44B3A.asm:125 LDA #0
    // Overlapping static entry reached from 0xC44C32.
    case 0xC44C34: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C44B3A.asm:126 STA @LOCAL02
    case 0xC44C35: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C4/C44B3A.asm:127 BRA @UNKNOWN6
    case 0xC44C37: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C4/C44B3A.asm:129 LDA [@VIRTUAL06]
    case 0xC44C39: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C44B3A.asm:130 AND #$00FF
    case 0xC44C3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C44B3A.asm:130 AND #$00FF
    // Overlapping static entry reached from 0xC44C3B.
    case 0xC44C3D: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C4/C44B3A.asm:131 PHA
    case 0xC44C3E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:132 LDA @LOCAL03
    case 0xC44C3F: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C4/C44B3A.asm:133 STA @VIRTUAL02
    case 0xC44C41: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44B3A.asm:134 XBA
    case 0xC44C43: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:135 AND #$FF00
    case 0xC44C44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C44B3A.asm:135 AND #$FF00
    // Overlapping static entry reached from 0xC44C44.
    case 0xC44C46: cpu.execute_instruction<0xFF>(0x02847A, 4); return true;
    // src/unknown/C4/C44B3A.asm:136 PLY
    case 0xC44C47: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:137 STY @VIRTUAL02
    case 0xC44C48: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C44B3A.asm:138 CLC
    case 0xC44C4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:139 ADC @VIRTUAL02
    case 0xC44C4B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C44B3A.asm:140 TAX
    case 0xC44C4D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:141 SEP #PROC_FLAGS::ACCUM8
    case 0xC44C4E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C44B3A.asm:142 LDA f:UNKNOWN_EFCD1B,X
    case 0xC44C50: cpu.execute_instruction<0xBF>(0xEFCD1B, 4); return true;
    // src/unknown/C4/C44B3A.asm:143 LDX @LOCAL01
    case 0xC44C54: cpu.execute_instruction<0xA6>(0x00000F, 2); return true;
    // src/unknown/C4/C44B3A.asm:144 STA __BSS_START__,X
    case 0xC44C56: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C44B3A.asm:145 REP #PROC_FLAGS::ACCUM8
    case 0xC44C59: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C44B3A.asm:146 INC @VIRTUAL06
    case 0xC44C5B: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C44B3A.asm:147 INX
    case 0xC44C5D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:148 INX
    case 0xC44C5E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:149 STX @LOCAL01
    case 0xC44C5F: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/unknown/C4/C44B3A.asm:150 LDA @LOCAL02
    case 0xC44C61: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C4/C44B3A.asm:151 INC
    case 0xC44C63: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C44B3A.asm:152 STA @LOCAL02
    case 0xC44C64: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C4/C44B3A.asm:154 CMP @VIRTUAL04
    case 0xC44C66: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C44B3A.asm:155 BCC @UNKNOWN5
    case 0xC44C68: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C44B3A.asm:157 END_C_FUNCTION
    case 0xC44C6A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C44B3A.asm:157 END_C_FUNCTION
    case 0xC44C6B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C44C8C.asm (unresolved).
bool execute_unresolved_c4_c44c8c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C44C8C.asm:3 BEGIN_C_FUNCTION
    case 0xC44C8C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C44C8C.asm:13 END_STACK_VARS
    case 0xC44C8E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C44C8C.asm:13 END_STACK_VARS
    case 0xC44C8F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C44C8C.asm:13 END_STACK_VARS
    case 0xC44C90: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44C8C.asm:13 END_STACK_VARS
    case 0xC44C91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44C8C.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC44C91.
    case 0xC44C93: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C44C8C.asm:13 END_STACK_VARS
    case 0xC44C94: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C44C8C.asm:13 END_STACK_VARS
    case 0xC44C95: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:14 STX @LOCAL05
    case 0xC44C96: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C4/C44C8C.asm:14 STX @LOCAL05
    // Overlapping static entry reached from 0xC44C93.
    case 0xC44C97: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:15 STA @LOCAL04
    case 0xC44C98: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C44C8C.asm:16 LDA CURRENT_FOCUS_WINDOW
    case 0xC44C9A: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C44C8C.asm:17 CMP #.LOWORD(-1)
    case 0xC44C9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C44C8C.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC44C9D.
    case 0xC44C9F: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C44C8C.asm:18 BEQL @UNKNOWN16
    case 0xC44CA0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C44C8C.asm:18 BEQL @UNKNOWN16
    case 0xC44CA2: cpu.execute_instruction<0x4C>(0x004DC8, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C44C8C.asm:18 BEQL @UNKNOWN16
    // Overlapping static entry reached from 0xC44C9F.
    case 0xC44CA3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C44C8C.asm:18 BEQL @UNKNOWN16
    // Overlapping static entry reached from 0xC44CA3.
    case 0xC44CA4: cpu.execute_instruction<0x4D>(0x0058AD, 3); return true;
    // src/unknown/C4/C44C8C.asm:19 LDA CURRENT_FOCUS_WINDOW
    case 0xC44CA5: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C44C8C.asm:19 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC44CA4.
    case 0xC44CA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/unknown/C4/C44C8C.asm:20 ASL
    case 0xC44CA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:21 TAX
    case 0xC44CA9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:22 LDA OPEN_WINDOW_TABLE,X
    case 0xC44CAA: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C4/C44C8C.asm:23 CMP #.LOWORD(-1)
    case 0xC44CAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C44C8C.asm:23 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC44CAD.
    case 0xC44CAF: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C44C8C.asm:24 BEQL @UNKNOWN16
    case 0xC44CB0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C44C8C.asm:24 BEQL @UNKNOWN16
    case 0xC44CB2: cpu.execute_instruction<0x4C>(0x004DC8, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C44C8C.asm:24 BEQL @UNKNOWN16
    // Overlapping static entry reached from 0xC44CAF.
    case 0xC44CB3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C44C8C.asm:24 BEQL @UNKNOWN16
    // Overlapping static entry reached from 0xC44CB3.
    case 0xC44CB4: cpu.execute_instruction<0x4D>(0x0052A0, 3); return true;
    // src/unknown/C4/C44C8C.asm:25 LDY #.SIZEOF(window_stats)
    case 0xC44CB5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C4/C44C8C.asm:25 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC44CB5.
    case 0xC44CB7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C44C8C.asm:26 JSL MULT168
    case 0xC44CB8: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C44C8C.asm:27 CLC
    case 0xC44CBC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:28 ADC #.LOWORD(WINDOW_STATS)
    case 0xC44CBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C4/C44C8C.asm:28 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC44CBD.
    case 0xC44CBF: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/unknown/C4/C44C8C.asm:29 STA @VIRTUAL02
    case 0xC44CC0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:29 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC44CBF.
    case 0xC44CC1: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C44C8C.asm:30 STA @LOCAL03
    case 0xC44CC2: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C44C8C.asm:31 LDX @VIRTUAL02
    case 0xC44CC4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:32 LDA a:window_stats::text_x,X
    case 0xC44CC6: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C4/C44C8C.asm:33 STA @VIRTUAL04
    case 0xC44CC9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C44C8C.asm:34 LDX @VIRTUAL02
    case 0xC44CCB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:35 LDA a:window_stats::text_y,X
    case 0xC44CCD: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/unknown/C4/C44C8C.asm:36 STA @LOCAL02
    case 0xC44CD0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C44C8C.asm:37 LDX @VIRTUAL02
    case 0xC44CD2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:38 LDA a:window_stats::curr_tile_attributes,X
    case 0xC44CD4: cpu.execute_instruction<0xBD>(0x000013, 3); return true;
    // src/unknown/C4/C44C8C.asm:39 STA @LOCAL01
    case 0xC44CD7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C44C8C.asm:40 LDX @VIRTUAL02
    case 0xC44CD9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:41 LDA @VIRTUAL04
    case 0xC44CDB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C44C8C.asm:42 CMP a:window_stats::width,X
    case 0xC44CDD: cpu.execute_instruction<0xDD>(0x00000A, 3); return true;
    // src/unknown/C4/C44C8C.asm:43 BNE @UNKNOWN5
    case 0xC44CE0: cpu.execute_instruction<0xD0>(0x000033, 2); return true;
    // src/unknown/C4/C44C8C.asm:44 LDA #0
    case 0xC44CE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C44C8C.asm:44 LDA #0
    // Overlapping static entry reached from 0xC44CE2.
    case 0xC44CE4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C44C8C.asm:45 STA @VIRTUAL04
    case 0xC44CE5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C44C8C.asm:46 LDX @VIRTUAL02
    case 0xC44CE7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:47 LDA a:window_stats::height,X
    case 0xC44CE9: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/unknown/C4/C44C8C.asm:48 LSR
    case 0xC44CEC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:49 DEC
    case 0xC44CED: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:50 CMP @LOCAL02
    case 0xC44CEE: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // src/unknown/C4/C44C8C.asm:51 BEQ @UNKNOWN2
    case 0xC44CF0: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C44C8C.asm:52 INC @LOCAL02
    case 0xC44CF2: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/unknown/C4/C44C8C.asm:53 BRA @UNKNOWN4
    case 0xC44CF4: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C4/C44C8C.asm:55 LDA f:ALLOW_TEXT_OVERFLOW
    case 0xC44CF6: cpu.execute_instruction<0xAF>(0x7EB49D, 4); return true;
    // src/unknown/C4/C44C8C.asm:56 AND #$00FF
    case 0xC44CFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C44C8C.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC44CFA.
    case 0xC44CFC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C44C8C.asm:57 BNEL @UNKNOWN15
    case 0xC44CFD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C44C8C.asm:57 BNEL @UNKNOWN15
    case 0xC44CFF: cpu.execute_instruction<0x4C>(0x004DB8, 3); return true;
    // src/unknown/C4/C44C8C.asm:58 LDA CURRENT_FOCUS_WINDOW
    case 0xC44D02: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C4/C44C8C.asm:59 JSL REDIRECT_C437B8
    case 0xC44D05: cpu.execute_instruction<0x22>(0xC10CAF, 4); return true;
    // src/unknown/C4/C44C8C.asm:61 LDA ENABLE_WORD_WRAP
    case 0xC44D09: cpu.execute_instruction<0xAD>(0x005E6E, 3); return true;
    // src/unknown/C4/C44C8C.asm:62 BEQ @UNKNOWN5
    case 0xC44D0C: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C44C8C.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC44D0E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C44C8C.asm:64 LDA #1
    case 0xC44D10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C44C8C.asm:65 STA VWF_INDENT_NEW_LINE
    case 0xC44D12: cpu.execute_instruction<0x8D>(0x005E75, 3); return true;
    // src/unknown/C4/C44C8C.asm:65 STA VWF_INDENT_NEW_LINE
    // Overlapping static entry reached from 0xC44D10.
    case 0xC44D13: cpu.execute_instruction<0x75>(0x00005E, 2); return true;
    // src/unknown/C4/C44C8C.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC44D15: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C44C8C.asm:68 LDA BLINKING_TRIANGLE_FLAG
    case 0xC44D17: cpu.execute_instruction<0xAD>(0x00964D, 3); return true;
    // src/unknown/C4/C44C8C.asm:69 BEQ @UNKNOWN8
    case 0xC44D1A: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C4/C44C8C.asm:70 LDA @VIRTUAL04
    case 0xC44D1C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C44C8C.asm:71 BNE @UNKNOWN8
    case 0xC44D1E: cpu.execute_instruction<0xD0>(0x000023, 2); return true;
    // src/unknown/C4/C44C8C.asm:72 LDA @LOCAL04
    case 0xC44D20: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C44C8C.asm:73 CMP #$20
    case 0xC44D22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C4/C44C8C.asm:73 CMP #$20
    // Overlapping static entry reached from 0xC44D22.
    case 0xC44D24: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C44C8C.asm:74 BEQ @UNKNOWN6
    case 0xC44D25: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C44C8C.asm:75 LDA @LOCAL04
    case 0xC44D27: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C44C8C.asm:76 CMP #CHAR::BULLET
    case 0xC44D29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000070, 2); else cpu.execute_instruction<0xC9>(0x000070, 3); return true;
    // src/unknown/C4/C44C8C.asm:76 CMP #CHAR::BULLET
    // Overlapping static entry reached from 0xC44D29.
    case 0xC44D2B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C44C8C.asm:77 BNE @UNKNOWN8
    case 0xC44D2C: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/unknown/C4/C44C8C.asm:79 LDA BLINKING_TRIANGLE_FLAG
    case 0xC44D2E: cpu.execute_instruction<0xAD>(0x00964D, 3); return true;
    // src/unknown/C4/C44C8C.asm:80 CMP #1
    case 0xC44D31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C44C8C.asm:80 CMP #1
    // Overlapping static entry reached from 0xC44D31.
    case 0xC44D33: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C44C8C.asm:81 BEQL @UNKNOWN15
    case 0xC44D34: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C44C8C.asm:81 BEQL @UNKNOWN15
    case 0xC44D36: cpu.execute_instruction<0x4C>(0x004DB8, 3); return true;
    // src/unknown/C4/C44C8C.asm:82 CMP #2
    case 0xC44D39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C44C8C.asm:82 CMP #2
    // Overlapping static entry reached from 0xC44D39.
    case 0xC44D3B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C44C8C.asm:83 BNE @UNKNOWN8
    case 0xC44D3C: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C44C8C.asm:84 LDA #$20
    case 0xC44D3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C4/C44C8C.asm:84 LDA #$20
    // Overlapping static entry reached from 0xC44D3E.
    case 0xC44D40: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C44C8C.asm:85 STA @LOCAL04
    case 0xC44D41: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C44C8C.asm:87 LDA @VIRTUAL04
    case 0xC44D43: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C44C8C.asm:88 ASL
    case 0xC44D45: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:89 PHA
    case 0xC44D46: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:90 LDX @VIRTUAL02
    case 0xC44D47: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:91 LDY a:window_stats::width,X
    case 0xC44D49: cpu.execute_instruction<0xBC>(0x00000A, 3); return true;
    // src/unknown/C4/C44C8C.asm:92 LDA @LOCAL02
    case 0xC44D4C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C44C8C.asm:93 JSL MULT16
    case 0xC44D4E: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C44C8C.asm:94 ASL
    case 0xC44D52: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:95 ASL
    case 0xC44D53: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:96 LDX @VIRTUAL02
    case 0xC44D54: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:97 CLC
    case 0xC44D56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:98 ADC a:window_stats::tilemap_address,X
    case 0xC44D57: cpu.execute_instruction<0x7D>(0x000035, 3); return true;
    // src/unknown/C4/C44C8C.asm:99 PLY
    case 0xC44D5A: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:100 STY @VIRTUAL02
    case 0xC44D5B: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:101 CLC
    case 0xC44D5D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:102 ADC @VIRTUAL02
    case 0xC44D5E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:103 TAY
    case 0xC44D60: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:104 STY @LOCAL00
    case 0xC44D61: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C44C8C.asm:105 LDA __BSS_START__,Y
    case 0xC44D63: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C44C8C.asm:106 BEQ @UNKNOWN9
    case 0xC44D66: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C44C8C.asm:107 JSL FREE_TILE_SAFE
    case 0xC44D68: cpu.execute_instruction<0x22>(0xC44E4D, 4); return true;
    // src/unknown/C4/C44C8C.asm:109 LDA @LOCAL04
    case 0xC44D6C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C44C8C.asm:110 CMP #CHAR::EQUIPPED
    case 0xC44D6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000022, 2); else cpu.execute_instruction<0xC9>(0x000022, 3); return true;
    // src/unknown/C4/C44C8C.asm:110 CMP #CHAR::EQUIPPED
    // Overlapping static entry reached from 0xC44D6E.
    case 0xC44D70: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C44C8C.asm:111 BNE @UNKNOWN10
    case 0xC44D71: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C44C8C.asm:112 LDX #$0C00
    case 0xC44D73: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000C00, 3); return true;
    // src/unknown/C4/C44C8C.asm:112 LDX #$0C00
    // Overlapping static entry reached from 0xC44D73.
    case 0xC44D75: cpu.execute_instruction<0x0C>(0x000280, 3); return true;
    // src/unknown/C4/C44C8C.asm:113 BRA @UNKNOWN11
    case 0xC44D76: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:115 LDX @LOCAL01
    case 0xC44D78: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C44C8C.asm:117 TXA
    case 0xC44D7A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:118 CLC
    case 0xC44D7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:119 ADC @LOCAL04
    case 0xC44D7C: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/unknown/C4/C44C8C.asm:120 LDY @LOCAL00
    case 0xC44D7E: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C44C8C.asm:121 STA __BSS_START__,Y
    case 0xC44D80: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C44C8C.asm:122 LDA @LOCAL03
    case 0xC44D83: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C44C8C.asm:123 STA @VIRTUAL02
    case 0xC44D85: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:124 LDX @VIRTUAL02
    case 0xC44D87: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:125 LDA a:window_stats::width,X
    case 0xC44D89: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C4/C44C8C.asm:126 ASL
    case 0xC44D8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:127 STA @VIRTUAL02
    case 0xC44D8D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:128 TYA
    case 0xC44D8F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:129 CLC
    case 0xC44D90: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:130 ADC @VIRTUAL02
    case 0xC44D91: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:131 TAY
    case 0xC44D93: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:132 STY @LOCAL04
    case 0xC44D94: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C44C8C.asm:133 LDA __BSS_START__,Y
    case 0xC44D96: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C44C8C.asm:134 BEQ @UNKNOWN12
    case 0xC44D99: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C44C8C.asm:135 JSL FREE_TILE_SAFE
    case 0xC44D9B: cpu.execute_instruction<0x22>(0xC44E4D, 4); return true;
    // src/unknown/C4/C44C8C.asm:137 LDA @LOCAL05
    case 0xC44D9F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C44C8C.asm:138 CMP #CHAR::EQUIPPED
    case 0xC44DA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000022, 2); else cpu.execute_instruction<0xC9>(0x000022, 3); return true;
    // src/unknown/C4/C44C8C.asm:138 CMP #CHAR::EQUIPPED
    // Overlapping static entry reached from 0xC44DA1.
    case 0xC44DA3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C44C8C.asm:139 BNE @UNKNOWN13
    case 0xC44DA4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C44C8C.asm:140 LDX #$0C00
    case 0xC44DA6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000C00, 3); return true;
    // src/unknown/C4/C44C8C.asm:140 LDX #$0C00
    // Overlapping static entry reached from 0xC44DA6.
    case 0xC44DA8: cpu.execute_instruction<0x0C>(0x000280, 3); return true;
    // src/unknown/C4/C44C8C.asm:141 BRA @UNKNOWN14
    case 0xC44DA9: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:143 LDX @LOCAL01
    case 0xC44DAB: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C44C8C.asm:145 TXA
    case 0xC44DAD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:146 CLC
    case 0xC44DAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C44C8C.asm:147 ADC @LOCAL05
    case 0xC44DAF: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C4/C44C8C.asm:148 LDY @LOCAL04
    case 0xC44DB1: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C44C8C.asm:149 STA __BSS_START__,Y
    case 0xC44DB3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C44C8C.asm:150 INC @VIRTUAL04
    case 0xC44DB6: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C44C8C.asm:152 LDA @VIRTUAL04
    case 0xC44DB8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C44C8C.asm:153 LDX @LOCAL03
    case 0xC44DBA: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C44C8C.asm:154 STX @VIRTUAL02
    case 0xC44DBC: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:155 STA a:window_stats::text_x,X
    case 0xC44DBE: cpu.execute_instruction<0x9D>(0x00000E, 3); return true;
    // src/unknown/C4/C44C8C.asm:156 LDA @LOCAL02
    case 0xC44DC1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C44C8C.asm:157 LDX @VIRTUAL02
    case 0xC44DC3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C44C8C.asm:158 STA a:window_stats::text_y,X
    case 0xC44DC5: cpu.execute_instruction<0x9D>(0x000010, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C44C8C.asm:160 END_C_FUNCTION
    case 0xC44DC8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C44C8C.asm:160 END_C_FUNCTION
    case 0xC44DC9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C44DCA.asm (unresolved).
bool execute_unresolved_c4_c44dca_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C44DCA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44DCA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C44DCA.asm:9 END_STACK_VARS
    case 0xC44DCC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C44DCA.asm:9 END_STACK_VARS
    case 0xC44DCD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44DCA.asm:9 END_STACK_VARS
    case 0xC44DCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C44DCA.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC44DCE.
    case 0xC44DD0: cpu.execute_instruction<0xFF>(0x52A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C44DCA.asm:9 END_STACK_VARS
    case 0xC44DD1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C44DCA.asm:10 LDA #.LOWORD(TEXT_RENDER_STATE)
    case 0xC44DD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000052, 2); else cpu.execute_instruction<0xA9>(0x009652, 3); return true;
    // src/unknown/C4/C44DCA.asm:10 LDA #.LOWORD(TEXT_RENDER_STATE)
    // Overlapping static entry reached from 0xC44DD2.
    case 0xC44DD4: cpu.execute_instruction<0x96>(0x000085, 2); return true;
    // src/unknown/C4/C44DCA.asm:11 STA @LOCAL03
    case 0xC44DD5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C44DCA.asm:11 STA @LOCAL03
    // Overlapping static entry reached from 0xC44DD4.
    case 0xC44DD6: cpu.execute_instruction<0x14>(0x0000AD, 2); return true;
    // src/unknown/C4/C44DCA.asm:12 LDA VWF_X
    case 0xC44DD7: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C44DCA.asm:12 LDA VWF_X
    // Overlapping static entry reached from 0xC44DD6.
    case 0xC44DD8: cpu.execute_instruction<0x23>(0x00009E, 2); return true;
    // src/unknown/C4/C44DCA.asm:13 LSR
    case 0xC44DDA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C44DCA.asm:14 LSR
    case 0xC44DDB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C44DCA.asm:15 LSR
    case 0xC44DDC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C44DCA.asm:16 STA @LOCAL02
    case 0xC44DDD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C44DCA.asm:17 LDA (@LOCAL03) ;text_renderer_state::pixels_rendered
    case 0xC44DDF: cpu.execute_instruction<0xB2>(0x000014, 2); return true;
    // src/unknown/C4/C44DCA.asm:18 LSR
    case 0xC44DE1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C44DCA.asm:19 LSR
    case 0xC44DE2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C44DCA.asm:20 LSR
    case 0xC44DE3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C44DCA.asm:21 STA @VIRTUAL02
    case 0xC44DE4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44DCA.asm:22 LDY #text_renderer_state::upper_vram_position
    case 0xC44DE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C44DCA.asm:22 LDY #text_renderer_state::upper_vram_position
    // Overlapping static entry reached from 0xC44DE6.
    case 0xC44DE8: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C44DCA.asm:23 LDA (@LOCAL03),Y
    case 0xC44DE9: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/C4/C44DCA.asm:24 STA @LOCAL01
    case 0xC44DEB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C44DCA.asm:25 BEQ @UNKNOWN0
    case 0xC44DED: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C4/C44DCA.asm:26 LDY #text_renderer_state::lower_vram_position
    case 0xC44DEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C44DCA.asm:26 LDY #text_renderer_state::lower_vram_position
    // Overlapping static entry reached from 0xC44DEF.
    case 0xC44DF1: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C44DCA.asm:27 LDA (@LOCAL03),Y
    case 0xC44DF2: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/C4/C44DCA.asm:28 TAY
    case 0xC44DF4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C44DCA.asm:29 LDA @LOCAL01
    case 0xC44DF5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C44DCA.asm:30 TAX
    case 0xC44DF7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C44DCA.asm:31 LDA @VIRTUAL02
    case 0xC44DF8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C44DCA.asm:32 JSR UNKNOWN_C4002F
    case 0xC44DFA: cpu.execute_instruction<0x20>(0x00002F, 3); return true;
    // src/unknown/C4/C44DCA.asm:33 BRA @UNKNOWN3
    case 0xC44DFD: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C4/C44DCA.asm:35 LDA @VIRTUAL02
    case 0xC44DFF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C44DCA.asm:36 DEC
    case 0xC44E01: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C44DCA.asm:37 STA @VIRTUAL02
    case 0xC44E02: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C44DCA.asm:38 BRA @UNKNOWN3
    case 0xC44E04: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C4/C44DCA.asm:40 JSR UNKNOWN_C40085
    case 0xC44E06: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/unknown/C4/C44DCA.asm:41 STA @LOCAL00
    case 0xC44E09: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C44DCA.asm:42 LDY #text_renderer_state::upper_vram_position
    case 0xC44E0B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C44DCA.asm:42 LDY #text_renderer_state::upper_vram_position
    // Overlapping static entry reached from 0xC44E0B.
    case 0xC44E0D: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C4/C44DCA.asm:43 STA (@LOCAL03),Y
    case 0xC44E0E: cpu.execute_instruction<0x91>(0x000014, 2); return true;
    // src/unknown/C4/C44DCA.asm:44 JSR UNKNOWN_C40085
    case 0xC44E10: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/unknown/C4/C44DCA.asm:45 STA @VIRTUAL04
    case 0xC44E13: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C44DCA.asm:46 LDY #text_renderer_state::lower_vram_position
    case 0xC44E15: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C44DCA.asm:46 LDY #text_renderer_state::lower_vram_position
    // Overlapping static entry reached from 0xC44E15.
    case 0xC44E17: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C4/C44DCA.asm:47 STA (@LOCAL03),Y
    case 0xC44E18: cpu.execute_instruction<0x91>(0x000014, 2); return true;
    // src/unknown/C4/C44DCA.asm:48 LDX @VIRTUAL02
    case 0xC44E1A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C44DCA.asm:49 INX
    case 0xC44E1C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C44DCA.asm:50 CPX #52
    case 0xC44E1D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000034, 2); else cpu.execute_instruction<0xE0>(0x000034, 3); return true;
    // src/unknown/C4/C44DCA.asm:50 CPX #52
    // Overlapping static entry reached from 0xC44E1D.
    case 0xC44E1F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C44DCA.asm:51 BNE @UNKNOWN2
    case 0xC44E20: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C4/C44DCA.asm:52 LDX #0
    case 0xC44E22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C44DCA.asm:52 LDX #0
    // Overlapping static entry reached from 0xC44E22.
    case 0xC44E24: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C44DCA.asm:54 STX @VIRTUAL02
    case 0xC44E25: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C44DCA.asm:55 LDY @VIRTUAL04
    case 0xC44E27: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C4/C44DCA.asm:56 LDX @LOCAL00
    case 0xC44E29: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C44DCA.asm:57 LDA @VIRTUAL02
    case 0xC44E2B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C44DCA.asm:58 JSR UNKNOWN_C4002F
    case 0xC44E2D: cpu.execute_instruction<0x20>(0x00002F, 3); return true;
    // src/unknown/C4/C44DCA.asm:59 LDX @VIRTUAL04
    case 0xC44E30: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C44DCA.asm:60 LDA @LOCAL00
    case 0xC44E32: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C44DCA.asm:61 JSR UNKNOWN_C44C8C
    case 0xC44E34: cpu.execute_instruction<0x20>(0x004C8C, 3); return true;
    // src/unknown/C4/C44DCA.asm:63 LDA @VIRTUAL02
    case 0xC44E37: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C44DCA.asm:64 CMP @LOCAL02
    case 0xC44E39: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // src/unknown/C4/C44DCA.asm:65 BNE @UNKNOWN1
    case 0xC44E3B: cpu.execute_instruction<0xD0>(0x0000C9, 2); return true;
    // src/unknown/C4/C44DCA.asm:66 LDA VWF_X
    case 0xC44E3D: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C44DCA.asm:67 STA (@LOCAL03)
    case 0xC44E40: cpu.execute_instruction<0x92>(0x000014, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C44DCA.asm:68 END_C_FUNCTION
    case 0xC44E42: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C44DCA.asm:68 END_C_FUNCTION
    case 0xC44E43: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C44E44.asm (unresolved).
bool execute_unresolved_c4_c44e44_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C44E44.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44E44: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C44E44.asm:5 STZ TEXT_RENDER_STATE + 2
    case 0xC44E46: cpu.execute_instruction<0x9C>(0x009654, 3); return true;
    // src/unknown/C4/C44E44.asm:6 STZ TEXT_RENDER_STATE
    case 0xC44E49: cpu.execute_instruction<0x9C>(0x009652, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C44E44.asm:7 END_C_FUNCTION
    case 0xC44E4C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
