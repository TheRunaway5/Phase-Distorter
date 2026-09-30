// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/get_battle_sprite_height.asm
bool resume_battle_get_battle_sprite_height(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_battle_sprite_height.asm:3 BEGIN_C_FUNCTION
    case 0xC2EF6B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2EF6D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2EF6E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2EF6F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2EF70: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2EF70.
    case 0xC2EF72: {
        Instruction step(cpu, 0xFF, 0x3A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2EF73: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/get_battle_sprite_height.asm:7 END_STACK_VARS
    case 0xC2EF74: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:8 DEC
    case 0xC2EF75: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EF76: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EF78: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EF79: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/get_battle_sprite_height.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EF7A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:10 TAX
    case 0xC2EF7C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:11 INX
    case 0xC2EF7D: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:12 INX
    case 0xC2EF7E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:13 INX
    case 0xC2EF7F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:14 INX
    case 0xC2EF80: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:15 LDA f:BATTLE_SPRITES_POINTERS,X
    case 0xC2EF81: {
        Instruction step(cpu, 0xBF, 0xCE62EEu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:16 AND #$00FF
    case 0xC2EF85: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2EF85.
    case 0xC2EF87: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:17 CMP #$0001
    case 0xC2EF88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:17 CMP #$0001
    // Overlapping static entry reached from 0xC2EF88.
    case 0xC2EF8A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:18 BEQ @UNKNOWN0
    case 0xC2EF8B: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:19 CMP #$0002
    case 0xC2EF8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:19 CMP #$0002
    // Overlapping static entry reached from 0xC2EF8D.
    case 0xC2EF8F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:20 BEQ @UNKNOWN0
    case 0xC2EF90: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:21 CMP #$0003
    case 0xC2EF92: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:21 CMP #$0003
    // Overlapping static entry reached from 0xC2EF92.
    case 0xC2EF94: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:22 BEQ @UNKNOWN1
    case 0xC2EF95: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:23 CMP #$0004
    case 0xC2EF97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:23 CMP #$0004
    // Overlapping static entry reached from 0xC2EF97.
    case 0xC2EF99: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:24 BEQ @UNKNOWN1
    case 0xC2EF9A: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:25 CMP #$0005
    case 0xC2EF9C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:25 CMP #$0005
    // Overlapping static entry reached from 0xC2EF9C.
    case 0xC2EF9E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:26 BEQ @UNKNOWN1
    case 0xC2EF9F: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:27 CMP #$0006
    case 0xC2EFA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:27 CMP #$0006
    // Overlapping static entry reached from 0xC2EFA1.
    case 0xC2EFA3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:28 BEQ @UNKNOWN2
    case 0xC2EFA4: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:29 BRA @UNKNOWN3
    case 0xC2EFA6: {
        Instruction step(cpu, 0x80, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:31 LDA #$0004
    case 0xC2EFA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:31 LDA #$0004
    // Overlapping static entry reached from 0xC2EFA8.
    case 0xC2EFAA: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:32 BRA @UNKNOWN4
    case 0xC2EFAB: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:34 LDA #$0008
    case 0xC2EFAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:34 LDA #$0008
    // Overlapping static entry reached from 0xC2EFAD.
    case 0xC2EFAF: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:35 BRA @UNKNOWN4
    case 0xC2EFB0: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:37 LDA #$0010
    case 0xC2EFB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:37 LDA #$0010
    // Overlapping static entry reached from 0xC2EFB2.
    case 0xC2EFB4: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:38 BRA @UNKNOWN4
    case 0xC2EFB5: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:40 LDA #$0000
    case 0xC2EFB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_height.asm:40 LDA #$0000
    // Overlapping static entry reached from 0xC2EFB7.
    case 0xC2EFB9: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/get_battle_sprite_height.asm:42 END_C_FUNCTION
    case 0xC2EFBA: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/get_battle_sprite_height.asm:42 END_C_FUNCTION
    case 0xC2EFBB: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
