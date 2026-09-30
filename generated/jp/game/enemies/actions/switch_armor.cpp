// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/switch_armor.asm
bool resume_battle_actions_switch_armor(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/switch_armor.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DDD3: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1DDD5: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1DDD6: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1DDD7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DDD7.
    case 0xC1DDD9: {
        Instruction step(cpu, 0xFF, 0x01A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/switch_armor.asm:11 END_STACK_VARS
    case 0xC1DDDA: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:12 LDA #1
    case 0xC1DDDB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1DDDB.
    case 0xC1DDDD: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:13 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1DDDE: {
        Instruction step(cpu, 0x20, 0x000032u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:14 LDX CURRENT_ATTACKER
    case 0xC1DDE1: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:15 LDA a:battler::current_action_argument,X
    case 0xC1DDE4: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:16 AND #$00FF
    case 0xC1DDE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC1DDE7.
    case 0xC1DDE9: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:17 TAX
    case 0xC1DDEA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:18 STX @LOCAL05
    case 0xC1DDEB: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:19 LDX CURRENT_ATTACKER
    case 0xC1DDED: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:20 LDA a:battler::id,X
    case 0xC1DDF0: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:21 LDX @LOCAL05
    case 0xC1DDF3: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:22 JSL UNKNOWN_C3EE14
    case 0xC1DDF5: {
        Instruction step(cpu, 0x22, 0xC3E9DAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:23 CMP #0
    case 0xC1DDF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:23 CMP #0
    // Overlapping static entry reached from 0xC1DDF9.
    case 0xC1DDFB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/switch_armor.asm:24 BEQL @UNKNOWN1
    case 0xC1DDFC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/switch_armor.asm:24 BEQL @UNKNOWN1
    case 0xC1DDFE: {
        Instruction step(cpu, 0x4C, 0x00DF53u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:25 LDX CURRENT_ATTACKER
    case 0xC1DE01: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:26 LDA a:battler::row,X
    case 0xC1DE04: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:27 AND #$00FF
    case 0xC1DE07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1DE07.
    case 0xC1DE09: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:28 LDY #.SIZEOF(char_struct)
    case 0xC1DE0A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:28 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DE0A.
    case 0xC1DE0C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:29 JSL MULT168
    case 0xC1DE0D: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:30 CLC
    case 0xC1DE11: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:31 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1DE12: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:31 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1DE12.
    case 0xC1DE14: {
        Instruction step(cpu, 0x9C, 0x0084A8u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:32 TAY
    case 0xC1DE15: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:33 STY @LOCAL04
    case 0xC1DE16: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:33 STY @LOCAL04
    // Overlapping static entry reached from 0xC1DE14.
    case 0xC1DE17: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:34 LDX CURRENT_ATTACKER
    case 0xC1DE18: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:35 LDA a:battler::base_defense,X
    case 0xC1DE1B: {
        Instruction step(cpu, 0xBD, 0x000033u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:36 AND #$00FF
    case 0xC1DE1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC1DE1E.
    case 0xC1DE20: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:37 STA @VIRTUAL04
    case 0xC1DE21: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:38 LDX CURRENT_ATTACKER
    case 0xC1DE23: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:39 LDA a:battler::defense,X
    case 0xC1DE26: {
        Instruction step(cpu, 0xBD, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:40 SEC
    case 0xC1DE29: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:41 SBC @VIRTUAL04
    case 0xC1DE2A: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:42 STA @VIRTUAL02
    case 0xC1DE2C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:43 STA @LOCAL03
    case 0xC1DE2E: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:44 LDX CURRENT_ATTACKER
    case 0xC1DE30: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:45 LDA a:battler::base_speed,X
    case 0xC1DE33: {
        Instruction step(cpu, 0xBD, 0x000034u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:46 AND #$00FF
    case 0xC1DE36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC1DE36.
    case 0xC1DE38: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:47 STA @VIRTUAL02
    case 0xC1DE39: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:48 LDX CURRENT_ATTACKER
    case 0xC1DE3B: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:49 LDA a:battler::speed,X
    case 0xC1DE3E: {
        Instruction step(cpu, 0xBD, 0x00002Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:50 SEC
    case 0xC1DE41: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:51 SBC @VIRTUAL02
    case 0xC1DE42: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:52 STA @VIRTUAL04
    case 0xC1DE44: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:53 LDX CURRENT_ATTACKER
    case 0xC1DE46: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:54 LDA a:battler::base_luck,X
    case 0xC1DE49: {
        Instruction step(cpu, 0xBD, 0x000036u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:55 AND #$00FF
    case 0xC1DE4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC1DE4C.
    case 0xC1DE4E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:56 STA @VIRTUAL02
    case 0xC1DE4F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:57 LDX CURRENT_ATTACKER
    case 0xC1DE51: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:58 LDA a:battler::luck,X
    case 0xC1DE54: {
        Instruction step(cpu, 0xBD, 0x00002Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:59 SEC
    case 0xC1DE57: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:60 SBC @VIRTUAL02
    case 0xC1DE58: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:61 STA @LOCAL02
    case 0xC1DE5A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:62 LDX CURRENT_ATTACKER
    case 0xC1DE5C: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:63 LDA a:battler::action_item_slot,X
    case 0xC1DE5F: {
        Instruction step(cpu, 0xBD, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:64 AND #$00FF
    case 0xC1DE62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC1DE62.
    case 0xC1DE64: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:65 TAX
    case 0xC1DE65: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:66 STX @LOCAL01
    case 0xC1DE66: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:67 LDX CURRENT_ATTACKER
    case 0xC1DE68: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:68 LDA a:battler::id,X
    case 0xC1DE6B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:69 LDX @LOCAL01
    case 0xC1DE6E: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:70 JSR EQUIP_ITEM
    case 0xC1DE70: {
        Instruction step(cpu, 0x20, 0x00911Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DE73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x00287Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1DE73.
    case 0xC1DE75: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DE76: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DE78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1DE78.
    case 0xC1DE7A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DE7B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_armor.asm:71 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DE7D: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:72 LDY @LOCAL04
    case 0xC1DE81: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DE83: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:74 LDA a:char_struct::defense,Y
    case 0xC1DE85: {
        Instruction step(cpu, 0xB9, 0x000015u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:75 LDX CURRENT_ATTACKER
    case 0xC1DE88: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:76 STA a:battler::base_defense,X
    case 0xC1DE8B: {
        Instruction step(cpu, 0x9D, 0x000033u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC1DE8E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:78 LDA @LOCAL03
    case 0xC1DE90: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:79 STA @VIRTUAL02
    case 0xC1DE92: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:80 LDX CURRENT_ATTACKER
    case 0xC1DE94: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:81 LDA a:battler::base_defense,X
    case 0xC1DE97: {
        Instruction step(cpu, 0xBD, 0x000033u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:82 AND #$00FF
    case 0xC1DE9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC1DE9A.
    case 0xC1DE9C: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:83 CLC
    case 0xC1DE9D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:84 ADC @VIRTUAL02
    case 0xC1DE9E: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:85 LDX CURRENT_ATTACKER
    case 0xC1DEA0: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:86 STA a:battler::defense,X
    case 0xC1DEA3: {
        Instruction step(cpu, 0x9D, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DEA6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:88 LDA a:char_struct::speed,Y
    case 0xC1DEA8: {
        Instruction step(cpu, 0xB9, 0x000016u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:89 LDX CURRENT_ATTACKER
    case 0xC1DEAB: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:90 STA a:battler::base_speed,X
    case 0xC1DEAE: {
        Instruction step(cpu, 0x9D, 0x000034u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:91 LDX CURRENT_ATTACKER
    case 0xC1DEB1: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC1DEB4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:93 LDA a:battler::base_speed,X
    case 0xC1DEB6: {
        Instruction step(cpu, 0xBD, 0x000034u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:94 AND #$00FF
    case 0xC1DEB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC1DEB9.
    case 0xC1DEBB: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:95 CLC
    case 0xC1DEBC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:96 ADC @VIRTUAL04
    case 0xC1DEBD: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:97 LDX CURRENT_ATTACKER
    case 0xC1DEBF: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:98 STA a:battler::speed,X
    case 0xC1DEC2: {
        Instruction step(cpu, 0x9D, 0x00002Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:99 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DEC5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:100 LDA a:char_struct::luck,Y
    case 0xC1DEC7: {
        Instruction step(cpu, 0xB9, 0x000018u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:101 LDX CURRENT_ATTACKER
    case 0xC1DECA: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:102 STA a:battler::base_luck,X
    case 0xC1DECD: {
        Instruction step(cpu, 0x9D, 0x000036u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:103 LDX CURRENT_ATTACKER
    case 0xC1DED0: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC1DED3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:105 LDA a:battler::base_luck,X
    case 0xC1DED5: {
        Instruction step(cpu, 0xBD, 0x000036u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:106 AND #$00FF
    case 0xC1DED8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:106 AND #$00FF
    // Overlapping static entry reached from 0xC1DED8.
    case 0xC1DEDA: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:107 CLC
    case 0xC1DEDB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:108 ADC @LOCAL02
    case 0xC1DEDC: {
        Instruction step(cpu, 0x65, 0x000014u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:109 LDX CURRENT_ATTACKER
    case 0xC1DEDE: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:110 STA a:battler::luck,X
    case 0xC1DEE1: {
        Instruction step(cpu, 0x9D, 0x00002Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:111 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DEE4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:112 LDA a:char_struct::fire_resist,Y
    case 0xC1DEE6: {
        Instruction step(cpu, 0xB9, 0x000051u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:113 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC1DEE9: {
        Instruction step(cpu, 0x22, 0xC2B5ADu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:114 LDX CURRENT_ATTACKER
    case 0xC1DEED: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:115 STA a:battler::fire_resist,X
    case 0xC1DEF0: {
        Instruction step(cpu, 0x9D, 0x00003Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:116 LDY @LOCAL04
    case 0xC1DEF3: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:117 LDA a:char_struct::freeze_resist,Y
    case 0xC1DEF5: {
        Instruction step(cpu, 0xB9, 0x000052u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:118 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC1DEF8: {
        Instruction step(cpu, 0x22, 0xC2B5ADu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:119 LDX CURRENT_ATTACKER
    case 0xC1DEFC: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:120 STA a:battler::freeze_resist,X
    case 0xC1DEFF: {
        Instruction step(cpu, 0x9D, 0x000038u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:121 LDY @LOCAL04
    case 0xC1DF02: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:122 LDA a:char_struct::flash_resist,Y
    case 0xC1DF04: {
        Instruction step(cpu, 0xB9, 0x000053u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:123 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1DF07: {
        Instruction step(cpu, 0x22, 0xC2B5DEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:124 LDX CURRENT_ATTACKER
    case 0xC1DF0B: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:125 STA a:battler::flash_resist,X
    case 0xC1DF0E: {
        Instruction step(cpu, 0x9D, 0x000039u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:126 LDY @LOCAL04
    case 0xC1DF11: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:127 LDA a:char_struct::paralysis_resist,Y
    case 0xC1DF13: {
        Instruction step(cpu, 0xB9, 0x000054u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:128 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1DF16: {
        Instruction step(cpu, 0x22, 0xC2B5DEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:129 LDX CURRENT_ATTACKER
    case 0xC1DF1A: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:130 STA a:battler::paralysis_resist,X
    case 0xC1DF1D: {
        Instruction step(cpu, 0x9D, 0x000037u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:131 LDY @LOCAL04
    case 0xC1DF20: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC1DF22: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:133 TYA
    case 0xC1DF24: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:134 CLC
    case 0xC1DF25: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:135 ADC #char_struct::hypnosis_brainshock_resist
    case 0xC1DF26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000055u : 0x000055u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:135 ADC #char_struct::hypnosis_brainshock_resist
    // Overlapping static entry reached from 0xC1DF26.
    case 0xC1DF28: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:136 TAX
    case 0xC1DF29: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:137 STX @LOCAL02
    case 0xC1DF2A: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:138 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DF2C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:139 LDA __BSS_START__,X
    case 0xC1DF2E: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:140 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1DF31: {
        Instruction step(cpu, 0x22, 0xC2B5DEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:141 LDX CURRENT_ATTACKER
    case 0xC1DF35: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:142 STA a:battler::hypnosis_resist,X
    case 0xC1DF38: {
        Instruction step(cpu, 0x9D, 0x00003Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:143 LDX @LOCAL02
    case 0xC1DF3B: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:144 LDA __BSS_START__,X
    case 0xC1DF3D: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:145 STA @VIRTUAL00
    case 0xC1DF40: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:146 LDA #3
    case 0xC1DF42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x003803u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:147 SEC
    case 0xC1DF44: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:148 SBC @VIRTUAL00
    case 0xC1DF45: {
        Instruction step(cpu, 0xE5, 0x000000u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:149 JSL CALC_PSI_RES_MODIFIERS
    case 0xC1DF47: {
        Instruction step(cpu, 0x22, 0xC2B5DEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:150 LDX CURRENT_ATTACKER
    case 0xC1DF4B: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:151 STA a:battler::brainshock_resist,X
    case 0xC1DF4E: {
        Instruction step(cpu, 0x9D, 0x00003Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:152 BRA @UNKNOWN2
    case 0xC1DF51: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Au : 0x00289Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1DF53.
    case 0xC1DF55: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF56: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF58: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1DF58.
    case 0xC1DF5A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF5B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_armor.asm:155 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DF5D: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_armor.asm:157 JSR CLEAR_BLINKING_PROMPT
    case 0xC1DF61: {
        Instruction step(cpu, 0x20, 0x000038u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/switch_armor.asm:158 END_C_FUNCTION
    case 0xC1DF64: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/switch_armor.asm:158 END_C_FUNCTION
    case 0xC1DF65: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
