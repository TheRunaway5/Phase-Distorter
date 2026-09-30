// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/generate_psi_list.asm
bool resume_battle_generate_psi_list(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/generate_psi_list.asm:3 BEGIN_C_FUNCTION
    case 0xC1C452: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C454: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C455: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C456: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C457: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x00FFDCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C457.
    case 0xC1C459: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C45A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C45B: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:18 TAX
    case 0xC1C45C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C45D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:20 LDA @PARAM02
    case 0xC1C45F: {
        Instruction step(cpu, 0xA5, 0x000033u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:21 STA @LOCAL08
    case 0xC1C461: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:22 LDA @PARAM01
    case 0xC1C463: {
        Instruction step(cpu, 0xA5, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:23 STA @VIRTUAL01
    case 0xC1C465: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC1C467: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:25 TXA
    case 0xC1C469: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:26 DEC
    case 0xC1C46A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:27 STA @VIRTUAL04
    case 0xC1C46B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:28 STA @LOCAL07
    case 0xC1C46D: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:29 JSR SET_INSTANT_PRINTING
    case 0xC1C46F: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:30 JSR UNKNOWN_C11383
    case 0xC1C473: {
        Instruction step(cpu, 0x20, 0x001383u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:31 STZ @LOCAL06
    case 0xC1C476: {
        Instruction step(cpu, 0x64, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:32 LDA @VIRTUAL04
    case 0xC1C478: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:33 CMP #PARTY_MEMBER::POO - 1
    case 0xC1C47A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:33 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC1C47A.
    case 0xC1C47C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:34 BNEL @UNKNOWN5
    case 0xC1C47D: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:34 BNEL @UNKNOWN5
    case 0xC1C47F: {
        Instruction step(cpu, 0x4C, 0x00C5B5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:35 LDA @VIRTUAL01
    case 0xC1C482: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:36 AND #$00FF
    case 0xC1C484: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC1C484.
    case 0xC1C486: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:37 AND #PSI_USABILITY::BATTLE
    case 0xC1C487: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:37 AND #PSI_USABILITY::BATTLE
    // Overlapping static entry reached from 0xC1C487.
    case 0xC1C489: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:38 BEQL @UNKNOWN5
    case 0xC1C48A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:38 BEQL @UNKNOWN5
    case 0xC1C48C: {
        Instruction step(cpu, 0x4C, 0x00C5B5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:39 LDA @LOCAL08
    case 0xC1C48F: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:40 AND #$00FF
    case 0xC1C491: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC1C491.
    case 0xC1C493: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:41 AND #PSI_CATEGORY::OFFENSE
    case 0xC1C494: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:41 AND #PSI_CATEGORY::OFFENSE
    // Overlapping static entry reached from 0xC1C494.
    case 0xC1C496: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:42 BEQL @UNKNOWN5
    case 0xC1C497: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:42 BEQL @UNKNOWN5
    case 0xC1C499: {
        Instruction step(cpu, 0x4C, 0x00C5B5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:43 LDA GAME_STATE+game_state::party_psi
    case 0xC1C49C: {
        Instruction step(cpu, 0xAD, 0x009839u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:44 AND #$00FF
    case 0xC1C49F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC1C49F.
    case 0xC1C4A1: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:45 AND #PARTY_PSI_FLAGS::STARSTORM_ALPHA
    case 0xC1C4A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:45 AND #PARTY_PSI_FLAGS::STARSTORM_ALPHA
    // Overlapping static entry reached from 0xC1C4A2.
    case 0xC1C4A4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:46 BEQL @UNKNOWN4
    case 0xC1C4A5: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:46 BEQL @UNKNOWN4
    case 0xC1C4A7: {
        Instruction step(cpu, 0x4C, 0x00C53Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C4AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Bu : 0x008B8Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C4AA.
    case 0xC1C4AC: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C4AD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C4AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C4AF.
    case 0xC1C4B1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C4B2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C4B4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C4B6: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C4B8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C4BA: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:49 LDA #psi_ability::menu_y
    case 0xC1C4BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:49 LDA #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C4BC.
    case 0xC1C4BE: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C4BF: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C4C1: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C4C3: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C4C5: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:51 CLC
    case 0xC1C4C7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:52 ADC @VIRTUAL0A
    case 0xC1C4C8: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:53 STA @VIRTUAL0A
    case 0xC1C4CA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:54 LDA [@VIRTUAL0A]
    case 0xC1C4CC: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:55 AND #$00FF
    case 0xC1C4CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC1C4CE.
    case 0xC1C4D0: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:56 TAX
    case 0xC1C4D1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:57 LDA #0
    case 0xC1C4D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:57 LDA #0
    // Overlapping static entry reached from 0xC1C4D2.
    case 0xC1C4D4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:58 JSR UNKNOWN_C438A5
    case 0xC1C4D5: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:59 LDA [@VIRTUAL06]
    case 0xC1C4D9: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:60 AND #$00FF
    case 0xC1C4DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC1C4DB.
    case 0xC1C4DD: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:61 JSR GET_PSI_NAME
    case 0xC1C4DE: {
        Instruction step(cpu, 0x20, 0x00C403u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C4E1: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C4E3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C4E5: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C4E7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C4E9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:64 LDY #psi_ability::level
    case 0xC1C4EB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:64 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C4EB.
    case 0xC1C4ED: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:65 LDA [@VIRTUAL06],Y
    case 0xC1C4EE: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC1C4F0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:67 AND #$00FF
    case 0xC1C4F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC1C4F2.
    case 0xC1C4F4: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:68 DEC
    case 0xC1C4F5: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:69 ASL
    case 0xC1C4F6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:70 PHA
    case 0xC1C4F7: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C4F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x00F112u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C4F8.
    case 0xC1C4FA: {
        Instruction step(cpu, 0xF1, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C4FB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C4FA.
    case 0xC1C4FC: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C4FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C4FC.
    case 0xC1C4FE: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C4FD.
    case 0xC1C4FF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C500: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:72 PLA
    case 0xC1C502: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:73 CLC
    case 0xC1C503: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:74 ADC @VIRTUAL06
    case 0xC1C504: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:75 STA @VIRTUAL06
    case 0xC1C506: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:76 STA @LOCAL00
    case 0xC1C508: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:77 LDA @VIRTUAL06+2
    case 0xC1C50A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:78 STA @LOCAL00+2
    case 0xC1C50C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C50E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C50E.
    case 0xC1C510: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C511: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C513: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C513.
    case 0xC1C515: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C516: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:80 LDA [@VIRTUAL0A]
    case 0xC1C518: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:81 AND #$00FF
    case 0xC1C51A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC1C51A.
    case 0xC1C51C: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:82 TAY
    case 0xC1C51D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:83 STY @LOCAL04
    case 0xC1C51E: {
        Instruction step(cpu, 0x84, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C520: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C522: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C524: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C526: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C528: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:86 LDY #psi_ability::menu_x
    case 0xC1C52A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:86 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C52A.
    case 0xC1C52C: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:87 LDA [@VIRTUAL06],Y
    case 0xC1C52D: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC1C52F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:89 AND #$00FF
    case 0xC1C531: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC1C531.
    case 0xC1C533: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:90 TAX
    case 0xC1C534: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:91 LDA #PSI::STARSTORM_ALPHA
    case 0xC1C535: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000015u : 0x000015u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:91 LDA #PSI::STARSTORM_ALPHA
    // Overlapping static entry reached from 0xC1C535.
    case 0xC1C537: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:92 LDY @LOCAL04
    case 0xC1C538: {
        Instruction step(cpu, 0xA4, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:93 JSR UNKNOWN_C1153B
    case 0xC1C53A: {
        Instruction step(cpu, 0x20, 0x00153Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:95 LDA GAME_STATE+game_state::party_psi
    case 0xC1C53D: {
        Instruction step(cpu, 0xAD, 0x009839u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:96 AND #$00FF
    case 0xC1C540: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC1C540.
    case 0xC1C542: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:97 AND #PARTY_PSI_FLAGS::STARSTORM_OMEGA
    case 0xC1C543: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:97 AND #PARTY_PSI_FLAGS::STARSTORM_OMEGA
    // Overlapping static entry reached from 0xC1C543.
    case 0xC1C545: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:98 BEQ @UNKNOWN5
    case 0xC1C546: {
        Instruction step(cpu, 0xF0, 0x00006Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C548: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Au : 0x008B9Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C548.
    case 0xC1C54A: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C54B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C54D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C54D.
    case 0xC1C54F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C550: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:103 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C552: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:103 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C554: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:103 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C556: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:103 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C558: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C55A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:106 LDY #psi_ability::level
    case 0xC1C55C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:106 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C55C.
    case 0xC1C55E: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:107 LDA [@VIRTUAL06],Y
    case 0xC1C55F: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC1C561: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:109 AND #$00FF
    case 0xC1C563: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:109 AND #$00FF
    // Overlapping static entry reached from 0xC1C563.
    case 0xC1C565: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:110 DEC
    case 0xC1C566: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:111 ASL
    case 0xC1C567: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:121 PHA
    case 0xC1C568: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C569: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x00F112u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C569.
    case 0xC1C56B: {
        Instruction step(cpu, 0xF1, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C56C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C56B.
    case 0xC1C56D: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C56E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C56D.
    case 0xC1C56F: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C56E.
    case 0xC1C570: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:122 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C571: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:123 PLA
    case 0xC1C573: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:124 CLC
    case 0xC1C574: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:125 ADC @VIRTUAL06
    case 0xC1C575: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:126 STA @VIRTUAL06
    case 0xC1C577: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:127 STA @LOCAL00
    case 0xC1C579: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:128 LDA @VIRTUAL06+2
    case 0xC1C57B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:129 STA @LOCAL00+2
    case 0xC1C57D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:130 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C57F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:130 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C57F.
    case 0xC1C581: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:130 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C582: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:130 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C584: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:130 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C584.
    case 0xC1C586: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:130 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C587: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:131 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C589: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:131 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C58B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:131 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C58D: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:131 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C58F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:133 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C591: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:134 LDY #psi_ability::menu_y
    case 0xC1C593: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:134 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C593.
    case 0xC1C595: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:135 LDA [@VIRTUAL06],Y
    case 0xC1C596: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:136 REP #PROC_FLAGS::ACCUM8
    case 0xC1C598: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:137 AND #$00FF
    case 0xC1C59A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:137 AND #$00FF
    // Overlapping static entry reached from 0xC1C59A.
    case 0xC1C59C: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:138 TAY
    case 0xC1C59D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:139 STY @LOCAL04
    case 0xC1C59E: {
        Instruction step(cpu, 0x84, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:140 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C5A0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:141 LDY #psi_ability::menu_x
    case 0xC1C5A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:141 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C5A2.
    case 0xC1C5A4: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:142 LDA [@VIRTUAL06],Y
    case 0xC1C5A5: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:143 REP #PROC_FLAGS::ACCUM8
    case 0xC1C5A7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:144 AND #$00FF
    case 0xC1C5A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:144 AND #$00FF
    // Overlapping static entry reached from 0xC1C5A9.
    case 0xC1C5AB: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:145 TAX
    case 0xC1C5AC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:146 LDA #PSI::STARSTORM_OMEGA
    case 0xC1C5AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:146 LDA #PSI::STARSTORM_OMEGA
    // Overlapping static entry reached from 0xC1C5AD.
    case 0xC1C5AF: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:147 LDY @LOCAL04
    case 0xC1C5B0: {
        Instruction step(cpu, 0xA4, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:148 JSR UNKNOWN_C1153B
    case 0xC1C5B2: {
        Instruction step(cpu, 0x20, 0x00153Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:150 LDA #1
    case 0xC1C5B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:150 LDA #1
    // Overlapping static entry reached from 0xC1C5B5.
    case 0xC1C5B7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:151 STA @VIRTUAL02
    case 0xC1C5B8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:152 JMP @UNKNOWN17
    case 0xC1C5BA: {
        Instruction step(cpu, 0x4C, 0x00C6E4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C5BD: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C5BF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C5C1: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C5C3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:156 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C5C5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:156 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C5C7: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:156 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C5C9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:156 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C5CB: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:158 LDA @LOCAL07
    case 0xC1C5CD: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:159 STA @VIRTUAL04
    case 0xC1C5CF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:160 BEQ @UNKNOWN7
    case 0xC1C5D1: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:161 CMP #PARTY_MEMBER::PAULA - 1
    case 0xC1C5D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:161 CMP #PARTY_MEMBER::PAULA - 1
    // Overlapping static entry reached from 0xC1C5D3.
    case 0xC1C5D5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:162 BEQ @UNKNOWN8
    case 0xC1C5D6: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:163 CMP #PARTY_MEMBER::POO - 1
    case 0xC1C5D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:163 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC1C5D8.
    case 0xC1C5DA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:164 BEQ @UNKNOWN9
    case 0xC1C5DB: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:165 BRA @UNKNOWN10
    case 0xC1C5DD: {
        Instruction step(cpu, 0x80, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:167 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C5DF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:168 LDY #psi_ability::ness_level
    case 0xC1C5E1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:168 LDY #psi_ability::ness_level
    // Overlapping static entry reached from 0xC1C5E1.
    case 0xC1C5E3: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:169 LDA [@VIRTUAL0A],Y
    case 0xC1C5E4: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:170 STA @VIRTUAL00
    case 0xC1C5E6: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:171 STA @LOCAL03
    case 0xC1C5E8: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:172 BRA @UNKNOWN10
    case 0xC1C5EA: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C5EC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:175 LDY #psi_ability::paula_level
    case 0xC1C5EE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:175 LDY #psi_ability::paula_level
    // Overlapping static entry reached from 0xC1C5EE.
    case 0xC1C5F0: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:176 LDA [@VIRTUAL0A],Y
    case 0xC1C5F1: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:177 STA @VIRTUAL00
    case 0xC1C5F3: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:178 STA @LOCAL03
    case 0xC1C5F5: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:179 BRA @UNKNOWN10
    case 0xC1C5F7: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C5F9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:182 LDY #psi_ability::poo_level
    case 0xC1C5FB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:182 LDY #psi_ability::poo_level
    // Overlapping static entry reached from 0xC1C5FB.
    case 0xC1C5FD: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:183 LDA [@VIRTUAL0A],Y
    case 0xC1C5FE: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:184 STA @VIRTUAL00
    case 0xC1C600: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:185 STA @LOCAL03
    case 0xC1C602: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:187 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C604: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:188 LDA @LOCAL03
    case 0xC1C606: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:189 STA @VIRTUAL00
    case 0xC1C608: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:190 REP #PROC_FLAGS::ACCUM8
    case 0xC1C60A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:191 LDA @VIRTUAL00
    case 0xC1C60C: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:192 AND #$00FF
    case 0xC1C60E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:192 AND #$00FF
    // Overlapping static entry reached from 0xC1C60E.
    case 0xC1C610: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:193 BEQL @UNKNOWN16
    case 0xC1C611: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:193 BEQL @UNKNOWN16
    case 0xC1C613: {
        Instruction step(cpu, 0x4C, 0x00C6E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:194 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C616: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:195 LDY #psi_ability::usability
    case 0xC1C618: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:195 LDY #psi_ability::usability
    // Overlapping static entry reached from 0xC1C618.
    case 0xC1C61A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:196 LDA [@VIRTUAL06],Y
    case 0xC1C61B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:197 AND @VIRTUAL01
    case 0xC1C61D: {
        Instruction step(cpu, 0x25, 0x000001u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:198 REP #PROC_FLAGS::ACCUM8
    case 0xC1C61F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:199 AND #$00FF
    case 0xC1C621: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:199 AND #$00FF
    // Overlapping static entry reached from 0xC1C621.
    case 0xC1C623: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:200 BEQL @UNKNOWN16
    case 0xC1C624: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:200 BEQL @UNKNOWN16
    case 0xC1C626: {
        Instruction step(cpu, 0x4C, 0x00C6E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:201 LDA @VIRTUAL04
    case 0xC1C629: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:202 LDY #.SIZEOF(char_struct)
    case 0xC1C62B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:202 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1C62B.
    case 0xC1C62D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:203 JSL MULT168
    case 0xC1C62E: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:204 TAX
    case 0xC1C632: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:205 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C633: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:206 LDA @VIRTUAL00
    case 0xC1C635: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:207 CMP PARTY_CHARACTERS+char_struct::level,X
    case 0xC1C637: {
        Instruction step(cpu, 0xDD, 0x0099D3u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:208 BGTL @UNKNOWN16
    case 0xC1C63A: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/generate_psi_list.asm:208 BGTL @UNKNOWN16
    case 0xC1C63C: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:208 BGTL @UNKNOWN16
    case 0xC1C63E: {
        Instruction step(cpu, 0x4C, 0x00C6E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:209 LDY #psi_ability::category
    case 0xC1C641: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:209 LDY #psi_ability::category
    // Overlapping static entry reached from 0xC1C641.
    case 0xC1C643: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:210 LDA [@VIRTUAL06],Y
    case 0xC1C644: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:211 AND @LOCAL08
    case 0xC1C646: {
        Instruction step(cpu, 0x25, 0x000023u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:212 REP #PROC_FLAGS::ACCUM8
    case 0xC1C648: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:213 AND #$00FF
    case 0xC1C64A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:213 AND #$00FF
    // Overlapping static entry reached from 0xC1C64A.
    case 0xC1C64C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:214 BEQL @UNKNOWN16
    case 0xC1C64D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:214 BEQL @UNKNOWN16
    case 0xC1C64F: {
        Instruction step(cpu, 0x4C, 0x00C6E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C652: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C654: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C656: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C658: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:216 LDA [@VIRTUAL0A]
    case 0xC1C65A: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:217 AND #$00FF
    case 0xC1C65C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:217 AND #$00FF
    // Overlapping static entry reached from 0xC1C65C.
    case 0xC1C65E: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:218 CMP @LOCAL06
    case 0xC1C65F: {
        Instruction step(cpu, 0xC5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:219 BEQ @UNKNOWN15
    case 0xC1C661: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:220 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C663: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:221 LDY #psi_ability::menu_y
    case 0xC1C665: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:221 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C665.
    case 0xC1C667: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:222 LDA [@VIRTUAL06],Y
    case 0xC1C668: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC1C66A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:224 AND #$00FF
    case 0xC1C66C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:224 AND #$00FF
    // Overlapping static entry reached from 0xC1C66C.
    case 0xC1C66E: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:225 TAX
    case 0xC1C66F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:226 LDA #0
    case 0xC1C670: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:226 LDA #0
    // Overlapping static entry reached from 0xC1C670.
    case 0xC1C672: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:227 JSR UNKNOWN_C438A5
    case 0xC1C673: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:228 LDA [@VIRTUAL0A]
    case 0xC1C677: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:229 AND #$00FF
    case 0xC1C679: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:229 AND #$00FF
    // Overlapping static entry reached from 0xC1C679.
    case 0xC1C67B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:230 JSR GET_PSI_NAME
    case 0xC1C67C: {
        Instruction step(cpu, 0x20, 0x00C403u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:231 LDA [@VIRTUAL0A]
    case 0xC1C67F: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:232 AND #$00FF
    case 0xC1C681: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:232 AND #$00FF
    // Overlapping static entry reached from 0xC1C681.
    case 0xC1C683: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:233 STA @LOCAL06
    case 0xC1C684: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:252 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C686: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:253 LDY #psi_ability::level
    case 0xC1C688: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:253 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C688.
    case 0xC1C68A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:254 LDA [@VIRTUAL06],Y
    case 0xC1C68B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:255 REP #PROC_FLAGS::ACCUM8
    case 0xC1C68D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:256 AND #$00FF
    case 0xC1C68F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:256 AND #$00FF
    // Overlapping static entry reached from 0xC1C68F.
    case 0xC1C691: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:257 DEC
    case 0xC1C692: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:258 ASL
    case 0xC1C693: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:259 PHA
    case 0xC1C694: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C695: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x00F112u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C695.
    case 0xC1C697: {
        Instruction step(cpu, 0xF1, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C698: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C697.
    case 0xC1C699: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C69A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C699.
    case 0xC1C69B: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C69A.
    case 0xC1C69C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:260 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C69D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:261 PLA
    case 0xC1C69F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:262 CLC
    case 0xC1C6A0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:263 ADC @VIRTUAL06
    case 0xC1C6A1: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:264 STA @VIRTUAL06
    case 0xC1C6A3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:265 STA @LOCAL00
    case 0xC1C6A5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:266 LDA @VIRTUAL06+2
    case 0xC1C6A7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:267 STA @LOCAL00+2
    case 0xC1C6A9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:268 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C6AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:268 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C6AB.
    case 0xC1C6AD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:268 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C6AE: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:268 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C6B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:268 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C6B0.
    case 0xC1C6B2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:268 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C6B3: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:269 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C6B5: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:269 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C6B7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:269 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C6B9: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:269 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C6BB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:271 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C6BD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:272 LDY #psi_ability::menu_y
    case 0xC1C6BF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:272 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C6BF.
    case 0xC1C6C1: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:273 LDA [@VIRTUAL06],Y
    case 0xC1C6C2: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:274 REP #PROC_FLAGS::ACCUM8
    case 0xC1C6C4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:275 AND #$00FF
    case 0xC1C6C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:275 AND #$00FF
    // Overlapping static entry reached from 0xC1C6C6.
    case 0xC1C6C8: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:276 TAY
    case 0xC1C6C9: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:277 STY @LOCAL04
    case 0xC1C6CA: {
        Instruction step(cpu, 0x84, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:278 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C6CC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:279 LDY #psi_ability::menu_x
    case 0xC1C6CE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:279 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C6CE.
    case 0xC1C6D0: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:280 LDA [@VIRTUAL06],Y
    case 0xC1C6D1: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:281 REP #PROC_FLAGS::ACCUM8
    case 0xC1C6D3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:282 AND #$00FF
    case 0xC1C6D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:282 AND #$00FF
    // Overlapping static entry reached from 0xC1C6D5.
    case 0xC1C6D7: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:283 TAX
    case 0xC1C6D8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:284 LDA @VIRTUAL02
    case 0xC1C6D9: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:285 LDY @LOCAL04
    case 0xC1C6DB: {
        Instruction step(cpu, 0xA4, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:286 JSR UNKNOWN_C1153B
    case 0xC1C6DD: {
        Instruction step(cpu, 0x20, 0x00153Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:288 REP #PROC_FLAGS::ACCUM8
    case 0xC1C6E0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:289 INC @VIRTUAL02
    case 0xC1C6E2: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C6E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x008A50u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C6E4.
    case 0xC1C6E6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C6E7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C6E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C6E9.
    case 0xC1C6EB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C6EC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:292 LDA @VIRTUAL02
    case 0xC1C6EE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C6F0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C6F2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C6F3: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C6F5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C6F6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C6F8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C6F9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C6FB: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C6FD: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C6FF: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C701: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:295 CLC
    case 0xC1C703: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:296 ADC @VIRTUAL0A
    case 0xC1C704: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:297 STA @VIRTUAL0A
    case 0xC1C706: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:298 LDA [@VIRTUAL0A]
    case 0xC1C708: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:299 AND #$00FF
    case 0xC1C70A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:299 AND #$00FF
    // Overlapping static entry reached from 0xC1C70A.
    case 0xC1C70C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:300 BNEL @UNKNOWN6
    case 0xC1C70D: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:300 BNEL @UNKNOWN6
    case 0xC1C70F: {
        Instruction step(cpu, 0x4C, 0x00C5BDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:301 LDA @LOCAL07
    case 0xC1C712: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:302 STA @VIRTUAL04
    case 0xC1C714: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:303 BNEL @UNKNOWN24
    case 0xC1C716: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:303 BNEL @UNKNOWN24
    case 0xC1C718: {
        Instruction step(cpu, 0x4C, 0x00C84Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:304 LDA @VIRTUAL01
    case 0xC1C71B: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:305 AND #$00FF
    case 0xC1C71D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:305 AND #$00FF
    // Overlapping static entry reached from 0xC1C71D.
    case 0xC1C71F: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:306 AND #PSI_USABILITY::OVERWORLD
    case 0xC1C720: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:306 AND #PSI_USABILITY::OVERWORLD
    // Overlapping static entry reached from 0xC1C720.
    case 0xC1C722: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:307 BEQL @UNKNOWN24
    case 0xC1C723: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:307 BEQL @UNKNOWN24
    case 0xC1C725: {
        Instruction step(cpu, 0x4C, 0x00C84Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:308 LDA @LOCAL08
    case 0xC1C728: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:309 AND #$00FF
    case 0xC1C72A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:309 AND #$00FF
    // Overlapping static entry reached from 0xC1C72A.
    case 0xC1C72C: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:310 AND #PSI_CATEGORY::OTHER
    case 0xC1C72D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:310 AND #PSI_CATEGORY::OTHER
    // Overlapping static entry reached from 0xC1C72D.
    case 0xC1C72F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:311 BEQL @UNKNOWN24
    case 0xC1C730: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:311 BEQL @UNKNOWN24
    case 0xC1C732: {
        Instruction step(cpu, 0x4C, 0x00C84Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:312 LDA GAME_STATE+game_state::party_psi
    case 0xC1C735: {
        Instruction step(cpu, 0xAD, 0x009839u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:313 AND #$00FF
    case 0xC1C738: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:313 AND #$00FF
    // Overlapping static entry reached from 0xC1C738.
    case 0xC1C73A: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:314 AND #PARTY_PSI_FLAGS::TELEPORT_ALPHA
    case 0xC1C73B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:314 AND #PARTY_PSI_FLAGS::TELEPORT_ALPHA
    // Overlapping static entry reached from 0xC1C73B.
    case 0xC1C73D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:315 BEQL @UNKNOWN23
    case 0xC1C73E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:315 BEQL @UNKNOWN23
    case 0xC1C740: {
        Instruction step(cpu, 0x4C, 0x00C7D2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:316 LDA #PSI::TELEPORT_ALPHA * .SIZEOF(psi_ability)
    case 0xC1C743: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FDu : 0x0002FDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:316 LDA #PSI::TELEPORT_ALPHA * .SIZEOF(psi_ability)
    // Overlapping static entry reached from 0xC1C743.
    case 0xC1C745: {
        Instruction step(cpu, 0x02, 0x000018u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:317 CLC
    case 0xC1C746: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:318 ADC @VIRTUAL06
    case 0xC1C747: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:319 STA @VIRTUAL06
    case 0xC1C749: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:320 STA @LOCAL05
    case 0xC1C74B: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:321 LDA @VIRTUAL06+2
    case 0xC1C74D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:322 STA @LOCAL05+2
    case 0xC1C74F: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:323 LDA #psi_ability::menu_y
    case 0xC1C751: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:323 LDA #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C751.
    case 0xC1C753: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C754: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C756: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C758: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C75A: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:325 CLC
    case 0xC1C75C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:326 ADC @VIRTUAL0A
    case 0xC1C75D: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:327 STA @VIRTUAL0A
    case 0xC1C75F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:328 LDA [@VIRTUAL0A]
    case 0xC1C761: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:329 AND #$00FF
    case 0xC1C763: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:329 AND #$00FF
    // Overlapping static entry reached from 0xC1C763.
    case 0xC1C765: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:330 TAX
    case 0xC1C766: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:331 LDA #0
    case 0xC1C767: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:331 LDA #0
    // Overlapping static entry reached from 0xC1C767.
    case 0xC1C769: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:332 JSR UNKNOWN_C438A5
    case 0xC1C76A: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:333 LDA [@VIRTUAL06]
    case 0xC1C76E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:334 AND #$00FF
    case 0xC1C770: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:334 AND #$00FF
    // Overlapping static entry reached from 0xC1C770.
    case 0xC1C772: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:335 JSR GET_PSI_NAME
    case 0xC1C773: {
        Instruction step(cpu, 0x20, 0x00C403u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C776: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C778: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C77A: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C77C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:337 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C77E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:338 LDY #psi_ability::level
    case 0xC1C780: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:338 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C780.
    case 0xC1C782: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:339 LDA [@VIRTUAL06],Y
    case 0xC1C783: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:340 REP #PROC_FLAGS::ACCUM8
    case 0xC1C785: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:341 AND #$00FF
    case 0xC1C787: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:341 AND #$00FF
    // Overlapping static entry reached from 0xC1C787.
    case 0xC1C789: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:342 DEC
    case 0xC1C78A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:343 ASL
    case 0xC1C78B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:344 PHA
    case 0xC1C78C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C78D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x00F112u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C78D.
    case 0xC1C78F: {
        Instruction step(cpu, 0xF1, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C790: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C78F.
    case 0xC1C791: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C792: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C791.
    case 0xC1C793: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C792.
    case 0xC1C794: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C795: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:346 PLA
    case 0xC1C797: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:347 CLC
    case 0xC1C798: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:348 ADC @VIRTUAL06
    case 0xC1C799: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:349 STA @VIRTUAL06
    case 0xC1C79B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:350 STA @LOCAL00
    case 0xC1C79D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:351 LDA @VIRTUAL06+2
    case 0xC1C79F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:352 STA @LOCAL00+2
    case 0xC1C7A1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C7A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C7A3.
    case 0xC1C7A5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C7A6: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C7A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C7A8.
    case 0xC1C7AA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C7AB: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:354 LDA [@VIRTUAL0A]
    case 0xC1C7AD: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:355 AND #$00FF
    case 0xC1C7AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:355 AND #$00FF
    // Overlapping static entry reached from 0xC1C7AF.
    case 0xC1C7B1: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:356 TAY
    case 0xC1C7B2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:357 STY @LOCAL02
    case 0xC1C7B3: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C7B5: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C7B7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C7B9: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C7BB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:359 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C7BD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:360 LDY #psi_ability::menu_x
    case 0xC1C7BF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:360 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C7BF.
    case 0xC1C7C1: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:361 LDA [@VIRTUAL06],Y
    case 0xC1C7C2: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:362 REP #PROC_FLAGS::ACCUM8
    case 0xC1C7C4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:363 AND #$00FF
    case 0xC1C7C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:363 AND #$00FF
    // Overlapping static entry reached from 0xC1C7C6.
    case 0xC1C7C8: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:364 TAX
    case 0xC1C7C9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:365 LDA #PSI::TELEPORT_ALPHA
    case 0xC1C7CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000033u : 0x000033u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:365 LDA #PSI::TELEPORT_ALPHA
    // Overlapping static entry reached from 0xC1C7CA.
    case 0xC1C7CC: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:366 LDY @LOCAL02
    case 0xC1C7CD: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:367 JSR UNKNOWN_C1153B
    case 0xC1C7CF: {
        Instruction step(cpu, 0x20, 0x00153Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:369 LDA GAME_STATE+game_state::party_psi
    case 0xC1C7D2: {
        Instruction step(cpu, 0xAD, 0x009839u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:370 AND #$00FF
    case 0xC1C7D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:370 AND #$00FF
    // Overlapping static entry reached from 0xC1C7D5.
    case 0xC1C7D7: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:371 AND #PARTY_PSI_FLAGS::TELEPORT_BETA
    case 0xC1C7D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:371 AND #PARTY_PSI_FLAGS::TELEPORT_BETA
    // Overlapping static entry reached from 0xC1C7D8.
    case 0xC1C7DA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:372 BEQ @UNKNOWN24
    case 0xC1C7DB: {
        Instruction step(cpu, 0xF0, 0x00006Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C7DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Cu : 0x008D5Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C7DD.
    case 0xC1C7DF: {
        Instruction step(cpu, 0x8D, 0x000685u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C7E0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C7E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C7E2.
    case 0xC1C7E4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C7E5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:391 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C7E7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:391 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C7E9: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:391 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C7EB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:391 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C7ED: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:392 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C7EF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:393 LDY #psi_ability::level
    case 0xC1C7F1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:393 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C7F1.
    case 0xC1C7F3: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:394 LDA [@VIRTUAL06],Y
    case 0xC1C7F4: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:395 REP #PROC_FLAGS::ACCUM8
    case 0xC1C7F6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:396 AND #$00FF
    case 0xC1C7F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:396 AND #$00FF
    // Overlapping static entry reached from 0xC1C7F8.
    case 0xC1C7FA: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:397 DEC
    case 0xC1C7FB: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:398 ASL
    case 0xC1C7FC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:399 PHA
    case 0xC1C7FD: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C7FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x00F112u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C7FE.
    case 0xC1C800: {
        Instruction step(cpu, 0xF1, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C801: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C800.
    case 0xC1C802: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C803: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C802.
    case 0xC1C804: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C803.
    case 0xC1C805: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:400 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C806: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:401 PLA
    case 0xC1C808: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:402 CLC
    case 0xC1C809: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:403 ADC @VIRTUAL06
    case 0xC1C80A: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:404 STA @VIRTUAL06
    case 0xC1C80C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:405 STA @LOCAL00
    case 0xC1C80E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:406 LDA @VIRTUAL06+2
    case 0xC1C810: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:407 STA @LOCAL00+2
    case 0xC1C812: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:408 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C814: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:408 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C814.
    case 0xC1C816: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:408 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C817: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:408 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C819: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:408 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C819.
    case 0xC1C81B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:408 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C81C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:409 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C81E: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:409 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C820: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:409 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C822: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:409 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C824: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:411 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C826: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:412 LDY #psi_ability::menu_y
    case 0xC1C828: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:412 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C828.
    case 0xC1C82A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:413 LDA [@VIRTUAL06],Y
    case 0xC1C82B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:414 REP #PROC_FLAGS::ACCUM8
    case 0xC1C82D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:415 AND #$00FF
    case 0xC1C82F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:415 AND #$00FF
    // Overlapping static entry reached from 0xC1C82F.
    case 0xC1C831: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:416 TAY
    case 0xC1C832: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:417 STY @LOCAL04
    case 0xC1C833: {
        Instruction step(cpu, 0x84, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:418 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C835: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:419 LDY #psi_ability::menu_x
    case 0xC1C837: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:419 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C837.
    case 0xC1C839: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:420 LDA [@VIRTUAL06],Y
    case 0xC1C83A: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:421 REP #PROC_FLAGS::ACCUM8
    case 0xC1C83C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:422 AND #$00FF
    case 0xC1C83E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:422 AND #$00FF
    // Overlapping static entry reached from 0xC1C83E.
    case 0xC1C840: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:423 TAX
    case 0xC1C841: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:424 LDA #PSI::TELEPORT_BETA
    case 0xC1C842: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000034u : 0x000034u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:424 LDA #PSI::TELEPORT_BETA
    // Overlapping static entry reached from 0xC1C842.
    case 0xC1C844: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:425 LDY @LOCAL04
    case 0xC1C845: {
        Instruction step(cpu, 0xA4, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:426 JSR UNKNOWN_C1153B
    case 0xC1C847: {
        Instruction step(cpu, 0x20, 0x00153Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:428 JSR PRINT_MENU_ITEMS
    case 0xC1C84A: {
        Instruction step(cpu, 0x20, 0x00163Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:429 JSR CLEAR_INSTANT_PRINTING
    case 0xC1C84D: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/generate_psi_list.asm:430 END_C_FUNCTION
    case 0xC1C851: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/generate_psi_list.asm:430 END_C_FUNCTION
    case 0xC1C852: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
