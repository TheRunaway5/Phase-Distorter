// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/adjust_single_colour.asm
bool resume_overworld_adjust_single_colour(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/adjust_single_colour.asm:8 BEGIN_C_FUNCTION
    case 0xC00444: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC00446: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC00447: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC00448: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC00449: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC00449.
    case 0xC0044B: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC0044C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/adjust_single_colour.asm:14 END_STACK_VARS
    case 0xC0044D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:15 STX @VIRTUAL02
    case 0xC0044E: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:15 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC0044B.
    case 0xC0044F: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:16 STA @LOCAL00
    case 0xC00450: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:17 CMP @VIRTUAL02
    case 0xC00452: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:18 BNE @UNKNOWN0 ;channel 1 != channel 2
    case 0xC00454: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:19 LDA @VIRTUAL02
    case 0xC00456: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:20 BRA @UNKNOWN4
    case 0xC00458: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:22 CMP @VIRTUAL02
    case 0xC0045A: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/adjust_single_colour.asm:23 BLTEQ @UNKNOWN2 ;channel1 <= channel 2
    case 0xC0045C: {
        Instruction step(cpu, 0x90, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/adjust_single_colour.asm:23 BLTEQ @UNKNOWN2 ;channel1 <= channel 2
    case 0xC0045E: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:24 SEC
    case 0xC00460: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:25 SBC @VIRTUAL02
    case 0xC00461: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:26 CMP #6
    case 0xC00463: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:26 CMP #6
    // Overlapping static entry reached from 0xC00463.
    case 0xC00465: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/adjust_single_colour.asm:27 BLTEQ @UNKNOWN1 ;channel1 - channel2 <= 6
    case 0xC00466: {
        Instruction step(cpu, 0x90, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/adjust_single_colour.asm:27 BLTEQ @UNKNOWN1 ;channel1 - channel2 <= 6
    case 0xC00468: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:28 LDA @LOCAL00
    case 0xC0046A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:29 SEC
    case 0xC0046C: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:30 SBC #6
    case 0xC0046D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:30 SBC #6
    // Overlapping static entry reached from 0xC0046D.
    case 0xC0046F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:31 STA @VIRTUAL02
    case 0xC00470: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:33 LDA @VIRTUAL02
    case 0xC00472: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:34 BRA @UNKNOWN4
    case 0xC00474: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:36 STA @VIRTUAL04
    case 0xC00476: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:37 LDA @VIRTUAL02
    case 0xC00478: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:38 SEC
    case 0xC0047A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:39 SBC @VIRTUAL04
    case 0xC0047B: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:40 CMP #6
    case 0xC0047D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:40 CMP #6
    // Overlapping static entry reached from 0xC0047D.
    case 0xC0047F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/adjust_single_colour.asm:41 BLTEQ @UNKNOWN3 ;channel2 - channel1 <= 6
    case 0xC00480: {
        Instruction step(cpu, 0x90, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/adjust_single_colour.asm:41 BLTEQ @UNKNOWN3 ;channel2 - channel1 <= 6
    case 0xC00482: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:42 LDA @LOCAL00
    case 0xC00484: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:43 CLC
    case 0xC00486: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:44 ADC #6
    case 0xC00487: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:44 ADC #6
    // Overlapping static entry reached from 0xC00487.
    case 0xC00489: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:45 STA @VIRTUAL02
    case 0xC0048A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_single_colour.asm:47 LDA @VIRTUAL02
    case 0xC0048C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/adjust_single_colour.asm:49 END_C_FUNCTION
    case 0xC0048E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/adjust_single_colour.asm:49 END_C_FUNCTION
    case 0xC0048F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
