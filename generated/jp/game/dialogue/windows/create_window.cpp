// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/create_window.asm
bool resume_text_create_window(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/create_window.asm:3 BEGIN_C_FUNCTION
    case 0xC106E4: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/create_window.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC1073F.
    case 0xC106E5: {
        Instruction step(cpu, 0x31, 0x00000Bu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC106E6: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC106E7: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC106E8: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC106E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC106E9.
    case 0xC106EB: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC106EC: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC106ED: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:29 TAY
    case 0xC106EE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/create_window.asm:30 STY @LOCAL03
    case 0xC106EF: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/create_window.asm:32 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC106F1: {
        Instruction step(cpu, 0x20, 0x000504u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/create_window.asm:33 STA @VIRTUAL02
    case 0xC106F4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:34 LDY @LOCAL03
    case 0xC106F6: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:36 TYA
    case 0xC106F8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:37 ASL
    case 0xC106F9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:38 CLC
    case 0xC106FA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:39 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    case 0xC106FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000026u : 0x008C26u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:39 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    // Overlapping static entry reached from 0xC106FB.
    case 0xC106FD: {
        Instruction step(cpu, 0x8C, 0x0086AAu, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/create_window.asm:40 TAX
    case 0xC106FE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:41 STX @LOCAL02_1
    case 0xC106FF: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/create_window.asm:41 STX @LOCAL02_1
    // Overlapping static entry reached from 0xC106FD.
    case 0xC10700: {
        Instruction step(cpu, 0x10, 0x0000BDu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/create_window.asm:42 LDA __BSS_START__,X
    case 0xC10701: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:42 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC10700.
    case 0xC10702: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:43 CMP #$FFFF
    case 0xC10704: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:43 CMP #$FFFF
    // Overlapping static entry reached from 0xC10704.
    case 0xC10706: {
        Instruction step(cpu, 0xFF, 0x8C1CF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:44 BEQ @UNKNOWN0
    case 0xC10707: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/create_window.asm:45 STY CURRENT_FOCUS_WINDOW
    case 0xC10709: {
        Instruction step(cpu, 0x8C, 0x008C96u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/create_window.asm:45 STY CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10706.
    case 0xC1070A: {
        Instruction step(cpu, 0x96, 0x00008Cu, 2u, AddressMode::DirectPageIndexedY);
        step.store_x();
        return step.finish();
    }
    // src/text/create_window.asm:46 JSR UNKNOWN_C11383
    case 0xC1070C: {
        Instruction step(cpu, 0x20, 0x0019ABu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/create_window.asm:47 LDX @LOCAL02_1
    case 0xC1070F: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:48 LDA __BSS_START__,X
    case 0xC10711: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:49 LDY #.SIZEOF(window_stats)
    case 0xC10714: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:49 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10714.
    case 0xC10716: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:50 JSL MULT168
    case 0xC10717: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:51 CLC
    case 0xC1071B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:52 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1071C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C2u : 0x0089C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:52 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1071C.
    case 0xC1071E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000AAu : 0x0086AAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/create_window.asm:53 TAX
    case 0xC1071F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:54 STX @LOCAL01
    case 0xC10720: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/create_window.asm:54 STX @LOCAL01
    // Overlapping static entry reached from 0xC1071E.
    case 0xC10721: {
        Instruction step(cpu, 0x10, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/create_window.asm:55 JMP @UNKNOWN8
    case 0xC10722: {
        Instruction step(cpu, 0x4C, 0x000840u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/create_window.asm:55 JMP @UNKNOWN8
    // Overlapping static entry reached from 0xC10721.
    case 0xC10723: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/text/create_window.asm:57 JSR UNKNOWN_C3E4EF
    case 0xC10725: {
        Instruction step(cpu, 0x20, 0x000103u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/create_window.asm:58 STA @LOCAL00
    case 0xC10728: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:59 CMP #$FFFF
    case 0xC1072A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:59 CMP #$FFFF
    // Overlapping static entry reached from 0xC1072A.
    case 0xC1072C: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/create_window.asm:60 BEQL @UNKNOWN13
    case 0xC1072D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/create_window.asm:60 BEQL @UNKNOWN13
    case 0xC1072F: {
        Instruction step(cpu, 0x4C, 0x000972u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/create_window.asm:60 BEQL @UNKNOWN13
    // Overlapping static entry reached from 0xC1072C.
    case 0xC10730: {
        Instruction step(cpu, 0x72, 0x000009u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:61 LDY #.SIZEOF(window_stats)
    case 0xC10732: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:61 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10732.
    case 0xC10734: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:62 JSL MULT168
    case 0xC10735: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:63 CLC
    case 0xC10739: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:64 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1073A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C2u : 0x0089C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:64 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1073A.
    case 0xC1073C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000AAu : 0x0086AAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/create_window.asm:65 TAX
    case 0xC1073D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:66 STX @LOCAL01
    case 0xC1073E: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/create_window.asm:66 STX @LOCAL01
    // Overlapping static entry reached from 0xC1073C.
    case 0xC1073F: {
        Instruction step(cpu, 0x10, 0x0000A4u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/create_window.asm:67 LDY @LOCAL03
    case 0xC10740: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:67 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1073F.
    case 0xC10741: {
        Instruction step(cpu, 0x12, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:68 CPY #10
    case 0xC10742: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/create_window.asm:68 CPY #10
    // Overlapping static entry reached from 0xC10741.
    case 0xC10743: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:68 CPY #10
    // Overlapping static entry reached from 0xC10742.
    case 0xC10744: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:69 BNE @UNKNOWN4
    case 0xC10745: {
        Instruction step(cpu, 0xD0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/create_window.asm:70 LDA WINDOW_HEAD
    case 0xC10747: {
        Instruction step(cpu, 0xAD, 0x008C22u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:71 CMP #$FFFF
    case 0xC1074A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:71 CMP #$FFFF
    // Overlapping static entry reached from 0xC1074A.
    case 0xC1074C: {
        Instruction step(cpu, 0xFF, 0xA90DD0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:72 BNE @UNKNOWN2
    case 0xC1074D: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/create_window.asm:73 LDA #$FFFF
    case 0xC1074F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:73 LDA #$FFFF
    // Overlapping static entry reached from 0xC1074C.
    case 0xC10750: {
        Instruction step(cpu, 0xFF, 0x029DFFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:73 LDA #$FFFF
    // Overlapping static entry reached from 0xC1074F.
    case 0xC10751: {
        Instruction step(cpu, 0xFF, 0x00029Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:74 STA a:window_stats::next,X
    case 0xC10752: {
        Instruction step(cpu, 0x9D, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:74 STA a:window_stats::next,X
    // Overlapping static entry reached from 0xC10750.
    case 0xC10754: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:75 LDA @LOCAL00
    case 0xC10755: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:76 STA WINDOW_TAIL
    case 0xC10757: {
        Instruction step(cpu, 0x8D, 0x008C24u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:77 BRA @UNKNOWN3
    case 0xC1075A: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/create_window.asm:79 LDA WINDOW_HEAD
    case 0xC1075C: {
        Instruction step(cpu, 0xAD, 0x008C22u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:80 LDY #.SIZEOF(window_stats)
    case 0xC1075F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:80 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1075F.
    case 0xC10761: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:81 JSL MULT168
    case 0xC10762: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:82 TAX
    case 0xC10766: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:83 LDA @LOCAL00
    case 0xC10767: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:84 STA WINDOW_STATS + window_stats::prev,X
    case 0xC10769: {
        Instruction step(cpu, 0x9D, 0x0089C2u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:85 LDA WINDOW_HEAD
    case 0xC1076C: {
        Instruction step(cpu, 0xAD, 0x008C22u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:86 LDX @LOCAL01
    case 0xC1076F: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:87 STA a:window_stats::next,X
    case 0xC10771: {
        Instruction step(cpu, 0x9D, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:89 LDA #$FFFF
    case 0xC10774: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:89 LDA #$FFFF
    // Overlapping static entry reached from 0xC10774.
    case 0xC10776: {
        Instruction step(cpu, 0xFF, 0x00009Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:90 STA a:window_stats::prev,X
    case 0xC10777: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:91 LDA @LOCAL00
    case 0xC1077A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:92 STA WINDOW_HEAD
    case 0xC1077C: {
        Instruction step(cpu, 0x8D, 0x008C22u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:93 BRA @UNKNOWN7
    case 0xC1077F: {
        Instruction step(cpu, 0x80, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/create_window.asm:95 LDA WINDOW_HEAD
    case 0xC10781: {
        Instruction step(cpu, 0xAD, 0x008C22u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:96 CMP #$FFFF
    case 0xC10784: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:96 CMP #$FFFF
    // Overlapping static entry reached from 0xC10784.
    case 0xC10786: {
        Instruction step(cpu, 0xFF, 0xA90DD0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:97 BNE @UNKNOWN5
    case 0xC10787: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/create_window.asm:98 LDA #$FFFF
    case 0xC10789: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:98 LDA #$FFFF
    // Overlapping static entry reached from 0xC10786.
    case 0xC1078A: {
        Instruction step(cpu, 0xFF, 0x009DFFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:98 LDA #$FFFF
    // Overlapping static entry reached from 0xC10789.
    case 0xC1078B: {
        Instruction step(cpu, 0xFF, 0x00009Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:99 STA a:window_stats::prev,X
    case 0xC1078C: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:99 STA a:window_stats::prev,X
    // Overlapping static entry reached from 0xC1078A.
    case 0xC1078E: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:100 LDA @LOCAL00
    case 0xC1078F: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:101 STA WINDOW_HEAD
    case 0xC10791: {
        Instruction step(cpu, 0x8D, 0x008C22u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:102 BRA @UNKNOWN6
    case 0xC10794: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/create_window.asm:104 LDA WINDOW_TAIL
    case 0xC10796: {
        Instruction step(cpu, 0xAD, 0x008C24u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:105 STA a:window_stats::prev,X
    case 0xC10799: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:106 LDA WINDOW_TAIL
    case 0xC1079C: {
        Instruction step(cpu, 0xAD, 0x008C24u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:107 LDY #.SIZEOF(window_stats)
    case 0xC1079F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:107 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1079F.
    case 0xC107A1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:108 JSL MULT168
    case 0xC107A2: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:109 TAX
    case 0xC107A6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:110 LDA @LOCAL00
    case 0xC107A7: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:111 STA WINDOW_STATS + window_stats::next,X
    case 0xC107A9: {
        Instruction step(cpu, 0x9D, 0x0089C4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:113 STA WINDOW_TAIL
    case 0xC107AC: {
        Instruction step(cpu, 0x8D, 0x008C24u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:114 LDA #$FFFF
    case 0xC107AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:114 LDA #$FFFF
    // Overlapping static entry reached from 0xC107AF.
    case 0xC107B1: {
        Instruction step(cpu, 0xFF, 0x9D10A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:115 LDX @LOCAL01
    case 0xC107B2: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:116 STA a:window_stats::next,X
    case 0xC107B4: {
        Instruction step(cpu, 0x9D, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:116 STA a:window_stats::next,X
    // Overlapping static entry reached from 0xC107B1.
    case 0xC107B5: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/create_window.asm:118 LDY @LOCAL03
    case 0xC107B7: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:119 TYA
    case 0xC107B9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:120 STA a:window_stats::id,X
    case 0xC107BA: {
        Instruction step(cpu, 0x9D, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:121 TYA
    case 0xC107BD: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:122 ASL
    case 0xC107BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:123 TAX
    case 0xC107BF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:124 LDA @LOCAL00
    case 0xC107C0: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:125 STA OPEN_WINDOW_TABLE,X
    case 0xC107C2: {
        Instruction step(cpu, 0x9D, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC107C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Au : 0x00E23Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC107C5.
    case 0xC107C7: {
        Instruction step(cpu, 0xE2, 0x000085u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC107C8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC107C7.
    case 0xC107C9: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC107CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC107C9.
    case 0xC107CB: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC107CA.
    case 0xC107CC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC107CD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:127 TYA
    case 0xC107CF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:128 ASL
    case 0xC107D0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:129 ASL
    case 0xC107D1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:130 ASL
    case 0xC107D2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:131 STA @TMP00
    case 0xC107D3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC107D5: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC107D7: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC107D9: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC107DB: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/create_window.asm:133 CLC
    case 0xC107DD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:134 ADC @VIRTUAL0A
    case 0xC107DE: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:135 STA @VIRTUAL0A
    case 0xC107E0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:136 LDA [@VIRTUAL0A]
    case 0xC107E2: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:137 LDX @LOCAL01
    case 0xC107E4: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:138 STA a:window_stats::window_x,X
    case 0xC107E6: {
        Instruction step(cpu, 0x9D, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:139 LDA @TMP00
    case 0xC107E9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:140 INC
    case 0xC107EB: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/create_window.asm:141 INC
    case 0xC107EC: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC107ED: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC107EF: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC107F1: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC107F3: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10832.
    case 0xC107F4: {
        Instruction step(cpu, 0x0C, 0x006518u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/create_window.asm:143 CLC
    case 0xC107F5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:144 ADC @VIRTUAL0A
    case 0xC107F6: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:144 ADC @VIRTUAL0A
    // Overlapping static entry reached from 0xC107F4.
    case 0xC107F7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:145 STA @VIRTUAL0A
    case 0xC107F8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:146 LDA [@VIRTUAL0A]
    case 0xC107FA: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:147 STA a:window_stats::window_y,X
    case 0xC107FC: {
        Instruction step(cpu, 0x9D, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:148 LDA @TMP00
    case 0xC107FF: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:149 INC
    case 0xC10801: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/create_window.asm:150 INC
    case 0xC10802: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/create_window.asm:151 INC
    case 0xC10803: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/create_window.asm:152 INC
    case 0xC10804: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC10805: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC10807: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC10809: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1080B: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/create_window.asm:154 CLC
    case 0xC1080D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:155 ADC @VIRTUAL0A
    case 0xC1080E: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:156 STA @VIRTUAL0A
    case 0xC10810: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:157 LDA [@VIRTUAL0A]
    case 0xC10812: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:158 DEC
    case 0xC10814: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/create_window.asm:159 DEC
    case 0xC10815: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/create_window.asm:160 STA a:window_stats::width,X
    case 0xC10816: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:161 LDA @TMP00
    case 0xC10819: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:162 CLC
    case 0xC1081B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:163 ADC #6
    case 0xC1081C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:163 ADC #6
    // Overlapping static entry reached from 0xC1081C.
    case 0xC1081E: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:164 CLC
    case 0xC1081F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:165 ADC @VIRTUAL06
    case 0xC10820: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:166 STA @VIRTUAL06
    case 0xC10822: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:167 LDA [@VIRTUAL06]
    case 0xC10824: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:168 DEC
    case 0xC10826: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/create_window.asm:169 DEC
    case 0xC10827: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/create_window.asm:170 STA a:window_stats::height,X
    case 0xC10828: {
        Instruction step(cpu, 0x9D, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:171 LDY #504 * 2
    case 0xC1082B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F0u : 0x0003F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:171 LDY #504 * 2
    // Overlapping static entry reached from 0xC1082B.
    case 0xC1082D: {
        Instruction step(cpu, 0x03, 0x0000A5u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:172 LDA @LOCAL00
    case 0xC1082E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:172 LDA @LOCAL00
    // Overlapping static entry reached from 0xC1082D.
    case 0xC1082F: {
        Instruction step(cpu, 0x0E, 0x001422u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:173 JSL MULT16
    case 0xC10830: {
        Instruction step(cpu, 0x22, 0xC09014u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:173 JSL MULT16
    // Overlapping static entry reached from 0xC1082F.
    case 0xC10832: {
        Instruction step(cpu, 0x90, 0x0000C0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/create_window.asm:174 CLC
    case 0xC10834: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:175 ADC #.LOWORD(TEXT_TILEMAP_BUFFER)
    case 0xC10835: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F6u : 0x0061F6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:175 ADC #.LOWORD(TEXT_TILEMAP_BUFFER)
    // Overlapping static entry reached from 0xC10835.
    case 0xC10837: {
        Instruction step(cpu, 0x61, 0x00009Du, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:176 STA a:window_stats::tilemap_address,X
    case 0xC10838: {
        Instruction step(cpu, 0x9D, 0x000035u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:176 STA a:window_stats::tilemap_address,X
    // Overlapping static entry reached from 0xC10837.
    case 0xC10839: {
        Instruction step(cpu, 0x35, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:177 LDY @LOCAL03
    case 0xC1083B: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:178 STY CURRENT_FOCUS_WINDOW
    case 0xC1083D: {
        Instruction step(cpu, 0x8C, 0x008C96u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/create_window.asm:185 STZ a:window_stats::text_y,X
    case 0xC10840: {
        Instruction step(cpu, 0x9E, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/create_window.asm:186 STZ a:window_stats::text_x,X
    case 0xC10843: {
        Instruction step(cpu, 0x9E, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/create_window.asm:187 SEP #PROC_FLAGS::ACCUM8
    case 0xC10846: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/create_window.asm:188 LDA #128
    case 0xC10848: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x009D80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:189 STA a:window_stats::number_padding,X
    case 0xC1084A: {
        Instruction step(cpu, 0x9D, 0x000012u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:189 STA a:window_stats::number_padding,X
    // Overlapping static entry reached from 0xC10848.
    case 0xC1084B: {
        Instruction step(cpu, 0x12, 0x000000u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:190 REP #PROC_FLAGS::ACCUM8
    case 0xC1084D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/create_window.asm:191 STZ a:window_stats::curr_tile_attributes,X
    case 0xC1084F: {
        Instruction step(cpu, 0x9E, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/create_window.asm:192 STZ a:window_stats::font,X
    case 0xC10852: {
        Instruction step(cpu, 0x9E, 0x000015u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/create_window.asm:193 LDA @LOCAL02_2
    case 0xC10855: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:194 CLC
    case 0xC10857: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:195 ADC #window_stats::working_memory
    case 0xC10858: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:195 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10858.
    case 0xC1085A: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:196 TAY
    case 0xC1085B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1085C: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1085F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10861: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10864: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:198 TXA
    case 0xC10866: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:199 CLC
    case 0xC10867: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:200 ADC #window_stats::working_memory
    case 0xC10868: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:200 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10868.
    case 0xC1086A: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:201 TAY
    case 0xC1086B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1086C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1086E: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10871: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10873: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:203 LDA @LOCAL02_2
    case 0xC10876: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:204 CLC
    case 0xC10878: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:205 ADC #window_stats::argument_memory
    case 0xC10879: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:205 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC10879.
    case 0xC1087B: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:206 TAY
    case 0xC1087C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1087D: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10880: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10882: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10885: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:208 TXA
    case 0xC10887: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:209 CLC
    case 0xC10888: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:210 ADC #window_stats::argument_memory
    case 0xC10889: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:210 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC10889.
    case 0xC1088B: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:211 TAY
    case 0xC1088C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1088D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1088F: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10892: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10894: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:213 LDA @LOCAL02_2
    case 0xC10897: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:214 CLC
    case 0xC10899: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:215 ADC #window_stats::working_memory_storage
    case 0xC1089A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:215 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC1089A.
    case 0xC1089C: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:216 TAY
    case 0xC1089D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1089E: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC108A1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC108A3: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC108A6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:218 TXA
    case 0xC108A8: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:219 CLC
    case 0xC108A9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:220 ADC #window_stats::working_memory_storage
    case 0xC108AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:220 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC108AA.
    case 0xC108AC: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:221 TAY
    case 0xC108AD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108AE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108B0: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108B3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108B5: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:223 LDA @LOCAL02_2
    case 0xC108B8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:224 CLC
    case 0xC108BA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:225 ADC #window_stats::argument_memory_storage
    case 0xC108BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:225 ADC #window_stats::argument_memory_storage
    // Overlapping static entry reached from 0xC108BB.
    case 0xC108BD: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:226 TAY
    case 0xC108BE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC108BF: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC108C2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC108C4: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC108C7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:228 TXA
    case 0xC108C9: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:229 CLC
    case 0xC108CA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:230 ADC #window_stats::argument_memory_storage
    case 0xC108CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:230 ADC #window_stats::argument_memory_storage
    // Overlapping static entry reached from 0xC108CB.
    case 0xC108CD: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:231 TAY
    case 0xC108CE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108CF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108D1: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108D4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108D6: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:234 LDX @LOCAL02_2
    case 0xC108D9: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:239 LDA a:window_stats::secondary_memory,X
    case 0xC108DB: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:240 LDX @LOCAL01
    case 0xC108DE: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:241 STA a:window_stats::secondary_memory,X
    case 0xC108E0: {
        Instruction step(cpu, 0x9D, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:243 LDX @LOCAL02_2
    case 0xC108E3: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:248 LDA a:window_stats::secondary_memory_storage,X
    case 0xC108E5: {
        Instruction step(cpu, 0xBD, 0x000029u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:249 LDX @LOCAL01
    case 0xC108E8: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:250 STA a:window_stats::secondary_memory_storage,X
    case 0xC108EA: {
        Instruction step(cpu, 0x9D, 0x000029u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:251 LDA #$FFFF
    case 0xC108ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:251 LDA #$FFFF
    // Overlapping static entry reached from 0xC108ED.
    case 0xC108EF: {
        Instruction step(cpu, 0xFF, 0x002F9Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:252 STA a:window_stats::selected_option,X
    case 0xC108F0: {
        Instruction step(cpu, 0x9D, 0x00002Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:253 STA a:window_stats::option_count,X
    case 0xC108F3: {
        Instruction step(cpu, 0x9D, 0x00002Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:254 STA a:window_stats::current_option,X
    case 0xC108F6: {
        Instruction step(cpu, 0x9D, 0x00002Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:255 LDA #1
    case 0xC108F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:255 LDA #1
    // Overlapping static entry reached from 0xC108F9.
    case 0xC108FB: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:256 STA a:window_stats::unknown49,X
    case 0xC108FC: {
        Instruction step(cpu, 0x9D, 0x000031u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:257 STA a:window_stats::menu_page_number,X
    case 0xC108FF: {
        Instruction step(cpu, 0x9D, 0x000033u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC10902: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC10902.
    case 0xC10904: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC10905: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC10907: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC10907.
    case 0xC10909: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1090A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:259 TXA
    case 0xC1090C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:260 CLC
    case 0xC1090D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/create_window.asm:261 ADC #window_stats::cursor_move_callback
    case 0xC1090E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000037u : 0x000037u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/create_window.asm:261 ADC #window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC1090E.
    case 0xC10910: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:262 TAY
    case 0xC10911: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10912: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10914: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10917: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10919: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:264 LDY a:window_stats::tilemap_address,X
    case 0xC1091C: {
        Instruction step(cpu, 0xBC, 0x000035u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:265 STY @LOCAL00
    case 0xC1091F: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/create_window.asm:266 LDY a:window_stats::height,X
    case 0xC10921: {
        Instruction step(cpu, 0xBC, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:267 LDA a:window_stats::width,X
    case 0xC10924: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:268 JSL MULT16
    case 0xC10927: {
        Instruction step(cpu, 0x22, 0xC09014u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:269 STA @LOCAL02_3
    case 0xC1092B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:270 BRA @UNKNOWN11
    case 0xC1092D: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/create_window.asm:279 LDA #64
    case 0xC1092F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:279 LDA #64
    // Overlapping static entry reached from 0xC1092F.
    case 0xC10931: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:280 LDY @LOCAL00
    case 0xC10932: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/create_window.asm:281 STA __BSS_START__,Y
    case 0xC10934: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:282 INY
    case 0xC10937: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/create_window.asm:283 INY
    case 0xC10938: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/create_window.asm:284 STY @LOCAL00
    case 0xC10939: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/create_window.asm:285 LDA @LOCAL02_3
    case 0xC1093B: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:286 DEC
    case 0xC1093D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/create_window.asm:287 STA @LOCAL02_3
    case 0xC1093E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:290 CMP #0
    case 0xC10940: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:290 CMP #0
    // Overlapping static entry reached from 0xC10940.
    case 0xC10942: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:294 BNE @UNKNOWN9
    case 0xC10943: {
        Instruction step(cpu, 0xD0, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/create_window.asm:298 LDA a:window_stats::unknown59,X
    case 0xC10945: {
        Instruction step(cpu, 0xBD, 0x00003Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:299 AND #$00FF
    case 0xC10948: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:299 AND #$00FF
    // Overlapping static entry reached from 0xC10948.
    case 0xC1094A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:300 BEQ @UNKNOWN12
    case 0xC1094B: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/create_window.asm:301 AND #$00FF
    case 0xC1094D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:301 AND #$00FF
    // Overlapping static entry reached from 0xC1094D.
    case 0xC1094F: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/create_window.asm:302 DEC
    case 0xC10950: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/create_window.asm:303 ASL
    case 0xC10951: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/create_window.asm:304 TAX
    case 0xC10952: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/create_window.asm:305 LDA #$FFFF
    case 0xC10953: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:305 LDA #$FFFF
    // Overlapping static entry reached from 0xC10953.
    case 0xC10955: {
        Instruction step(cpu, 0xFF, 0x8C8E9Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/create_window.asm:306 STA TITLED_WINDOWS,X
    case 0xC10956: {
        Instruction step(cpu, 0x9D, 0x008C8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:308 LDX @LOCAL01
    case 0xC10959: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/create_window.asm:309 SEP #PROC_FLAGS::ACCUM8
    case 0xC1095B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/create_window.asm:310 STZ a:window_stats::title,X
    case 0xC1095D: {
        Instruction step(cpu, 0x9E, 0x00003Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/create_window.asm:311 STZ a:window_stats::unknown59,X
    case 0xC10960: {
        Instruction step(cpu, 0x9E, 0x00003Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/text/create_window.asm:312 JSL UNKNOWN_C45E96
    case 0xC10963: {
        Instruction step(cpu, 0x22, 0xC43BE8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:313 SEP #PROC_FLAGS::ACCUM8
    case 0xC10967: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/create_window.asm:314 LDA #1
    case 0xC10969: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:315 STA REDRAW_ALL_WINDOWS
    case 0xC1096B: {
        Instruction step(cpu, 0x8D, 0x00991Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:315 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10969.
    case 0xC1096C: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/text/create_window.asm:315 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC1096C.
    case 0xC1096D: {
        Instruction step(cpu, 0x99, 0x00AB22u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/create_window.asm:316 JSL UNKNOWN_C07C5B
    case 0xC1096E: {
        Instruction step(cpu, 0x22, 0xC07EABu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/create_window.asm:316 JSL UNKNOWN_C07C5B
    // Overlapping static entry reached from 0xC1096D.
    case 0xC10970: {
        Instruction step(cpu, 0x7E, 0x002BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/create_window.asm:318 END_C_FUNCTION
    case 0xC10972: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/create_window.asm:318 END_C_FUNCTION
    case 0xC10973: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
