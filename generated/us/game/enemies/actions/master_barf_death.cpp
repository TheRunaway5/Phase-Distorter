// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/master_barf_death.asm
bool resume_battle_actions_master_barf_death(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/master_barf_death.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC292EE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/master_barf_death.asm:9 END_STACK_VARS
    case 0xC292F0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/master_barf_death.asm:9 END_STACK_VARS
    case 0xC292F1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/master_barf_death.asm:9 END_STACK_VARS
    case 0xC292F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/master_barf_death.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC292F2.
    case 0xC292F4: {
        Instruction step(cpu, 0xFF, 0x70AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/master_barf_death.asm:9 END_STACK_VARS
    case 0xC292F5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:10 LDA CURRENT_ATTACKER
    case 0xC292F6: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:10 LDA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC292F4.
    case 0xC292F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x000485u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:11 STA @VIRTUAL04
    case 0xC292F9: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:11 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC292F8.
    case 0xC292FA: {
        Instruction step(cpu, 0x04, 0x0000ADu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:12 LDA CURRENT_TARGET
    case 0xC292FB: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:12 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC292FA.
    case 0xC292FC: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:13 STA @VIRTUAL02
    case 0xC292FE: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:14 STA @LOCAL03
    case 0xC29300: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:15 JSL REDIRECT_HIDE_HPPP_WINDOWS
    case 0xC29302: {
        Instruction step(cpu, 0x22, 0xC1DD41u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:16 LDA #PARTY_MEMBER::POO
    case 0xC29306: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:16 LDA #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC29306.
    case 0xC29308: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:17 JSL ADD_CHAR_TO_PARTY
    case 0xC29309: {
        Instruction step(cpu, 0x22, 0xC228F8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:18 LDA #0
    case 0xC2930D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:18 LDA #0
    // Overlapping static entry reached from 0xC2930D.
    case 0xC2930F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:19 STA @LOCAL02
    case 0xC29310: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:20 BRA @UNKNOWN7
    case 0xC29312: {
        Instruction step(cpu, 0x80, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:22 LDA @LOCAL02
    case 0xC29314: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:23 LDY #.SIZEOF(battler)
    case 0xC29316: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:23 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC29316.
    case 0xC29318: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:24 JSL MULT168
    case 0xC29319: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:25 TAX
    case 0xC2931D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:26 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2931E: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:27 AND #$00FF
    case 0xC29321: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC29321.
    case 0xC29323: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:28 BNE @UNKNOWN6
    case 0xC29324: {
        Instruction step(cpu, 0xD0, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:29 TXA
    case 0xC29326: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:30 CLC
    case 0xC29327: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:31 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC29328: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:31 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC29328.
    case 0xC2932A: {
        Instruction step(cpu, 0x9F, 0x1484A8u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:32 TAY
    case 0xC2932B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:33 STY @LOCAL02
    case 0xC2932C: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:34 TYX
    case 0xC2932E: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:35 LDA #PARTY_MEMBER::POO
    case 0xC2932F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:35 LDA #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC2932F.
    case 0xC29331: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:36 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC29332: {
        Instruction step(cpu, 0x22, 0xC2B930u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:37 LDY @LOCAL02
    case 0xC29336: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:38 STY CURRENT_ATTACKER
    case 0xC29338: {
        Instruction step(cpu, 0x8C, 0x00A970u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:39 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC2933B: {
        Instruction step(cpu, 0x22, 0xC1DD3Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:44 LDX #0
    case 0xC2933F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:44 LDX #0
    // Overlapping static entry reached from 0xC2933F.
    case 0xC29341: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:46 BRA @UNKNOWN3
    case 0xC29342: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:55 LDA GAME_STATE + game_state::party_members,X
    case 0xC29344: {
        Instruction step(cpu, 0xBD, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:57 AND #$00FF
    case 0xC29347: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC29347.
    case 0xC29349: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:58 CMP #PARTY_MEMBER::POO
    case 0xC2934A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:58 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC2934A.
    case 0xC2934C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:59 BNE @UNKNOWN2
    case 0xC2934D: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:63 TXA
    case 0xC2934F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:65 JSL REDIRECT_C43573
    case 0xC29350: {
        Instruction step(cpu, 0x22, 0xC1DDCCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:66 BRA @UNKNOWN9
    case 0xC29354: {
        Instruction step(cpu, 0x80, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:73 INX
    case 0xC29356: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:79 STX @VIRTUAL02
    case 0xC29357: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:81 LDA #TOTAL_PARTY_COUNT
    case 0xC29359: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:81 LDA #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC29359.
    case 0xC2935B: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:82 CLC
    case 0xC2935C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:83 SBC @VIRTUAL02
    case 0xC2935D: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/battle/actions/master_barf_death.asm:84 BRANCHGTS @UNKNOWN1
    case 0xC2935F: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/battle/actions/master_barf_death.asm:84 BRANCHGTS @UNKNOWN1
    case 0xC29361: {
        Instruction step(cpu, 0x10, 0x0000E1u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/battle/actions/master_barf_death.asm:84 BRANCHGTS @UNKNOWN1
    case 0xC29363: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/battle/actions/master_barf_death.asm:84 BRANCHGTS @UNKNOWN1
    case 0xC29365: {
        Instruction step(cpu, 0x30, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:85 BRA @UNKNOWN9
    case 0xC29367: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:87 LDA @LOCAL02
    case 0xC29369: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:88 INC
    case 0xC2936B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:89 STA @LOCAL02
    case 0xC2936C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:91 STA @VIRTUAL02
    case 0xC2936E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:92 LDA #BATTLER_COUNT
    case 0xC29370: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:92 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xC29370.
    case 0xC29372: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:93 CLC
    case 0xC29373: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:94 SBC @VIRTUAL02
    case 0xC29374: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/battle/actions/master_barf_death.asm:98 BRANCHGTS @UNKNOWN0
    case 0xC29376: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/battle/actions/master_barf_death.asm:98 BRANCHGTS @UNKNOWN0
    case 0xC29378: {
        Instruction step(cpu, 0x10, 0x00009Au, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/battle/actions/master_barf_death.asm:98 BRANCHGTS @UNKNOWN0
    case 0xC2937A: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/battle/actions/master_barf_death.asm:98 BRANCHGTS @UNKNOWN0
    case 0xC2937C: {
        Instruction step(cpu, 0x30, 0x000096u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    case 0xC2937E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Bu : 0x00743Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    // Overlapping static entry reached from 0xC2937E.
    case 0xC29380: {
        Instruction step(cpu, 0x74, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    case 0xC29381: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    // Overlapping static entry reached from 0xC29380.
    case 0xC29382: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    case 0xC29383: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    // Overlapping static entry reached from 0xC29383.
    case 0xC29385: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    case 0xC29386: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    case 0xC29388: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:102 LDA #0
    case 0xC2938C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:102 LDA #0
    // Overlapping static entry reached from 0xC2938C.
    case 0xC2938E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:103 JSL FIX_ATTACKER_NAME
    case 0xC2938F: {
        Instruction step(cpu, 0x22, 0xC23BCFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:104 SEP #PROC_FLAGS::ACCUM8
    case 0xC29393: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:105 LDA #PSI::STARSTORM_ALPHA
    case 0xC29395: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000015u : 0x002215u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:106 JSL REDIRECT_C1ACF8
    case 0xC29397: {
        Instruction step(cpu, 0x22, 0xC1DD7Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:106 JSL REDIRECT_C1ACF8
    // Overlapping static entry reached from 0xC29395.
    case 0xC29398: {
        Instruction step(cpu, 0x7C, 0x00C1DDu, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/master_barf_death.asm:107 MOVE_INT f:BATTLE_ACTION_TABLE+364, @VIRTUAL06
    case 0xC2939B: {
        Instruction step(cpu, 0xAF, 0xD57CD4u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/master_barf_death.asm:107 MOVE_INT f:BATTLE_ACTION_TABLE+364, @VIRTUAL06
    case 0xC2939F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/master_barf_death.asm:107 MOVE_INT f:BATTLE_ACTION_TABLE+364, @VIRTUAL06
    case 0xC293A1: {
        Instruction step(cpu, 0xAF, 0xD57CD6u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/master_barf_death.asm:107 MOVE_INT f:BATTLE_ACTION_TABLE+364, @VIRTUAL06
    case 0xC293A5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/master_barf_death.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC293A7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/master_barf_death.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC293A9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/master_barf_death.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC293AB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/master_barf_death.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC293AD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:109 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC293AF: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:110 LDY #0
    case 0xC293B3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:110 LDY #0
    // Overlapping static entry reached from 0xC293B3.
    case 0xC293B5: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:111 STY @LOCAL01
    case 0xC293B6: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:112 BRA @UNKNOWN12
    case 0xC293B8: {
        Instruction step(cpu, 0x80, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:114 TYA
    case 0xC293BA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:115 LDY #.SIZEOF(battler)
    case 0xC293BB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:115 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC293BB.
    case 0xC293BD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:116 JSL MULT168
    case 0xC293BE: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:118 TAX
    case 0xC293C2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:119 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC293C3: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:120 AND #$00FF
    case 0xC293C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:120 AND #$00FF
    // Overlapping static entry reached from 0xC293C6.
    case 0xC293C8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:121 BEQ @UNKNOWN11
    case 0xC293C9: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:122 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC293CB: {
        Instruction step(cpu, 0xBD, 0x009FBAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:123 AND #$00FF
    case 0xC293CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:123 AND #$00FF
    // Overlapping static entry reached from 0xC293CE.
    case 0xC293D0: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:124 CMP #1
    case 0xC293D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:124 CMP #1
    // Overlapping static entry reached from 0xC293D1.
    case 0xC293D3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:125 BNE @UNKNOWN11
    case 0xC293D4: {
        Instruction step(cpu, 0xD0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:126 TXA
    case 0xC293D6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:127 CLC
    case 0xC293D7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:128 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC293D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:128 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC293D8.
    case 0xC293DA: {
        Instruction step(cpu, 0x9F, 0xA9728Du, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:129 STA CURRENT_TARGET
    case 0xC293DB: {
        Instruction step(cpu, 0x8D, 0x00A972u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:130 JSL FIX_TARGET_NAME
    case 0xC293DE: {
        Instruction step(cpu, 0x22, 0xC23D05u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:131 LDA #$0168
    case 0xC293E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x000168u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:131 LDA #$0168
    // Overlapping static entry reached from 0xC293E2.
    case 0xC293E4: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:132 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC293E5: {
        Instruction step(cpu, 0x20, 0x006AFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:132 JSR TWENTY_FIVE_PERCENT_VARIANCE
    // Overlapping static entry reached from 0xC293E4.
    case 0xC293E6: {
        Instruction step(cpu, 0xFD, 0x00AA6Au, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:133 TAX
    case 0xC293E8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:134 LDA CURRENT_TARGET
    case 0xC293E9: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:135 JSR CALC_DAMAGE
    case 0xC293EC: {
        Instruction step(cpu, 0x20, 0x007EAFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:137 LDY @LOCAL01
    case 0xC293EF: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:138 INY
    case 0xC293F1: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:139 STY @LOCAL01
    case 0xC293F2: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:141 STY @VIRTUAL02
    case 0xC293F4: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:142 LDA #BATTLER_COUNT
    case 0xC293F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:142 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xC293F6.
    case 0xC293F8: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:143 CLC
    case 0xC293F9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:144 SBC @VIRTUAL02
    case 0xC293FA: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/battle/actions/master_barf_death.asm:145 BRANCHGTS @UNKNOWN10
    case 0xC293FC: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/battle/actions/master_barf_death.asm:145 BRANCHGTS @UNKNOWN10
    case 0xC293FE: {
        Instruction step(cpu, 0x10, 0x0000BAu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/battle/actions/master_barf_death.asm:145 BRANCHGTS @UNKNOWN10
    case 0xC29400: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/battle/actions/master_barf_death.asm:145 BRANCHGTS @UNKNOWN10
    case 0xC29402: {
        Instruction step(cpu, 0x30, 0x0000B6u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:146 LDA @VIRTUAL04
    case 0xC29404: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:147 STA CURRENT_ATTACKER
    case 0xC29406: {
        Instruction step(cpu, 0x8D, 0x00A970u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:148 LDA @LOCAL03
    case 0xC29409: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:149 STA @VIRTUAL02
    case 0xC2940B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:150 STA CURRENT_TARGET
    case 0xC2940D: {
        Instruction step(cpu, 0x8D, 0x00A972u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:150 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC29488.
    case 0xC2940F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:151 LDA #0
    case 0xC29410: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:151 LDA #0
    // Overlapping static entry reached from 0xC2940F.
    case 0xC29411: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:151 LDA #0
    // Overlapping static entry reached from 0xC29410.
    case 0xC29412: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:152 JSL FIX_ATTACKER_NAME
    case 0xC29413: {
        Instruction step(cpu, 0x22, 0xC23BCFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:153 JSL FIX_TARGET_NAME
    case 0xC29417: {
        Instruction step(cpu, 0x22, 0xC23D05u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/master_barf_death.asm:154 END_C_FUNCTION
    case 0xC2941B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/master_barf_death.asm:154 END_C_FUNCTION
    case 0xC2941C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
