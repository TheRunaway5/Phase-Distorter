// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/simple_screen_position_callback.asm
bool resume_overworld_actionscript_simple_screen_position_callback(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/simple_screen_position_callback.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4622B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC4622D: {
        Instruction step(cpu, 0xAD, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback.asm:6 ASL
    case 0xC46230: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback.asm:7 TAX
    case 0xC46231: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback.asm:8 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46232: {
        Instruction step(cpu, 0xBD, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback.asm:9 SEC
    case 0xC46235: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback.asm:10 SBC BG1_X_POS
    case 0xC46236: {
        Instruction step(cpu, 0xED, 0x000031u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback.asm:11 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC46239: {
        Instruction step(cpu, 0x9D, 0x000B0Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xC4623C: {
        Instruction step(cpu, 0xAD, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback.asm:13 ASL
    case 0xC4623F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback.asm:14 TAX
    case 0xC46240: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback.asm:15 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46241: {
        Instruction step(cpu, 0xBD, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback.asm:16 SEC
    case 0xC46244: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback.asm:17 SBC BG1_Y_POS
    case 0xC46245: {
        Instruction step(cpu, 0xED, 0x000033u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback.asm:18 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC46248: {
        Instruction step(cpu, 0x9D, 0x000B48u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/simple_screen_position_callback.asm:19 END_C_FUNCTION
    case 0xC4624B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
