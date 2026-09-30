// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/prepare_average_for_sprite_palettes.asm
bool resume_overworld_prepare_average_for_sprite_palettes(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC005F7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    case 0xC005F9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    case 0xC005FA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    case 0xC005FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC005FB.
    case 0xC005FD: {
        Instruction step(cpu, 0xFF, 0x01AF5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:7 END_STACK_VARS
    case 0xC005FE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    case 0xC005FF: {
        Instruction step(cpu, 0xAF, 0xEF6301u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    // Overlapping static entry reached from 0xC005FD.
    case 0xC00601: {
        Instruction step(cpu, 0x63, 0x0000EFu, 2u, AddressMode::StackRelative);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    case 0xC00603: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    case 0xC00605: {
        Instruction step(cpu, 0xAF, 0xEF6303u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:8 MOVE_INT f:MAP_PALETTE_PTR_TABLE+4, @VIRTUAL06
    case 0xC00609: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:9 LDY #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC0060B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000040u : 0x000240u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:9 LDY #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC0060B.
    case 0xC0060D: {
        Instruction step(cpu, 0x02, 0x000084u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:10 STY @LOCAL01
    case 0xC0060E: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00610: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00612: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00614: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00616: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:12 LDX #BPP4PALETTE_SIZE * 6
    case 0xC00618: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:12 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC00618.
    case 0xC0061A: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:13 TYA
    case 0xC0061B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:14 JSL MEMCPY16
    case 0xC0061C: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:15 LDY @LOCAL01
    case 0xC00620: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:16 TYA
    case 0xC00622: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:17 JSR GET_COLOUR_AVERAGE
    case 0xC00623: {
        Instruction step(cpu, 0x20, 0x0003A1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:17 JSR GET_COLOUR_AVERAGE
    // Overlapping static entry reached from 0xC0069D.
    case 0xC00624: {
        Instruction step(cpu, 0xA1, 0x000003u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:18 LDA COLOUR_AVERAGE_RED
    case 0xC00626: {
        Instruction step(cpu, 0xAD, 0x004756u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:19 STA SAVED_COLOUR_AVERAGE_RED
    case 0xC00629: {
        Instruction step(cpu, 0x8D, 0x00475Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:20 LDA COLOUR_AVERAGE_GREEN
    case 0xC0062C: {
        Instruction step(cpu, 0xAD, 0x004758u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:21 STA SAVED_COLOUR_AVERAGE_GREEN
    case 0xC0062F: {
        Instruction step(cpu, 0x8D, 0x00475Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:22 LDA COLOUR_AVERAGE_BLUE
    case 0xC00632: {
        Instruction step(cpu, 0xAD, 0x00475Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_average_for_sprite_palettes.asm:23 STA SAVED_COLOUR_AVERAGE_BLUE
    case 0xC00635: {
        Instruction step(cpu, 0x8D, 0x004760u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:24 END_C_FUNCTION
    case 0xC00638: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/prepare_average_for_sprite_palettes.asm:24 END_C_FUNCTION
    case 0xC00639: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
