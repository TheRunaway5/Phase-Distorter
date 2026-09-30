// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/calc_damage.asm
bool resume_battle_calc_damage(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/calc_damage.asm:4 BEGIN_C_FUNCTION
    case 0xC27E46: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27E48: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27E49: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27E4A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27E4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x00FFE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC27E4B.
    case 0xC27E4D: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27E4E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/calc_damage.asm:17 END_STACK_VARS
    case 0xC27E4F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:18 STX @VIRTUAL04
    case 0xC27E50: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/calc_damage.asm:18 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC27E4D.
    case 0xC27E51: {
        Instruction step(cpu, 0x04, 0x0000A8u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/calc_damage.asm:19 TAY
    case 0xC27E52: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/calc_damage.asm:20 STY @LOCAL05
    case 0xC27E53: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_damage.asm:21 STZ @LOCAL04
    case 0xC27E55: {
        Instruction step(cpu, 0x64, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:22 LDA @VIRTUAL04
    case 0xC27E57: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:23 BNE @UNKNOWN0
    case 0xC27E59: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27E5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x002DCBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27E5B.
    case 0xC27E5D: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27E5E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27E60: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27E60.
    case 0xC27E62: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27E63: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/calc_damage.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27E65: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage.asm:25 LDA #0
    case 0xC27E69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:25 LDA #0
    // Overlapping static entry reached from 0xC27E69.
    case 0xC27E6B: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:26 JMP @RETURN
    case 0xC27E6C: {
        Instruction step(cpu, 0x4C, 0x0080C9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/calc_damage.asm:28 LDA __BSS_START__ + battler::ally_or_enemy,Y
    case 0xC27E6F: {
        Instruction step(cpu, 0xB9, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:29 AND #$00FF
    case 0xC27E72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC27E72.
    case 0xC27E74: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:30 CMP #1
    case 0xC27E75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:30 CMP #1
    // Overlapping static entry reached from 0xC27E75.
    case 0xC27E77: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:31 BNE @UNKNOWN2
    case 0xC27E78: {
        Instruction step(cpu, 0xD0, 0x000065u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:32 LDA __BSS_START__ + battler::id,Y
    case 0xC27E7A: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:33 CMP #ENEMY::GIYGAS_2
    case 0xC27E7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DAu : 0x0000DAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:33 CMP #ENEMY::GIYGAS_2
    // Overlapping static entry reached from 0xC27E7D.
    case 0xC27E7F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:34 BNE @UNKNOWN2
    case 0xC27E80: {
        Instruction step(cpu, 0xD0, 0x00005Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:35 LDA #$0001
    case 0xC27E82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:35 LDA #$0001
    // Overlapping static entry reached from 0xC27E82.
    case 0xC27E84: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:36 STA @LOCAL04
    case 0xC27E85: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:37 LDA CURRENT_TARGET
    case 0xC27E87: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:38 STA @LOCAL03
    case 0xC27E8A: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:40 JSL RAND
    case 0xC27E8C: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage.asm:41 AND #$0003
    case 0xC27E90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:41 AND #$0003
    // Overlapping static entry reached from 0xC27E90.
    case 0xC27E92: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:42 LDY #.SIZEOF(battler)
    case 0xC27E93: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_damage.asm:42 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27E93.
    case 0xC27E95: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:43 JSL MULT168
    case 0xC27E96: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage.asm:44 CLC
    case 0xC27E9A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_damage.asm:45 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC27E9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_damage.asm:45 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC27E9B.
    case 0xC27E9D: {
        Instruction step(cpu, 0xA1, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:46 TAX
    case 0xC27E9E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_damage.asm:47 STX CURRENT_TARGET
    case 0xC27E9F: {
        Instruction step(cpu, 0x8E, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/calc_damage.asm:48 LDA __BSS_START__ + battler::consciousness,X
    case 0xC27EA2: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:49 AND #$00FF
    case 0xC27EA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC27EA5.
    case 0xC27EA7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:50 BEQ @UNKNOWN1
    case 0xC27EA8: {
        Instruction step(cpu, 0xF0, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:51 LDA __BSS_START__ + battler::npc_id,X
    case 0xC27EAA: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:52 AND #$00FF
    case 0xC27EAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC27EAD.
    case 0xC27EAF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:53 BNE @UNKNOWN1
    case 0xC27EB0: {
        Instruction step(cpu, 0xD0, 0x0000DAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:54 LDA __BSS_START__ + battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27EB2: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:55 AND #$00FF
    case 0xC27EB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC27EB5.
    case 0xC27EB7: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:56 TAX
    case 0xC27EB8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_damage.asm:57 CPX #STATUS_0::UNCONSCIOUS
    case 0xC27EB9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/calc_damage.asm:57 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC27EB9.
    case 0xC27EBB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:58 BEQ @UNKNOWN1
    case 0xC27EBC: {
        Instruction step(cpu, 0xF0, 0x0000CEu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:59 CPX #STATUS_0::DIAMONDIZED
    case 0xC27EBE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/calc_damage.asm:59 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC27EBE.
    case 0xC27EC0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:60 BEQ @UNKNOWN1
    case 0xC27EC1: {
        Instruction step(cpu, 0xF0, 0x0000C9u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:61 JSL FIX_TARGET_NAME
    case 0xC27EC3: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage.asm:62 LDY CURRENT_TARGET
    case 0xC27EC7: {
        Instruction step(cpu, 0xAC, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_damage.asm:63 STY @LOCAL05
    case 0xC27ECA: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/calc_damage.asm:64 LDA #$0010
    case 0xC27ECC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:64 LDA #$0010
    // Overlapping static entry reached from 0xC27ECC.
    case 0xC27ECE: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:65 STA REFLECT_FLASH_DURATION
    case 0xC27ECF: {
        Instruction step(cpu, 0x8D, 0x00AF7Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:66 LDA #SFX::REFLECT_DAMAGE
    case 0xC27ED2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000049u : 0x000049u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:66 LDA #SFX::REFLECT_DAMAGE
    // Overlapping static entry reached from 0xC27ED2.
    case 0xC27ED4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:67 JSL PLAY_SOUND
    case 0xC27ED5: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage.asm:68 LDA #1*HALF_OF_A_SECOND
    case 0xC27ED9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:68 LDA #1*HALF_OF_A_SECOND
    // Overlapping static entry reached from 0xC27ED9.
    case 0xC27EDB: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:69 JSR WAIT
    case 0xC27EDC: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_damage.asm:71 LDY @LOCAL05
    case 0xC27EDF: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_damage.asm:72 LDA __BSS_START__ + battler::hp_target,Y
    case 0xC27EE1: {
        Instruction step(cpu, 0xB9, 0x000013u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:73 STA @VIRTUAL02
    case 0xC27EE4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:74 LDA __BSS_START__ + battler::ally_or_enemy,Y
    case 0xC27EE6: {
        Instruction step(cpu, 0xB9, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:75 AND #$00FF
    case 0xC27EE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC27EE9.
    case 0xC27EEB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:76 BEQ @UNKNOWN3
    case 0xC27EEC: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:77 LDA __BSS_START__ + battler::id,Y
    case 0xC27EEE: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:78 CMP #ENEMY::MASTER_BELCH_1
    case 0xC27EF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00005Du : 0x00005Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:78 CMP #ENEMY::MASTER_BELCH_1
    // Overlapping static entry reached from 0xC27EF1.
    case 0xC27EF3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:79 BEQ @UNKNOWN4
    case 0xC27EF4: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:80 CMP #ENEMY::MASTER_BELCH_3
    case 0xC27EF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:80 CMP #ENEMY::MASTER_BELCH_3
    // Overlapping static entry reached from 0xC27EF6.
    case 0xC27EF8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:81 BEQ @UNKNOWN4
    case 0xC27EF9: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:82 CMP #ENEMY::GIYGAS_2
    case 0xC27EFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DAu : 0x0000DAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:82 CMP #ENEMY::GIYGAS_2
    // Overlapping static entry reached from 0xC27EFB.
    case 0xC27EFD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:83 BEQ @UNKNOWN4
    case 0xC27EFE: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:84 CMP #ENEMY::GIYGAS_3
    case 0xC27F00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DBu : 0x0000DBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:84 CMP #ENEMY::GIYGAS_3
    // Overlapping static entry reached from 0xC27F00.
    case 0xC27F02: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:85 BEQ @UNKNOWN4
    case 0xC27F03: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:86 CMP #ENEMY::GIYGAS_5
    case 0xC27F05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DDu : 0x0000DDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:86 CMP #ENEMY::GIYGAS_5
    // Overlapping static entry reached from 0xC27F05.
    case 0xC27F07: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:87 BEQ @UNKNOWN4
    case 0xC27F08: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:88 CMP #ENEMY::GIYGAS_6
    case 0xC27F0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E5u : 0x0000E5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:88 CMP #ENEMY::GIYGAS_6
    // Overlapping static entry reached from 0xC27F0A.
    case 0xC27F0C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:89 BEQ @UNKNOWN4
    case 0xC27F0D: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:91 LDX @VIRTUAL04
    case 0xC27F0F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage.asm:92 TYA
    case 0xC27F11: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:93 JSR REDUCE_HP
    case 0xC27F12: {
        Instruction step(cpu, 0x20, 0x007133u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_damage.asm:95 LDY @LOCAL05
    case 0xC27F15: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_damage.asm:96 LDA __BSS_START__ + battler::ally_or_enemy,Y
    case 0xC27F17: {
        Instruction step(cpu, 0xB9, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:97 AND #$00FF
    case 0xC27F1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC27F1A.
    case 0xC27F1C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:98 BNE @UNKNOWN8
    case 0xC27F1D: {
        Instruction step(cpu, 0xD0, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:99 LDA __BSS_START__ + battler::hp_target,Y
    case 0xC27F1F: {
        Instruction step(cpu, 0xB9, 0x000013u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:100 BNE @UNKNOWN7
    case 0xC27F22: {
        Instruction step(cpu, 0xD0, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:101 LDA @VIRTUAL02
    case 0xC27F24: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:102 CMP #$0001
    case 0xC27F26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:102 CMP #$0001
    // Overlapping static entry reached from 0xC27F26.
    case 0xC27F28: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/calc_damage.asm:103 BLTEQ @UNKNOWN7
    case 0xC27F29: {
        Instruction step(cpu, 0x90, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/calc_damage.asm:103 BLTEQ @UNKNOWN7
    case 0xC27F2B: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:104 LDX CURRENT_ATTACKER
    case 0xC27F2D: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage.asm:105 LDA __BSS_START__ + battler::guts,X
    case 0xC27F30: {
        Instruction step(cpu, 0xBD, 0x00002Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:106 CMP #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    case 0xC27F33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:106 CMP #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    // Overlapping static entry reached from 0xC27F33.
    case 0xC27F35: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:107 BCS @UNKNOWN5
    case 0xC27F36: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/calc_damage.asm:108 LDX #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    case 0xC27F38: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage.asm:108 LDX #GUTS_FLOOR_FOR_SMAAAASH_CHANCE
    // Overlapping static entry reached from 0xC27F38.
    case 0xC27F3A: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:109 BRA @UNKNOWN6
    case 0xC27F3B: {
        Instruction step(cpu, 0x80, 0x000001u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_damage.asm:111 TAX
    case 0xC27F3D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_damage.asm:113 TXA
    case 0xC27F3E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:114 JSR SUCCESS_500
    case 0xC27F3F: {
        Instruction step(cpu, 0x20, 0x006B1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_damage.asm:115 CMP #$0000
    case 0xC27F42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:115 CMP #$0000
    // Overlapping static entry reached from 0xC27F42.
    case 0xC27F44: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:116 BEQ @UNKNOWN7
    case 0xC27F45: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:117 LDX #$0001
    case 0xC27F47: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage.asm:117 LDX #$0001
    // Overlapping static entry reached from 0xC27F47.
    case 0xC27F49: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:118 LDY @LOCAL05
    case 0xC27F4A: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_damage.asm:119 TYA
    case 0xC27F4C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:120 JSR SET_HP
    case 0xC27F4D: {
        Instruction step(cpu, 0x20, 0x007065u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_damage.asm:122 LDA ENEMY_PERFORMING_FINAL_ATTACK
    case 0xC27F50: {
        Instruction step(cpu, 0xAD, 0x00AC65u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:123 BEQ @UNKNOWN8
    case 0xC27F53: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:124 LDA #$0001
    case 0xC27F55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:124 LDA #$0001
    // Overlapping static entry reached from 0xC27F55.
    case 0xC27F57: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:125 JSL COUNT_CHARS
    case 0xC27F58: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage.asm:126 CMP #$0001
    case 0xC27F5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:126 CMP #$0001
    // Overlapping static entry reached from 0xC27F5C.
    case 0xC27F5E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:127 BNE @UNKNOWN8
    case 0xC27F5F: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:128 LDA #$0000
    case 0xC27F61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:128 LDA #$0000
    // Overlapping static entry reached from 0xC27F61.
    case 0xC27F63: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:129 JSL COUNT_CHARS
    case 0xC27F64: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage.asm:130 CMP #$0001
    case 0xC27F68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:130 CMP #$0001
    // Overlapping static entry reached from 0xC27F68.
    case 0xC27F6A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:131 BNE @UNKNOWN8
    case 0xC27F6B: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:132 LDX #$0001
    case 0xC27F6D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/calc_damage.asm:132 LDX #$0001
    // Overlapping static entry reached from 0xC27F6D.
    case 0xC27F6F: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:133 LDY @LOCAL05
    case 0xC27F70: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_damage.asm:134 TYA
    case 0xC27F72: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:135 JSR SET_HP
    case 0xC27F73: {
        Instruction step(cpu, 0x20, 0x007065u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/calc_damage.asm:137 LDY @LOCAL05
    case 0xC27F76: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/calc_damage.asm:138 LDA __BSS_START__ + battler::ally_or_enemy,Y
    case 0xC27F78: {
        Instruction step(cpu, 0xB9, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:139 AND #$00FF
    case 0xC27F7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:139 AND #$00FF
    // Overlapping static entry reached from 0xC27F7B.
    case 0xC27F7D: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:140 CMP #$0001
    case 0xC27F7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:140 CMP #$0001
    // Overlapping static entry reached from 0xC27F7E.
    case 0xC27F80: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:141 BNE @UNKNOWN12
    case 0xC27F81: {
        Instruction step(cpu, 0xD0, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:142 LDA __BSS_START__ + battler::id,Y
    case 0xC27F83: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:143 CMP #ENEMY::GIYGAS_3
    case 0xC27F86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DBu : 0x0000DBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:143 CMP #ENEMY::GIYGAS_3
    // Overlapping static entry reached from 0xC27F86.
    case 0xC27F88: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:144 BEQ @UNKNOWN9
    case 0xC27F89: {
        Instruction step(cpu, 0xF0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:145 CMP #ENEMY::GIYGAS_4
    case 0xC27F8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DCu : 0x0000DCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:145 CMP #ENEMY::GIYGAS_4
    // Overlapping static entry reached from 0xC27F8B.
    case 0xC27F8D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:146 BEQ @UNKNOWN9
    case 0xC27F8E: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:147 CMP #ENEMY::GIYGAS_5
    case 0xC27F90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000DDu : 0x0000DDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:147 CMP #ENEMY::GIYGAS_5
    // Overlapping static entry reached from 0xC27F90.
    case 0xC27F92: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:148 BEQ @UNKNOWN9
    case 0xC27F93: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:149 CMP #ENEMY::GIYGAS_6
    case 0xC27F95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000E5u : 0x0000E5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:149 CMP #ENEMY::GIYGAS_6
    // Overlapping static entry reached from 0xC27F95.
    case 0xC27F97: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:150 BNE @UNKNOWN10
    case 0xC27F98: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:152 LDA #$0010
    case 0xC27F9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:152 LDA #$0010
    // Overlapping static entry reached from 0xC27F9A.
    case 0xC27F9C: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:153 STA GREEN_BACKGROUND_FLASH_DURATION
    case 0xC27F9D: {
        Instruction step(cpu, 0x8D, 0x00AF7Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:155 SEP #PROC_FLAGS::ACCUM8
    case 0xC27FA0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/calc_damage.asm:156 LDA #$0015
    case 0xC27FA2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000015u : 0x009915u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:157 STA __BSS_START__ + 72,Y
    case 0xC27FA4: {
        Instruction step(cpu, 0x99, 0x000048u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:157 STA __BSS_START__ + 72,Y
    // Overlapping static entry reached from 0xC27FA2.
    case 0xC27FA5: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:157 STA __BSS_START__ + 72,Y
    // Overlapping static entry reached from 0xC27FA5.
    case 0xC27FA6: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:158 REP #PROC_FLAGS::ACCUM8
    case 0xC27FA7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/calc_damage.asm:159 LDA IS_SMAAAAASH_ATTACK
    case 0xC27FA9: {
        Instruction step(cpu, 0xAD, 0x00AC63u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:160 BEQ @UNKNOWN11
    case 0xC27FAC: {
        Instruction step(cpu, 0xF0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    case 0xC27FAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Eu : 0x002D5Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    // Overlapping static entry reached from 0xC27FAE.
    case 0xC27FB0: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    case 0xC27FB1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    case 0xC27FB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    // Overlapping static entry reached from 0xC27FB3.
    case 0xC27FB5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:161 LOADPTR MSG_BTL_DAMAGE_SMASH_M, @LOCAL00
    case 0xC27FB6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:162 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC27FB8: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:162 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC27FBA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:162 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC27FBC: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:163 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FBE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:163 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FC0: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:163 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FC2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:163 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FC4: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:164 JSL DISPLAY_TEXT_WAIT
    case 0xC27FC6: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage.asm:165 STZ IS_SMAAAAASH_ATTACK
    case 0xC27FCA: {
        Instruction step(cpu, 0x9C, 0x00AC63u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:166 JMP @UNKNOWN20
    case 0xC27FCD: {
        Instruction step(cpu, 0x4C, 0x0080B9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    case 0xC27FD0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000036u : 0x002D36u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    // Overlapping static entry reached from 0xC27FD0.
    case 0xC27FD2: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    case 0xC27FD3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    case 0xC27FD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    // Overlapping static entry reached from 0xC27FD5.
    case 0xC27FD7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:168 LOADPTR MSG_BTL_DAMAGE_M, @LOCAL00
    case 0xC27FD8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:169 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC27FDA: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:169 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC27FDC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:169 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC27FDE: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:170 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FE0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:170 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FE2: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:170 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FE4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:170 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27FE6: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:171 JSL DISPLAY_TEXT_WAIT
    case 0xC27FE8: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage.asm:172 JMP @UNKNOWN20
    case 0xC27FEC: {
        Instruction step(cpu, 0x4C, 0x0080B9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/calc_damage.asm:174 LDA __BSS_START__ + battler::npc_id,Y
    case 0xC27FEF: {
        Instruction step(cpu, 0xB9, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:175 AND #$00FF
    case 0xC27FF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:175 AND #$00FF
    // Overlapping static entry reached from 0xC27FF2.
    case 0xC27FF4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:176 BNE @UNKNOWN16
    case 0xC27FF5: {
        Instruction step(cpu, 0xD0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:177 LDA HP_PP_BOX_BLINK_DURATION
    case 0xC27FF7: {
        Instruction step(cpu, 0xAD, 0x00AF79u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:178 BNE @UNKNOWN16
    case 0xC27FFA: {
        Instruction step(cpu, 0xD0, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:179 LDA #$0015
    case 0xC27FFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000015u : 0x000015u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:179 LDA #$0015
    // Overlapping static entry reached from 0xC27FFC.
    case 0xC27FFE: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:180 STA HP_PP_BOX_BLINK_DURATION
    case 0xC27FFF: {
        Instruction step(cpu, 0x8D, 0x00AF79u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:182 LDA #$0000
    case 0xC28002: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:182 LDA #$0000
    // Overlapping static entry reached from 0xC28002.
    case 0xC28004: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:183 STA @LOCAL02
    case 0xC28005: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:187 BRA @UNKNOWN15
    case 0xC28007: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_damage.asm:189 LDA __BSS_START__ + battler::id,Y
    case 0xC28009: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:190 STA @VIRTUAL02
    case 0xC2800C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:192 LDA @LOCAL02
    case 0xC2800E: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:193 CLC
    case 0xC28010: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/calc_damage.asm:194 ADC #.LOWORD(GAME_STATE)
    case 0xC28011: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/calc_damage.asm:194 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC28011.
    case 0xC28013: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/calc_damage.asm:195 TAX
    case 0xC28014: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/calc_damage.asm:196 LDA a:game_state::party_members,X
    case 0xC28015: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:197 AND #$00FF
    case 0xC28018: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:197 AND #$00FF
    // Overlapping static entry reached from 0xC28018.
    case 0xC2801A: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:198 CMP @VIRTUAL02
    case 0xC2801B: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:199 BNE @UNKNOWN14
    case 0xC2801D: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:200 LDA @LOCAL02
    case 0xC2801F: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:201 STA HP_PP_BOX_BLINK_TARGET
    case 0xC28021: {
        Instruction step(cpu, 0x8D, 0x00AF7Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:209 BRA @UNKNOWN16
    case 0xC28024: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_damage.asm:212 LDA @LOCAL02
    case 0xC28026: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:213 INC
    case 0xC28028: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/calc_damage.asm:214 STA @LOCAL02
    case 0xC28029: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:220 CMP #TOTAL_PARTY_COUNT
    case 0xC2802B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:220 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC2802B.
    case 0xC2802D: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:224 BCC @UNKNOWN13
    case 0xC2802E: {
        Instruction step(cpu, 0x90, 0x0000D9u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/calc_damage.asm:226 LDA __BSS_START__ + battler::hp_target,Y
    case 0xC28030: {
        Instruction step(cpu, 0xB9, 0x000013u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:227 BNE @TARGET_SURVIVED
    case 0xC28033: {
        Instruction step(cpu, 0xD0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:228 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_MORTAL
    case 0xC28035: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:228 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_MORTAL
    // Overlapping static entry reached from 0xC28035.
    case 0xC28037: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:229 STA VERTICAL_SHAKE_DURATION
    case 0xC28038: {
        Instruction step(cpu, 0x8D, 0x00AF61u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:230 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_MORTAL_HOLD
    case 0xC2803B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:230 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_MORTAL_HOLD
    // Overlapping static entry reached from 0xC2803B.
    case 0xC2803D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:231 STA VERTICAL_SHAKE_HOLD_DURATION
    case 0xC2803E: {
        Instruction step(cpu, 0x8D, 0x00AF63u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    case 0xC28041: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000072u : 0x002D72u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    // Overlapping static entry reached from 0xC28041.
    case 0xC28043: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    case 0xC28044: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    case 0xC28046: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    // Overlapping static entry reached from 0xC28046.
    case 0xC28048: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:232 LOADPTR MSG_BTL_DAMAGE_TO_DEATH, @LOCAL00
    case 0xC28049: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:233 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC2804B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:233 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC2804D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:233 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC2804F: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:234 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28051: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:234 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28053: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:234 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28055: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:234 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28057: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:235 JSL DISPLAY_TEXT_WAIT
    case 0xC28059: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage.asm:236 BRA @UNKNOWN19
    case 0xC2805D: {
        Instruction step(cpu, 0x80, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_damage.asm:238 LDA IS_SMAAAAASH_ATTACK
    case 0xC2805F: {
        Instruction step(cpu, 0xAD, 0x00AC63u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:239 BEQ @UNKNOWN18
    case 0xC28062: {
        Instruction step(cpu, 0xF0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:240 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_REGULAR
    case 0xC28064: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:240 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_REGULAR
    // Overlapping static entry reached from 0xC28064.
    case 0xC28066: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:241 STA VERTICAL_SHAKE_DURATION
    case 0xC28067: {
        Instruction step(cpu, 0x8D, 0x00AF61u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    case 0xC2806A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x002D4Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    // Overlapping static entry reached from 0xC2806A.
    case 0xC2806C: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    case 0xC2806D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    case 0xC2806F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    // Overlapping static entry reached from 0xC2806F.
    case 0xC28071: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:242 LOADPTR MSG_BTL_DAMAGE_SMASH, @LOCAL00
    case 0xC28072: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:243 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC28074: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:243 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC28076: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:243 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC28078: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:244 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2807A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:244 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2807C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:244 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2807E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:244 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28080: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:245 JSL DISPLAY_TEXT_WAIT
    case 0xC28082: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage.asm:246 STZ VERTICAL_SHAKE_HOLD_DURATION
    case 0xC28086: {
        Instruction step(cpu, 0x9C, 0x00AF63u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:247 STZ IS_SMAAAAASH_ATTACK
    case 0xC28089: {
        Instruction step(cpu, 0x9C, 0x00AC63u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:248 BRA @UNKNOWN19
    case 0xC2808C: {
        Instruction step(cpu, 0x80, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/calc_damage.asm:250 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_REGULAR_UNKNOWN
    case 0xC2808E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Au : 0x00002Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:250 LDA #DAMAGE_TAKEN_SCREEN_SHAKE_DURATION_REGULAR_UNKNOWN
    // Overlapping static entry reached from 0xC2808E.
    case 0xC28090: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:251 STA VERTICAL_SHAKE_DURATION
    case 0xC28091: {
        Instruction step(cpu, 0x8D, 0x00AF61u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    case 0xC28094: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000022u : 0x002D22u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC28094.
    case 0xC28096: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    case 0xC28097: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    case 0xC28099: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    // Overlapping static entry reached from 0xC28099.
    case 0xC2809B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/calc_damage.asm:252 LOADPTR MSG_BTL_DAMAGE, @LOCAL00
    case 0xC2809C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/calc_damage.asm:253 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC2809E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/calc_damage.asm:253 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC280A0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/calc_damage.asm:253 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC280A2: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/calc_damage.asm:254 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280A4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/calc_damage.asm:254 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280A6: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:254 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280A8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/calc_damage.asm:254 MOVE_INT @VIRTUAL06, @LOCAL01
    // Overlapping static entry reached from 0xC2B5FD.
    case 0xC280A9: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/calc_damage.asm:254 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC280AA: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:255 JSL DISPLAY_TEXT_WAIT
    case 0xC280AC: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage.asm:256 STZ VERTICAL_SHAKE_HOLD_DURATION
    case 0xC280B0: {
        Instruction step(cpu, 0x9C, 0x00AF63u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:258 LDA #$0028
    case 0xC280B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:258 LDA #$0028
    // Overlapping static entry reached from 0xC280B3.
    case 0xC280B5: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/calc_damage.asm:259 STA SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC280B6: {
        Instruction step(cpu, 0x8D, 0x00AF65u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:261 LDA @LOCAL04
    case 0xC280B9: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:262 BEQ @UNKNOWN21
    case 0xC280BB: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/calc_damage.asm:263 LDA @LOCAL03
    case 0xC280BD: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:264 STA CURRENT_TARGET
    case 0xC280BF: {
        Instruction step(cpu, 0x8D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:265 JSL FIX_TARGET_NAME
    case 0xC280C2: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/calc_damage.asm:267 LDA #$0001
    case 0xC280C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/calc_damage.asm:267 LDA #$0001
    // Overlapping static entry reached from 0xC280C6.
    case 0xC280C8: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/calc_damage.asm:269 END_C_FUNCTION
    case 0xC280C9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/calc_damage.asm:269 END_C_FUNCTION
    case 0xC280CA: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
