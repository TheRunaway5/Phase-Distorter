// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/centre_screen_on_entity_callback.asm
bool resume_overworld_actionscript_centre_screen_on_entity_callback(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/centre_screen_on_entity_callback.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46275: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC46277: {
        Instruction step(cpu, 0xAD, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:6 ASL
    case 0xC4627A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:7 TAY
    case 0xC4627B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:8 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC4627C: {
        Instruction step(cpu, 0xB9, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:9 TAX
    case 0xC4627F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:10 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC46280: {
        Instruction step(cpu, 0xB9, 0x000B84u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/centre_screen_on_entity_callback.asm:11 JSL CENTER_SCREEN
    case 0xC46283: {
        Instruction step(cpu, 0x22, 0xC04295u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/centre_screen_on_entity_callback.asm:12 END_C_FUNCTION
    case 0xC46287: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
