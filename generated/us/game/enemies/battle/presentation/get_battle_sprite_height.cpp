// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/get_battle_sprite_height.asm
bool resume_battle_get_battle_sprite_height(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_battle_sprite_height.asm:3 BEGIN_C_FUNCTION
    case 0xC2F04E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2F050: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2F051: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2F052: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2F053: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F053.
    case 0xC2F055: {
        Instruction step(cpu, 0xFF, 0x3A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2F056: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2F057: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:8 DEC
    case 0xC2F058: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F059: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F05B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F05C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F05D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:10 TAX
    case 0xC2F05F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:11 INX
    case 0xC2F060: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:12 INX
    case 0xC2F061: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:13 INX
    case 0xC2F062: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:14 INX
    case 0xC2F063: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:15 LDA f:BATTLE_SPRITES_POINTERS,X
    case 0xC2F064: {
        Instruction step(cpu, 0xBF, 0xCE62EEu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:16 AND #$00FF
    case 0xC2F068: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2F068.
    case 0xC2F06A: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:17 CMP #$0001
    case 0xC2F06B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:17 CMP #$0001
    // Overlapping static entry reached from 0xC2F06B.
    case 0xC2F06D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:18 BEQ @UNKNOWN0
    case 0xC2F06E: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:19 CMP #$0002
    case 0xC2F070: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:19 CMP #$0002
    // Overlapping static entry reached from 0xC2F070.
    case 0xC2F072: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:20 BEQ @UNKNOWN0
    case 0xC2F073: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:21 CMP #$0003
    case 0xC2F075: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:21 CMP #$0003
    // Overlapping static entry reached from 0xC2F075.
    case 0xC2F077: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:22 BEQ @UNKNOWN1
    case 0xC2F078: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:23 CMP #$0004
    case 0xC2F07A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:23 CMP #$0004
    // Overlapping static entry reached from 0xC2F07A.
    case 0xC2F07C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:24 BEQ @UNKNOWN1
    case 0xC2F07D: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:25 CMP #$0005
    case 0xC2F07F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:25 CMP #$0005
    // Overlapping static entry reached from 0xC2F07F.
    case 0xC2F081: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:26 BEQ @UNKNOWN1
    case 0xC2F082: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:27 CMP #$0006
    case 0xC2F084: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:27 CMP #$0006
    // Overlapping static entry reached from 0xC2F084.
    case 0xC2F086: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:28 BEQ @UNKNOWN2
    case 0xC2F087: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:29 BRA @UNKNOWN3
    case 0xC2F089: {
        Instruction step(cpu, 0x80, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:31 LDA #$0004
    case 0xC2F08B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:31 LDA #$0004
    // Overlapping static entry reached from 0xC2F08B.
    case 0xC2F08D: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:32 BRA @UNKNOWN4
    case 0xC2F08E: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:34 LDA #$0008
    case 0xC2F090: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:34 LDA #$0008
    // Overlapping static entry reached from 0xC2F090.
    case 0xC2F092: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:35 BRA @UNKNOWN4
    case 0xC2F093: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:37 LDA #$0010
    case 0xC2F095: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:37 LDA #$0010
    // Overlapping static entry reached from 0xC2F095.
    case 0xC2F097: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:38 BRA @UNKNOWN4
    case 0xC2F098: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:40 LDA #$0000
    case 0xC2F09A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:40 LDA #$0000
    // Overlapping static entry reached from 0xC2F09A.
    case 0xC2F09C: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/get_battle_sprite_height.asm:42 END_C_FUNCTION
    case 0xC2F09D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/get_battle_sprite_height.asm:42 END_C_FUNCTION
    case 0xC2F09E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
