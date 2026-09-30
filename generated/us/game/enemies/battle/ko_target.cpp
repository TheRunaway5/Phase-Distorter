// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/ko_target.asm
bool resume_battle_ko_target(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/ko_target.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC27550: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27552: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27553: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27554: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27555: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x00FFDCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC27555.
    case 0xC27557: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27558: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27559: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:20 STA @VIRTUAL02
    case 0xC2755A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:20 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27557.
    case 0xC2755B: {
        Instruction step(cpu, 0x02, 0x00009Cu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/ko_target.asm:21 STZ SKIP_DEATH_TEXT_AND_CLEANUP
    case 0xC2755C: {
        Instruction step(cpu, 0x9C, 0x00AA92u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:22 LDX @VIRTUAL02
    case 0xC2755F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC27561: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:24 AND #$00FF
    case 0xC27564: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC27564.
    case 0xC27566: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:25 BNEL @UNKNOWN22
    case 0xC27567: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:25 BNEL @UNKNOWN22
    case 0xC27569: {
        Instruction step(cpu, 0x4C, 0x0077CAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:26 LDX @VIRTUAL02
    case 0xC2756C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:27 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC2756E: {
        Instruction step(cpu, 0xBD, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:28 AND #$00FF
    case 0xC27571: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC27571.
    case 0xC27573: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:29 CMP #STATUS_1::POSSESSED
    case 0xC27574: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:29 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC27574.
    case 0xC27576: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:30 BNEL @UNKNOWN10
    case 0xC27577: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:30 BNEL @UNKNOWN10
    case 0xC27579: {
        Instruction step(cpu, 0x4C, 0x007639u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:31 LDY #0
    case 0xC2757C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:31 LDY #0
    // Overlapping static entry reached from 0xC2757C.
    case 0xC2757E: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:32 STY @LOCAL07
    case 0xC2757F: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:33 JMP @UNKNOWN9
    case 0xC27581: {
        Instruction step(cpu, 0x4C, 0x00762Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:35 TYA
    case 0xC27584: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:36 LDY #.SIZEOF(battler)
    case 0xC27585: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:36 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27585.
    case 0xC27587: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:37 JSL MULT168
    case 0xC27588: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:38 STA @LOCAL06
    case 0xC2758C: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:39 TAX
    case 0xC2758E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:40 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2758F: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:41 AND #$00FF
    case 0xC27592: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC27592.
    case 0xC27594: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:42 BEQL @UNKNOWN8
    case 0xC27595: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:42 BEQL @UNKNOWN8
    case 0xC27597: {
        Instruction step(cpu, 0x4C, 0x00762Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:43 LDA @LOCAL06
    case 0xC2759A: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:44 TAX
    case 0xC2759C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:45 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC2759D: {
        Instruction step(cpu, 0xBD, 0x009FBBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:46 AND #$00FF
    case 0xC275A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC275A0.
    case 0xC275A2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:47 BNEL @UNKNOWN8
    case 0xC275A3: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:47 BNEL @UNKNOWN8
    case 0xC275A5: {
        Instruction step(cpu, 0x4C, 0x00762Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:48 LDA @LOCAL06
    case 0xC275A8: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:49 CLC
    case 0xC275AA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:50 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC275AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C9u : 0x009FC9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:50 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC275AB.
    case 0xC275AD: {
        Instruction step(cpu, 0x9F, 0x01BDAAu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:51 TAX
    case 0xC275AE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:52 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC275AF: {
        Instruction step(cpu, 0xBD, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:52 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    // Overlapping static entry reached from 0xC275AD.
    case 0xC275B1: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:53 AND #$00FF
    case 0xC275B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC275B2.
    case 0xC275B4: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:54 CMP #STATUS_1::POSSESSED
    case 0xC275B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:54 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC275B5.
    case 0xC275B7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:55 BNE @UNKNOWN8
    case 0xC275B8: {
        Instruction step(cpu, 0xD0, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:56 LDA @LOCAL06
    case 0xC275BA: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:57 CLC
    case 0xC275BC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC275BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC275BD.
    case 0xC275BF: {
        Instruction step(cpu, 0x9F, 0xA50485u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:59 STA @VIRTUAL04
    case 0xC275C0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:60 LDA @VIRTUAL02
    case 0xC275C2: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:60 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC275BF.
    case 0xC275C3: {
        Instruction step(cpu, 0x02, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/ko_target.asm:61 CMP @VIRTUAL04
    case 0xC275C4: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:62 BNE @UNKNOWN10
    case 0xC275C6: {
        Instruction step(cpu, 0xD0, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:63 LDA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC275C8: {
        Instruction step(cpu, 0xAD, 0x00A18Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:64 AND #$00FF
    case 0xC275CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC275CB.
    case 0xC275CD: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:65 CMP #ENEMY::TINY_LIL_GHOST
    case 0xC275CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:65 CMP #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC275CE.
    case 0xC275D0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:66 BNE @UNKNOWN10
    case 0xC275D1: {
        Instruction step(cpu, 0xD0, 0x000066u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:67 SEP #PROC_FLAGS::ACCUM8
    case 0xC275D3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:68 STZ BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::consciousness
    case 0xC275D5: {
        Instruction step(cpu, 0x9C, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:69 BRA @UNKNOWN7
    case 0xC275D8: {
        Instruction step(cpu, 0x80, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC275DA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:72 TYA
    case 0xC275DC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:73 LDY #.SIZEOF(battler)
    case 0xC275DD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:73 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC275DD.
    case 0xC275DF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:74 JSL MULT168
    case 0xC275E0: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:75 TAX
    case 0xC275E4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:76 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC275E5: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:77 AND #$00FF
    case 0xC275E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC275E8.
    case 0xC275EA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:78 BEQ @UNKNOWN6
    case 0xC275EB: {
        Instruction step(cpu, 0xF0, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:79 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC275ED: {
        Instruction step(cpu, 0xBD, 0x009FBBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:80 AND #$00FF
    case 0xC275F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC275F0.
    case 0xC275F2: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:81 BNE @UNKNOWN6
    case 0xC275F3: {
        Instruction step(cpu, 0xD0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:82 TXA
    case 0xC275F5: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:83 CLC
    case 0xC275F6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:84 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC275F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C9u : 0x009FC9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:84 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC275F7.
    case 0xC275F9: {
        Instruction step(cpu, 0x9F, 0x01BDAAu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:85 TAX
    case 0xC275FA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:86 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC275FB: {
        Instruction step(cpu, 0xBD, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:86 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    // Overlapping static entry reached from 0xC275F9.
    case 0xC275FD: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:87 AND #$00FF
    case 0xC275FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC275FE.
    case 0xC27600: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:88 CMP #STATUS_1::POSSESSED
    case 0xC27601: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:88 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC27601.
    case 0xC27603: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:89 BNE @UNKNOWN6
    case 0xC27604: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:90 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    case 0xC27606: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000080u : 0x00A180u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:90 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    // Overlapping static entry reached from 0xC27606.
    case 0xC27608: {
        Instruction step(cpu, 0xA1, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:91 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC27609: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:91 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27608.
    case 0xC2760A: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:91 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27609.
    case 0xC2760B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:92 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC2760C: {
        Instruction step(cpu, 0x22, 0xC2B6EBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC27610: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:94 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC27612: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x008DD5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:95 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC27614: {
        Instruction step(cpu, 0x8D, 0x00A18Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:95 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC27612.
    case 0xC27615: {
        Instruction step(cpu, 0x8F, 0x01A9A1u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:96 LDA #1
    case 0xC27617: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:97 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+13
    case 0xC27619: {
        Instruction step(cpu, 0x8D, 0x00A18Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:97 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+13
    // Overlapping static entry reached from 0xC27617.
    case 0xC2761A: {
        Instruction step(cpu, 0x8D, 0x00A4A1u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:99 LDY @LOCAL07
    case 0xC2761C: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:99 LDY @LOCAL07
    // Overlapping static entry reached from 0xC2761A.
    case 0xC2761D: {
        Instruction step(cpu, 0x22, 0x2284C8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:100 INY
    case 0xC2761E: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:101 STY @LOCAL07
    case 0xC2761F: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:103 LDY @LOCAL07
    case 0xC27621: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:104 CPY #6
    case 0xC27623: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:104 CPY #6
    // Overlapping static entry reached from 0xC27623.
    case 0xC27625: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:105 BCC @UNKNOWN5
    case 0xC27626: {
        Instruction step(cpu, 0x90, 0x0000B2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:106 BRA @UNKNOWN10
    case 0xC27628: {
        Instruction step(cpu, 0x80, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:108 LDY @LOCAL07
    case 0xC2762A: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:109 INY
    case 0xC2762C: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:110 STY @LOCAL07
    case 0xC2762D: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:112 CPY #6
    case 0xC2762F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:112 CPY #6
    // Overlapping static entry reached from 0xC2762F.
    case 0xC27631: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/ko_target.asm:113 BCCL @UNKNOWN2
    case 0xC27632: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/ko_target.asm:113 BCCL @UNKNOWN2
    case 0xC27634: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/ko_target.asm:113 BCCL @UNKNOWN2
    case 0xC27636: {
        Instruction step(cpu, 0x4C, 0x007584u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:115 SEP #PROC_FLAGS::ACCUM8
    case 0xC27639: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:116 LDA #STATUS_0::UNCONSCIOUS
    case 0xC2763B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:117 LDX @VIRTUAL02
    case 0xC2763D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:117 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2763B.
    case 0xC2763E: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/ko_target.asm:118 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2763F: {
        Instruction step(cpu, 0x9D, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:119 LDX @VIRTUAL02
    case 0xC27642: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:120 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC27644: {
        Instruction step(cpu, 0x9E, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:121 LDX @VIRTUAL02
    case 0xC27647: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:122 STZ a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC27649: {
        Instruction step(cpu, 0x9E, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:123 LDX @VIRTUAL02
    case 0xC2764C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:124 STZ a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC2764E: {
        Instruction step(cpu, 0x9E, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:125 LDX @VIRTUAL02
    case 0xC27651: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:126 STZ a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC27653: {
        Instruction step(cpu, 0x9E, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:127 LDX @VIRTUAL02
    case 0xC27656: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:128 STZ a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC27658: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:129 LDX @VIRTUAL02
    case 0xC2765B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:130 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC2765D: {
        Instruction step(cpu, 0x9E, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:131 REP #PROC_FLAGS::ACCUM8
    case 0xC27660: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:132 LDA @VIRTUAL02
    case 0xC27662: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:133 CLC
    case 0xC27664: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:134 ADC #battler::npc_id
    case 0xC27665: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:134 ADC #battler::npc_id
    // Overlapping static entry reached from 0xC27665.
    case 0xC27667: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:135 TAX
    case 0xC27668: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:136 STX @LOCAL07
    case 0xC27669: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:137 LDA __BSS_START__,X
    case 0xC2766B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:138 AND #$00FF
    case 0xC2766E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC2766E.
    case 0xC27670: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:139 BEQL @UNKNOWN21
    case 0xC27671: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:139 BEQL @UNKNOWN21
    case 0xC27673: {
        Instruction step(cpu, 0x4C, 0x007784u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27676: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27676.
    case 0xC27678: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27679: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27678.
    case 0xC2767A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC2767B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2767B.
    case 0xC2767D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC2767E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:141 LDX @VIRTUAL02
    case 0xC27680: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:142 LDA a:battler::id,X
    case 0xC27682: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:143 LDY #.SIZEOF(enemy_data)
    case 0xC27685: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:143 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC27685.
    case 0xC27687: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:144 JSL MULT168
    case 0xC27688: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:145 CLC
    case 0xC2768C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:146 ADC #enemy_data::death_text_ptr
    case 0xC2768D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000031u : 0x000031u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:146 ADC #enemy_data::death_text_ptr
    // Overlapping static entry reached from 0xC2768D.
    case 0xC2768F: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:147 CLC
    case 0xC27690: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:148 ADC @VIRTUAL0A
    case 0xC27691: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:149 STA @VIRTUAL0A
    case 0xC27693: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27695: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC27695.
    case 0xC27697: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27698: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2769A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2769B: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2769D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2769F: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC276A1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC276A3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC276A5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC276A7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:152 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC276A9: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:153 LDX @VIRTUAL02
    case 0xC276AD: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xC276AF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:155 STZ a:battler::consciousness,X
    case 0xC276B1: {
        Instruction step(cpu, 0x9E, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:156 LDX @LOCAL07
    case 0xC276B4: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:157 REP #PROC_FLAGS::ACCUM8
    case 0xC276B6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:158 LDA __BSS_START__,X ;battler::npc_id
    case 0xC276B8: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:159 AND #$00FF
    case 0xC276BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:159 AND #$00FF
    // Overlapping static entry reached from 0xC276BB.
    case 0xC276BD: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:160 TAX
    case 0xC276BE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:161 CPX #PARTY_MEMBER::TEDDY_BEAR
    case 0xC276BF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:161 CPX #PARTY_MEMBER::TEDDY_BEAR
    // Overlapping static entry reached from 0xC276BF.
    case 0xC276C1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:162 BEQ @UNKNOWN12
    case 0xC276C2: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:163 CPX #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    case 0xC276C4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:163 CPX #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    // Overlapping static entry reached from 0xC276C4.
    case 0xC276C6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:164 BNE @UNKNOWN14
    case 0xC276C7: {
        Instruction step(cpu, 0xD0, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:166 LDA @VIRTUAL02
    case 0xC276C9: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:167 CLC
    case 0xC276CB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:168 ADC #battler::row
    case 0xC276CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:168 ADC #battler::row
    // Overlapping static entry reached from 0xC276CC.
    case 0xC276CE: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:169 TAX
    case 0xC276CF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:170 STX @LOCAL05
    case 0xC276D0: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:171 LDA __BSS_START__,X
    case 0xC276D2: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:172 AND #$00FF
    case 0xC276D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC276D5.
    case 0xC276D7: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:179 TAX
    case 0xC276D8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:180 LDA GAME_STATE+game_state::party_npc_1,X
    case 0xC276D9: {
        Instruction step(cpu, 0xBD, 0x00983Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:182 AND #$00FF
    case 0xC276DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:182 AND #$00FF
    // Overlapping static entry reached from 0xC276DC.
    case 0xC276DE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:183 BEQL @UNKNOWN62
    case 0xC276DF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:183 BEQL @UNKNOWN62
    case 0xC276E1: {
        Instruction step(cpu, 0x4C, 0x007C92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:184 SEP #PROC_FLAGS::ACCUM8
    case 0xC276E4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:185 LDA #1
    case 0xC276E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:186 LDX @VIRTUAL02
    case 0xC276E8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:186 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC276E6.
    case 0xC276E9: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/ko_target.asm:187 STA a:battler::consciousness,X
    case 0xC276EA: {
        Instruction step(cpu, 0x9D, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:188 LDX @VIRTUAL02
    case 0xC276ED: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:189 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC276EF: {
        Instruction step(cpu, 0x9E, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:190 LDX @LOCAL05
    case 0xC276F2: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:191 REP #PROC_FLAGS::ACCUM8
    case 0xC276F4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:192 LDA __BSS_START__,X
    case 0xC276F6: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:193 AND #$00FF
    case 0xC276F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:193 AND #$00FF
    // Overlapping static entry reached from 0xC276F9.
    case 0xC276FB: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:194 ASL
    case 0xC276FC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:201 TAX
    case 0xC276FD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:202 LDA GAME_STATE+game_state::party_npc_1_hp,X
    case 0xC276FE: {
        Instruction step(cpu, 0xBD, 0x00983Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:204 LDX @VIRTUAL02
    case 0xC27701: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:205 STA a:battler::hp_target,X
    case 0xC27703: {
        Instruction step(cpu, 0x9D, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:206 LDX @VIRTUAL02
    case 0xC27706: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:207 STA a:battler::hp,X
    case 0xC27708: {
        Instruction step(cpu, 0x9D, 0x000011u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:208 LDX @LOCAL05
    case 0xC2770B: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:209 LDA __BSS_START__,X
    case 0xC2770D: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:210 AND #$00FF
    case 0xC27710: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:210 AND #$00FF
    // Overlapping static entry reached from 0xC27710.
    case 0xC27712: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:218 TAX
    case 0xC27713: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:219 SEP #PROC_FLAGS::ACCUM8
    case 0xC27714: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:220 LDA GAME_STATE+game_state::party_npc_1,X
    case 0xC27716: {
        Instruction step(cpu, 0xBD, 0x00983Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:222 LDX @VIRTUAL02
    case 0xC27719: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:223 STA a:battler::npc_id,X
    case 0xC2771B: {
        Instruction step(cpu, 0x9D, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:224 REP #PROC_FLAGS::ACCUM8
    case 0xC2771E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:225 AND #$00FF
    case 0xC27720: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:225 AND #$00FF
    // Overlapping static entry reached from 0xC27720.
    case 0xC27722: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:226 ASL
    case 0xC27723: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:227 TAX
    case 0xC27724: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:228 INX
    case 0xC27725: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:229 LDA f:NPC_AI_TABLE,X
    case 0xC27726: {
        Instruction step(cpu, 0xBF, 0xD58F23u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:230 AND #$00FF
    case 0xC2772A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:230 AND #$00FF
    // Overlapping static entry reached from 0xC2772A.
    case 0xC2772C: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:231 LDX @VIRTUAL02
    case 0xC2772D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:232 STA a:battler::id,X
    case 0xC2772F: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:233 JMP @UNKNOWN62
    case 0xC27732: {
        Instruction step(cpu, 0x4C, 0x007C92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:235 LDA GAME_STATE+game_state::party_npc_1
    case 0xC27735: {
        Instruction step(cpu, 0xAD, 0x00983Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:236 AND #$00FF
    case 0xC27738: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:236 AND #$00FF
    // Overlapping static entry reached from 0xC27738.
    case 0xC2773A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:237 BEQL @UNKNOWN62
    case 0xC2773B: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:237 BEQL @UNKNOWN62
    case 0xC2773D: {
        Instruction step(cpu, 0x4C, 0x007C92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:238 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC27740: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:238 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC27740.
    case 0xC27742: {
        Instruction step(cpu, 0x9F, 0x0000A0u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:239 LDY #0
    case 0xC27743: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:239 LDY #0
    // Overlapping static entry reached from 0xC27743.
    case 0xC27745: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:240 BRA @UNKNOWN18
    case 0xC27746: {
        Instruction step(cpu, 0x80, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:242 LDA a:battler::consciousness,X
    case 0xC27748: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:243 AND #$00FF
    case 0xC2774B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:243 AND #$00FF
    // Overlapping static entry reached from 0xC2774B.
    case 0xC2774D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:244 BEQ @UNKNOWN17
    case 0xC2774E: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:245 LDA a:battler::ally_or_enemy,X
    case 0xC27750: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:246 AND #$00FF
    case 0xC27753: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:246 AND #$00FF
    // Overlapping static entry reached from 0xC27753.
    case 0xC27755: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:247 BNE @UNKNOWN17
    case 0xC27756: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC27758: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:249 LDA a:battler::npc_id,X
    case 0xC2775A: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:250 CMP GAME_STATE+game_state::party_npc_1
    case 0xC2775D: {
        Instruction step(cpu, 0xCD, 0x00983Au, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:251 BNE @UNKNOWN17
    case 0xC27760: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:252 STZ a:battler::row,X
    case 0xC27762: {
        Instruction step(cpu, 0x9E, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:253 JMP @UNKNOWN62
    case 0xC27765: {
        Instruction step(cpu, 0x4C, 0x007C92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:255 REP #PROC_FLAGS::ACCUM8
    case 0xC27768: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:256 TXA
    case 0xC2776A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:257 CLC
    case 0xC2776B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:258 ADC #.SIZEOF(battler)
    case 0xC2776C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:258 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2776C.
    case 0xC2776E: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:259 TAX
    case 0xC2776F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:260 INY
    case 0xC27770: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:262 STY @VIRTUAL02
    case 0xC27771: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:263 LDA #BATTLER_COUNT
    case 0xC27773: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:263 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xC27773.
    case 0xC27775: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:264 CLC
    case 0xC27776: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:265 SBC @VIRTUAL02
    case 0xC27777: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC27779: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC2777B: {
        Instruction step(cpu, 0x10, 0x0000CBu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC2777D: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC2777F: {
        Instruction step(cpu, 0x30, 0x0000C7u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/ko_target.asm:267 JMP @UNKNOWN62
    case 0xC27781: {
        Instruction step(cpu, 0x4C, 0x007C92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:269 LDX @VIRTUAL02
    case 0xC27784: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:270 STZ a:battler::hp_target,X
    case 0xC27786: {
        Instruction step(cpu, 0x9E, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:271 LDA @VIRTUAL02
    case 0xC27789: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:272 CLC
    case 0xC2778B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:273 ADC #battler::row
    case 0xC2778C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:273 ADC #battler::row
    // Overlapping static entry reached from 0xC2778C.
    case 0xC2778E: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:274 TAX
    case 0xC2778F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:275 STX @LOCAL04
    case 0xC27790: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:276 LDA __BSS_START__,X
    case 0xC27792: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:277 AND #$00FF
    case 0xC27795: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:277 AND #$00FF
    // Overlapping static entry reached from 0xC27795.
    case 0xC27797: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:278 LDY #.SIZEOF(char_struct)
    case 0xC27798: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:278 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC27798.
    case 0xC2779A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:279 JSL MULT168
    case 0xC2779B: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:280 TAX
    case 0xC2779F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:281 STZ PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC277A0: {
        Instruction step(cpu, 0x9E, 0x009A15u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:282 LDX @LOCAL04
    case 0xC277A3: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:283 LDA __BSS_START__,X
    case 0xC277A5: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:284 AND #$00FF
    case 0xC277A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:284 AND #$00FF
    // Overlapping static entry reached from 0xC277A8.
    case 0xC277AA: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:285 LDY #.SIZEOF(char_struct)
    case 0xC277AB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:285 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC277AB.
    case 0xC277AD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:286 JSL MULT168
    case 0xC277AE: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:287 TAX
    case 0xC277B2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:288 LDA #1
    case 0xC277B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:288 LDA #1
    // Overlapping static entry reached from 0xC277B3.
    case 0xC277B5: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:289 STA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC277B6: {
        Instruction step(cpu, 0x9D, 0x009A13u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC277B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Bu : 0x006C6Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC277B9.
    case 0xC277BB: {
        Instruction step(cpu, 0x6C, 0x000E85u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC277BC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC277BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC277BE.
    case 0xC277C0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC277C1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC277C3: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:291 JMP @UNKNOWN62
    case 0xC277C7: {
        Instruction step(cpu, 0x4C, 0x007C92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:293 LDX @VIRTUAL02
    case 0xC277CA: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:294 LDA a:battler::id,X
    case 0xC277CC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:295 CMP #ENEMY::GIYGAS_2
    case 0xC277CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DAu : 0x0000DAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:295 CMP #ENEMY::GIYGAS_2
    // Overlapping static entry reached from 0xC277CF.
    case 0xC277D1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:296 BEQL @UNKNOWN62
    case 0xC277D2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:296 BEQL @UNKNOWN62
    case 0xC277D4: {
        Instruction step(cpu, 0x4C, 0x007C92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:297 CMP #ENEMY::GIYGAS_3
    case 0xC277D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DBu : 0x0000DBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:297 CMP #ENEMY::GIYGAS_3
    // Overlapping static entry reached from 0xC277D7.
    case 0xC277D9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:298 BEQL @UNKNOWN62
    case 0xC277DA: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:298 BEQL @UNKNOWN62
    case 0xC277DC: {
        Instruction step(cpu, 0x4C, 0x007C92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:299 CMP #ENEMY::GIYGAS_5
    case 0xC277DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DDu : 0x0000DDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:299 CMP #ENEMY::GIYGAS_5
    // Overlapping static entry reached from 0xC277DF.
    case 0xC277E1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:300 BEQL @UNKNOWN62
    case 0xC277E2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:300 BEQL @UNKNOWN62
    case 0xC277E4: {
        Instruction step(cpu, 0x4C, 0x007C92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:301 CMP #ENEMY::GIYGAS_6
    case 0xC277E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E5u : 0x0000E5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:301 CMP #ENEMY::GIYGAS_6
    // Overlapping static entry reached from 0xC277E7.
    case 0xC277E9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:302 BEQL @UNKNOWN62
    case 0xC277EA: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:302 BEQL @UNKNOWN62
    case 0xC277EC: {
        Instruction step(cpu, 0x4C, 0x007C92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:303 LDA #1
    case 0xC277EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:303 LDA #1
    // Overlapping static entry reached from 0xC277EF.
    case 0xC277F1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:304 JSL COUNT_CHARS
    case 0xC277F2: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:305 CMP #1
    case 0xC277F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:305 CMP #1
    // Overlapping static entry reached from 0xC277F6.
    case 0xC277F8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:306 BNEL @UNKNOWN31
    case 0xC277F9: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:306 BNEL @UNKNOWN31
    case 0xC277FB: {
        Instruction step(cpu, 0x4C, 0x007879u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:307 JSL RESET_HPPP_ROLLING
    case 0xC277FE: {
        Instruction step(cpu, 0x22, 0xC20F9Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:308 LDA #0
    case 0xC27802: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:308 LDA #0
    // Overlapping static entry reached from 0xC27802.
    case 0xC27804: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:309 STA @LOCAL07
    case 0xC27805: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:310 BRA @UNKNOWN30
    case 0xC27807: {
        Instruction step(cpu, 0x80, 0x00006Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:312 LDY #.SIZEOF(battler)
    case 0xC27809: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:312 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27809.
    case 0xC2780B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:313 JSL MULT168
    case 0xC2780C: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:314 TAX
    case 0xC27810: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:315 STX @LOCAL05
    case 0xC27811: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:316 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC27813: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:317 AND #$00FF
    case 0xC27816: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:317 AND #$00FF
    // Overlapping static entry reached from 0xC27816.
    case 0xC27818: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:318 BEQ @UNKNOWN29
    case 0xC27819: {
        Instruction step(cpu, 0xF0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:319 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2781B: {
        Instruction step(cpu, 0xBD, 0x009FBAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:320 AND #$00FF
    case 0xC2781E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:320 AND #$00FF
    // Overlapping static entry reached from 0xC2781E.
    case 0xC27820: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:321 BNE @UNKNOWN29
    case 0xC27821: {
        Instruction step(cpu, 0xD0, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:322 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC27823: {
        Instruction step(cpu, 0xBD, 0x009FC9u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:323 AND #$00FF
    case 0xC27826: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:323 AND #$00FF
    // Overlapping static entry reached from 0xC27826.
    case 0xC27828: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:324 CMP #STATUS_0::UNCONSCIOUS
    case 0xC27829: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:324 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC27829.
    case 0xC2782B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:325 BEQ @UNKNOWN29
    case 0xC2782C: {
        Instruction step(cpu, 0xF0, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:326 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC2782E: {
        Instruction step(cpu, 0xBD, 0x009FBBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:327 AND #$00FF
    case 0xC27831: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:327 AND #$00FF
    // Overlapping static entry reached from 0xC27831.
    case 0xC27833: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:328 BNE @UNKNOWN29
    case 0xC27834: {
        Instruction step(cpu, 0xD0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:329 TXA
    case 0xC27836: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:330 CLC
    case 0xC27837: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:331 ADC #.LOWORD(BATTLERS_TABLE) + battler::row
    case 0xC27838: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000BCu : 0x009FBCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:331 ADC #.LOWORD(BATTLERS_TABLE) + battler::row
    // Overlapping static entry reached from 0xC27838.
    case 0xC2783A: {
        Instruction step(cpu, 0x9F, 0x2084A8u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:332 TAY
    case 0xC2783B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:333 STY @LOCAL06
    case 0xC2783C: {
        Instruction step(cpu, 0x84, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:334 LDA __BSS_START__,Y
    case 0xC2783E: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:335 AND #$00FF
    case 0xC27841: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:335 AND #$00FF
    // Overlapping static entry reached from 0xC27841.
    case 0xC27843: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:336 LDY #.SIZEOF(char_struct)
    case 0xC27844: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:336 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC27844.
    case 0xC27846: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:337 JSL MULT168
    case 0xC27847: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:338 TAX
    case 0xC2784B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:339 LDA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC2784C: {
        Instruction step(cpu, 0xBD, 0x009A13u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:340 BNE @UNKNOWN29
    case 0xC2784F: {
        Instruction step(cpu, 0xD0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:341 LDA #1
    case 0xC27851: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:341 LDA #1
    // Overlapping static entry reached from 0xC27851.
    case 0xC27853: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:342 LDX @LOCAL05
    case 0xC27854: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:343 STA BATTLERS_TABLE+battler::hp_target,X
    case 0xC27856: {
        Instruction step(cpu, 0x9D, 0x009FBFu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:344 LDY @LOCAL06
    case 0xC27859: {
        Instruction step(cpu, 0xA4, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:345 LDA __BSS_START__,Y
    case 0xC2785B: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:346 AND #$00FF
    case 0xC2785E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:346 AND #$00FF
    // Overlapping static entry reached from 0xC2785E.
    case 0xC27860: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:347 LDY #.SIZEOF(char_struct)
    case 0xC27861: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:347 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC27861.
    case 0xC27863: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:348 JSL MULT168
    case 0xC27864: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:349 TAX
    case 0xC27868: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:350 LDA #1
    case 0xC27869: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:350 LDA #1
    // Overlapping static entry reached from 0xC27869.
    case 0xC2786B: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:351 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC2786C: {
        Instruction step(cpu, 0x9D, 0x009A15u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:353 LDA @LOCAL07
    case 0xC2786F: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:354 INC
    case 0xC27871: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:355 STA @LOCAL07
    case 0xC27872: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:357 CMP #TOTAL_PARTY_COUNT
    case 0xC27874: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:357 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC27874.
    case 0xC27876: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:358 BCC @UNKNOWN28
    case 0xC27877: {
        Instruction step(cpu, 0x90, 0x000090u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:360 LDA @VIRTUAL02
    case 0xC27879: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:361 CLC
    case 0xC2787B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:362 ADC #battler::exp
    case 0xC2787C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:362 ADC #battler::exp
    // Overlapping static entry reached from 0xC2787C.
    case 0xC2787E: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:363 TAY
    case 0xC2787F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC27880: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC27883: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC27885: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC27888: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2788A: {
        Instruction step(cpu, 0xAD, 0x00A974u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2788D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2788F: {
        Instruction step(cpu, 0xAD, 0x00A976u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC27892: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:366 CLC
    case 0xC27894: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27895: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27897: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27899: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2789B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2789D: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2789F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC278A1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC278A3: {
        Instruction step(cpu, 0x8D, 0x00A974u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC278A6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC278A8: {
        Instruction step(cpu, 0x8D, 0x00A976u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:369 LDX @VIRTUAL02
    case 0xC278AB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:370 LDA a:battler::money,X
    case 0xC278AD: {
        Instruction step(cpu, 0xBD, 0x00003Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:371 CLC
    case 0xC278B0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:372 ADC BATTLE_MONEY_SCRATCH
    case 0xC278B1: {
        Instruction step(cpu, 0x6D, 0x00A978u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:373 STA BATTLE_MONEY_SCRATCH
    case 0xC278B4: {
        Instruction step(cpu, 0x8D, 0x00A978u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:377 LOADPTR ENEMY_CONFIGURATION_TABLE, @LOCAL03
    case 0xC278B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:377 LOADPTR ENEMY_CONFIGURATION_TABLE, @LOCAL03
    // Overlapping static entry reached from 0xC278B7.
    case 0xC278B9: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:377 LOADPTR ENEMY_CONFIGURATION_TABLE, @LOCAL03
    case 0xC278BA: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:377 LOADPTR ENEMY_CONFIGURATION_TABLE, @LOCAL03
    // Overlapping static entry reached from 0xC278B9.
    case 0xC278BB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:377 LOADPTR ENEMY_CONFIGURATION_TABLE, @LOCAL03
    case 0xC278BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:377 LOADPTR ENEMY_CONFIGURATION_TABLE, @LOCAL03
    // Overlapping static entry reached from 0xC278BC.
    case 0xC278BE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:377 LOADPTR ENEMY_CONFIGURATION_TABLE, @LOCAL03
    case 0xC278BF: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:379 LDX @VIRTUAL02
    case 0xC278C1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:380 LDA a:battler::id,X
    case 0xC278C3: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:381 LDY #.SIZEOF(enemy_data)
    case 0xC278C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:381 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC278C6.
    case 0xC278C8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:382 JSL MULT168
    case 0xC278C9: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:383 CLC
    case 0xC278CD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:384 ADC #enemy_data::final_action
    case 0xC278CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:384 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC278CE.
    case 0xC278D0: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:414 TAY
    case 0xC278D1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:415 LDA [@LOCAL03],Y
    case 0xC278D2: {
        Instruction step(cpu, 0xB7, 0x000018u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:416 BEQL @UNKNOWN33
    case 0xC278D4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:416 BEQL @UNKNOWN33
    case 0xC278D6: {
        Instruction step(cpu, 0x4C, 0x007A07u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:417 LDA #1
    case 0xC278D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:417 LDA #1
    // Overlapping static entry reached from 0xC278D9.
    case 0xC278DB: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:418 STA ENEMY_PERFORMING_FINAL_ATTACK
    case 0xC278DC: {
        Instruction step(cpu, 0x8D, 0x00AA90u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:419 LDX CURRENT_ATTACKER
    case 0xC278DF: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:420 STX @LOCAL05
    case 0xC278E2: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:421 LDY CURRENT_TARGET
    case 0xC278E4: {
        Instruction step(cpu, 0xAC, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:422 STY @LOCAL02
    case 0xC278E7: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:423 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC278E9: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:423 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC278EC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:423 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC278EE: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:423 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC278F1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:424 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC278F3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:424 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC278F5: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:424 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC278F7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:424 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC278F9: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:425 LDA @VIRTUAL02
    case 0xC278FB: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:426 STA CURRENT_ATTACKER
    case 0xC278FD: {
        Instruction step(cpu, 0x8D, 0x00A970u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:427 LDX @VIRTUAL02
    case 0xC27900: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:428 LDA a:battler::id,X
    case 0xC27902: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:429 LDY #.SIZEOF(enemy_data)
    case 0xC27905: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:429 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC27905.
    case 0xC27907: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:430 JSL MULT168
    case 0xC27908: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:431 CLC
    case 0xC2790C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:432 ADC #enemy_data::final_action
    case 0xC2790D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:432 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC2790D.
    case 0xC2790F: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:433 TAY
    case 0xC27910: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:434 LDA [@LOCAL03],Y
    case 0xC27911: {
        Instruction step(cpu, 0xB7, 0x000018u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:436 LDX @VIRTUAL02
    case 0xC27913: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:437 STA a:battler::current_action,X
    case 0xC27915: {
        Instruction step(cpu, 0x9D, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:438 LDX @VIRTUAL02
    case 0xC27918: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:439 LDA a:battler::id,X
    case 0xC2791A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:440 LDY #.SIZEOF(enemy_data)
    case 0xC2791D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:440 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2791D.
    case 0xC2791F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:441 JSL MULT168
    case 0xC27920: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:442 CLC
    case 0xC27924: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:443 ADC #enemy_data::final_action_arg
    case 0xC27925: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000054u : 0x000054u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:443 ADC #enemy_data::final_action_arg
    // Overlapping static entry reached from 0xC27925.
    case 0xC27927: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:452 TAY
    case 0xC27928: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:453 SEP #PROC_FLAGS::ACCUM8
    case 0xC27929: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:454 LDA [@LOCAL03],Y
    case 0xC2792B: {
        Instruction step(cpu, 0xB7, 0x000018u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:456 LDX @VIRTUAL02
    case 0xC2792D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:457 STA a:battler::current_action_argument,X
    case 0xC2792F: {
        Instruction step(cpu, 0x9D, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:458 REP #PROC_FLAGS::ACCUM8
    case 0xC27932: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:459 LDA CURRENT_ATTACKER
    case 0xC27934: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:460 JSL CHOOSE_TARGET
    case 0xC27937: {
        Instruction step(cpu, 0x22, 0xC24477u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:461 LDA CURRENT_ATTACKER
    case 0xC2793B: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:462 JSL UNKNOWN_C24703
    case 0xC2793E: {
        Instruction step(cpu, 0x22, 0xC24703u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:463 LDA #0
    case 0xC27942: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:463 LDA #0
    // Overlapping static entry reached from 0xC27942.
    case 0xC27944: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:464 JSL FIX_ATTACKER_NAME
    case 0xC27945: {
        Instruction step(cpu, 0x22, 0xC23BCFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:465 JSL UNKNOWN_C23E32
    case 0xC27949: {
        Instruction step(cpu, 0x22, 0xC23E32u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:469 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC2794D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:469 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2794D.
    case 0xC2794F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:469 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC27950: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:469 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC27952: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:469 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27952.
    case 0xC27954: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:469 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC27955: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:471 LDX @VIRTUAL02
    case 0xC27957: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:472 LDA a:battler::id,X
    case 0xC27959: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:473 LDY #.SIZEOF(enemy_data)
    case 0xC2795C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:473 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2795C.
    case 0xC2795E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:474 JSL MULT168
    case 0xC2795F: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:475 CLC
    case 0xC27963: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:476 ADC #enemy_data::final_action
    case 0xC27964: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:476 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC27964.
    case 0xC27966: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:484 TAY
    case 0xC27967: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:485 LDA [@LOCAL03],Y
    case 0xC27968: {
        Instruction step(cpu, 0xB7, 0x000018u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2796A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2796C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2796D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC2796F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC27970: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:488 INC
    case 0xC27971: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:489 INC
    case 0xC27972: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:490 INC
    case 0xC27973: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:491 INC
    case 0xC27974: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/ko_target.asm:497 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27975: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/ko_target.asm:497 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27977: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/ko_target.asm:497 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27979: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/ko_target.asm:497 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2797B: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:499 CLC
    case 0xC2797D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:500 ADC @VIRTUAL06
    case 0xC2797E: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:501 STA @VIRTUAL06
    case 0xC27980: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27982: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC27982.
    case 0xC27984: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27985: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27987: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27988: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2798A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2798C: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2798E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27990: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27992: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27994: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:504 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC27996: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:505 LDX @VIRTUAL02
    case 0xC2799A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:506 LDA a:battler::id,X
    case 0xC2799C: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:507 LDY #.SIZEOF(enemy_data)
    case 0xC2799F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:507 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2799F.
    case 0xC279A1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:508 JSL MULT168
    case 0xC279A2: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:509 CLC
    case 0xC279A6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:510 ADC #enemy_data::final_action
    case 0xC279A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:510 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC279A7.
    case 0xC279A9: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:518 TAY
    case 0xC279AA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:519 LDA [@LOCAL03],Y
    case 0xC279AB: {
        Instruction step(cpu, 0xB7, 0x000018u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC279AD: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC279AF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC279B0: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC279B2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC279B3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:522 CLC
    case 0xC279B4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:523 ADC #battle_action::battle_function_pointer
    case 0xC279B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:523 ADC #battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC279B5.
    case 0xC279B7: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:534 CLC
    case 0xC279B8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:535 ADC @VIRTUAL0A
    case 0xC279B9: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:536 STA @VIRTUAL0A
    case 0xC279BB: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:537 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279BD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:537 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC279BD.
    case 0xC279BF: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:537 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C0: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:537 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:537 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C3: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:537 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:537 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C7: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279C9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279CB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279CD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279CF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:540 JSL UNKNOWN_C240A4
    case 0xC279D1: {
        Instruction step(cpu, 0x22, 0xC240A4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:541 STZ ENEMY_PERFORMING_FINAL_ATTACK
    case 0xC279D5: {
        Instruction step(cpu, 0x9C, 0x00AA90u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:549 LDX @LOCAL05
    case 0xC279D8: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:550 STX CURRENT_ATTACKER
    case 0xC279DA: {
        Instruction step(cpu, 0x8E, 0x00A970u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:551 LDY @LOCAL02
    case 0xC279DD: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:552 STY CURRENT_TARGET
    case 0xC279DF: {
        Instruction step(cpu, 0x8C, 0x00A972u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:553 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC279E2: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:553 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC279E4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:553 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC279E6: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:553 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC279E8: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC279EA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC279EC: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC279EF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC279F1: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:556 LDA #0
    case 0xC279F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:556 LDA #0
    // Overlapping static entry reached from 0xC279F4.
    case 0xC279F6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:557 JSL FIX_ATTACKER_NAME
    case 0xC279F7: {
        Instruction step(cpu, 0x22, 0xC23BCFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:558 JSL FIX_TARGET_NAME
    case 0xC279FB: {
        Instruction step(cpu, 0x22, 0xC23D05u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:559 LDA SPECIAL_DEFEAT
    case 0xC279FF: {
        Instruction step(cpu, 0xAD, 0x00AA0Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:560 BNEL @UNKNOWN62
    case 0xC27A02: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:560 BNEL @UNKNOWN62
    case 0xC27A04: {
        Instruction step(cpu, 0x4C, 0x007C92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:562 LDA SKIP_DEATH_TEXT_AND_CLEANUP
    case 0xC27A07: {
        Instruction step(cpu, 0xAD, 0x00AA92u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:563 BNEL @UNKNOWN62
    case 0xC27A0A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:563 BNEL @UNKNOWN62
    case 0xC27A0C: {
        Instruction step(cpu, 0x4C, 0x007C92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27A0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27A0F.
    case 0xC27A11: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27A12: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27A11.
    case 0xC27A13: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27A14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27A14.
    case 0xC27A16: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27A17: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:565 LDX @VIRTUAL02
    case 0xC27A19: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:566 LDA a:battler::id,X
    case 0xC27A1B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:567 LDY #.SIZEOF(enemy_data)
    case 0xC27A1E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:567 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC27A1E.
    case 0xC27A20: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:568 JSL MULT168
    case 0xC27A21: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:569 CLC
    case 0xC27A25: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:570 ADC #enemy_data::death_text_ptr
    case 0xC27A26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000031u : 0x000031u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:570 ADC #enemy_data::death_text_ptr
    // Overlapping static entry reached from 0xC27A26.
    case 0xC27A28: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:571 CLC
    case 0xC27A29: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:572 ADC @VIRTUAL0A
    case 0xC27A2A: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:573 STA @VIRTUAL0A
    case 0xC27A2C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27A2E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC27A2E.
    case 0xC27A30: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27A31: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27A33: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27A34: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27A36: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC27A38: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27A3A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27A3C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27A3E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27A40: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:576 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC27A42: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:577 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC27A46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:577 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC27A46.
    case 0xC27A48: {
        Instruction step(cpu, 0x9F, 0x0000A2u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:578 LDX #0
    case 0xC27A49: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:578 LDX #0
    // Overlapping static entry reached from 0xC27A49.
    case 0xC27A4B: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:579 STX @LOCAL07
    case 0xC27A4C: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:580 BRA @UNKNOWN36
    case 0xC27A4E: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:582 TAX
    case 0xC27A50: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:583 SEP #PROC_FLAGS::ACCUM8
    case 0xC27A51: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:584 STZ a:battler::use_alt_spritemap,X
    case 0xC27A53: {
        Instruction step(cpu, 0x9E, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:585 CLC
    case 0xC27A56: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:586 REP #PROC_FLAGS::ACCUM8
    case 0xC27A57: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:587 ADC #.SIZEOF(battler)
    case 0xC27A59: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:587 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27A59.
    case 0xC27A5B: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:588 LDX @LOCAL07
    case 0xC27A5C: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:589 INX
    case 0xC27A5E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:590 STX @LOCAL07
    case 0xC27A5F: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:592 CPX #BATTLER_COUNT
    case 0xC27A61: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:592 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC27A61.
    case 0xC27A63: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:593 BCC @UNKNOWN35
    case 0xC27A64: {
        Instruction step(cpu, 0x90, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:594 SEP #PROC_FLAGS::ACCUM8
    case 0xC27A66: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:595 LDA #1
    case 0xC27A68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:596 LDX @VIRTUAL02
    case 0xC27A6A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:596 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC27A68.
    case 0xC27A6B: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/ko_target.asm:597 STA a:battler::use_alt_spritemap,X
    case 0xC27A6C: {
        Instruction step(cpu, 0x9D, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:598 REP #PROC_FLAGS::ACCUM8
    case 0xC27A6F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:599 LDA #10
    case 0xC27A71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:599 LDA #10
    // Overlapping static entry reached from 0xC27A71.
    case 0xC27A73: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:600 JSL UNKNOWN_C2FAD8
    case 0xC27A74: {
        Instruction step(cpu, 0x22, 0xC2FAD8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:601 LDA #1
    case 0xC27A78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:601 LDA #1
    // Overlapping static entry reached from 0xC27A78.
    case 0xC27A7A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:602 STA @VIRTUAL04
    case 0xC27A7B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:603 BRA @UNKNOWN38
    case 0xC27A7D: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:605 LDA #31
    case 0xC27A7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:605 LDA #31
    // Overlapping static entry reached from 0xC27A7F.
    case 0xC27A81: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:606 STA @LOCAL00
    case 0xC27A82: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:607 TAY
    case 0xC27A84: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:608 TAX
    case 0xC27A85: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:609 STX @LOCAL05
    case 0xC27A86: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:610 LDX @VIRTUAL02
    case 0xC27A88: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:611 LDA a:battler::vram_sprite_index,X
    case 0xC27A8A: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:612 AND #$00FF
    case 0xC27A8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:612 AND #$00FF
    // Overlapping static entry reached from 0xC27A8D.
    case 0xC27A8F: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:613 ASL
    case 0xC27A90: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:614 ASL
    case 0xC27A91: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:615 ASL
    case 0xC27A92: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:616 ASL
    case 0xC27A93: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:617 CLC
    case 0xC27A94: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:618 ADC @VIRTUAL04
    case 0xC27A95: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:619 LDX @LOCAL05
    case 0xC27A97: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:620 JSL UNKNOWN_C2FB35
    case 0xC27A99: {
        Instruction step(cpu, 0x22, 0xC2FB35u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:621 INC @VIRTUAL04
    case 0xC27A9D: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:623 LDA @VIRTUAL04
    case 0xC27A9F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:624 CMP #16
    case 0xC27AA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:624 CMP #16
    // Overlapping static entry reached from 0xC27AA1.
    case 0xC27AA3: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:625 BCC @UNKNOWN37
    case 0xC27AA4: {
        Instruction step(cpu, 0x90, 0x0000D9u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:626 LDA #SIXTH_OF_A_SECOND
    case 0xC27AA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:626 LDA #SIXTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC27AA6.
    case 0xC27AA8: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:627 JSR WAIT
    case 0xC27AA9: {
        Instruction step(cpu, 0x20, 0x0069BEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/ko_target.asm:628 LDA #20
    case 0xC27AAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:628 LDA #20
    // Overlapping static entry reached from 0xC27AAC.
    case 0xC27AAE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:629 JSL UNKNOWN_C2FAD8
    case 0xC27AAF: {
        Instruction step(cpu, 0x22, 0xC2FAD8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:630 LDA #1
    case 0xC27AB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:630 LDA #1
    // Overlapping static entry reached from 0xC27AB3.
    case 0xC27AB5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:631 STA @VIRTUAL04
    case 0xC27AB6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:632 BRA @UNKNOWN40
    case 0xC27AB8: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/ko_target.asm:634 STZ_BADOPT @LOCAL00
    case 0xC27ABA: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:639 LDY #0
    case 0xC27ABC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:639 LDY #0
    // Overlapping static entry reached from 0xC27ABC.
    case 0xC27ABE: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:640 TYX
    case 0xC27ABF: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:642 STX @LOCAL05
    case 0xC27AC0: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:643 LDX @VIRTUAL02
    case 0xC27AC2: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:644 LDA a:battler::vram_sprite_index,X
    case 0xC27AC4: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:645 AND #$00FF
    case 0xC27AC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:645 AND #$00FF
    // Overlapping static entry reached from 0xC27AC7.
    case 0xC27AC9: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:646 ASL
    case 0xC27ACA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:647 ASL
    case 0xC27ACB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:648 ASL
    case 0xC27ACC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:649 ASL
    case 0xC27ACD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/ko_target.asm:650 CLC
    case 0xC27ACE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:651 ADC @VIRTUAL04
    case 0xC27ACF: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:652 LDX @LOCAL05
    case 0xC27AD1: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:653 JSL UNKNOWN_C2FB35
    case 0xC27AD3: {
        Instruction step(cpu, 0x22, 0xC2FB35u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:654 INC @VIRTUAL04
    case 0xC27AD7: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:656 LDA @VIRTUAL04
    case 0xC27AD9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:657 CMP #16
    case 0xC27ADB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:657 CMP #16
    // Overlapping static entry reached from 0xC27ADB.
    case 0xC27ADD: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:658 BCC @UNKNOWN39
    case 0xC27ADE: {
        Instruction step(cpu, 0x90, 0x0000DAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:659 LDA #THIRD_OF_A_SECOND
    case 0xC27AE0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:659 LDA #THIRD_OF_A_SECOND
    // Overlapping static entry reached from 0xC27AE0.
    case 0xC27AE2: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:660 JSR WAIT
    case 0xC27AE3: {
        Instruction step(cpu, 0x20, 0x0069BEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/ko_target.asm:661 SEP #PROC_FLAGS::ACCUM8
    case 0xC27AE6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:662 LDA #STATUS_0::UNCONSCIOUS
    case 0xC27AE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:663 LDX @VIRTUAL02
    case 0xC27AEA: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:663 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC27AE8.
    case 0xC27AEB: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/ko_target.asm:664 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27AEC: {
        Instruction step(cpu, 0x9D, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:665 LDX @VIRTUAL02
    case 0xC27AEF: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:666 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC27AF1: {
        Instruction step(cpu, 0x9E, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:667 LDX @VIRTUAL02
    case 0xC27AF4: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:668 STZ a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC27AF6: {
        Instruction step(cpu, 0x9E, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:669 LDX @VIRTUAL02
    case 0xC27AF9: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:670 STZ a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC27AFB: {
        Instruction step(cpu, 0x9E, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:671 LDX @VIRTUAL02
    case 0xC27AFE: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:672 STZ a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC27B00: {
        Instruction step(cpu, 0x9E, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:673 LDX @VIRTUAL02
    case 0xC27B03: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:674 STZ a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC27B05: {
        Instruction step(cpu, 0x9E, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:675 LDX @VIRTUAL02
    case 0xC27B08: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:676 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC27B0A: {
        Instruction step(cpu, 0x9E, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:677 LDX @VIRTUAL02
    case 0xC27B0D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:678 REP #PROC_FLAGS::ACCUM8
    case 0xC27B0F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:679 STZ a:battler::hp_target,X
    case 0xC27B11: {
        Instruction step(cpu, 0x9E, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:680 LDX @VIRTUAL02
    case 0xC27B14: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:681 LDA a:battler::id,X
    case 0xC27B16: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:682 LDY #.SIZEOF(enemy_data)
    case 0xC27B19: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:682 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC27B19.
    case 0xC27B1B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:683 JSL MULT168
    case 0xC27B1C: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:684 CLC
    case 0xC27B20: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:685 ADC #enemy_data::death_type
    case 0xC27B21: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Au : 0x00005Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:685 ADC #enemy_data::death_type
    // Overlapping static entry reached from 0xC27B21.
    case 0xC27B23: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:686 TAX
    case 0xC27B24: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:687 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC27B25: {
        Instruction step(cpu, 0xBF, 0xD59589u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:688 AND #$00FF
    case 0xC27B29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:688 AND #$00FF
    // Overlapping static entry reached from 0xC27B29.
    case 0xC27B2B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:689 BEQL @UNKNOWN54
    case 0xC27B2C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:689 BEQL @UNKNOWN54
    case 0xC27B2E: {
        Instruction step(cpu, 0x4C, 0x007BEDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:690 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * (FIRST_ENEMY_INDEX))
    case 0xC27B31: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Cu : 0x00A21Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:690 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * (FIRST_ENEMY_INDEX))
    // Overlapping static entry reached from 0xC27B31.
    case 0xC27B33: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000A0u : 0x0008A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:691 LDY #FIRST_ENEMY_INDEX
    case 0xC27B34: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:691 LDY #FIRST_ENEMY_INDEX
    // Overlapping static entry reached from 0xC27B33.
    case 0xC27B35: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/ko_target.asm:691 LDY #FIRST_ENEMY_INDEX
    // Overlapping static entry reached from 0xC27B34.
    case 0xC27B36: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:692 BRA @UNKNOWN44
    case 0xC27B37: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:694 LDA a:battler::consciousness,X
    case 0xC27B39: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:695 AND #$00FF
    case 0xC27B3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:695 AND #$00FF
    // Overlapping static entry reached from 0xC27B3C.
    case 0xC27B3E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:696 BEQ @UNKNOWN43
    case 0xC27B3F: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:697 SEP #PROC_FLAGS::ACCUM8
    case 0xC27B41: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:698 LDA #1
    case 0xC27B43: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:699 STA a:battler::use_alt_spritemap,X
    case 0xC27B45: {
        Instruction step(cpu, 0x9D, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:699 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC27B43.
    case 0xC27B46: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/battle/ko_target.asm:699 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC27B46.
    case 0xC27B47: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:701 REP #PROC_FLAGS::ACCUM8
    case 0xC27B48: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:702 TXA
    case 0xC27B4A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:703 CLC
    case 0xC27B4B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:704 ADC #.SIZEOF(battler)
    case 0xC27B4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:704 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27B4C.
    case 0xC27B4E: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:705 TAX
    case 0xC27B4F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:706 INY
    case 0xC27B50: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:708 CPY #BATTLER_COUNT
    case 0xC27B51: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:708 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC27B51.
    case 0xC27B53: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:709 BCC @UNKNOWN42
    case 0xC27B54: {
        Instruction step(cpu, 0x90, 0x0000E3u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:710 LDA #SFX::ENEMY_DEFEATED
    case 0xC27B56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:710 LDA #SFX::ENEMY_DEFEATED
    // Overlapping static entry reached from 0xC27B56.
    case 0xC27B58: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:711 JSL PLAY_SOUND
    case 0xC27B59: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:712 LDA #10
    case 0xC27B5D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:712 LDA #10
    // Overlapping static entry reached from 0xC27B5D.
    case 0xC27B5F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:713 JSL UNKNOWN_C2FAD8
    case 0xC27B60: {
        Instruction step(cpu, 0x22, 0xC2FAD8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:714 LDA #1
    case 0xC27B64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:714 LDA #1
    // Overlapping static entry reached from 0xC27B64.
    case 0xC27B66: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:715 STA @VIRTUAL04
    case 0xC27B67: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:716 BRA @UNKNOWN47
    case 0xC27B69: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:718 LDA @VIRTUAL04
    case 0xC27B6B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:719 AND #15
    case 0xC27B6D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:719 AND #15
    // Overlapping static entry reached from 0xC27B6D.
    case 0xC27B6F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:720 BEQ @UNKNOWN46
    case 0xC27B70: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:721 LDA #31
    case 0xC27B72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:721 LDA #31
    // Overlapping static entry reached from 0xC27B72.
    case 0xC27B74: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:722 STA @LOCAL00
    case 0xC27B75: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:723 TAY
    case 0xC27B77: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:724 TAX
    case 0xC27B78: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:725 LDA @VIRTUAL04
    case 0xC27B79: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:726 JSL UNKNOWN_C2FB35
    case 0xC27B7B: {
        Instruction step(cpu, 0x22, 0xC2FB35u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:728 INC @VIRTUAL04
    case 0xC27B7F: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:730 LDA @VIRTUAL04
    case 0xC27B81: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:731 CMP #64
    case 0xC27B83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:731 CMP #64
    // Overlapping static entry reached from 0xC27B83.
    case 0xC27B85: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:732 BCC @UNKNOWN45
    case 0xC27B86: {
        Instruction step(cpu, 0x90, 0x0000E3u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:733 LDA #SIXTH_OF_A_SECOND
    case 0xC27B88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:733 LDA #SIXTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC27B88.
    case 0xC27B8A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:734 JSR WAIT
    case 0xC27B8B: {
        Instruction step(cpu, 0x20, 0x0069BEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/ko_target.asm:735 LDA #20
    case 0xC27B8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:735 LDA #20
    // Overlapping static entry reached from 0xC27B8E.
    case 0xC27B90: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:736 JSL UNKNOWN_C2FAD8
    case 0xC27B91: {
        Instruction step(cpu, 0x22, 0xC2FAD8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:737 LDA #1
    case 0xC27B95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:737 LDA #1
    // Overlapping static entry reached from 0xC27B95.
    case 0xC27B97: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:738 STA @VIRTUAL04
    case 0xC27B98: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:739 BRA @UNKNOWN50
    case 0xC27B9A: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:741 LDA @VIRTUAL04
    case 0xC27B9C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:742 AND #15
    case 0xC27B9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:742 AND #15
    // Overlapping static entry reached from 0xC27B9E.
    case 0xC27BA0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:743 BEQ @UNKNOWN49
    case 0xC27BA1: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/ko_target.asm:744 STZ_BADOPT @LOCAL00
    case 0xC27BA3: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:749 LDY #0
    case 0xC27BA5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:749 LDY #0
    // Overlapping static entry reached from 0xC27BA5.
    case 0xC27BA7: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:750 TYX
    case 0xC27BA8: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:752 LDA @VIRTUAL04
    case 0xC27BA9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:753 JSL UNKNOWN_C2FB35
    case 0xC27BAB: {
        Instruction step(cpu, 0x22, 0xC2FB35u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:755 INC @VIRTUAL04
    case 0xC27BAF: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/ko_target.asm:757 LDA @VIRTUAL04
    case 0xC27BB1: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:758 CMP #64
    case 0xC27BB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:758 CMP #64
    // Overlapping static entry reached from 0xC27BB3.
    case 0xC27BB5: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:759 BCC @UNKNOWN48
    case 0xC27BB6: {
        Instruction step(cpu, 0x90, 0x0000E4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:760 LDA #20
    case 0xC27BB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:760 LDA #20
    // Overlapping static entry reached from 0xC27BB8.
    case 0xC27BBA: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:761 JSR WAIT
    case 0xC27BBB: {
        Instruction step(cpu, 0x20, 0x0069BEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/ko_target.asm:762 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC27BBE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Cu : 0x00A21Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:762 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC27BBE.
    case 0xC27BC0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000A0u : 0x0008A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:763 LDY #8
    case 0xC27BC1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:763 LDY #8
    // Overlapping static entry reached from 0xC27BC0.
    case 0xC27BC2: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/ko_target.asm:763 LDY #8
    // Overlapping static entry reached from 0xC27BC1.
    case 0xC27BC3: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:764 BRA @UNKNOWN53
    case 0xC27BC4: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:766 LDA a:battler::consciousness,X
    case 0xC27BC6: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:767 AND #$00FF
    case 0xC27BC9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:767 AND #$00FF
    // Overlapping static entry reached from 0xC27BC9.
    case 0xC27BCB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:768 BEQ @UNKNOWN52
    case 0xC27BCC: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:769 SEP #PROC_FLAGS::ACCUM8
    case 0xC27BCE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:770 LDA #STATUS_0::UNCONSCIOUS
    case 0xC27BD0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:771 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27BD2: {
        Instruction step(cpu, 0x9D, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:771 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC27BD0.
    case 0xC27BD3: {
        Instruction step(cpu, 0x1D, 0x00C200u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:773 REP #PROC_FLAGS::ACCUM8
    case 0xC27BD5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:773 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC27BD3.
    case 0xC27BD6: {
        Instruction step(cpu, 0x20, 0x00188Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/ko_target.asm:774 TXA
    case 0xC27BD7: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:775 CLC
    case 0xC27BD8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:776 ADC #.SIZEOF(battler)
    case 0xC27BD9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:776 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27BD9.
    case 0xC27BDB: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:777 TAX
    case 0xC27BDC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:778 INY
    case 0xC27BDD: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:780 CPY #BATTLER_COUNT
    case 0xC27BDE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:780 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC27BDE.
    case 0xC27BE0: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:781 BCC @UNKNOWN51
    case 0xC27BE1: {
        Instruction step(cpu, 0x90, 0x0000E3u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:782 JSL UNKNOWN_C2F8F9
    case 0xC27BE3: {
        Instruction step(cpu, 0x22, 0xC2F8F9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:783 LDA #2
    case 0xC27BE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:783 LDA #2
    // Overlapping static entry reached from 0xC27BE7.
    case 0xC27BE9: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:784 STA SPECIAL_DEFEAT
    case 0xC27BEA: {
        Instruction step(cpu, 0x8D, 0x00AA0Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:786 LDX @VIRTUAL02
    case 0xC27BED: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:787 LDA a:battler::npc_id,X
    case 0xC27BEF: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:788 AND #$00FF
    case 0xC27BF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:788 AND #$00FF
    // Overlapping static entry reached from 0xC27BF2.
    case 0xC27BF4: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:789 CMP #ENEMY::TINY_LIL_GHOST
    case 0xC27BF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:789 CMP #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27BF5.
    case 0xC27BF7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:790 BNEL @UNKNOWN62
    case 0xC27BF8: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:790 BNEL @UNKNOWN62
    case 0xC27BFA: {
        Instruction step(cpu, 0x4C, 0x007C92u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/ko_target.asm:791 LDY #0
    case 0xC27BFD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:791 LDY #0
    // Overlapping static entry reached from 0xC27BFD.
    case 0xC27BFF: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:792 STY @LOCAL07
    case 0xC27C00: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:793 BRA @UNKNOWN58
    case 0xC27C02: {
        Instruction step(cpu, 0x80, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:795 TYA
    case 0xC27C04: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:796 LDY #.SIZEOF(battler)
    case 0xC27C05: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:796 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27C05.
    case 0xC27C07: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:797 JSL MULT168
    case 0xC27C08: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:798 TAX
    case 0xC27C0C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:799 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC27C0D: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:800 AND #$00FF
    case 0xC27C10: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:800 AND #$00FF
    // Overlapping static entry reached from 0xC27C10.
    case 0xC27C12: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:801 BEQ @UNKNOWN57
    case 0xC27C13: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:802 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC27C15: {
        Instruction step(cpu, 0xBD, 0x009FBBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:803 AND #$00FF
    case 0xC27C18: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:803 AND #$00FF
    // Overlapping static entry reached from 0xC27C18.
    case 0xC27C1A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:804 BNE @UNKNOWN57
    case 0xC27C1B: {
        Instruction step(cpu, 0xD0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:805 TXA
    case 0xC27C1D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:806 CLC
    case 0xC27C1E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:807 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC27C1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C9u : 0x009FC9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:807 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC27C1F.
    case 0xC27C21: {
        Instruction step(cpu, 0x9F, 0xBDE8AAu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:808 TAX
    case 0xC27C22: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:809 INX
    case 0xC27C23: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:810 LDA __BSS_START__,X ; STATUS_GROUP::PERSISTENT_HARDHEAL
    case 0xC27C24: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:810 LDA __BSS_START__,X ; STATUS_GROUP::PERSISTENT_HARDHEAL
    // Overlapping static entry reached from 0xC27C21.
    case 0xC27C25: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:811 AND #$00FF
    case 0xC27C27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:811 AND #$00FF
    // Overlapping static entry reached from 0xC27C27.
    case 0xC27C29: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:812 CMP #2
    case 0xC27C2A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:812 CMP #2
    // Overlapping static entry reached from 0xC27C2A.
    case 0xC27C2C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:813 BNE @UNKNOWN57
    case 0xC27C2D: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:814 SEP #PROC_FLAGS::ACCUM8
    case 0xC27C2F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:815 LDA #0
    case 0xC27C31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:816 STA __BSS_START__,X
    case 0xC27C33: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:816 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC27C31.
    case 0xC27C34: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:817 BRA @UNKNOWN61
    case 0xC27C36: {
        Instruction step(cpu, 0x80, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:819 LDY @LOCAL07
    case 0xC27C38: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:820 INY
    case 0xC27C3A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:821 STY @LOCAL07
    case 0xC27C3B: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:823 CPY #TOTAL_PARTY_COUNT
    case 0xC27C3D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:823 CPY #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC27C3D.
    case 0xC27C3F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:824 BCC @UNKNOWN56
    case 0xC27C40: {
        Instruction step(cpu, 0x90, 0x0000C2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:825 BRA @UNKNOWN61
    case 0xC27C42: {
        Instruction step(cpu, 0x80, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/ko_target.asm:827 REP #PROC_FLAGS::ACCUM8
    case 0xC27C44: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:828 TYA
    case 0xC27C46: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:829 LDY #.SIZEOF(battler)
    case 0xC27C47: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:829 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27C47.
    case 0xC27C49: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:830 JSL MULT168
    case 0xC27C4A: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:831 TAX
    case 0xC27C4E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:832 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC27C4F: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:833 AND #$00FF
    case 0xC27C52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:833 AND #$00FF
    // Overlapping static entry reached from 0xC27C52.
    case 0xC27C54: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:834 BEQ @UNKNOWN60
    case 0xC27C55: {
        Instruction step(cpu, 0xF0, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:835 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC27C57: {
        Instruction step(cpu, 0xBD, 0x009FBBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:836 AND #$00FF
    case 0xC27C5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:836 AND #$00FF
    // Overlapping static entry reached from 0xC27C5A.
    case 0xC27C5C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:837 BNE @UNKNOWN60
    case 0xC27C5D: {
        Instruction step(cpu, 0xD0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:838 TXA
    case 0xC27C5F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:839 CLC
    case 0xC27C60: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:840 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC27C61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C9u : 0x009FC9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/ko_target.asm:840 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC27C61.
    case 0xC27C63: {
        Instruction step(cpu, 0x9F, 0x01BDAAu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:841 TAX
    case 0xC27C64: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:842 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC27C65: {
        Instruction step(cpu, 0xBD, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:842 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    // Overlapping static entry reached from 0xC27C63.
    case 0xC27C67: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:843 AND #$00FF
    case 0xC27C68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:843 AND #$00FF
    // Overlapping static entry reached from 0xC27C68.
    case 0xC27C6A: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:844 CMP #STATUS_1::POSSESSED
    case 0xC27C6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:844 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC27C6B.
    case 0xC27C6D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:845 BNE @UNKNOWN60
    case 0xC27C6E: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/ko_target.asm:846 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    case 0xC27C70: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000080u : 0x00A180u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/ko_target.asm:846 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    // Overlapping static entry reached from 0xC27C70.
    case 0xC27C72: {
        Instruction step(cpu, 0xA1, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:847 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC27C73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:847 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27C72.
    case 0xC27C74: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:847 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27C73.
    case 0xC27C75: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:848 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC27C76: {
        Instruction step(cpu, 0x22, 0xC2B6EBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:849 SEP #PROC_FLAGS::ACCUM8
    case 0xC27C7A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/ko_target.asm:850 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC27C7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x008DD5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:851 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC27C7E: {
        Instruction step(cpu, 0x8D, 0x00A18Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:851 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC27C7C.
    case 0xC27C7F: {
        Instruction step(cpu, 0x8F, 0x01A9A1u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:852 LDA #1
    case 0xC27C81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:853 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::has_taken_turn
    case 0xC27C83: {
        Instruction step(cpu, 0x8D, 0x00A18Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:853 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::has_taken_turn
    // Overlapping static entry reached from 0xC27C81.
    case 0xC27C84: {
        Instruction step(cpu, 0x8D, 0x00A4A1u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/ko_target.asm:855 LDY @LOCAL07
    case 0xC27C86: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:855 LDY @LOCAL07
    // Overlapping static entry reached from 0xC27C84.
    case 0xC27C87: {
        Instruction step(cpu, 0x22, 0x2284C8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/ko_target.asm:856 INY
    case 0xC27C88: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:857 STY @LOCAL07
    case 0xC27C89: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:859 LDY @LOCAL07
    case 0xC27C8B: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:860 CPY #TOTAL_PARTY_COUNT
    case 0xC27C8D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/ko_target.asm:860 CPY #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC27C8D.
    case 0xC27C8F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/ko_target.asm:861 BCC @UNKNOWN59
    case 0xC27C90: {
        Instruction step(cpu, 0x90, 0x0000B2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/ko_target.asm:863 REP #PROC_FLAGS::ACCUM8
    case 0xC27C92: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/ko_target.asm:864 END_C_FUNCTION
    case 0xC27C94: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/ko_target.asm:864 END_C_FUNCTION
    case 0xC27C95: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
