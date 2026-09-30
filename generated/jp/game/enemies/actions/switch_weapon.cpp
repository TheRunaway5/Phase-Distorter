// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/switch_weapon.asm
bool resume_battle_actions_switch_weapon(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/switch_weapon.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DC06: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DC08: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DC09: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DC0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x00FFE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DC0A.
    case 0xC1DC0C: {
        Instruction step(cpu, 0xFF, 0x72AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/switch_weapon.asm:11 END_STACK_VARS
    case 0xC1DC0D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:17 LDX CURRENT_ATTACKER
    case 0xC1DC0E: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:17 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC1DC0C.
    case 0xC1DC10: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:18 LDA a:battler::id,X
    case 0xC1DC11: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:19 STA @LOCAL05
    case 0xC1DC14: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:20 LDA #1
    case 0xC1DC16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:20 LDA #1
    // Overlapping static entry reached from 0xC1DC16.
    case 0xC1DC18: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:21 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1DC19: {
        Instruction step(cpu, 0x20, 0x000032u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:22 LDX CURRENT_ATTACKER
    case 0xC1DC1C: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:23 LDA a:battler::current_action_argument,X
    case 0xC1DC1F: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:24 AND #$00FF
    case 0xC1DC22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC1DC22.
    case 0xC1DC24: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:25 TAX
    case 0xC1DC25: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:26 LDA @LOCAL05
    case 0xC1DC26: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:27 JSL UNKNOWN_C3EE14
    case 0xC1DC28: {
        Instruction step(cpu, 0x22, 0xC3E9DAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:28 CMP #0
    case 0xC1DC2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:28 CMP #0
    // Overlapping static entry reached from 0xC1DC2C.
    case 0xC1DC2E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/switch_weapon.asm:29 BEQL @DISPLAYTEXT
    case 0xC1DC2F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/switch_weapon.asm:29 BEQL @DISPLAYTEXT
    case 0xC1DC31: {
        Instruction step(cpu, 0x4C, 0x00DCD6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:30 LDA @LOCAL05
    case 0xC1DC34: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:31 DEC
    case 0xC1DC36: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:32 LDY #.SIZEOF(char_struct)
    case 0xC1DC37: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DC37.
    case 0xC1DC39: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:33 JSL MULT168
    case 0xC1DC3A: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:34 CLC
    case 0xC1DC3E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1DC3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1DC3F.
    case 0xC1DC41: {
        Instruction step(cpu, 0x9C, 0x0084A8u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:36 TAY
    case 0xC1DC42: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:37 STY @LOCAL04
    case 0xC1DC43: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:37 STY @LOCAL04
    // Overlapping static entry reached from 0xC1DC41.
    case 0xC1DC44: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:38 LDX CURRENT_ATTACKER
    case 0xC1DC45: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:39 LDA a:battler::base_offense,X
    case 0xC1DC48: {
        Instruction step(cpu, 0xBD, 0x000032u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:40 AND #$00FF
    case 0xC1DC4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC1DC4B.
    case 0xC1DC4D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:41 STA @VIRTUAL04
    case 0xC1DC4E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:42 LDX CURRENT_ATTACKER
    case 0xC1DC50: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:43 LDA a:battler::offense,X
    case 0xC1DC53: {
        Instruction step(cpu, 0xBD, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:44 SEC
    case 0xC1DC56: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:45 SBC @VIRTUAL04
    case 0xC1DC57: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:46 STA @VIRTUAL02
    case 0xC1DC59: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:47 STA @LOCAL03
    case 0xC1DC5B: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:48 LDX CURRENT_ATTACKER
    case 0xC1DC5D: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:49 LDA a:battler::base_guts,X
    case 0xC1DC60: {
        Instruction step(cpu, 0xBD, 0x000035u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:50 AND #$00FF
    case 0xC1DC63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC1DC63.
    case 0xC1DC65: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:51 STA @VIRTUAL02
    case 0xC1DC66: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:52 LDX CURRENT_ATTACKER
    case 0xC1DC68: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:53 LDA a:battler::guts,X
    case 0xC1DC6B: {
        Instruction step(cpu, 0xBD, 0x00002Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:54 SEC
    case 0xC1DC6E: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:55 SBC @VIRTUAL02
    case 0xC1DC6F: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:56 STA @VIRTUAL04
    case 0xC1DC71: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:57 LDX CURRENT_ATTACKER
    case 0xC1DC73: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:58 LDA a:battler::action_item_slot,X
    case 0xC1DC76: {
        Instruction step(cpu, 0xBD, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:59 AND #$00FF
    case 0xC1DC79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC1DC79.
    case 0xC1DC7B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:60 TAX
    case 0xC1DC7C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:61 LDA @LOCAL05
    case 0xC1DC7D: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:62 JSR EQUIP_ITEM
    case 0xC1DC7F: {
        Instruction step(cpu, 0x20, 0x00911Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:63 LDY @LOCAL04
    case 0xC1DC82: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DC84: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:65 LDA a:char_struct::offense,Y
    case 0xC1DC86: {
        Instruction step(cpu, 0xB9, 0x000014u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:66 LDX CURRENT_ATTACKER
    case 0xC1DC89: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:67 STA a:battler::base_offense,X
    case 0xC1DC8C: {
        Instruction step(cpu, 0x9D, 0x000032u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC1DC8F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:69 LDA @LOCAL03
    case 0xC1DC91: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:70 STA @VIRTUAL02
    case 0xC1DC93: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:71 LDX CURRENT_ATTACKER
    case 0xC1DC95: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:72 LDA a:battler::base_offense,X
    case 0xC1DC98: {
        Instruction step(cpu, 0xBD, 0x000032u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:73 AND #$00FF
    case 0xC1DC9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC1DC9B.
    case 0xC1DC9D: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:74 CLC
    case 0xC1DC9E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:75 ADC @VIRTUAL02
    case 0xC1DC9F: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:76 LDX CURRENT_ATTACKER
    case 0xC1DCA1: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:77 STA a:battler::offense,X
    case 0xC1DCA4: {
        Instruction step(cpu, 0x9D, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DCA7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:79 LDA a:char_struct::guts,Y
    case 0xC1DCA9: {
        Instruction step(cpu, 0xB9, 0x000017u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:80 LDX CURRENT_ATTACKER
    case 0xC1DCAC: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:81 STA a:battler::base_guts,X
    case 0xC1DCAF: {
        Instruction step(cpu, 0x9D, 0x000035u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:82 LDX CURRENT_ATTACKER
    case 0xC1DCB2: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC1DCB5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:84 LDA a:battler::base_guts,X
    case 0xC1DCB7: {
        Instruction step(cpu, 0xBD, 0x000035u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:85 AND #$00FF
    case 0xC1DCBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC1DCBA.
    case 0xC1DCBC: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:86 CLC
    case 0xC1DCBD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:87 ADC @VIRTUAL04
    case 0xC1DCBE: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:88 LDX CURRENT_ATTACKER
    case 0xC1DCC0: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:89 STA a:battler::guts,X
    case 0xC1DCC3: {
        Instruction step(cpu, 0x9D, 0x00002Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DCC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x00287Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1DCC6.
    case 0xC1DCC8: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DCC9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DCCB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    // Overlapping static entry reached from 0xC1DCCB.
    case 0xC1DCCD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DCCE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_weapon.asm:90 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_OK
    case 0xC1DCD0: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:91 BRA @SKIPTEXT
    case 0xC1DCD4: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DCD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Au : 0x00289Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1DCD6.
    case 0xC1DCD8: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DCD9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DCDB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    // Overlapping static entry reached from 0xC1DCDB.
    case 0xC1DCDD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DCDE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/battle/actions/switch_weapon.asm:93 DISPLAY_TEXT_PTR MSG_BTL_EQUIP_NG_WEAPON
    case 0xC1DCE0: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:95 LDA @LOCAL05
    case 0xC1DCE4: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:96 DEC
    case 0xC1DCE6: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:97 LDY #.SIZEOF(char_struct)
    case 0xC1DCE7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:97 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DCE7.
    case 0xC1DCE9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:98 JSL MULT168
    case 0xC1DCEA: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:99 STA @LOCAL02
    case 0xC1DCEE: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:100 TAX
    case 0xC1DCF0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:101 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC1DCF1: {
        Instruction step(cpu, 0xBD, 0x009CAFu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:102 AND #$00FF
    case 0xC1DCF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC1DCF4.
    case 0xC1DCF6: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:103 DEC
    case 0xC1DCF7: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:104 STA @VIRTUAL02
    case 0xC1DCF8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:105 LDA @LOCAL02
    case 0xC1DCFA: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:106 CLC
    case 0xC1DCFC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:107 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1DCFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:107 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1DCFD.
    case 0xC1DCFF: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:108 CLC
    case 0xC1DD00: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:109 ADC @VIRTUAL02
    case 0xC1DD01: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:109 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1DCFF.
    case 0xC1DD02: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:110 TAX
    case 0xC1DD03: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:111 LDA __BSS_START__,X
    case 0xC1DD04: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:112 AND #$00FF
    case 0xC1DD07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:112 AND #$00FF
    // Overlapping static entry reached from 0xC1DD07.
    case 0xC1DD09: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:113 BEQ @NOTSHOOT
    case 0xC1DD0A: {
        Instruction step(cpu, 0xF0, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DD0C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DD0E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DD0F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DD11: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DD12: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/actions/switch_weapon.asm:114 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1DD13: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:115 CLC
    case 0xC1DD14: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:116 ADC #item::type
    case 0xC1DD15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:116 ADC #item::type
    // Overlapping static entry reached from 0xC1DD15.
    case 0xC1DD17: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:117 TAX
    case 0xC1DD18: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:118 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1DD19: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:119 AND #$00FF
    case 0xC1DD1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:119 AND #$00FF
    // Overlapping static entry reached from 0xC1DD1D.
    case 0xC1DD1F: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:120 AND #$0003
    case 0xC1DD20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:120 AND #$0003
    // Overlapping static entry reached from 0xC1DD20.
    case 0xC1DD22: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:121 CMP #1
    case 0xC1DD23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:121 CMP #1
    // Overlapping static entry reached from 0xC1DD23.
    case 0xC1DD25: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:122 BNE @NOTSHOOT
    case 0xC1DD26: {
        Instruction step(cpu, 0xD0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD28: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DD28.
    case 0xC1DD2A: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD2B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD2D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DD2D.
    case 0xC1DD2F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:123 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD30: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD32: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD34: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD36: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:124 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD38: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:125 LDY #.SIZEOF(battle_action) * 5 + battle_action::description_text_pointer
    case 0xC1DD3A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:125 LDY #.SIZEOF(battle_action) * 5 + battle_action::description_text_pointer
    // Overlapping static entry reached from 0xC1DD3A.
    case 0xC1DD3C: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:126 LDA [@VIRTUAL06],Y
    case 0xC1DD3D: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:127 PHA
    case 0xC1DD3F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:128 INY
    case 0xC1DD40: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:129 INY
    case 0xC1DD41: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:130 LDA [@VIRTUAL06],Y
    case 0xC1DD42: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:131 STA @TMP+2
    case 0xC1DD44: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:132 PLA
    case 0xC1DD46: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:133 STA @TMP
    case 0xC1DD47: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:134 STA @LOCAL00
    case 0xC1DD49: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:135 LDA @TMP+2
    case 0xC1DD4B: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:136 STA @LOCAL00+2
    case 0xC1DD4D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:137 JSL DISPLAY_TEXT
    case 0xC1DD4F: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DD53: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DD55: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DD57: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:138 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DD59: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:139 LDY #.SIZEOF(battle_action) * 5 + battle_action::battle_function_pointer
    case 0xC1DD5B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000044u : 0x000044u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:139 LDY #.SIZEOF(battle_action) * 5 + battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1DD5B.
    case 0xC1DD5D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:140 LDA [@VIRTUAL06],Y
    case 0xC1DD5E: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:141 PHA
    case 0xC1DD60: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:142 INY
    case 0xC1DD61: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:143 INY
    case 0xC1DD62: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:144 LDA [@VIRTUAL06],Y
    case 0xC1DD63: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:145 STA @VIRTUAL06+2
    case 0xC1DD65: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:146 PLA
    case 0xC1DD67: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:147 STA @VIRTUAL06
    case 0xC1DD68: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:148 PHA
    case 0xC1DD6A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DD6B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DD6D: {
        Instruction step(cpu, 0x8D, 0x0000BAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DD70: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:149 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DD72: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:150 PLA
    case 0xC1DD75: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:151 JSL UNKNOWN_C09279
    case 0xC1DD76: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:152 BRA @RETURN
    case 0xC1DD7A: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DD7C.
    case 0xC1DD7E: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD7F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DD81.
    case 0xC1DD83: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/switch_weapon.asm:154 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1DD84: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD86: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD88: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD8A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:155 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DD8C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:156 LDY #.SIZEOF(battle_action) * 4 + battle_action::description_text_pointer
    case 0xC1DD8E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000034u : 0x000034u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:156 LDY #.SIZEOF(battle_action) * 4 + battle_action::description_text_pointer
    // Overlapping static entry reached from 0xC1DD8E.
    case 0xC1DD90: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:157 LDA [@VIRTUAL06],Y
    case 0xC1DD91: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:158 PHA
    case 0xC1DD93: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:159 INY
    case 0xC1DD94: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:160 INY
    case 0xC1DD95: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:161 LDA [@VIRTUAL06],Y
    case 0xC1DD96: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:162 STA @TMP+2
    case 0xC1DD98: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:163 PLA
    case 0xC1DD9A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:164 STA @TMP
    case 0xC1DD9B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:165 STA @LOCAL00
    case 0xC1DD9D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:166 LDA @TMP+2
    case 0xC1DD9F: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:167 STA @LOCAL00+2
    case 0xC1DDA1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:168 JSL DISPLAY_TEXT
    case 0xC1DDA3: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DDA7: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DDA9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DDAB: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:169 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1DDAD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:170 LDY #.SIZEOF(battle_action) * 4 + battle_action::battle_function_pointer
    case 0xC1DDAF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000038u : 0x000038u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:170 LDY #.SIZEOF(battle_action) * 4 + battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1DDAF.
    case 0xC1DDB1: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:171 LDA [@VIRTUAL06],Y
    case 0xC1DDB2: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:172 PHA
    case 0xC1DDB4: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:173 INY
    case 0xC1DDB5: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:174 INY
    case 0xC1DDB6: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:175 LDA [@VIRTUAL06],Y
    case 0xC1DDB7: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:176 STA @VIRTUAL06+2
    case 0xC1DDB9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:177 PLA
    case 0xC1DDBB: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:178 STA @VIRTUAL06
    case 0xC1DDBC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:179 PHA
    case 0xC1DDBE: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DDBF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DDC1: {
        Instruction step(cpu, 0x8D, 0x0000BAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DDC4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/switch_weapon.asm:180 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1DDC6: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:181 PLA
    case 0xC1DDC9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:182 JSL UNKNOWN_C09279
    case 0xC1DDCA: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/switch_weapon.asm:184 JSR CLEAR_BLINKING_PROMPT
    case 0xC1DDCE: {
        Instruction step(cpu, 0x20, 0x000038u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/switch_weapon.asm:185 END_C_FUNCTION
    case 0xC1DDD1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/switch_weapon.asm:185 END_C_FUNCTION
    case 0xC1DDD2: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
