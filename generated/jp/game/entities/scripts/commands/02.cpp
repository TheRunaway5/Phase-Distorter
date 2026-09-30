// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/02.asm
bool resume_overworld_actionscript_script_02(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/02.asm:3 STY $94
    case 0xC09606: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:4 LDX $8A
    case 0xC09608: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:5 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0960A: {
        Instruction step(cpu, 0xBC, 0x0012DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:6 DEY
    case 0xC0960D: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC0960E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:8 LDA ($84),Y
    case 0xC09610: {
        Instruction step(cpu, 0xB1, 0x000084u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:9 DEC
    case 0xC09612: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:10 STA ($84),Y
    case 0xC09613: {
        Instruction step(cpu, 0x91, 0x000084u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC09615: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:12 BNE @UNKNOWN0
    case 0xC09617: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:13 DEY
    case 0xC09619: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:14 DEY
    case 0xC0961A: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:15 TYA
    case 0xC0961B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:16 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0961C: {
        Instruction step(cpu, 0x9D, 0x0012DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:17 LDY $94
    case 0xC0961F: {
        Instruction step(cpu, 0xA4, 0x000094u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:18 RTS
    case 0xC09621: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:20 DEY
    case 0xC09622: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:21 DEY
    case 0xC09623: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:22 LDA ($84),Y
    case 0xC09624: {
        Instruction step(cpu, 0xB1, 0x000084u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:23 TAY
    case 0xC09626: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/02.asm:24 RTS
    case 0xC09627: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
