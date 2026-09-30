// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/apply_condiment.asm
bool resume_battle_apply_condiment(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/apply_condiment.asm:3 BEGIN_C_FUNCTION
    case 0xC2B172: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B174: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B175: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B176: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B176.
    case 0xC2B178: {
        Instruction step(cpu, 0xFF, 0x70AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B179: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:12 LDX CURRENT_ATTACKER
    case 0xC2B17A: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:12 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2B178.
    case 0xC2B17C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BDu : 0x0008BDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:13 LDA a:battler::current_action_argument,X
    case 0xC2B17D: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:13 LDA a:battler::current_action_argument,X
    // Overlapping static entry reached from 0xC2B17C.
    case 0xC2B17E: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:13 LDA a:battler::current_action_argument,X
    // Overlapping static entry reached from 0xC2B17C.
    case 0xC2B17F: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:14 AND #$00FF
    case 0xC2B180: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC2B180.
    case 0xC2B182: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:15 STA @VIRTUAL04
    case 0xC2B183: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:16 STA @LOCAL04
    case 0xC2B185: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:17 LDA @VIRTUAL04
    case 0xC2B187: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B189: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:19 JSL FIND_CONDIMENT
    case 0xC2B18B: {
        Instruction step(cpu, 0x22, 0xC1DB33u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:21 STA @VIRTUAL02
    case 0xC2B18F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:22 CMP #$0000
    case 0xC2B191: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:22 CMP #$0000
    // Overlapping static entry reached from 0xC2B191.
    case 0xC2B193: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/apply_condiment.asm:23 BEQL @UNKNOWN6
    case 0xC2B194: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/apply_condiment.asm:23 BEQL @UNKNOWN6
    case 0xC2B196: {
        Instruction step(cpu, 0x4C, 0x00B257u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:24 LDX @VIRTUAL02
    case 0xC2B199: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:25 STX @LOCAL03
    case 0xC2B19B: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:26 LDX CURRENT_ATTACKER
    case 0xC2B19D: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:27 LDA a:battler::id,X
    case 0xC2B1A0: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:28 LDX @LOCAL03
    case 0xC2B1A3: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:29 JSL TAKE_ITEM_FROM_CHARACTER
    case 0xC2B1A5: {
        Instruction step(cpu, 0x22, 0xC18EADu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:30 LDY #$0000
    case 0xC2B1A9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:30 LDY #$0000
    // Overlapping static entry reached from 0xC2B1A9.
    case 0xC2B1AB: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:31 STY @LOCAL02
    case 0xC2B1AC: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:32 BRA @UNKNOWN4
    case 0xC2B1AE: {
        Instruction step(cpu, 0x80, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:34 PHA
    case 0xC2B1B0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:35 LDA @LOCAL04
    case 0xC2B1B1: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:36 STA @VIRTUAL04
    case 0xC2B1B3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:37 PLA
    case 0xC2B1B5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:38 AND #$00FF
    case 0xC2B1B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC2B1B6.
    case 0xC2B1B8: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:39 CMP @VIRTUAL04
    case 0xC2B1B9: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:40 BNE @UNKNOWN3
    case 0xC2B1BB: {
        Instruction step(cpu, 0xD0, 0x00005Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:41 TXA
    case 0xC2B1BD: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:42 INC
    case 0xC2B1BE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1BF: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1C1: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1C3: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1C5: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:44 CLC
    case 0xC2B1C7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:45 ADC @VIRTUAL0A
    case 0xC2B1C8: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:46 STA @VIRTUAL0A
    case 0xC2B1CA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:47 LDA [@VIRTUAL0A]
    case 0xC2B1CC: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:48 AND #$00FF
    case 0xC2B1CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC2B1CE.
    case 0xC2B1D0: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:49 CMP @VIRTUAL02
    case 0xC2B1D1: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:50 BEQ @UNKNOWN2
    case 0xC2B1D3: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:51 TXA
    case 0xC2B1D5: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:52 INC
    case 0xC2B1D6: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:53 INC
    case 0xC2B1D7: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:54 CLC
    case 0xC2B1D8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:55 ADC @VIRTUAL06
    case 0xC2B1D9: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:56 STA @VIRTUAL06
    case 0xC2B1DB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:57 LDA [@VIRTUAL06]
    case 0xC2B1DD: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:58 AND #$00FF
    case 0xC2B1DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC2B259.
    case 0xC2B1E0: {
        Instruction step(cpu, 0xFF, 0x02C500u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC2B1DF.
    case 0xC2B1E1: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:59 CMP @VIRTUAL02
    case 0xC2B1E2: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:60 BNE @UNKNOWN5
    case 0xC2B1E4: {
        Instruction step(cpu, 0xD0, 0x000063u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B1E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Du : 0x007C9Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    // Overlapping static entry reached from 0xC2B1E6.
    case 0xC2B1E8: {
        Instruction step(cpu, 0x7C, 0x000E85u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B1E9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B1EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    // Overlapping static entry reached from 0xC2B1EB.
    case 0xC2B1ED: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B1EE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B1F0: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000077u : 0x00EA77u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1F4.
    case 0xC2B1F6: {
        Instruction step(cpu, 0xEA, 0x000000u, 1u, AddressMode::Implied);
        step.no_operation();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1F7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1F9.
    case 0xC2B1FB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1FC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:65 LDY @LOCAL02
    case 0xC2B1FE: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:66 TYA
    case 0xC2B200: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B201: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B203: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B204: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B206: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B207: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:68 INC
    case 0xC2B209: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:69 INC
    case 0xC2B20A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:70 INC
    case 0xC2B20B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:71 CLC
    case 0xC2B20C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:72 ADC @VIRTUAL06
    case 0xC2B20D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:73 STA @VIRTUAL06
    case 0xC2B20F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:74 STA @RETURNVAL
    case 0xC2B211: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:75 LDA @VIRTUAL08
    case 0xC2B213: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:76 STA @RETURNVAL+2
    case 0xC2B215: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:77 BRA @UNKNOWN7
    case 0xC2B217: {
        Instruction step(cpu, 0x80, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:79 INY
    case 0xC2B219: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:80 STY @LOCAL02
    case 0xC2B21A: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B21C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000077u : 0x00EA77u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B21C.
    case 0xC2B21E: {
        Instruction step(cpu, 0xEA, 0x000000u, 1u, AddressMode::Implied);
        step.no_operation();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B21F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B221: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B221.
    case 0xC2B223: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B224: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:83 TYA
    case 0xC2B226: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B227: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B229: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B22A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B22C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B22D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:85 TAX
    case 0xC2B22F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:86 PHA
    case 0xC2B230: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B231: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B233: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B235: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B237: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:88 PLA
    case 0xC2B239: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:89 CLC
    case 0xC2B23A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:90 ADC @VIRTUAL0A
    case 0xC2B23B: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:91 STA @VIRTUAL0A
    case 0xC2B23D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:92 LDA [@VIRTUAL0A]
    case 0xC2B23F: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:93 AND #$00FF
    case 0xC2B241: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:93 AND #$00FF
    // Overlapping static entry reached from 0xC2B241.
    case 0xC2B243: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/apply_condiment.asm:94 BNEL @UNKNOWN1
    case 0xC2B244: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/apply_condiment.asm:94 BNEL @UNKNOWN1
    case 0xC2B246: {
        Instruction step(cpu, 0x4C, 0x00B1B0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B249: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B1u : 0x007CB1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    // Overlapping static entry reached from 0xC2B249.
    case 0xC2B24B: {
        Instruction step(cpu, 0x7C, 0x000E85u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B24C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B24E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    // Overlapping static entry reached from 0xC2B24E.
    case 0xC2B250: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B251: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B253: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B257: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x005000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B257.
    case 0xC2B259: {
        Instruction step(cpu, 0x50, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B25A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B259.
    case 0xC2B25B: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B25C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B25B.
    case 0xC2B25D: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B25C.
    case 0xC2B25E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B25F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:99 LDA @LOCAL04
    case 0xC2B261: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:100 STA @VIRTUAL04
    case 0xC2B263: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B265: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC2B265.
    case 0xC2B267: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B268: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:102 CLC
    case 0xC2B26C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:103 ADC #item::params
    case 0xC2B26D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:103 ADC #item::params
    // Overlapping static entry reached from 0xC2B26D.
    case 0xC2B26F: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:104 CLC
    case 0xC2B270: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:105 ADC @VIRTUAL06
    case 0xC2B271: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:106 STA @VIRTUAL06
    case 0xC2B273: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:107 STA @RETURNVAL
    case 0xC2B275: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:108 LDA @VIRTUAL08
    case 0xC2B277: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:109 STA @RETURNVAL+2
    case 0xC2B279: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/apply_condiment.asm:111 END_C_FUNCTION
    case 0xC2B27B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/apply_condiment.asm:111 END_C_FUNCTION
    case 0xC2B27C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
