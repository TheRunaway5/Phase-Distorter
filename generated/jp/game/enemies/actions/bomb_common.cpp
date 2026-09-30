// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/bomb_common.asm
bool resume_battle_actions_bomb_common(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/bomb_common.asm:3 BEGIN_C_FUNCTION
    case 0xC2A601: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/bomb_common.asm:13 END_STACK_VARS
    case 0xC2A603: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/bomb_common.asm:13 END_STACK_VARS
    case 0xC2A604: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/bomb_common.asm:13 END_STACK_VARS
    case 0xC2A605: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/bomb_common.asm:13 END_STACK_VARS
    case 0xC2A606: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/bomb_common.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A606.
    case 0xC2A608: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/bomb_common.asm:13 END_STACK_VARS
    case 0xC2A609: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/bomb_common.asm:13 END_STACK_VARS
    case 0xC2A60A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:14 STA @LOCAL06
    case 0xC2A60B: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:14 STA @LOCAL06
    // Overlapping static entry reached from 0xC2A608.
    case 0xC2A60C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:15 STZ @LOCAL05
    case 0xC2A60D: {
        Instruction step(cpu, 0x64, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:16 LDA #0
    case 0xC2A60F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:16 LDA #0
    // Overlapping static entry reached from 0xC2A60F.
    case 0xC2A611: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:17 STA @VIRTUAL04
    case 0xC2A612: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:18 LDA @LOCAL06
    case 0xC2A614: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:19 JSR FIFTY_PERCENT_VARIANCE
    case 0xC2A616: {
        Instruction step(cpu, 0x20, 0x006983u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:20 LDX #$00FF
    case 0xC2A619: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:20 LDX #$00FF
    // Overlapping static entry reached from 0xC2A619.
    case 0xC2A61B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:21 JSR CALC_RESIST_DAMAGE
    case 0xC2A61C: {
        Instruction step(cpu, 0x20, 0x0080CBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:22 LDX CURRENT_TARGET
    case 0xC2A61F: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC2A622: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:24 AND #$00FF
    case 0xC2A625: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC2A625.
    case 0xC2A627: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/bomb_common.asm:26 BNEL @UNKNOWN8
    case 0xC2A628: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/bomb_common.asm:26 BNEL @UNKNOWN8
    case 0xC2A62A: {
        Instruction step(cpu, 0x4C, 0x00A6AAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:27 LDA #0
    case 0xC2A62D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:27 LDA #0
    // Overlapping static entry reached from 0xC2A62D.
    case 0xC2A62F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:28 STA @LOCAL04
    case 0xC2A630: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:34 BRA @UNKNOWN1
    case 0xC2A632: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:36 LDX CURRENT_TARGET
    case 0xC2A634: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:37 LDA __BSS_START__,X
    case 0xC2A637: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:38 STA @VIRTUAL02
    case 0xC2A63A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:40 LDA @LOCAL04
    case 0xC2A63C: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:41 CLC
    case 0xC2A63E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:42 ADC #.LOWORD(GAME_STATE)
    case 0xC2A63F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:42 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2A63F.
    case 0xC2A641: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:43 TAX
    case 0xC2A642: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:44 LDA a:game_state::party_members,X
    case 0xC2A643: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:49 AND #$00FF
    case 0xC2A646: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC2A646.
    case 0xC2A648: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:50 CMP @VIRTUAL02
    case 0xC2A649: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:51 BEQ @UNKNOWN2
    case 0xC2A64B: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:53 LDA @LOCAL04
    case 0xC2A64D: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:54 INC
    case 0xC2A64F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:55 STA @LOCAL04
    case 0xC2A650: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:62 CMP #6
    case 0xC2A652: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:62 CMP #6
    // Overlapping static entry reached from 0xC2A652.
    case 0xC2A654: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:63 BCC @UNKNOWN0
    case 0xC2A655: {
        Instruction step(cpu, 0x90, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:70 LDA @LOCAL04
    case 0xC2A657: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:74 BEQ @UNKNOWN3
    case 0xC2A659: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:76 DEC
    case 0xC2A65B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/actions/bomb_common.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    case 0xC2A65C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/actions/bomb_common.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    // Overlapping static entry reached from 0xC2A65C.
    case 0xC2A65E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/actions/bomb_common.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    case 0xC2A65F: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:82 CLC
    case 0xC2A663: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:83 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC2A664: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:83 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2A664.
    case 0xC2A666: {
        Instruction step(cpu, 0xA1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:84 STA @VIRTUAL04
    case 0xC2A667: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:84 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC2A666.
    case 0xC2A668: {
        Instruction step(cpu, 0x04, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:87 LDA @LOCAL04
    case 0xC2A669: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:87 LDA @LOCAL04
    // Overlapping static entry reached from 0xC2A668.
    case 0xC2A66A: {
        Instruction step(cpu, 0x16, 0x0000AAu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:88 TAX
    case 0xC2A66B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:90 LDA GAME_STATE + game_state::party_members + 1,X
    case 0xC2A66C: {
        Instruction step(cpu, 0xBD, 0x009B21u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:91 AND #$00FF
    case 0xC2A66F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:91 AND #$00FF
    // Overlapping static entry reached from 0xC2A66F.
    case 0xC2A671: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:93 TAX
    case 0xC2A672: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:94 STX @VIRTUAL02
    case 0xC2A673: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:99 LDA #1
    case 0xC2A675: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:99 LDA #1
    // Overlapping static entry reached from 0xC2A675.
    case 0xC2A677: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:100 CLC
    case 0xC2A678: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:101 SBC @VIRTUAL02
    case 0xC2A679: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/battle/actions/bomb_common.asm:102 JUMPGTS @UNKNOWN18
    case 0xC2A67B: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/battle/actions/bomb_common.asm:102 JUMPGTS @UNKNOWN18
    case 0xC2A67D: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/battle/actions/bomb_common.asm:102 JUMPGTS @UNKNOWN18
    case 0xC2A67F: {
        Instruction step(cpu, 0x4C, 0x00A789u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/battle/actions/bomb_common.asm:102 JUMPGTS @UNKNOWN18
    case 0xC2A682: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/battle/actions/bomb_common.asm:102 JUMPGTS @UNKNOWN18
    case 0xC2A684: {
        Instruction step(cpu, 0x4C, 0x00A789u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:104 TXA
    case 0xC2A687: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:108 CLC
    case 0xC2A688: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:109 SBC #4
    case 0xC2A689: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:109 SBC #4
    // Overlapping static entry reached from 0xC2A689.
    case 0xC2A68B: {
        Instruction step(cpu, 0x00, 0x000070u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/battle/actions/bomb_common.asm:110 JUMPGTS @UNKNOWN18
    case 0xC2A68C: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/battle/actions/bomb_common.asm:110 JUMPGTS @UNKNOWN18
    case 0xC2A68E: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/battle/actions/bomb_common.asm:110 JUMPGTS @UNKNOWN18
    case 0xC2A690: {
        Instruction step(cpu, 0x4C, 0x00A789u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/battle/actions/bomb_common.asm:110 JUMPGTS @UNKNOWN18
    case 0xC2A693: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/battle/actions/bomb_common.asm:110 JUMPGTS @UNKNOWN18
    case 0xC2A695: {
        Instruction step(cpu, 0x4C, 0x00A789u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:112 LDA @LOCAL04
    case 0xC2A698: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:116 LDY #.SIZEOF(battler)
    case 0xC2A69A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:116 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2A69A.
    case 0xC2A69C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:117 JSL MULT168
    case 0xC2A69D: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:118 CLC
    case 0xC2A6A1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:119 ADC #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler)
    case 0xC2A6A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000FCu : 0x00A1FCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:119 ADC #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler)
    // Overlapping static entry reached from 0xC2A6A2.
    case 0xC2A6A4: {
        Instruction step(cpu, 0xA1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:120 STA @LOCAL05
    case 0xC2A6A5: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:120 STA @LOCAL05
    // Overlapping static entry reached from 0xC2A6A4.
    case 0xC2A6A6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:121 JMP @UNKNOWN18
    case 0xC2A6A7: {
        Instruction step(cpu, 0x4C, 0x00A789u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:123 LDA #8
    case 0xC2A6AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:123 LDA #8
    // Overlapping static entry reached from 0xC2A6AA.
    case 0xC2A6AC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:124 STA @VIRTUAL02
    case 0xC2A6AD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:125 STA @LOCAL03
    case 0xC2A6AF: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:126 JMP @UNKNOWN17
    case 0xC2A6B1: {
        Instruction step(cpu, 0x4C, 0x00A77Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:128 LDA @VIRTUAL02
    case 0xC2A6B4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:129 LDY #.SIZEOF(battler)
    case 0xC2A6B6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:129 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2A6B6.
    case 0xC2A6B8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:130 JSL MULT168
    case 0xC2A6B9: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:131 TAX
    case 0xC2A6BD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:132 STX @LOCAL02
    case 0xC2A6BE: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:133 TXA
    case 0xC2A6C0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:134 CLC
    case 0xC2A6C1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:135 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC2A6C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:135 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2A6C2.
    case 0xC2A6C4: {
        Instruction step(cpu, 0xA1, 0x0000A8u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:136 TAY
    case 0xC2A6C5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:137 STY @LOCAL01
    case 0xC2A6C6: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:138 CPY CURRENT_TARGET
    case 0xC2A6C8: {
        Instruction step(cpu, 0xCC, 0x00AB74u, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/bomb_common.asm:139 BEQL @UNKNOWN16
    case 0xC2A6CB: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/bomb_common.asm:139 BEQL @UNKNOWN16
    case 0xC2A6CD: {
        Instruction step(cpu, 0x4C, 0x00A771u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:140 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2A6D0: {
        Instruction step(cpu, 0xBD, 0x00A1BCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:141 AND #$00FF
    case 0xC2A6D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC2A6D3.
    case 0xC2A6D5: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:142 CMP #1
    case 0xC2A6D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:142 CMP #1
    // Overlapping static entry reached from 0xC2A6D6.
    case 0xC2A6D8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/bomb_common.asm:143 BNEL @UNKNOWN16
    case 0xC2A6D9: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/bomb_common.asm:143 BNEL @UNKNOWN16
    case 0xC2A6DB: {
        Instruction step(cpu, 0x4C, 0x00A771u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:144 SEP #PROC_FLAGS::ACCUM8
    case 0xC2A6DE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:145 LDA BATTLERS_TABLE + battler::row,X
    case 0xC2A6E0: {
        Instruction step(cpu, 0xBD, 0x00A1BEu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:146 LDX CURRENT_TARGET
    case 0xC2A6E3: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:147 CMP a:battler::row,X
    case 0xC2A6E6: {
        Instruction step(cpu, 0xDD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/bomb_common.asm:148 BNEL @UNKNOWN16
    case 0xC2A6E9: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/bomb_common.asm:148 BNEL @UNKNOWN16
    case 0xC2A6EB: {
        Instruction step(cpu, 0x4C, 0x00A771u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:149 LDX @LOCAL02
    case 0xC2A6EE: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:150 LDA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2A6F0: {
        Instruction step(cpu, 0xBD, 0x00A1F2u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:151 STA @VIRTUAL01
    case 0xC2A6F3: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:152 LDX CURRENT_TARGET
    case 0xC2A6F5: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:153 LDA a:battler::sprite_x,X
    case 0xC2A6F8: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:154 STA @VIRTUAL00
    case 0xC2A6FB: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:155 LDA @VIRTUAL01
    case 0xC2A6FD: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:156 CMP @VIRTUAL00
    case 0xC2A6FF: {
        Instruction step(cpu, 0xC5, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:157 BCS @UNKNOWN14
    case 0xC2A701: {
        Instruction step(cpu, 0xB0, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:158 LDX CURRENT_TARGET
    case 0xC2A703: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:159 REP #PROC_FLAGS::ACCUM8
    case 0xC2A706: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:160 LDA a:battler::sprite,X
    case 0xC2A708: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:161 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2A70B: {
        Instruction step(cpu, 0x20, 0x00EF1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:162 STA @LOCAL00
    case 0xC2A70E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:163 LDX @LOCAL02
    case 0xC2A710: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:164 LDA BATTLERS_TABLE+battler::sprite,X
    case 0xC2A712: {
        Instruction step(cpu, 0xBD, 0x00A1B0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:165 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2A715: {
        Instruction step(cpu, 0x20, 0x00EF1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:166 CLC
    case 0xC2A718: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:167 ADC @LOCAL00
    case 0xC2A719: {
        Instruction step(cpu, 0x65, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:168 ASL
    case 0xC2A71B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:169 ASL
    case 0xC2A71C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:170 CLC
    case 0xC2A71D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:171 ADC #8
    case 0xC2A71E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:171 ADC #8
    // Overlapping static entry reached from 0xC2A71E.
    case 0xC2A720: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:172 STA @VIRTUAL02
    case 0xC2A721: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:173 SEP #PROC_FLAGS::ACCUM8
    case 0xC2A723: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:174 LDA @VIRTUAL00
    case 0xC2A725: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:175 SEC
    case 0xC2A727: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:176 SBC @VIRTUAL01
    case 0xC2A728: {
        Instruction step(cpu, 0xE5, 0x000001u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:177 REP #PROC_FLAGS::ACCUM8
    case 0xC2A72A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:178 AND #$00FF
    case 0xC2A72C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:178 AND #$00FF
    // Overlapping static entry reached from 0xC2A72C.
    case 0xC2A72E: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:179 CMP @VIRTUAL02
    case 0xC2A72F: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/actions/bomb_common.asm:180 BGT @UNKNOWN16
    case 0xC2A731: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/actions/bomb_common.asm:180 BGT @UNKNOWN16
    case 0xC2A733: {
        Instruction step(cpu, 0xB0, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:181 LDY @LOCAL01
    case 0xC2A735: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:182 STY @VIRTUAL04
    case 0xC2A737: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:183 BRA @UNKNOWN16
    case 0xC2A739: {
        Instruction step(cpu, 0x80, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:185 LDX CURRENT_TARGET
    case 0xC2A73B: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:186 REP #PROC_FLAGS::ACCUM8
    case 0xC2A73E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:187 LDA a:battler::sprite,X
    case 0xC2A740: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:188 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2A743: {
        Instruction step(cpu, 0x20, 0x00EF1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:189 STA @LOCAL00
    case 0xC2A746: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:190 LDX @LOCAL02
    case 0xC2A748: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:191 LDA BATTLERS_TABLE+battler::sprite,X
    case 0xC2A74A: {
        Instruction step(cpu, 0xBD, 0x00A1B0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:192 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2A74D: {
        Instruction step(cpu, 0x20, 0x00EF1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:193 CLC
    case 0xC2A750: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:194 ADC @LOCAL00
    case 0xC2A751: {
        Instruction step(cpu, 0x65, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:195 ASL
    case 0xC2A753: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:196 ASL
    case 0xC2A754: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:197 CLC
    case 0xC2A755: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:198 ADC #8
    case 0xC2A756: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:198 ADC #8
    // Overlapping static entry reached from 0xC2A756.
    case 0xC2A758: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:199 STA @VIRTUAL02
    case 0xC2A759: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:200 SEP #PROC_FLAGS::ACCUM8
    case 0xC2A75B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:201 LDA @VIRTUAL01
    case 0xC2A75D: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:202 SEC
    case 0xC2A75F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:203 SBC @VIRTUAL00
    case 0xC2A760: {
        Instruction step(cpu, 0xE5, 0x000000u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:204 REP #PROC_FLAGS::ACCUM8
    case 0xC2A762: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:205 AND #$00FF
    case 0xC2A764: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:205 AND #$00FF
    // Overlapping static entry reached from 0xC2A764.
    case 0xC2A766: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:206 CMP @VIRTUAL02
    case 0xC2A767: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/actions/bomb_common.asm:207 BGT @UNKNOWN16
    case 0xC2A769: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/actions/bomb_common.asm:207 BGT @UNKNOWN16
    case 0xC2A76B: {
        Instruction step(cpu, 0xB0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:208 LDY @LOCAL01
    case 0xC2A76D: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:209 STY @LOCAL05
    case 0xC2A76F: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:211 REP #PROC_FLAGS::ACCUM8
    case 0xC2A771: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:212 LDA @LOCAL03
    case 0xC2A773: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:213 STA @VIRTUAL02
    case 0xC2A775: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:214 INC @VIRTUAL02
    case 0xC2A777: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:215 LDA @VIRTUAL02
    case 0xC2A779: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:216 STA @LOCAL03
    case 0xC2A77B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:218 LDA @VIRTUAL02
    case 0xC2A77D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:219 CMP #BATTLER_COUNT
    case 0xC2A77F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:219 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2A77F.
    case 0xC2A781: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/actions/bomb_common.asm:220 BCCL @UNKNOWN9
    case 0xC2A782: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/actions/bomb_common.asm:220 BCCL @UNKNOWN9
    case 0xC2A784: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/actions/bomb_common.asm:220 BCCL @UNKNOWN9
    case 0xC2A786: {
        Instruction step(cpu, 0x4C, 0x00A6B4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:222 LDY CURRENT_TARGET
    case 0xC2A789: {
        Instruction step(cpu, 0xAC, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:223 STY @LOCAL03
    case 0xC2A78C: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:224 LDA @VIRTUAL04
    case 0xC2A78E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:225 BEQ @UNKNOWN19
    case 0xC2A790: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:226 LDA @VIRTUAL04
    case 0xC2A792: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:227 STA CURRENT_TARGET
    case 0xC2A794: {
        Instruction step(cpu, 0x8D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:228 JSL FIX_TARGET_NAME
    case 0xC2A797: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:229 LDA @LOCAL06
    case 0xC2A79B: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:230 LSR
    case 0xC2A79D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:231 JSR FIFTY_PERCENT_VARIANCE
    case 0xC2A79E: {
        Instruction step(cpu, 0x20, 0x006983u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:232 LDX #$00FF
    case 0xC2A7A1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:232 LDX #$00FF
    // Overlapping static entry reached from 0xC2A7A1.
    case 0xC2A7A3: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:233 JSR CALC_RESIST_DAMAGE
    case 0xC2A7A4: {
        Instruction step(cpu, 0x20, 0x0080CBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:235 LDA @LOCAL05
    case 0xC2A7A7: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:236 BEQ @UNKNOWN20
    case 0xC2A7A9: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:237 LDA @LOCAL05
    case 0xC2A7AB: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:238 STA CURRENT_TARGET
    case 0xC2A7AD: {
        Instruction step(cpu, 0x8D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:239 JSL FIX_TARGET_NAME
    case 0xC2A7B0: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:240 LDA @LOCAL06
    case 0xC2A7B4: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:241 LSR
    case 0xC2A7B6: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:242 JSR FIFTY_PERCENT_VARIANCE
    case 0xC2A7B7: {
        Instruction step(cpu, 0x20, 0x006983u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:243 LDX #$00FF
    case 0xC2A7BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:243 LDX #$00FF
    // Overlapping static entry reached from 0xC2A7BA.
    case 0xC2A7BC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:244 JSR CALC_RESIST_DAMAGE
    case 0xC2A7BD: {
        Instruction step(cpu, 0x20, 0x0080CBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:246 LDY @LOCAL03
    case 0xC2A7C0: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:247 STY CURRENT_TARGET
    case 0xC2A7C2: {
        Instruction step(cpu, 0x8C, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/bomb_common.asm:248 JSL FIX_TARGET_NAME
    case 0xC2A7C5: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/bomb_common.asm:249 END_C_FUNCTION
    case 0xC2A7C9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/bomb_common.asm:249 END_C_FUNCTION
    case 0xC2A7CA: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
