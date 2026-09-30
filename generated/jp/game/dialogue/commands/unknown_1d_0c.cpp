// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/unknown_1D_0C.asm
bool resume_text_ccs_unknown_1d_0c(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:3 BEGIN_C_FUNCTION
    case 0xC172D7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC172D9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC172DA: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC172DB: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC172DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC172DC.
    case 0xC172DE: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC172DF: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:11 END_STACK_VARS
    case 0xC172E0: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:12 TXY
    case 0xC172E1: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:13 STY @LOCAL02
    case 0xC172E2: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:14 LDA #1
    case 0xC172E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:14 LDA #1
    // Overlapping static entry reached from 0xC172E4.
    case 0xC172E6: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:15 CLC
    case 0xC172E7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:16 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC172E8: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC172EB: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC172ED: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC172EF: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC172F1: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:18 TYA
    case 0xC172F3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC172F4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:20 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC172F6: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:21 STA CC_ARGUMENT_STORAGE,X
    case 0xC172F9: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC172FC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:23 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC172FE: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:24 LDA #.LOWORD(CC_1D_0C)
    case 0xC17301: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x0072D7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:24 LDA #.LOWORD(CC_1D_0C)
    // Overlapping static entry reached from 0xC17301.
    case 0xC17303: {
        Instruction step(cpu, 0x72, 0x00004Cu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:25 JMP @UNKNOWN12
    case 0xC17304: {
        Instruction step(cpu, 0x4C, 0x00739Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:25 JMP @UNKNOWN12
    // Overlapping static entry reached from 0xC17303.
    case 0xC17305: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:25 JMP @UNKNOWN12
    // Overlapping static entry reached from 0xC17305.
    case 0xC17306: {
        Instruction step(cpu, 0x73, 0x0000ADu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:27 LDA CC_ARGUMENT_STORAGE
    case 0xC17307: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:27 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC17306.
    case 0xC17308: {
        Instruction step(cpu, 0x6E, 0x00299Au, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:28 AND #$00FF
    case 0xC1730A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC17308.
    case 0xC1730B: {
        Instruction step(cpu, 0xFF, 0xF0AA00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC1730A.
    case 0xC1730C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:29 TAX
    case 0xC1730D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:30 BEQ @UNKNOWN3
    case 0xC1730E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:30 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC1730B.
    case 0xC1730F: {
        Instruction step(cpu, 0x03, 0x00008Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:31 TXA
    case 0xC17310: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:32 BRA @UNKNOWN4
    case 0xC17311: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:34 JSR GET_WORKING_MEMORY
    case 0xC17313: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:35 LDA @VIRTUAL06
    case 0xC17316: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:37 STA @VIRTUAL02
    case 0xC17318: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:38 LDY @LOCAL02
    case 0xC1731A: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:39 BEQ @UNKNOWN5
    case 0xC1731C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:40 TYA
    case 0xC1731E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:41 BRA @UNKNOWN6
    case 0xC1731F: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:43 JSR GET_ARGUMENT_MEMORY
    case 0xC17321: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:44 LDA @VIRTUAL06
    case 0xC17324: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:46 TAY
    case 0xC17326: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:47 STY @LOCAL01
    case 0xC17327: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:48 JSR UNKNOWN_C190F1
    case 0xC17329: {
        Instruction step(cpu, 0x20, 0x0091AFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:49 CMP #0
    case 0xC1732C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:49 CMP #0
    // Overlapping static entry reached from 0xC1732C.
    case 0xC1732E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:50 BEQ @UNKNOWN7
    case 0xC1732F: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:51 LDX #2
    case 0xC17331: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:51 LDX #2
    // Overlapping static entry reached from 0xC17331.
    case 0xC17333: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:52 STX @LOCAL02
    case 0xC17334: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:53 BRA @UNKNOWN8
    case 0xC17336: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:55 LDX #0
    case 0xC17338: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:55 LDX #0
    // Overlapping static entry reached from 0xC17338.
    case 0xC1733A: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:56 STX @LOCAL02
    case 0xC1733B: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:58 LDY @LOCAL01
    case 0xC1733D: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:59 TYA
    case 0xC1733F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:60 DEC
    case 0xC17340: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:61 PHA
    case 0xC17341: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:62 LDA @VIRTUAL02
    case 0xC17342: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:63 DEC
    case 0xC17344: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:64 LDY #.SIZEOF(char_struct)
    case 0xC17345: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:64 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC17345.
    case 0xC17347: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:65 JSL MULT168
    case 0xC17348: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:66 CLC
    case 0xC1734C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:67 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1734D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:67 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1734D.
    case 0xC1734F: {
        Instruction step(cpu, 0x9C, 0x00847Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:68 PLY
    case 0xC17350: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:69 STY @VIRTUAL02
    case 0xC17351: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:69 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC1734F.
    case 0xC17352: {
        Instruction step(cpu, 0x02, 0x000018u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:70 CLC
    case 0xC17353: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:71 ADC @VIRTUAL02
    case 0xC17354: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:72 TAX
    case 0xC17356: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:73 LDA __BSS_START__,X
    case 0xC17357: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:74 AND #$00FF
    case 0xC1735A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC1735A.
    case 0xC1735C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1735D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1735F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC17360: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC17362: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC17363: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC17364: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:76 CLC
    case 0xC17365: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:77 ADC #item::flags
    case 0xC17366: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:77 ADC #item::flags
    // Overlapping static entry reached from 0xC17366.
    case 0xC17368: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:78 TAX
    case 0xC17369: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:79 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1736A: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:80 AND #$00FF
    case 0xC1736E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC1736E.
    case 0xC17370: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:81 AND #ITEM_FLAGS::UNKNOWN
    case 0xC17371: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:81 AND #ITEM_FLAGS::UNKNOWN
    // Overlapping static entry reached from 0xC17371.
    case 0xC17373: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:82 BEQ @UNKNOWN9
    case 0xC17374: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:83 LDA #1
    case 0xC17376: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:83 LDA #1
    // Overlapping static entry reached from 0xC17376.
    case 0xC17378: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:84 BRA @UNKNOWN10
    case 0xC17379: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:86 LDA #0
    case 0xC1737B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:86 LDA #0
    // Overlapping static entry reached from 0xC1737B.
    case 0xC1737D: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:88 LDX @LOCAL02
    case 0xC1737E: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:89 STX @VIRTUAL02
    case 0xC17380: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:90 ORA @VIRTUAL02
    case 0xC17382: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:91 STORE_INT1632S @VIRTUAL06
    case 0xC17384: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:91 STORE_INT1632S @VIRTUAL06
    case 0xC17386: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:91 STORE_INT1632S @VIRTUAL06
    case 0xC17388: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:91 STORE_INT1632S @VIRTUAL06
    case 0xC1738A: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1738C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1738E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17390: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17392: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:93 JSR SET_WORKING_MEMORY
    case 0xC17394: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:94 LDA #NULL
    case 0xC17397: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_0C.asm:94 LDA #NULL
    // Overlapping static entry reached from 0xC17397.
    case 0xC17399: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:96 END_C_FUNCTION
    case 0xC1739A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_0C.asm:96 END_C_FUNCTION
    case 0xC1739B: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
