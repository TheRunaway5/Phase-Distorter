// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/eat_food.asm
bool resume_battle_eat_food(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/eat_food.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B27D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B27F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B280: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B281: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x00FFE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B281.
    case 0xC2B283: {
        Instruction step(cpu, 0xFF, 0x72AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B284: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/eat_food.asm:16 LDX CURRENT_TARGET
    case 0xC2B285: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:16 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B283.
    case 0xC2B287: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BDu : 0x0000BDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:17 LDA a:battler::id,X
    case 0xC2B288: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:17 LDA a:battler::id,X
    // Overlapping static entry reached from 0xC2B287.
    case 0xC2B289: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:17 LDA a:battler::id,X
    // Overlapping static entry reached from 0xC2B287.
    case 0xC2B28A: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:18 TAX
    case 0xC2B28B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:19 STX @LOCAL03
    case 0xC2B28C: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:20 TXA
    case 0xC2B28E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:21 DEC
    case 0xC2B28F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/eat_food.asm:22 LDY #.SIZEOF(char_struct)
    case 0xC2B290: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:22 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B290.
    case 0xC2B292: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:23 JSL MULT168
    case 0xC2B293: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:24 TAX
    case 0xC2B297: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:25 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC2B298: {
        Instruction step(cpu, 0xBD, 0x0099DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:26 AND #$00FF
    case 0xC2B29B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2B29B.
    case 0xC2B29D: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:27 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2B29E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:27 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2B29E.
    case 0xC2B2A0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:28 BNE @UNKNOWN0
    case 0xC2B2A1: {
        Instruction step(cpu, 0xD0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B2A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00766Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2B2A3.
    case 0xC2B2A5: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B2A6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2B2A5.
    case 0xC2B2A7: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B2A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2B2A8.
    case 0xC2B2AA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B2AB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B2AD: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:30 JMP @UNKNOWN36
    case 0xC2B2B1: {
        Instruction step(cpu, 0x4C, 0x00B606u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:32 JSR APPLY_CONDIMENT
    case 0xC2B2B4: {
        Instruction step(cpu, 0x20, 0x00B172u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:34 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xC2B2B7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:34 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xC2B2B9: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:34 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xC2B2BB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:34 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xC2B2BD: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:36 LDX @LOCAL03
    case 0xC2B2BF: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:37 CPX #4
    case 0xC2B2C1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:37 CPX #4
    // Overlapping static entry reached from 0xC2B2C1.
    case 0xC2B2C3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:38 BNE @UNKNOWN1
    case 0xC2B2C4: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:39 LDA #2
    case 0xC2B2C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:39 LDA #2
    // Overlapping static entry reached from 0xC2B2C6.
    case 0xC2B2C8: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:40 BRA @UNKNOWN2
    case 0xC2B2C9: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:42 LDA #1
    case 0xC2B2CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:42 LDA #1
    // Overlapping static entry reached from 0xC2B2CB.
    case 0xC2B2CD: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2CE: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2D0: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2D2: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2D4: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:45 CLC
    case 0xC2B2D6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:46 ADC @VIRTUAL0A
    case 0xC2B2D7: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:47 STA @VIRTUAL0A
    case 0xC2B2D9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:48 LDA [@VIRTUAL0A]
    case 0xC2B2DB: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:49 AND #$00FF
    case 0xC2B2DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC2B2DD.
    case 0xC2B2DF: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:50 TAY
    case 0xC2B2E0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:51 STY @LOCAL02
    case 0xC2B2E1: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2E3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2E5: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2E7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B2E9: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:53 LDA [@VIRTUAL0A]
    case 0xC2B2EB: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:54 AND #$00FF
    case 0xC2B2ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC2B2ED.
    case 0xC2B2EF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:55 BEQ @UNKNOWN12
    case 0xC2B2F0: {
        Instruction step(cpu, 0xF0, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:56 CMP #1
    case 0xC2B2F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:56 CMP #1
    // Overlapping static entry reached from 0xC2B2F2.
    case 0xC2B2F4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:57 BEQ @UNKNOWN15
    case 0xC2B2F5: {
        Instruction step(cpu, 0xF0, 0x000069u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:58 CMP #2
    case 0xC2B2F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:58 CMP #2
    // Overlapping static entry reached from 0xC2B2F7.
    case 0xC2B2F9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:59 BEQL @UNKNOWN18
    case 0xC2B2FA: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:59 BEQL @UNKNOWN18
    case 0xC2B2FC: {
        Instruction step(cpu, 0x4C, 0x00B378u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:60 CMP #3
    case 0xC2B2FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:60 CMP #3
    // Overlapping static entry reached from 0xC2B2FF.
    case 0xC2B301: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:61 BEQL @UNKNOWN23
    case 0xC2B302: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:61 BEQL @UNKNOWN23
    case 0xC2B304: {
        Instruction step(cpu, 0x4C, 0x00B3AAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:62 CMP #4
    case 0xC2B307: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:62 CMP #4
    // Overlapping static entry reached from 0xC2B307.
    case 0xC2B309: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:63 BEQL @UNKNOWN28
    case 0xC2B30A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:63 BEQL @UNKNOWN28
    case 0xC2B30C: {
        Instruction step(cpu, 0x4C, 0x00B3D8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:64 CMP #5
    case 0xC2B30F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:64 CMP #5
    // Overlapping static entry reached from 0xC2B30F.
    case 0xC2B311: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:65 BEQL @UNKNOWN29
    case 0xC2B312: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:65 BEQL @UNKNOWN29
    case 0xC2B314: {
        Instruction step(cpu, 0x4C, 0x00B43Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:66 CMP #6
    case 0xC2B317: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:66 CMP #6
    // Overlapping static entry reached from 0xC2B317.
    case 0xC2B319: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:67 BEQL @UNKNOWN30
    case 0xC2B31A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:67 BEQL @UNKNOWN30
    case 0xC2B31C: {
        Instruction step(cpu, 0x4C, 0x00B4A6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:68 CMP #7
    case 0xC2B31F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:68 CMP #7
    // Overlapping static entry reached from 0xC2B31F.
    case 0xC2B321: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:69 BEQL @UNKNOWN31
    case 0xC2B322: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:69 BEQL @UNKNOWN31
    case 0xC2B324: {
        Instruction step(cpu, 0x4C, 0x00B50Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:70 CMP #8
    case 0xC2B327: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:70 CMP #8
    // Overlapping static entry reached from 0xC2B327.
    case 0xC2B329: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:71 BEQL @UNKNOWN32
    case 0xC2B32A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:71 BEQL @UNKNOWN32
    case 0xC2B32C: {
        Instruction step(cpu, 0x4C, 0x00B573u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:72 CMP #9
    case 0xC2B32F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:72 CMP #9
    // Overlapping static entry reached from 0xC2B32F.
    case 0xC2B331: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:73 BEQL @UNKNOWN33
    case 0xC2B332: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:73 BEQL @UNKNOWN33
    case 0xC2B334: {
        Instruction step(cpu, 0x4C, 0x00B5D9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:74 CMP #10
    case 0xC2B337: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:74 CMP #10
    // Overlapping static entry reached from 0xC2B337.
    case 0xC2B339: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:75 BEQL @UNKNOWN34
    case 0xC2B33A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:75 BEQL @UNKNOWN34
    case 0xC2B33C: {
        Instruction step(cpu, 0x4C, 0x00B5DFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:76 JMP @UNKNOWN35
    case 0xC2B33F: {
        Instruction step(cpu, 0x4C, 0x00B5E3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:78 CPY #0
    case 0xC2B342: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:78 CPY #0
    // Overlapping static entry reached from 0xC2B342.
    case 0xC2B344: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:79 BEQ @UNKNOWN13
    case 0xC2B345: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:80 TYA
    case 0xC2B347: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B348: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B34A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B34B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B34D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/eat_food.asm:82 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B34E: {
        Instruction step(cpu, 0x20, 0x006AFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:83 TAX
    case 0xC2B351: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:84 BRA @UNKNOWN14
    case 0xC2B352: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:86 LDX #30000
    case 0xC2B354: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000030u : 0x007530u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:86 LDX #30000
    // Overlapping static entry reached from 0xC2B354.
    case 0xC2B356: {
        Instruction step(cpu, 0x75, 0x0000ADu, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:88 LDA CURRENT_TARGET
    case 0xC2B357: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:88 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B356.
    case 0xC2B358: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:89 JSR RECOVER_HP
    case 0xC2B35A: {
        Instruction step(cpu, 0x20, 0x007294u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:90 JMP @UNKNOWN35
    case 0xC2B35D: {
        Instruction step(cpu, 0x4C, 0x00B5E3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:92 CPY #0
    case 0xC2B360: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:92 CPY #0
    // Overlapping static entry reached from 0xC2B360.
    case 0xC2B362: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:93 BEQ @UNKNOWN16
    case 0xC2B363: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:94 TYA
    case 0xC2B365: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:95 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B366: {
        Instruction step(cpu, 0x20, 0x006AFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:96 TAX
    case 0xC2B369: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:97 BRA @UNKNOWN17
    case 0xC2B36A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:99 LDX #30000
    case 0xC2B36C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000030u : 0x007530u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:99 LDX #30000
    // Overlapping static entry reached from 0xC2B36C.
    case 0xC2B36E: {
        Instruction step(cpu, 0x75, 0x0000ADu, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:101 LDA CURRENT_TARGET
    case 0xC2B36F: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:101 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B36E.
    case 0xC2B370: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:102 JSR RECOVER_PP
    case 0xC2B372: {
        Instruction step(cpu, 0x20, 0x007318u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:103 JMP @UNKNOWN35
    case 0xC2B375: {
        Instruction step(cpu, 0x4C, 0x00B5E3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:105 CPY #0
    case 0xC2B378: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:105 CPY #0
    // Overlapping static entry reached from 0xC2B378.
    case 0xC2B37A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:106 BEQ @UNKNOWN19
    case 0xC2B37B: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:107 TYA
    case 0xC2B37D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B37E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B380: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B381: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B383: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/eat_food.asm:109 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B384: {
        Instruction step(cpu, 0x20, 0x006AFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:110 TAX
    case 0xC2B387: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:111 BRA @UNKNOWN20
    case 0xC2B388: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:113 LDX #30000
    case 0xC2B38A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000030u : 0x007530u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:113 LDX #30000
    // Overlapping static entry reached from 0xC2B38A.
    case 0xC2B38C: {
        Instruction step(cpu, 0x75, 0x0000ADu, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:115 LDA CURRENT_TARGET
    case 0xC2B38D: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:115 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B38C.
    case 0xC2B38E: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:116 JSR RECOVER_HP
    case 0xC2B390: {
        Instruction step(cpu, 0x20, 0x007294u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:117 LDY @LOCAL02
    case 0xC2B393: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:118 BEQ @UNKNOWN21
    case 0xC2B395: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:119 TYA
    case 0xC2B397: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:120 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B398: {
        Instruction step(cpu, 0x20, 0x006AFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:121 TAX
    case 0xC2B39B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:122 BRA @UNKNOWN22
    case 0xC2B39C: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:124 LDX #$7530
    case 0xC2B39E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000030u : 0x007530u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:124 LDX #$7530
    // Overlapping static entry reached from 0xC2B39E.
    case 0xC2B3A0: {
        Instruction step(cpu, 0x75, 0x0000ADu, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:126 LDA CURRENT_TARGET
    case 0xC2B3A1: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:126 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B3A0.
    case 0xC2B3A2: {
        Instruction step(cpu, 0x72, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:127 JSR RECOVER_PP
    case 0xC2B3A4: {
        Instruction step(cpu, 0x20, 0x007318u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:128 JMP @UNKNOWN35
    case 0xC2B3A7: {
        Instruction step(cpu, 0x4C, 0x00B5E3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:128 JMP @UNKNOWN35
    // Overlapping static entry reached from 0xC2B627.
    case 0xC2B3A9: {
        Instruction step(cpu, 0xB5, 0x0000A9u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:130 LDA #$0004
    case 0xC2B3AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:130 LDA #$0004
    // Overlapping static entry reached from 0xC2B3A9.
    case 0xC2B3AB: {
        Instruction step(cpu, 0x04, 0x000000u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:130 LDA #$0004
    // Overlapping static entry reached from 0xC2B3AA.
    case 0xC2B3AC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:131 JSR RAND_LIMIT
    case 0xC2B3AD: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:132 CMP #0
    case 0xC2B3B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:132 CMP #0
    // Overlapping static entry reached from 0xC2B3B0.
    case 0xC2B3B2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:133 BEQ @UNKNOWN28
    case 0xC2B3B3: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:134 CMP #1
    case 0xC2B3B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:134 CMP #1
    // Overlapping static entry reached from 0xC2B3B5.
    case 0xC2B3B7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:135 BEQL @UNKNOWN29
    case 0xC2B3B8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:135 BEQL @UNKNOWN29
    case 0xC2B3BA: {
        Instruction step(cpu, 0x4C, 0x00B43Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:136 CMP #2
    case 0xC2B3BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:136 CMP #2
    // Overlapping static entry reached from 0xC2B3BD.
    case 0xC2B3BF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:137 BEQL @UNKNOWN30
    case 0xC2B3C0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:137 BEQL @UNKNOWN30
    case 0xC2B3C2: {
        Instruction step(cpu, 0x4C, 0x00B4A6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:138 CMP #3
    case 0xC2B3C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:138 CMP #3
    // Overlapping static entry reached from 0xC2B3C5.
    case 0xC2B3C7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:139 BEQL @UNKNOWN31
    case 0xC2B3C8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:139 BEQL @UNKNOWN31
    case 0xC2B3CA: {
        Instruction step(cpu, 0x4C, 0x00B50Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:140 CMP #4
    case 0xC2B3CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:140 CMP #4
    // Overlapping static entry reached from 0xC2B3CD.
    case 0xC2B3CF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:141 BEQL @UNKNOWN32
    case 0xC2B3D0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:141 BEQL @UNKNOWN32
    case 0xC2B3D2: {
        Instruction step(cpu, 0x4C, 0x00B573u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:142 JMP @UNKNOWN35
    case 0xC2B3D5: {
        Instruction step(cpu, 0x4C, 0x00B5E3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:144 LDA CURRENT_TARGET
    case 0xC2B3D8: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:145 CLC
    case 0xC2B3DB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:146 ADC #battler::iq
    case 0xC2B3DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000031u : 0x000031u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:146 ADC #battler::iq
    // Overlapping static entry reached from 0xC2B3DC.
    case 0xC2B3DE: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:147 LDY @LOCAL02
    case 0xC2B3DF: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:148 SEP #PROC_FLAGS::INDEX8
    case 0xC2B3E1: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:149 STY @VIRTUAL00
    case 0xC2B3E3: {
        Instruction step(cpu, 0x84, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:150 PHA
    case 0xC2B3E5: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:151 REP #PROC_FLAGS::INDEX8
    case 0xC2B3E6: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:152 TAX
    case 0xC2B3E8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:153 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B3E9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:154 LDA __BSS_START__,X
    case 0xC2B3EB: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:155 CLC
    case 0xC2B3EE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:156 ADC @VIRTUAL00
    case 0xC2B3EF: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:157 PLX
    case 0xC2B3F1: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:158 STA __BSS_START__,X
    case 0xC2B3F2: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:159 LDX @LOCAL03
    case 0xC2B3F5: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:160 REP #PROC_FLAGS::ACCUM8
    case 0xC2B3F7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:161 TXA
    case 0xC2B3F9: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:162 DEC
    case 0xC2B3FA: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/eat_food.asm:163 LDY #.SIZEOF(char_struct)
    case 0xC2B3FB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:163 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B3FB.
    case 0xC2B3FD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:164 JSL MULT168
    case 0xC2B3FE: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:165 CLC
    case 0xC2B402: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:166 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_iq
    case 0xC2B403: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000028u : 0x009A28u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:166 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_iq
    // Overlapping static entry reached from 0xC2B403.
    case 0xC2B405: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/eat_food.asm:167 PHA
    case 0xC2B406: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:168 TAX
    case 0xC2B407: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:169 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B408: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:170 LDA __BSS_START__,X
    case 0xC2B40A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:171 CLC
    case 0xC2B40D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:172 ADC @VIRTUAL00
    case 0xC2B40E: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:173 PLX
    case 0xC2B410: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:174 STA __BSS_START__,X
    case 0xC2B411: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:175 LDX @LOCAL03
    case 0xC2B414: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:176 REP #PROC_FLAGS::ACCUM8
    case 0xC2B416: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:177 TXA
    case 0xC2B418: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:178 JSL RECALC_CHARACTER_POSTMATH_IQ
    case 0xC2B419: {
        Instruction step(cpu, 0x22, 0xC21D7Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:179 REP #PROC_FLAGS::ACCUM8
    case 0xC2B41D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B41F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B8u : 0x00F7B8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B41F.
    case 0xC2B421: {
        Instruction step(cpu, 0xF7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B422: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B421.
    case 0xC2B423: {
        Instruction step(cpu, 0x0E, 0x00C8A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B424: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B424.
    case 0xC2B426: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B427: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:181 LDY @LOCAL02
    case 0xC2B429: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:182 TYA
    case 0xC2B42B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:183 STORE_INT1632 @TEXTTMP
    case 0xC2B42C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:183 STORE_INT1632 @TEXTTMP
    case 0xC2B42E: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B430: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B432: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B434: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B436: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:185 JSL DISPLAY_TEXT_WAIT
    case 0xC2B438: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:186 JMP @UNKNOWN35
    case 0xC2B43C: {
        Instruction step(cpu, 0x4C, 0x00B5E3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:188 LDA CURRENT_TARGET
    case 0xC2B43F: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:189 CLC
    case 0xC2B442: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:190 ADC #battler::guts
    case 0xC2B443: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00002Cu : 0x00002Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:190 ADC #battler::guts
    // Overlapping static entry reached from 0xC2B443.
    case 0xC2B445: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:191 PHA
    case 0xC2B446: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:192 LDY @LOCAL02
    case 0xC2B447: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:193 STY @VIRTUAL02
    case 0xC2B449: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:194 TAX
    case 0xC2B44B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:195 LDA __BSS_START__,X
    case 0xC2B44C: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:196 CLC
    case 0xC2B44F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:197 ADC @VIRTUAL02
    case 0xC2B450: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:198 PLX
    case 0xC2B452: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:199 STA __BSS_START__,X
    case 0xC2B453: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:200 LDX @LOCAL03
    case 0xC2B456: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:201 TXA
    case 0xC2B458: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:202 DEC
    case 0xC2B459: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/eat_food.asm:203 LDY #.SIZEOF(char_struct)
    case 0xC2B45A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:203 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B45A.
    case 0xC2B45C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:204 JSL MULT168
    case 0xC2B45D: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:205 CLC
    case 0xC2B461: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:206 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_guts
    case 0xC2B462: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000026u : 0x009A26u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:206 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_guts
    // Overlapping static entry reached from 0xC2B462.
    case 0xC2B464: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/eat_food.asm:207 PHA
    case 0xC2B465: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:208 LDY @LOCAL02
    case 0xC2B466: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:209 SEP #PROC_FLAGS::INDEX8
    case 0xC2B468: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:210 STY @VIRTUAL00
    case 0xC2B46A: {
        Instruction step(cpu, 0x84, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:211 REP #PROC_FLAGS::INDEX8
    case 0xC2B46C: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:212 TAX
    case 0xC2B46E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:213 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B46F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:214 LDA __BSS_START__,X
    case 0xC2B471: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:215 CLC
    case 0xC2B474: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:216 ADC @VIRTUAL00
    case 0xC2B475: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:217 PLX
    case 0xC2B477: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:218 STA __BSS_START__,X
    case 0xC2B478: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:219 LDX @LOCAL03
    case 0xC2B47B: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:220 REP #PROC_FLAGS::ACCUM8
    case 0xC2B47D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:221 TXA
    case 0xC2B47F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:222 JSL RECALC_CHARACTER_POSTMATH_GUTS
    case 0xC2B480: {
        Instruction step(cpu, 0x22, 0xC21BA4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC2B484: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B486: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D2u : 0x00F7D2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B486.
    case 0xC2B488: {
        Instruction step(cpu, 0xF7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B489: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B488.
    case 0xC2B48A: {
        Instruction step(cpu, 0x0E, 0x00C8A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B48B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B48B.
    case 0xC2B48D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B48E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:225 LDY @LOCAL02
    case 0xC2B490: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:226 TYA
    case 0xC2B492: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:227 STORE_INT1632 @TEXTTMP
    case 0xC2B493: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:227 STORE_INT1632 @TEXTTMP
    case 0xC2B495: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B497: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B499: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B49B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B49D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:229 JSL DISPLAY_TEXT_WAIT
    case 0xC2B49F: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:230 JMP @UNKNOWN35
    case 0xC2B4A3: {
        Instruction step(cpu, 0x4C, 0x00B5E3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:232 LDA CURRENT_TARGET
    case 0xC2B4A6: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:233 CLC
    case 0xC2B4A9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:234 ADC #battler::speed
    case 0xC2B4AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00002Au : 0x00002Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:234 ADC #battler::speed
    // Overlapping static entry reached from 0xC2B4AA.
    case 0xC2B4AC: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:235 PHA
    case 0xC2B4AD: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:236 LDY @LOCAL02
    case 0xC2B4AE: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:237 STY @VIRTUAL02
    case 0xC2B4B0: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:238 TAX
    case 0xC2B4B2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:239 LDA __BSS_START__,X
    case 0xC2B4B3: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:240 CLC
    case 0xC2B4B6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:241 ADC @VIRTUAL02
    case 0xC2B4B7: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:242 PLX
    case 0xC2B4B9: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:243 STA __BSS_START__,X
    case 0xC2B4BA: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:244 LDX @LOCAL03
    case 0xC2B4BD: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:245 TXA
    case 0xC2B4BF: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:246 DEC
    case 0xC2B4C0: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/eat_food.asm:247 LDY #.SIZEOF(char_struct)
    case 0xC2B4C1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:247 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B4C1.
    case 0xC2B4C3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:248 JSL MULT168
    case 0xC2B4C4: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:249 CLC
    case 0xC2B4C8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:250 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_speed
    case 0xC2B4C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000025u : 0x009A25u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:250 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_speed
    // Overlapping static entry reached from 0xC2B4C9.
    case 0xC2B4CB: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/eat_food.asm:251 PHA
    case 0xC2B4CC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:252 LDY @LOCAL02
    case 0xC2B4CD: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:253 SEP #PROC_FLAGS::INDEX8
    case 0xC2B4CF: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:254 STY @VIRTUAL00
    case 0xC2B4D1: {
        Instruction step(cpu, 0x84, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:255 REP #PROC_FLAGS::INDEX8
    case 0xC2B4D3: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:256 TAX
    case 0xC2B4D5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:257 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B4D6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:258 LDA __BSS_START__,X
    case 0xC2B4D8: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:259 CLC
    case 0xC2B4DB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:260 ADC @VIRTUAL00
    case 0xC2B4DC: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:261 PLX
    case 0xC2B4DE: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:262 STA __BSS_START__,X
    case 0xC2B4DF: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:263 LDX @LOCAL03
    case 0xC2B4E2: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:264 REP #PROC_FLAGS::ACCUM8
    case 0xC2B4E4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:265 TXA
    case 0xC2B4E6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:266 JSL RECALC_CHARACTER_POSTMATH_SPEED
    case 0xC2B4E7: {
        Instruction step(cpu, 0x22, 0xC21AEBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:267 REP #PROC_FLAGS::ACCUM8
    case 0xC2B4EB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B4ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x00F82Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B4ED.
    case 0xC2B4EF: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B4F0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B4F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B4F2.
    case 0xC2B4F4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B4F5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:269 LDY @LOCAL02
    case 0xC2B4F7: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:270 TYA
    case 0xC2B4F9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:271 STORE_INT1632 @TEXTTMP
    case 0xC2B4FA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:271 STORE_INT1632 @TEXTTMP
    case 0xC2B4FC: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B4FE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B500: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B502: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B504: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:273 JSL DISPLAY_TEXT_WAIT
    case 0xC2B506: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:274 JMP @UNKNOWN35
    case 0xC2B50A: {
        Instruction step(cpu, 0x4C, 0x00B5E3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:276 LDA CURRENT_TARGET
    case 0xC2B50D: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:277 CLC
    case 0xC2B510: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:278 ADC #battler::vitality
    case 0xC2B511: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:278 ADC #battler::vitality
    // Overlapping static entry reached from 0xC2B511.
    case 0xC2B513: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:279 LDY @LOCAL02
    case 0xC2B514: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:280 SEP #PROC_FLAGS::INDEX8
    case 0xC2B516: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:281 STY @VIRTUAL00
    case 0xC2B518: {
        Instruction step(cpu, 0x84, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:282 PHA
    case 0xC2B51A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:283 REP #PROC_FLAGS::INDEX8
    case 0xC2B51B: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:284 TAX
    case 0xC2B51D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:285 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B51E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:286 LDA __BSS_START__,X
    case 0xC2B520: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:287 CLC
    case 0xC2B523: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:288 ADC @VIRTUAL00
    case 0xC2B524: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:289 PLX
    case 0xC2B526: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:290 STA __BSS_START__,X
    case 0xC2B527: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:291 LDX @LOCAL03
    case 0xC2B52A: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:292 REP #PROC_FLAGS::ACCUM8
    case 0xC2B52C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:293 TXA
    case 0xC2B52E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:294 DEC
    case 0xC2B52F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/eat_food.asm:295 LDY #.SIZEOF(char_struct)
    case 0xC2B530: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:295 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B530.
    case 0xC2B532: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:296 JSL MULT168
    case 0xC2B533: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:297 CLC
    case 0xC2B537: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:298 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_vitality
    case 0xC2B538: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000027u : 0x009A27u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:298 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_vitality
    // Overlapping static entry reached from 0xC2B538.
    case 0xC2B53A: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/eat_food.asm:299 PHA
    case 0xC2B53B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:300 TAX
    case 0xC2B53C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:301 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B53D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:302 LDA __BSS_START__,X
    case 0xC2B53F: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:303 CLC
    case 0xC2B542: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:304 ADC @VIRTUAL00
    case 0xC2B543: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:305 PLX
    case 0xC2B545: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:306 STA __BSS_START__,X
    case 0xC2B546: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:307 LDX @LOCAL03
    case 0xC2B549: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:308 REP #PROC_FLAGS::ACCUM8
    case 0xC2B54B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:309 TXA
    case 0xC2B54D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:310 JSL RECALC_CHARACTER_POSTMATH_VITALITY
    case 0xC2B54E: {
        Instruction step(cpu, 0x22, 0xC21D65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:311 REP #PROC_FLAGS::ACCUM8
    case 0xC2B552: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B554: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Cu : 0x00F84Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B554.
    case 0xC2B556: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B557: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B559: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B559.
    case 0xC2B55B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B55C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:313 LDY @LOCAL02
    case 0xC2B55E: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:314 TYA
    case 0xC2B560: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:315 STORE_INT1632 @TEXTTMP
    case 0xC2B561: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:315 STORE_INT1632 @TEXTTMP
    case 0xC2B563: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B565: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B567: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B569: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B56B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:317 JSL DISPLAY_TEXT_WAIT
    case 0xC2B56D: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:318 BRA @UNKNOWN35
    case 0xC2B571: {
        Instruction step(cpu, 0x80, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:320 LDA CURRENT_TARGET
    case 0xC2B573: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:321 CLC
    case 0xC2B576: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:322 ADC #battler::luck
    case 0xC2B577: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00002Eu : 0x00002Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:322 ADC #battler::luck
    // Overlapping static entry reached from 0xC2B577.
    case 0xC2B579: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:323 PHA
    case 0xC2B57A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:324 LDY @LOCAL02
    case 0xC2B57B: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:325 STY @VIRTUAL02
    case 0xC2B57D: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:326 TAX
    case 0xC2B57F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:327 LDA __BSS_START__,X
    case 0xC2B580: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:328 CLC
    case 0xC2B583: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:329 ADC @VIRTUAL02
    case 0xC2B584: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:330 PLX
    case 0xC2B586: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:331 STA __BSS_START__,X
    case 0xC2B587: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:332 LDX @LOCAL03
    case 0xC2B58A: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:333 TXA
    case 0xC2B58C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:334 DEC
    case 0xC2B58D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/eat_food.asm:335 LDY #.SIZEOF(char_struct)
    case 0xC2B58E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:335 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B58E.
    case 0xC2B590: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:336 JSL MULT168
    case 0xC2B591: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:337 CLC
    case 0xC2B595: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:338 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_luck
    case 0xC2B596: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000029u : 0x009A29u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:338 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_luck
    // Overlapping static entry reached from 0xC2B596.
    case 0xC2B598: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/eat_food.asm:339 PHA
    case 0xC2B599: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:340 LDY @LOCAL02
    case 0xC2B59A: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:341 SEP #PROC_FLAGS::INDEX8
    case 0xC2B59C: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:342 STY @VIRTUAL00
    case 0xC2B59E: {
        Instruction step(cpu, 0x84, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:343 REP #PROC_FLAGS::INDEX8
    case 0xC2B5A0: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:344 TAX
    case 0xC2B5A2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:345 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B5A3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:346 LDA __BSS_START__,X
    case 0xC2B5A5: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:347 CLC
    case 0xC2B5A8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:348 ADC @VIRTUAL00
    case 0xC2B5A9: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:349 PLX
    case 0xC2B5AB: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:350 STA __BSS_START__,X
    case 0xC2B5AC: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:351 LDX @LOCAL03
    case 0xC2B5AF: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:352 REP #PROC_FLAGS::ACCUM8
    case 0xC2B5B1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:353 TXA
    case 0xC2B5B3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:354 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC2B5B4: {
        Instruction step(cpu, 0x22, 0xC21C5Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:355 REP #PROC_FLAGS::ACCUM8
    case 0xC2B5B8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B5BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Bu : 0x00F86Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B5BA.
    case 0xC2B5BC: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B5BD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B5BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B5BF.
    case 0xC2B5C1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B5C2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:357 LDY @LOCAL02
    case 0xC2B5C4: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:358 TYA
    case 0xC2B5C6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:359 STORE_INT1632 @TEXTTMP
    case 0xC2B5C7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:359 STORE_INT1632 @TEXTTMP
    case 0xC2B5C9: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B5CB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B5CD: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B5CF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B5D1: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:361 JSL DISPLAY_TEXT_WAIT
    case 0xC2B5D3: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:362 BRA @UNKNOWN35
    case 0xC2B5D7: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:364 JSL BTLACT_HEALING_A
    case 0xC2B5D9: {
        Instruction step(cpu, 0x22, 0xC29AEAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:365 BRA @UNKNOWN35
    case 0xC2B5DD: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:367 JSL HEAL_POISON
    case 0xC2B5DF: {
        Instruction step(cpu, 0x22, 0xC2A39Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:370 MOVE_INT @LOCALEB, @VIRTUAL06
    case 0xC2B5E3: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:370 MOVE_INT @LOCALEB, @VIRTUAL06
    case 0xC2B5E5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:370 MOVE_INT @LOCALEB, @VIRTUAL06
    case 0xC2B5E7: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:370 MOVE_INT @LOCALEB, @VIRTUAL06
    case 0xC2B5E9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:372 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B5EB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:373 LDY #item_parameters::special
    case 0xC2B5ED: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:373 LDY #item_parameters::special
    // Overlapping static entry reached from 0xC2B5ED.
    case 0xC2B5EF: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:374 LDA [@VIRTUAL06],Y
    case 0xC2B5F0: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:375 REP #PROC_FLAGS::ACCUM8
    case 0xC2B5F2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:376 AND #$00FF
    case 0xC2B5F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:376 AND #$00FF
    // Overlapping static entry reached from 0xC2B5F4.
    case 0xC2B5F6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:377 BEQ @UNKNOWN36
    case 0xC2B5F7: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:378 AND #$00FF
    case 0xC2B5F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:378 AND #$00FF
    // Overlapping static entry reached from 0xC2B5F9.
    case 0xC2B5FB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B5FC: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B5FE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B5FF: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B601: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/eat_food.asm:380 JSL UNKNOWN_C076C8
    case 0xC2B602: {
        Instruction step(cpu, 0x22, 0xC076C8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/eat_food.asm:382 END_C_FUNCTION
    case 0xC2B606: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/eat_food.asm:382 END_C_FUNCTION
    case 0xC2B607: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
