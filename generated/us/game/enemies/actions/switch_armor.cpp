// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/switch_armor.asm
bool resume_battle_actions_switch_armor(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/switch_armor.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1E00F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1E011: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1E012: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1E013: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1E013.
    case 0xC1E015: {
        Instruction step(cpu, 0xFF, 0x01A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1E016: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:12 LDA #1
    case 0xC1E017: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1E017.
    case 0xC1E019: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:13 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1E01A: {
        Instruction step(cpu, 0x20, 0x000036u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:14 LDX CURRENT_ATTACKER
    case 0xC1E01D: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:15 LDA a:battler::current_action_argument,X
    case 0xC1E020: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:16 AND #$00FF
    case 0xC1E023: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC1E023.
    case 0xC1E025: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:17 TAX
    case 0xC1E026: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:18 STX @LOCAL05
    case 0xC1E027: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:19 LDX CURRENT_ATTACKER
    case 0xC1E029: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:20 LDA a:battler::id,X
    case 0xC1E02C: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:21 LDX @LOCAL05
    case 0xC1E02F: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:22 JSL UNKNOWN_C3EE14
    case 0xC1E031: {
        Instruction step(cpu, 0x22, 0xC3EE14u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:23 CMP #0
    case 0xC1E035: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:23 CMP #0
    // Overlapping static entry reached from 0xC1E035.
    case 0xC1E037: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/switch_armor.asm:24 BEQL @UNKNOWN1
    case 0xC1E038: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/switch_armor.asm:24 BEQL @UNKNOWN1
    case 0xC1E03A: {
        Instruction step(cpu, 0x4C, 0x00E18Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:25 LDX CURRENT_ATTACKER
    case 0xC1E03D: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:26 LDA a:battler::row,X
    case 0xC1E040: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:27 AND #$00FF
    case 0xC1E043: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1E043.
    case 0xC1E045: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:28 LDY #.SIZEOF(char_struct)
    case 0xC1E046: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:28 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1E046.
    case 0xC1E048: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:29 JSL MULT168
    case 0xC1E049: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:30 CLC
    case 0xC1E04D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:31 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1E04E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:31 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1E04E.
    case 0xC1E050: {
        Instruction step(cpu, 0x99, 0x0084A8u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:32 TAY
    case 0xC1E051: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:33 STY @LOCAL04
    case 0xC1E052: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:33 STY @LOCAL04
    // Overlapping static entry reached from 0xC1E050.
    case 0xC1E053: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:34 LDX CURRENT_ATTACKER
    case 0xC1E054: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:35 LDA a:battler::base_defense,X
    case 0xC1E057: {
        Instruction step(cpu, 0xBD, 0x000033u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:36 AND #$00FF
    case 0xC1E05A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC1E05A.
    case 0xC1E05C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:37 STA @VIRTUAL04
    case 0xC1E05D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:38 LDX CURRENT_ATTACKER
    case 0xC1E05F: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:39 LDA a:battler::defense,X
    case 0xC1E062: {
        Instruction step(cpu, 0xBD, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:40 SEC
    case 0xC1E065: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:41 SBC @VIRTUAL04
    case 0xC1E066: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:42 STA @VIRTUAL02
    case 0xC1E068: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:43 STA @LOCAL03
    case 0xC1E06A: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:44 LDX CURRENT_ATTACKER
    case 0xC1E06C: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:45 LDA a:battler::base_speed,X
    case 0xC1E06F: {
        Instruction step(cpu, 0xBD, 0x000034u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:46 AND #$00FF
    case 0xC1E072: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC1E072.
    case 0xC1E074: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:47 STA @VIRTUAL02
    case 0xC1E075: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:48 LDX CURRENT_ATTACKER
    case 0xC1E077: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:49 LDA a:battler::speed,X
    case 0xC1E07A: {
        Instruction step(cpu, 0xBD, 0x00002Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:50 SEC
    case 0xC1E07D: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:51 SBC @VIRTUAL02
    case 0xC1E07E: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:52 STA @VIRTUAL04
    case 0xC1E080: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:53 LDX CURRENT_ATTACKER
    case 0xC1E082: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:54 LDA a:battler::base_luck,X
    case 0xC1E085: {
        Instruction step(cpu, 0xBD, 0x000036u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:55 AND #$00FF
    case 0xC1E088: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC1E088.
    case 0xC1E08A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:56 STA @VIRTUAL02
    case 0xC1E08B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:57 LDX CURRENT_ATTACKER
    case 0xC1E08D: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:58 LDA a:battler::luck,X
    case 0xC1E090: {
        Instruction step(cpu, 0xBD, 0x00002Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:59 SEC
    case 0xC1E093: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:60 SBC @VIRTUAL02
    case 0xC1E094: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:61 STA @LOCAL02
    case 0xC1E096: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:62 LDX CURRENT_ATTACKER
    case 0xC1E098: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:63 LDA a:battler::action_item_slot,X
    case 0xC1E09B: {
        Instruction step(cpu, 0xBD, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:64 AND #$00FF
    case 0xC1E09E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC1E09E.
    case 0xC1E0A0: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:65 TAX
    case 0xC1E0A1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:66 STX @LOCAL01
    case 0xC1E0A2: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:67 LDX CURRENT_ATTACKER
    case 0xC1E0A4: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:68 LDA a:battler::id,X
    case 0xC1E0A7: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:69 LDX @LOCAL01
    case 0xC1E0AA: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:70 JSR EQUIP_ITEM
    case 0xC1E0AC: {
        Instruction step(cpu, 0x20, 0x009066u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1E0AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x007E11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1E0AF.
    case 0xC1E0B1: {
        Instruction step(cpu, 0x7E, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1E0B2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1E0B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1E0B4.
    case 0xC1E0B6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1E0B7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1E0B9: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:72 LDY @LOCAL04
    case 0xC1E0BD: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E0BF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:74 LDA a:char_struct::defense,Y
    case 0xC1E0C1: {
        Instruction step(cpu, 0xB9, 0x000016u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:75 LDX CURRENT_ATTACKER
    case 0xC1E0C4: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:76 STA a:battler::base_defense,X
    case 0xC1E0C7: {
        Instruction step(cpu, 0x9D, 0x000033u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC1E0CA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:78 LDA @LOCAL03
    case 0xC1E0CC: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:79 STA @VIRTUAL02
    case 0xC1E0CE: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:80 LDX CURRENT_ATTACKER
    case 0xC1E0D0: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:81 LDA a:battler::base_defense,X
    case 0xC1E0D3: {
        Instruction step(cpu, 0xBD, 0x000033u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:82 AND #$00FF
    case 0xC1E0D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC1E0D6.
    case 0xC1E0D8: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:83 CLC
    case 0xC1E0D9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:84 ADC @VIRTUAL02
    case 0xC1E0DA: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:85 LDX CURRENT_ATTACKER
    case 0xC1E0DC: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:86 STA a:battler::defense,X
    case 0xC1E0DF: {
        Instruction step(cpu, 0x9D, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E0E2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:88 LDA a:char_struct::speed,Y
    case 0xC1E0E4: {
        Instruction step(cpu, 0xB9, 0x000017u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:89 LDX CURRENT_ATTACKER
    case 0xC1E0E7: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:90 STA a:battler::base_speed,X
    case 0xC1E0EA: {
        Instruction step(cpu, 0x9D, 0x000034u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:91 LDX CURRENT_ATTACKER
    case 0xC1E0ED: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC1E0F0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:93 LDA a:battler::base_speed,X
    case 0xC1E0F2: {
        Instruction step(cpu, 0xBD, 0x000034u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:94 AND #$00FF
    case 0xC1E0F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC1E0F5.
    case 0xC1E0F7: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:95 CLC
    case 0xC1E0F8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:96 ADC @VIRTUAL04
    case 0xC1E0F9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:97 LDX CURRENT_ATTACKER
    case 0xC1E0FB: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:98 STA a:battler::speed,X
    case 0xC1E0FE: {
        Instruction step(cpu, 0x9D, 0x00002Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:99 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E101: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:100 LDA a:char_struct::luck,Y
    case 0xC1E103: {
        Instruction step(cpu, 0xB9, 0x000019u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:101 LDX CURRENT_ATTACKER
    case 0xC1E106: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:102 STA a:battler::base_luck,X
    case 0xC1E109: {
        Instruction step(cpu, 0x9D, 0x000036u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:103 LDX CURRENT_ATTACKER
    case 0xC1E10C: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC1E10F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:105 LDA a:battler::base_luck,X
    case 0xC1E111: {
        Instruction step(cpu, 0xBD, 0x000036u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:106 AND #$00FF
    case 0xC1E114: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:106 AND #$00FF
    // Overlapping static entry reached from 0xC1E114.
    case 0xC1E116: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:107 CLC
    case 0xC1E117: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:108 ADC @LOCAL02
    case 0xC1E118: {
        Instruction step(cpu, 0x65, 0x000014u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:109 LDX CURRENT_ATTACKER
    case 0xC1E11A: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:110 STA a:battler::luck,X
    case 0xC1E11D: {
        Instruction step(cpu, 0x9D, 0x00002Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:111 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E120: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:112 LDA a:char_struct::fire_resist,Y
    case 0xC1E122: {
        Instruction step(cpu, 0xB9, 0x000052u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:113 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC1E125: {
        Instruction step(cpu, 0x22, 0xC2B608u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:114 LDX CURRENT_ATTACKER
    case 0xC1E129: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:115 STA a:battler::fire_resist,X
    case 0xC1E12C: {
        Instruction step(cpu, 0x9D, 0x00003Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:116 LDY @LOCAL04
    case 0xC1E12F: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:117 LDA a:char_struct::freeze_resist,Y
    case 0xC1E131: {
        Instruction step(cpu, 0xB9, 0x000053u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:118 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC1E134: {
        Instruction step(cpu, 0x22, 0xC2B608u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:119 LDX CURRENT_ATTACKER
    case 0xC1E138: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:120 STA a:battler::freeze_resist,X
    case 0xC1E13B: {
        Instruction step(cpu, 0x9D, 0x000038u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:121 LDY @LOCAL04
    case 0xC1E13E: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:122 LDA a:char_struct::flash_resist,Y
    case 0xC1E140: {
        Instruction step(cpu, 0xB9, 0x000054u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:123 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1E143: {
        Instruction step(cpu, 0x22, 0xC2B639u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:124 LDX CURRENT_ATTACKER
    case 0xC1E147: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:125 STA a:battler::flash_resist,X
    case 0xC1E14A: {
        Instruction step(cpu, 0x9D, 0x000039u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:126 LDY @LOCAL04
    case 0xC1E14D: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:127 LDA a:char_struct::paralysis_resist,Y
    case 0xC1E14F: {
        Instruction step(cpu, 0xB9, 0x000055u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:128 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1E152: {
        Instruction step(cpu, 0x22, 0xC2B639u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:129 LDX CURRENT_ATTACKER
    case 0xC1E156: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:130 STA a:battler::paralysis_resist,X
    case 0xC1E159: {
        Instruction step(cpu, 0x9D, 0x000037u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:131 LDY @LOCAL04
    case 0xC1E15C: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC1E15E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:133 TYA
    case 0xC1E160: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:134 CLC
    case 0xC1E161: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:135 ADC #char_struct::hypnosis_brainshock_resist
    case 0xC1E162: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000056u : 0x000056u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:135 ADC #char_struct::hypnosis_brainshock_resist
    // Overlapping static entry reached from 0xC1E162.
    case 0xC1E164: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:136 TAX
    case 0xC1E165: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:137 STX @LOCAL02
    case 0xC1E166: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:138 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E168: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:139 LDA __BSS_START__,X
    case 0xC1E16A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:140 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1E16D: {
        Instruction step(cpu, 0x22, 0xC2B639u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:141 LDX CURRENT_ATTACKER
    case 0xC1E171: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:142 STA a:battler::hypnosis_resist,X
    case 0xC1E174: {
        Instruction step(cpu, 0x9D, 0x00003Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:143 LDX @LOCAL02
    case 0xC1E177: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:144 LDA __BSS_START__,X
    case 0xC1E179: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:145 STA @VIRTUAL00
    case 0xC1E17C: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:146 LDA #3
    case 0xC1E17E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x003803u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:147 SEC
    case 0xC1E180: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:148 SBC @VIRTUAL00
    case 0xC1E181: {
        Instruction step(cpu, 0xE5, 0x000000u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:149 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1E183: {
        Instruction step(cpu, 0x22, 0xC2B639u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:150 LDX CURRENT_ATTACKER
    case 0xC1E187: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:151 STA a:battler::brainshock_resist,X
    case 0xC1E18A: {
        Instruction step(cpu, 0x9D, 0x00003Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:152 BRA @UNKNOWN2
    case 0xC1E18D: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1E18F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000033u : 0x007E33u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1E18F.
    case 0xC1E191: {
        Instruction step(cpu, 0x7E, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1E192: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1E194: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1E194.
    case 0xC1E196: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1E197: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1E199: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:157 JSR CLEAR_BLINKING_PROMPT
    case 0xC1E19D: {
        Instruction step(cpu, 0x20, 0x00003Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/switch_armor.asm:158 END_C_FUNCTION
    case 0xC1E1A0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/switch_armor.asm:158 END_C_FUNCTION
    case 0xC1E1A1: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
