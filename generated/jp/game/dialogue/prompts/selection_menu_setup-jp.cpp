// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/selection_menu_setup-jp.asm
bool resume_text_selection_menu_setup_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/selection_menu_setup-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DBB5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/selection_menu_setup-jp.asm:11 END_STACK_VARS
    case 0xC1DBB7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/selection_menu_setup-jp.asm:11 END_STACK_VARS
    case 0xC1DBB8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/selection_menu_setup-jp.asm:11 END_STACK_VARS
    case 0xC1DBB9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/selection_menu_setup-jp.asm:11 END_STACK_VARS
    case 0xC1DBBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/selection_menu_setup-jp.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DBBA.
    case 0xC1DBBC: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/selection_menu_setup-jp.asm:11 END_STACK_VARS
    case 0xC1DBBD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/selection_menu_setup-jp.asm:11 END_STACK_VARS
    case 0xC1DBBE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/selection_menu_setup-jp.asm:12 STA @LOCAL02
    case 0xC1DBBF: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu_setup-jp.asm:12 STA @LOCAL02
    // Overlapping static entry reached from 0xC1DBBC.
    case 0xC1DBC0: {
        Instruction step(cpu, 0x16, 0x0000A5u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup-jp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1DBC1: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup-jp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    // Overlapping static entry reached from 0xC1DBC0.
    case 0xC1DBC2: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup-jp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1DBC3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1DBC5: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:13 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1DBC7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup-jp.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC1DBC9: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup-jp.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC1DBCB: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC1DBCD: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC1DBCF: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup-jp.asm:15 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1DBD1: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup-jp.asm:15 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1DBD3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:15 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1DBD5: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:15 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1DBD7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DBD9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DBDB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DBDD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DBDF: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu_setup-jp.asm:17 LDA @LOCAL02
    case 0xC1DBE1: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu_setup-jp.asm:18 JSR UNKNOWN_C1153B
    case 0xC1DBE3: {
        Instruction step(cpu, 0x20, 0x001B27u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/selection_menu_setup-jp.asm:19 END_C_FUNCTION
    case 0xC1DBE6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/selection_menu_setup-jp.asm:19 END_C_FUNCTION
    case 0xC1DBE7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
