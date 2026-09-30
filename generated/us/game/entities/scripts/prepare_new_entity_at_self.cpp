// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/prepare_new_entity_at_self.asm
bool resume_overworld_actionscript_prepare_new_entity_at_self(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/prepare_new_entity_at_self.asm:3 LDA #$0000
    case 0xC0A8F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity_at_self.asm:3 LDA #$0000
    // Overlapping static entry reached from 0xC0A8F7.
    case 0xC0A8F9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity_at_self.asm:4 JSL PREPARE_NEW_ENTITY_AT_EXISTING_ENTITY_LOCATION
    case 0xC0A8FA: {
        Instruction step(cpu, 0x22, 0xC46DADu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity_at_self.asm:5 RTL
    case 0xC0A8FE: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
