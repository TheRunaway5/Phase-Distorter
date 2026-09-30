// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/display_shop_menu.asm
bool resume_text_ccs_display_shop_menu(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/display_shop_menu.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14EB5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC14EB7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC14EB8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC14EB9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC14EBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC14EBA.
    case 0xC14EBC: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC14EBD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC14EBE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:15 STX @LOCAL01
    case 0xC14EBF: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:15 STX @LOCAL01
    // Overlapping static entry reached from 0xC14EBC.
    case 0xC14EC0: {
        Instruction step(cpu, 0x12, 0x000022u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:16 JSL CLEAR_INSTANT_PRINTING
    case 0xC14EC1: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:16 JSL CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC14EC0.
    case 0xC14EC2: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:16 JSL CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC14EC2.
    case 0xC14EC3: {
        Instruction step(cpu, 0xE4, 0x0000C3u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/ccs/display_shop_menu.asm:17 CREATE_WINDOW_NEAR CURRENT_FOCUS_WINDOW
    case 0xC14EC5: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/ccs/display_shop_menu.asm:17 CREATE_WINDOW_NEAR CURRENT_FOCUS_WINDOW
    case 0xC14EC8: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:18 JSL WINDOW_TICK
    case 0xC14ECB: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:19 LDX @LOCAL01
    case 0xC14ECF: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:21 BEQ @UNKNOWN0
    case 0xC14ED1: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:22 TXA
    case 0xC14ED3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:23 BRA @UNKNOWN1
    case 0xC14ED4: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:25 JSR GET_ARGUMENT_MEMORY
    case 0xC14ED6: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:26 LDA @VIRTUAL06
    case 0xC14ED9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:28 JSR UNKNOWN_C19DB5
    case 0xC14EDB: {
        Instruction step(cpu, 0x20, 0x009DB5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/display_shop_menu.asm:29 STORE_INT1632 $06
    case 0xC14EDE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/display_shop_menu.asm:29 STORE_INT1632 $06
    case 0xC14EE0: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/display_shop_menu.asm:30 MOVE_INT $06, $0E
    case 0xC14EE2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/display_shop_menu.asm:30 MOVE_INT $06, $0E
    case 0xC14EE4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/display_shop_menu.asm:30 MOVE_INT $06, $0E
    case 0xC14EE6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/display_shop_menu.asm:30 MOVE_INT $06, $0E
    case 0xC14EE8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:31 JSR SET_WORKING_MEMORY
    case 0xC14EEA: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:33 LDA CURRENT_FOCUS_WINDOW
    case 0xC14EED: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:34 JSR SET_WINDOW_FOCUS
    case 0xC14EF0: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:39 LDA #NULL
    case 0xC14EF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:39 LDA #NULL
    // Overlapping static entry reached from 0xC14EF3.
    case 0xC14EF5: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:40 PLD
    case 0xC14EF6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/text/ccs/display_shop_menu.asm:41 RTS
    case 0xC14EF7: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
