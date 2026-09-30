// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/create_window.asm
bool resume_text_create_window(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/create_window.asm:3 BEGIN_C_FUNCTION
    case 0xC104EE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC104F0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC104F1: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC104F2: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC104F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC104F3.
    case 0xC104F5: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC104F6: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC104F7: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:29 TAY
    case 0xC104F8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/create_window.asm:30 STY @LOCAL03
    case 0xC104F9: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/create_window.asm:36 TYA
    case 0xC104FB: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:37 ASL
    case 0xC104FC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:38 CLC
    case 0xC104FD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:39 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    case 0xC104FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x0088E4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:39 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    // Overlapping static entry reached from 0xC104FE.
    case 0xC10500: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/create_window.asm:40 TAX
    case 0xC10501: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:41 STX @LOCAL02_1
    case 0xC10502: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/create_window.asm:42 LDA __BSS_START__,X
    case 0xC10504: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:43 CMP #$FFFF
    case 0xC10507: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:43 CMP #$FFFF
    // Overlapping static entry reached from 0xC10507.
    case 0xC10509: {
        Instruction step(cpu, 0xFF, 0x8C1CF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:44 BEQ @UNKNOWN0
    case 0xC1050A: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/create_window.asm:45 STY CURRENT_FOCUS_WINDOW
    case 0xC1050C: {
        Instruction step(cpu, 0x8C, 0x008958u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/create_window.asm:45 STY CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10509.
    case 0xC1050D: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/text/create_window.asm:45 STY CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC1050D.
    case 0xC1050E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000020u : 0x008320u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/create_window.asm:46 JSR UNKNOWN_C11383
    case 0xC1050F: {
        Instruction step(cpu, 0x20, 0x001383u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/create_window.asm:46 JSR UNKNOWN_C11383
    // Overlapping static entry reached from 0xC1050E.
    case 0xC10510: {
        Instruction step(cpu, 0x83, 0x000013u, 2u, AddressMode::StackRelative);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:46 JSR UNKNOWN_C11383
    // Overlapping static entry reached from 0xC1050E.
    case 0xC10511: {
        Instruction step(cpu, 0x13, 0x0000A6u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:47 LDX @LOCAL02_1
    case 0xC10512: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:47 LDX @LOCAL02_1
    // Overlapping static entry reached from 0xC10511.
    case 0xC10513: {
        Instruction step(cpu, 0x12, 0x0000BDu, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:48 LDA __BSS_START__,X
    case 0xC10514: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:48 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC10513.
    case 0xC10515: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:49 LDY #.SIZEOF(window_stats)
    case 0xC10517: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:49 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10517.
    case 0xC10519: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:50 JSL MULT168
    case 0xC1051A: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:51 CLC
    case 0xC1051E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:52 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1051F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:52 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1051F.
    case 0xC10521: {
        Instruction step(cpu, 0x86, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/create_window.asm:53 TAX
    case 0xC10522: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:54 STX @LOCAL01
    case 0xC10523: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/create_window.asm:55 JMP @UNKNOWN8
    case 0xC10525: {
        Instruction step(cpu, 0x4C, 0x000644u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/create_window.asm:57 JSR UNKNOWN_C3E4EF
    case 0xC10528: {
        Instruction step(cpu, 0x22, 0xC3E4EFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:58 STA @LOCAL00
    case 0xC1052C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:59 CMP #$FFFF
    case 0xC1052E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:59 CMP #$FFFF
    // Overlapping static entry reached from 0xC1052E.
    case 0xC10530: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/create_window.asm:60 BEQL @UNKNOWN13
    case 0xC10531: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/create_window.asm:60 BEQL @UNKNOWN13
    case 0xC10533: {
        Instruction step(cpu, 0x4C, 0x00078Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/create_window.asm:60 BEQL @UNKNOWN13
    // Overlapping static entry reached from 0xC10530.
    case 0xC10534: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/create_window.asm:60 BEQL @UNKNOWN13
    // Overlapping static entry reached from 0xC10534.
    case 0xC10535: {
        Instruction step(cpu, 0x07, 0x0000A0u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:61 LDY #.SIZEOF(window_stats)
    case 0xC10536: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:61 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10535.
    case 0xC10537: {
        Instruction step(cpu, 0x52, 0x000000u, 2u, AddressMode::DirectPageIndirect);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:61 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10536.
    case 0xC10538: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:62 JSL MULT168
    case 0xC10539: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:63 CLC
    case 0xC1053D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:64 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1053E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:64 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1053E.
    case 0xC10540: {
        Instruction step(cpu, 0x86, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/create_window.asm:65 TAX
    case 0xC10541: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:66 STX @LOCAL01
    case 0xC10542: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/create_window.asm:67 LDY @LOCAL03
    case 0xC10544: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:68 CPY #10
    case 0xC10546: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/create_window.asm:68 CPY #10
    // Overlapping static entry reached from 0xC10546.
    case 0xC10548: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:69 BNE @UNKNOWN4
    case 0xC10549: {
        Instruction step(cpu, 0xD0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/create_window.asm:70 LDA WINDOW_HEAD
    case 0xC1054B: {
        Instruction step(cpu, 0xAD, 0x0088E0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:71 CMP #$FFFF
    case 0xC1054E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:71 CMP #$FFFF
    // Overlapping static entry reached from 0xC1054E.
    case 0xC10550: {
        Instruction step(cpu, 0xFF, 0xA90DD0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:72 BNE @UNKNOWN2
    case 0xC10551: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/create_window.asm:73 LDA #$FFFF
    case 0xC10553: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:73 LDA #$FFFF
    // Overlapping static entry reached from 0xC10550.
    case 0xC10554: {
        Instruction step(cpu, 0xFF, 0x029DFFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:73 LDA #$FFFF
    // Overlapping static entry reached from 0xC10553.
    case 0xC10555: {
        Instruction step(cpu, 0xFF, 0x00029Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:74 STA a:window_stats::next,X
    case 0xC10556: {
        Instruction step(cpu, 0x9D, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:74 STA a:window_stats::next,X
    // Overlapping static entry reached from 0xC10554.
    case 0xC10558: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:75 LDA @LOCAL00
    case 0xC10559: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:76 STA WINDOW_TAIL
    case 0xC1055B: {
        Instruction step(cpu, 0x8D, 0x0088E2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:77 BRA @UNKNOWN3
    case 0xC1055E: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/create_window.asm:79 LDA WINDOW_HEAD
    case 0xC10560: {
        Instruction step(cpu, 0xAD, 0x0088E0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:80 LDY #.SIZEOF(window_stats)
    case 0xC10563: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:80 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10563.
    case 0xC10565: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:81 JSL MULT168
    case 0xC10566: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:82 TAX
    case 0xC1056A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:83 LDA @LOCAL00
    case 0xC1056B: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:84 STA WINDOW_STATS + window_stats::prev,X
    case 0xC1056D: {
        Instruction step(cpu, 0x9D, 0x008650u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:85 LDA WINDOW_HEAD
    case 0xC10570: {
        Instruction step(cpu, 0xAD, 0x0088E0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:86 LDX @LOCAL01
    case 0xC10573: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:87 STA a:window_stats::next,X
    case 0xC10575: {
        Instruction step(cpu, 0x9D, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:89 LDA #$FFFF
    case 0xC10578: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:89 LDA #$FFFF
    // Overlapping static entry reached from 0xC10578.
    case 0xC1057A: {
        Instruction step(cpu, 0xFF, 0x00009Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:90 STA a:window_stats::prev,X
    case 0xC1057B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:91 LDA @LOCAL00
    case 0xC1057E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:92 STA WINDOW_HEAD
    case 0xC10580: {
        Instruction step(cpu, 0x8D, 0x0088E0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:93 BRA @UNKNOWN7
    case 0xC10583: {
        Instruction step(cpu, 0x80, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/create_window.asm:95 LDA WINDOW_HEAD
    case 0xC10585: {
        Instruction step(cpu, 0xAD, 0x0088E0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:96 CMP #$FFFF
    case 0xC10588: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:96 CMP #$FFFF
    // Overlapping static entry reached from 0xC10588.
    case 0xC1058A: {
        Instruction step(cpu, 0xFF, 0xA90DD0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:97 BNE @UNKNOWN5
    case 0xC1058B: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/create_window.asm:98 LDA #$FFFF
    case 0xC1058D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:98 LDA #$FFFF
    // Overlapping static entry reached from 0xC1058A.
    case 0xC1058E: {
        Instruction step(cpu, 0xFF, 0x009DFFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:98 LDA #$FFFF
    // Overlapping static entry reached from 0xC1058D.
    case 0xC1058F: {
        Instruction step(cpu, 0xFF, 0x00009Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:99 STA a:window_stats::prev,X
    case 0xC10590: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:99 STA a:window_stats::prev,X
    // Overlapping static entry reached from 0xC1058E.
    case 0xC10592: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:100 LDA @LOCAL00
    case 0xC10593: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:101 STA WINDOW_HEAD
    case 0xC10595: {
        Instruction step(cpu, 0x8D, 0x0088E0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:102 BRA @UNKNOWN6
    case 0xC10598: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/create_window.asm:104 LDA WINDOW_TAIL
    case 0xC1059A: {
        Instruction step(cpu, 0xAD, 0x0088E2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:105 STA a:window_stats::prev,X
    case 0xC1059D: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:106 LDA WINDOW_TAIL
    case 0xC105A0: {
        Instruction step(cpu, 0xAD, 0x0088E2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:107 LDY #.SIZEOF(window_stats)
    case 0xC105A3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:107 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC105A3.
    case 0xC105A5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:108 JSL MULT168
    case 0xC105A6: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:109 TAX
    case 0xC105AA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:110 LDA @LOCAL00
    case 0xC105AB: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:111 STA WINDOW_STATS + window_stats::next,X
    case 0xC105AD: {
        Instruction step(cpu, 0x9D, 0x008652u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:113 STA WINDOW_TAIL
    case 0xC105B0: {
        Instruction step(cpu, 0x8D, 0x0088E2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:114 LDA #$FFFF
    case 0xC105B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:114 LDA #$FFFF
    // Overlapping static entry reached from 0xC105B3.
    case 0xC105B5: {
        Instruction step(cpu, 0xFF, 0x9D10A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:115 LDX @LOCAL01
    case 0xC105B6: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:116 STA a:window_stats::next,X
    case 0xC105B8: {
        Instruction step(cpu, 0x9D, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:116 STA a:window_stats::next,X
    // Overlapping static entry reached from 0xC105B5.
    case 0xC105B9: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/create_window.asm:118 LDY @LOCAL03
    case 0xC105BB: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:119 TYA
    case 0xC105BD: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:120 STA a:window_stats::id,X
    case 0xC105BE: {
        Instruction step(cpu, 0x9D, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:121 TYA
    case 0xC105C1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:122 ASL
    case 0xC105C2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:123 TAX
    case 0xC105C3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:124 LDA @LOCAL00
    case 0xC105C4: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:125 STA OPEN_WINDOW_TABLE,X
    case 0xC105C6: {
        Instruction step(cpu, 0x9D, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC105C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x00E250u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC105C9.
    case 0xC105CB: {
        Instruction step(cpu, 0xE2, 0x000085u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC105CC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC105CB.
    case 0xC105CD: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC105CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC105CD.
    case 0xC105CF: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC105CE.
    case 0xC105D0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC105D1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:127 TYA
    case 0xC105D3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:128 ASL
    case 0xC105D4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:129 ASL
    case 0xC105D5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:130 ASL
    case 0xC105D6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:131 STA @TMP00
    case 0xC105D7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC105D9: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC105DB: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC105DD: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC105DF: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/create_window.asm:133 CLC
    case 0xC105E1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:134 ADC @VIRTUAL0A
    case 0xC105E2: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:135 STA @VIRTUAL0A
    case 0xC105E4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:136 LDA [@VIRTUAL0A]
    case 0xC105E6: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:137 LDX @LOCAL01
    case 0xC105E8: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:138 STA a:window_stats::window_x,X
    case 0xC105EA: {
        Instruction step(cpu, 0x9D, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:139 LDA @TMP00
    case 0xC105ED: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:140 INC
    case 0xC105EF: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/create_window.asm:141 INC
    case 0xC105F0: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC105F1: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC105F3: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC105F5: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC105F7: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10636.
    case 0xC105F8: {
        Instruction step(cpu, 0x0C, 0x006518u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/create_window.asm:143 CLC
    case 0xC105F9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:144 ADC @VIRTUAL0A
    case 0xC105FA: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:144 ADC @VIRTUAL0A
    // Overlapping static entry reached from 0xC105F8.
    case 0xC105FB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:145 STA @VIRTUAL0A
    case 0xC105FC: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:146 LDA [@VIRTUAL0A]
    case 0xC105FE: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:147 STA a:window_stats::window_y,X
    case 0xC10600: {
        Instruction step(cpu, 0x9D, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:148 LDA @TMP00
    case 0xC10603: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:149 INC
    case 0xC10605: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/create_window.asm:150 INC
    case 0xC10606: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/create_window.asm:151 INC
    case 0xC10607: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/create_window.asm:152 INC
    case 0xC10608: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC10609: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1060B: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1060D: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1060F: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/create_window.asm:154 CLC
    case 0xC10611: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:155 ADC @VIRTUAL0A
    case 0xC10612: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:156 STA @VIRTUAL0A
    case 0xC10614: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:157 LDA [@VIRTUAL0A]
    case 0xC10616: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:158 DEC
    case 0xC10618: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/create_window.asm:159 DEC
    case 0xC10619: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/create_window.asm:160 STA a:window_stats::width,X
    case 0xC1061A: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:161 LDA @TMP00
    case 0xC1061D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:162 CLC
    case 0xC1061F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:163 ADC #6
    case 0xC10620: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:163 ADC #6
    // Overlapping static entry reached from 0xC10620.
    case 0xC10622: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:164 CLC
    case 0xC10623: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:165 ADC @VIRTUAL06
    case 0xC10624: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:166 STA @VIRTUAL06
    case 0xC10626: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:167 LDA [@VIRTUAL06]
    case 0xC10628: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:168 DEC
    case 0xC1062A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/create_window.asm:169 DEC
    case 0xC1062B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/create_window.asm:170 STA a:window_stats::height,X
    case 0xC1062C: {
        Instruction step(cpu, 0x9D, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:171 LDY #504 * 2
    case 0xC1062F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F0u : 0x0003F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:171 LDY #504 * 2
    // Overlapping static entry reached from 0xC1062F.
    case 0xC10631: {
        Instruction step(cpu, 0x03, 0x0000A5u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:172 LDA @LOCAL00
    case 0xC10632: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:172 LDA @LOCAL00
    // Overlapping static entry reached from 0xC10631.
    case 0xC10633: {
        Instruction step(cpu, 0x0E, 0x003222u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:173 JSL MULT16
    case 0xC10634: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:173 JSL MULT16
    // Overlapping static entry reached from 0xC10633.
    case 0xC10636: {
        Instruction step(cpu, 0x90, 0x0000C0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/create_window.asm:174 CLC
    case 0xC10638: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:175 ADC #.LOWORD(TEXT_TILEMAP_BUFFER)
    case 0xC10639: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Eu : 0x005E7Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:175 ADC #.LOWORD(TEXT_TILEMAP_BUFFER)
    // Overlapping static entry reached from 0xC10639.
    case 0xC1063B: {
        Instruction step(cpu, 0x5E, 0x00359Du, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/create_window.asm:176 STA a:window_stats::tilemap_address,X
    case 0xC1063C: {
        Instruction step(cpu, 0x9D, 0x000035u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:176 STA a:window_stats::tilemap_address,X
    // Overlapping static entry reached from 0xC1063B.
    case 0xC1063E: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:177 LDY @LOCAL03
    case 0xC1063F: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:178 STY CURRENT_FOCUS_WINDOW
    case 0xC10641: {
        Instruction step(cpu, 0x8C, 0x008958u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/create_window.asm:181 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10644: {
        Instruction step(cpu, 0x20, 0x000301u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/create_window.asm:182 STA @LOCAL02_1
    case 0xC10647: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:183 LDX @LOCAL01
    case 0xC10649: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:185 STZ a:window_stats::text_y,X
    case 0xC1064B: {
        Instruction step(cpu, 0x9E, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/create_window.asm:186 STZ a:window_stats::text_x,X
    case 0xC1064E: {
        Instruction step(cpu, 0x9E, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/create_window.asm:187 SEP #PROC_FLAGS::ACCUM8
    case 0xC10651: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/create_window.asm:188 LDA #128
    case 0xC10653: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x009D80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:189 STA a:window_stats::number_padding,X
    case 0xC10655: {
        Instruction step(cpu, 0x9D, 0x000012u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:189 STA a:window_stats::number_padding,X
    // Overlapping static entry reached from 0xC10653.
    case 0xC10656: {
        Instruction step(cpu, 0x12, 0x000000u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:190 REP #PROC_FLAGS::ACCUM8
    case 0xC10658: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/create_window.asm:191 STZ a:window_stats::curr_tile_attributes,X
    case 0xC1065A: {
        Instruction step(cpu, 0x9E, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/create_window.asm:192 STZ a:window_stats::font,X
    case 0xC1065D: {
        Instruction step(cpu, 0x9E, 0x000015u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/create_window.asm:193 LDA @LOCAL02_2
    case 0xC10660: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:194 CLC
    case 0xC10662: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:195 ADC #window_stats::working_memory
    case 0xC10663: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:195 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10663.
    case 0xC10665: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:196 TAY
    case 0xC10666: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10667: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1066A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1066C: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1066F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:198 TXA
    case 0xC10671: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:199 CLC
    case 0xC10672: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:200 ADC #window_stats::working_memory
    case 0xC10673: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:200 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10673.
    case 0xC10675: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:201 TAY
    case 0xC10676: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10677: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10679: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1067C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1067E: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:203 LDA @LOCAL02_2
    case 0xC10681: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:204 CLC
    case 0xC10683: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:205 ADC #window_stats::argument_memory
    case 0xC10684: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:205 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC10684.
    case 0xC10686: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:206 TAY
    case 0xC10687: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10688: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1068B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1068D: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10690: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:208 TXA
    case 0xC10692: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:209 CLC
    case 0xC10693: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:210 ADC #window_stats::argument_memory
    case 0xC10694: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:210 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC10694.
    case 0xC10696: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:211 TAY
    case 0xC10697: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10698: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1069A: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1069D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1069F: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:213 LDA @LOCAL02_2
    case 0xC106A2: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:214 CLC
    case 0xC106A4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:215 ADC #window_stats::working_memory_storage
    case 0xC106A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:215 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC106A5.
    case 0xC106A7: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:216 TAY
    case 0xC106A8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106A9: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106AC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106AE: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106B1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:218 TXA
    case 0xC106B3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:219 CLC
    case 0xC106B4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:220 ADC #window_stats::working_memory_storage
    case 0xC106B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:220 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC106B5.
    case 0xC106B7: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:221 TAY
    case 0xC106B8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106B9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106BB: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106BE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106C0: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:223 LDA @LOCAL02_2
    case 0xC106C3: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:224 CLC
    case 0xC106C5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:225 ADC #window_stats::argument_memory_storage
    case 0xC106C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:225 ADC #window_stats::argument_memory_storage
    // Overlapping static entry reached from 0xC106C6.
    case 0xC106C8: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:226 TAY
    case 0xC106C9: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106CA: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106CD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106CF: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106D2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:228 TXA
    case 0xC106D4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:229 CLC
    case 0xC106D5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:230 ADC #window_stats::argument_memory_storage
    case 0xC106D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:230 ADC #window_stats::argument_memory_storage
    // Overlapping static entry reached from 0xC106D6.
    case 0xC106D8: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:231 TAY
    case 0xC106D9: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106DA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106DC: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106DF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106E1: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:236 LDA @LOCAL02_2
    case 0xC106E4: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:237 TAX
    case 0xC106E6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:239 LDA a:window_stats::secondary_memory,X
    case 0xC106E7: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:240 LDX @LOCAL01
    case 0xC106EA: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:241 STA a:window_stats::secondary_memory,X
    case 0xC106EC: {
        Instruction step(cpu, 0x9D, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:245 LDA @LOCAL02_2
    case 0xC106EF: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:246 TAX
    case 0xC106F1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:248 LDA a:window_stats::secondary_memory_storage,X
    case 0xC106F2: {
        Instruction step(cpu, 0xBD, 0x000029u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:249 LDX @LOCAL01
    case 0xC106F5: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:250 STA a:window_stats::secondary_memory_storage,X
    case 0xC106F7: {
        Instruction step(cpu, 0x9D, 0x000029u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:251 LDA #$FFFF
    case 0xC106FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:251 LDA #$FFFF
    // Overlapping static entry reached from 0xC106FA.
    case 0xC106FC: {
        Instruction step(cpu, 0xFF, 0x002F9Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:252 STA a:window_stats::selected_option,X
    case 0xC106FD: {
        Instruction step(cpu, 0x9D, 0x00002Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:253 STA a:window_stats::option_count,X
    case 0xC10700: {
        Instruction step(cpu, 0x9D, 0x00002Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:254 STA a:window_stats::current_option,X
    case 0xC10703: {
        Instruction step(cpu, 0x9D, 0x00002Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:255 LDA #1
    case 0xC10706: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:255 LDA #1
    // Overlapping static entry reached from 0xC10706.
    case 0xC10708: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:256 STA a:window_stats::unknown49,X
    case 0xC10709: {
        Instruction step(cpu, 0x9D, 0x000031u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:257 STA a:window_stats::menu_page_number,X
    case 0xC1070C: {
        Instruction step(cpu, 0x9D, 0x000033u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1070F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1070F.
    case 0xC10711: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC10712: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC10714: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC10714.
    case 0xC10716: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC10717: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:259 TXA
    case 0xC10719: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:260 CLC
    case 0xC1071A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:261 ADC #window_stats::cursor_move_callback
    case 0xC1071B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000037u : 0x000037u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:261 ADC #window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC1071B.
    case 0xC1071D: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:262 TAY
    case 0xC1071E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1071F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10721: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10724: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10726: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:264 LDY a:window_stats::tilemap_address,X
    case 0xC10729: {
        Instruction step(cpu, 0xBC, 0x000035u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:265 STY @LOCAL00
    case 0xC1072C: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/create_window.asm:266 LDY a:window_stats::height,X
    case 0xC1072E: {
        Instruction step(cpu, 0xBC, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:267 LDA a:window_stats::width,X
    case 0xC10731: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:268 JSL MULT16
    case 0xC10734: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:269 STA @LOCAL02_3
    case 0xC10738: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:270 BRA @UNKNOWN11
    case 0xC1073A: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/create_window.asm:273 LDY @LOCAL00
    case 0xC1073C: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:274 LDA __BSS_START__,Y
    case 0xC1073E: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:275 BEQ @UNKNOWN10
    case 0xC10741: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/create_window.asm:276 JSL FREE_TILE_SAFE
    case 0xC10743: {
        Instruction step(cpu, 0x22, 0xC44E4Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:279 LDA #64
    case 0xC10747: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:279 LDA #64
    // Overlapping static entry reached from 0xC10747.
    case 0xC10749: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:280 LDY @LOCAL00
    case 0xC1074A: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:281 STA __BSS_START__,Y
    case 0xC1074C: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:282 INY
    case 0xC1074F: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/create_window.asm:283 INY
    case 0xC10750: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/create_window.asm:284 STY @LOCAL00
    case 0xC10751: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/create_window.asm:285 LDA @LOCAL02_3
    case 0xC10753: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:286 DEC
    case 0xC10755: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/create_window.asm:287 STA @LOCAL02_3
    case 0xC10756: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:292 LDA @LOCAL02_3
    case 0xC10758: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:294 BNE @UNKNOWN9
    case 0xC1075A: {
        Instruction step(cpu, 0xD0, 0x0000E0u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/create_window.asm:296 LDX @LOCAL01
    case 0xC1075C: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:298 LDA a:window_stats::unknown59,X
    case 0xC1075E: {
        Instruction step(cpu, 0xBD, 0x00003Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:299 AND #$00FF
    case 0xC10761: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:299 AND #$00FF
    // Overlapping static entry reached from 0xC10761.
    case 0xC10763: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:300 BEQ @UNKNOWN12
    case 0xC10764: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/create_window.asm:301 AND #$00FF
    case 0xC10766: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:301 AND #$00FF
    // Overlapping static entry reached from 0xC10766.
    case 0xC10768: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:302 DEC
    case 0xC10769: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/create_window.asm:303 ASL
    case 0xC1076A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:304 TAX
    case 0xC1076B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:305 LDA #$FFFF
    case 0xC1076C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:305 LDA #$FFFF
    // Overlapping static entry reached from 0xC1076C.
    case 0xC1076E: {
        Instruction step(cpu, 0xFF, 0x894E9Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:306 STA TITLED_WINDOWS,X
    case 0xC1076F: {
        Instruction step(cpu, 0x9D, 0x00894Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:308 LDX @LOCAL01
    case 0xC10772: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:309 SEP #PROC_FLAGS::ACCUM8
    case 0xC10774: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/create_window.asm:310 STZ a:window_stats::title,X
    case 0xC10776: {
        Instruction step(cpu, 0x9E, 0x00003Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/create_window.asm:311 STZ a:window_stats::unknown59,X
    case 0xC10779: {
        Instruction step(cpu, 0x9E, 0x00003Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/create_window.asm:312 JSL UNKNOWN_C45E96
    case 0xC1077C: {
        Instruction step(cpu, 0x22, 0xC45E96u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:313 SEP #PROC_FLAGS::ACCUM8
    case 0xC10780: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/create_window.asm:314 LDA #1
    case 0xC10782: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:315 STA REDRAW_ALL_WINDOWS
    case 0xC10784: {
        Instruction step(cpu, 0x8D, 0x009623u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:315 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10782.
    case 0xC10785: {
        Instruction step(cpu, 0x23, 0x000096u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:316 JSL UNKNOWN_C07C5B
    case 0xC10787: {
        Instruction step(cpu, 0x22, 0xC07C5Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/create_window.asm:318 END_C_FUNCTION
    case 0xC1078B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/create_window.asm:318 END_C_FUNCTION
    case 0xC1078C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
