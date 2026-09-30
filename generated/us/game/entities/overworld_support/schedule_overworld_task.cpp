// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/schedule_overworld_task.asm
bool resume_overworld_schedule_overworld_task(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/schedule_overworld_task.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0DBE6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBE8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBE9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBEA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DBEB.
    case 0xC0DBED: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBEE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBEF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:11 TAY
    case 0xC0DBF0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBF1: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBF3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBF5: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBF7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:13 LDA #.LOWORD(OVERWORLD_TASKS)
    case 0xC0DBF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x009E3Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:13 LDA #.LOWORD(OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC0DBF9.
    case 0xC0DBFB: {
        Instruction step(cpu, 0x9E, 0x001085u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:14 STA @LOCAL01
    case 0xC0DBFC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:15 LDX #0
    case 0xC0DBFE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:15 LDX #0
    // Overlapping static entry reached from 0xC0DBFE.
    case 0xC0DC00: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:16 STX @LOCAL00
    case 0xC0DC01: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:17 BRA @UNKNOWN1
    case 0xC0DC03: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:19 TAX
    case 0xC0DC05: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:20 LDA a:overworld_task::frames_left,X
    case 0xC0DC06: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:21 BEQ @UNKNOWN2
    case 0xC0DC09: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:22 LDA @LOCAL01
    case 0xC0DC0B: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:23 CLC
    case 0xC0DC0D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:24 ADC #.SIZEOF(overworld_task)
    case 0xC0DC0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:24 ADC #.SIZEOF(overworld_task)
    // Overlapping static entry reached from 0xC0DC0E.
    case 0xC0DC10: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:25 STA @LOCAL01
    case 0xC0DC11: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:26 LDX @LOCAL00
    case 0xC0DC13: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:27 INX
    case 0xC0DC15: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:28 STX @LOCAL00
    case 0xC0DC16: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:30 CPX #4
    case 0xC0DC18: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:30 CPX #4
    // Overlapping static entry reached from 0xC0DC18.
    case 0xC0DC1A: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:31 BCC @UNKNOWN0
    case 0xC0DC1B: {
        Instruction step(cpu, 0x90, 0x0000E8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:33 LDA @LOCAL01
    case 0xC0DC1D: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:34 TAX
    case 0xC0DC1F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:35 TYA
    case 0xC0DC20: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:36 STA a:overworld_task::frames_left,X
    case 0xC0DC21: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:37 LDA @LOCAL01
    case 0xC0DC24: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:38 TAY
    case 0xC0DC26: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:39 INY ;overworld_task::function
    case 0xC0DC27: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:40 INY
    case 0xC0DC28: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DC29: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DC2B: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DC2E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DC30: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:42 LDX @LOCAL00
    case 0xC0DC33: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/schedule_overworld_task.asm:43 TXA
    case 0xC0DC35: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/schedule_overworld_task.asm:44 END_C_FUNCTION
    case 0xC0DC36: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/schedule_overworld_task.asm:44 END_C_FUNCTION
    case 0xC0DC37: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
