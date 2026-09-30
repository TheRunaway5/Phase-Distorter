// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/process_overworld_tasks.asm
bool resume_overworld_process_overworld_tasks(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/process_overworld_tasks.asm:3 BEGIN_C_FUNCTION
    case 0xC0DC4E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    case 0xC0DC50: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    case 0xC0DC51: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    case 0xC0DC52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DC52.
    case 0xC0DC54: {
        Instruction step(cpu, 0xFF, 0x02AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/process_overworld_tasks.asm:6 END_STACK_VARS
    case 0xC0DC55: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:7 LDA FRAME_COUNTER
    case 0xC0DC56: {
        Instruction step(cpu, 0xAD, 0x000002u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:7 LDA FRAME_COUNTER
    // Overlapping static entry reached from 0xC0DC54.
    case 0xC0DC58: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:8 AND #$00FF
    case 0xC0DC59: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC0DC59.
    case 0xC0DC5B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:9 BNE @UNKNOWN0
    case 0xC0DC5C: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:10 LDA DAD_PHONE_TIMER
    case 0xC0DC5E: {
        Instruction step(cpu, 0xAD, 0x009E54u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:11 BEQ @UNKNOWN0
    case 0xC0DC61: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:12 DEC DAD_PHONE_TIMER
    case 0xC0DC63: {
        Instruction step(cpu, 0xCE, 0x009E54u, 3u, AddressMode::Absolute);
        step.decrement();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:14 LDA WINDOW_HEAD
    case 0xC0DC66: {
        Instruction step(cpu, 0xAD, 0x0088E0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:15 CMP #.LOWORD(-1)
    case 0xC0DC69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:15 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DC69.
    case 0xC0DC6B: {
        Instruction step(cpu, 0xFF, 0xAD56D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:16 BNE @UNKNOWN4
    case 0xC0DC6C: {
        Instruction step(cpu, 0xD0, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:17 LDA BATTLE_MODE_FLAG
    case 0xC0DC6E: {
        Instruction step(cpu, 0xAD, 0x009643u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:17 LDA BATTLE_MODE_FLAG
    // Overlapping static entry reached from 0xC0DC6B.
    case 0xC0DC6F: {
        Instruction step(cpu, 0x43, 0x000096u, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:18 BNE @UNKNOWN4
    case 0xC0DC71: {
        Instruction step(cpu, 0xD0, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:19 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0DC73: {
        Instruction step(cpu, 0xAD, 0x005D60u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:20 BNE @UNKNOWN4
    case 0xC0DC76: {
        Instruction step(cpu, 0xD0, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:21 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0DC78: {
        Instruction step(cpu, 0xAD, 0x004DBAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:22 BNE @UNKNOWN4
    case 0xC0DC7B: {
        Instruction step(cpu, 0xD0, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:23 LDY #.LOWORD(OVERWORLD_TASKS)
    case 0xC0DC7D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Cu : 0x009E3Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:23 LDY #.LOWORD(OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC0DC7D.
    case 0xC0DC7F: {
        Instruction step(cpu, 0x9E, 0x000E84u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:24 STY @LOCAL00
    case 0xC0DC80: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:25 LDA #0
    case 0xC0DC82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:25 LDA #0
    // Overlapping static entry reached from 0xC0DC82.
    case 0xC0DC84: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:26 STA @VIRTUAL02
    case 0xC0DC85: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:27 BRA @UNKNOWN3
    case 0xC0DC87: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:29 LDA a:overworld_task::frames_left,Y
    case 0xC0DC89: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:30 BEQ @UNKNOWN2
    case 0xC0DC8C: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:31 TYX
    case 0xC0DC8E: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:32 DEC
    case 0xC0DC8F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:33 STA a:overworld_task::frames_left,X
    case 0xC0DC90: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:34 BNE @UNKNOWN2
    case 0xC0DC93: {
        Instruction step(cpu, 0xD0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:35 INY ;overworld_task::function
    case 0xC0DC95: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:36 INY
    case 0xC0DC96: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/process_overworld_tasks.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0DC97: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/process_overworld_tasks.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0DC9A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/process_overworld_tasks.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0DC9C: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/process_overworld_tasks.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0DC9F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:38 PHA
    case 0xC0DCA1: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_overworld_tasks.asm:39 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC0DCA2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_overworld_tasks.asm:39 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC0DCA4: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_overworld_tasks.asm:39 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC0DCA7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_overworld_tasks.asm:39 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC0DCA9: {
        Instruction step(cpu, 0x8D, 0x0000BEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:40 PLA
    case 0xC0DCAC: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:41 JSL UNKNOWN_C09279
    case 0xC0DCAD: {
        Instruction step(cpu, 0x22, 0xC09279u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:43 LDY @LOCAL00
    case 0xC0DCB1: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:44 TYA
    case 0xC0DCB3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:45 CLC
    case 0xC0DCB4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:46 ADC #.SIZEOF(overworld_task)
    case 0xC0DCB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:46 ADC #.SIZEOF(overworld_task)
    // Overlapping static entry reached from 0xC0DCB5.
    case 0xC0DCB7: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:47 TAY
    case 0xC0DCB8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:48 STY @LOCAL00
    case 0xC0DCB9: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:49 INC @VIRTUAL02
    case 0xC0DCBB: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:51 LDA @VIRTUAL02
    case 0xC0DCBD: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:52 CMP #4
    case 0xC0DCBF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:52 CMP #4
    // Overlapping static entry reached from 0xC0DCBF.
    case 0xC0DCC1: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_overworld_tasks.asm:53 BCC @UNKNOWN1
    case 0xC0DCC2: {
        Instruction step(cpu, 0x90, 0x0000C5u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/process_overworld_tasks.asm:55 END_C_FUNCTION
    case 0xC0DCC4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/process_overworld_tasks.asm:55 END_C_FUNCTION
    case 0xC0DCC5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
