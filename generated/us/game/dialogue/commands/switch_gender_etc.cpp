// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/switch_gender_etc.asm
bool resume_text_ccs_switch_gender_etc(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/switch_gender_etc.asm:3 BEGIN_C_FUNCTION
    case 0xC151FC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/switch_gender_etc.asm:10 END_STACK_VARS
    case 0xC151FE: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/switch_gender_etc.asm:10 END_STACK_VARS
    case 0xC151FF: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/switch_gender_etc.asm:10 END_STACK_VARS
    case 0xC15200: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/switch_gender_etc.asm:10 END_STACK_VARS
    case 0xC15201: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/switch_gender_etc.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15201.
    case 0xC15203: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/switch_gender_etc.asm:10 END_STACK_VARS
    case 0xC15204: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/switch_gender_etc.asm:10 END_STACK_VARS
    case 0xC15205: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:11 STX @LOCAL01
    case 0xC15206: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC15203.
    case 0xC15207: {
        Instruction step(cpu, 0x12, 0x0000AEu, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:12 LDX CURRENT_TARGET
    case 0xC15208: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:12 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC15207.
    case 0xC15209: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:13 LDA a:battler::ally_or_enemy,X
    case 0xC1520B: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:14 AND #$00FF
    case 0xC1520E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC1520E.
    case 0xC15210: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:15 CMP #1
    case 0xC15211: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:15 CMP #1
    // Overlapping static entry reached from 0xC15211.
    case 0xC15213: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:16 BNE @HANDLE_ALLY
    case 0xC15214: {
        Instruction step(cpu, 0xD0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:17 LDX @LOCAL01
    case 0xC15216: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:18 CPX #1
    case 0xC15218: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:18 CPX #1
    // Overlapping static entry reached from 0xC15218.
    case 0xC1521A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:19 BEQ @RETURN_ENEMY_GENDER
    case 0xC1521B: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:20 LDA ENEMIES_IN_BATTLE
    case 0xC1521D: {
        Instruction step(cpu, 0xAD, 0x009F8Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:21 CMP #3
    case 0xC15220: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:21 CMP #3
    // Overlapping static entry reached from 0xC15220.
    case 0xC15222: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/ccs/switch_gender_etc.asm:22 BLTEQ @THREE_OR_FEWER_ENEMIES
    case 0xC15223: {
        Instruction step(cpu, 0x90, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/ccs/switch_gender_etc.asm:22 BLTEQ @THREE_OR_FEWER_ENEMIES
    case 0xC15225: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:23 LDX #3
    case 0xC15227: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:23 LDX #3
    // Overlapping static entry reached from 0xC15227.
    case 0xC15229: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:24 BRA @RETURN_CAPPED_ENEMY_COUNT
    case 0xC1522A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:26 LDX ENEMIES_IN_BATTLE
    case 0xC1522C: {
        Instruction step(cpu, 0xAE, 0x009F8Au, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:28 TXA
    case 0xC1522F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:29 BRA @RETURN
    case 0xC15230: {
        Instruction step(cpu, 0x80, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:31 LDX CURRENT_TARGET
    case 0xC15232: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:32 LDA __BSS_START__,X
    case 0xC15235: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:33 LDY #.SIZEOF(enemy_data)
    case 0xC15238: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:33 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC15238.
    case 0xC1523A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:34 JSL MULT168
    case 0xC1523B: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:35 CLC
    case 0xC1523F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:36 ADC #enemy_data::gender
    case 0xC15240: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:36 ADC #enemy_data::gender
    // Overlapping static entry reached from 0xC15240.
    case 0xC15242: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:37 TAX
    case 0xC15243: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:38 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC15244: {
        Instruction step(cpu, 0xBF, 0xD59589u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:39 AND #$00FF
    case 0xC15248: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC15248.
    case 0xC1524A: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:40 BRA @RETURN
    case 0xC1524B: {
        Instruction step(cpu, 0x80, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:42 LDX @LOCAL01
    case 0xC1524D: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:43 CPX #1
    case 0xC1524F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:43 CPX #1
    // Overlapping static entry reached from 0xC1524F.
    case 0xC15251: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:44 BEQ @RETURN_ALLY_GENDER
    case 0xC15252: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:45 JSL UNKNOWN_C2272F
    case 0xC15254: {
        Instruction step(cpu, 0x22, 0xC2272Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:46 TAX
    case 0xC15258: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:47 CPX #3
    case 0xC15259: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:47 CPX #3
    // Overlapping static entry reached from 0xC15259.
    case 0xC1525B: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/ccs/switch_gender_etc.asm:48 BLTEQ @RETURN_CAPPED_ALLY_COUNT
    case 0xC1525C: {
        Instruction step(cpu, 0x90, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/ccs/switch_gender_etc.asm:48 BLTEQ @RETURN_CAPPED_ALLY_COUNT
    case 0xC1525E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:49 LDX #3
    case 0xC15260: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:49 LDX #3
    // Overlapping static entry reached from 0xC15260.
    case 0xC15262: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:51 TXA
    case 0xC15263: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:52 BRA @RETURN
    case 0xC15264: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:54 LDX CURRENT_TARGET
    case 0xC15266: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:55 LDA a:battler::id,X
    case 0xC15269: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:56 CMP #2
    case 0xC1526C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:56 CMP #2
    // Overlapping static entry reached from 0xC1526C.
    case 0xC1526E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:57 BNE @NOT_PAULA
    case 0xC1526F: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:58 LDA #2
    case 0xC15271: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:58 LDA #2
    // Overlapping static entry reached from 0xC15271.
    case 0xC15273: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:59 BRA @RETURN
    case 0xC15274: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:61 LDA #1
    case 0xC15276: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:61 LDA #1
    // Overlapping static entry reached from 0xC15276.
    case 0xC15278: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/switch_gender_etc.asm:63 STORE_INT1632 @VIRTUAL06
    case 0xC15279: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/switch_gender_etc.asm:63 STORE_INT1632 @VIRTUAL06
    case 0xC1527B: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/switch_gender_etc.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1527D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/switch_gender_etc.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1527F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/switch_gender_etc.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15281: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/switch_gender_etc.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15283: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:65 JSR SET_WORKING_MEMORY
    case 0xC15285: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:66 LDA #NULL
    case 0xC15288: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/switch_gender_etc.asm:66 LDA #NULL
    // Overlapping static entry reached from 0xC15288.
    case 0xC1528A: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/switch_gender_etc.asm:67 END_C_FUNCTION
    case 0xC1528B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/switch_gender_etc.asm:67 END_C_FUNCTION
    case 0xC1528C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
