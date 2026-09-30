// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C2/C24703.asm
bool resume_unresolved_c2_c24703(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C24703.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC245D0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC245D2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC245D3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC245D4: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC245D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC245D5.
    case 0xC245D7: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC245D8: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC245D9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:8 TAX
    case 0xC245DA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:9 STX @LOCAL00
    case 0xC245DB: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC245DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC245DD.
    case 0xC245DF: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC245E0: {
        Instruction step(cpu, 0x8D, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC245E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC245E3.
    case 0xC245E5: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC245E6: {
        Instruction step(cpu, 0x8D, 0x00AB70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:11 LDA a:battler::action_targetting,X
    case 0xC245E9: {
        Instruction step(cpu, 0xBD, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:12 AND #$00FF
    case 0xC245EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC245EC.
    case 0xC245EE: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:13 CMP #1
    case 0xC245EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:13 CMP #1
    // Overlapping static entry reached from 0xC245EF.
    case 0xC245F1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:14 BEQ @UNKNOWN2
    case 0xC245F2: {
        Instruction step(cpu, 0xF0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:15 CMP #2
    case 0xC245F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:15 CMP #2
    // Overlapping static entry reached from 0xC245F4.
    case 0xC245F6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:16 BEQ @UNKNOWN3
    case 0xC245F7: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:17 CMP #4
    case 0xC245F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:17 CMP #4
    // Overlapping static entry reached from 0xC245F9.
    case 0xC245FB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:18 BEQ @UNKNOWN3
    case 0xC245FC: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:19 CMP #17
    case 0xC245FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:19 CMP #17
    // Overlapping static entry reached from 0xC245FE.
    case 0xC24600: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:20 BEQ @UNKNOWN5
    case 0xC24601: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:21 CMP #18
    case 0xC24603: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:21 CMP #18
    // Overlapping static entry reached from 0xC24603.
    case 0xC24605: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C24703.asm:22 BEQL @UNKNOWN11
    case 0xC24606: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C24703.asm:22 BEQL @UNKNOWN11
    case 0xC24608: {
        Instruction step(cpu, 0x4C, 0x0046C2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:23 CMP #20
    case 0xC2460B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:23 CMP #20
    // Overlapping static entry reached from 0xC2460B.
    case 0xC2460D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C24703.asm:24 BEQL @UNKNOWN12
    case 0xC2460E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C24703.asm:24 BEQL @UNKNOWN12
    case 0xC24610: {
        Instruction step(cpu, 0x4C, 0x0046D6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:25 JMP @UNKNOWN14
    case 0xC24613: {
        Instruction step(cpu, 0x4C, 0x0046ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:27 LDA a:battler::current_target,X
    case 0xC24616: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:28 AND #$00FF
    case 0xC24619: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC24619.
    case 0xC2461B: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:29 DEC
    case 0xC2461C: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:30 JSL TARGET_BATTLER
    case 0xC2461D: {
        Instruction step(cpu, 0x22, 0xC26F1Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:31 JMP @UNKNOWN14
    case 0xC24621: {
        Instruction step(cpu, 0x4C, 0x0046ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:33 JSL TARGET_ALLIES
    case 0xC24624: {
        Instruction step(cpu, 0x22, 0xC26B3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:34 LDX @LOCAL00
    case 0xC24628: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:35 LDA a:battler::current_action,X
    case 0xC2462A: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:36 JSL GET_SHIELD_TARGETTING
    case 0xC2462D: {
        Instruction step(cpu, 0x22, 0xC23E9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:37 CMP #0
    case 0xC24631: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:37 CMP #0
    // Overlapping static entry reached from 0xC24631.
    case 0xC24633: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:38 BNE @UNKNOWN4
    case 0xC24634: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:39 LDX @LOCAL00
    case 0xC24636: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:40 LDA a:battler::ally_or_enemy,X
    case 0xC24638: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:41 AND #$00FF
    case 0xC2463B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC2463B.
    case 0xC2463D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:42 BNE @UNKNOWN4
    case 0xC2463E: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:43 JSL REMOVE_NPC_TARGETTING
    case 0xC24640: {
        Instruction step(cpu, 0x22, 0xC26DB6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:45 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC24644: {
        Instruction step(cpu, 0x22, 0xC24023u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:46 JMP @UNKNOWN14
    case 0xC24648: {
        Instruction step(cpu, 0x4C, 0x0046ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:48 LDA a:battler::current_target,X
    case 0xC2464B: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:49 AND #$00FF
    case 0xC2464E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC2464E.
    case 0xC24650: {
        Instruction step(cpu, 0x00, 0x0000CDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:50 CMP NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24651: {
        Instruction step(cpu, 0xCD, 0x00AF2Bu, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C24703.asm:51 BLTEQ @UNKNOWN6
    case 0xC24654: {
        Instruction step(cpu, 0x90, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C24703.asm:51 BLTEQ @UNKNOWN6
    case 0xC24656: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:52 SEC
    case 0xC24658: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:53 SBC NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24659: {
        Instruction step(cpu, 0xED, 0x00AF2Bu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:54 TAX
    case 0xC2465C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:55 DEX
    case 0xC2465D: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:56 LDA BACK_ROW_BATTLERS,X
    case 0xC2465E: {
        Instruction step(cpu, 0xBD, 0x00AF57u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:57 AND #$00FF
    case 0xC24661: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC24661.
    case 0xC24663: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:58 JSL TARGET_BATTLER
    case 0xC24664: {
        Instruction step(cpu, 0x22, 0xC26F1Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:59 BRA @UNKNOWN7
    case 0xC24668: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:61 TAX
    case 0xC2466A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:62 DEX
    case 0xC2466B: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:63 LDA FRONT_ROW_BATTLERS,X
    case 0xC2466C: {
        Instruction step(cpu, 0xBD, 0x00AF4Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:64 AND #$00FF
    case 0xC2466F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC2466F.
    case 0xC24671: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:65 JSL TARGET_BATTLER
    case 0xC24672: {
        Instruction step(cpu, 0x22, 0xC26F1Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:67 LDX @LOCAL00
    case 0xC24676: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:68 LDA a:battler::current_action,X
    case 0xC24678: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:69 CMP #BATTLE_ACTIONS::PSI_HEALING_OMEGA
    case 0xC2467B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:69 CMP #BATTLE_ACTIONS::PSI_HEALING_OMEGA
    // Overlapping static entry reached from 0xC2467B.
    case 0xC2467D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:70 BNE @UNKNOWN14
    case 0xC2467E: {
        Instruction step(cpu, 0xD0, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:71 LDA #8
    case 0xC24680: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:71 LDA #8
    // Overlapping static entry reached from 0xC24680.
    case 0xC24682: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:72 STA @LOCAL00
    case 0xC24683: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:73 BRA @UNKNOWN10
    case 0xC24685: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:75 LDY #.SIZEOF(battler)
    case 0xC24687: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:75 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24687.
    case 0xC24689: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:76 JSL MULT168
    case 0xC2468A: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:77 TAX
    case 0xC2468E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:78 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2468F: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:79 AND #$00FF
    case 0xC24692: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC24692.
    case 0xC24694: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:80 BEQ @UNKNOWN9
    case 0xC24695: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:81 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC24697: {
        Instruction step(cpu, 0xBD, 0x00A1CBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:82 AND #$00FF
    case 0xC2469A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC2469A.
    case 0xC2469C: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:83 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2469D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:83 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2469D.
    case 0xC2469F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:84 BNE @UNKNOWN9
    case 0xC246A0: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC246A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC246A2.
    case 0xC246A4: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC246A5: {
        Instruction step(cpu, 0x8D, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC246A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC246A8.
    case 0xC246AA: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC246AB: {
        Instruction step(cpu, 0x8D, 0x00AB70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:86 LDA @LOCAL00
    case 0xC246AE: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:87 JSL TARGET_BATTLER
    case 0xC246B0: {
        Instruction step(cpu, 0x22, 0xC26F1Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:88 BRA @UNKNOWN14
    case 0xC246B4: {
        Instruction step(cpu, 0x80, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:90 LDA @LOCAL00
    case 0xC246B6: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:91 INC
    case 0xC246B8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:92 STA @LOCAL00
    case 0xC246B9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:94 CMP #BATTLER_COUNT
    case 0xC246BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:94 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC246BB.
    case 0xC246BD: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:95 BCC @UNKNOWN8
    case 0xC246BE: {
        Instruction step(cpu, 0x90, 0x0000C7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:96 BRA @UNKNOWN14
    case 0xC246C0: {
        Instruction step(cpu, 0x80, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:98 LDA a:battler::current_target,X
    case 0xC246C2: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:99 AND #$00FF
    case 0xC246C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC246C5.
    case 0xC246C7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:100 JSL TARGET_ROW
    case 0xC246C8: {
        Instruction step(cpu, 0x22, 0xC26C43u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:101 JSL REMOVE_NPC_TARGETTING
    case 0xC246CC: {
        Instruction step(cpu, 0x22, 0xC26DB6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:102 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC246D0: {
        Instruction step(cpu, 0x22, 0xC24023u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:103 BRA @UNKNOWN14
    case 0xC246D4: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:105 JSL TARGET_ALL_ENEMIES
    case 0xC246D6: {
        Instruction step(cpu, 0x22, 0xC26BC1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:106 LDX @LOCAL00
    case 0xC246DA: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:107 LDA a:battler::ally_or_enemy,X
    case 0xC246DC: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:108 AND #$00FF
    case 0xC246DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC246DF.
    case 0xC246E1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:109 BNE @UNKNOWN13
    case 0xC246E2: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:110 JSL REMOVE_NPC_TARGETTING
    case 0xC246E4: {
        Instruction step(cpu, 0x22, 0xC26DB6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:112 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC246E8: {
        Instruction step(cpu, 0x22, 0xC24023u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C24703.asm:114 END_C_FUNCTION
    case 0xC246EC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C24703.asm:114 END_C_FUNCTION
    case 0xC246ED: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
