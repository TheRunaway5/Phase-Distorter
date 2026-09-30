// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/master_barf_death.asm
bool resume_battle_actions_master_barf_death(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/master_barf_death.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29285: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/master_barf_death.asm:9 END_STACK_VARS
    case 0xC29287: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/master_barf_death.asm:9 END_STACK_VARS
    case 0xC29288: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/master_barf_death.asm:9 END_STACK_VARS
    case 0xC29289: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/master_barf_death.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC29289.
    case 0xC2928B: {
        Instruction step(cpu, 0xFF, 0x72AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/master_barf_death.asm:9 END_STACK_VARS
    case 0xC2928C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:10 LDA CURRENT_ATTACKER
    case 0xC2928D: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:10 LDA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2928B.
    case 0xC2928F: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:11 STA @VIRTUAL04
    case 0xC29290: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:12 LDA CURRENT_TARGET
    case 0xC29292: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:13 STA @VIRTUAL02
    case 0xC29295: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:14 STA @LOCAL03
    case 0xC29297: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:15 JSL REDIRECT_HIDE_HPPP_WINDOWS
    case 0xC29299: {
        Instruction step(cpu, 0x22, 0xC1DB1Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:16 LDA #PARTY_MEMBER::POO
    case 0xC2929D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:16 LDA #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC2929D.
    case 0xC2929F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:17 JSL ADD_CHAR_TO_PARTY
    case 0xC292A0: {
        Instruction step(cpu, 0x22, 0xC227C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:18 LDA #0
    case 0xC292A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:18 LDA #0
    // Overlapping static entry reached from 0xC292A4.
    case 0xC292A6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:19 STA @LOCAL02
    case 0xC292A7: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:20 BRA @UNKNOWN7
    case 0xC292A9: {
        Instruction step(cpu, 0x80, 0x000068u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:22 LDA @LOCAL02
    case 0xC292AB: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:23 LDY #.SIZEOF(battler)
    case 0xC292AD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:23 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC292AD.
    case 0xC292AF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:24 JSL MULT168
    case 0xC292B0: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:25 TAX
    case 0xC292B4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:26 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC292B5: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:27 AND #$00FF
    case 0xC292B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC292B8.
    case 0xC292BA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:28 BNE @UNKNOWN6
    case 0xC292BB: {
        Instruction step(cpu, 0xD0, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:29 TXA
    case 0xC292BD: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:30 CLC
    case 0xC292BE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:31 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC292BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:31 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC292BF.
    case 0xC292C1: {
        Instruction step(cpu, 0xA1, 0x0000A8u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:32 TAY
    case 0xC292C2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:33 STY @LOCAL02
    case 0xC292C3: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:34 TYX
    case 0xC292C5: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:35 LDA #PARTY_MEMBER::POO
    case 0xC292C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:35 LDA #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC292C6.
    case 0xC292C8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:36 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC292C9: {
        Instruction step(cpu, 0x22, 0xC2B8D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:37 LDY @LOCAL02
    case 0xC292CD: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:38 STY CURRENT_ATTACKER
    case 0xC292CF: {
        Instruction step(cpu, 0x8C, 0x00AB72u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:39 JSL REDIRECT_SHOW_HPPP_WINDOWS
    case 0xC292D2: {
        Instruction step(cpu, 0x22, 0xC1DB18u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:41 LDA #0
    case 0xC292D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:41 LDA #0
    // Overlapping static entry reached from 0xC292D6.
    case 0xC292D8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:42 STA @LOCAL02
    case 0xC292D9: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:46 BRA @UNKNOWN3
    case 0xC292DB: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:49 LDA @LOCAL02
    case 0xC292DD: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:50 CLC
    case 0xC292DF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:51 ADC #.LOWORD(GAME_STATE)
    case 0xC292E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:51 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC292E0.
    case 0xC292E2: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:52 TAX
    case 0xC292E3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:53 LDA a:game_state::party_members,X
    case 0xC292E4: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:57 AND #$00FF
    case 0xC292E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC292E7.
    case 0xC292E9: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:58 CMP #PARTY_MEMBER::POO
    case 0xC292EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:58 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC292EA.
    case 0xC292EC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:59 BNE @UNKNOWN2
    case 0xC292ED: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:61 LDA @LOCAL02
    case 0xC292EF: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:65 JSL REDIRECT_C43573
    case 0xC292F1: {
        Instruction step(cpu, 0x22, 0xC1DBA9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:66 BRA @UNKNOWN9
    case 0xC292F5: {
        Instruction step(cpu, 0x80, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:69 LDA @LOCAL02
    case 0xC292F7: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:70 INC
    case 0xC292F9: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:71 STA @LOCAL02
    case 0xC292FA: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:77 STA @VIRTUAL02
    case 0xC292FC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:81 LDA #TOTAL_PARTY_COUNT
    case 0xC292FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:81 LDA #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC292FE.
    case 0xC29300: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:82 CLC
    case 0xC29301: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:83 SBC @VIRTUAL02
    case 0xC29302: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/battle/actions/master_barf_death.asm:84 BRANCHGTS @UNKNOWN1
    case 0xC29304: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/battle/actions/master_barf_death.asm:84 BRANCHGTS @UNKNOWN1
    case 0xC29306: {
        Instruction step(cpu, 0x10, 0x0000D5u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/battle/actions/master_barf_death.asm:84 BRANCHGTS @UNKNOWN1
    case 0xC29308: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/battle/actions/master_barf_death.asm:84 BRANCHGTS @UNKNOWN1
    case 0xC2930A: {
        Instruction step(cpu, 0x30, 0x0000D1u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:85 BRA @UNKNOWN9
    case 0xC2930C: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:87 LDA @LOCAL02
    case 0xC2930E: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:88 INC
    case 0xC29310: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:89 STA @LOCAL02
    case 0xC29311: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:91 STA @VIRTUAL02
    case 0xC29313: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:92 LDA #BATTLER_COUNT
    case 0xC29315: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:92 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xC29315.
    case 0xC29317: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:93 CLC
    case 0xC29318: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:94 SBC @VIRTUAL02
    case 0xC29319: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/battle/actions/master_barf_death.asm:96 JUMPGTS @UNKNOWN0
    case 0xC2931B: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/battle/actions/master_barf_death.asm:96 JUMPGTS @UNKNOWN0
    case 0xC2931D: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/battle/actions/master_barf_death.asm:96 JUMPGTS @UNKNOWN0
    case 0xC2931F: {
        Instruction step(cpu, 0x4C, 0x0092ABu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/battle/actions/master_barf_death.asm:96 JUMPGTS @UNKNOWN0
    case 0xC29322: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/battle/actions/master_barf_death.asm:96 JUMPGTS @UNKNOWN0
    case 0xC29324: {
        Instruction step(cpu, 0x4C, 0x0092ABu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    case 0xC29327: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DDu : 0x002BDDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    // Overlapping static entry reached from 0xC29327.
    case 0xC29329: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    case 0xC2932A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    case 0xC2932C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    // Overlapping static entry reached from 0xC2932C.
    case 0xC2932E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    case 0xC2932F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/master_barf_death.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POO_BREAK_IN_2
    case 0xC29331: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:102 LDA #0
    case 0xC29335: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:102 LDA #0
    // Overlapping static entry reached from 0xC29335.
    case 0xC29337: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:103 JSL FIX_ATTACKER_NAME
    case 0xC29338: {
        Instruction step(cpu, 0x22, 0xC23AB9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:104 SEP #PROC_FLAGS::ACCUM8
    case 0xC2933C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:105 LDA #PSI::STARSTORM_ALPHA
    case 0xC2933E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000015u : 0x002215u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:106 JSL REDIRECT_C1ACF8
    case 0xC29340: {
        Instruction step(cpu, 0x22, 0xC1DB59u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:106 JSL REDIRECT_C1ACF8
    // Overlapping static entry reached from 0xC2933E.
    case 0xC29341: {
        Instruction step(cpu, 0x59, 0x00C1DBu, 3u, AddressMode::AbsoluteIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/master_barf_death.asm:107 MOVE_INT f:BATTLE_ACTION_TABLE+364, @VIRTUAL06
    case 0xC29344: {
        Instruction step(cpu, 0xAF, 0xD58C8Au, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/master_barf_death.asm:107 MOVE_INT f:BATTLE_ACTION_TABLE+364, @VIRTUAL06
    case 0xC29348: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/master_barf_death.asm:107 MOVE_INT f:BATTLE_ACTION_TABLE+364, @VIRTUAL06
    case 0xC2934A: {
        Instruction step(cpu, 0xAF, 0xD58C8Cu, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/master_barf_death.asm:107 MOVE_INT f:BATTLE_ACTION_TABLE+364, @VIRTUAL06
    case 0xC2934E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/master_barf_death.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC29350: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/master_barf_death.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC29352: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/master_barf_death.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC29354: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/master_barf_death.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC29356: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:109 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC29358: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:110 LDY #0
    case 0xC2935C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:110 LDY #0
    // Overlapping static entry reached from 0xC2935C.
    case 0xC2935E: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:111 STY @LOCAL01
    case 0xC2935F: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:112 BRA @UNKNOWN12
    case 0xC29361: {
        Instruction step(cpu, 0x80, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:114 TYA
    case 0xC29363: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:115 LDY #.SIZEOF(battler)
    case 0xC29364: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:115 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC29364.
    case 0xC29366: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:116 JSL MULT168
    case 0xC29367: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:118 TAX
    case 0xC2936B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:119 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2936C: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:120 AND #$00FF
    case 0xC2936F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:120 AND #$00FF
    // Overlapping static entry reached from 0xC2936F.
    case 0xC29371: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:121 BEQ @UNKNOWN11
    case 0xC29372: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:122 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC29374: {
        Instruction step(cpu, 0xBD, 0x00A1BCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:123 AND #$00FF
    case 0xC29377: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:123 AND #$00FF
    // Overlapping static entry reached from 0xC29377.
    case 0xC29379: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:124 CMP #1
    case 0xC2937A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:124 CMP #1
    // Overlapping static entry reached from 0xC2937A.
    case 0xC2937C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:125 BNE @UNKNOWN11
    case 0xC2937D: {
        Instruction step(cpu, 0xD0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:126 TXA
    case 0xC2937F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:127 CLC
    case 0xC29380: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:128 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC29381: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:128 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC29381.
    case 0xC29383: {
        Instruction step(cpu, 0xA1, 0x00008Du, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:129 STA CURRENT_TARGET
    case 0xC29384: {
        Instruction step(cpu, 0x8D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:129 STA CURRENT_TARGET
    // Overlapping static entry reached from 0xC29383.
    case 0xC29385: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:130 JSL FIX_TARGET_NAME
    case 0xC29387: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:131 LDA #$0168
    case 0xC2938B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x000168u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:131 LDA #$0168
    // Overlapping static entry reached from 0xC2938B.
    case 0xC2938D: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:132 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2938E: {
        Instruction step(cpu, 0x20, 0x006A3Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:132 JSR TWENTY_FIVE_PERCENT_VARIANCE
    // Overlapping static entry reached from 0xC2938D.
    case 0xC2938F: {
        Instruction step(cpu, 0x3C, 0x00AA6Au, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:133 TAX
    case 0xC29391: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:134 LDA CURRENT_TARGET
    case 0xC29392: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:135 JSR CALC_DAMAGE
    case 0xC29395: {
        Instruction step(cpu, 0x20, 0x007E46u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:137 LDY @LOCAL01
    case 0xC29398: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:138 INY
    case 0xC2939A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:139 STY @LOCAL01
    case 0xC2939B: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:141 STY @VIRTUAL02
    case 0xC2939D: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:142 LDA #BATTLER_COUNT
    case 0xC2939F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:142 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2939F.
    case 0xC293A1: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:143 CLC
    case 0xC293A2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:144 SBC @VIRTUAL02
    case 0xC293A3: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/battle/actions/master_barf_death.asm:145 BRANCHGTS @UNKNOWN10
    case 0xC293A5: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/battle/actions/master_barf_death.asm:145 BRANCHGTS @UNKNOWN10
    case 0xC293A7: {
        Instruction step(cpu, 0x10, 0x0000BAu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/battle/actions/master_barf_death.asm:145 BRANCHGTS @UNKNOWN10
    case 0xC293A9: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/battle/actions/master_barf_death.asm:145 BRANCHGTS @UNKNOWN10
    case 0xC293AB: {
        Instruction step(cpu, 0x30, 0x0000B6u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:146 LDA @VIRTUAL04
    case 0xC293AD: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:147 STA CURRENT_ATTACKER
    case 0xC293AF: {
        Instruction step(cpu, 0x8D, 0x00AB72u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:148 LDA @LOCAL03
    case 0xC293B2: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:149 STA @VIRTUAL02
    case 0xC293B4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:150 STA CURRENT_TARGET
    case 0xC293B6: {
        Instruction step(cpu, 0x8D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:151 LDA #0
    case 0xC293B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:151 LDA #0
    // Overlapping static entry reached from 0xC293B9.
    case 0xC293BB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:152 JSL FIX_ATTACKER_NAME
    case 0xC293BC: {
        Instruction step(cpu, 0x22, 0xC23AB9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/master_barf_death.asm:153 JSL FIX_TARGET_NAME
    case 0xC293C0: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/master_barf_death.asm:154 END_C_FUNCTION
    case 0xC293C4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/master_barf_death.asm:154 END_C_FUNCTION
    case 0xC293C5: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
