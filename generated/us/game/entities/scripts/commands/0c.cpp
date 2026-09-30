// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/0C.asm
bool resume_overworld_actionscript_script_0c(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0C.asm:3 STY $94
    case 0xC099C3: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/0C.asm:4 LDY $8A
    case 0xC099C5: {
        Instruction step(cpu, 0xA4, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/0C.asm:6 LDX $88
    case 0xC099C7: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/0C.asm:7 JSR UNKNOWN_C09D12
    case 0xC099C9: {
        Instruction step(cpu, 0x20, 0x009D12u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/actionscript/script/0C.asm:8 LDA #$FFFF
    case 0xC099CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0C.asm:8 LDA #$FFFF
    // Overlapping static entry reached from 0xC099CC.
    case 0xC099CE: {
        Instruction step(cpu, 0xFF, 0x137299u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/0C.asm:9 STA ENTITY_SCRIPT_SLEEP_FRAMES,Y
    case 0xC099CF: {
        Instruction step(cpu, 0x99, 0x001372u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0C.asm:10 LDA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC099D2: {
        Instruction step(cpu, 0xBD, 0x000ADAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0C.asm:11 BPL @UNKNOWN0
    case 0xC099D5: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/script/0C.asm:12 JMP MOVEMENT_CODE_00
    case 0xC099D7: {
        Instruction step(cpu, 0x4C, 0x0095F2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/actionscript/script/0C.asm:14 LDY $94
    case 0xC099DA: {
        Instruction step(cpu, 0xA4, 0x000094u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/0C.asm:15 RTS
    case 0xC099DC: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
