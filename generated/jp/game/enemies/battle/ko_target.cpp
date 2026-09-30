// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/ko_target.asm
bool resume_battle_ko_target(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/ko_target.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC27491: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27493: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27494: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27495: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27496: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x00FFDCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC27496.
    case 0xC27498: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27499: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC2749A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:20 STA @VIRTUAL02
    case 0xC2749B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:20 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27498.
    case 0xC2749C: {
        Instruction step(cpu, 0x02, 0x00009Cu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/ko_target.asm:21 STZ SKIP_DEATH_TEXT_AND_CLEANUP
    case 0xC2749D: {
        Instruction step(cpu, 0x9C, 0x00AC67u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:22 LDX @VIRTUAL02
    case 0xC274A0: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC274A2: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:24 AND #$00FF
    case 0xC274A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC274A5.
    case 0xC274A7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:25 BNEL @UNKNOWN22
    case 0xC274A8: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:25 BNEL @UNKNOWN22
    case 0xC274AA: {
        Instruction step(cpu, 0x4C, 0x007717u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:26 LDX @VIRTUAL02
    case 0xC274AD: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:27 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC274AF: {
        Instruction step(cpu, 0xBD, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:28 AND #$00FF
    case 0xC274B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC274B2.
    case 0xC274B4: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:29 CMP #STATUS_1::POSSESSED
    case 0xC274B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:29 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC274B5.
    case 0xC274B7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:30 BNEL @UNKNOWN10
    case 0xC274B8: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:30 BNEL @UNKNOWN10
    case 0xC274BA: {
        Instruction step(cpu, 0x4C, 0x00757Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:31 LDY #0
    case 0xC274BD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:31 LDY #0
    // Overlapping static entry reached from 0xC274BD.
    case 0xC274BF: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:32 STY @LOCAL07
    case 0xC274C0: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:33 JMP @UNKNOWN9
    case 0xC274C2: {
        Instruction step(cpu, 0x4C, 0x007570u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:35 TYA
    case 0xC274C5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:36 LDY #.SIZEOF(battler)
    case 0xC274C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:36 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC274C6.
    case 0xC274C8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:37 JSL MULT168
    case 0xC274C9: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:38 STA @LOCAL06
    case 0xC274CD: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:39 TAX
    case 0xC274CF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:40 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC274D0: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:41 AND #$00FF
    case 0xC274D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC274D3.
    case 0xC274D5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:42 BEQL @UNKNOWN8
    case 0xC274D6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:42 BEQL @UNKNOWN8
    case 0xC274D8: {
        Instruction step(cpu, 0x4C, 0x00756Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:43 LDA @LOCAL06
    case 0xC274DB: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:44 TAX
    case 0xC274DD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:45 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC274DE: {
        Instruction step(cpu, 0xBD, 0x00A1BDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:46 AND #$00FF
    case 0xC274E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC274E1.
    case 0xC274E3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:47 BNEL @UNKNOWN8
    case 0xC274E4: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:47 BNEL @UNKNOWN8
    case 0xC274E6: {
        Instruction step(cpu, 0x4C, 0x00756Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:48 LDA @LOCAL06
    case 0xC274E9: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:49 CLC
    case 0xC274EB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:50 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC274EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CBu : 0x00A1CBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:50 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC274EC.
    case 0xC274EE: {
        Instruction step(cpu, 0xA1, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:51 TAX
    case 0xC274EF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:52 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC274F0: {
        Instruction step(cpu, 0xBD, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:53 AND #$00FF
    case 0xC274F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC274F3.
    case 0xC274F5: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:54 CMP #STATUS_1::POSSESSED
    case 0xC274F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:54 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC274F6.
    case 0xC274F8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:55 BNE @UNKNOWN8
    case 0xC274F9: {
        Instruction step(cpu, 0xD0, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:56 LDA @LOCAL06
    case 0xC274FB: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:57 CLC
    case 0xC274FD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC274FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC274FE.
    case 0xC27500: {
        Instruction step(cpu, 0xA1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:59 STA @VIRTUAL04
    case 0xC27501: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:59 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC27500.
    case 0xC27502: {
        Instruction step(cpu, 0x04, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:60 LDA @VIRTUAL02
    case 0xC27503: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:60 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC27502.
    case 0xC27504: {
        Instruction step(cpu, 0x02, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/ko_target.asm:61 CMP @VIRTUAL04
    case 0xC27505: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:62 BNE @UNKNOWN10
    case 0xC27507: {
        Instruction step(cpu, 0xD0, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:63 LDA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC27509: {
        Instruction step(cpu, 0xAD, 0x00A391u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:64 AND #$00FF
    case 0xC2750C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC2750C.
    case 0xC2750E: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:65 CMP #ENEMY::TINY_LIL_GHOST
    case 0xC2750F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:65 CMP #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC2750F.
    case 0xC27511: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:66 BNE @UNKNOWN10
    case 0xC27512: {
        Instruction step(cpu, 0xD0, 0x000066u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:67 SEP #PROC_FLAGS::ACCUM8
    case 0xC27514: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:68 STZ BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::consciousness
    case 0xC27516: {
        Instruction step(cpu, 0x9C, 0x00A38Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:69 BRA @UNKNOWN7
    case 0xC27519: {
        Instruction step(cpu, 0x80, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC2751B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:72 TYA
    case 0xC2751D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:73 LDY #.SIZEOF(battler)
    case 0xC2751E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:73 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2751E.
    case 0xC27520: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:74 JSL MULT168
    case 0xC27521: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:75 TAX
    case 0xC27525: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:76 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC27526: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:77 AND #$00FF
    case 0xC27529: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC27529.
    case 0xC2752B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:78 BEQ @UNKNOWN6
    case 0xC2752C: {
        Instruction step(cpu, 0xF0, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:79 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC2752E: {
        Instruction step(cpu, 0xBD, 0x00A1BDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:80 AND #$00FF
    case 0xC27531: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC27531.
    case 0xC27533: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:81 BNE @UNKNOWN6
    case 0xC27534: {
        Instruction step(cpu, 0xD0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:82 TXA
    case 0xC27536: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:83 CLC
    case 0xC27537: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:84 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC27538: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CBu : 0x00A1CBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:84 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC27538.
    case 0xC2753A: {
        Instruction step(cpu, 0xA1, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:85 TAX
    case 0xC2753B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:86 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC2753C: {
        Instruction step(cpu, 0xBD, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:87 AND #$00FF
    case 0xC2753F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC2753F.
    case 0xC27541: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:88 CMP #STATUS_1::POSSESSED
    case 0xC27542: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:88 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC27542.
    case 0xC27544: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:89 BNE @UNKNOWN6
    case 0xC27545: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:90 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    case 0xC27547: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000082u : 0x00A382u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:90 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    // Overlapping static entry reached from 0xC27547.
    case 0xC27549: {
        Instruction step(cpu, 0xA3, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:91 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC2754A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:91 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27549.
    case 0xC2754B: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:91 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC2754A.
    case 0xC2754C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:92 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC2754D: {
        Instruction step(cpu, 0x22, 0xC2B692u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC27551: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:94 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC27553: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x008DD5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:95 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC27555: {
        Instruction step(cpu, 0x8D, 0x00A391u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:95 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC27553.
    case 0xC27556: {
        Instruction step(cpu, 0x91, 0x0000A3u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:96 LDA #1
    case 0xC27558: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:97 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+13
    case 0xC2755A: {
        Instruction step(cpu, 0x8D, 0x00A38Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:97 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+13
    // Overlapping static entry reached from 0xC27558.
    case 0xC2755B: {
        Instruction step(cpu, 0x8F, 0x22A4A3u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:99 LDY @LOCAL07
    case 0xC2755D: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:100 INY
    case 0xC2755F: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:101 STY @LOCAL07
    case 0xC27560: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:103 LDY @LOCAL07
    case 0xC27562: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:104 CPY #6
    case 0xC27564: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:104 CPY #6
    // Overlapping static entry reached from 0xC27564.
    case 0xC27566: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:105 BCC @UNKNOWN5
    case 0xC27567: {
        Instruction step(cpu, 0x90, 0x0000B2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:106 BRA @UNKNOWN10
    case 0xC27569: {
        Instruction step(cpu, 0x80, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:108 LDY @LOCAL07
    case 0xC2756B: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:109 INY
    case 0xC2756D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:110 STY @LOCAL07
    case 0xC2756E: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:112 CPY #6
    case 0xC27570: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:112 CPY #6
    // Overlapping static entry reached from 0xC27570.
    case 0xC27572: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/ko_target.asm:113 BCCL @UNKNOWN2
    case 0xC27573: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/ko_target.asm:113 BCCL @UNKNOWN2
    case 0xC27575: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/ko_target.asm:113 BCCL @UNKNOWN2
    case 0xC27577: {
        Instruction step(cpu, 0x4C, 0x0074C5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:115 SEP #PROC_FLAGS::ACCUM8
    case 0xC2757A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:116 LDA #STATUS_0::UNCONSCIOUS
    case 0xC2757C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:117 LDX @VIRTUAL02
    case 0xC2757E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:117 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2757C.
    case 0xC2757F: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/ko_target.asm:118 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27580: {
        Instruction step(cpu, 0x9D, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:119 LDX @VIRTUAL02
    case 0xC27583: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:120 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC27585: {
        Instruction step(cpu, 0x9E, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:121 LDX @VIRTUAL02
    case 0xC27588: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:122 STZ a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC2758A: {
        Instruction step(cpu, 0x9E, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:123 LDX @VIRTUAL02
    case 0xC2758D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:124 STZ a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC2758F: {
        Instruction step(cpu, 0x9E, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:125 LDX @VIRTUAL02
    case 0xC27592: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:126 STZ a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC27594: {
        Instruction step(cpu, 0x9E, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:127 LDX @VIRTUAL02
    case 0xC27597: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:128 STZ a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC27599: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:129 LDX @VIRTUAL02
    case 0xC2759C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:130 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC2759E: {
        Instruction step(cpu, 0x9E, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:131 REP #PROC_FLAGS::ACCUM8
    case 0xC275A1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:132 LDA @VIRTUAL02
    case 0xC275A3: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:133 CLC
    case 0xC275A5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:134 ADC #battler::npc_id
    case 0xC275A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:134 ADC #battler::npc_id
    // Overlapping static entry reached from 0xC275A6.
    case 0xC275A8: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:135 TAX
    case 0xC275A9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:136 STX @LOCAL07
    case 0xC275AA: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:137 LDA __BSS_START__,X
    case 0xC275AC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:138 AND #$00FF
    case 0xC275AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC275AF.
    case 0xC275B1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:139 BEQL @UNKNOWN21
    case 0xC275B2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:139 BEQL @UNKNOWN21
    case 0xC275B4: {
        Instruction step(cpu, 0x4C, 0x0076D1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC275B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC275B7.
    case 0xC275B9: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC275BA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC275B9.
    case 0xC275BB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC275BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC275BC.
    case 0xC275BE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC275BF: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:141 LDX @VIRTUAL02
    case 0xC275C1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:142 LDA a:battler::id,X
    case 0xC275C3: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:143 LDY #.SIZEOF(enemy_data)
    case 0xC275C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:143 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC275C6.
    case 0xC275C8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:144 JSL MULT168
    case 0xC275C9: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:145 CLC
    case 0xC275CD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:146 ADC #enemy_data::death_text_ptr
    case 0xC275CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:146 ADC #enemy_data::death_text_ptr
    // Overlapping static entry reached from 0xC275CE.
    case 0xC275D0: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:147 CLC
    case 0xC275D1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:148 ADC @VIRTUAL0A
    case 0xC275D2: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:149 STA @VIRTUAL0A
    case 0xC275D4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC275D6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC275D6.
    case 0xC275D8: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC275D9: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC275DB: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC275DC: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC275DE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC275E0: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC275E2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC275E4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC275E6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC275E8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:152 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC275EA: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:153 LDX @VIRTUAL02
    case 0xC275EE: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xC275F0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:155 STZ a:battler::consciousness,X
    case 0xC275F2: {
        Instruction step(cpu, 0x9E, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:156 LDX @LOCAL07
    case 0xC275F5: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:157 REP #PROC_FLAGS::ACCUM8
    case 0xC275F7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:158 LDA __BSS_START__,X ;battler::npc_id
    case 0xC275F9: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:159 AND #$00FF
    case 0xC275FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:159 AND #$00FF
    // Overlapping static entry reached from 0xC275FC.
    case 0xC275FE: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:160 TAX
    case 0xC275FF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:161 CPX #PARTY_MEMBER::TEDDY_BEAR
    case 0xC27600: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:161 CPX #PARTY_MEMBER::TEDDY_BEAR
    // Overlapping static entry reached from 0xC27600.
    case 0xC27602: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:162 BEQ @UNKNOWN12
    case 0xC27603: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:163 CPX #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    case 0xC27605: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:163 CPX #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    // Overlapping static entry reached from 0xC27605.
    case 0xC27607: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:164 BNE @UNKNOWN14
    case 0xC27608: {
        Instruction step(cpu, 0xD0, 0x000078u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:166 LDA @VIRTUAL02
    case 0xC2760A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:167 CLC
    case 0xC2760C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:168 ADC #battler::row
    case 0xC2760D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:168 ADC #battler::row
    // Overlapping static entry reached from 0xC2760D.
    case 0xC2760F: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:169 TAX
    case 0xC27610: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:170 STX @LOCAL05
    case 0xC27611: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:171 LDA __BSS_START__,X
    case 0xC27613: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:172 AND #$00FF
    case 0xC27616: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC27616.
    case 0xC27618: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:174 CLC
    case 0xC27619: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:175 ADC #.LOWORD(GAME_STATE)
    case 0xC2761A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:175 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2761A.
    case 0xC2761C: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/ko_target.asm:176 TAX
    case 0xC2761D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:177 LDA a:game_state::party_npc_1,X
    case 0xC2761E: {
        Instruction step(cpu, 0xBD, 0x000042u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:182 AND #$00FF
    case 0xC27621: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:182 AND #$00FF
    // Overlapping static entry reached from 0xC27621.
    case 0xC27623: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:183 BEQL @UNKNOWN62
    case 0xC27624: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:183 BEQL @UNKNOWN62
    case 0xC27626: {
        Instruction step(cpu, 0x4C, 0x007C29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:184 SEP #PROC_FLAGS::ACCUM8
    case 0xC27629: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:185 LDA #1
    case 0xC2762B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:186 LDX @VIRTUAL02
    case 0xC2762D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:186 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2762B.
    case 0xC2762E: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/ko_target.asm:187 STA a:battler::consciousness,X
    case 0xC2762F: {
        Instruction step(cpu, 0x9D, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:188 LDX @VIRTUAL02
    case 0xC27632: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:189 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27634: {
        Instruction step(cpu, 0x9E, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:190 LDX @LOCAL05
    case 0xC27637: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:191 REP #PROC_FLAGS::ACCUM8
    case 0xC27639: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:192 LDA __BSS_START__,X
    case 0xC2763B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:193 AND #$00FF
    case 0xC2763E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:193 AND #$00FF
    // Overlapping static entry reached from 0xC2763E.
    case 0xC27640: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:194 ASL
    case 0xC27641: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:196 CLC
    case 0xC27642: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:197 ADC #.LOWORD(GAME_STATE)
    case 0xC27643: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:197 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC27643.
    case 0xC27645: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/ko_target.asm:198 TAX
    case 0xC27646: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:199 LDA a:game_state::party_npc_1_hp,X
    case 0xC27647: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:204 LDX @VIRTUAL02
    case 0xC2764A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:205 STA a:battler::hp_target,X
    case 0xC2764C: {
        Instruction step(cpu, 0x9D, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:206 LDX @VIRTUAL02
    case 0xC2764F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:207 STA a:battler::hp,X
    case 0xC27651: {
        Instruction step(cpu, 0x9D, 0x000011u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:208 LDX @LOCAL05
    case 0xC27654: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:209 LDA __BSS_START__,X
    case 0xC27656: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:210 AND #$00FF
    case 0xC27659: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:210 AND #$00FF
    // Overlapping static entry reached from 0xC27659.
    case 0xC2765B: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:212 CLC
    case 0xC2765C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:213 ADC #.LOWORD(GAME_STATE)
    case 0xC2765D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:213 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2765D.
    case 0xC2765F: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/ko_target.asm:214 TAX
    case 0xC27660: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:215 SEP #PROC_FLAGS::ACCUM8
    case 0xC27661: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:216 LDA a:game_state::party_npc_1,X
    case 0xC27663: {
        Instruction step(cpu, 0xBD, 0x000042u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:222 LDX @VIRTUAL02
    case 0xC27666: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:223 STA a:battler::npc_id,X
    case 0xC27668: {
        Instruction step(cpu, 0x9D, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:224 REP #PROC_FLAGS::ACCUM8
    case 0xC2766B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:225 AND #$00FF
    case 0xC2766D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:225 AND #$00FF
    // Overlapping static entry reached from 0xC2766D.
    case 0xC2766F: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:226 ASL
    case 0xC27670: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:227 TAX
    case 0xC27671: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:228 INX
    case 0xC27672: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:229 LDA f:NPC_AI_TABLE,X
    case 0xC27673: {
        Instruction step(cpu, 0xBF, 0xD59DDAu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:230 AND #$00FF
    case 0xC27677: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:230 AND #$00FF
    // Overlapping static entry reached from 0xC27677.
    case 0xC27679: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:231 LDX @VIRTUAL02
    case 0xC2767A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:232 STA a:battler::id,X
    case 0xC2767C: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:233 JMP @UNKNOWN62
    case 0xC2767F: {
        Instruction step(cpu, 0x4C, 0x007C29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:235 LDA GAME_STATE+game_state::party_npc_1
    case 0xC27682: {
        Instruction step(cpu, 0xAD, 0x009AEBu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:236 AND #$00FF
    case 0xC27685: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:236 AND #$00FF
    // Overlapping static entry reached from 0xC27685.
    case 0xC27687: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:237 BEQL @UNKNOWN62
    case 0xC27688: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:237 BEQL @UNKNOWN62
    case 0xC2768A: {
        Instruction step(cpu, 0x4C, 0x007C29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:238 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC2768D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:238 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2768D.
    case 0xC2768F: {
        Instruction step(cpu, 0xA1, 0x0000A0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:239 LDY #0
    case 0xC27690: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:239 LDY #0
    // Overlapping static entry reached from 0xC2768F.
    case 0xC27691: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:239 LDY #0
    // Overlapping static entry reached from 0xC27690.
    case 0xC27692: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:240 BRA @UNKNOWN18
    case 0xC27693: {
        Instruction step(cpu, 0x80, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:242 LDA a:battler::consciousness,X
    case 0xC27695: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:243 AND #$00FF
    case 0xC27698: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:243 AND #$00FF
    // Overlapping static entry reached from 0xC27698.
    case 0xC2769A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:244 BEQ @UNKNOWN17
    case 0xC2769B: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:245 LDA a:battler::ally_or_enemy,X
    case 0xC2769D: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:246 AND #$00FF
    case 0xC276A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:246 AND #$00FF
    // Overlapping static entry reached from 0xC276A0.
    case 0xC276A2: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:247 BNE @UNKNOWN17
    case 0xC276A3: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC276A5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:249 LDA a:battler::npc_id,X
    case 0xC276A7: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:250 CMP GAME_STATE+game_state::party_npc_1
    case 0xC276AA: {
        Instruction step(cpu, 0xCD, 0x009AEBu, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:251 BNE @UNKNOWN17
    case 0xC276AD: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:252 STZ a:battler::row,X
    case 0xC276AF: {
        Instruction step(cpu, 0x9E, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:253 JMP @UNKNOWN62
    case 0xC276B2: {
        Instruction step(cpu, 0x4C, 0x007C29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:255 REP #PROC_FLAGS::ACCUM8
    case 0xC276B5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:256 TXA
    case 0xC276B7: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:257 CLC
    case 0xC276B8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:258 ADC #.SIZEOF(battler)
    case 0xC276B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:258 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC276B9.
    case 0xC276BB: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:259 TAX
    case 0xC276BC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:260 INY
    case 0xC276BD: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:262 STY @VIRTUAL02
    case 0xC276BE: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:263 LDA #BATTLER_COUNT
    case 0xC276C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:263 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xC276C0.
    case 0xC276C2: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:264 CLC
    case 0xC276C3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:265 SBC @VIRTUAL02
    case 0xC276C4: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC276C6: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC276C8: {
        Instruction step(cpu, 0x10, 0x0000CBu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC276CA: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC276CC: {
        Instruction step(cpu, 0x30, 0x0000C7u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/ko_target.asm:267 JMP @UNKNOWN62
    case 0xC276CE: {
        Instruction step(cpu, 0x4C, 0x007C29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:269 LDX @VIRTUAL02
    case 0xC276D1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:270 STZ a:battler::hp_target,X
    case 0xC276D3: {
        Instruction step(cpu, 0x9E, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:271 LDA @VIRTUAL02
    case 0xC276D6: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:272 CLC
    case 0xC276D8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:273 ADC #battler::row
    case 0xC276D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:273 ADC #battler::row
    // Overlapping static entry reached from 0xC276D9.
    case 0xC276DB: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:274 TAX
    case 0xC276DC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:275 STX @LOCAL04
    case 0xC276DD: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:276 LDA __BSS_START__,X
    case 0xC276DF: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:277 AND #$00FF
    case 0xC276E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:277 AND #$00FF
    // Overlapping static entry reached from 0xC276E2.
    case 0xC276E4: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:278 LDY #.SIZEOF(char_struct)
    case 0xC276E5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:278 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC276E5.
    case 0xC276E7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:279 JSL MULT168
    case 0xC276E8: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:280 TAX
    case 0xC276EC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:281 STZ PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC276ED: {
        Instruction step(cpu, 0x9E, 0x009CC5u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:282 LDX @LOCAL04
    case 0xC276F0: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:283 LDA __BSS_START__,X
    case 0xC276F2: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:284 AND #$00FF
    case 0xC276F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:284 AND #$00FF
    // Overlapping static entry reached from 0xC276F5.
    case 0xC276F7: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:285 LDY #.SIZEOF(char_struct)
    case 0xC276F8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:285 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC276F8.
    case 0xC276FA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:286 JSL MULT168
    case 0xC276FB: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:287 TAX
    case 0xC276FF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:288 LDA #1
    case 0xC27700: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:288 LDA #1
    // Overlapping static entry reached from 0xC27700.
    case 0xC27702: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:289 STA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC27703: {
        Instruction step(cpu, 0x9D, 0x009CC3u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC27706: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Du : 0x00317Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC27706.
    case 0xC27708: {
        Instruction step(cpu, 0x31, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC27709: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC27708.
    case 0xC2770A: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2770B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC2770B.
    case 0xC2770D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2770E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC27710: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:291 JMP @UNKNOWN62
    case 0xC27714: {
        Instruction step(cpu, 0x4C, 0x007C29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:293 LDX @VIRTUAL02
    case 0xC27717: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:294 LDA a:battler::id,X
    case 0xC27719: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:295 CMP #ENEMY::GIYGAS_2
    case 0xC2771C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DAu : 0x0000DAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:295 CMP #ENEMY::GIYGAS_2
    // Overlapping static entry reached from 0xC2771C.
    case 0xC2771E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:296 BEQL @UNKNOWN62
    case 0xC2771F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:296 BEQL @UNKNOWN62
    case 0xC27721: {
        Instruction step(cpu, 0x4C, 0x007C29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:297 CMP #ENEMY::GIYGAS_3
    case 0xC27724: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DBu : 0x0000DBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:297 CMP #ENEMY::GIYGAS_3
    // Overlapping static entry reached from 0xC27724.
    case 0xC27726: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:298 BEQL @UNKNOWN62
    case 0xC27727: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:298 BEQL @UNKNOWN62
    case 0xC27729: {
        Instruction step(cpu, 0x4C, 0x007C29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:299 CMP #ENEMY::GIYGAS_5
    case 0xC2772C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DDu : 0x0000DDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:299 CMP #ENEMY::GIYGAS_5
    // Overlapping static entry reached from 0xC2772C.
    case 0xC2772E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:300 BEQL @UNKNOWN62
    case 0xC2772F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:300 BEQL @UNKNOWN62
    case 0xC27731: {
        Instruction step(cpu, 0x4C, 0x007C29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:301 CMP #ENEMY::GIYGAS_6
    case 0xC27734: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E5u : 0x0000E5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:301 CMP #ENEMY::GIYGAS_6
    // Overlapping static entry reached from 0xC27734.
    case 0xC27736: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:302 BEQL @UNKNOWN62
    case 0xC27737: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:302 BEQL @UNKNOWN62
    case 0xC27739: {
        Instruction step(cpu, 0x4C, 0x007C29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:303 LDA #1
    case 0xC2773C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:303 LDA #1
    // Overlapping static entry reached from 0xC2773C.
    case 0xC2773E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:304 JSL COUNT_CHARS
    case 0xC2773F: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:305 CMP #1
    case 0xC27743: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:305 CMP #1
    // Overlapping static entry reached from 0xC27743.
    case 0xC27745: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:306 BNEL @UNKNOWN31
    case 0xC27746: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:306 BNEL @UNKNOWN31
    case 0xC27748: {
        Instruction step(cpu, 0x4C, 0x0077C6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:307 JSL RESET_HPPP_ROLLING
    case 0xC2774B: {
        Instruction step(cpu, 0x22, 0xC20E2Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:308 LDA #0
    case 0xC2774F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:308 LDA #0
    // Overlapping static entry reached from 0xC2774F.
    case 0xC27751: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:309 STA @LOCAL07
    case 0xC27752: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:310 BRA @UNKNOWN30
    case 0xC27754: {
        Instruction step(cpu, 0x80, 0x00006Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:312 LDY #.SIZEOF(battler)
    case 0xC27756: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:312 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27756.
    case 0xC27758: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:313 JSL MULT168
    case 0xC27759: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:314 TAX
    case 0xC2775D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:315 STX @LOCAL05
    case 0xC2775E: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:316 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC27760: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:317 AND #$00FF
    case 0xC27763: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:317 AND #$00FF
    // Overlapping static entry reached from 0xC27763.
    case 0xC27765: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:318 BEQ @UNKNOWN29
    case 0xC27766: {
        Instruction step(cpu, 0xF0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:319 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC27768: {
        Instruction step(cpu, 0xBD, 0x00A1BCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:320 AND #$00FF
    case 0xC2776B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:320 AND #$00FF
    // Overlapping static entry reached from 0xC2776B.
    case 0xC2776D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:321 BNE @UNKNOWN29
    case 0xC2776E: {
        Instruction step(cpu, 0xD0, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:322 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC27770: {
        Instruction step(cpu, 0xBD, 0x00A1CBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:323 AND #$00FF
    case 0xC27773: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:323 AND #$00FF
    // Overlapping static entry reached from 0xC27773.
    case 0xC27775: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:324 CMP #STATUS_0::UNCONSCIOUS
    case 0xC27776: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:324 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC27776.
    case 0xC27778: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:325 BEQ @UNKNOWN29
    case 0xC27779: {
        Instruction step(cpu, 0xF0, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:326 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC2777B: {
        Instruction step(cpu, 0xBD, 0x00A1BDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:327 AND #$00FF
    case 0xC2777E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:327 AND #$00FF
    // Overlapping static entry reached from 0xC2777E.
    case 0xC27780: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:328 BNE @UNKNOWN29
    case 0xC27781: {
        Instruction step(cpu, 0xD0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:329 TXA
    case 0xC27783: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:330 CLC
    case 0xC27784: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:331 ADC #.LOWORD(BATTLERS_TABLE) + battler::row
    case 0xC27785: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000BEu : 0x00A1BEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:331 ADC #.LOWORD(BATTLERS_TABLE) + battler::row
    // Overlapping static entry reached from 0xC27785.
    case 0xC27787: {
        Instruction step(cpu, 0xA1, 0x0000A8u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:332 TAY
    case 0xC27788: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:333 STY @LOCAL06
    case 0xC27789: {
        Instruction step(cpu, 0x84, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:334 LDA __BSS_START__,Y
    case 0xC2778B: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:335 AND #$00FF
    case 0xC2778E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:335 AND #$00FF
    // Overlapping static entry reached from 0xC2778E.
    case 0xC27790: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:336 LDY #.SIZEOF(char_struct)
    case 0xC27791: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:336 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC27791.
    case 0xC27793: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:337 JSL MULT168
    case 0xC27794: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:338 TAX
    case 0xC27798: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:339 LDA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC27799: {
        Instruction step(cpu, 0xBD, 0x009CC3u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:340 BNE @UNKNOWN29
    case 0xC2779C: {
        Instruction step(cpu, 0xD0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:341 LDA #1
    case 0xC2779E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:341 LDA #1
    // Overlapping static entry reached from 0xC2779E.
    case 0xC277A0: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:342 LDX @LOCAL05
    case 0xC277A1: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:343 STA BATTLERS_TABLE+battler::hp_target,X
    case 0xC277A3: {
        Instruction step(cpu, 0x9D, 0x00A1C1u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:344 LDY @LOCAL06
    case 0xC277A6: {
        Instruction step(cpu, 0xA4, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:345 LDA __BSS_START__,Y
    case 0xC277A8: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:346 AND #$00FF
    case 0xC277AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:346 AND #$00FF
    // Overlapping static entry reached from 0xC277AB.
    case 0xC277AD: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:347 LDY #.SIZEOF(char_struct)
    case 0xC277AE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:347 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC277AE.
    case 0xC277B0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:348 JSL MULT168
    case 0xC277B1: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:349 TAX
    case 0xC277B5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:350 LDA #1
    case 0xC277B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:350 LDA #1
    // Overlapping static entry reached from 0xC277B6.
    case 0xC277B8: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:351 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC277B9: {
        Instruction step(cpu, 0x9D, 0x009CC5u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:353 LDA @LOCAL07
    case 0xC277BC: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:354 INC
    case 0xC277BE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:355 STA @LOCAL07
    case 0xC277BF: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:357 CMP #TOTAL_PARTY_COUNT
    case 0xC277C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:357 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC277C1.
    case 0xC277C3: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:358 BCC @UNKNOWN28
    case 0xC277C4: {
        Instruction step(cpu, 0x90, 0x000090u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:360 LDA @VIRTUAL02
    case 0xC277C6: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:361 CLC
    case 0xC277C8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:362 ADC #battler::exp
    case 0xC277C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:362 ADC #battler::exp
    // Overlapping static entry reached from 0xC277C9.
    case 0xC277CB: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:363 TAY
    case 0xC277CC: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC277CD: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC277D0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC277D2: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC277D5: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC277D7: {
        Instruction step(cpu, 0xAD, 0x00AB76u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC277DA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC277DC: {
        Instruction step(cpu, 0xAD, 0x00AB78u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC277DF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:366 CLC
    case 0xC277E1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC277E2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC277E4: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC277E6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC277E8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC277EA: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC277EC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC277EE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC277F0: {
        Instruction step(cpu, 0x8D, 0x00AB76u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC277F3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC277F5: {
        Instruction step(cpu, 0x8D, 0x00AB78u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:369 LDX @VIRTUAL02
    case 0xC277F8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:370 LDA a:battler::money,X
    case 0xC277FA: {
        Instruction step(cpu, 0xBD, 0x00003Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:371 CLC
    case 0xC277FD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:372 ADC BATTLE_MONEY_SCRATCH
    case 0xC277FE: {
        Instruction step(cpu, 0x6D, 0x00AB7Au, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:373 STA BATTLE_MONEY_SCRATCH
    case 0xC27801: {
        Instruction step(cpu, 0x8D, 0x00AB7Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:375 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27804: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:375 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27804.
    case 0xC27806: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:375 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27807: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:375 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27806.
    case 0xC27808: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:375 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27809: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:375 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27809.
    case 0xC2780B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:375 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC2780C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:379 LDX @VIRTUAL02
    case 0xC2780E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:380 LDA a:battler::id,X
    case 0xC27810: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:381 LDY #.SIZEOF(enemy_data)
    case 0xC27813: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:381 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC27813.
    case 0xC27815: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:382 JSL MULT168
    case 0xC27816: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:383 CLC
    case 0xC2781A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:384 ADC #enemy_data::final_action
    case 0xC2781B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Du : 0x00003Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:384 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC2781B.
    case 0xC2781D: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/ko_target.asm:386 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2781E: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/ko_target.asm:386 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27820: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/ko_target.asm:386 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27822: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/ko_target.asm:386 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27824: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:387 CLC
    case 0xC27826: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:388 ADC @VIRTUAL06
    case 0xC27827: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:389 STA @VIRTUAL06
    case 0xC27829: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:390 LDA [@VIRTUAL06]
    case 0xC2782B: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:391 BEQL @UNKNOWN33
    case 0xC2782D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:391 BEQL @UNKNOWN33
    case 0xC2782F: {
        Instruction step(cpu, 0x4C, 0x00799Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:392 LDA #1
    case 0xC27832: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:392 LDA #1
    // Overlapping static entry reached from 0xC27832.
    case 0xC27834: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:393 STA ENEMY_PERFORMING_FINAL_ATTACK
    case 0xC27835: {
        Instruction step(cpu, 0x8D, 0x00AC65u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:394 LDY CURRENT_ATTACKER
    case 0xC27838: {
        Instruction step(cpu, 0xAC, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:395 STY @LOCAL03
    case 0xC2783B: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:396 LDX CURRENT_TARGET
    case 0xC2783D: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:397 STX @LOCAL05
    case 0xC27840: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:398 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27842: {
        Instruction step(cpu, 0xAD, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:398 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27845: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:398 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27847: {
        Instruction step(cpu, 0xAD, 0x00AB70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:398 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2784A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:399 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2784C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:399 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2784E: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:399 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC27850: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:399 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC27852: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:400 LDA @VIRTUAL02
    case 0xC27854: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:401 STA CURRENT_ATTACKER
    case 0xC27856: {
        Instruction step(cpu, 0x8D, 0x00AB72u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:402 LDX @VIRTUAL02
    case 0xC27859: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:403 LDA a:battler::id,X
    case 0xC2785B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:404 LDY #.SIZEOF(enemy_data)
    case 0xC2785E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:404 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2785E.
    case 0xC27860: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:405 JSL MULT168
    case 0xC27861: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:406 CLC
    case 0xC27865: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:407 ADC #enemy_data::final_action
    case 0xC27866: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Du : 0x00003Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:407 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC27866.
    case 0xC27868: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/ko_target.asm:408 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27869: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/ko_target.asm:408 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2786B: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/ko_target.asm:408 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2786D: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/ko_target.asm:408 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2786F: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:409 CLC
    case 0xC27871: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:410 ADC @VIRTUAL06
    case 0xC27872: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:411 STA @VIRTUAL06
    case 0xC27874: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:412 LDA [@VIRTUAL06]
    case 0xC27876: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:436 LDX @VIRTUAL02
    case 0xC27878: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:437 STA a:battler::current_action,X
    case 0xC2787A: {
        Instruction step(cpu, 0x9D, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:438 LDX @VIRTUAL02
    case 0xC2787D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:439 LDA a:battler::id,X
    case 0xC2787F: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:440 LDY #.SIZEOF(enemy_data)
    case 0xC27882: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:440 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC27882.
    case 0xC27884: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:441 JSL MULT168
    case 0xC27885: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:442 CLC
    case 0xC27889: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:443 ADC #enemy_data::final_action_arg
    case 0xC2788A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000043u : 0x000043u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:443 ADC #enemy_data::final_action_arg
    // Overlapping static entry reached from 0xC2788A.
    case 0xC2788C: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/ko_target.asm:445 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2788D: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/ko_target.asm:445 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2788F: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/ko_target.asm:445 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27891: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/ko_target.asm:445 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27893: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:446 CLC
    case 0xC27895: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:447 ADC @VIRTUAL06
    case 0xC27896: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:448 STA @VIRTUAL06
    case 0xC27898: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:449 SEP #PROC_FLAGS::ACCUM8
    case 0xC2789A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:450 LDA [@VIRTUAL06]
    case 0xC2789C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:456 LDX @VIRTUAL02
    case 0xC2789E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:457 STA a:battler::current_action_argument,X
    case 0xC278A0: {
        Instruction step(cpu, 0x9D, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:458 REP #PROC_FLAGS::ACCUM8
    case 0xC278A3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:459 LDA CURRENT_ATTACKER
    case 0xC278A5: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:460 JSL CHOOSE_TARGET
    case 0xC278A8: {
        Instruction step(cpu, 0x22, 0xC24344u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:461 LDA CURRENT_ATTACKER
    case 0xC278AC: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:462 JSL UNKNOWN_C24703
    case 0xC278AF: {
        Instruction step(cpu, 0x22, 0xC245D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:463 LDA #0
    case 0xC278B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:463 LDA #0
    // Overlapping static entry reached from 0xC278B3.
    case 0xC278B5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:464 JSL FIX_ATTACKER_NAME
    case 0xC278B6: {
        Instruction step(cpu, 0x22, 0xC23AB9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:465 JSL UNKNOWN_C23E32
    case 0xC278BA: {
        Instruction step(cpu, 0x22, 0xC23D07u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:467 LOADPTR BATTLE_ACTION_TABLE, @LOCAL01
    case 0xC278BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:467 LOADPTR BATTLE_ACTION_TABLE, @LOCAL01
    // Overlapping static entry reached from 0xC278BE.
    case 0xC278C0: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:467 LOADPTR BATTLE_ACTION_TABLE, @LOCAL01
    case 0xC278C1: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:467 LOADPTR BATTLE_ACTION_TABLE, @LOCAL01
    case 0xC278C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:467 LOADPTR BATTLE_ACTION_TABLE, @LOCAL01
    // Overlapping static entry reached from 0xC278C3.
    case 0xC278C5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:467 LOADPTR BATTLE_ACTION_TABLE, @LOCAL01
    case 0xC278C6: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:471 LDX @VIRTUAL02
    case 0xC278C8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:472 LDA a:battler::id,X
    case 0xC278CA: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:473 LDY #.SIZEOF(enemy_data)
    case 0xC278CD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:473 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC278CD.
    case 0xC278CF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:474 JSL MULT168
    case 0xC278D0: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:475 CLC
    case 0xC278D4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:476 ADC #enemy_data::final_action
    case 0xC278D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Du : 0x00003Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:476 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC278D5.
    case 0xC278D7: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/ko_target.asm:478 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC278D8: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/ko_target.asm:478 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC278DA: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/ko_target.asm:478 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC278DC: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/ko_target.asm:478 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC278DE: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:479 CLC
    case 0xC278E0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:480 ADC @VIRTUAL06
    case 0xC278E1: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:481 STA @VIRTUAL06
    case 0xC278E3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:482 LDA [@VIRTUAL06]
    case 0xC278E5: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC278E7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC278E9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC278EA: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC278EC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC278ED: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:488 INC
    case 0xC278EE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:489 INC
    case 0xC278EF: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:490 INC
    case 0xC278F0: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:491 INC
    case 0xC278F1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:493 PHA
    case 0xC278F2: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:494 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC278F3: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:494 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC278F5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:494 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC278F7: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:494 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC278F9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:495 PLA
    case 0xC278FB: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:499 CLC
    case 0xC278FC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:500 ADC @VIRTUAL06
    case 0xC278FD: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:501 STA @VIRTUAL06
    case 0xC278FF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27901: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC27901.
    case 0xC27903: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27904: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27906: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27907: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27909: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2790B: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2790D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2790F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27911: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27913: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:504 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC27915: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:505 LDX @VIRTUAL02
    case 0xC27919: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:506 LDA a:battler::id,X
    case 0xC2791B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:507 LDY #.SIZEOF(enemy_data)
    case 0xC2791E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:507 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2791E.
    case 0xC27920: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:508 JSL MULT168
    case 0xC27921: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:509 CLC
    case 0xC27925: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:510 ADC #enemy_data::final_action
    case 0xC27926: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Du : 0x00003Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:510 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC27926.
    case 0xC27928: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/ko_target.asm:512 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27929: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/ko_target.asm:512 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2792B: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/ko_target.asm:512 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2792D: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/ko_target.asm:512 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2792F: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:513 CLC
    case 0xC27931: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:514 ADC @VIRTUAL06
    case 0xC27932: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:515 STA @VIRTUAL06
    case 0xC27934: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:516 LDA [@VIRTUAL06]
    case 0xC27936: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC27938: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC2793A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC2793B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC2793D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC2793E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:522 CLC
    case 0xC2793F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:523 ADC #battle_action::battle_function_pointer
    case 0xC27940: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:523 ADC #battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC27940.
    case 0xC27942: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:525 PHA
    case 0xC27943: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:526 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC27944: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:526 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC27946: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:526 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC27948: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:526 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2794A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:527 PLA
    case 0xC2794C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:528 CLC
    case 0xC2794D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:529 ADC @VIRTUAL06
    case 0xC2794E: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:530 STA @VIRTUAL06
    case 0xC27950: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:531 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27952: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:531 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27952.
    case 0xC27954: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:531 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27955: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:531 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27957: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:531 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27958: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:531 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2795A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:531 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2795C: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:532 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2795E: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:532 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC27960: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:532 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC27962: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:532 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC27964: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:540 JSL UNKNOWN_C240A4
    case 0xC27966: {
        Instruction step(cpu, 0x22, 0xC23F58u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:541 STZ ENEMY_PERFORMING_FINAL_ATTACK
    case 0xC2796A: {
        Instruction step(cpu, 0x9C, 0x00AC65u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:543 LDY @LOCAL03
    case 0xC2796D: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:544 STY CURRENT_ATTACKER
    case 0xC2796F: {
        Instruction step(cpu, 0x8C, 0x00AB72u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:545 LDX @LOCAL05
    case 0xC27972: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:546 STX CURRENT_TARGET
    case 0xC27974: {
        Instruction step(cpu, 0x8E, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:547 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC27977: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:547 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC27979: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:547 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2797B: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:547 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2797D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2797F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC27981: {
        Instruction step(cpu, 0x8D, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC27984: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC27986: {
        Instruction step(cpu, 0x8D, 0x00AB70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:556 LDA #0
    case 0xC27989: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:556 LDA #0
    // Overlapping static entry reached from 0xC27989.
    case 0xC2798B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:557 JSL FIX_ATTACKER_NAME
    case 0xC2798C: {
        Instruction step(cpu, 0x22, 0xC23AB9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:558 JSL FIX_TARGET_NAME
    case 0xC27990: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:559 LDA SPECIAL_DEFEAT
    case 0xC27994: {
        Instruction step(cpu, 0xAD, 0x00ABE3u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:560 BNEL @UNKNOWN62
    case 0xC27997: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:560 BNEL @UNKNOWN62
    case 0xC27999: {
        Instruction step(cpu, 0x4C, 0x007C29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:562 LDA SKIP_DEATH_TEXT_AND_CLEANUP
    case 0xC2799C: {
        Instruction step(cpu, 0xAD, 0x00AC67u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:563 BNEL @UNKNOWN62
    case 0xC2799F: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:563 BNEL @UNKNOWN62
    case 0xC279A1: {
        Instruction step(cpu, 0x4C, 0x007C29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC279A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC279A4.
    case 0xC279A6: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC279A7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC279A6.
    case 0xC279A8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC279A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC279A9.
    case 0xC279AB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC279AC: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:565 LDX @VIRTUAL02
    case 0xC279AE: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:566 LDA a:battler::id,X
    case 0xC279B0: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:567 LDY #.SIZEOF(enemy_data)
    case 0xC279B3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:567 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC279B3.
    case 0xC279B5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:568 JSL MULT168
    case 0xC279B6: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:569 CLC
    case 0xC279BA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:570 ADC #enemy_data::death_text_ptr
    case 0xC279BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:570 ADC #enemy_data::death_text_ptr
    // Overlapping static entry reached from 0xC279BB.
    case 0xC279BD: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:571 CLC
    case 0xC279BE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:572 ADC @VIRTUAL0A
    case 0xC279BF: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:573 STA @VIRTUAL0A
    case 0xC279C1: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC279C3.
    case 0xC279C5: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C6: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C9: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279CB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279CD: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279CF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279D1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279D3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279D5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:576 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC279D7: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:577 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC279DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:577 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC279DB.
    case 0xC279DD: {
        Instruction step(cpu, 0xA1, 0x0000A2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:578 LDX #0
    case 0xC279DE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:578 LDX #0
    // Overlapping static entry reached from 0xC279DD.
    case 0xC279DF: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:578 LDX #0
    // Overlapping static entry reached from 0xC279DE.
    case 0xC279E0: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:579 STX @LOCAL07
    case 0xC279E1: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:580 BRA @UNKNOWN36
    case 0xC279E3: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:582 TAX
    case 0xC279E5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:583 SEP #PROC_FLAGS::ACCUM8
    case 0xC279E6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:584 STZ a:battler::use_alt_spritemap,X
    case 0xC279E8: {
        Instruction step(cpu, 0x9E, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:585 CLC
    case 0xC279EB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:586 REP #PROC_FLAGS::ACCUM8
    case 0xC279EC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:587 ADC #.SIZEOF(battler)
    case 0xC279EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:587 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC279EE.
    case 0xC279F0: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:588 LDX @LOCAL07
    case 0xC279F1: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:589 INX
    case 0xC279F3: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:590 STX @LOCAL07
    case 0xC279F4: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:592 CPX #BATTLER_COUNT
    case 0xC279F6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:592 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC279F6.
    case 0xC279F8: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:593 BCC @UNKNOWN35
    case 0xC279F9: {
        Instruction step(cpu, 0x90, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:594 SEP #PROC_FLAGS::ACCUM8
    case 0xC279FB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:595 LDA #1
    case 0xC279FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:596 LDX @VIRTUAL02
    case 0xC279FF: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:596 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC279FD.
    case 0xC27A00: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/ko_target.asm:597 STA a:battler::use_alt_spritemap,X
    case 0xC27A01: {
        Instruction step(cpu, 0x9D, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:598 REP #PROC_FLAGS::ACCUM8
    case 0xC27A04: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:599 LDA #10
    case 0xC27A06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:599 LDA #10
    // Overlapping static entry reached from 0xC27A06.
    case 0xC27A08: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:600 JSL UNKNOWN_C2FAD8
    case 0xC27A09: {
        Instruction step(cpu, 0x22, 0xC2F9F1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:601 LDA #1
    case 0xC27A0D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:601 LDA #1
    // Overlapping static entry reached from 0xC27A0D.
    case 0xC27A0F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:602 STA @VIRTUAL04
    case 0xC27A10: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:603 BRA @UNKNOWN38
    case 0xC27A12: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:605 LDA #31
    case 0xC27A14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:605 LDA #31
    // Overlapping static entry reached from 0xC27A14.
    case 0xC27A16: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:606 STA @LOCAL00
    case 0xC27A17: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:607 TAY
    case 0xC27A19: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:608 TAX
    case 0xC27A1A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:609 STX @LOCAL05
    case 0xC27A1B: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:610 LDX @VIRTUAL02
    case 0xC27A1D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:611 LDA a:battler::vram_sprite_index,X
    case 0xC27A1F: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:612 AND #$00FF
    case 0xC27A22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:612 AND #$00FF
    // Overlapping static entry reached from 0xC27A22.
    case 0xC27A24: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:613 ASL
    case 0xC27A25: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:614 ASL
    case 0xC27A26: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:615 ASL
    case 0xC27A27: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:616 ASL
    case 0xC27A28: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:617 CLC
    case 0xC27A29: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:618 ADC @VIRTUAL04
    case 0xC27A2A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:619 LDX @LOCAL05
    case 0xC27A2C: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:620 JSL UNKNOWN_C2FB35
    case 0xC27A2E: {
        Instruction step(cpu, 0x22, 0xC2FA4Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:621 INC @VIRTUAL04
    case 0xC27A32: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:623 LDA @VIRTUAL04
    case 0xC27A34: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:624 CMP #16
    case 0xC27A36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:624 CMP #16
    // Overlapping static entry reached from 0xC27A36.
    case 0xC27A38: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:625 BCC @UNKNOWN37
    case 0xC27A39: {
        Instruction step(cpu, 0x90, 0x0000D9u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:626 LDA #SIXTH_OF_A_SECOND
    case 0xC27A3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:626 LDA #SIXTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC27A3B.
    case 0xC27A3D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:627 JSR WAIT
    case 0xC27A3E: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/ko_target.asm:628 LDA #20
    case 0xC27A41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:628 LDA #20
    // Overlapping static entry reached from 0xC27A41.
    case 0xC27A43: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:629 JSL UNKNOWN_C2FAD8
    case 0xC27A44: {
        Instruction step(cpu, 0x22, 0xC2F9F1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:630 LDA #1
    case 0xC27A48: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:630 LDA #1
    // Overlapping static entry reached from 0xC27A48.
    case 0xC27A4A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:631 STA @VIRTUAL04
    case 0xC27A4B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:632 BRA @UNKNOWN40
    case 0xC27A4D: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/ko_target.asm:634 STZ_BADOPT @LOCAL00
    case 0xC27A4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/ko_target.asm:634 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC27A4F.
    case 0xC27A51: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/ko_target.asm:634 STZ_BADOPT @LOCAL00
    case 0xC27A52: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:636 TAY
    case 0xC27A54: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:637 TAX
    case 0xC27A55: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:642 STX @LOCAL05
    case 0xC27A56: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:643 LDX @VIRTUAL02
    case 0xC27A58: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:644 LDA a:battler::vram_sprite_index,X
    case 0xC27A5A: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:645 AND #$00FF
    case 0xC27A5D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:645 AND #$00FF
    // Overlapping static entry reached from 0xC27A5D.
    case 0xC27A5F: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:646 ASL
    case 0xC27A60: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:647 ASL
    case 0xC27A61: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:648 ASL
    case 0xC27A62: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:649 ASL
    case 0xC27A63: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:650 CLC
    case 0xC27A64: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:651 ADC @VIRTUAL04
    case 0xC27A65: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:652 LDX @LOCAL05
    case 0xC27A67: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:653 JSL UNKNOWN_C2FB35
    case 0xC27A69: {
        Instruction step(cpu, 0x22, 0xC2FA4Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:654 INC @VIRTUAL04
    case 0xC27A6D: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:656 LDA @VIRTUAL04
    case 0xC27A6F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:657 CMP #16
    case 0xC27A71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:657 CMP #16
    // Overlapping static entry reached from 0xC27A71.
    case 0xC27A73: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:658 BCC @UNKNOWN39
    case 0xC27A74: {
        Instruction step(cpu, 0x90, 0x0000D9u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:659 LDA #THIRD_OF_A_SECOND
    case 0xC27A76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:659 LDA #THIRD_OF_A_SECOND
    // Overlapping static entry reached from 0xC27A76.
    case 0xC27A78: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:660 JSR WAIT
    case 0xC27A79: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/ko_target.asm:661 SEP #PROC_FLAGS::ACCUM8
    case 0xC27A7C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:662 LDA #STATUS_0::UNCONSCIOUS
    case 0xC27A7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:663 LDX @VIRTUAL02
    case 0xC27A80: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:663 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC27A7E.
    case 0xC27A81: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/ko_target.asm:664 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27A82: {
        Instruction step(cpu, 0x9D, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:665 LDX @VIRTUAL02
    case 0xC27A85: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:666 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC27A87: {
        Instruction step(cpu, 0x9E, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:667 LDX @VIRTUAL02
    case 0xC27A8A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:668 STZ a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC27A8C: {
        Instruction step(cpu, 0x9E, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:669 LDX @VIRTUAL02
    case 0xC27A8F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:670 STZ a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC27A91: {
        Instruction step(cpu, 0x9E, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:671 LDX @VIRTUAL02
    case 0xC27A94: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:672 STZ a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC27A96: {
        Instruction step(cpu, 0x9E, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:673 LDX @VIRTUAL02
    case 0xC27A99: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:674 STZ a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC27A9B: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:675 LDX @VIRTUAL02
    case 0xC27A9E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:676 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC27AA0: {
        Instruction step(cpu, 0x9E, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:677 LDX @VIRTUAL02
    case 0xC27AA3: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:678 REP #PROC_FLAGS::ACCUM8
    case 0xC27AA5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:679 STZ a:battler::hp_target,X
    case 0xC27AA7: {
        Instruction step(cpu, 0x9E, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:680 LDX @VIRTUAL02
    case 0xC27AAA: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:681 LDA a:battler::id,X
    case 0xC27AAC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:682 LDY #.SIZEOF(enemy_data)
    case 0xC27AAF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:682 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC27AAF.
    case 0xC27AB1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:683 JSL MULT168
    case 0xC27AB2: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:684 CLC
    case 0xC27AB6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:685 ADC #enemy_data::death_type
    case 0xC27AB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000049u : 0x000049u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:685 ADC #enemy_data::death_type
    // Overlapping static entry reached from 0xC27AB7.
    case 0xC27AB9: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:686 TAX
    case 0xC27ABA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:687 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC27ABB: {
        Instruction step(cpu, 0xBF, 0xD5A440u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:688 AND #$00FF
    case 0xC27ABF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:688 AND #$00FF
    // Overlapping static entry reached from 0xC27ABF.
    case 0xC27AC1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:689 BEQL @UNKNOWN54
    case 0xC27AC2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:689 BEQL @UNKNOWN54
    case 0xC27AC4: {
        Instruction step(cpu, 0x4C, 0x007B84u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:690 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * (FIRST_ENEMY_INDEX))
    case 0xC27AC7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Eu : 0x00A41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:690 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * (FIRST_ENEMY_INDEX))
    // Overlapping static entry reached from 0xC27AC7.
    case 0xC27AC9: {
        Instruction step(cpu, 0xA4, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:691 LDY #FIRST_ENEMY_INDEX
    case 0xC27ACA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:691 LDY #FIRST_ENEMY_INDEX
    // Overlapping static entry reached from 0xC27AC9.
    case 0xC27ACB: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/ko_target.asm:691 LDY #FIRST_ENEMY_INDEX
    // Overlapping static entry reached from 0xC27ACA.
    case 0xC27ACC: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:692 BRA @UNKNOWN44
    case 0xC27ACD: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:694 LDA a:battler::consciousness,X
    case 0xC27ACF: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:695 AND #$00FF
    case 0xC27AD2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:695 AND #$00FF
    // Overlapping static entry reached from 0xC27AD2.
    case 0xC27AD4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:696 BEQ @UNKNOWN43
    case 0xC27AD5: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:697 SEP #PROC_FLAGS::ACCUM8
    case 0xC27AD7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:698 LDA #1
    case 0xC27AD9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:699 STA a:battler::use_alt_spritemap,X
    case 0xC27ADB: {
        Instruction step(cpu, 0x9D, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:699 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC27AD9.
    case 0xC27ADC: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/battle/ko_target.asm:699 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC27ADC.
    case 0xC27ADD: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:701 REP #PROC_FLAGS::ACCUM8
    case 0xC27ADE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:702 TXA
    case 0xC27AE0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:703 CLC
    case 0xC27AE1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:704 ADC #.SIZEOF(battler)
    case 0xC27AE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:704 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27AE2.
    case 0xC27AE4: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:705 TAX
    case 0xC27AE5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:706 INY
    case 0xC27AE6: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:708 CPY #BATTLER_COUNT
    case 0xC27AE7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:708 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC27AE7.
    case 0xC27AE9: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:709 BCC @UNKNOWN42
    case 0xC27AEA: {
        Instruction step(cpu, 0x90, 0x0000E3u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:710 LDA #SFX::ENEMY_DEFEATED
    case 0xC27AEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:710 LDA #SFX::ENEMY_DEFEATED
    // Overlapping static entry reached from 0xC27AEC.
    case 0xC27AEE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:711 JSL PLAY_SOUND
    case 0xC27AEF: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:712 LDA #10
    case 0xC27AF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:712 LDA #10
    // Overlapping static entry reached from 0xC27AF3.
    case 0xC27AF5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:713 JSL UNKNOWN_C2FAD8
    case 0xC27AF6: {
        Instruction step(cpu, 0x22, 0xC2F9F1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:714 LDA #1
    case 0xC27AFA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:714 LDA #1
    // Overlapping static entry reached from 0xC27AFA.
    case 0xC27AFC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:715 STA @VIRTUAL04
    case 0xC27AFD: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:716 BRA @UNKNOWN47
    case 0xC27AFF: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:718 LDA @VIRTUAL04
    case 0xC27B01: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:719 AND #15
    case 0xC27B03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:719 AND #15
    // Overlapping static entry reached from 0xC27B03.
    case 0xC27B05: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:720 BEQ @UNKNOWN46
    case 0xC27B06: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:721 LDA #31
    case 0xC27B08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:721 LDA #31
    // Overlapping static entry reached from 0xC27B08.
    case 0xC27B0A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:722 STA @LOCAL00
    case 0xC27B0B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:723 TAY
    case 0xC27B0D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:724 TAX
    case 0xC27B0E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:725 LDA @VIRTUAL04
    case 0xC27B0F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:726 JSL UNKNOWN_C2FB35
    case 0xC27B11: {
        Instruction step(cpu, 0x22, 0xC2FA4Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:728 INC @VIRTUAL04
    case 0xC27B15: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:730 LDA @VIRTUAL04
    case 0xC27B17: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:731 CMP #64
    case 0xC27B19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:731 CMP #64
    // Overlapping static entry reached from 0xC27B19.
    case 0xC27B1B: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:732 BCC @UNKNOWN45
    case 0xC27B1C: {
        Instruction step(cpu, 0x90, 0x0000E3u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:733 LDA #SIXTH_OF_A_SECOND
    case 0xC27B1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:733 LDA #SIXTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC27B1E.
    case 0xC27B20: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:734 JSR WAIT
    case 0xC27B21: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/ko_target.asm:735 LDA #20
    case 0xC27B24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:735 LDA #20
    // Overlapping static entry reached from 0xC27B24.
    case 0xC27B26: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:736 JSL UNKNOWN_C2FAD8
    case 0xC27B27: {
        Instruction step(cpu, 0x22, 0xC2F9F1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:737 LDA #1
    case 0xC27B2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:737 LDA #1
    // Overlapping static entry reached from 0xC27B2B.
    case 0xC27B2D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:738 STA @VIRTUAL04
    case 0xC27B2E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:739 BRA @UNKNOWN50
    case 0xC27B30: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:741 LDA @VIRTUAL04
    case 0xC27B32: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:742 AND #15
    case 0xC27B34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:742 AND #15
    // Overlapping static entry reached from 0xC27B34.
    case 0xC27B36: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:743 BEQ @UNKNOWN49
    case 0xC27B37: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/ko_target.asm:744 STZ_BADOPT @LOCAL00
    case 0xC27B39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/ko_target.asm:744 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC27B39.
    case 0xC27B3B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/ko_target.asm:744 STZ_BADOPT @LOCAL00
    case 0xC27B3C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:746 TAY
    case 0xC27B3E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:747 TAX
    case 0xC27B3F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:752 LDA @VIRTUAL04
    case 0xC27B40: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:753 JSL UNKNOWN_C2FB35
    case 0xC27B42: {
        Instruction step(cpu, 0x22, 0xC2FA4Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:755 INC @VIRTUAL04
    case 0xC27B46: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:757 LDA @VIRTUAL04
    case 0xC27B48: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:758 CMP #64
    case 0xC27B4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:758 CMP #64
    // Overlapping static entry reached from 0xC27B4A.
    case 0xC27B4C: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:759 BCC @UNKNOWN48
    case 0xC27B4D: {
        Instruction step(cpu, 0x90, 0x0000E3u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:760 LDA #20
    case 0xC27B4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:760 LDA #20
    // Overlapping static entry reached from 0xC27B4F.
    case 0xC27B51: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:761 JSR WAIT
    case 0xC27B52: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/ko_target.asm:762 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC27B55: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Eu : 0x00A41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:762 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC27B55.
    case 0xC27B57: {
        Instruction step(cpu, 0xA4, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:763 LDY #8
    case 0xC27B58: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:763 LDY #8
    // Overlapping static entry reached from 0xC27B57.
    case 0xC27B59: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/ko_target.asm:763 LDY #8
    // Overlapping static entry reached from 0xC27B58.
    case 0xC27B5A: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:764 BRA @UNKNOWN53
    case 0xC27B5B: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:766 LDA a:battler::consciousness,X
    case 0xC27B5D: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:767 AND #$00FF
    case 0xC27B60: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:767 AND #$00FF
    // Overlapping static entry reached from 0xC27B60.
    case 0xC27B62: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:768 BEQ @UNKNOWN52
    case 0xC27B63: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:769 SEP #PROC_FLAGS::ACCUM8
    case 0xC27B65: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:770 LDA #STATUS_0::UNCONSCIOUS
    case 0xC27B67: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:771 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27B69: {
        Instruction step(cpu, 0x9D, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:771 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC27B67.
    case 0xC27B6A: {
        Instruction step(cpu, 0x1D, 0x00C200u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:773 REP #PROC_FLAGS::ACCUM8
    case 0xC27B6C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:773 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC27B6A.
    case 0xC27B6D: {
        Instruction step(cpu, 0x20, 0x00188Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/ko_target.asm:774 TXA
    case 0xC27B6E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:775 CLC
    case 0xC27B6F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:776 ADC #.SIZEOF(battler)
    case 0xC27B70: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:776 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27B70.
    case 0xC27B72: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:777 TAX
    case 0xC27B73: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:778 INY
    case 0xC27B74: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:780 CPY #BATTLER_COUNT
    case 0xC27B75: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:780 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC27B75.
    case 0xC27B77: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:781 BCC @UNKNOWN51
    case 0xC27B78: {
        Instruction step(cpu, 0x90, 0x0000E3u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:782 JSL UNKNOWN_C2F8F9
    case 0xC27B7A: {
        Instruction step(cpu, 0x22, 0xC2F812u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:783 LDA #2
    case 0xC27B7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:783 LDA #2
    // Overlapping static entry reached from 0xC27B7E.
    case 0xC27B80: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:784 STA SPECIAL_DEFEAT
    case 0xC27B81: {
        Instruction step(cpu, 0x8D, 0x00ABE3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:786 LDX @VIRTUAL02
    case 0xC27B84: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:787 LDA a:battler::npc_id,X
    case 0xC27B86: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:788 AND #$00FF
    case 0xC27B89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:788 AND #$00FF
    // Overlapping static entry reached from 0xC27B89.
    case 0xC27B8B: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:789 CMP #ENEMY::TINY_LIL_GHOST
    case 0xC27B8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:789 CMP #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27B8C.
    case 0xC27B8E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:790 BNEL @UNKNOWN62
    case 0xC27B8F: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:790 BNEL @UNKNOWN62
    case 0xC27B91: {
        Instruction step(cpu, 0x4C, 0x007C29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:791 LDY #0
    case 0xC27B94: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:791 LDY #0
    // Overlapping static entry reached from 0xC27B94.
    case 0xC27B96: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:792 STY @LOCAL07
    case 0xC27B97: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:793 BRA @UNKNOWN58
    case 0xC27B99: {
        Instruction step(cpu, 0x80, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:795 TYA
    case 0xC27B9B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:796 LDY #.SIZEOF(battler)
    case 0xC27B9C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:796 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27B9C.
    case 0xC27B9E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:797 JSL MULT168
    case 0xC27B9F: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:798 TAX
    case 0xC27BA3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:799 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC27BA4: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:800 AND #$00FF
    case 0xC27BA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:800 AND #$00FF
    // Overlapping static entry reached from 0xC27BA7.
    case 0xC27BA9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:801 BEQ @UNKNOWN57
    case 0xC27BAA: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:802 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC27BAC: {
        Instruction step(cpu, 0xBD, 0x00A1BDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:803 AND #$00FF
    case 0xC27BAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:803 AND #$00FF
    // Overlapping static entry reached from 0xC27BAF.
    case 0xC27BB1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:804 BNE @UNKNOWN57
    case 0xC27BB2: {
        Instruction step(cpu, 0xD0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:805 TXA
    case 0xC27BB4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:806 CLC
    case 0xC27BB5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:807 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC27BB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CBu : 0x00A1CBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:807 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC27BB6.
    case 0xC27BB8: {
        Instruction step(cpu, 0xA1, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:808 TAX
    case 0xC27BB9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:809 INX
    case 0xC27BBA: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:810 LDA __BSS_START__,X ; STATUS_GROUP::PERSISTENT_HARDHEAL
    case 0xC27BBB: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:811 AND #$00FF
    case 0xC27BBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:811 AND #$00FF
    // Overlapping static entry reached from 0xC27BBE.
    case 0xC27BC0: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:812 CMP #2
    case 0xC27BC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:812 CMP #2
    // Overlapping static entry reached from 0xC27BC1.
    case 0xC27BC3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:813 BNE @UNKNOWN57
    case 0xC27BC4: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:814 SEP #PROC_FLAGS::ACCUM8
    case 0xC27BC6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:815 LDA #0
    case 0xC27BC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:816 STA __BSS_START__,X
    case 0xC27BCA: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:816 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC27BC8.
    case 0xC27BCB: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:817 BRA @UNKNOWN61
    case 0xC27BCD: {
        Instruction step(cpu, 0x80, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:819 LDY @LOCAL07
    case 0xC27BCF: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:820 INY
    case 0xC27BD1: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:821 STY @LOCAL07
    case 0xC27BD2: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:823 CPY #TOTAL_PARTY_COUNT
    case 0xC27BD4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:823 CPY #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC27BD4.
    case 0xC27BD6: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:824 BCC @UNKNOWN56
    case 0xC27BD7: {
        Instruction step(cpu, 0x90, 0x0000C2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:825 BRA @UNKNOWN61
    case 0xC27BD9: {
        Instruction step(cpu, 0x80, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:827 REP #PROC_FLAGS::ACCUM8
    case 0xC27BDB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:828 TYA
    case 0xC27BDD: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:829 LDY #.SIZEOF(battler)
    case 0xC27BDE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:829 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27BDE.
    case 0xC27BE0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:830 JSL MULT168
    case 0xC27BE1: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:831 TAX
    case 0xC27BE5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:832 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC27BE6: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:833 AND #$00FF
    case 0xC27BE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:833 AND #$00FF
    // Overlapping static entry reached from 0xC27BE9.
    case 0xC27BEB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:834 BEQ @UNKNOWN60
    case 0xC27BEC: {
        Instruction step(cpu, 0xF0, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:835 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC27BEE: {
        Instruction step(cpu, 0xBD, 0x00A1BDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:836 AND #$00FF
    case 0xC27BF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:836 AND #$00FF
    // Overlapping static entry reached from 0xC27BF1.
    case 0xC27BF3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:837 BNE @UNKNOWN60
    case 0xC27BF4: {
        Instruction step(cpu, 0xD0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:838 TXA
    case 0xC27BF6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:839 CLC
    case 0xC27BF7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:840 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC27BF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CBu : 0x00A1CBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:840 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC27BF8.
    case 0xC27BFA: {
        Instruction step(cpu, 0xA1, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:841 TAX
    case 0xC27BFB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:842 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC27BFC: {
        Instruction step(cpu, 0xBD, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:843 AND #$00FF
    case 0xC27BFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:843 AND #$00FF
    // Overlapping static entry reached from 0xC27BFF.
    case 0xC27C01: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:844 CMP #STATUS_1::POSSESSED
    case 0xC27C02: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:844 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC27C02.
    case 0xC27C04: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:845 BNE @UNKNOWN60
    case 0xC27C05: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:846 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    case 0xC27C07: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000082u : 0x00A382u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:846 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    // Overlapping static entry reached from 0xC27C07.
    case 0xC27C09: {
        Instruction step(cpu, 0xA3, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:847 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC27C0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:847 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27C09.
    case 0xC27C0B: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:847 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27C0A.
    case 0xC27C0C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:848 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC27C0D: {
        Instruction step(cpu, 0x22, 0xC2B692u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:849 SEP #PROC_FLAGS::ACCUM8
    case 0xC27C11: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:850 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC27C13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x008DD5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:851 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC27C15: {
        Instruction step(cpu, 0x8D, 0x00A391u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:851 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC27C13.
    case 0xC27C16: {
        Instruction step(cpu, 0x91, 0x0000A3u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:852 LDA #1
    case 0xC27C18: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:853 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::has_taken_turn
    case 0xC27C1A: {
        Instruction step(cpu, 0x8D, 0x00A38Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:853 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::has_taken_turn
    // Overlapping static entry reached from 0xC27C18.
    case 0xC27C1B: {
        Instruction step(cpu, 0x8F, 0x22A4A3u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:855 LDY @LOCAL07
    case 0xC27C1D: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:856 INY
    case 0xC27C1F: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:857 STY @LOCAL07
    case 0xC27C20: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:859 LDY @LOCAL07
    case 0xC27C22: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:860 CPY #TOTAL_PARTY_COUNT
    case 0xC27C24: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:860 CPY #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC27C24.
    case 0xC27C26: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:861 BCC @UNKNOWN59
    case 0xC27C27: {
        Instruction step(cpu, 0x90, 0x0000B2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:863 REP #PROC_FLAGS::ACCUM8
    case 0xC27C29: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/ko_target.asm:864 END_C_FUNCTION
    case 0xC27C2B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/ko_target.asm:864 END_C_FUNCTION
    case 0xC27C2C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
