// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C4/C437B8-jp.asm
bool resume_unresolved_c4_c437b8_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C437B8-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC10F65: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C437B8-jp.asm:12 END_STACK_VARS
    case 0xC10F67: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C437B8-jp.asm:12 END_STACK_VARS
    case 0xC10F68: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C437B8-jp.asm:12 END_STACK_VARS
    case 0xC10F69: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C437B8-jp.asm:12 END_STACK_VARS
    case 0xC10F6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C437B8-jp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC10F6A.
    case 0xC10F6C: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C437B8-jp.asm:12 END_STACK_VARS
    case 0xC10F6D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C437B8-jp.asm:12 END_STACK_VARS
    case 0xC10F6E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:13 STA @LOCAL05
    case 0xC10F6F: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:13 STA @LOCAL05
    // Overlapping static entry reached from 0xC10F6C.
    case 0xC10F70: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:14 ASL
    case 0xC10F71: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:15 TAX
    case 0xC10F72: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC10F73: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:17 STA @VIRTUAL04
    case 0xC10F76: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:18 LDY #.SIZEOF(window_stats)
    case 0xC10F78: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:18 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10F78.
    case 0xC10F7A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:19 JSL MULT168
    case 0xC10F7B: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:20 TAX
    case 0xC10F7F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:21 LDA WINDOW_STATS + window_stats::tilemap_address,X
    case 0xC10F80: {
        Instruction step(cpu, 0xBD, 0x0089F7u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:22 STA @LOCAL04
    case 0xC10F83: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:23 LDA WINDOW_STATS + window_stats::width,X
    case 0xC10F85: {
        Instruction step(cpu, 0xBD, 0x0089CCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:24 ASL
    case 0xC10F88: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:25 ASL
    case 0xC10F89: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:26 STA @VIRTUAL02
    case 0xC10F8A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:27 LDA @LOCAL04
    case 0xC10F8C: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:28 CLC
    case 0xC10F8E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:29 ADC @VIRTUAL02
    case 0xC10F8F: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:30 STA @VIRTUAL02
    case 0xC10F91: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:31 STA @LOCAL03
    case 0xC10F93: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:32 LDA @LOCAL04
    case 0xC10F95: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:33 TAY
    case 0xC10F97: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:34 STY @LOCAL02
    case 0xC10F98: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:35 LDX #0
    case 0xC10F9A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:35 LDX #0
    // Overlapping static entry reached from 0xC10F9A.
    case 0xC10F9C: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:36 STX @LOCAL01
    case 0xC10F9D: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:37 BRA @UNKNOWN1
    case 0xC10F9F: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:39 LDA @LOCAL03
    case 0xC10FA1: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:40 STA @VIRTUAL02
    case 0xC10FA3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:41 LDX @VIRTUAL02
    case 0xC10FA5: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:42 LDA __BSS_START__,X
    case 0xC10FA7: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:43 LDY @LOCAL02
    case 0xC10FAA: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:44 STA __BSS_START__,Y
    case 0xC10FAC: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:45 INC @VIRTUAL02
    case 0xC10FAF: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:46 INC @VIRTUAL02
    case 0xC10FB1: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:47 LDA @VIRTUAL02
    case 0xC10FB3: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:48 STA @LOCAL03
    case 0xC10FB5: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:49 INY
    case 0xC10FB7: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:50 INY
    case 0xC10FB8: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:51 STY @LOCAL02
    case 0xC10FB9: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:52 LDX @LOCAL01
    case 0xC10FBB: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:53 INX
    case 0xC10FBD: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:54 STX @LOCAL01
    case 0xC10FBE: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:56 LDA @VIRTUAL04
    case 0xC10FC0: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:57 LDY #.SIZEOF(window_stats)
    case 0xC10FC2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:57 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10FC2.
    case 0xC10FC4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:58 JSL MULT168
    case 0xC10FC5: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:59 STA @LOCAL04
    case 0xC10FC9: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:60 LDY #.LOWORD(WINDOW_STATS) + window_stats::height
    case 0xC10FCB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000CEu : 0x0089CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:60 LDY #.LOWORD(WINDOW_STATS) + window_stats::height
    // Overlapping static entry reached from 0xC10FCB.
    case 0xC10FCD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000B1u : 0x0016B1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:61 LDA (@LOCAL04),Y
    case 0xC10FCE: {
        Instruction step(cpu, 0xB1, 0x000016u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:61 LDA (@LOCAL04),Y
    // Overlapping static entry reached from 0xC10FCD.
    case 0xC10FCF: {
        Instruction step(cpu, 0x16, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:62 STA @LOCAL00
    case 0xC10FD0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:62 STA @LOCAL00
    // Overlapping static entry reached from 0xC10FCF.
    case 0xC10FD1: {
        Instruction step(cpu, 0x0E, 0x00CCA0u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:63 LDY #.LOWORD(WINDOW_STATS) + window_stats::width
    case 0xC10FD2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000CCu : 0x0089CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:63 LDY #.LOWORD(WINDOW_STATS) + window_stats::width
    // Overlapping static entry reached from 0xC10FD2.
    case 0xC10FD4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000B1u : 0x0016B1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:64 LDA (@LOCAL04),Y
    case 0xC10FD5: {
        Instruction step(cpu, 0xB1, 0x000016u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:64 LDA (@LOCAL04),Y
    // Overlapping static entry reached from 0xC10FD4.
    case 0xC10FD6: {
        Instruction step(cpu, 0x16, 0x0000A8u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:65 TAY
    case 0xC10FD7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:66 LDA @LOCAL00
    case 0xC10FD8: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:67 DEC
    case 0xC10FDA: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:68 DEC
    case 0xC10FDB: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:69 JSL MULT16
    case 0xC10FDC: {
        Instruction step(cpu, 0x22, 0xC09014u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:70 STA @VIRTUAL02
    case 0xC10FE0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:71 TXA
    case 0xC10FE2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:72 CMP @VIRTUAL02
    case 0xC10FE3: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:73 BNE @UNKNOWN0
    case 0xC10FE5: {
        Instruction step(cpu, 0xD0, 0x0000BAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:74 LDA @LOCAL00
    case 0xC10FE7: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:75 LSR
    case 0xC10FE9: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:76 TAX
    case 0xC10FEA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:77 DEX
    case 0xC10FEB: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:78 LDA @LOCAL05
    case 0xC10FEC: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C437B8-jp.asm:79 JSR UNKNOWN_C436D7
    case 0xC10FEE: {
        Instruction step(cpu, 0x20, 0x000EDFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C437B8-jp.asm:80 END_C_FUNCTION
    case 0xC10FF1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C437B8-jp.asm:80 END_C_FUNCTION
    case 0xC10FF2: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
