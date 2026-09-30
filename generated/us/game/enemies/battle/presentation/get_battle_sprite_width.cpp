// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/get_battle_sprite_width.asm
bool resume_battle_get_battle_sprite_width(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_battle_sprite_width.asm:3 BEGIN_C_FUNCTION
    case 0xC2EFFD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2EFFF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2F000: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2F001: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2F002: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F002.
    case 0xC2F004: {
        Instruction step(cpu, 0xFF, 0x3A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2F005: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/get_battle_sprite_width.asm:7 END_STACK_VARS
    case 0xC2F006: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:8 DEC
    case 0xC2F007: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/get_battle_sprite_width.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F008: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/get_battle_sprite_width.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F00A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/get_battle_sprite_width.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F00B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/get_battle_sprite_width.asm:9 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2F00C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:10 TAX
    case 0xC2F00E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:11 INX
    case 0xC2F00F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:12 INX
    case 0xC2F010: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:13 INX
    case 0xC2F011: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:14 INX
    case 0xC2F012: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:15 LDA f:BATTLE_SPRITES_POINTERS,X
    case 0xC2F013: {
        Instruction step(cpu, 0xBF, 0xCE62EEu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:16 AND #$00FF
    case 0xC2F017: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2F017.
    case 0xC2F019: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:17 CMP #$0001
    case 0xC2F01A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:17 CMP #$0001
    // Overlapping static entry reached from 0xC2F01A.
    case 0xC2F01C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:18 BEQ @UNKNOWN0
    case 0xC2F01D: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:19 CMP #$0003
    case 0xC2F01F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:19 CMP #$0003
    // Overlapping static entry reached from 0xC2F01F.
    case 0xC2F021: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:20 BEQ @UNKNOWN0
    case 0xC2F022: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:21 CMP #$0002
    case 0xC2F024: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:21 CMP #$0002
    // Overlapping static entry reached from 0xC2F024.
    case 0xC2F026: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:22 BEQ @UNKNOWN1
    case 0xC2F027: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:23 CMP #$0004
    case 0xC2F029: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:23 CMP #$0004
    // Overlapping static entry reached from 0xC2F029.
    case 0xC2F02B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:24 BEQ @UNKNOWN1
    case 0xC2F02C: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:25 CMP #$0005
    case 0xC2F02E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:25 CMP #$0005
    // Overlapping static entry reached from 0xC2F02E.
    case 0xC2F030: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:26 BEQ @UNKNOWN2
    case 0xC2F031: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:27 CMP #$0006
    case 0xC2F033: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:27 CMP #$0006
    // Overlapping static entry reached from 0xC2F033.
    case 0xC2F035: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:28 BEQ @UNKNOWN2
    case 0xC2F036: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:29 BRA @UNKNOWN3
    case 0xC2F038: {
        Instruction step(cpu, 0x80, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:31 LDA #$0004
    case 0xC2F03A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:31 LDA #$0004
    // Overlapping static entry reached from 0xC2F03A.
    case 0xC2F03C: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:32 BRA @UNKNOWN4
    case 0xC2F03D: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:34 LDA #$0008
    case 0xC2F03F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:34 LDA #$0008
    // Overlapping static entry reached from 0xC2F03F.
    case 0xC2F041: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:35 BRA @UNKNOWN4
    case 0xC2F042: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:37 LDA #$0010
    case 0xC2F044: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:37 LDA #$0010
    // Overlapping static entry reached from 0xC2F044.
    case 0xC2F046: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:38 BRA @UNKNOWN4
    case 0xC2F047: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:40 LDA #$0000
    case 0xC2F049: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_sprite_width.asm:40 LDA #$0000
    // Overlapping static entry reached from 0xC2F049.
    case 0xC2F04B: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/get_battle_sprite_width.asm:42 END_C_FUNCTION
    case 0xC2F04C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/get_battle_sprite_width.asm:42 END_C_FUNCTION
    case 0xC2F04D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
