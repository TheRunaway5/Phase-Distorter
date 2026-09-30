// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C4/C43F77.asm
bool resume_unresolved_c4_c43f77(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43F77.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43F77: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43F77.asm:8 END_STACK_VARS
    case 0xC43F79: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43F77.asm:8 END_STACK_VARS
    case 0xC43F7A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43F77.asm:8 END_STACK_VARS
    case 0xC43F7B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43F77.asm:8 END_STACK_VARS
    case 0xC43F7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43F77.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC43F7C.
    case 0xC43F7E: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43F77.asm:8 END_STACK_VARS
    case 0xC43F7F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43F77.asm:8 END_STACK_VARS
    case 0xC43F80: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:9 STA @VIRTUAL02
    case 0xC43F81: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC43F7E.
    case 0xC43F82: {
        Instruction step(cpu, 0x02, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:11 LDA CURRENT_FOCUS_WINDOW
    case 0xC43F83: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:12 CMP #.LOWORD(-1)
    case 0xC43F86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:12 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC43F86.
    case 0xC43F88: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C43F77.asm:13 BEQL @UNKNOWN9
    case 0xC43F89: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C43F77.asm:13 BEQL @UNKNOWN9
    case 0xC43F8B: {
        Instruction step(cpu, 0x4C, 0x004068u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C43F77.asm:13 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC43F88.
    case 0xC43F8C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C43F77.asm:13 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC43F8C.
    case 0xC43F8D: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:15 LDA CURRENT_FOCUS_WINDOW
    case 0xC43F8E: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:16 ASL
    case 0xC43F91: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:17 TAX
    case 0xC43F92: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xC43F93: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:19 LDY #.SIZEOF(window_stats)
    case 0xC43F96: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC43F96.
    case 0xC43F98: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:20 JSL MULT168
    case 0xC43F99: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:21 CLC
    case 0xC43F9D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:22 ADC #.LOWORD(WINDOW_STATS)
    case 0xC43F9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:22 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC43F9E.
    case 0xC43FA0: {
        Instruction step(cpu, 0x86, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:23 TAX
    case 0xC43FA1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:24 CLC
    case 0xC43FA2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:25 ADC #window_stats::width
    case 0xC43FA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:25 ADC #window_stats::width
    // Overlapping static entry reached from 0xC43FA3.
    case 0xC43FA5: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:26 TAY
    case 0xC43FA6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:27 STY @LOCAL01
    case 0xC43FA7: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:28 LDA a:window_stats::text_x,X
    case 0xC43FA9: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:29 ASL
    case 0xC43FAC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:30 STA @VIRTUAL04
    case 0xC43FAD: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:31 LDA __BSS_START__,Y
    case 0xC43FAF: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:32 TAY
    case 0xC43FB2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:33 LDA a:window_stats::text_y,X
    case 0xC43FB3: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:34 JSL MULT16
    case 0xC43FB6: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:35 ASL
    case 0xC43FBA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:36 ASL
    case 0xC43FBB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:37 CLC
    case 0xC43FBC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:38 ADC a:window_stats::tilemap_address,X
    case 0xC43FBD: {
        Instruction step(cpu, 0x7D, 0x000035u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:39 CLC
    case 0xC43FC0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:40 ADC @VIRTUAL04
    case 0xC43FC1: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:41 TAX
    case 0xC43FC3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:42 STX @LOCAL00
    case 0xC43FC4: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:43 LDA __BSS_START__,X
    case 0xC43FC6: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:44 JSL FREE_TILE_SAFE
    case 0xC43FC9: {
        Instruction step(cpu, 0x22, 0xC44E4Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:45 LDY @LOCAL01
    case 0xC43FCD: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:46 LDA __BSS_START__,Y
    case 0xC43FCF: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:47 ASL
    case 0xC43FD2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:48 STA @VIRTUAL04
    case 0xC43FD3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:49 LDX @LOCAL00
    case 0xC43FD5: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:50 TXA
    case 0xC43FD7: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:51 CLC
    case 0xC43FD8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:52 ADC @VIRTUAL04
    case 0xC43FD9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:53 TAX
    case 0xC43FDB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:54 LDA __BSS_START__,X
    case 0xC43FDC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:55 JSL FREE_TILE_SAFE
    case 0xC43FDF: {
        Instruction step(cpu, 0x22, 0xC44E4Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:56 LDA @VIRTUAL02
    case 0xC43FE3: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:57 CMP #47
    case 0xC43FE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:57 CMP #47
    // Overlapping static entry reached from 0xC43FE5.
    case 0xC43FE7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:58 BNE @UNKNOWN1
    case 0xC43FE8: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:59 SEP #PROC_FLAGS::ACCUM8
    case 0xC43FEA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:60 STZ VWF_INDENT_NEW_LINE
    case 0xC43FEC: {
        Instruction step(cpu, 0x9C, 0x005E75u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC43FEF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:63 LDA @VIRTUAL02
    case 0xC43FF1: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:64 JSL REDIRECT_C10BA1
    case 0xC43FF3: {
        Instruction step(cpu, 0x22, 0xC10C80u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:65 LDA CURRENT_FOCUS_WINDOW
    case 0xC43FF7: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:66 ASL
    case 0xC43FFA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:67 TAX
    case 0xC43FFB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:68 LDA OPEN_WINDOW_TABLE,X
    case 0xC43FFC: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:69 CMP WINDOW_TAIL
    case 0xC43FFF: {
        Instruction step(cpu, 0xCD, 0x0088E2u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:70 BEQ @UNKNOWN2
    case 0xC44002: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC44004: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:72 LDA #1
    case 0xC44006: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:73 STA REDRAW_ALL_WINDOWS
    case 0xC44008: {
        Instruction step(cpu, 0x8D, 0x009623u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:73 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC44006.
    case 0xC44009: {
        Instruction step(cpu, 0x23, 0x000096u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:75 REP #PROC_FLAGS::ACCUM8
    case 0xC4400B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:76 LDA TEXT_SOUND_MODE
    case 0xC4400D: {
        Instruction step(cpu, 0xAD, 0x00964Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:77 CMP #2
    case 0xC44010: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:77 CMP #2
    // Overlapping static entry reached from 0xC44010.
    case 0xC44012: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:78 BNE @UNKNOWN3
    case 0xC44013: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:79 LDX #1
    case 0xC44015: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:79 LDX #1
    // Overlapping static entry reached from 0xC44015.
    case 0xC44017: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:80 BRA @UNKNOWN5
    case 0xC44018: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:82 LDA TEXT_SOUND_MODE
    case 0xC4401A: {
        Instruction step(cpu, 0xAD, 0x00964Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:83 CMP #3
    case 0xC4401D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:83 CMP #3
    // Overlapping static entry reached from 0xC4401D.
    case 0xC4401F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:84 BNE @UNKNOWN4
    case 0xC44020: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:85 LDX #0
    case 0xC44022: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:85 LDX #0
    // Overlapping static entry reached from 0xC44022.
    case 0xC44024: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:86 BRA @UNKNOWN5
    case 0xC44025: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:88 LDX #0
    case 0xC44027: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:88 LDX #0
    // Overlapping static entry reached from 0xC44027.
    case 0xC44029: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:89 LDA BLINKING_TRIANGLE_FLAG
    case 0xC4402A: {
        Instruction step(cpu, 0xAD, 0x00964Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:90 BNE @UNKNOWN5
    case 0xC4402D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:91 LDX #1
    case 0xC4402F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:91 LDX #1
    // Overlapping static entry reached from 0xC4402F.
    case 0xC44031: {
        Instruction step(cpu, 0x00, 0x0000E0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:93 CPX #0
    case 0xC44032: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:93 CPX #0
    // Overlapping static entry reached from 0xC44032.
    case 0xC44034: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:94 BEQ @UNKNOWN6
    case 0xC44035: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:95 LDA INSTANT_PRINTING
    case 0xC44037: {
        Instruction step(cpu, 0xAD, 0x009622u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:96 AND #$00FF
    case 0xC4403A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC4403A.
    case 0xC4403C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:97 BNE @UNKNOWN6
    case 0xC4403D: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:98 LDA @VIRTUAL02
    case 0xC4403F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:99 CMP #32
    case 0xC44041: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:99 CMP #32
    // Overlapping static entry reached from 0xC44041.
    case 0xC44043: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:100 BEQ @UNKNOWN6
    case 0xC44044: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:101 LDA #SFX::TEXT_PRINT
    case 0xC44046: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:101 LDA #SFX::TEXT_PRINT
    // Overlapping static entry reached from 0xC44046.
    case 0xC44048: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:102 JSL PLAY_SOUND
    case 0xC44049: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:104 LDA INSTANT_PRINTING
    case 0xC4404D: {
        Instruction step(cpu, 0xAD, 0x009622u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:105 AND #$00FF
    case 0xC44050: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC44050.
    case 0xC44052: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:106 BNE @UNKNOWN9
    case 0xC44053: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:107 LDX SELECTED_TEXT_SPEED
    case 0xC44055: {
        Instruction step(cpu, 0xAE, 0x009625u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:108 INX
    case 0xC44058: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:109 STX @LOCAL01
    case 0xC44059: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:110 BRA @UNKNOWN8
    case 0xC4405B: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:112 JSL WINDOW_TICK
    case 0xC4405D: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:113 LDX @LOCAL01
    case 0xC44061: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:114 DEX
    case 0xC44063: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:115 STX @LOCAL01
    case 0xC44064: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C43F77.asm:117 BNE @UNKNOWN7
    case 0xC44066: {
        Instruction step(cpu, 0xD0, 0x0000F5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43F77.asm:119 END_C_FUNCTION
    case 0xC44068: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43F77.asm:119 END_C_FUNCTION
    case 0xC44069: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
