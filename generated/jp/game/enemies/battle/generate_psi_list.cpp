// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/generate_psi_list.asm
bool resume_battle_generate_psi_list(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/generate_psi_list.asm:3 BEGIN_C_FUNCTION
    case 0xC1C2B8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C2BA: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C2BB: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C2BC: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C2BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x00FFDCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C2BD.
    case 0xC1C2BF: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C2C0: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/generate_psi_list.asm:17 END_STACK_VARS
    case 0xC1C2C1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:18 TAX
    case 0xC1C2C2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C2C3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:20 LDA @PARAM02
    case 0xC1C2C5: {
        Instruction step(cpu, 0xA5, 0x000033u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:21 STA @LOCAL08
    case 0xC1C2C7: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:22 LDA @PARAM01
    case 0xC1C2C9: {
        Instruction step(cpu, 0xA5, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:23 STA @VIRTUAL01
    case 0xC1C2CB: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC1C2CD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:25 TXA
    case 0xC1C2CF: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:26 DEC
    case 0xC1C2D0: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:27 STA @VIRTUAL04
    case 0xC1C2D1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:28 STA @LOCAL07
    case 0xC1C2D3: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:29 JSR SET_INSTANT_PRINTING
    case 0xC1C2D5: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:30 JSR UNKNOWN_C11383
    case 0xC1C2D8: {
        Instruction step(cpu, 0x20, 0x0019ABu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:31 STZ @LOCAL06
    case 0xC1C2DB: {
        Instruction step(cpu, 0x64, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:32 LDA @VIRTUAL04
    case 0xC1C2DD: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:33 CMP #PARTY_MEMBER::POO - 1
    case 0xC1C2DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:33 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC1C2DF.
    case 0xC1C2E1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:34 BNEL @UNKNOWN5
    case 0xC1C2E2: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:34 BNEL @UNKNOWN5
    case 0xC1C2E4: {
        Instruction step(cpu, 0x4C, 0x00C407u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:35 LDA @VIRTUAL01
    case 0xC1C2E7: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:36 AND #$00FF
    case 0xC1C2E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC1C2E9.
    case 0xC1C2EB: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:37 AND #PSI_USABILITY::BATTLE
    case 0xC1C2EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:37 AND #PSI_USABILITY::BATTLE
    // Overlapping static entry reached from 0xC1C2EC.
    case 0xC1C2EE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:38 BEQL @UNKNOWN5
    case 0xC1C2EF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:38 BEQL @UNKNOWN5
    case 0xC1C2F1: {
        Instruction step(cpu, 0x4C, 0x00C407u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:39 LDA @LOCAL08
    case 0xC1C2F4: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:40 AND #$00FF
    case 0xC1C2F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC1C2F6.
    case 0xC1C2F8: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:41 AND #PSI_CATEGORY::OFFENSE
    case 0xC1C2F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:41 AND #PSI_CATEGORY::OFFENSE
    // Overlapping static entry reached from 0xC1C2F9.
    case 0xC1C2FB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:42 BEQL @UNKNOWN5
    case 0xC1C2FC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:42 BEQL @UNKNOWN5
    case 0xC1C2FE: {
        Instruction step(cpu, 0x4C, 0x00C407u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:43 LDA GAME_STATE+game_state::party_psi
    case 0xC1C301: {
        Instruction step(cpu, 0xAD, 0x009AEAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:44 AND #$00FF
    case 0xC1C304: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC1C304.
    case 0xC1C306: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:45 AND #PARTY_PSI_FLAGS::STARSTORM_ALPHA
    case 0xC1C307: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:45 AND #PARTY_PSI_FLAGS::STARSTORM_ALPHA
    // Overlapping static entry reached from 0xC1C307.
    case 0xC1C309: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:46 BEQL @UNKNOWN4
    case 0xC1C30A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:46 BEQL @UNKNOWN4
    case 0xC1C30C: {
        Instruction step(cpu, 0x4C, 0x00C3A1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C30F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000041u : 0x009B41u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C30F.
    case 0xC1C311: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C312: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C314: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C314.
    case 0xC1C316: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:47 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_ALPHA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C317: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C319: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C31B: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C31D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:48 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1C31F: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:49 LDA #psi_ability::menu_y
    case 0xC1C321: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:49 LDA #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C321.
    case 0xC1C323: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C324: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C326: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C328: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/generate_psi_list.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C32A: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:51 CLC
    case 0xC1C32C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:52 ADC @VIRTUAL0A
    case 0xC1C32D: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:53 STA @VIRTUAL0A
    case 0xC1C32F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:54 LDA [@VIRTUAL0A]
    case 0xC1C331: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:55 AND #$00FF
    case 0xC1C333: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC1C333.
    case 0xC1C335: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:56 TAX
    case 0xC1C336: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:57 LDA #0
    case 0xC1C337: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:57 LDA #0
    // Overlapping static entry reached from 0xC1C337.
    case 0xC1C339: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:58 JSR UNKNOWN_C438A5
    case 0xC1C33A: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:59 LDA [@VIRTUAL06]
    case 0xC1C33D: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:60 AND #$00FF
    case 0xC1C33F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC1C33F.
    case 0xC1C341: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:61 JSR GET_PSI_NAME
    case 0xC1C342: {
        Instruction step(cpu, 0x20, 0x00C26Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C345: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C347: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C349: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:62 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C34B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C34D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:64 LDY #psi_ability::level
    case 0xC1C34F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:64 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C34F.
    case 0xC1C351: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:65 LDA [@VIRTUAL06],Y
    case 0xC1C352: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC1C354: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:67 AND #$00FF
    case 0xC1C356: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC1C356.
    case 0xC1C358: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:68 DEC
    case 0xC1C359: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:69 ASL
    case 0xC1C35A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:70 PHA
    case 0xC1C35B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C35C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000091u : 0x00EC91u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C35C.
    case 0xC1C35E: {
        Instruction step(cpu, 0xEC, 0x000685u, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C35F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C361: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C361.
    case 0xC1C363: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:71 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C364: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:72 PLA
    case 0xC1C366: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:73 CLC
    case 0xC1C367: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:74 ADC @VIRTUAL06
    case 0xC1C368: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:75 STA @VIRTUAL06
    case 0xC1C36A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:76 STA @LOCAL00
    case 0xC1C36C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:77 LDA @VIRTUAL06+2
    case 0xC1C36E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:78 STA @LOCAL00+2
    case 0xC1C370: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C372: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C372.
    case 0xC1C374: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C375: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C377: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C377.
    case 0xC1C379: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:79 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C37A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:80 LDA [@VIRTUAL0A]
    case 0xC1C37C: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:81 AND #$00FF
    case 0xC1C37E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC1C37E.
    case 0xC1C380: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:82 TAY
    case 0xC1C381: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:83 STY @LOCAL04
    case 0xC1C382: {
        Instruction step(cpu, 0x84, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C384: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C386: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C388: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:84 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C38A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C38C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:86 LDY #psi_ability::menu_x
    case 0xC1C38E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:86 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C38E.
    case 0xC1C390: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:87 LDA [@VIRTUAL06],Y
    case 0xC1C391: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC1C393: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:89 AND #$00FF
    case 0xC1C395: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC1C395.
    case 0xC1C397: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:90 TAX
    case 0xC1C398: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:91 LDA #PSI::STARSTORM_ALPHA
    case 0xC1C399: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000015u : 0x000015u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:91 LDA #PSI::STARSTORM_ALPHA
    // Overlapping static entry reached from 0xC1C399.
    case 0xC1C39B: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:92 LDY @LOCAL04
    case 0xC1C39C: {
        Instruction step(cpu, 0xA4, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:93 JSR UNKNOWN_C1153B
    case 0xC1C39E: {
        Instruction step(cpu, 0x20, 0x001B27u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:95 LDA GAME_STATE+game_state::party_psi
    case 0xC1C3A1: {
        Instruction step(cpu, 0xAD, 0x009AEAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:96 AND #$00FF
    case 0xC1C3A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC1C3A4.
    case 0xC1C3A6: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:97 AND #PARTY_PSI_FLAGS::STARSTORM_OMEGA
    case 0xC1C3A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:97 AND #PARTY_PSI_FLAGS::STARSTORM_OMEGA
    // Overlapping static entry reached from 0xC1C3A7.
    case 0xC1C3A9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:98 BEQ @UNKNOWN5
    case 0xC1C3AA: {
        Instruction step(cpu, 0xF0, 0x00005Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C3AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x009B50u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C3AC.
    case 0xC1C3AE: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C3AF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C3B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C3B1.
    case 0xC1C3B3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:99 LOADPTR PSI_ABILITY_TABLE + PSI::STARSTORM_OMEGA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C3B4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:101 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C3B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000091u : 0x00EC91u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:101 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C3B6.
    case 0xC1C3B8: {
        Instruction step(cpu, 0xEC, 0x000A85u, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:101 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C3B9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:101 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C3BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:101 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C3BB.
    case 0xC1C3BD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:101 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C3BE: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C3C0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:106 LDY #psi_ability::level
    case 0xC1C3C2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:106 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C3C2.
    case 0xC1C3C4: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:107 LDA [@VIRTUAL06],Y
    case 0xC1C3C5: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC1C3C7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:109 AND #$00FF
    case 0xC1C3C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:109 AND #$00FF
    // Overlapping static entry reached from 0xC1C3C9.
    case 0xC1C3CB: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:110 DEC
    case 0xC1C3CC: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:111 ASL
    case 0xC1C3CD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:113 CLC
    case 0xC1C3CE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:114 ADC @VIRTUAL0A
    case 0xC1C3CF: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:115 STA @VIRTUAL0A
    case 0xC1C3D1: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:116 STA @LOCAL00
    case 0xC1C3D3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:117 LDA @VIRTUAL0A+2
    case 0xC1C3D5: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:118 STA @LOCAL00+2
    case 0xC1C3D7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:119 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C3D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:119 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C3D9.
    case 0xC1C3DB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:119 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C3DC: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:119 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C3DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:119 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C3DE.
    case 0xC1C3E0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:119 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C3E1: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:133 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C3E3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:134 LDY #psi_ability::menu_y
    case 0xC1C3E5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:134 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C3E5.
    case 0xC1C3E7: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:135 LDA [@VIRTUAL06],Y
    case 0xC1C3E8: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:136 REP #PROC_FLAGS::ACCUM8
    case 0xC1C3EA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:137 AND #$00FF
    case 0xC1C3EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:137 AND #$00FF
    // Overlapping static entry reached from 0xC1C3EC.
    case 0xC1C3EE: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:138 TAY
    case 0xC1C3EF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:139 STY @LOCAL04
    case 0xC1C3F0: {
        Instruction step(cpu, 0x84, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:140 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C3F2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:141 LDY #psi_ability::menu_x
    case 0xC1C3F4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:141 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C3F4.
    case 0xC1C3F6: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:142 LDA [@VIRTUAL06],Y
    case 0xC1C3F7: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:143 REP #PROC_FLAGS::ACCUM8
    case 0xC1C3F9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:144 AND #$00FF
    case 0xC1C3FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:144 AND #$00FF
    // Overlapping static entry reached from 0xC1C3FB.
    case 0xC1C3FD: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:145 TAX
    case 0xC1C3FE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:146 LDA #PSI::STARSTORM_OMEGA
    case 0xC1C3FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:146 LDA #PSI::STARSTORM_OMEGA
    // Overlapping static entry reached from 0xC1C3FF.
    case 0xC1C401: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:147 LDY @LOCAL04
    case 0xC1C402: {
        Instruction step(cpu, 0xA4, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:148 JSR UNKNOWN_C1153B
    case 0xC1C404: {
        Instruction step(cpu, 0x20, 0x001B27u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:150 LDA #1
    case 0xC1C407: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:150 LDA #1
    // Overlapping static entry reached from 0xC1C407.
    case 0xC1C409: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:151 STA @VIRTUAL02
    case 0xC1C40A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:152 JMP @UNKNOWN17
    case 0xC1C40C: {
        Instruction step(cpu, 0x4C, 0x00C523u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C40F: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C411: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C413: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:154 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1C415: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:158 LDA @LOCAL07
    case 0xC1C417: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:159 STA @VIRTUAL04
    case 0xC1C419: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:160 BEQ @UNKNOWN7
    case 0xC1C41B: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:161 CMP #PARTY_MEMBER::PAULA - 1
    case 0xC1C41D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:161 CMP #PARTY_MEMBER::PAULA - 1
    // Overlapping static entry reached from 0xC1C41D.
    case 0xC1C41F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:162 BEQ @UNKNOWN8
    case 0xC1C420: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:163 CMP #PARTY_MEMBER::POO - 1
    case 0xC1C422: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:163 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC1C422.
    case 0xC1C424: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:164 BEQ @UNKNOWN9
    case 0xC1C425: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:165 BRA @UNKNOWN10
    case 0xC1C427: {
        Instruction step(cpu, 0x80, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:167 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C429: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:168 LDY #psi_ability::ness_level
    case 0xC1C42B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:168 LDY #psi_ability::ness_level
    // Overlapping static entry reached from 0xC1C42B.
    case 0xC1C42D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:169 LDA [@VIRTUAL0A],Y
    case 0xC1C42E: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:170 STA @VIRTUAL00
    case 0xC1C430: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:171 STA @LOCAL03
    case 0xC1C432: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:172 BRA @UNKNOWN10
    case 0xC1C434: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C436: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:175 LDY #psi_ability::paula_level
    case 0xC1C438: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:175 LDY #psi_ability::paula_level
    // Overlapping static entry reached from 0xC1C438.
    case 0xC1C43A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:176 LDA [@VIRTUAL0A],Y
    case 0xC1C43B: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:177 STA @VIRTUAL00
    case 0xC1C43D: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:178 STA @LOCAL03
    case 0xC1C43F: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:179 BRA @UNKNOWN10
    case 0xC1C441: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C443: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:182 LDY #psi_ability::poo_level
    case 0xC1C445: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:182 LDY #psi_ability::poo_level
    // Overlapping static entry reached from 0xC1C445.
    case 0xC1C447: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:183 LDA [@VIRTUAL0A],Y
    case 0xC1C448: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:184 STA @VIRTUAL00
    case 0xC1C44A: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:185 STA @LOCAL03
    case 0xC1C44C: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:187 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C44E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:188 LDA @LOCAL03
    case 0xC1C450: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:189 STA @VIRTUAL00
    case 0xC1C452: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:190 REP #PROC_FLAGS::ACCUM8
    case 0xC1C454: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:191 LDA @VIRTUAL00
    case 0xC1C456: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:192 AND #$00FF
    case 0xC1C458: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:192 AND #$00FF
    // Overlapping static entry reached from 0xC1C458.
    case 0xC1C45A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:193 BEQL @UNKNOWN16
    case 0xC1C45B: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:193 BEQL @UNKNOWN16
    case 0xC1C45D: {
        Instruction step(cpu, 0x4C, 0x00C51Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:194 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C460: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:195 LDY #psi_ability::usability
    case 0xC1C462: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:195 LDY #psi_ability::usability
    // Overlapping static entry reached from 0xC1C462.
    case 0xC1C464: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:196 LDA [@VIRTUAL06],Y
    case 0xC1C465: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:197 AND @VIRTUAL01
    case 0xC1C467: {
        Instruction step(cpu, 0x25, 0x000001u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:198 REP #PROC_FLAGS::ACCUM8
    case 0xC1C469: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:199 AND #$00FF
    case 0xC1C46B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:199 AND #$00FF
    // Overlapping static entry reached from 0xC1C46B.
    case 0xC1C46D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:200 BEQL @UNKNOWN16
    case 0xC1C46E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:200 BEQL @UNKNOWN16
    case 0xC1C470: {
        Instruction step(cpu, 0x4C, 0x00C51Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:201 LDA @VIRTUAL04
    case 0xC1C473: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:202 LDY #.SIZEOF(char_struct)
    case 0xC1C475: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:202 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1C475.
    case 0xC1C477: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:203 JSL MULT168
    case 0xC1C478: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:204 TAX
    case 0xC1C47C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:205 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C47D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:206 LDA @VIRTUAL00
    case 0xC1C47F: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:207 CMP PARTY_CHARACTERS+char_struct::level,X
    case 0xC1C481: {
        Instruction step(cpu, 0xDD, 0x009C83u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:208 BGTL @UNKNOWN16
    case 0xC1C484: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/generate_psi_list.asm:208 BGTL @UNKNOWN16
    case 0xC1C486: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:208 BGTL @UNKNOWN16
    case 0xC1C488: {
        Instruction step(cpu, 0x4C, 0x00C51Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:209 LDY #psi_ability::category
    case 0xC1C48B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:209 LDY #psi_ability::category
    // Overlapping static entry reached from 0xC1C48B.
    case 0xC1C48D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:210 LDA [@VIRTUAL06],Y
    case 0xC1C48E: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:211 AND @LOCAL08
    case 0xC1C490: {
        Instruction step(cpu, 0x25, 0x000023u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:212 REP #PROC_FLAGS::ACCUM8
    case 0xC1C492: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:213 AND #$00FF
    case 0xC1C494: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:213 AND #$00FF
    // Overlapping static entry reached from 0xC1C494.
    case 0xC1C496: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:214 BEQL @UNKNOWN16
    case 0xC1C497: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:214 BEQL @UNKNOWN16
    case 0xC1C499: {
        Instruction step(cpu, 0x4C, 0x00C51Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C49C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C49E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C4A0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:215 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1C4A2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:216 LDA [@VIRTUAL0A]
    case 0xC1C4A4: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:217 AND #$00FF
    case 0xC1C4A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:217 AND #$00FF
    // Overlapping static entry reached from 0xC1C4A6.
    case 0xC1C4A8: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:218 CMP @LOCAL06
    case 0xC1C4A9: {
        Instruction step(cpu, 0xC5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:219 BEQ @UNKNOWN15
    case 0xC1C4AB: {
        Instruction step(cpu, 0xF0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:220 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C4AD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:221 LDY #psi_ability::menu_y
    case 0xC1C4AF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:221 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C4AF.
    case 0xC1C4B1: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:222 LDA [@VIRTUAL06],Y
    case 0xC1C4B2: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC1C4B4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:224 AND #$00FF
    case 0xC1C4B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:224 AND #$00FF
    // Overlapping static entry reached from 0xC1C4B6.
    case 0xC1C4B8: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:225 TAX
    case 0xC1C4B9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:226 LDA #0
    case 0xC1C4BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:226 LDA #0
    // Overlapping static entry reached from 0xC1C4BA.
    case 0xC1C4BC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:227 JSR UNKNOWN_C438A5
    case 0xC1C4BD: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:228 LDA [@VIRTUAL0A]
    case 0xC1C4C0: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:229 AND #$00FF
    case 0xC1C4C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:229 AND #$00FF
    // Overlapping static entry reached from 0xC1C4C2.
    case 0xC1C4C4: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:230 JSR GET_PSI_NAME
    case 0xC1C4C5: {
        Instruction step(cpu, 0x20, 0x00C26Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:231 LDA [@VIRTUAL0A]
    case 0xC1C4C8: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:232 AND #$00FF
    case 0xC1C4CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:232 AND #$00FF
    // Overlapping static entry reached from 0xC1C4CA.
    case 0xC1C4CC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:233 STA @LOCAL06
    case 0xC1C4CD: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:236 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C4CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000091u : 0x00EC91u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:236 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C4CF.
    case 0xC1C4D1: {
        Instruction step(cpu, 0xEC, 0x000A85u, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:236 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C4D2: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:236 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C4D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:236 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C4D4.
    case 0xC1C4D6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:236 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C4D7: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:237 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C4D9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:238 LDY #psi_ability::level
    case 0xC1C4DB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:238 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C4DB.
    case 0xC1C4DD: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:239 LDA [@VIRTUAL06],Y
    case 0xC1C4DE: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:240 REP #PROC_FLAGS::ACCUM8
    case 0xC1C4E0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:241 AND #$00FF
    case 0xC1C4E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:241 AND #$00FF
    // Overlapping static entry reached from 0xC1C4E2.
    case 0xC1C4E4: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:242 DEC
    case 0xC1C4E5: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:243 ASL
    case 0xC1C4E6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:244 CLC
    case 0xC1C4E7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:245 ADC @VIRTUAL0A
    case 0xC1C4E8: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:246 STA @VIRTUAL0A
    case 0xC1C4EA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:247 STA @LOCAL00
    case 0xC1C4EC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:248 LDA @VIRTUAL0A+2
    case 0xC1C4EE: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:249 STA @LOCAL00+2
    case 0xC1C4F0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:250 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C4F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:250 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C4F2.
    case 0xC1C4F4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:250 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C4F5: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:250 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C4F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:250 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C4F7.
    case 0xC1C4F9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:250 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C4FA: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:271 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C4FC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:272 LDY #psi_ability::menu_y
    case 0xC1C4FE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:272 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C4FE.
    case 0xC1C500: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:273 LDA [@VIRTUAL06],Y
    case 0xC1C501: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:274 REP #PROC_FLAGS::ACCUM8
    case 0xC1C503: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:275 AND #$00FF
    case 0xC1C505: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:275 AND #$00FF
    // Overlapping static entry reached from 0xC1C505.
    case 0xC1C507: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:276 TAY
    case 0xC1C508: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:277 STY @LOCAL04
    case 0xC1C509: {
        Instruction step(cpu, 0x84, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:278 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C50B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:279 LDY #psi_ability::menu_x
    case 0xC1C50D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:279 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C50D.
    case 0xC1C50F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:280 LDA [@VIRTUAL06],Y
    case 0xC1C510: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:281 REP #PROC_FLAGS::ACCUM8
    case 0xC1C512: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:282 AND #$00FF
    case 0xC1C514: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:282 AND #$00FF
    // Overlapping static entry reached from 0xC1C514.
    case 0xC1C516: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:283 TAX
    case 0xC1C517: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:284 LDA @VIRTUAL02
    case 0xC1C518: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:285 LDY @LOCAL04
    case 0xC1C51A: {
        Instruction step(cpu, 0xA4, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:286 JSR UNKNOWN_C1153B
    case 0xC1C51C: {
        Instruction step(cpu, 0x20, 0x001B27u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:288 REP #PROC_FLAGS::ACCUM8
    case 0xC1C51F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:289 INC @VIRTUAL02
    case 0xC1C521: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C523: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x009A06u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C523.
    case 0xC1C525: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C526: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C528: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C528.
    case 0xC1C52A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:291 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C52B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:292 LDA @VIRTUAL02
    case 0xC1C52D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:581 STA scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C52F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:582 ASL
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C531: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C532: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:584 ASL
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C534: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C535: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:586 ASL
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C537: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/battle/generate_psi_list.asm:293 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C538: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C53A: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C53C: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C53E: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/generate_psi_list.asm:294 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C540: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:295 CLC
    case 0xC1C542: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:296 ADC @VIRTUAL0A
    case 0xC1C543: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:297 STA @VIRTUAL0A
    case 0xC1C545: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:298 LDA [@VIRTUAL0A]
    case 0xC1C547: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:299 AND #$00FF
    case 0xC1C549: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:299 AND #$00FF
    // Overlapping static entry reached from 0xC1C549.
    case 0xC1C54B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:300 BNEL @UNKNOWN6
    case 0xC1C54C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:300 BNEL @UNKNOWN6
    case 0xC1C54E: {
        Instruction step(cpu, 0x4C, 0x00C40Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:301 LDA @LOCAL07
    case 0xC1C551: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:302 STA @VIRTUAL04
    case 0xC1C553: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/generate_psi_list.asm:303 BNEL @UNKNOWN24
    case 0xC1C555: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:303 BNEL @UNKNOWN24
    case 0xC1C557: {
        Instruction step(cpu, 0x4C, 0x00C676u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:304 LDA @VIRTUAL01
    case 0xC1C55A: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:305 AND #$00FF
    case 0xC1C55C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:305 AND #$00FF
    // Overlapping static entry reached from 0xC1C55C.
    case 0xC1C55E: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:306 AND #PSI_USABILITY::OVERWORLD
    case 0xC1C55F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:306 AND #PSI_USABILITY::OVERWORLD
    // Overlapping static entry reached from 0xC1C55F.
    case 0xC1C561: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:307 BEQL @UNKNOWN24
    case 0xC1C562: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:307 BEQL @UNKNOWN24
    case 0xC1C564: {
        Instruction step(cpu, 0x4C, 0x00C676u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:308 LDA @LOCAL08
    case 0xC1C567: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:309 AND #$00FF
    case 0xC1C569: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:309 AND #$00FF
    // Overlapping static entry reached from 0xC1C569.
    case 0xC1C56B: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:310 AND #PSI_CATEGORY::OTHER
    case 0xC1C56C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:310 AND #PSI_CATEGORY::OTHER
    // Overlapping static entry reached from 0xC1C56C.
    case 0xC1C56E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:311 BEQL @UNKNOWN24
    case 0xC1C56F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:311 BEQL @UNKNOWN24
    case 0xC1C571: {
        Instruction step(cpu, 0x4C, 0x00C676u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:312 LDA GAME_STATE+game_state::party_psi
    case 0xC1C574: {
        Instruction step(cpu, 0xAD, 0x009AEAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:313 AND #$00FF
    case 0xC1C577: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:313 AND #$00FF
    // Overlapping static entry reached from 0xC1C577.
    case 0xC1C579: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:314 AND #PARTY_PSI_FLAGS::TELEPORT_ALPHA
    case 0xC1C57A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:314 AND #PARTY_PSI_FLAGS::TELEPORT_ALPHA
    // Overlapping static entry reached from 0xC1C57A.
    case 0xC1C57C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/generate_psi_list.asm:315 BEQL @UNKNOWN23
    case 0xC1C57D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/generate_psi_list.asm:315 BEQL @UNKNOWN23
    case 0xC1C57F: {
        Instruction step(cpu, 0x4C, 0x00C610u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:316 LDA #PSI::TELEPORT_ALPHA * .SIZEOF(psi_ability)
    case 0xC1C582: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FDu : 0x0002FDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:316 LDA #PSI::TELEPORT_ALPHA * .SIZEOF(psi_ability)
    // Overlapping static entry reached from 0xC1C582.
    case 0xC1C584: {
        Instruction step(cpu, 0x02, 0x000018u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:317 CLC
    case 0xC1C585: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:318 ADC @VIRTUAL06
    case 0xC1C586: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:319 STA @VIRTUAL06
    case 0xC1C588: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:320 STA @LOCAL05
    case 0xC1C58A: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:321 LDA @VIRTUAL06+2
    case 0xC1C58C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:322 STA @LOCAL05+2
    case 0xC1C58E: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:323 LDA #psi_ability::menu_y
    case 0xC1C590: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:323 LDA #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C590.
    case 0xC1C592: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C593: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C595: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C597: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/generate_psi_list.asm:324 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C599: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:325 CLC
    case 0xC1C59B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:326 ADC @VIRTUAL0A
    case 0xC1C59C: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:327 STA @VIRTUAL0A
    case 0xC1C59E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:328 LDA [@VIRTUAL0A]
    case 0xC1C5A0: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:329 AND #$00FF
    case 0xC1C5A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:329 AND #$00FF
    // Overlapping static entry reached from 0xC1C5A2.
    case 0xC1C5A4: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:330 TAX
    case 0xC1C5A5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:331 LDA #0
    case 0xC1C5A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:331 LDA #0
    // Overlapping static entry reached from 0xC1C5A6.
    case 0xC1C5A8: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:332 JSR UNKNOWN_C438A5
    case 0xC1C5A9: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:333 LDA [@VIRTUAL06]
    case 0xC1C5AC: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:334 AND #$00FF
    case 0xC1C5AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:334 AND #$00FF
    // Overlapping static entry reached from 0xC1C5AE.
    case 0xC1C5B0: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:335 JSR GET_PSI_NAME
    case 0xC1C5B1: {
        Instruction step(cpu, 0x20, 0x00C26Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5B4: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5B6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5B8: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:336 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5BA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:337 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C5BC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:338 LDY #psi_ability::level
    case 0xC1C5BE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:338 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C5BE.
    case 0xC1C5C0: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:339 LDA [@VIRTUAL06],Y
    case 0xC1C5C1: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:340 REP #PROC_FLAGS::ACCUM8
    case 0xC1C5C3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:341 AND #$00FF
    case 0xC1C5C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:341 AND #$00FF
    // Overlapping static entry reached from 0xC1C5C5.
    case 0xC1C5C7: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:342 DEC
    case 0xC1C5C8: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:343 ASL
    case 0xC1C5C9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:344 PHA
    case 0xC1C5CA: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C5CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000091u : 0x00EC91u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C5CB.
    case 0xC1C5CD: {
        Instruction step(cpu, 0xEC, 0x000685u, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C5CE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C5D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C5D0.
    case 0xC1C5D2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:345 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1C5D3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:346 PLA
    case 0xC1C5D5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:347 CLC
    case 0xC1C5D6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:348 ADC @VIRTUAL06
    case 0xC1C5D7: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:349 STA @VIRTUAL06
    case 0xC1C5D9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:350 STA @LOCAL00
    case 0xC1C5DB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:351 LDA @VIRTUAL06+2
    case 0xC1C5DD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:352 STA @LOCAL00+2
    case 0xC1C5DF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C5E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C5E1.
    case 0xC1C5E3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C5E4: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C5E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C5E6.
    case 0xC1C5E8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:353 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C5E9: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:354 LDA [@VIRTUAL0A]
    case 0xC1C5EB: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:355 AND #$00FF
    case 0xC1C5ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:355 AND #$00FF
    // Overlapping static entry reached from 0xC1C5ED.
    case 0xC1C5EF: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:356 TAY
    case 0xC1C5F0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:357 STY @LOCAL02
    case 0xC1C5F1: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5F3: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5F5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5F7: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:358 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1C5F9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:359 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C5FB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:360 LDY #psi_ability::menu_x
    case 0xC1C5FD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:360 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C5FD.
    case 0xC1C5FF: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:361 LDA [@VIRTUAL06],Y
    case 0xC1C600: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:362 REP #PROC_FLAGS::ACCUM8
    case 0xC1C602: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:363 AND #$00FF
    case 0xC1C604: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:363 AND #$00FF
    // Overlapping static entry reached from 0xC1C604.
    case 0xC1C606: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:364 TAX
    case 0xC1C607: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:365 LDA #PSI::TELEPORT_ALPHA
    case 0xC1C608: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000033u : 0x000033u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:365 LDA #PSI::TELEPORT_ALPHA
    // Overlapping static entry reached from 0xC1C608.
    case 0xC1C60A: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:366 LDY @LOCAL02
    case 0xC1C60B: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:367 JSR UNKNOWN_C1153B
    case 0xC1C60D: {
        Instruction step(cpu, 0x20, 0x001B27u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:369 LDA GAME_STATE+game_state::party_psi
    case 0xC1C610: {
        Instruction step(cpu, 0xAD, 0x009AEAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:370 AND #$00FF
    case 0xC1C613: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:370 AND #$00FF
    // Overlapping static entry reached from 0xC1C613.
    case 0xC1C615: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:371 AND #PARTY_PSI_FLAGS::TELEPORT_BETA
    case 0xC1C616: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:371 AND #PARTY_PSI_FLAGS::TELEPORT_BETA
    // Overlapping static entry reached from 0xC1C616.
    case 0xC1C618: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:372 BEQ @UNKNOWN24
    case 0xC1C619: {
        Instruction step(cpu, 0xF0, 0x00005Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C61B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x009D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C61B.
    case 0xC1C61D: {
        Instruction step(cpu, 0x9D, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C61E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C620: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    // Overlapping static entry reached from 0xC1C620.
    case 0xC1C622: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:373 LOADPTR PSI_ABILITY_TABLE + PSI::TELEPORT_BETA * .SIZEOF(psi_ability), @VIRTUAL06
    case 0xC1C623: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:375 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C625: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000091u : 0x00EC91u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:375 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C625.
    case 0xC1C627: {
        Instruction step(cpu, 0xEC, 0x000A85u, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/generate_psi_list.asm:375 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C628: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:375 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C62A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/generate_psi_list.asm:375 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C62A.
    case 0xC1C62C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/generate_psi_list.asm:375 LOADPTR PSI_SUFFIXES, @VIRTUAL0A
    case 0xC1C62D: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:376 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C62F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:377 LDY #psi_ability::level
    case 0xC1C631: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:377 LDY #psi_ability::level
    // Overlapping static entry reached from 0xC1C631.
    case 0xC1C633: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:378 LDA [@VIRTUAL06],Y
    case 0xC1C634: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:379 REP #PROC_FLAGS::ACCUM8
    case 0xC1C636: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:380 AND #$00FF
    case 0xC1C638: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:380 AND #$00FF
    // Overlapping static entry reached from 0xC1C638.
    case 0xC1C63A: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:381 DEC
    case 0xC1C63B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:382 ASL
    case 0xC1C63C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:383 CLC
    case 0xC1C63D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:384 ADC @VIRTUAL0A
    case 0xC1C63E: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:385 STA @VIRTUAL0A
    case 0xC1C640: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:386 STA @LOCAL00
    case 0xC1C642: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:387 LDA @VIRTUAL0A+2
    case 0xC1C644: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:388 STA @LOCAL00+2
    case 0xC1C646: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:389 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C648: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:389 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C648.
    case 0xC1C64A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/generate_psi_list.asm:389 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C64B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:389 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C64D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/generate_psi_list.asm:389 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1C64D.
    case 0xC1C64F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/generate_psi_list.asm:389 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1C650: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:411 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C652: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:412 LDY #psi_ability::menu_y
    case 0xC1C654: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:412 LDY #psi_ability::menu_y
    // Overlapping static entry reached from 0xC1C654.
    case 0xC1C656: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:413 LDA [@VIRTUAL06],Y
    case 0xC1C657: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:414 REP #PROC_FLAGS::ACCUM8
    case 0xC1C659: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:415 AND #$00FF
    case 0xC1C65B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:415 AND #$00FF
    // Overlapping static entry reached from 0xC1C65B.
    case 0xC1C65D: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:416 TAY
    case 0xC1C65E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:417 STY @LOCAL04
    case 0xC1C65F: {
        Instruction step(cpu, 0x84, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:418 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C661: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:419 LDY #psi_ability::menu_x
    case 0xC1C663: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:419 LDY #psi_ability::menu_x
    // Overlapping static entry reached from 0xC1C663.
    case 0xC1C665: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:420 LDA [@VIRTUAL06],Y
    case 0xC1C666: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:421 REP #PROC_FLAGS::ACCUM8
    case 0xC1C668: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:422 AND #$00FF
    case 0xC1C66A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:422 AND #$00FF
    // Overlapping static entry reached from 0xC1C66A.
    case 0xC1C66C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:423 TAX
    case 0xC1C66D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:424 LDA #PSI::TELEPORT_BETA
    case 0xC1C66E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000034u : 0x000034u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:424 LDA #PSI::TELEPORT_BETA
    // Overlapping static entry reached from 0xC1C66E.
    case 0xC1C670: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:425 LDY @LOCAL04
    case 0xC1C671: {
        Instruction step(cpu, 0xA4, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:426 JSR UNKNOWN_C1153B
    case 0xC1C673: {
        Instruction step(cpu, 0x20, 0x001B27u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:428 JSR PRINT_MENU_ITEMS
    case 0xC1C676: {
        Instruction step(cpu, 0x20, 0x001BF0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/generate_psi_list.asm:429 JSR CLEAR_INSTANT_PRINTING
    case 0xC1C679: {
        Instruction step(cpu, 0x20, 0x0000EDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/generate_psi_list.asm:430 END_C_FUNCTION
    case 0xC1C67C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/generate_psi_list.asm:430 END_C_FUNCTION
    case 0xC1C67D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
