// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/call_for_help_common.asm
bool resume_battle_call_for_help_common(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/call_for_help_common.asm:3 BEGIN_C_FUNCTION
    case 0xC2BD09: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD0B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD0C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD0D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x00FFD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BD0E.
    case 0xC2BD10: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD11: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/call_for_help_common.asm:19 END_STACK_VARS
    case 0xC2BD12: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:20 STA @LOCAL0C
    case 0xC2BD13: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:20 STA @LOCAL0C
    // Overlapping static entry reached from 0xC2BD10.
    case 0xC2BD14: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:21 LDX CURRENT_ATTACKER
    case 0xC2BD15: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:22 LDA a:battler::ally_or_enemy,X
    case 0xC2BD18: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:23 AND #$00FF
    case 0xC2BD1B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2BD1B.
    case 0xC2BD1D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:24 BEQ @UNKNOWN2
    case 0xC2BD1E: {
        Instruction step(cpu, 0xF0, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:25 LDX CURRENT_ATTACKER
    case 0xC2BD20: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:26 LDA a:battler::current_action_argument,X
    case 0xC2BD23: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:27 AND #$00FF
    case 0xC2BD26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC2BD26.
    case 0xC2BD28: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:28 STA @LOCAL0B
    case 0xC2BD29: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2BD2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Du : 0x00C60Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2BD2B.
    case 0xC2BD2D: {
        Instruction step(cpu, 0xC6, 0x000085u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2BD2E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2BD2D.
    case 0xC2BD2F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2BD30: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2BD30.
    case 0xC2BD32: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:29 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC2BD33: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:30 LDA CURRENT_BATTLE_GROUP
    case 0xC2BD35: {
        Instruction step(cpu, 0xAD, 0x004E12u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/call_for_help_common.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BD38: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/call_for_help_common.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BD39: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/call_for_help_common.asm:31 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BD3A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:32 CLC
    case 0xC2BD3B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:33 ADC @VIRTUAL0A
    case 0xC2BD3C: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:34 STA @VIRTUAL0A
    case 0xC2BD3E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD40: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BD40.
    case 0xC2BD42: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD43: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD45: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD46: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD48: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/call_for_help_common.asm:35 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2BD4A: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:36 BRA @UNKNOWN1
    case 0xC2BD4C: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:38 LDY #$0001
    case 0xC2BD4E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:38 LDY #$0001
    // Overlapping static entry reached from 0xC2BD4E.
    case 0xC2BD50: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:39 LDA [@VIRTUAL06],Y
    case 0xC2BD51: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:40 CMP @LOCAL0B
    case 0xC2BD53: {
        Instruction step(cpu, 0xC5, 0x000026u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:41 BEQ @UNKNOWN4
    case 0xC2BD55: {
        Instruction step(cpu, 0xF0, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:42 LDA #$0003
    case 0xC2BD57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:42 LDA #$0003
    // Overlapping static entry reached from 0xC2BD57.
    case 0xC2BD59: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:43 CLC
    case 0xC2BD5A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:44 ADC @VIRTUAL06
    case 0xC2BD5B: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:45 STA @VIRTUAL06
    case 0xC2BD5D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/call_for_help_common.asm:47 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2BD5F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/call_for_help_common.asm:47 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2BD61: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/call_for_help_common.asm:47 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2BD63: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/call_for_help_common.asm:47 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2BD65: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:48 LDA [@VIRTUAL0A]
    case 0xC2BD67: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:49 AND #$00FF
    case 0xC2BD69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC2BD69.
    case 0xC2BD6B: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:50 CMP #$00FF
    case 0xC2BD6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:50 CMP #$00FF
    // Overlapping static entry reached from 0xC2BD6C.
    case 0xC2BD6E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:51 BNE @UNKNOWN0
    case 0xC2BD6F: {
        Instruction step(cpu, 0xD0, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:53 LDA @LOCAL0C
    case 0xC2BD71: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:54 BEQ @UNKNOWN3
    case 0xC2BD73: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BD75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A8u : 0x0046A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    // Overlapping static entry reached from 0xC2BD75.
    case 0xC2BD77: {
        Instruction step(cpu, 0x46, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BD78: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    // Overlapping static entry reached from 0xC2BD77.
    case 0xC2BD79: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BD7A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    // Overlapping static entry reached from 0xC2BD7A.
    case 0xC2BD7C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BD7D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/call_for_help_common.asm:55 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_NO
    case 0xC2BD7F: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:56 JMP @UNKNOWN33
    case 0xC2BD83: {
        Instruction step(cpu, 0x4C, 0x00C0E5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BD86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000092u : 0x004692u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    // Overlapping static entry reached from 0xC2BD86.
    case 0xC2BD88: {
        Instruction step(cpu, 0x46, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BD89: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    // Overlapping static entry reached from 0xC2BD88.
    case 0xC2BD8A: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BD8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    // Overlapping static entry reached from 0xC2BD8B.
    case 0xC2BD8D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BD8E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/call_for_help_common.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_NO
    case 0xC2BD90: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:59 JMP @UNKNOWN33
    case 0xC2BD94: {
        Instruction step(cpu, 0x4C, 0x00C0E5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:61 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC2BD97: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:61 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2BD97.
    case 0xC2BD99: {
        Instruction step(cpu, 0xA1, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:62 LDA #$0000
    case 0xC2BD9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:62 LDA #$0000
    // Overlapping static entry reached from 0xC2BD99.
    case 0xC2BD9B: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:62 LDA #$0000
    // Overlapping static entry reached from 0xC2BD9A.
    case 0xC2BD9C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:63 STA @LOCAL0A
    case 0xC2BD9D: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:64 LDY #$0008
    case 0xC2BD9F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:64 LDY #$0008
    // Overlapping static entry reached from 0xC2BD9F.
    case 0xC2BDA1: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:65 BRA @UNKNOWN7
    case 0xC2BDA2: {
        Instruction step(cpu, 0x80, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:67 LDA a:battler::consciousness,X
    case 0xC2BDA4: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:68 AND #$00FF
    case 0xC2BDA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC2BDA7.
    case 0xC2BDA9: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:69 CMP #$0001
    case 0xC2BDAA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:69 CMP #$0001
    // Overlapping static entry reached from 0xC2BDAA.
    case 0xC2BDAC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:70 BNE @UNKNOWN6
    case 0xC2BDAD: {
        Instruction step(cpu, 0xD0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:71 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2BDAF: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:72 AND #$00FF
    case 0xC2BDB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC2BDB2.
    case 0xC2BDB4: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:73 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2BDB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:73 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2BDB5.
    case 0xC2BDB7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:74 BEQ @UNKNOWN6
    case 0xC2BDB8: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:75 LDA a:battler::unknown76,X
    case 0xC2BDBA: {
        Instruction step(cpu, 0xBD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:76 CMP @LOCAL0B
    case 0xC2BDBD: {
        Instruction step(cpu, 0xC5, 0x000026u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:77 BNE @UNKNOWN6
    case 0xC2BDBF: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:78 LDA @LOCAL0A
    case 0xC2BDC1: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:79 INC
    case 0xC2BDC3: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:80 STA @LOCAL0A
    case 0xC2BDC4: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:82 TXA
    case 0xC2BDC6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:83 CLC
    case 0xC2BDC7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:84 ADC #.SIZEOF(battler)
    case 0xC2BDC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:84 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BDC8.
    case 0xC2BDCA: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:85 TAX
    case 0xC2BDCB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:86 INY
    case 0xC2BDCC: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:88 CPY #$0020
    case 0xC2BDCD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:88 CPY #$0020
    // Overlapping static entry reached from 0xC2BDCD.
    case 0xC2BDCF: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:89 BCC @UNKNOWN5
    case 0xC2BDD0: {
        Instruction step(cpu, 0x90, 0x0000D2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2BDD2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BDD2.
    case 0xC2BDD4: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2BDD5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BDD4.
    case 0xC2BDD6: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2BDD7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BDD6.
    case 0xC2BDD8: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2BDD7.
    case 0xC2BDD9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:90 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2BDDA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:91 LDA @LOCAL0B
    case 0xC2BDDC: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:92 LDY #.SIZEOF(enemy_data)
    case 0xC2BDDE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:92 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2BDDE.
    case 0xC2BDE0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:93 JSL MULT168
    case 0xC2BDE1: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:94 TAX
    case 0xC2BDE5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:95 STX @LOCAL09
    case 0xC2BDE6: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:96 TXA
    case 0xC2BDE8: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:97 CLC
    case 0xC2BDE9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:98 ADC #enemy_data::max_called
    case 0xC2BDEA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Bu : 0x00004Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:98 ADC #enemy_data::max_called
    // Overlapping static entry reached from 0xC2BDEA.
    case 0xC2BDEC: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/call_for_help_common.asm:99 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BDED: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/call_for_help_common.asm:99 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BDEF: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/call_for_help_common.asm:99 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BDF1: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/call_for_help_common.asm:99 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BDF3: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:100 CLC
    case 0xC2BDF5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:101 ADC @VIRTUAL0A
    case 0xC2BDF6: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:102 STA @VIRTUAL0A
    case 0xC2BDF8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:103 LDA [@VIRTUAL0A]
    case 0xC2BDFA: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:104 AND #$00FF
    case 0xC2BDFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:104 AND #$00FF
    // Overlapping static entry reached from 0xC2BDFC.
    case 0xC2BDFE: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:105 TAY
    case 0xC2BDFF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:106 STY @LOCAL08
    case 0xC2BE00: {
        Instruction step(cpu, 0x84, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:107 LDA @LOCAL0A
    case 0xC2BE02: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:108 STA @VIRTUAL02
    case 0xC2BE04: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:109 TYA
    case 0xC2BE06: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:110 SEC
    case 0xC2BE07: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:111 SBC @VIRTUAL02
    case 0xC2BE08: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:112 LDY #$00CD
    case 0xC2BE0A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000CDu : 0x0000CDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:112 LDY #$00CD
    // Overlapping static entry reached from 0xC2BE0A.
    case 0xC2BE0C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:113 JSL MULT168
    case 0xC2BE0D: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:114 LDY @LOCAL08
    case 0xC2BE11: {
        Instruction step(cpu, 0xA4, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:115 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2BE13: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:116 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BE17: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:117 JSR SUCCESS_255
    case 0xC2BE19: {
        Instruction step(cpu, 0x20, 0x006AF7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:119 CMP #$0000
    case 0xC2BE1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:119 CMP #$0000
    // Overlapping static entry reached from 0xC2BE1C.
    case 0xC2BE1E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/call_for_help_common.asm:120 BEQL @UNKNOWN2
    case 0xC2BE1F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/call_for_help_common.asm:120 BEQL @UNKNOWN2
    case 0xC2BE21: {
        Instruction step(cpu, 0x4C, 0x00BD71u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:121 LDX @LOCAL09
    case 0xC2BE24: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:122 TXA
    case 0xC2BE26: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:123 CLC
    case 0xC2BE27: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:124 ADC #enemy_data::battle_sprite
    case 0xC2BE28: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:124 ADC #enemy_data::battle_sprite
    // Overlapping static entry reached from 0xC2BE28.
    case 0xC2BE2A: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/call_for_help_common.asm:125 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE2B: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/call_for_help_common.asm:125 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE2D: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/call_for_help_common.asm:125 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE2F: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/call_for_help_common.asm:125 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2BE31: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:126 CLC
    case 0xC2BE33: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:127 ADC @VIRTUAL0A
    case 0xC2BE34: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:128 STA @VIRTUAL0A
    case 0xC2BE36: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:129 LDA [@VIRTUAL0A]
    case 0xC2BE38: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:130 STA @LOCAL08
    case 0xC2BE3A: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:131 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BE3C: {
        Instruction step(cpu, 0x20, 0x00EF1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/call_for_help_common.asm:132 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BE3F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/call_for_help_common.asm:132 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BE40: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/call_for_help_common.asm:132 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BE41: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:133 CLC
    case 0xC2BE42: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:134 ADC #$0010
    case 0xC2BE43: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:134 ADC #$0010
    // Overlapping static entry reached from 0xC2BE43.
    case 0xC2BE45: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:135 STA @LOCAL07
    case 0xC2BE46: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:136 LDX @LOCAL09
    case 0xC2BE48: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:137 TXA
    case 0xC2BE4A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:138 CLC
    case 0xC2BE4B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:139 ADC #enemy_data::row
    case 0xC2BE4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Au : 0x00004Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:139 ADC #enemy_data::row
    // Overlapping static entry reached from 0xC2BE4C.
    case 0xC2BE4E: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:140 CLC
    case 0xC2BE4F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:141 ADC @VIRTUAL06
    case 0xC2BE50: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:142 STA @VIRTUAL06
    case 0xC2BE52: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:143 LDA [@VIRTUAL06]
    case 0xC2BE54: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:144 AND #$00FF
    case 0xC2BE56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:144 AND #$00FF
    // Overlapping static entry reached from 0xC2BE56.
    case 0xC2BE58: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:145 STA @LOCAL06
    case 0xC2BE59: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:146 JSR UNKNOWN_C2BD13
    case 0xC2BE5B: {
        Instruction step(cpu, 0x20, 0x00BCBEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:147 TAX
    case 0xC2BE5E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:148 STX @LOCAL05
    case 0xC2BE5F: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:149 LDA @LOCAL08
    case 0xC2BE61: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:150 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BE63: {
        Instruction step(cpu, 0x20, 0x00EF1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:151 STA @VIRTUAL02
    case 0xC2BE66: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:152 LDX @LOCAL05
    case 0xC2BE68: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:153 TXA
    case 0xC2BE6A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:154 CLC
    case 0xC2BE6B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:155 ADC @VIRTUAL02
    case 0xC2BE6C: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:156 CMP #$0020
    case 0xC2BE6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:156 CMP #$0020
    // Overlapping static entry reached from 0xC2BE6E.
    case 0xC2BE70: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/call_for_help_common.asm:157 BGTL @UNKNOWN21
    case 0xC2BE71: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/call_for_help_common.asm:157 BGTL @UNKNOWN21
    case 0xC2BE73: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/call_for_help_common.asm:157 BGTL @UNKNOWN21
    case 0xC2BE75: {
        Instruction step(cpu, 0x4C, 0x00BFA3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:158 LDA #$0080
    case 0xC2BE78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:158 LDA #$0080
    // Overlapping static entry reached from 0xC2BE78.
    case 0xC2BE7A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:159 STA @LOCAL05
    case 0xC2BE7B: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:160 STA @LOCAL04
    case 0xC2BE7D: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:161 STA @VIRTUAL04
    case 0xC2BE7F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:162 LDY @VIRTUAL04
    case 0xC2BE81: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:163 STY @LOCAL03
    case 0xC2BE83: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:164 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2BE85: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Eu : 0x00A41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:164 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2BE85.
    case 0xC2BE87: {
        Instruction step(cpu, 0xA4, 0x000086u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:165 STX @LOCAL02
    case 0xC2BE88: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:165 STX @LOCAL02
    // Overlapping static entry reached from 0xC2BE87.
    case 0xC2BE89: {
        Instruction step(cpu, 0x14, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:166 LDA #$0008
    case 0xC2BE8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:166 LDA #$0008
    // Overlapping static entry reached from 0xC2BE89.
    case 0xC2BE8B: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:166 LDA #$0008
    // Overlapping static entry reached from 0xC2BE8A.
    case 0xC2BE8C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:167 STA @LOCAL09
    case 0xC2BE8D: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:168 BRA @UNKNOWN16
    case 0xC2BE8F: {
        Instruction step(cpu, 0x80, 0x000077u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:170 LDA a:battler::consciousness,X
    case 0xC2BE91: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:171 AND #$00FF
    case 0xC2BE94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:171 AND #$00FF
    // Overlapping static entry reached from 0xC2BE94.
    case 0xC2BE96: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:172 BEQ @UNKNOWN15
    case 0xC2BE97: {
        Instruction step(cpu, 0xF0, 0x000065u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:173 LDA a:battler::sprite,X
    case 0xC2BE99: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:174 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BE9C: {
        Instruction step(cpu, 0x20, 0x00EF1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/battle/call_for_help_common.asm:175 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BE9F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/battle/call_for_help_common.asm:175 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BEA0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/battle/call_for_help_common.asm:175 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC2BEA1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:176 LSR
    case 0xC2BEA2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:177 STA @VIRTUAL02
    case 0xC2BEA3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:178 STA @LOCAL01
    case 0xC2BEA5: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:179 LDX @LOCAL02
    case 0xC2BEA7: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:180 LDA a:battler::row,X
    case 0xC2BEA9: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:181 AND #$00FF
    case 0xC2BEAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:181 AND #$00FF
    // Overlapping static entry reached from 0xC2BEAC.
    case 0xC2BEAE: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:182 CMP @LOCAL06
    case 0xC2BEAF: {
        Instruction step(cpu, 0xC5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:183 BNE @UNKNOWN12
    case 0xC2BEB1: {
        Instruction step(cpu, 0xD0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:184 LDA a:battler::sprite_x,X
    case 0xC2BEB3: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:185 AND #$00FF
    case 0xC2BEB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:185 AND #$00FF
    // Overlapping static entry reached from 0xC2BEB6.
    case 0xC2BEB8: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:186 SEC
    case 0xC2BEB9: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:187 SBC @VIRTUAL02
    case 0xC2BEBA: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:188 LDY @LOCAL03
    case 0xC2BEBC: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:189 STY @VIRTUAL02
    case 0xC2BEBE: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:190 CMP @VIRTUAL02
    case 0xC2BEC0: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:191 BCS @UNKNOWN11
    case 0xC2BEC2: {
        Instruction step(cpu, 0xB0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:192 TAY
    case 0xC2BEC4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:193 STY @LOCAL03
    case 0xC2BEC5: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:195 LDA @LOCAL01
    case 0xC2BEC7: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:196 STA @VIRTUAL02
    case 0xC2BEC9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:197 LDA a:battler::sprite_x,X
    case 0xC2BECB: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:198 AND #$00FF
    case 0xC2BECE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:198 AND #$00FF
    // Overlapping static entry reached from 0xC2BECE.
    case 0xC2BED0: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:199 CLC
    case 0xC2BED1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:200 ADC @VIRTUAL02
    case 0xC2BED2: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:201 CMP @VIRTUAL04
    case 0xC2BED4: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/call_for_help_common.asm:202 BLTEQ @UNKNOWN15
    case 0xC2BED6: {
        Instruction step(cpu, 0x90, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/call_for_help_common.asm:202 BLTEQ @UNKNOWN15
    case 0xC2BED8: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:203 STA @VIRTUAL04
    case 0xC2BEDA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:204 BRA @UNKNOWN15
    case 0xC2BEDC: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:206 LDA a:battler::sprite_x,X
    case 0xC2BEDE: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:207 AND #$00FF
    case 0xC2BEE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:207 AND #$00FF
    // Overlapping static entry reached from 0xC2BEE1.
    case 0xC2BEE3: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:208 SEC
    case 0xC2BEE4: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:209 SBC @VIRTUAL02
    case 0xC2BEE5: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:210 CMP @LOCAL04
    case 0xC2BEE7: {
        Instruction step(cpu, 0xC5, 0x000018u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:211 BCS @UNKNOWN13
    case 0xC2BEE9: {
        Instruction step(cpu, 0xB0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:212 STA @LOCAL04
    case 0xC2BEEB: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:214 LDA a:battler::sprite_x,X
    case 0xC2BEED: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:215 AND #$00FF
    case 0xC2BEF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:215 AND #$00FF
    // Overlapping static entry reached from 0xC2BF4A.
    case 0xC2BEF1: {
        Instruction step(cpu, 0xFF, 0x651800u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:215 AND #$00FF
    // Overlapping static entry reached from 0xC2BEF0.
    case 0xC2BEF2: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:216 CLC
    case 0xC2BEF3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:217 ADC @VIRTUAL02
    case 0xC2BEF4: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:217 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC2BEF1.
    case 0xC2BEF5: {
        Instruction step(cpu, 0x02, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:218 CMP @LOCAL05
    case 0xC2BEF6: {
        Instruction step(cpu, 0xC5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/call_for_help_common.asm:219 BLTEQ @UNKNOWN15
    case 0xC2BEF8: {
        Instruction step(cpu, 0x90, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/call_for_help_common.asm:219 BLTEQ @UNKNOWN15
    case 0xC2BEFA: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:220 STA @LOCAL05
    case 0xC2BEFC: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:222 TXA
    case 0xC2BEFE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:223 CLC
    case 0xC2BEFF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:224 ADC #.SIZEOF(battler)
    case 0xC2BF00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:224 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BF00.
    case 0xC2BF02: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:225 TAX
    case 0xC2BF03: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:226 STX @LOCAL02
    case 0xC2BF04: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:227 INC @LOCAL09
    case 0xC2BF06: {
        Instruction step(cpu, 0xE6, 0x000022u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:229 LDA @LOCAL09
    case 0xC2BF08: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:230 CMP #$0020
    case 0xC2BF0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:230 CMP #$0020
    // Overlapping static entry reached from 0xC2BF0A.
    case 0xC2BF0C: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/call_for_help_common.asm:231 BCCL @UNKNOWN10
    case 0xC2BF0D: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/call_for_help_common.asm:231 BCCL @UNKNOWN10
    case 0xC2BF0F: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/call_for_help_common.asm:231 BCCL @UNKNOWN10
    case 0xC2BF11: {
        Instruction step(cpu, 0x4C, 0x00BE91u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:232 LDA @VIRTUAL04
    case 0xC2BF14: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:233 SEC
    case 0xC2BF16: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:234 SBC #$0080
    case 0xC2BF17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:234 SBC #$0080
    // Overlapping static entry reached from 0xC2BF17.
    case 0xC2BF19: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:235 PHA
    case 0xC2BF1A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:236 LDY @LOCAL03
    case 0xC2BF1B: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:237 STY @VIRTUAL02
    case 0xC2BF1D: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:238 LDA #$0080
    case 0xC2BF1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:238 LDA #$0080
    // Overlapping static entry reached from 0xC2BF1F.
    case 0xC2BF21: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:239 SEC
    case 0xC2BF22: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:240 SBC @VIRTUAL02
    case 0xC2BF23: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:241 PLX
    case 0xC2BF25: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:242 STX @VIRTUAL02
    case 0xC2BF26: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:243 CMP @VIRTUAL02
    case 0xC2BF28: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:244 BCS @UNKNOWN18
    case 0xC2BF2A: {
        Instruction step(cpu, 0xB0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:245 CPY @LOCAL07
    case 0xC2BF2C: {
        Instruction step(cpu, 0xC4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/call_for_help_common.asm:246 BLTEQ @UNKNOWN19
    case 0xC2BF2E: {
        Instruction step(cpu, 0x90, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/call_for_help_common.asm:246 BLTEQ @UNKNOWN19
    case 0xC2BF30: {
        Instruction step(cpu, 0xF0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:247 LDA @LOCAL07
    case 0xC2BF32: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:248 LSR
    case 0xC2BF34: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:249 STA @VIRTUAL02
    case 0xC2BF35: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:250 TYA
    case 0xC2BF37: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:251 SEC
    case 0xC2BF38: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:252 SBC @VIRTUAL02
    case 0xC2BF39: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:253 TAY
    case 0xC2BF3B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:254 STY @LOCAL0A
    case 0xC2BF3C: {
        Instruction step(cpu, 0x84, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:255 JMP @UNKNOWN25
    case 0xC2BF3E: {
        Instruction step(cpu, 0x4C, 0x00C01Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:258 LDA @VIRTUAL04
    case 0xC2BF41: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:259 CLC
    case 0xC2BF43: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:260 ADC @LOCAL07
    case 0xC2BF44: {
        Instruction step(cpu, 0x65, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:261 CMP #$0100
    case 0xC2BF46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:261 CMP #$0100
    // Overlapping static entry reached from 0xC2BF46.
    case 0xC2BF48: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:262 BCS @UNKNOWN19
    case 0xC2BF49: {
        Instruction step(cpu, 0xB0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:262 BCS @UNKNOWN19
    // Overlapping static entry reached from 0xC2BF48.
    case 0xC2BF4A: {
        Instruction step(cpu, 0x10, 0x0000A5u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:263 LDA @LOCAL07
    case 0xC2BF4B: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:263 LDA @LOCAL07
    // Overlapping static entry reached from 0xC2BF4A.
    case 0xC2BF4C: {
        Instruction step(cpu, 0x1E, 0x00854Au, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:264 LSR
    case 0xC2BF4D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:265 STA @VIRTUAL02
    case 0xC2BF4E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:265 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2BF4C.
    case 0xC2BF4F: {
        Instruction step(cpu, 0x02, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:266 LDA @VIRTUAL04
    case 0xC2BF50: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:267 CLC
    case 0xC2BF52: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:268 ADC @VIRTUAL02
    case 0xC2BF53: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:269 TAY
    case 0xC2BF55: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:270 STY @LOCAL0A
    case 0xC2BF56: {
        Instruction step(cpu, 0x84, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:271 JMP @UNKNOWN25
    case 0xC2BF58: {
        Instruction step(cpu, 0x4C, 0x00C01Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:273 LDA #$0001
    case 0xC2BF5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:273 LDA #$0001
    // Overlapping static entry reached from 0xC2BF5B.
    case 0xC2BF5D: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:274 SEC
    case 0xC2BF5E: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:275 SBC @LOCAL06
    case 0xC2BF5F: {
        Instruction step(cpu, 0xE5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:276 STA @LOCAL06
    case 0xC2BF61: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:277 LDA @LOCAL05
    case 0xC2BF63: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:278 SEC
    case 0xC2BF65: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:279 SBC #$0080
    case 0xC2BF66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:279 SBC #$0080
    // Overlapping static entry reached from 0xC2BF66.
    case 0xC2BF68: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:280 STA @VIRTUAL02
    case 0xC2BF69: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:281 LDA #$0080
    case 0xC2BF6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:281 LDA #$0080
    // Overlapping static entry reached from 0xC2BF6B.
    case 0xC2BF6D: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:282 SEC
    case 0xC2BF6E: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:283 SBC @LOCAL04
    case 0xC2BF6F: {
        Instruction step(cpu, 0xE5, 0x000018u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:284 CMP @VIRTUAL02
    case 0xC2BF71: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:285 BCS @UNKNOWN20
    case 0xC2BF73: {
        Instruction step(cpu, 0xB0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:286 LDA @LOCAL04
    case 0xC2BF75: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:287 CMP @LOCAL07
    case 0xC2BF77: {
        Instruction step(cpu, 0xC5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/call_for_help_common.asm:288 BLTEQ @UNKNOWN21
    case 0xC2BF79: {
        Instruction step(cpu, 0x90, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/call_for_help_common.asm:288 BLTEQ @UNKNOWN21
    case 0xC2BF7B: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:289 LDA @LOCAL07
    case 0xC2BF7D: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:290 LSR
    case 0xC2BF7F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:291 STA @VIRTUAL02
    case 0xC2BF80: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:292 LDA @LOCAL04
    case 0xC2BF82: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:293 SEC
    case 0xC2BF84: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:294 SBC @VIRTUAL02
    case 0xC2BF85: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:295 TAY
    case 0xC2BF87: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:296 STY @LOCAL0A
    case 0xC2BF88: {
        Instruction step(cpu, 0x84, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:297 JMP @UNKNOWN25
    case 0xC2BF8A: {
        Instruction step(cpu, 0x4C, 0x00C01Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:299 LDA @LOCAL05
    case 0xC2BF8D: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:300 CLC
    case 0xC2BF8F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:301 ADC @LOCAL07
    case 0xC2BF90: {
        Instruction step(cpu, 0x65, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:302 CMP #$0100
    case 0xC2BF92: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:302 CMP #$0100
    // Overlapping static entry reached from 0xC2BF92.
    case 0xC2BF94: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:303 BCS @UNKNOWN21
    case 0xC2BF95: {
        Instruction step(cpu, 0xB0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:303 BCS @UNKNOWN21
    // Overlapping static entry reached from 0xC2BF94.
    case 0xC2BF96: {
        Instruction step(cpu, 0x0C, 0x001EA5u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:304 LDA @LOCAL07
    case 0xC2BF97: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:305 LSR
    case 0xC2BF99: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:306 CLC
    case 0xC2BF9A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:307 ADC @LOCAL05
    case 0xC2BF9B: {
        Instruction step(cpu, 0x65, 0x00001Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:308 TAY
    case 0xC2BF9D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:309 STY @LOCAL0A
    case 0xC2BF9E: {
        Instruction step(cpu, 0x84, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:310 JMP @UNKNOWN25
    case 0xC2BFA0: {
        Instruction step(cpu, 0x4C, 0x00C01Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:312 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2BFA3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Eu : 0x00A41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:312 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2BFA3.
    case 0xC2BFA5: {
        Instruction step(cpu, 0xA4, 0x000086u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:313 STX @LOCAL01
    case 0xC2BFA6: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:313 STX @LOCAL01
    // Overlapping static entry reached from 0xC2BFA5.
    case 0xC2BFA7: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:314 LDA #$0008
    case 0xC2BFA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:314 LDA #$0008
    // Overlapping static entry reached from 0xC2BFA7.
    case 0xC2BFA9: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:314 LDA #$0008
    // Overlapping static entry reached from 0xC2BFA8.
    case 0xC2BFAA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:315 STA @VIRTUAL02
    case 0xC2BFAB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:316 BRA @UNKNOWN24
    case 0xC2BFAD: {
        Instruction step(cpu, 0x80, 0x000063u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:318 TXA
    case 0xC2BFAF: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:319 CLC
    case 0xC2BFB0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:320 ADC #battler::consciousness
    case 0xC2BFB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:320 ADC #battler::consciousness
    // Overlapping static entry reached from 0xC2BFB1.
    case 0xC2BFB3: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:321 TAY
    case 0xC2BFB4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:322 STY @LOCAL02
    case 0xC2BFB5: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:323 LDA __BSS_START__,Y
    case 0xC2BFB7: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:324 AND #$00FF
    case 0xC2BFBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:324 AND #$00FF
    // Overlapping static entry reached from 0xC2BFBA.
    case 0xC2BFBC: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:325 CMP #$0001
    case 0xC2BFBD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:325 CMP #$0001
    // Overlapping static entry reached from 0xC2BFBD.
    case 0xC2BFBF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:326 BNE @UNKNOWN23
    case 0xC2BFC0: {
        Instruction step(cpu, 0xD0, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:327 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2BFC2: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:328 AND #$00FF
    case 0xC2BFC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:328 AND #$00FF
    // Overlapping static entry reached from 0xC2BFC5.
    case 0xC2BFC7: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:329 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2BFC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:329 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2BFC8.
    case 0xC2BFCA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:330 BNE @UNKNOWN23
    case 0xC2BFCB: {
        Instruction step(cpu, 0xD0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:331 LDA @LOCAL08
    case 0xC2BFCD: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:332 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BFCF: {
        Instruction step(cpu, 0x20, 0x00EF1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:333 STA @VIRTUAL04
    case 0xC2BFD2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:334 LDX @LOCAL01
    case 0xC2BFD4: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:335 LDA a:battler::sprite,X
    case 0xC2BFD6: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:336 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2BFD9: {
        Instruction step(cpu, 0x20, 0x00EF1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:337 PHA
    case 0xC2BFDC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:338 LDA @VIRTUAL04
    case 0xC2BFDD: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:339 PLY
    case 0xC2BFDF: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:340 STY @VIRTUAL04
    case 0xC2BFE0: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:341 CMP @VIRTUAL04
    case 0xC2BFE2: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:342 BNE @UNKNOWN23
    case 0xC2BFE4: {
        Instruction step(cpu, 0xD0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:343 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BFE6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:344 LDA #$0000
    case 0xC2BFE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00A400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:345 LDY @LOCAL02 ;battler::consciousness
    case 0xC2BFEA: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:345 LDY @LOCAL02 ;battler::consciousness
    // Overlapping static entry reached from 0xC2BFE8.
    case 0xC2BFEB: {
        Instruction step(cpu, 0x14, 0x000099u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:346 STA __BSS_START__,Y
    case 0xC2BFEC: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:346 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2BFEB.
    case 0xC2BFED: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:347 LDX @LOCAL01
    case 0xC2BFEF: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:348 REP #PROC_FLAGS::ACCUM8
    case 0xC2BFF1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:349 LDA a:battler::sprite_x,X
    case 0xC2BFF3: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:350 AND #$00FF
    case 0xC2BFF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:350 AND #$00FF
    // Overlapping static entry reached from 0xC2BFF6.
    case 0xC2BFF8: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:351 TAY
    case 0xC2BFF9: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:352 STY @LOCAL0A
    case 0xC2BFFA: {
        Instruction step(cpu, 0x84, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:353 LDA a:battler::row,X
    case 0xC2BFFC: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:354 AND #$00FF
    case 0xC2BFFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:354 AND #$00FF
    // Overlapping static entry reached from 0xC2BFFF.
    case 0xC2C001: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:355 STA @LOCAL06
    case 0xC2C002: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:356 BRA @UNKNOWN25
    case 0xC2C004: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:358 LDX @LOCAL01
    case 0xC2C006: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:359 TXA
    case 0xC2C008: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:360 CLC
    case 0xC2C009: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:361 ADC #.SIZEOF(battler)
    case 0xC2C00A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:361 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2C00A.
    case 0xC2C00C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:362 TAX
    case 0xC2C00D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:363 STX @LOCAL01
    case 0xC2C00E: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:364 INC @VIRTUAL02
    case 0xC2C010: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:366 LDA @VIRTUAL02
    case 0xC2C012: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:367 CMP #BATTLER_COUNT
    case 0xC2C014: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:367 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2C014.
    case 0xC2C016: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:368 BCC @UNKNOWN22
    case 0xC2C017: {
        Instruction step(cpu, 0x90, 0x000096u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:369 JMP @UNKNOWN2
    case 0xC2C019: {
        Instruction step(cpu, 0x4C, 0x00BD71u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:371 JSR UNKNOWN_C2BD13
    case 0xC2C01C: {
        Instruction step(cpu, 0x20, 0x00BCBEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:372 TAX
    case 0xC2C01F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:373 STX @LOCAL09
    case 0xC2C020: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:374 LDA @LOCAL08
    case 0xC2C022: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:375 JSR GET_BATTLE_SPRITE_WIDTH
    case 0xC2C024: {
        Instruction step(cpu, 0x20, 0x00EF1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:376 STA @VIRTUAL02
    case 0xC2C027: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:377 LDX @LOCAL09
    case 0xC2C029: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:378 TXA
    case 0xC2C02B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:379 CLC
    case 0xC2C02C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:380 ADC @VIRTUAL02
    case 0xC2C02D: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:381 CMP #$0020
    case 0xC2C02F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:381 CMP #$0020
    // Overlapping static entry reached from 0xC2C02F.
    case 0xC2C031: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/call_for_help_common.asm:382 BGTL @UNKNOWN2
    case 0xC2C032: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/call_for_help_common.asm:382 BGTL @UNKNOWN2
    case 0xC2C034: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/call_for_help_common.asm:382 BGTL @UNKNOWN2
    case 0xC2C036: {
        Instruction step(cpu, 0x4C, 0x00BD71u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:383 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC2C039: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00A41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:383 LDA #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC2C039.
    case 0xC2C03B: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:384 STA @LOCAL09
    case 0xC2C03C: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:384 STA @LOCAL09
    // Overlapping static entry reached from 0xC2C03B.
    case 0xC2C03D: {
        Instruction step(cpu, 0x22, 0x0008A2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:385 LDX #$0008
    case 0xC2C03E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:385 LDX #$0008
    // Overlapping static entry reached from 0xC2C03E.
    case 0xC2C040: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:386 STX @LOCAL08
    case 0xC2C041: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:387 BRA @UNKNOWN28
    case 0xC2C043: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:389 TAX
    case 0xC2C045: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:390 LDA a:battler::consciousness,X
    case 0xC2C046: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:391 AND #$00FF
    case 0xC2C049: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:391 AND #$00FF
    // Overlapping static entry reached from 0xC2C049.
    case 0xC2C04B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:392 BEQ @UNKNOWN29
    case 0xC2C04C: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:393 LDA @LOCAL09
    case 0xC2C04E: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:394 CLC
    case 0xC2C050: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:395 ADC #.SIZEOF(battler)
    case 0xC2C051: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:395 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2C051.
    case 0xC2C053: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:396 STA @LOCAL09
    case 0xC2C054: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:397 LDX @LOCAL08
    case 0xC2C056: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:398 INX
    case 0xC2C058: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:399 STX @LOCAL08
    case 0xC2C059: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:401 CPX #$0020
    case 0xC2C05B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:401 CPX #$0020
    // Overlapping static entry reached from 0xC2C05B.
    case 0xC2C05D: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:402 BCC @UNKNOWN27
    case 0xC2C05E: {
        Instruction step(cpu, 0x90, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:404 LDA @LOCAL09
    case 0xC2C060: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:405 STA CURRENT_TARGET
    case 0xC2C062: {
        Instruction step(cpu, 0x8D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:406 LDX CURRENT_TARGET
    case 0xC2C065: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:407 LDA @LOCAL0B
    case 0xC2C068: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:408 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC2C06A: {
        Instruction step(cpu, 0x22, 0xC2B692u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:409 LDY @LOCAL0A
    case 0xC2C06E: {
        Instruction step(cpu, 0xA4, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:410 TYA
    case 0xC2C070: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:411 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C071: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:412 LDX CURRENT_TARGET
    case 0xC2C073: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:413 STA a:battler::sprite_x,X
    case 0xC2C076: {
        Instruction step(cpu, 0x9D, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:414 REP #PROC_FLAGS::ACCUM8
    case 0xC2C079: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:415 LDA @LOCAL06
    case 0xC2C07B: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:416 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C07D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:417 LDX CURRENT_TARGET
    case 0xC2C07F: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:418 STA a:battler::row,X
    case 0xC2C082: {
        Instruction step(cpu, 0x9D, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:419 LDX CURRENT_TARGET
    case 0xC2C085: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:419 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC24A54.
    case 0xC2C087: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:420 REP #PROC_FLAGS::ACCUM8
    case 0xC2C088: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:421 LDA a:battler::row,X
    case 0xC2C08A: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:422 AND #$00FF
    case 0xC2C08D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:422 AND #$00FF
    // Overlapping static entry reached from 0xC2C08D.
    case 0xC2C08F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:423 BEQ @UNKNOWN30
    case 0xC2C090: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:424 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C092: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:425 LDA #$0080
    case 0xC2C094: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x00AE80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:426 LDX CURRENT_TARGET
    case 0xC2C096: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:426 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2C094.
    case 0xC2C097: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:427 STA a:battler::sprite_y,X
    case 0xC2C099: {
        Instruction step(cpu, 0x9D, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:428 BRA @UNKNOWN31
    case 0xC2C09C: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:430 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C09E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:431 LDA #$0090
    case 0xC2C0A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000090u : 0x00AE90u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:432 LDX CURRENT_TARGET
    case 0xC2C0A2: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:432 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2C0A0.
    case 0xC2C0A3: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:433 STA a:battler::sprite_y,X
    case 0xC2C0A5: {
        Instruction step(cpu, 0x9D, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:435 REP #PROC_FLAGS::ACCUM8
    case 0xC2C0A8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:436 LDA @LOCAL0B
    case 0xC2C0AA: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:437 JSR UNKNOWN_C2F09F
    case 0xC2C0AC: {
        Instruction step(cpu, 0x20, 0x00EFBCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:438 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C0AF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:439 LDX CURRENT_TARGET
    case 0xC2C0B1: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:440 STA a:battler::vram_sprite_index,X
    case 0xC2C0B4: {
        Instruction step(cpu, 0x9D, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:441 LDA #$0001
    case 0xC2C0B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00AE01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:442 LDX CURRENT_TARGET
    case 0xC2C0B9: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:442 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2C0B7.
    case 0xC2C0BA: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:443 STA a:battler::has_taken_turn,X
    case 0xC2C0BC: {
        Instruction step(cpu, 0x9D, 0x00000Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:444 JSL FIX_TARGET_NAME
    case 0xC2C0BF: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:446 LDA @LOCAL0C
    case 0xC2C0C3: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:447 BEQ @UNKNOWN32
    case 0xC2C0C5: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C0C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000083u : 0x004683u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    // Overlapping static entry reached from 0xC2C0C7.
    case 0xC2C0C9: {
        Instruction step(cpu, 0x46, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C0CA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    // Overlapping static entry reached from 0xC2C0C9.
    case 0xC2C0CB: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C0CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    // Overlapping static entry reached from 0xC2C0CC.
    case 0xC2C0CE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C0CF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/call_for_help_common.asm:448 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TANEMAKI_HAETA
    case 0xC2C0D1: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/call_for_help_common.asm:449 BRA @UNKNOWN33
    case 0xC2C0D5: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C0D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00466Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    // Overlapping static entry reached from 0xC2C0D7.
    case 0xC2C0D9: {
        Instruction step(cpu, 0x46, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C0DA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    // Overlapping static entry reached from 0xC2C0D9.
    case 0xC2C0DB: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C0DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    // Overlapping static entry reached from 0xC2C0DC.
    case 0xC2C0DE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C0DF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/call_for_help_common.asm:451 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_NAKAMA_KITA
    case 0xC2C0E1: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/call_for_help_common.asm:453 END_C_FUNCTION
    case 0xC2C0E5: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/call_for_help_common.asm:453 END_C_FUNCTION
    case 0xC2C0E6: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
