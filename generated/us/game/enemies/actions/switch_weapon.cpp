// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/switch_weapon.asm
bool resume_battle_actions_switch_weapon(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/switch_weapon.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DE43: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DE45: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DE46: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DE47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x00FFE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DE47.
    case 0xC1DE49: {
        Instruction step(cpu, 0xFF, 0x70AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DE4A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:17 LDX CURRENT_ATTACKER
    case 0xC1DE4B: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:17 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC1DE49.
    case 0xC1DE4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BDu : 0x0000BDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:18 LDA a:battler::id,X
    case 0xC1DE4E: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:18 LDA a:battler::id,X
    // Overlapping static entry reached from 0xC1DE4D.
    case 0xC1DE4F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:18 LDA a:battler::id,X
    // Overlapping static entry reached from 0xC1DE4D.
    case 0xC1DE50: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:19 STA @LOCAL05
    case 0xC1DE51: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:20 LDA #1
    case 0xC1DE53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:20 LDA #1
    // Overlapping static entry reached from 0xC1DE53.
    case 0xC1DE55: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:21 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1DE56: {
        Instruction step(cpu, 0x20, 0x000036u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:22 LDX CURRENT_ATTACKER
    case 0xC1DE59: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:23 LDA a:battler::current_action_argument,X
    case 0xC1DE5C: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:24 AND #$00FF
    case 0xC1DE5F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC1DE5F.
    case 0xC1DE61: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:25 TAX
    case 0xC1DE62: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:26 LDA @LOCAL05
    case 0xC1DE63: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:27 JSL UNKNOWN_C3EE14
    case 0xC1DE65: {
        Instruction step(cpu, 0x22, 0xC3EE14u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:28 CMP #0
    case 0xC1DE69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:28 CMP #0
    // Overlapping static entry reached from 0xC1DE69.
    case 0xC1DE6B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/switch_weapon.asm:29 BEQL @DISPLAYTEXT
    case 0xC1DE6C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/switch_weapon.asm:29 BEQL @DISPLAYTEXT
    case 0xC1DE6E: {
        Instruction step(cpu, 0x4C, 0x00DF13u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:30 LDA @LOCAL05
    case 0xC1DE71: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:31 DEC
    case 0xC1DE73: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:32 LDY #.SIZEOF(char_struct)
    case 0xC1DE74: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DE74.
    case 0xC1DE76: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:33 JSL MULT168
    case 0xC1DE77: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:34 CLC
    case 0xC1DE7B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1DE7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1DE7C.
    case 0xC1DE7E: {
        Instruction step(cpu, 0x99, 0x0084A8u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:36 TAY
    case 0xC1DE7F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:37 STY @LOCAL04
    case 0xC1DE80: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:37 STY @LOCAL04
    // Overlapping static entry reached from 0xC1DE7E.
    case 0xC1DE81: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:38 LDX CURRENT_ATTACKER
    case 0xC1DE82: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:39 LDA a:battler::base_offense,X
    case 0xC1DE85: {
        Instruction step(cpu, 0xBD, 0x000032u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:40 AND #$00FF
    case 0xC1DE88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC1DE88.
    case 0xC1DE8A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:41 STA @VIRTUAL04
    case 0xC1DE8B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:42 LDX CURRENT_ATTACKER
    case 0xC1DE8D: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:43 LDA a:battler::offense,X
    case 0xC1DE90: {
        Instruction step(cpu, 0xBD, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:44 SEC
    case 0xC1DE93: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:45 SBC @VIRTUAL04
    case 0xC1DE94: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:46 STA @VIRTUAL02
    case 0xC1DE96: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:47 STA @LOCAL03
    case 0xC1DE98: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:48 LDX CURRENT_ATTACKER
    case 0xC1DE9A: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:49 LDA a:battler::base_guts,X
    case 0xC1DE9D: {
        Instruction step(cpu, 0xBD, 0x000035u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:50 AND #$00FF
    case 0xC1DEA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC1DEA0.
    case 0xC1DEA2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:51 STA @VIRTUAL02
    case 0xC1DEA3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:52 LDX CURRENT_ATTACKER
    case 0xC1DEA5: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:53 LDA a:battler::guts,X
    case 0xC1DEA8: {
        Instruction step(cpu, 0xBD, 0x00002Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:54 SEC
    case 0xC1DEAB: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:55 SBC @VIRTUAL02
    case 0xC1DEAC: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:56 STA @VIRTUAL04
    case 0xC1DEAE: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:57 LDX CURRENT_ATTACKER
    case 0xC1DEB0: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:58 LDA a:battler::action_item_slot,X
    case 0xC1DEB3: {
        Instruction step(cpu, 0xBD, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:59 AND #$00FF
    case 0xC1DEB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC1DEB6.
    case 0xC1DEB8: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:60 TAX
    case 0xC1DEB9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:61 LDA @LOCAL05
    case 0xC1DEBA: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:62 JSR EQUIP_ITEM
    case 0xC1DEBC: {
        Instruction step(cpu, 0x20, 0x009066u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:63 LDY @LOCAL04
    case 0xC1DEBF: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DEC1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:65 LDA a:char_struct::offense,Y
    case 0xC1DEC3: {
        Instruction step(cpu, 0xB9, 0x000015u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:66 LDX CURRENT_ATTACKER
    case 0xC1DEC6: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:67 STA a:battler::base_offense,X
    case 0xC1DEC9: {
        Instruction step(cpu, 0x9D, 0x000032u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC1DECC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:69 LDA @LOCAL03
    case 0xC1DECE: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:70 STA @VIRTUAL02
    case 0xC1DED0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:71 LDX CURRENT_ATTACKER
    case 0xC1DED2: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:72 LDA a:battler::base_offense,X
    case 0xC1DED5: {
        Instruction step(cpu, 0xBD, 0x000032u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:73 AND #$00FF
    case 0xC1DED8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC1DED8.
    case 0xC1DEDA: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:74 CLC
    case 0xC1DEDB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:75 ADC @VIRTUAL02
    case 0xC1DEDC: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:76 LDX CURRENT_ATTACKER
    case 0xC1DEDE: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:77 STA a:battler::offense,X
    case 0xC1DEE1: {
        Instruction step(cpu, 0x9D, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DEE4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:79 LDA a:char_struct::guts,Y
    case 0xC1DEE6: {
        Instruction step(cpu, 0xB9, 0x000018u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:80 LDX CURRENT_ATTACKER
    case 0xC1DEE9: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:81 STA a:battler::base_guts,X
    case 0xC1DEEC: {
        Instruction step(cpu, 0x9D, 0x000035u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:82 LDX CURRENT_ATTACKER
    case 0xC1DEEF: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC1DEF2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:84 LDA a:battler::base_guts,X
    case 0xC1DEF4: {
        Instruction step(cpu, 0xBD, 0x000035u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:85 AND #$00FF
    case 0xC1DEF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC1DEF7.
    case 0xC1DEF9: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:86 CLC
    case 0xC1DEFA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:87 ADC @VIRTUAL04
    case 0xC1DEFB: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:88 LDX CURRENT_ATTACKER
    case 0xC1DEFD: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:89 STA a:battler::guts,X
    case 0xC1DF00: {
        Instruction step(cpu, 0x9D, 0x00002Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DF03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x007E11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1DF03.
    case 0xC1DF05: {
        Instruction step(cpu, 0x7E, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DF06: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DF08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1DF08.
    case 0xC1DF0A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DF0B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DF0D: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:91 BRA @SKIPTEXT
    case 0xC1DF11: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000033u : 0x007E33u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1DF13.
    case 0xC1DF15: {
        Instruction step(cpu, 0x7E, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF16: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF18: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1DF18.
    case 0xC1DF1A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF1B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF1D: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:95 LDA @LOCAL05
    case 0xC1DF21: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:96 DEC
    case 0xC1DF23: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:97 LDY #.SIZEOF(char_struct)
    case 0xC1DF24: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:97 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DF24.
    case 0xC1DF26: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:98 JSL MULT168
    case 0xC1DF27: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:99 STA @LOCAL02
    case 0xC1DF2B: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:100 TAX
    case 0xC1DF2D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:101 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC1DF2E: {
        Instruction step(cpu, 0xBD, 0x0099FFu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:102 AND #$00FF
    case 0xC1DF31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC1DF31.
    case 0xC1DF33: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:103 DEC
    case 0xC1DF34: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:104 STA @VIRTUAL02
    case 0xC1DF35: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:105 LDA @LOCAL02
    case 0xC1DF37: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:106 CLC
    case 0xC1DF39: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:107 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1DF3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x0099F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:107 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1DF3A.
    case 0xC1DF3C: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:108 CLC
    case 0xC1DF3D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:109 ADC @VIRTUAL02
    case 0xC1DF3E: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:109 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1DF3C.
    case 0xC1DF3F: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:110 TAX
    case 0xC1DF40: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:111 LDA __BSS_START__,X
    case 0xC1DF41: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:112 AND #$00FF
    case 0xC1DF44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:112 AND #$00FF
    // Overlapping static entry reached from 0xC1DF44.
    case 0xC1DF46: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:113 BEQ @NOTSHOOT
    case 0xC1DF47: {
        Instruction step(cpu, 0xF0, 0x00006Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DF49: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC1DF49.
    case 0xC1DF4B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DF4C: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:115 CLC
    case 0xC1DF50: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:116 ADC #item::type
    case 0xC1DF51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:116 ADC #item::type
    // Overlapping static entry reached from 0xC1DF51.
    case 0xC1DF53: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:117 TAX
    case 0xC1DF54: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:118 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1DF55: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:119 AND #$00FF
    case 0xC1DF59: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:119 AND #$00FF
    // Overlapping static entry reached from 0xC1DF59.
    case 0xC1DF5B: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:120 AND #$0003
    case 0xC1DF5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:120 AND #$0003
    // Overlapping static entry reached from 0xC1DF5C.
    case 0xC1DF5E: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:121 CMP #1
    case 0xC1DF5F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:121 CMP #1
    // Overlapping static entry reached from 0xC1DF5F.
    case 0xC1DF61: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:122 BNE @NOTSHOOT
    case 0xC1DF62: {
        Instruction step(cpu, 0xD0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DF64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DF64.
    case 0xC1DF66: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DF67: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DF69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DF69.
    case 0xC1DF6B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DF6C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DF6E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DF70: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DF72: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DF74: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:125 LDY #.SIZEOF(battle_action) * 5 + battle_action::description_text_pointer
    case 0xC1DF76: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:125 LDY #.SIZEOF(battle_action) * 5 + battle_action::description_text_pointer
    // Overlapping static entry reached from 0xC1DF76.
    case 0xC1DF78: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:126 LDA [@VIRTUAL06],Y
    case 0xC1DF79: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:127 PHA
    case 0xC1DF7B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:128 INY
    case 0xC1DF7C: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:129 INY
    case 0xC1DF7D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:130 LDA [@VIRTUAL06],Y
    case 0xC1DF7E: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:131 STA @TMP+2
    case 0xC1DF80: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:132 PLA
    case 0xC1DF82: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:133 STA @TMP
    case 0xC1DF83: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:134 STA @LOCAL00
    case 0xC1DF85: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:135 LDA @TMP+2
    case 0xC1DF87: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:136 STA @LOCAL00+2
    case 0xC1DF89: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:137 JSL DISPLAY_TEXT
    case 0xC1DF8B: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DF8F: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DF91: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DF93: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DF95: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:139 LDY #.SIZEOF(battle_action) * 5 + battle_action::battle_function_pointer
    case 0xC1DF97: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000044u : 0x000044u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:139 LDY #.SIZEOF(battle_action) * 5 + battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1DF97.
    case 0xC1DF99: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:140 LDA [@VIRTUAL06],Y
    case 0xC1DF9A: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:141 PHA
    case 0xC1DF9C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:142 INY
    case 0xC1DF9D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:143 INY
    case 0xC1DF9E: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:144 LDA [@VIRTUAL06],Y
    case 0xC1DF9F: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:145 STA @VIRTUAL06+2
    case 0xC1DFA1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:146 PLA
    case 0xC1DFA3: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:147 STA @VIRTUAL06
    case 0xC1DFA4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:148 PHA
    case 0xC1DFA6: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DFA7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DFA9: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DFAC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DFAE: {
        Instruction step(cpu, 0x8D, 0x0000BEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:150 PLA
    case 0xC1DFB1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:151 JSL UNKNOWN_C09279
    case 0xC1DFB2: {
        Instruction step(cpu, 0x22, 0xC09279u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:152 BRA @RETURN
    case 0xC1DFB6: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DFB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DFB8.
    case 0xC1DFBA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DFBB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DFBD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DFBD.
    case 0xC1DFBF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DFC0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DFC2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DFC4: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DFC6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DFC8: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:156 LDY #.SIZEOF(battle_action) * 4 + battle_action::description_text_pointer
    case 0xC1DFCA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000034u : 0x000034u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:156 LDY #.SIZEOF(battle_action) * 4 + battle_action::description_text_pointer
    // Overlapping static entry reached from 0xC1DFCA.
    case 0xC1DFCC: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:157 LDA [@VIRTUAL06],Y
    case 0xC1DFCD: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:158 PHA
    case 0xC1DFCF: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:159 INY
    case 0xC1DFD0: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:160 INY
    case 0xC1DFD1: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:161 LDA [@VIRTUAL06],Y
    case 0xC1DFD2: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:162 STA @TMP+2
    case 0xC1DFD4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:163 PLA
    case 0xC1DFD6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:164 STA @TMP
    case 0xC1DFD7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:165 STA @LOCAL00
    case 0xC1DFD9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:166 LDA @TMP+2
    case 0xC1DFDB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:167 STA @LOCAL00+2
    case 0xC1DFDD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:168 JSL DISPLAY_TEXT
    case 0xC1DFDF: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DFE3: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DFE5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DFE7: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DFE9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:170 LDY #.SIZEOF(battle_action) * 4 + battle_action::battle_function_pointer
    case 0xC1DFEB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000038u : 0x000038u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:170 LDY #.SIZEOF(battle_action) * 4 + battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1DFEB.
    case 0xC1DFED: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:171 LDA [@VIRTUAL06],Y
    case 0xC1DFEE: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:172 PHA
    case 0xC1DFF0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:173 INY
    case 0xC1DFF1: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:174 INY
    case 0xC1DFF2: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:175 LDA [@VIRTUAL06],Y
    case 0xC1DFF3: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:176 STA @VIRTUAL06+2
    case 0xC1DFF5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:177 PLA
    case 0xC1DFF7: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:178 STA @VIRTUAL06
    case 0xC1DFF8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:179 PHA
    case 0xC1DFFA: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DFFB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DFFD: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1E000: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1E002: {
        Instruction step(cpu, 0x8D, 0x0000BEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:181 PLA
    case 0xC1E005: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:182 JSL UNKNOWN_C09279
    case 0xC1E006: {
        Instruction step(cpu, 0x22, 0xC09279u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:184 JSR CLEAR_BLINKING_PROMPT
    case 0xC1E00A: {
        Instruction step(cpu, 0x20, 0x00003Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/switch_weapon.asm:185 END_C_FUNCTION
    case 0xC1E00D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/switch_weapon.asm:185 END_C_FUNCTION
    case 0xC1E00E: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
