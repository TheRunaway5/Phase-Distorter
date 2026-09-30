// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/use_sound_stone.asm
bool resume_overworld_use_sound_stone(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/use_sound_stone.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4ACCE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4ACD0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4ACD1: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4ACD2: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4ACD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CAu : 0x00FFCAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    // Overlapping static entry reached from 0xC4ACD3.
    case 0xC4ACD5: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4ACD6: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4ACD7: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:25 STA @LOCAL11
    case 0xC4ACD8: {
        Instruction step(cpu, 0x85, 0x000034u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:25 STA @LOCAL11
    // Overlapping static entry reached from 0xC4ACD5.
    case 0xC4ACD9: {
        Instruction step(cpu, 0x34, 0x000022u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:26 JSL UNKNOWN_C08726
    case 0xC4ACDA: {
        Instruction step(cpu, 0x22, 0xC08726u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:26 JSL UNKNOWN_C08726
    // Overlapping static entry reached from 0xC4ACD9.
    case 0xC4ACDB: {
        Instruction step(cpu, 0x26, 0x000087u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:26 JSL UNKNOWN_C08726
    // Overlapping static entry reached from 0xC4ACDB.
    case 0xC4ACDD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x00C622u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:27 JSL STOP_MUSIC
    case 0xC4ACDE: {
        Instruction step(cpu, 0x22, 0xC0ABC6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:27 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC4ACDD.
    case 0xC4ACDF: {
        Instruction step(cpu, 0xC6, 0x0000ABu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:27 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC4ACDD.
    case 0xC4ACE0: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:27 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC4ACE0.
    case 0xC4ACE1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x00C822u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    case 0xC4ACE2: {
        Instruction step(cpu, 0x22, 0xC2C8C8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    // Overlapping static entry reached from 0xC4ACE1.
    case 0xC4ACE3: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    // Overlapping static entry reached from 0xC4ACE1.
    case 0xC4ACE4: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    // Overlapping static entry reached from 0xC4ACE4.
    case 0xC4ACE5: {
        Instruction step(cpu, 0xC2, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4ACE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4ACE5.
    case 0xC4ACE7: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4ACE6.
    case 0xC4ACE8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4ACE9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4ACEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4ACEB.
    case 0xC4ACED: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4ACEE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC4ACF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Du : 0x00DD5Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4ACF0.
    case 0xC4ACF2: {
        Instruction step(cpu, 0xDD, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC4ACF3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC4ACF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CEu : 0x0000CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4ACF5.
    case 0xC4ACF7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC4ACF8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4ACFA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4ACFC: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4ACFE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AD00: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:32 JSL DECOMP
    case 0xC4AD02: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD06: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD08: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD0A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD0C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD0E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC4AD0E.
    case 0xC4AD10: {
        Instruction step(cpu, 0x20, 0x0000A2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD11: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x002C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC4AD11.
    case 0xC4AD13: {
        Instruction step(cpu, 0x2C, 0x0020E2u, 3u, AddressMode::Absolute);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD14: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD18: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC4AD16.
    case 0xC4AD19: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC4AD19.
    case 0xC4AD1B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0006A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC4AD1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x00F806u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4AD1B.
    case 0xC4AD1D: {
        Instruction step(cpu, 0x06, 0x0000F8u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4AD1C.
    case 0xC4AD1E: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC4AD1F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC4AD21: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CEu : 0x0000CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4AD21.
    case 0xC4AD23: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC4AD24: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:36 LDX #BPP4PALETTE_SIZE * 6
    case 0xC4AD26: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:36 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC4AD26.
    case 0xC4AD28: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:37 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4AD29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:37 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4AD29.
    case 0xC4AD2B: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:38 JSL MEMCPY16
    case 0xC4AD2C: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:38 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4AD2B.
    case 0xC4AD2D: {
        Instruction step(cpu, 0xD2, 0x00008Eu, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:38 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4AD2D.
    case 0xC4AD2F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x008722u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:39 JSL UNKNOWN_C47F87
    case 0xC4AD30: {
        Instruction step(cpu, 0x22, 0xC47F87u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:39 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC4AD2F.
    case 0xC4AD31: {
        Instruction step(cpu, 0x87, 0x00007Fu, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:39 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC4AD2F.
    case 0xC4AD32: {
        Instruction step(cpu, 0x7F, 0x04A0C4u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:39 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC4AD31.
    case 0xC4AD33: {
        Instruction step(cpu, 0xC4, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:40 LDY #4
    case 0xC4AD34: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:40 LDY #4
    // Overlapping static entry reached from 0xC4AD33.
    case 0xC4AD35: {
        Instruction step(cpu, 0x04, 0x000000u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:40 LDY #4
    // Overlapping static entry reached from 0xC4AD34.
    case 0xC4AD36: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:41 LDX #BATTLEBG_LAYER::SOUNDSTONE2
    case 0xC4AD37: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000E5u : 0x0000E5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:41 LDX #BATTLEBG_LAYER::SOUNDSTONE2
    // Overlapping static entry reached from 0xC4AD37.
    case 0xC4AD39: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:42 LDA #BATTLEBG_LAYER::SOUNDSTONE1
    case 0xC4AD3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E4u : 0x0000E4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:42 LDA #BATTLEBG_LAYER::SOUNDSTONE1
    // Overlapping static entry reached from 0xC4AD3A.
    case 0xC4AD3C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:43 JSL LOAD_BATTLE_BG
    case 0xC4AD3D: {
        Instruction step(cpu, 0x22, 0xC2D121u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AD41: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/overworld/use_sound_stone.asm:45 STZ_BADOPT @LOCAL00
    case 0xC4AD43: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:46 LDX #5
    case 0xC4AD45: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:46 LDX #5
    // Overlapping static entry reached from 0xC4AD45.
    case 0xC4AD47: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC4AD48: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:48 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    case 0xC4AD4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EEu : 0x00B3EEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:48 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    // Overlapping static entry reached from 0xC4AD4A.
    case 0xC4AD4C: {
        Instruction step(cpu, 0xB3, 0x000022u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:49 JSL MEMSET16
    case 0xC4AD4D: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:49 JSL MEMSET16
    // Overlapping static entry reached from 0xC4AD4C.
    case 0xC4AD4E: {
        Instruction step(cpu, 0xFC, 0x00C08Eu, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AD51: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/overworld/use_sound_stone.asm:51 STZ_BADOPT @LOCAL00
    case 0xC4AD53: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:52 LDX #5
    case 0xC4AD55: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:52 LDX #5
    // Overlapping static entry reached from 0xC4AD55.
    case 0xC4AD57: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC4AD58: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:54 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    case 0xC4AD5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F3u : 0x00B3F3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:54 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    // Overlapping static entry reached from 0xC4AD5A.
    case 0xC4AD5C: {
        Instruction step(cpu, 0xB3, 0x000022u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:55 JSL MEMSET16
    case 0xC4AD5D: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:55 JSL MEMSET16
    // Overlapping static entry reached from 0xC4AD5C.
    case 0xC4AD5E: {
        Instruction step(cpu, 0xFC, 0x00C08Eu, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AD61: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:57 LDA #240
    case 0xC4AD63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F0u : 0x008DF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:58 STA SOUND_STONE_SPRITEMAP_1 + spritemap::x_offset
    case 0xC4AD65: {
        Instruction step(cpu, 0x8D, 0x00B3F1u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:58 STA SOUND_STONE_SPRITEMAP_1 + spritemap::x_offset
    // Overlapping static entry reached from 0xC4AD63.
    case 0xC4AD66: {
        Instruction step(cpu, 0xF1, 0x0000B3u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:59 STA SOUND_STONE_SPRITEMAP_1 + spritemap::y_offset
    case 0xC4AD68: {
        Instruction step(cpu, 0x8D, 0x00B3EEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:60 LDA #248
    case 0xC4AD6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F8u : 0x008DF8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:61 STA SOUND_STONE_SPRITEMAP_2 + spritemap::x_offset
    case 0xC4AD6D: {
        Instruction step(cpu, 0x8D, 0x00B3F6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:61 STA SOUND_STONE_SPRITEMAP_2 + spritemap::x_offset
    // Overlapping static entry reached from 0xC4AD6B.
    case 0xC4AD6E: {
        Instruction step(cpu, 0xF6, 0x0000B3u, 2u, AddressMode::DirectPageIndexedX);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:62 STA SOUND_STONE_SPRITEMAP_2 + spritemap::y_offset
    case 0xC4AD70: {
        Instruction step(cpu, 0x8D, 0x00B3F3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:63 LDA #$81
    case 0xC4AD73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000081u : 0x008D81u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:64 STA SOUND_STONE_SPRITEMAP_1 + spritemap::special_flags
    case 0xC4AD75: {
        Instruction step(cpu, 0x8D, 0x00B3F2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:64 STA SOUND_STONE_SPRITEMAP_1 + spritemap::special_flags
    // Overlapping static entry reached from 0xC4AD73.
    case 0xC4AD76: {
        Instruction step(cpu, 0xF2, 0x0000B3u, 2u, AddressMode::DirectPageIndirect);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:65 LDA #$80
    case 0xC4AD78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x008D80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:66 STA SOUND_STONE_SPRITEMAP_2 + spritemap::special_flags
    case 0xC4AD7A: {
        Instruction step(cpu, 0x8D, 0x00B3F7u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:66 STA SOUND_STONE_SPRITEMAP_2 + spritemap::special_flags
    // Overlapping static entry reached from 0xC4AD78.
    case 0xC4AD7B: {
        Instruction step(cpu, 0xF7, 0x0000B3u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC4AD7D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:68 STZ @LOCAL10
    case 0xC4AD7F: {
        Instruction step(cpu, 0x64, 0x000032u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:69 LDY #0
    case 0xC4AD81: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:69 LDY #0
    // Overlapping static entry reached from 0xC4AD81.
    case 0xC4AD83: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:70 STY @LOCAL0F
    case 0xC4AD84: {
        Instruction step(cpu, 0x84, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:71 BRA @UNKNOWN3
    case 0xC4AD86: {
        Instruction step(cpu, 0x80, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:73 TYX
    case 0xC4AD88: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:74 LDA f:SOUND_STONE_MELODY_FLAGS,X
    case 0xC4AD89: {
        Instruction step(cpu, 0xBF, 0xC4ACC6u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:75 AND #$00FF
    case 0xC4AD8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC4AD8D.
    case 0xC4AD8F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:76 JSL GET_EVENT_FLAG
    case 0xC4AD90: {
        Instruction step(cpu, 0x22, 0xC21628u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:77 CMP #0
    case 0xC4AD94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:77 CMP #0
    // Overlapping static entry reached from 0xC4AD94.
    case 0xC4AD96: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:78 BEQ @UNKNOWN1
    case 0xC4AD97: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:79 LDY @LOCAL0F
    case 0xC4AD99: {
        Instruction step(cpu, 0xA4, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:80 TYA
    case 0xC4AD9B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AD9C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AD9E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AD9F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADA1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADA2: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADA4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:82 TAX
    case 0xC4ADA5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:83 LDA #1
    case 0xC4ADA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:83 LDA #1
    // Overlapping static entry reached from 0xC4ADA6.
    case 0xC4ADA8: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:84 STA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC4ADA9: {
        Instruction step(cpu, 0x9D, 0x00B37Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:85 INC @LOCAL10
    case 0xC4ADAC: {
        Instruction step(cpu, 0xE6, 0x000032u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:86 BRA @UNKNOWN2
    case 0xC4ADAE: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:88 LDY @LOCAL0F
    case 0xC4ADB0: {
        Instruction step(cpu, 0xA4, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:89 TYA
    case 0xC4ADB2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADB3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADB5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADB6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADB8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADB9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADBB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:91 TAX
    case 0xC4ADBC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:92 STZ SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC4ADBD: {
        Instruction step(cpu, 0x9E, 0x00B37Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:94 TYA
    case 0xC4ADC0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADC1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADC3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADC4: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADC6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADC7: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADC9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:96 TAX
    case 0xC4ADCA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:97 LDA #1
    case 0xC4ADCB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:97 LDA #1
    // Overlapping static entry reached from 0xC4ADCB.
    case 0xC4ADCD: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:98 STA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::unknown2,X
    case 0xC4ADCE: {
        Instruction step(cpu, 0x9D, 0x00B380u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:99 STZ SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::orbit_sprite_frame,X
    case 0xC4ADD1: {
        Instruction step(cpu, 0x9E, 0x00B384u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:100 INY
    case 0xC4ADD4: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:101 STY @LOCAL0F
    case 0xC4ADD5: {
        Instruction step(cpu, 0x84, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:103 CPY #8
    case 0xC4ADD7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:103 CPY #8
    // Overlapping static entry reached from 0xC4ADD7.
    case 0xC4ADD9: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:104 BCC @UNKNOWN0
    case 0xC4ADDA: {
        Instruction step(cpu, 0x90, 0x0000ACu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:105 JSL UNKNOWN_C08744
    case 0xC4ADDC: {
        Instruction step(cpu, 0x22, 0xC08744u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:106 LDX #1
    case 0xC4ADE0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:106 LDX #1
    // Overlapping static entry reached from 0xC4ADE0.
    case 0xC4ADE2: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:107 TXA
    case 0xC4ADE3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:108 JSL FADE_IN
    case 0xC4ADE4: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:109 LDA #15
    case 0xC4ADE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:109 LDA #15
    // Overlapping static entry reached from 0xC4ADE8.
    case 0xC4ADEA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:110 STA @LOCAL0E
    case 0xC4ADEB: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:111 STZ @LOCAL0F
    case 0xC4ADED: {
        Instruction step(cpu, 0x64, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:112 LDA #60
    case 0xC4ADEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:112 LDA #60
    // Overlapping static entry reached from 0xC4ADEF.
    case 0xC4ADF1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:113 STA @LOCAL0D
    case 0xC4ADF2: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:114 STZ @LOCAL0C
    case 0xC4ADF4: {
        Instruction step(cpu, 0x64, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:115 STZ @LOCAL0B
    case 0xC4ADF6: {
        Instruction step(cpu, 0x64, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:116 LDA #0
    case 0xC4ADF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:116 LDA #0
    // Overlapping static entry reached from 0xC4ADF8.
    case 0xC4ADFA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:117 STA @VIRTUAL04
    case 0xC4ADFB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:118 STA @LOCAL0A
    case 0xC4ADFD: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:119 STA @VIRTUAL02
    case 0xC4ADFF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:120 STA @LOCAL09
    case 0xC4AE01: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:122 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4AE03: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:123 LDA PAD_PRESS
    case 0xC4AE07: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:124 STA @LOCAL08
    case 0xC4AE0A: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:125 LDA @LOCAL0A
    case 0xC4AE0C: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:126 STA @VIRTUAL04
    case 0xC4AE0E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:127 BNE @UNKNOWN5
    case 0xC4AE10: {
        Instruction step(cpu, 0xD0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:128 DEC @LOCAL0D
    case 0xC4AE12: {
        Instruction step(cpu, 0xC6, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:129 LDA @LOCAL0D
    case 0xC4AE14: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:130 BNE @UNKNOWN5
    case 0xC4AE16: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:131 LDA #.LOWORD(-1)
    case 0xC4AE18: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:131 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4AE18.
    case 0xC4AE1A: {
        Instruction step(cpu, 0xFF, 0x850285u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:132 STA @VIRTUAL02
    case 0xC4AE1B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:133 STA @LOCAL09
    case 0xC4AE1D: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:133 STA @LOCAL09
    // Overlapping static entry reached from 0xC4AE1A.
    case 0xC4AE1E: {
        Instruction step(cpu, 0x24, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:134 LDA @VIRTUAL02
    case 0xC4AE1F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:134 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4AE1E.
    case 0xC4AE20: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:135 STA @LOCAL0B
    case 0xC4AE21: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:136 LDA #1
    case 0xC4AE23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:136 LDA #1
    // Overlapping static entry reached from 0xC4AE23.
    case 0xC4AE25: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:137 STA @VIRTUAL04
    case 0xC4AE26: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:138 STA @LOCAL0A
    case 0xC4AE28: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:140 LDA @LOCAL0C
    case 0xC4AE2A: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:141 BEQ @UNKNOWN7
    case 0xC4AE2C: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:142 DEC @LOCAL0C
    case 0xC4AE2E: {
        Instruction step(cpu, 0xC6, 0x00002Au, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:143 LDA @LOCAL0C
    case 0xC4AE30: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:144 BEQL @UNKNOWN31
    case 0xC4AE32: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:144 BEQL @UNKNOWN31
    case 0xC4AE34: {
        Instruction step(cpu, 0x4C, 0x00B189u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:145 JMP @UNKNOWN19
    case 0xC4AE37: {
        Instruction step(cpu, 0x4C, 0x00AF25u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:147 LDA @VIRTUAL04
    case 0xC4AE3A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:148 BEQL @UNKNOWN19
    case 0xC4AE3C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:148 BEQL @UNKNOWN19
    case 0xC4AE3E: {
        Instruction step(cpu, 0x4C, 0x00AF25u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:149 LDA @VIRTUAL04
    case 0xC4AE41: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:150 DEC
    case 0xC4AE43: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:151 STA @VIRTUAL04
    case 0xC4AE44: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:152 STA @LOCAL0A
    case 0xC4AE46: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:153 LDA @VIRTUAL04
    case 0xC4AE48: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/use_sound_stone.asm:154 BNEL @UNKNOWN18
    case 0xC4AE4A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:154 BNEL @UNKNOWN18
    case 0xC4AE4C: {
        Instruction step(cpu, 0x4C, 0x00AEFCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:155 LDA @LOCAL09
    case 0xC4AE4F: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:156 STA @VIRTUAL02
    case 0xC4AE51: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:157 CMP #8
    case 0xC4AE53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:157 CMP #8
    // Overlapping static entry reached from 0xC4AE53.
    case 0xC4AE55: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:158 BCS @UNKNOWN10
    case 0xC4AE56: {
        Instruction step(cpu, 0xB0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:159 LDA @VIRTUAL02
    case 0xC4AE58: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE5A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE5C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE5D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE5F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE60: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE62: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:161 CLC
    case 0xC4AE63: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:162 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE)
    case 0xC4AE64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Eu : 0x00B37Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:162 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE)
    // Overlapping static entry reached from 0xC4AE64.
    case 0xC4AE66: {
        Instruction step(cpu, 0xB3, 0x0000AAu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:163 TAX
    case 0xC4AE67: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:164 LDA a:sound_stone_playback_state::state,X
    case 0xC4AE68: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:165 CMP #2
    case 0xC4AE6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:165 CMP #2
    // Overlapping static entry reached from 0xC4AE6B.
    case 0xC4AE6D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:166 BNE @UNKNOWN10
    case 0xC4AE6E: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:167 LDA #1
    case 0xC4AE70: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:167 LDA #1
    // Overlapping static entry reached from 0xC4AE70.
    case 0xC4AE72: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:168 STA a:sound_stone_playback_state::state,X
    case 0xC4AE73: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:170 LDA @VIRTUAL02
    case 0xC4AE76: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:171 CMP #8
    case 0xC4AE78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:171 CMP #8
    // Overlapping static entry reached from 0xC4AE78.
    case 0xC4AE7A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:172 BNE @UNKNOWN14
    case 0xC4AE7B: {
        Instruction step(cpu, 0xD0, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:173 LDA @LOCAL0B
    case 0xC4AE7D: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:174 INC
    case 0xC4AE7F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:175 STA @LOCAL07
    case 0xC4AE80: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:176 BRA @UNKNOWN12
    case 0xC4AE82: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE84: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE86: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE87: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE89: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE8A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE8C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:179 TAX
    case 0xC4AE8D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:180 LDA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC4AE8E: {
        Instruction step(cpu, 0xBD, 0x00B37Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:181 BNE @UNKNOWN13
    case 0xC4AE91: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:182 LDA @LOCAL07
    case 0xC4AE93: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:183 INC
    case 0xC4AE95: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:184 STA @LOCAL07
    case 0xC4AE96: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:186 CMP #8
    case 0xC4AE98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:186 CMP #8
    // Overlapping static entry reached from 0xC4AE98.
    case 0xC4AE9A: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:187 BCC @UNKNOWN11
    case 0xC4AE9B: {
        Instruction step(cpu, 0x90, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:189 LDA @LOCAL07
    case 0xC4AE9D: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:190 CMP #8
    case 0xC4AE9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:190 CMP #8
    // Overlapping static entry reached from 0xC4AE9F.
    case 0xC4AEA1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:191 BNE @UNKNOWN14
    case 0xC4AEA2: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:192 LDA #150
    case 0xC4AEA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000096u : 0x000096u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:192 LDA #150
    // Overlapping static entry reached from 0xC4AEA4.
    case 0xC4AEA6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:193 STA @LOCAL0C
    case 0xC4AEA7: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:195 INC @LOCAL0B
    case 0xC4AEA9: {
        Instruction step(cpu, 0xE6, 0x000028u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:196 LDA @LOCAL0B
    case 0xC4AEAB: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:197 CMP #8
    case 0xC4AEAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:197 CMP #8
    // Overlapping static entry reached from 0xC4AEAD.
    case 0xC4AEAF: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:198 BCS @UNKNOWN17
    case 0xC4AEB0: {
        Instruction step(cpu, 0xB0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:199 LDA @LOCAL0B
    case 0xC4AEB2: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:200 STA @VIRTUAL02
    case 0xC4AEB4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:201 STA @LOCAL09
    case 0xC4AEB6: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:202 LDA @VIRTUAL02
    case 0xC4AEB8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AEBA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AEBC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AEBD: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AEBF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AEC0: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AEC2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:204 CLC
    case 0xC4AEC3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:205 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::state
    case 0xC4AEC4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Eu : 0x00B37Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:205 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::state
    // Overlapping static entry reached from 0xC4AEC4.
    case 0xC4AEC6: {
        Instruction step(cpu, 0xB3, 0x0000AAu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:206 TAX
    case 0xC4AEC7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:207 LDA __BSS_START__,X
    case 0xC4AEC8: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:208 BEQ @UNKNOWN15
    case 0xC4AECB: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:209 LDA #2
    case 0xC4AECD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:209 LDA #2
    // Overlapping static entry reached from 0xC4AECD.
    case 0xC4AECF: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:210 STA __BSS_START__,X
    case 0xC4AED0: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:211 BRA @UNKNOWN16
    case 0xC4AED3: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:213 LDA #8
    case 0xC4AED5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:213 LDA #8
    // Overlapping static entry reached from 0xC4AED5.
    case 0xC4AED7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:214 STA @VIRTUAL02
    case 0xC4AED8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:215 STA @LOCAL09
    case 0xC4AEDA: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:217 LDA @VIRTUAL02
    case 0xC4AEDC: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:218 ASL
    case 0xC4AEDE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:219 TAX
    case 0xC4AEDF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:220 LDA f:SOUND_STONE_UNKNOWN7,X
    case 0xC4AEE0: {
        Instruction step(cpu, 0xBF, 0xC4ACB4u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:221 STA @VIRTUAL04
    case 0xC4AEE4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:222 STA @LOCAL0A
    case 0xC4AEE6: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:223 LDX @VIRTUAL02
    case 0xC4AEE8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:224 LDA f:SOUND_STONE_MUSIC,X
    case 0xC4AEEA: {
        Instruction step(cpu, 0xBF, 0xC4ACABu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:225 AND #$00FF
    case 0xC4AEEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:225 AND #$00FF
    // Overlapping static entry reached from 0xC4AEEE.
    case 0xC4AEF0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:226 JSL CHANGE_MUSIC
    case 0xC4AEF1: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:227 BRA @UNKNOWN18
    case 0xC4AEF5: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:229 LDA #150
    case 0xC4AEF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000096u : 0x000096u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:229 LDA #150
    // Overlapping static entry reached from 0xC4AEF7.
    case 0xC4AEF9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:230 STA @LOCAL0C
    case 0xC4AEFA: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:232 LDA @LOCAL09
    case 0xC4AEFC: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:233 STA @VIRTUAL02
    case 0xC4AEFE: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:234 CMP #8
    case 0xC4AF00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:234 CMP #8
    // Overlapping static entry reached from 0xC4AF00.
    case 0xC4AF02: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:235 BCS @UNKNOWN19
    case 0xC4AF03: {
        Instruction step(cpu, 0xB0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:236 LDA @VIRTUAL02
    case 0xC4AF05: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:237 ASL
    case 0xC4AF07: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:238 TAX
    case 0xC4AF08: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:239 LDA f:SOUND_STONE_UNKNOWN7,X
    case 0xC4AF09: {
        Instruction step(cpu, 0xBF, 0xC4ACB4u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:240 SEC
    case 0xC4AF0D: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:241 SBC #9
    case 0xC4AF0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:241 SBC #9
    // Overlapping static entry reached from 0xC4AF0E.
    case 0xC4AF10: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:242 STA @VIRTUAL02
    case 0xC4AF11: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:243 LDA @LOCAL0A
    case 0xC4AF13: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:244 STA @VIRTUAL04
    case 0xC4AF15: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:244 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC4AF61.
    case 0xC4AF16: {
        Instruction step(cpu, 0x04, 0x0000C5u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:245 CMP @VIRTUAL02
    case 0xC4AF17: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:245 CMP @VIRTUAL02
    // Overlapping static entry reached from 0xC4AF16.
    case 0xC4AF18: {
        Instruction step(cpu, 0x02, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:246 BNE @UNKNOWN19
    case 0xC4AF19: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:247 LDA @LOCAL10
    case 0xC4AF1B: {
        Instruction step(cpu, 0xA5, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:248 CLC
    case 0xC4AF1D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:249 ADC #8
    case 0xC4AF1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:249 ADC #8
    // Overlapping static entry reached from 0xC4AF1E.
    case 0xC4AF20: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:250 JSL UNKNOWN_C0AC0C
    case 0xC4AF21: {
        Instruction step(cpu, 0x22, 0xC0AC0Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:252 JSL OAM_CLEAR
    case 0xC4AF25: {
        Instruction step(cpu, 0x22, 0xC088B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:253 LDA #^SOUND_STONE_SPRITEMAP_1
    case 0xC4AF29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:253 LDA #^SOUND_STONE_SPRITEMAP_1
    // Overlapping static entry reached from 0xC4AF29.
    case 0xC4AF2B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:254 JSL UNKNOWN_C088A5
    case 0xC4AF2C: {
        Instruction step(cpu, 0x22, 0xC088A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:255 STZ @LOCAL06
    case 0xC4AF30: {
        Instruction step(cpu, 0x64, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:256 JMP @UNKNOWN27
    case 0xC4AF32: {
        Instruction step(cpu, 0x4C, 0x00B122u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:258 LDA @LOCAL06
    case 0xC4AF35: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AF37: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AF39: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AF3A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AF3C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AF3D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AF3F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:260 STA @LOCAL05
    case 0xC4AF40: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:261 TAX
    case 0xC4AF42: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:262 LDA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC4AF43: {
        Instruction step(cpu, 0xBD, 0x00B37Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:263 CMP #1
    case 0xC4AF46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:263 CMP #1
    // Overlapping static entry reached from 0xC4AF46.
    case 0xC4AF48: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:264 BEQ @UNKNOWN21
    case 0xC4AF49: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:265 CMP #2
    case 0xC4AF4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:265 CMP #2
    // Overlapping static entry reached from 0xC4AF4B.
    case 0xC4AF4D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:266 BEQ @UNKNOWN22
    case 0xC4AF4E: {
        Instruction step(cpu, 0xF0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:267 JMP @UNKNOWN26
    case 0xC4AF50: {
        Instruction step(cpu, 0x4C, 0x00B120u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:269 LDX @LOCAL06
    case 0xC4AF53: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:270 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AF55: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:271 LDA f:SOUND_STONE_UNKNOWN3,X
    case 0xC4AF57: {
        Instruction step(cpu, 0xBF, 0xC4AC8Bu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:272 STA SOUND_STONE_SPRITEMAP_1 + spritemap::tile
    case 0xC4AF5B: {
        Instruction step(cpu, 0x8D, 0x00B3EFu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:273 LDA #$30
    case 0xC4AF5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000030u : 0x008D30u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:274 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    case 0xC4AF60: {
        Instruction step(cpu, 0x8D, 0x00B3F0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:274 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    // Overlapping static entry reached from 0xC4AF5E.
    case 0xC4AF61: {
        Instruction step(cpu, 0xF0, 0x0000B3u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:275 LDX @LOCAL06
    case 0xC4AF63: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:276 REP #PROC_FLAGS::ACCUM8
    case 0xC4AF65: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:277 LDA f:SOUND_STONE_UNKNOWN2,X
    case 0xC4AF67: {
        Instruction step(cpu, 0xBF, 0xC4AC83u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:278 AND #$00FF
    case 0xC4AF6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:278 AND #$00FF
    // Overlapping static entry reached from 0xC4AF6B.
    case 0xC4AF6D: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:279 TAY
    case 0xC4AF6E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:280 LDX @LOCAL06
    case 0xC4AF6F: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:281 LDA f:SOUND_STONE_UNKNOWN,X
    case 0xC4AF71: {
        Instruction step(cpu, 0xBF, 0xC4AC7Bu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:282 AND #$00FF
    case 0xC4AF75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:282 AND #$00FF
    // Overlapping static entry reached from 0xC4AF75.
    case 0xC4AF77: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:283 TAX
    case 0xC4AF78: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:284 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    case 0xC4AF79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EEu : 0x00B3EEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:284 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    // Overlapping static entry reached from 0xC4AF79.
    case 0xC4AF7B: {
        Instruction step(cpu, 0xB3, 0x000022u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:285 JSL UNKNOWN_C08CD5
    case 0xC4AF7C: {
        Instruction step(cpu, 0x22, 0xC08CD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:285 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4AF7B.
    case 0xC4AF7D: {
        Instruction step(cpu, 0xD5, 0x00008Cu, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:285 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4AF7D.
    case 0xC4AF7F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00004Cu : 0x00204Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:286 JMP @UNKNOWN26
    case 0xC4AF80: {
        Instruction step(cpu, 0x4C, 0x00B120u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:286 JMP @UNKNOWN26
    // Overlapping static entry reached from 0xC4AF7F.
    case 0xC4AF81: {
        Instruction step(cpu, 0x20, 0x00A5B1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:286 JMP @UNKNOWN26
    // Overlapping static entry reached from 0xC4AF7F.
    case 0xC4AF82: {
        Instruction step(cpu, 0xB1, 0x0000A5u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:288 LDA @LOCAL05
    case 0xC4AF83: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:288 LDA @LOCAL05
    // Overlapping static entry reached from 0xC4AF82.
    case 0xC4AF84: {
        Instruction step(cpu, 0x1C, 0x006918u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:289 CLC
    case 0xC4AF85: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:290 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    case 0xC4AF86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000088u : 0x00B388u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:290 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    // Overlapping static entry reached from 0xC4AF84.
    case 0xC4AF87: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:290 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    // Overlapping static entry reached from 0xC4AF86.
    case 0xC4AF88: {
        Instruction step(cpu, 0xB3, 0x0000AAu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:291 TAX
    case 0xC4AF89: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:292 LDA __BSS_START__,X
    case 0xC4AF8A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:293 CLC
    case 0xC4AF8D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:294 ADC #65540 / 20 ;65536/20, but rounded up
    case 0xC4AF8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CDu : 0x000CCDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:294 ADC #65540 / 20 ;65536/20, but rounded up
    // Overlapping static entry reached from 0xC4AF8E.
    case 0xC4AF90: {
        Instruction step(cpu, 0x0C, 0x00009Du, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:295 STA __BSS_START__,X
    case 0xC4AF91: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:295 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4AF90.
    case 0xC4AF93: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:296 LDA @LOCAL05
    case 0xC4AF94: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:297 CLC
    case 0xC4AF96: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:298 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown2
    case 0xC4AF97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000080u : 0x00B380u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:298 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown2
    // Overlapping static entry reached from 0xC4AF97.
    case 0xC4AF99: {
        Instruction step(cpu, 0xB3, 0x0000AAu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:299 TAX
    case 0xC4AF9A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:300 LDA __BSS_START__,X
    case 0xC4AF9B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:301 TAY
    case 0xC4AF9E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:302 DEY
    case 0xC4AF9F: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:303 TYA
    case 0xC4AFA0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:304 STA __BSS_START__,X
    case 0xC4AFA1: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:305 BNE @UNKNOWN23
    case 0xC4AFA4: {
        Instruction step(cpu, 0xD0, 0x000060u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:306 LDA #2
    case 0xC4AFA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:306 LDA #2
    // Overlapping static entry reached from 0xC4AFA6.
    case 0xC4AFA8: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:307 STA __BSS_START__,X
    case 0xC4AFA9: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:308 LDA @LOCAL05
    case 0xC4AFAC: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:309 CLC
    case 0xC4AFAE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:310 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_frame
    case 0xC4AFAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000084u : 0x00B384u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:310 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_frame
    // Overlapping static entry reached from 0xC4AFAF.
    case 0xC4AFB1: {
        Instruction step(cpu, 0xB3, 0x0000AAu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:311 TAX
    case 0xC4AFB2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:312 STX @LOCAL07
    case 0xC4AFB3: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:313 LDA @LOCAL05
    case 0xC4AFB5: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:314 PHA
    case 0xC4AFB7: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC4AFB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000057u : 0x00AC57u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AFB8.
    case 0xC4AFBA: {
        Instruction step(cpu, 0xAC, 0x000685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC4AFBB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC4AFBD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AFBD.
    case 0xC4AFBF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC4AFC0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:316 LDA @LOCAL06
    case 0xC4AFC2: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:317 ASL
    case 0xC4AFC4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:318 ASL
    case 0xC4AFC5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:319 CLC
    case 0xC4AFC6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:320 ADC @VIRTUAL06
    case 0xC4AFC7: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:321 STA @VIRTUAL06
    case 0xC4AFC9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4AFCB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AFCB.
    case 0xC4AFCD: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4AFCE: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4AFD0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4AFD1: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4AFD3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4AFD5: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:323 LDA __BSS_START__,X
    case 0xC4AFD7: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:324 CLC
    case 0xC4AFDA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:325 ADC @VIRTUAL06
    case 0xC4AFDB: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:326 STA @VIRTUAL06
    case 0xC4AFDD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:327 LDA [@VIRTUAL06]
    case 0xC4AFDF: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:328 AND #$00FF
    case 0xC4AFE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:328 AND #$00FF
    // Overlapping static entry reached from 0xC4AFE1.
    case 0xC4AFE3: {
        Instruction step(cpu, 0x00, 0x0000FAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:329 PLX
    case 0xC4AFE4: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:330 STA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::orbit_sprite_position_1,X
    case 0xC4AFE5: {
        Instruction step(cpu, 0x9D, 0x00B386u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:331 LDX @LOCAL07
    case 0xC4AFE8: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:332 LDA __BSS_START__,X
    case 0xC4AFEA: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:333 INC
    case 0xC4AFED: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:334 STA __BSS_START__,X
    case 0xC4AFEE: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:335 LDA @LOCAL05
    case 0xC4AFF1: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:336 CLC
    case 0xC4AFF3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:337 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown4
    case 0xC4AFF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000082u : 0x00B382u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:337 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown4
    // Overlapping static entry reached from 0xC4AFF4.
    case 0xC4AFF6: {
        Instruction step(cpu, 0xB3, 0x0000AAu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:338 TAX
    case 0xC4AFF7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:339 LDA __BSS_START__,X
    case 0xC4AFF8: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:340 STA @VIRTUAL02
    case 0xC4AFFB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:341 LDA #2
    case 0xC4AFFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:341 LDA #2
    // Overlapping static entry reached from 0xC4AFFD.
    case 0xC4AFFF: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:342 SEC
    case 0xC4B000: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:343 SBC @VIRTUAL02
    case 0xC4B001: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:344 STA __BSS_START__,X
    case 0xC4B003: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:346 LDA @LOCAL06
    case 0xC4B006: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4B008: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4B00A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4B00B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4B00D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4B00E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4B010: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:348 STA @LOCAL07
    case 0xC4B011: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:349 PHA
    case 0xC4B013: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:350 LDX @LOCAL06
    case 0xC4B014: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:351 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B016: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:352 LDA f:SOUND_STONE_UNKNOWN5,X
    case 0xC4B018: {
        Instruction step(cpu, 0xBF, 0xC4AC9Bu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:353 PLX
    case 0xC4B01C: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:354 CLC
    case 0xC4B01D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:355 ADC SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::unknown4,X
    case 0xC4B01E: {
        Instruction step(cpu, 0x7D, 0x00B382u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:356 STA SOUND_STONE_SPRITEMAP_2 + spritemap::tile
    case 0xC4B021: {
        Instruction step(cpu, 0x8D, 0x00B3F4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:357 LDX @LOCAL06
    case 0xC4B024: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:358 LDA f:SOUND_STONE_UNKNOWN6,X
    case 0xC4B026: {
        Instruction step(cpu, 0xBF, 0xC4ACA3u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:359 ASL
    case 0xC4B02A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:360 CLC
    case 0xC4B02B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:361 ADC #$31
    case 0xC4B02C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000031u : 0x008D31u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:362 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    case 0xC4B02E: {
        Instruction step(cpu, 0x8D, 0x00B3F5u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:362 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    // Overlapping static entry reached from 0xC4B02C.
    case 0xC4B02F: {
        Instruction step(cpu, 0xF5, 0x0000B3u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:363 REP #PROC_FLAGS::ACCUM8
    case 0xC4B031: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:364 LDA @LOCAL07
    case 0xC4B033: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:365 CLC
    case 0xC4B035: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:366 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_1
    case 0xC4B036: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000086u : 0x00B386u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:366 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_1
    // Overlapping static entry reached from 0xC4B036.
    case 0xC4B038: {
        Instruction step(cpu, 0xB3, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:367 STA @LOCAL04
    case 0xC4B039: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:367 STA @LOCAL04
    // Overlapping static entry reached from 0xC4B038.
    case 0xC4B03A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:368 LDA (@LOCAL04)
    case 0xC4B03B: {
        Instruction step(cpu, 0xB2, 0x00001Au, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:369 TAY
    case 0xC4B03D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:370 BEQL @UNKNOWN25
    case 0xC4B03E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:370 BEQL @UNKNOWN25
    case 0xC4B040: {
        Instruction step(cpu, 0x4C, 0x00B0E8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC4B043: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x00AC7Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B043.
    case 0xC4B045: {
        Instruction step(cpu, 0xAC, 0x000A85u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC4B046: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC4B048: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B048.
    case 0xC4B04A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC4B04B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:372 LDA @LOCAL06
    case 0xC4B04D: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:373 CLC
    case 0xC4B04F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:374 ADC @VIRTUAL0A
    case 0xC4B050: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:375 STA @VIRTUAL0A
    case 0xC4B052: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:376 LDA @LOCAL07
    case 0xC4B054: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:377 CLC
    case 0xC4B056: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:378 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    case 0xC4B057: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000088u : 0x00B388u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:378 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    // Overlapping static entry reached from 0xC4B057.
    case 0xC4B059: {
        Instruction step(cpu, 0xB3, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:379 STA @LOCAL03
    case 0xC4B05A: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:379 STA @LOCAL03
    // Overlapping static entry reached from 0xC4B059.
    case 0xC4B05B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC4B05C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000083u : 0x00AC83u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B05C.
    case 0xC4B05E: {
        Instruction step(cpu, 0xAC, 0x000685u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC4B05F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC4B061: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B061.
    case 0xC4B063: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC4B064: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:381 LDA @LOCAL06
    case 0xC4B066: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:382 CLC
    case 0xC4B068: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:383 ADC @VIRTUAL06
    case 0xC4B069: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:384 STA @VIRTUAL06
    case 0xC4B06B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:385 LDA (@LOCAL03)
    case 0xC4B06D: {
        Instruction step(cpu, 0xB2, 0x000018u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:386 XBA
    case 0xC4B06F: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:387 AND #$00FF
    case 0xC4B070: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:387 AND #$00FF
    // Overlapping static entry reached from 0xC4B070.
    case 0xC4B072: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:388 TAX
    case 0xC4B073: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:389 TYA
    case 0xC4B074: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:390 JSL COSINE_SINE
    case 0xC4B075: {
        Instruction step(cpu, 0x22, 0xC0B40Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:391 STA @LOCAL02
    case 0xC4B079: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:392 LDA (@LOCAL03)
    case 0xC4B07B: {
        Instruction step(cpu, 0xB2, 0x000018u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:393 XBA
    case 0xC4B07D: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:394 AND #$00FF
    case 0xC4B07E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:394 AND #$00FF
    // Overlapping static entry reached from 0xC4B07E.
    case 0xC4B080: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:395 TAX
    case 0xC4B081: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:396 LDA (@LOCAL04)
    case 0xC4B082: {
        Instruction step(cpu, 0xB2, 0x00001Au, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:397 JSL COSINE
    case 0xC4B084: {
        Instruction step(cpu, 0x22, 0xC0B400u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:398 STA @VIRTUAL02
    case 0xC4B088: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:399 LDA [@VIRTUAL06]
    case 0xC4B08A: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:400 AND #$00FF
    case 0xC4B08C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:400 AND #$00FF
    // Overlapping static entry reached from 0xC4B08C.
    case 0xC4B08E: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:401 CLC
    case 0xC4B08F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:402 ADC @VIRTUAL02
    case 0xC4B090: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:403 TAY
    case 0xC4B092: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:404 LDA [@VIRTUAL0A]
    case 0xC4B093: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:405 AND #$00FF
    case 0xC4B095: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:405 AND #$00FF
    // Overlapping static entry reached from 0xC4B095.
    case 0xC4B097: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:406 CLC
    case 0xC4B098: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:407 ADC @LOCAL02
    case 0xC4B099: {
        Instruction step(cpu, 0x65, 0x000016u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:408 TAX
    case 0xC4B09B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:409 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    case 0xC4B09C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F3u : 0x00B3F3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:409 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    // Overlapping static entry reached from 0xC4B09C.
    case 0xC4B09E: {
        Instruction step(cpu, 0xB3, 0x000022u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:410 JSL UNKNOWN_C08CD5
    case 0xC4B09F: {
        Instruction step(cpu, 0x22, 0xC08CD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:410 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B09E.
    case 0xC4B0A0: {
        Instruction step(cpu, 0xD5, 0x00008Cu, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:410 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B0A0.
    case 0xC4B0A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000B2u : 0x0018B2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:411 LDA (@LOCAL03)
    case 0xC4B0A3: {
        Instruction step(cpu, 0xB2, 0x000018u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:411 LDA (@LOCAL03)
    // Overlapping static entry reached from 0xC4B0A2.
    case 0xC4B0A4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:412 XBA
    case 0xC4B0A5: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:413 AND #$00FF
    case 0xC4B0A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:413 AND #$00FF
    // Overlapping static entry reached from 0xC4B0A6.
    case 0xC4B0A8: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:414 CLC
    case 0xC4B0A9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:415 ADC #128
    case 0xC4B0AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:415 ADC #128
    // Overlapping static entry reached from 0xC4B0AA.
    case 0xC4B0AC: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:416 AND #$00FF
    case 0xC4B0AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:416 AND #$00FF
    // Overlapping static entry reached from 0xC4B0AD.
    case 0xC4B0AF: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:417 TAX
    case 0xC4B0B0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:418 LDA (@LOCAL04)
    case 0xC4B0B1: {
        Instruction step(cpu, 0xB2, 0x00001Au, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:419 JSL COSINE_SINE
    case 0xC4B0B3: {
        Instruction step(cpu, 0x22, 0xC0B40Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:419 JSL COSINE_SINE
    // Overlapping static entry reached from 0xC4B101.
    case 0xC4B0B6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x001685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:420 STA @LOCAL02
    case 0xC4B0B7: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:420 STA @LOCAL02
    // Overlapping static entry reached from 0xC4B0B6.
    case 0xC4B0B8: {
        Instruction step(cpu, 0x16, 0x0000B2u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:421 LDA (@LOCAL03)
    case 0xC4B0B9: {
        Instruction step(cpu, 0xB2, 0x000018u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:421 LDA (@LOCAL03)
    // Overlapping static entry reached from 0xC4B0B8.
    case 0xC4B0BA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:422 XBA
    case 0xC4B0BB: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:423 AND #$00FF
    case 0xC4B0BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:423 AND #$00FF
    // Overlapping static entry reached from 0xC4B0BC.
    case 0xC4B0BE: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:424 CLC
    case 0xC4B0BF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:425 ADC #128
    case 0xC4B0C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:425 ADC #128
    // Overlapping static entry reached from 0xC4B0C0.
    case 0xC4B0C2: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:426 AND #$00FF
    case 0xC4B0C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:426 AND #$00FF
    // Overlapping static entry reached from 0xC4B0C3.
    case 0xC4B0C5: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:427 TAX
    case 0xC4B0C6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:428 LDA (@LOCAL04)
    case 0xC4B0C7: {
        Instruction step(cpu, 0xB2, 0x00001Au, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:429 JSL COSINE
    case 0xC4B0C9: {
        Instruction step(cpu, 0x22, 0xC0B400u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:430 STA @VIRTUAL02
    case 0xC4B0CD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:431 LDA [@VIRTUAL06]
    case 0xC4B0CF: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:432 AND #$00FF
    case 0xC4B0D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:432 AND #$00FF
    // Overlapping static entry reached from 0xC4B0D1.
    case 0xC4B0D3: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:433 CLC
    case 0xC4B0D4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:434 ADC @VIRTUAL02
    case 0xC4B0D5: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:435 TAY
    case 0xC4B0D7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:436 LDA [@VIRTUAL0A]
    case 0xC4B0D8: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:437 AND #$00FF
    case 0xC4B0DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:437 AND #$00FF
    // Overlapping static entry reached from 0xC4B0DA.
    case 0xC4B0DC: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:438 CLC
    case 0xC4B0DD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:439 ADC @LOCAL02
    case 0xC4B0DE: {
        Instruction step(cpu, 0x65, 0x000016u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:440 TAX
    case 0xC4B0E0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:441 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    case 0xC4B0E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F3u : 0x00B3F3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:441 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    // Overlapping static entry reached from 0xC4B0E1.
    case 0xC4B0E3: {
        Instruction step(cpu, 0xB3, 0x000022u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:442 JSL UNKNOWN_C08CD5
    case 0xC4B0E4: {
        Instruction step(cpu, 0x22, 0xC08CD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:442 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B0E3.
    case 0xC4B0E5: {
        Instruction step(cpu, 0xD5, 0x00008Cu, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:442 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B0E5.
    case 0xC4B0E7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A6u : 0x001EA6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:444 LDX @LOCAL06
    case 0xC4B0E8: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:444 LDX @LOCAL06
    // Overlapping static entry reached from 0xC4B0E7.
    case 0xC4B0E9: {
        Instruction step(cpu, 0x1E, 0x0020E2u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:445 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B0EA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:446 LDA f:SOUND_STONE_UNKNOWN3,X
    case 0xC4B0EC: {
        Instruction step(cpu, 0xBF, 0xC4AC8Bu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:447 CLC
    case 0xC4B0F0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:448 ADC #128
    case 0xC4B0F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000080u : 0x008D80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:449 STA SOUND_STONE_SPRITEMAP_1 + spritemap::tile
    case 0xC4B0F3: {
        Instruction step(cpu, 0x8D, 0x00B3EFu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:449 STA SOUND_STONE_SPRITEMAP_1 + spritemap::tile
    // Overlapping static entry reached from 0xC4B0F1.
    case 0xC4B0F4: {
        Instruction step(cpu, 0xEF, 0x1EA6B3u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:450 LDX @LOCAL06
    case 0xC4B0F6: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:451 LDA f:SOUND_STONE_UNKNOWN4,X
    case 0xC4B0F8: {
        Instruction step(cpu, 0xBF, 0xC4AC93u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:452 ASL
    case 0xC4B0FC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:453 CLC
    case 0xC4B0FD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:454 ADC #$30
    case 0xC4B0FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000030u : 0x008D30u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:455 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    case 0xC4B100: {
        Instruction step(cpu, 0x8D, 0x00B3F0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:455 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    // Overlapping static entry reached from 0xC4B0FE.
    case 0xC4B101: {
        Instruction step(cpu, 0xF0, 0x0000B3u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:456 LDX @LOCAL06
    case 0xC4B103: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:457 REP #PROC_FLAGS::ACCUM8
    case 0xC4B105: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:458 LDA f:SOUND_STONE_UNKNOWN2,X
    case 0xC4B107: {
        Instruction step(cpu, 0xBF, 0xC4AC83u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:459 AND #$00FF
    case 0xC4B10B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:459 AND #$00FF
    // Overlapping static entry reached from 0xC4B10B.
    case 0xC4B10D: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:460 TAY
    case 0xC4B10E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:461 LDX @LOCAL06
    case 0xC4B10F: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:462 LDA f:SOUND_STONE_UNKNOWN,X
    case 0xC4B111: {
        Instruction step(cpu, 0xBF, 0xC4AC7Bu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:463 AND #$00FF
    case 0xC4B115: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:463 AND #$00FF
    // Overlapping static entry reached from 0xC4B115.
    case 0xC4B117: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:464 TAX
    case 0xC4B118: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:465 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    case 0xC4B119: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EEu : 0x00B3EEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:465 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    // Overlapping static entry reached from 0xC4B119.
    case 0xC4B11B: {
        Instruction step(cpu, 0xB3, 0x000022u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:466 JSL UNKNOWN_C08CD5
    case 0xC4B11C: {
        Instruction step(cpu, 0x22, 0xC08CD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:466 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B11B.
    case 0xC4B11D: {
        Instruction step(cpu, 0xD5, 0x00008Cu, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:466 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B11D.
    case 0xC4B11F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E6u : 0x001EE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:468 INC @LOCAL06
    case 0xC4B120: {
        Instruction step(cpu, 0xE6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:468 INC @LOCAL06
    // Overlapping static entry reached from 0xC4B11F.
    case 0xC4B121: {
        Instruction step(cpu, 0x1E, 0x001EA5u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:470 LDA @LOCAL06
    case 0xC4B122: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:471 CMP #8
    case 0xC4B124: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:471 CMP #8
    // Overlapping static entry reached from 0xC4B124.
    case 0xC4B126: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/use_sound_stone.asm:472 BCCL @UNKNOWN20
    case 0xC4B127: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/use_sound_stone.asm:472 BCCL @UNKNOWN20
    case 0xC4B129: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:472 BCCL @UNKNOWN20
    case 0xC4B12B: {
        Instruction step(cpu, 0x4C, 0x00AF35u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:473 DEC @LOCAL0E
    case 0xC4B12E: {
        Instruction step(cpu, 0xC6, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:474 LDA @LOCAL0E
    case 0xC4B130: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:475 BNE @UNKNOWN29
    case 0xC4B132: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:476 LDA #15
    case 0xC4B134: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:476 LDA #15
    // Overlapping static entry reached from 0xC4B134.
    case 0xC4B136: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:477 STA @LOCAL0E
    case 0xC4B137: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:478 LDA @LOCAL0F
    case 0xC4B139: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:479 INC
    case 0xC4B13B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:480 AND #$0003
    case 0xC4B13C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:480 AND #$0003
    // Overlapping static entry reached from 0xC4B13C.
    case 0xC4B13E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:481 STA @LOCAL0F
    case 0xC4B13F: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:483 LDA @LOCAL0F
    case 0xC4B141: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:484 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B143: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:485 ASL
    case 0xC4B145: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:486 CLC
    case 0xC4B146: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:487 ADC #64
    case 0xC4B147: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000040u : 0x008D40u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:488 STA SOUND_STONE_SPRITEMAP_2 + spritemap::tile
    case 0xC4B149: {
        Instruction step(cpu, 0x8D, 0x00B3F4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:488 STA SOUND_STONE_SPRITEMAP_2 + spritemap::tile
    // Overlapping static entry reached from 0xC4B147.
    case 0xC4B14A: {
        Instruction step(cpu, 0xF4, 0x00A9B3u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:489 LDA #$3B
    case 0xC4B14C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Bu : 0x008D3Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:489 LDA #$3B
    // Overlapping static entry reached from 0xC4B14A.
    case 0xC4B14D: {
        Instruction step(cpu, 0x3B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:490 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    case 0xC4B14E: {
        Instruction step(cpu, 0x8D, 0x00B3F5u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:490 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    // Overlapping static entry reached from 0xC4B14C.
    case 0xC4B14F: {
        Instruction step(cpu, 0xF5, 0x0000B3u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:491 LDY #112
    case 0xC4B151: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000070u : 0x000070u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:491 LDY #112
    // Overlapping static entry reached from 0xC4B151.
    case 0xC4B153: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:492 LDX #128
    case 0xC4B154: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:492 LDX #128
    // Overlapping static entry reached from 0xC4B183.
    case 0xC4B155: {
        Instruction step(cpu, 0x80, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:492 LDX #128
    // Overlapping static entry reached from 0xC4B154.
    case 0xC4B156: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:493 REP #PROC_FLAGS::ACCUM8
    case 0xC4B157: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:494 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    case 0xC4B159: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F3u : 0x00B3F3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:494 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    // Overlapping static entry reached from 0xC4B159.
    case 0xC4B15B: {
        Instruction step(cpu, 0xB3, 0x000022u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:495 JSL UNKNOWN_C08CD5
    case 0xC4B15C: {
        Instruction step(cpu, 0x22, 0xC08CD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:495 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B15B.
    case 0xC4B15D: {
        Instruction step(cpu, 0xD5, 0x00008Cu, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:495 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B15D.
    case 0xC4B15F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x002622u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    case 0xC4B160: {
        Instruction step(cpu, 0x22, 0xC08B26u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    // Overlapping static entry reached from 0xC4B15F.
    case 0xC4B161: {
        Instruction step(cpu, 0x26, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    // Overlapping static entry reached from 0xC4B15F.
    case 0xC4B162: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    // Overlapping static entry reached from 0xC4B162.
    case 0xC4B163: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A2u : 0x0000A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:497 LDX #0
    case 0xC4B164: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:497 LDX #0
    // Overlapping static entry reached from 0xC4B163.
    case 0xC4B165: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:497 LDX #0
    // Overlapping static entry reached from 0xC4B164.
    case 0xC4B166: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:498 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC4B167: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D4u : 0x00ADD4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:498 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC4B167.
    case 0xC4B169: {
        Instruction step(cpu, 0xAD, 0x002D22u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:499 JSL GENERATE_BATTLEBG_FRAME
    case 0xC4B16A: {
        Instruction step(cpu, 0x22, 0xC2C92Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:499 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC4B169.
    case 0xC4B16C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000C2u : 0x00A2C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:500 LDX #1
    case 0xC4B16E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:500 LDX #1
    // Overlapping static entry reached from 0xC4B16C.
    case 0xC4B16F: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:500 LDX #1
    // Overlapping static entry reached from 0xC4B16E.
    case 0xC4B170: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:501 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC4B171: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Bu : 0x00AE4Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:501 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC4B171.
    case 0xC4B173: {
        Instruction step(cpu, 0xAE, 0x002D22u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:502 JSL GENERATE_BATTLEBG_FRAME
    case 0xC4B174: {
        Instruction step(cpu, 0x22, 0xC2C92Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:502 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC4B173.
    case 0xC4B176: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000C2u : 0x00A5C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:503 LDA @LOCAL11
    case 0xC4B178: {
        Instruction step(cpu, 0xA5, 0x000034u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:503 LDA @LOCAL11
    // Overlapping static entry reached from 0xC4B176.
    case 0xC4B179: {
        Instruction step(cpu, 0x34, 0x0000D0u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    case 0xC4B17A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC4B179.
    case 0xC4B17B: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    case 0xC4B17C: {
        Instruction step(cpu, 0x4C, 0x00AE03u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC4B17B.
    case 0xC4B17D: {
        Instruction step(cpu, 0x03, 0x0000AEu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:505 LDA @LOCAL08
    case 0xC4B17F: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:506 AND #$80C0
    case 0xC4B181: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000C0u : 0x0080C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:506 AND #$80C0
    // Overlapping static entry reached from 0xC4B181.
    case 0xC4B183: {
        Instruction step(cpu, 0x80, 0x0000D0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:507 BEQL @UNKNOWN4
    case 0xC4B184: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:507 BEQL @UNKNOWN4
    case 0xC4B186: {
        Instruction step(cpu, 0x4C, 0x00AE03u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:509 LDX #1
    case 0xC4B189: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:509 LDX #1
    // Overlapping static entry reached from 0xC4B189.
    case 0xC4B18B: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:510 TXA
    case 0xC4B18C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:511 JSL FADE_OUT
    case 0xC4B18D: {
        Instruction step(cpu, 0x22, 0xC0887Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:512 BRA @UNKNOWN33
    case 0xC4B191: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:514 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4B193: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:516 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC4B197: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:517 AND #$00FF
    case 0xC4B19A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:517 AND #$00FF
    // Overlapping static entry reached from 0xC4B19A.
    case 0xC4B19C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:518 BNE @UNKNOWN32
    case 0xC4B19D: {
        Instruction step(cpu, 0xD0, 0x0000F4u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:519 JSL UNKNOWN_C08726
    case 0xC4B19F: {
        Instruction step(cpu, 0x22, 0xC08726u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:520 LDA #1
    case 0xC4B1A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:520 LDA #1
    // Overlapping static entry reached from 0xC4B1A3.
    case 0xC4B1A5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:521 JSL UNKNOWN_C0AFCD
    case 0xC4B1A6: {
        Instruction step(cpu, 0x22, 0xC0AFCDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:522 JSL RELOAD_MAP
    case 0xC4B1AA: {
        Instruction step(cpu, 0x22, 0xC018F3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:523 LDX #1
    case 0xC4B1AE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:523 LDX #1
    // Overlapping static entry reached from 0xC4B1AE.
    case 0xC4B1B0: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:524 TXA
    case 0xC4B1B1: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:525 JSL FADE_IN
    case 0xC4B1B2: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/use_sound_stone.asm:526 END_C_FUNCTION
    case 0xC4B1B6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/use_sound_stone.asm:526 END_C_FUNCTION
    case 0xC4B1B7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
