// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/simple_screen_position_callback_offset.asm
bool resume_overworld_actionscript_simple_screen_position_callback_offset(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/simple_screen_position_callback_offset.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4624C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC4624E: {
        Instruction step(cpu, 0xAD, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:6 ASL
    case 0xC46251: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:7 TAX
    case 0xC46252: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:8 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46253: {
        Instruction step(cpu, 0xBD, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:9 SEC
    case 0xC46256: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:10 SBC BG1_X_POS
    case 0xC46257: {
        Instruction step(cpu, 0xED, 0x000031u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:11 CLC
    case 0xC4625A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:12 ADC ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4625B: {
        Instruction step(cpu, 0x7D, 0x000E54u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:13 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC4625E: {
        Instruction step(cpu, 0x9D, 0x000B0Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:14 LDA CURRENT_ENTITY_SLOT
    case 0xC46261: {
        Instruction step(cpu, 0xAD, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:15 ASL
    case 0xC46264: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:16 TAX
    case 0xC46265: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:17 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46266: {
        Instruction step(cpu, 0xBD, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:18 SEC
    case 0xC46269: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:19 SBC BG1_Y_POS
    case 0xC4626A: {
        Instruction step(cpu, 0xED, 0x000033u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:20 CLC
    case 0xC4626D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:21 ADC ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC4626E: {
        Instruction step(cpu, 0x7D, 0x000E90u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/simple_screen_position_callback_offset.asm:22 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC46271: {
        Instruction step(cpu, 0x9D, 0x000B48u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/simple_screen_position_callback_offset.asm:23 END_C_FUNCTION
    case 0xC46274: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
