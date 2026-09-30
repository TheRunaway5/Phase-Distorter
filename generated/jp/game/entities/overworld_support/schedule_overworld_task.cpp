// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/schedule_overworld_task.asm
bool resume_overworld_schedule_overworld_task(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/schedule_overworld_task.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0DBAE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBB0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBB1: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBB2: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DBB3.
    case 0xC0DBB5: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBB6: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBB7: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:11 TAY
    case 0xC0DBB8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBB9: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBBB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBBD: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBBF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:13 LDA #.LOWORD(OVERWORLD_TASKS)
    case 0xC0DBC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000042u : 0x00A042u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:13 LDA #.LOWORD(OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC0DBC1.
    case 0xC0DBC3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000085u : 0x001085u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:14 STA @LOCAL01
    case 0xC0DBC4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:14 STA @LOCAL01
    // Overlapping static entry reached from 0xC0DBC3.
    case 0xC0DBC5: {
        Instruction step(cpu, 0x10, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:15 LDX #0
    case 0xC0DBC6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:15 LDX #0
    // Overlapping static entry reached from 0xC0DBC5.
    case 0xC0DBC7: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:15 LDX #0
    // Overlapping static entry reached from 0xC0DBC6.
    case 0xC0DBC8: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:16 STX @LOCAL00
    case 0xC0DBC9: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:17 BRA @UNKNOWN1
    case 0xC0DBCB: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:19 TAX
    case 0xC0DBCD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:20 LDA a:overworld_task::frames_left,X
    case 0xC0DBCE: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:21 BEQ @UNKNOWN2
    case 0xC0DBD1: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:22 LDA @LOCAL01
    case 0xC0DBD3: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:23 CLC
    case 0xC0DBD5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:24 ADC #.SIZEOF(overworld_task)
    case 0xC0DBD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:24 ADC #.SIZEOF(overworld_task)
    // Overlapping static entry reached from 0xC0DBD6.
    case 0xC0DBD8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:25 STA @LOCAL01
    case 0xC0DBD9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:26 LDX @LOCAL00
    case 0xC0DBDB: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:27 INX
    case 0xC0DBDD: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:28 STX @LOCAL00
    case 0xC0DBDE: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:30 CPX #4
    case 0xC0DBE0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:30 CPX #4
    // Overlapping static entry reached from 0xC0DBE0.
    case 0xC0DBE2: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:31 BCC @UNKNOWN0
    case 0xC0DBE3: {
        Instruction step(cpu, 0x90, 0x0000E8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:33 LDA @LOCAL01
    case 0xC0DBE5: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:34 TAX
    case 0xC0DBE7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:35 TYA
    case 0xC0DBE8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:36 STA a:overworld_task::frames_left,X
    case 0xC0DBE9: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:37 LDA @LOCAL01
    case 0xC0DBEC: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:38 TAY
    case 0xC0DBEE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:39 INY ;overworld_task::function
    case 0xC0DBEF: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:40 INY
    case 0xC0DBF0: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DBF1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DBF3: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DBF6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DBF8: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:42 LDX @LOCAL00
    case 0xC0DBFB: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:43 TXA
    case 0xC0DBFD: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/schedule_overworld_task.asm:44 END_C_FUNCTION
    case 0xC0DBFE: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/schedule_overworld_task.asm:44 END_C_FUNCTION
    case 0xC0DBFF: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
