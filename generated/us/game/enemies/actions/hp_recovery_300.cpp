// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/hp_recovery_300.asm
bool resume_battle_actions_hp_recovery_300(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/hp_recovery_300.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A26F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_300.asm:5 LDA #300
    case 0xC2A271: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Cu : 0x00012Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_300.asm:5 LDA #300
    // Overlapping static entry reached from 0xC2A271.
    case 0xC2A273: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_300.asm:6 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2A274: {
        Instruction step(cpu, 0x20, 0x006AFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_300.asm:6 JSR TWENTY_FIVE_PERCENT_VARIANCE
    // Overlapping static entry reached from 0xC2A273.
    case 0xC2A275: {
        Instruction step(cpu, 0xFD, 0x00AA6Au, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_300.asm:7 TAX
    case 0xC2A277: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_300.asm:8 LDA CURRENT_TARGET
    case 0xC2A278: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_300.asm:9 JSR RECOVER_HP
    case 0xC2A27B: {
        Instruction step(cpu, 0x20, 0x007294u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/hp_recovery_300.asm:10 END_C_FUNCTION
    case 0xC2A27E: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
