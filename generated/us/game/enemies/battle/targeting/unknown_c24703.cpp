// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C2/C24703.asm
bool resume_unresolved_c2_c24703(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C24703.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC24703: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC24705: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC24706: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC24707: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC24708: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC24708.
    case 0xC2470A: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC2470B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C24703.asm:7 END_STACK_VARS
    case 0xC2470C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:8 TAX
    case 0xC2470D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:9 STX @LOCAL00
    case 0xC2470E: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC24710: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC24710.
    case 0xC24712: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC24713: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC24716: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC24716.
    case 0xC24718: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C24703.asm:10 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC24719: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:11 LDA a:battler::action_targetting,X
    case 0xC2471C: {
        Instruction step(cpu, 0xBD, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:12 AND #$00FF
    case 0xC2471F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC2471F.
    case 0xC24721: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:13 CMP #1
    case 0xC24722: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:13 CMP #1
    // Overlapping static entry reached from 0xC24722.
    case 0xC24724: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:14 BEQ @UNKNOWN2
    case 0xC24725: {
        Instruction step(cpu, 0xF0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:15 CMP #2
    case 0xC24727: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:15 CMP #2
    // Overlapping static entry reached from 0xC24727.
    case 0xC24729: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:16 BEQ @UNKNOWN3
    case 0xC2472A: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:17 CMP #4
    case 0xC2472C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:17 CMP #4
    // Overlapping static entry reached from 0xC2472C.
    case 0xC2472E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:18 BEQ @UNKNOWN3
    case 0xC2472F: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:19 CMP #17
    case 0xC24731: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:19 CMP #17
    // Overlapping static entry reached from 0xC24731.
    case 0xC24733: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:20 BEQ @UNKNOWN5
    case 0xC24734: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:21 CMP #18
    case 0xC24736: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:21 CMP #18
    // Overlapping static entry reached from 0xC24736.
    case 0xC24738: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C24703.asm:22 BEQL @UNKNOWN11
    case 0xC24739: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C24703.asm:22 BEQL @UNKNOWN11
    case 0xC2473B: {
        Instruction step(cpu, 0x4C, 0x0047F5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:23 CMP #20
    case 0xC2473E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:23 CMP #20
    // Overlapping static entry reached from 0xC2473E.
    case 0xC24740: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C24703.asm:24 BEQL @UNKNOWN12
    case 0xC24741: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C24703.asm:24 BEQL @UNKNOWN12
    case 0xC24743: {
        Instruction step(cpu, 0x4C, 0x004809u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:25 JMP @UNKNOWN14
    case 0xC24746: {
        Instruction step(cpu, 0x4C, 0x00481Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:27 LDA a:battler::current_target,X
    case 0xC24749: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:28 AND #$00FF
    case 0xC2474C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC2474C.
    case 0xC2474E: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:29 DEC
    case 0xC2474F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:30 JSL TARGET_BATTLER
    case 0xC24750: {
        Instruction step(cpu, 0x22, 0xC26FDCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:31 JMP @UNKNOWN14
    case 0xC24754: {
        Instruction step(cpu, 0x4C, 0x00481Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:33 JSL TARGET_ALLIES
    case 0xC24757: {
        Instruction step(cpu, 0x22, 0xC26BFBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:34 LDX @LOCAL00
    case 0xC2475B: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:35 LDA a:battler::current_action,X
    case 0xC2475D: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:36 JSL GET_SHIELD_TARGETTING
    case 0xC24760: {
        Instruction step(cpu, 0x22, 0xC23FEAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:37 CMP #0
    case 0xC24764: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:37 CMP #0
    // Overlapping static entry reached from 0xC24764.
    case 0xC24766: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:38 BNE @UNKNOWN4
    case 0xC24767: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:39 LDX @LOCAL00
    case 0xC24769: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:40 LDA a:battler::ally_or_enemy,X
    case 0xC2476B: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:41 AND #$00FF
    case 0xC2476E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC2476E.
    case 0xC24770: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:42 BNE @UNKNOWN4
    case 0xC24771: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:43 JSL REMOVE_NPC_TARGETTING
    case 0xC24773: {
        Instruction step(cpu, 0x22, 0xC26E77u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:45 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC24777: {
        Instruction step(cpu, 0x22, 0xC2416Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:46 JMP @UNKNOWN14
    case 0xC2477B: {
        Instruction step(cpu, 0x4C, 0x00481Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:48 LDA a:battler::current_target,X
    case 0xC2477E: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:49 AND #$00FF
    case 0xC24781: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC24781.
    case 0xC24783: {
        Instruction step(cpu, 0x00, 0x0000CDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:50 CMP NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24784: {
        Instruction step(cpu, 0xCD, 0x00AD56u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C24703.asm:51 BLTEQ @UNKNOWN6
    case 0xC24787: {
        Instruction step(cpu, 0x90, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C24703.asm:51 BLTEQ @UNKNOWN6
    case 0xC24789: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:52 SEC
    case 0xC2478B: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:53 SBC NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2478C: {
        Instruction step(cpu, 0xED, 0x00AD56u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:54 TAX
    case 0xC2478F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:55 DEX
    case 0xC24790: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:56 LDA BACK_ROW_BATTLERS,X
    case 0xC24791: {
        Instruction step(cpu, 0xBD, 0x00AD82u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:57 AND #$00FF
    case 0xC24794: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC24794.
    case 0xC24796: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:58 JSL TARGET_BATTLER
    case 0xC24797: {
        Instruction step(cpu, 0x22, 0xC26FDCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:59 BRA @UNKNOWN7
    case 0xC2479B: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:61 TAX
    case 0xC2479D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:62 DEX
    case 0xC2479E: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:63 LDA FRONT_ROW_BATTLERS,X
    case 0xC2479F: {
        Instruction step(cpu, 0xBD, 0x00AD7Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:64 AND #$00FF
    case 0xC247A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC247A2.
    case 0xC247A4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:65 JSL TARGET_BATTLER
    case 0xC247A5: {
        Instruction step(cpu, 0x22, 0xC26FDCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:67 LDX @LOCAL00
    case 0xC247A9: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:68 LDA a:battler::current_action,X
    case 0xC247AB: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:69 CMP #BATTLE_ACTIONS::PSI_HEALING_OMEGA
    case 0xC247AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:69 CMP #BATTLE_ACTIONS::PSI_HEALING_OMEGA
    // Overlapping static entry reached from 0xC247AE.
    case 0xC247B0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:70 BNE @UNKNOWN14
    case 0xC247B1: {
        Instruction step(cpu, 0xD0, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:71 LDA #8
    case 0xC247B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:71 LDA #8
    // Overlapping static entry reached from 0xC247B3.
    case 0xC247B5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:72 STA @LOCAL00
    case 0xC247B6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:73 BRA @UNKNOWN10
    case 0xC247B8: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:75 LDY #.SIZEOF(battler)
    case 0xC247BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:75 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC247BA.
    case 0xC247BC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:76 JSL MULT168
    case 0xC247BD: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:77 TAX
    case 0xC247C1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:78 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC247C2: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:79 AND #$00FF
    case 0xC247C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC247C5.
    case 0xC247C7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:80 BEQ @UNKNOWN9
    case 0xC247C8: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:81 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC247CA: {
        Instruction step(cpu, 0xBD, 0x009FC9u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:82 AND #$00FF
    case 0xC247CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC247CD.
    case 0xC247CF: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:83 CMP #STATUS_0::UNCONSCIOUS
    case 0xC247D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:83 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC247D0.
    case 0xC247D2: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:84 BNE @UNKNOWN9
    case 0xC247D3: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC247D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC247D5.
    case 0xC247D7: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC247D8: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC247DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC247DB.
    case 0xC247DD: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C2/C24703.asm:85 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC247DE: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:86 LDA @LOCAL00
    case 0xC247E1: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:87 JSL TARGET_BATTLER
    case 0xC247E3: {
        Instruction step(cpu, 0x22, 0xC26FDCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:88 BRA @UNKNOWN14
    case 0xC247E7: {
        Instruction step(cpu, 0x80, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:90 LDA @LOCAL00
    case 0xC247E9: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:91 INC
    case 0xC247EB: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:92 STA @LOCAL00
    case 0xC247EC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:94 CMP #BATTLER_COUNT
    case 0xC247EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:94 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC247EE.
    case 0xC247F0: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:95 BCC @UNKNOWN8
    case 0xC247F1: {
        Instruction step(cpu, 0x90, 0x0000C7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:96 BRA @UNKNOWN14
    case 0xC247F3: {
        Instruction step(cpu, 0x80, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:98 LDA a:battler::current_target,X
    case 0xC247F5: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:99 AND #$00FF
    case 0xC247F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC247F8.
    case 0xC247FA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:100 JSL TARGET_ROW
    case 0xC247FB: {
        Instruction step(cpu, 0x22, 0xC26D04u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:101 JSL REMOVE_NPC_TARGETTING
    case 0xC247FF: {
        Instruction step(cpu, 0x22, 0xC26E77u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:102 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC24803: {
        Instruction step(cpu, 0x22, 0xC2416Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:103 BRA @UNKNOWN14
    case 0xC24807: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:105 JSL TARGET_ALL_ENEMIES
    case 0xC24809: {
        Instruction step(cpu, 0x22, 0xC26C82u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:106 LDX @LOCAL00
    case 0xC2480D: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:107 LDA a:battler::ally_or_enemy,X
    case 0xC2480F: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:108 AND #$00FF
    case 0xC24812: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC24812.
    case 0xC24814: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:109 BNE @UNKNOWN13
    case 0xC24815: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:110 JSL REMOVE_NPC_TARGETTING
    case 0xC24817: {
        Instruction step(cpu, 0x22, 0xC26E77u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C24703.asm:112 JSL REMOVE_STATUS_UNTARGETTABLE_TARGETS
    case 0xC2481B: {
        Instruction step(cpu, 0x22, 0xC2416Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C24703.asm:114 END_C_FUNCTION
    case 0xC2481F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C24703.asm:114 END_C_FUNCTION
    case 0xC24820: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
