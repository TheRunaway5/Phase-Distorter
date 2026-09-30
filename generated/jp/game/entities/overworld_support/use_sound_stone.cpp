// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/use_sound_stone.asm
bool resume_overworld_use_sound_stone(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/use_sound_stone.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48137: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC48139: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4813A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4813B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4813C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CAu : 0x00FFCAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    // Overlapping static entry reached from 0xC4813C.
    case 0xC4813E: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4813F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC48140: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:25 STA @LOCAL11
    case 0xC48141: {
        Instruction step(cpu, 0x85, 0x000034u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:25 STA @LOCAL11
    // Overlapping static entry reached from 0xC4813E.
    case 0xC48142: {
        Instruction step(cpu, 0x34, 0x000022u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:26 JSL UNKNOWN_C08726
    case 0xC48143: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:26 JSL UNKNOWN_C08726
    // Overlapping static entry reached from 0xC48142.
    case 0xC48144: {
        Instruction step(cpu, 0x1F, 0x22C087u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:27 JSL STOP_MUSIC
    case 0xC48147: {
        Instruction step(cpu, 0x22, 0xC0ABA5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:27 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC48144.
    case 0xC48148: {
        Instruction step(cpu, 0xA5, 0x0000ABu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:27 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC48148.
    case 0xC4814A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x008222u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    case 0xC4814B: {
        Instruction step(cpu, 0x22, 0xC2C882u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    // Overlapping static entry reached from 0xC4814A.
    case 0xC4814C: {
        Instruction step(cpu, 0x82, 0x00C2C8u, 3u, AddressMode::Relative16);
        step.branch_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    // Overlapping static entry reached from 0xC4814A.
    case 0xC4814D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    // Overlapping static entry reached from 0xC4814D.
    case 0xC4814E: {
        Instruction step(cpu, 0xC2, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4814F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4814E.
    case 0xC48150: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4814F.
    case 0xC48151: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC48152: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC48154: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC48154.
    case 0xC48156: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC48157: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC48159: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Du : 0x00DD5Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC48159.
    case 0xC4815B: {
        Instruction step(cpu, 0xDD, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC4815C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC4815E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CEu : 0x0000CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4815E.
    case 0xC48160: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC48161: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48163: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48165: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48167: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48169: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:32 JSL DECOMP
    case 0xC4816B: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4816F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC48171: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC48173: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC48175: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC48177: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC48177.
    case 0xC48179: {
        Instruction step(cpu, 0x20, 0x0000A2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4817A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x002C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC4817A.
    case 0xC4817C: {
        Instruction step(cpu, 0x2C, 0x0020E2u, 3u, AddressMode::Absolute);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4817D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4817F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC48181: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC4817F.
    case 0xC48182: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC48182.
    case 0xC48184: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x000AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC48185: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00F80Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC48184.
    case 0xC48186: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC48185.
    case 0xC48187: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC48188: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC4818A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CEu : 0x0000CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4818A.
    case 0xC4818C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC4818D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:36 LDX #BPP4PALETTE_SIZE * 6
    case 0xC4818F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:36 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC4818F.
    case 0xC48191: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:37 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC48192: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:37 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC48192.
    case 0xC48194: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:38 JSL MEMCPY16
    case 0xC48195: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:38 JSL MEMCPY16
    // Overlapping static entry reached from 0xC48194.
    case 0xC48196: {
        Instruction step(cpu, 0xC3, 0x00008Eu, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:38 JSL MEMCPY16
    // Overlapping static entry reached from 0xC48196.
    case 0xC48198: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x001A22u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:39 JSL UNKNOWN_C47F87
    case 0xC48199: {
        Instruction step(cpu, 0x22, 0xC45C1Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:39 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC48198.
    case 0xC4819A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:39 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC48198.
    case 0xC4819B: {
        Instruction step(cpu, 0x5C, 0x04A0C4u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:40 LDY #4
    case 0xC4819D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:40 LDY #4
    // Overlapping static entry reached from 0xC4819D.
    case 0xC4819F: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:41 LDX #BATTLEBG_LAYER::SOUNDSTONE2
    case 0xC481A0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000E5u : 0x0000E5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:41 LDX #BATTLEBG_LAYER::SOUNDSTONE2
    // Overlapping static entry reached from 0xC481A0.
    case 0xC481A2: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:42 LDA #BATTLEBG_LAYER::SOUNDSTONE1
    case 0xC481A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E4u : 0x0000E4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:42 LDA #BATTLEBG_LAYER::SOUNDSTONE1
    // Overlapping static entry reached from 0xC481A3.
    case 0xC481A5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:43 JSL LOAD_BATTLE_BG
    case 0xC481A6: {
        Instruction step(cpu, 0x22, 0xC2D0D5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC481AA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/overworld/use_sound_stone.asm:45 STZ_BADOPT @LOCAL00
    case 0xC481AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:45 STZ_BADOPT @LOCAL00
    case 0xC481AE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:45 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC481AC.
    case 0xC481AF: {
        Instruction step(cpu, 0x0E, 0x0005A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:46 LDX #5
    case 0xC481B0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:46 LDX #5
    // Overlapping static entry reached from 0xC481B0.
    case 0xC481B2: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC481B3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:48 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    case 0xC481B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x00B5C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:48 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    // Overlapping static entry reached from 0xC481B5.
    case 0xC481B7: {
        Instruction step(cpu, 0xB5, 0x000022u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:49 JSL MEMSET16
    case 0xC481B8: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:49 JSL MEMSET16
    // Overlapping static entry reached from 0xC481B7.
    case 0xC481B9: {
        Instruction step(cpu, 0xED, 0x00C08Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC481BC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/overworld/use_sound_stone.asm:51 STZ_BADOPT @LOCAL00
    case 0xC481BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:51 STZ_BADOPT @LOCAL00
    case 0xC481C0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:51 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC481BE.
    case 0xC481C1: {
        Instruction step(cpu, 0x0E, 0x0005A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:52 LDX #5
    case 0xC481C2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:52 LDX #5
    // Overlapping static entry reached from 0xC481C2.
    case 0xC481C4: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC481C5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:54 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    case 0xC481C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x00B5C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:54 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    // Overlapping static entry reached from 0xC481C7.
    case 0xC481C9: {
        Instruction step(cpu, 0xB5, 0x000022u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:55 JSL MEMSET16
    case 0xC481CA: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:55 JSL MEMSET16
    // Overlapping static entry reached from 0xC481C9.
    case 0xC481CB: {
        Instruction step(cpu, 0xED, 0x00C08Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC481CE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:57 LDA #240
    case 0xC481D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F0u : 0x008DF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:58 STA SOUND_STONE_SPRITEMAP_1 + spritemap::x_offset
    case 0xC481D2: {
        Instruction step(cpu, 0x8D, 0x00B5C6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:58 STA SOUND_STONE_SPRITEMAP_1 + spritemap::x_offset
    // Overlapping static entry reached from 0xC481D0.
    case 0xC481D3: {
        Instruction step(cpu, 0xC6, 0x0000B5u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:59 STA SOUND_STONE_SPRITEMAP_1 + spritemap::y_offset
    case 0xC481D5: {
        Instruction step(cpu, 0x8D, 0x00B5C3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:60 LDA #248
    case 0xC481D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F8u : 0x008DF8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:61 STA SOUND_STONE_SPRITEMAP_2 + spritemap::x_offset
    case 0xC481DA: {
        Instruction step(cpu, 0x8D, 0x00B5CBu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:61 STA SOUND_STONE_SPRITEMAP_2 + spritemap::x_offset
    // Overlapping static entry reached from 0xC481D8.
    case 0xC481DB: {
        Instruction step(cpu, 0xCB, 0x000000u, 1u, AddressMode::Implied);
        step.wait_for_interrupt();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:61 STA SOUND_STONE_SPRITEMAP_2 + spritemap::x_offset
    // Overlapping static entry reached from 0xC481DB.
    case 0xC481DC: {
        Instruction step(cpu, 0xB5, 0x00008Du, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:62 STA SOUND_STONE_SPRITEMAP_2 + spritemap::y_offset
    case 0xC481DD: {
        Instruction step(cpu, 0x8D, 0x00B5C8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:62 STA SOUND_STONE_SPRITEMAP_2 + spritemap::y_offset
    // Overlapping static entry reached from 0xC481DC.
    case 0xC481DE: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:62 STA SOUND_STONE_SPRITEMAP_2 + spritemap::y_offset
    // Overlapping static entry reached from 0xC481DE.
    case 0xC481DF: {
        Instruction step(cpu, 0xB5, 0x0000A9u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:63 LDA #$81
    case 0xC481E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000081u : 0x008D81u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:63 LDA #$81
    // Overlapping static entry reached from 0xC481DF.
    case 0xC481E1: {
        Instruction step(cpu, 0x81, 0x00008Du, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:64 STA SOUND_STONE_SPRITEMAP_1 + spritemap::special_flags
    case 0xC481E2: {
        Instruction step(cpu, 0x8D, 0x00B5C7u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:64 STA SOUND_STONE_SPRITEMAP_1 + spritemap::special_flags
    // Overlapping static entry reached from 0xC481E0.
    case 0xC481E3: {
        Instruction step(cpu, 0xC7, 0x0000B5u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:65 LDA #$80
    case 0xC481E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x008D80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:66 STA SOUND_STONE_SPRITEMAP_2 + spritemap::special_flags
    case 0xC481E7: {
        Instruction step(cpu, 0x8D, 0x00B5CCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:66 STA SOUND_STONE_SPRITEMAP_2 + spritemap::special_flags
    // Overlapping static entry reached from 0xC481E5.
    case 0xC481E8: {
        Instruction step(cpu, 0xCC, 0x00C2B5u, 3u, AddressMode::Absolute);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC481EA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:67 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC481E8.
    case 0xC481EB: {
        Instruction step(cpu, 0x20, 0x003264u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:68 STZ @LOCAL10
    case 0xC481EC: {
        Instruction step(cpu, 0x64, 0x000032u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:69 LDY #0
    case 0xC481EE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:69 LDY #0
    // Overlapping static entry reached from 0xC481EE.
    case 0xC481F0: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:70 STY @LOCAL0F
    case 0xC481F1: {
        Instruction step(cpu, 0x84, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:71 BRA @UNKNOWN3
    case 0xC481F3: {
        Instruction step(cpu, 0x80, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:73 TYX
    case 0xC481F5: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:74 LDA f:SOUND_STONE_MELODY_FLAGS,X
    case 0xC481F6: {
        Instruction step(cpu, 0xBF, 0xC4812Fu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:75 AND #$00FF
    case 0xC481FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC481FA.
    case 0xC481FC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:76 JSL GET_EVENT_FLAG
    case 0xC481FD: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:77 CMP #0
    case 0xC48201: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:77 CMP #0
    // Overlapping static entry reached from 0xC48201.
    case 0xC48203: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:78 BEQ @UNKNOWN1
    case 0xC48204: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:79 LDY @LOCAL0F
    case 0xC48206: {
        Instruction step(cpu, 0xA4, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:80 TYA
    case 0xC48208: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48209: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4820B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4820C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4820E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4820F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48211: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:82 TAX
    case 0xC48212: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:83 LDA #1
    case 0xC48213: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:83 LDA #1
    // Overlapping static entry reached from 0xC48213.
    case 0xC48215: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:84 STA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC48216: {
        Instruction step(cpu, 0x9D, 0x00B553u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:85 INC @LOCAL10
    case 0xC48219: {
        Instruction step(cpu, 0xE6, 0x000032u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:86 BRA @UNKNOWN2
    case 0xC4821B: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:88 LDY @LOCAL0F
    case 0xC4821D: {
        Instruction step(cpu, 0xA4, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:89 TYA
    case 0xC4821F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48220: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48222: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48223: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48225: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48226: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48228: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:91 TAX
    case 0xC48229: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:92 STZ SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC4822A: {
        Instruction step(cpu, 0x9E, 0x00B553u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:94 TYA
    case 0xC4822D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4822E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48230: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48231: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48233: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48234: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48236: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:96 TAX
    case 0xC48237: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:97 LDA #1
    case 0xC48238: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:97 LDA #1
    // Overlapping static entry reached from 0xC48238.
    case 0xC4823A: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:98 STA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::unknown2,X
    case 0xC4823B: {
        Instruction step(cpu, 0x9D, 0x00B555u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:99 STZ SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::orbit_sprite_frame,X
    case 0xC4823E: {
        Instruction step(cpu, 0x9E, 0x00B559u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:100 INY
    case 0xC48241: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:101 STY @LOCAL0F
    case 0xC48242: {
        Instruction step(cpu, 0x84, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:103 CPY #8
    case 0xC48244: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:103 CPY #8
    // Overlapping static entry reached from 0xC48244.
    case 0xC48246: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:104 BCC @UNKNOWN0
    case 0xC48247: {
        Instruction step(cpu, 0x90, 0x0000ACu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:105 JSL UNKNOWN_C08744
    case 0xC48249: {
        Instruction step(cpu, 0x22, 0xC0873Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:106 LDX #1
    case 0xC4824D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:106 LDX #1
    // Overlapping static entry reached from 0xC4824D.
    case 0xC4824F: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:107 TXA
    case 0xC48250: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:108 JSL FADE_IN
    case 0xC48251: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:109 LDA #15
    case 0xC48255: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:109 LDA #15
    // Overlapping static entry reached from 0xC48255.
    case 0xC48257: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:110 STA @LOCAL0E
    case 0xC48258: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:111 STZ @LOCAL0F
    case 0xC4825A: {
        Instruction step(cpu, 0x64, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:112 LDA #60
    case 0xC4825C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:112 LDA #60
    // Overlapping static entry reached from 0xC4825C.
    case 0xC4825E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:113 STA @LOCAL0D
    case 0xC4825F: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:114 STZ @LOCAL0C
    case 0xC48261: {
        Instruction step(cpu, 0x64, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:115 STZ @LOCAL0B
    case 0xC48263: {
        Instruction step(cpu, 0x64, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:116 LDA #0
    case 0xC48265: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:116 LDA #0
    // Overlapping static entry reached from 0xC48265.
    case 0xC48267: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:117 STA @VIRTUAL04
    case 0xC48268: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:118 STA @LOCAL0A
    case 0xC4826A: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:119 STA @VIRTUAL02
    case 0xC4826C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:120 STA @LOCAL09
    case 0xC4826E: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:122 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC48270: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:123 LDA PAD_PRESS
    case 0xC48274: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:124 STA @LOCAL08
    case 0xC48277: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:125 LDA @LOCAL0A
    case 0xC48279: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:126 STA @VIRTUAL04
    case 0xC4827B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:127 BNE @UNKNOWN5
    case 0xC4827D: {
        Instruction step(cpu, 0xD0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:128 DEC @LOCAL0D
    case 0xC4827F: {
        Instruction step(cpu, 0xC6, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:129 LDA @LOCAL0D
    case 0xC48281: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:130 BNE @UNKNOWN5
    case 0xC48283: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:131 LDA #.LOWORD(-1)
    case 0xC48285: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:131 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC48285.
    case 0xC48287: {
        Instruction step(cpu, 0xFF, 0x850285u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:132 STA @VIRTUAL02
    case 0xC48288: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:133 STA @LOCAL09
    case 0xC4828A: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:133 STA @LOCAL09
    // Overlapping static entry reached from 0xC48287.
    case 0xC4828B: {
        Instruction step(cpu, 0x24, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:134 LDA @VIRTUAL02
    case 0xC4828C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:134 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4828B.
    case 0xC4828D: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:135 STA @LOCAL0B
    case 0xC4828E: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:136 LDA #1
    case 0xC48290: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:136 LDA #1
    // Overlapping static entry reached from 0xC48290.
    case 0xC48292: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:137 STA @VIRTUAL04
    case 0xC48293: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:138 STA @LOCAL0A
    case 0xC48295: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:140 LDA @LOCAL0C
    case 0xC48297: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:141 BEQ @UNKNOWN7
    case 0xC48299: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:142 DEC @LOCAL0C
    case 0xC4829B: {
        Instruction step(cpu, 0xC6, 0x00002Au, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:143 LDA @LOCAL0C
    case 0xC4829D: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:144 BEQL @UNKNOWN31
    case 0xC4829F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:144 BEQL @UNKNOWN31
    case 0xC482A1: {
        Instruction step(cpu, 0x4C, 0x0085F6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:145 JMP @UNKNOWN19
    case 0xC482A4: {
        Instruction step(cpu, 0x4C, 0x008392u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:147 LDA @VIRTUAL04
    case 0xC482A7: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:148 BEQL @UNKNOWN19
    case 0xC482A9: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:148 BEQL @UNKNOWN19
    case 0xC482AB: {
        Instruction step(cpu, 0x4C, 0x008392u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:149 LDA @VIRTUAL04
    case 0xC482AE: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:150 DEC
    case 0xC482B0: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:151 STA @VIRTUAL04
    case 0xC482B1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:152 STA @LOCAL0A
    case 0xC482B3: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:153 LDA @VIRTUAL04
    case 0xC482B5: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/use_sound_stone.asm:154 BNEL @UNKNOWN18
    case 0xC482B7: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:154 BNEL @UNKNOWN18
    case 0xC482B9: {
        Instruction step(cpu, 0x4C, 0x008369u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:155 LDA @LOCAL09
    case 0xC482BC: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:156 STA @VIRTUAL02
    case 0xC482BE: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:157 CMP #8
    case 0xC482C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:157 CMP #8
    // Overlapping static entry reached from 0xC482C0.
    case 0xC482C2: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:158 BCS @UNKNOWN10
    case 0xC482C3: {
        Instruction step(cpu, 0xB0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:159 LDA @VIRTUAL02
    case 0xC482C5: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482C7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482C9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482CA: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482CC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482CD: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482CF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:161 CLC
    case 0xC482D0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:162 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE)
    case 0xC482D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000053u : 0x00B553u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:162 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE)
    // Overlapping static entry reached from 0xC482D1.
    case 0xC482D3: {
        Instruction step(cpu, 0xB5, 0x0000AAu, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:163 TAX
    case 0xC482D4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:164 LDA a:sound_stone_playback_state::state,X
    case 0xC482D5: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:165 CMP #2
    case 0xC482D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:165 CMP #2
    // Overlapping static entry reached from 0xC482D8.
    case 0xC482DA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:166 BNE @UNKNOWN10
    case 0xC482DB: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:167 LDA #1
    case 0xC482DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:167 LDA #1
    // Overlapping static entry reached from 0xC482DD.
    case 0xC482DF: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:168 STA a:sound_stone_playback_state::state,X
    case 0xC482E0: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:170 LDA @VIRTUAL02
    case 0xC482E3: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:171 CMP #8
    case 0xC482E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:171 CMP #8
    // Overlapping static entry reached from 0xC482E5.
    case 0xC482E7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:172 BNE @UNKNOWN14
    case 0xC482E8: {
        Instruction step(cpu, 0xD0, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:173 LDA @LOCAL0B
    case 0xC482EA: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:174 INC
    case 0xC482EC: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:175 STA @LOCAL07
    case 0xC482ED: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:176 BRA @UNKNOWN12
    case 0xC482EF: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482F1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482F3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482F4: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482F6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482F7: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482F9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:179 TAX
    case 0xC482FA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:180 LDA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC482FB: {
        Instruction step(cpu, 0xBD, 0x00B553u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:181 BNE @UNKNOWN13
    case 0xC482FE: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:182 LDA @LOCAL07
    case 0xC48300: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:183 INC
    case 0xC48302: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:184 STA @LOCAL07
    case 0xC48303: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:186 CMP #8
    case 0xC48305: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:186 CMP #8
    // Overlapping static entry reached from 0xC48305.
    case 0xC48307: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:187 BCC @UNKNOWN11
    case 0xC48308: {
        Instruction step(cpu, 0x90, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:189 LDA @LOCAL07
    case 0xC4830A: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:190 CMP #8
    case 0xC4830C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:190 CMP #8
    // Overlapping static entry reached from 0xC4830C.
    case 0xC4830E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:191 BNE @UNKNOWN14
    case 0xC4830F: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:192 LDA #150
    case 0xC48311: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000096u : 0x000096u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:192 LDA #150
    // Overlapping static entry reached from 0xC48311.
    case 0xC48313: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:193 STA @LOCAL0C
    case 0xC48314: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:195 INC @LOCAL0B
    case 0xC48316: {
        Instruction step(cpu, 0xE6, 0x000028u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:196 LDA @LOCAL0B
    case 0xC48318: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:197 CMP #8
    case 0xC4831A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:197 CMP #8
    // Overlapping static entry reached from 0xC4831A.
    case 0xC4831C: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:198 BCS @UNKNOWN17
    case 0xC4831D: {
        Instruction step(cpu, 0xB0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:199 LDA @LOCAL0B
    case 0xC4831F: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:200 STA @VIRTUAL02
    case 0xC48321: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:201 STA @LOCAL09
    case 0xC48323: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:202 LDA @VIRTUAL02
    case 0xC48325: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48327: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48329: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4832A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4832C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4832D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4832F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:204 CLC
    case 0xC48330: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:205 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::state
    case 0xC48331: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000053u : 0x00B553u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:205 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::state
    // Overlapping static entry reached from 0xC48331.
    case 0xC48333: {
        Instruction step(cpu, 0xB5, 0x0000AAu, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:206 TAX
    case 0xC48334: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:207 LDA __BSS_START__,X
    case 0xC48335: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:208 BEQ @UNKNOWN15
    case 0xC48338: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:209 LDA #2
    case 0xC4833A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:209 LDA #2
    // Overlapping static entry reached from 0xC4833A.
    case 0xC4833C: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:210 STA __BSS_START__,X
    case 0xC4833D: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:211 BRA @UNKNOWN16
    case 0xC48340: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:213 LDA #8
    case 0xC48342: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:213 LDA #8
    // Overlapping static entry reached from 0xC48342.
    case 0xC48344: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:214 STA @VIRTUAL02
    case 0xC48345: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:215 STA @LOCAL09
    case 0xC48347: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:217 LDA @VIRTUAL02
    case 0xC48349: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:218 ASL
    case 0xC4834B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:219 TAX
    case 0xC4834C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:220 LDA f:SOUND_STONE_UNKNOWN7,X
    case 0xC4834D: {
        Instruction step(cpu, 0xBF, 0xC4811Du, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:221 STA @VIRTUAL04
    case 0xC48351: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:222 STA @LOCAL0A
    case 0xC48353: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:223 LDX @VIRTUAL02
    case 0xC48355: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:224 LDA f:SOUND_STONE_MUSIC,X
    case 0xC48357: {
        Instruction step(cpu, 0xBF, 0xC48114u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:225 AND #$00FF
    case 0xC4835B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:225 AND #$00FF
    // Overlapping static entry reached from 0xC4835B.
    case 0xC4835D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:226 JSL CHANGE_MUSIC
    case 0xC4835E: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:227 BRA @UNKNOWN18
    case 0xC48362: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:229 LDA #150
    case 0xC48364: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000096u : 0x000096u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:229 LDA #150
    // Overlapping static entry reached from 0xC48364.
    case 0xC48366: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:230 STA @LOCAL0C
    case 0xC48367: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:232 LDA @LOCAL09
    case 0xC48369: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:233 STA @VIRTUAL02
    case 0xC4836B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:234 CMP #8
    case 0xC4836D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:234 CMP #8
    // Overlapping static entry reached from 0xC4836D.
    case 0xC4836F: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:235 BCS @UNKNOWN19
    case 0xC48370: {
        Instruction step(cpu, 0xB0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:236 LDA @VIRTUAL02
    case 0xC48372: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:237 ASL
    case 0xC48374: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:238 TAX
    case 0xC48375: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:239 LDA f:SOUND_STONE_UNKNOWN7,X
    case 0xC48376: {
        Instruction step(cpu, 0xBF, 0xC4811Du, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:240 SEC
    case 0xC4837A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:241 SBC #9
    case 0xC4837B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:241 SBC #9
    // Overlapping static entry reached from 0xC4837B.
    case 0xC4837D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:242 STA @VIRTUAL02
    case 0xC4837E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:243 LDA @LOCAL0A
    case 0xC48380: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:244 STA @VIRTUAL04
    case 0xC48382: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:245 CMP @VIRTUAL02
    case 0xC48384: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:246 BNE @UNKNOWN19
    case 0xC48386: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:247 LDA @LOCAL10
    case 0xC48388: {
        Instruction step(cpu, 0xA5, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:248 CLC
    case 0xC4838A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:249 ADC #8
    case 0xC4838B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:249 ADC #8
    // Overlapping static entry reached from 0xC4838B.
    case 0xC4838D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:250 JSL UNKNOWN_C0AC0C
    case 0xC4838E: {
        Instruction step(cpu, 0x22, 0xC0ABEBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:252 JSL OAM_CLEAR
    case 0xC48392: {
        Instruction step(cpu, 0x22, 0xC088A3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:253 LDA #^SOUND_STONE_SPRITEMAP_1
    case 0xC48396: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:253 LDA #^SOUND_STONE_SPRITEMAP_1
    // Overlapping static entry reached from 0xC48396.
    case 0xC48398: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:254 JSL UNKNOWN_C088A5
    case 0xC48399: {
        Instruction step(cpu, 0x22, 0xC08897u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:255 STZ @LOCAL06
    case 0xC4839D: {
        Instruction step(cpu, 0x64, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:256 JMP @UNKNOWN27
    case 0xC4839F: {
        Instruction step(cpu, 0x4C, 0x00858Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:258 LDA @LOCAL06
    case 0xC483A2: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC483A4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC483A6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC483A7: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC483A9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC483AA: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC483AC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:260 STA @LOCAL05
    case 0xC483AD: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:260 STA @LOCAL05
    // Overlapping static entry reached from 0xC48427.
    case 0xC483AE: {
        Instruction step(cpu, 0x1C, 0x00BDAAu, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:261 TAX
    case 0xC483AF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:262 LDA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC483B0: {
        Instruction step(cpu, 0xBD, 0x00B553u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:262 LDA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    // Overlapping static entry reached from 0xC483AE.
    case 0xC483B1: {
        Instruction step(cpu, 0x53, 0x0000B5u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:263 CMP #1
    case 0xC483B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:263 CMP #1
    // Overlapping static entry reached from 0xC483B3.
    case 0xC483B5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:264 BEQ @UNKNOWN21
    case 0xC483B6: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:265 CMP #2
    case 0xC483B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:265 CMP #2
    // Overlapping static entry reached from 0xC483B8.
    case 0xC483BA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:266 BEQ @UNKNOWN22
    case 0xC483BB: {
        Instruction step(cpu, 0xF0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:267 JMP @UNKNOWN26
    case 0xC483BD: {
        Instruction step(cpu, 0x4C, 0x00858Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:269 LDX @LOCAL06
    case 0xC483C0: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:270 SEP #PROC_FLAGS::ACCUM8
    case 0xC483C2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:271 LDA f:SOUND_STONE_UNKNOWN3,X
    case 0xC483C4: {
        Instruction step(cpu, 0xBF, 0xC480F4u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:272 STA SOUND_STONE_SPRITEMAP_1 + spritemap::tile
    case 0xC483C8: {
        Instruction step(cpu, 0x8D, 0x00B5C4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:273 LDA #$30
    case 0xC483CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000030u : 0x008D30u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:274 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    case 0xC483CD: {
        Instruction step(cpu, 0x8D, 0x00B5C5u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:274 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    // Overlapping static entry reached from 0xC483CB.
    case 0xC483CE: {
        Instruction step(cpu, 0xC5, 0x0000B5u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:275 LDX @LOCAL06
    case 0xC483D0: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:276 REP #PROC_FLAGS::ACCUM8
    case 0xC483D2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:277 LDA f:SOUND_STONE_UNKNOWN2,X
    case 0xC483D4: {
        Instruction step(cpu, 0xBF, 0xC480ECu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:278 AND #$00FF
    case 0xC483D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:278 AND #$00FF
    // Overlapping static entry reached from 0xC483D8.
    case 0xC483DA: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:279 TAY
    case 0xC483DB: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:280 LDX @LOCAL06
    case 0xC483DC: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:281 LDA f:SOUND_STONE_UNKNOWN,X
    case 0xC483DE: {
        Instruction step(cpu, 0xBF, 0xC480E4u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:282 AND #$00FF
    case 0xC483E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:282 AND #$00FF
    // Overlapping static entry reached from 0xC483E2.
    case 0xC483E4: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:283 TAX
    case 0xC483E5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:284 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    case 0xC483E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x00B5C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:284 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    // Overlapping static entry reached from 0xC483E6.
    case 0xC483E8: {
        Instruction step(cpu, 0xB5, 0x000022u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:285 JSL UNKNOWN_C08CD5
    case 0xC483E9: {
        Instruction step(cpu, 0x22, 0xC08CC6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:285 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC483E8.
    case 0xC483EA: {
        Instruction step(cpu, 0xC6, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:285 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC483EA.
    case 0xC483EC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00004Cu : 0x008D4Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:286 JMP @UNKNOWN26
    case 0xC483ED: {
        Instruction step(cpu, 0x4C, 0x00858Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:286 JMP @UNKNOWN26
    // Overlapping static entry reached from 0xC483EC.
    case 0xC483EE: {
        Instruction step(cpu, 0x8D, 0x00A585u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:286 JMP @UNKNOWN26
    // Overlapping static entry reached from 0xC483EC.
    case 0xC483EF: {
        Instruction step(cpu, 0x85, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:288 LDA @LOCAL05
    case 0xC483F0: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:288 LDA @LOCAL05
    // Overlapping static entry reached from 0xC483EF.
    case 0xC483F1: {
        Instruction step(cpu, 0x1C, 0x006918u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:289 CLC
    case 0xC483F2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:290 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    case 0xC483F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Du : 0x00B55Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:290 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    // Overlapping static entry reached from 0xC483F1.
    case 0xC483F4: {
        Instruction step(cpu, 0x5D, 0x00AAB5u, 3u, AddressMode::AbsoluteIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:290 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    // Overlapping static entry reached from 0xC483F3.
    case 0xC483F5: {
        Instruction step(cpu, 0xB5, 0x0000AAu, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:291 TAX
    case 0xC483F6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:292 LDA __BSS_START__,X
    case 0xC483F7: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:293 CLC
    case 0xC483FA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:294 ADC #65540 / 20 ;65536/20, but rounded up
    case 0xC483FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CDu : 0x000CCDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:294 ADC #65540 / 20 ;65536/20, but rounded up
    // Overlapping static entry reached from 0xC483FB.
    case 0xC483FD: {
        Instruction step(cpu, 0x0C, 0x00009Du, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:295 STA __BSS_START__,X
    case 0xC483FE: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:295 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC483FD.
    case 0xC48400: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:296 LDA @LOCAL05
    case 0xC48401: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:297 CLC
    case 0xC48403: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:298 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown2
    case 0xC48404: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000055u : 0x00B555u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:298 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown2
    // Overlapping static entry reached from 0xC48404.
    case 0xC48406: {
        Instruction step(cpu, 0xB5, 0x0000AAu, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:299 TAX
    case 0xC48407: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:300 LDA __BSS_START__,X
    case 0xC48408: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:301 TAY
    case 0xC4840B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:302 DEY
    case 0xC4840C: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:303 TYA
    case 0xC4840D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:304 STA __BSS_START__,X
    case 0xC4840E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:305 BNE @UNKNOWN23
    case 0xC48411: {
        Instruction step(cpu, 0xD0, 0x000060u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:306 LDA #2
    case 0xC48413: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:306 LDA #2
    // Overlapping static entry reached from 0xC48413.
    case 0xC48415: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:307 STA __BSS_START__,X
    case 0xC48416: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:308 LDA @LOCAL05
    case 0xC48419: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:309 CLC
    case 0xC4841B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:310 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_frame
    case 0xC4841C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000059u : 0x00B559u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:310 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_frame
    // Overlapping static entry reached from 0xC4841C.
    case 0xC4841E: {
        Instruction step(cpu, 0xB5, 0x0000AAu, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:311 TAX
    case 0xC4841F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:312 STX @LOCAL07
    case 0xC48420: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:313 LDA @LOCAL05
    case 0xC48422: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:314 PHA
    case 0xC48424: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC48425: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x0080C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    // Overlapping static entry reached from 0xC48425.
    case 0xC48427: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC48428: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC4842A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    // Overlapping static entry reached from 0xC4842A.
    case 0xC4842C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC4842D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:316 LDA @LOCAL06
    case 0xC4842F: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:317 ASL
    case 0xC48431: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:318 ASL
    case 0xC48432: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:319 CLC
    case 0xC48433: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:320 ADC @VIRTUAL06
    case 0xC48434: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:321 STA @VIRTUAL06
    case 0xC48436: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC48438: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC484B2.
    case 0xC48439: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC48438.
    case 0xC4843A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4843B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4843D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4843E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC48440: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC48442: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:323 LDA __BSS_START__,X
    case 0xC48444: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:324 CLC
    case 0xC48447: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:325 ADC @VIRTUAL06
    case 0xC48448: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:326 STA @VIRTUAL06
    case 0xC4844A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:327 LDA [@VIRTUAL06]
    case 0xC4844C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:328 AND #$00FF
    case 0xC4844E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:328 AND #$00FF
    // Overlapping static entry reached from 0xC4844E.
    case 0xC48450: {
        Instruction step(cpu, 0x00, 0x0000FAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:329 PLX
    case 0xC48451: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:330 STA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::orbit_sprite_position_1,X
    case 0xC48452: {
        Instruction step(cpu, 0x9D, 0x00B55Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:331 LDX @LOCAL07
    case 0xC48455: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:332 LDA __BSS_START__,X
    case 0xC48457: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:333 INC
    case 0xC4845A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:334 STA __BSS_START__,X
    case 0xC4845B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:335 LDA @LOCAL05
    case 0xC4845E: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:336 CLC
    case 0xC48460: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:337 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown4
    case 0xC48461: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000057u : 0x00B557u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:337 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown4
    // Overlapping static entry reached from 0xC48461.
    case 0xC48463: {
        Instruction step(cpu, 0xB5, 0x0000AAu, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:338 TAX
    case 0xC48464: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:339 LDA __BSS_START__,X
    case 0xC48465: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:340 STA @VIRTUAL02
    case 0xC48468: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:341 LDA #2
    case 0xC4846A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:341 LDA #2
    // Overlapping static entry reached from 0xC4846A.
    case 0xC4846C: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:342 SEC
    case 0xC4846D: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:343 SBC @VIRTUAL02
    case 0xC4846E: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:344 STA __BSS_START__,X
    case 0xC48470: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:346 LDA @LOCAL06
    case 0xC48473: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48475: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48477: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48478: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4847A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4847B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4847D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:348 STA @LOCAL07
    case 0xC4847E: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:349 PHA
    case 0xC48480: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:350 LDX @LOCAL06
    case 0xC48481: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:351 SEP #PROC_FLAGS::ACCUM8
    case 0xC48483: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:352 LDA f:SOUND_STONE_UNKNOWN5,X
    case 0xC48485: {
        Instruction step(cpu, 0xBF, 0xC48104u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:353 PLX
    case 0xC48489: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:354 CLC
    case 0xC4848A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:355 ADC SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::unknown4,X
    case 0xC4848B: {
        Instruction step(cpu, 0x7D, 0x00B557u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:356 STA SOUND_STONE_SPRITEMAP_2 + spritemap::tile
    case 0xC4848E: {
        Instruction step(cpu, 0x8D, 0x00B5C9u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:357 LDX @LOCAL06
    case 0xC48491: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:358 LDA f:SOUND_STONE_UNKNOWN6,X
    case 0xC48493: {
        Instruction step(cpu, 0xBF, 0xC4810Cu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:359 ASL
    case 0xC48497: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:360 CLC
    case 0xC48498: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:361 ADC #$31
    case 0xC48499: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000031u : 0x008D31u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:362 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    case 0xC4849B: {
        Instruction step(cpu, 0x8D, 0x00B5CAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:362 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    // Overlapping static entry reached from 0xC48499.
    case 0xC4849C: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:362 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    // Overlapping static entry reached from 0xC4849C.
    case 0xC4849D: {
        Instruction step(cpu, 0xB5, 0x0000C2u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:363 REP #PROC_FLAGS::ACCUM8
    case 0xC4849E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:363 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4849D.
    case 0xC4849F: {
        Instruction step(cpu, 0x20, 0x0020A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:364 LDA @LOCAL07
    case 0xC484A0: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:365 CLC
    case 0xC484A2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:366 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_1
    case 0xC484A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Bu : 0x00B55Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:366 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_1
    // Overlapping static entry reached from 0xC484A3.
    case 0xC484A5: {
        Instruction step(cpu, 0xB5, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:367 STA @LOCAL04
    case 0xC484A6: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:367 STA @LOCAL04
    // Overlapping static entry reached from 0xC484A5.
    case 0xC484A7: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:368 LDA (@LOCAL04)
    case 0xC484A8: {
        Instruction step(cpu, 0xB2, 0x00001Au, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:369 TAY
    case 0xC484AA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:370 BEQL @UNKNOWN25
    case 0xC484AB: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:370 BEQL @UNKNOWN25
    case 0xC484AD: {
        Instruction step(cpu, 0x4C, 0x008555u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC484B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E4u : 0x0080E4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    // Overlapping static entry reached from 0xC484B0.
    case 0xC484B2: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC484B3: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC484B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    // Overlapping static entry reached from 0xC484B5.
    case 0xC484B7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC484B8: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:372 LDA @LOCAL06
    case 0xC484BA: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:373 CLC
    case 0xC484BC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:374 ADC @VIRTUAL0A
    case 0xC484BD: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:375 STA @VIRTUAL0A
    case 0xC484BF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:376 LDA @LOCAL07
    case 0xC484C1: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:377 CLC
    case 0xC484C3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:378 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    case 0xC484C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Du : 0x00B55Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:378 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    // Overlapping static entry reached from 0xC484C4.
    case 0xC484C6: {
        Instruction step(cpu, 0xB5, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:379 STA @LOCAL03
    case 0xC484C7: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:379 STA @LOCAL03
    // Overlapping static entry reached from 0xC484C6.
    case 0xC484C8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC484C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ECu : 0x0080ECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    // Overlapping static entry reached from 0xC484C9.
    case 0xC484CB: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC484CC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC484CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    // Overlapping static entry reached from 0xC484CE.
    case 0xC484D0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC484D1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:381 LDA @LOCAL06
    case 0xC484D3: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:382 CLC
    case 0xC484D5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:383 ADC @VIRTUAL06
    case 0xC484D6: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:384 STA @VIRTUAL06
    case 0xC484D8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:385 LDA (@LOCAL03)
    case 0xC484DA: {
        Instruction step(cpu, 0xB2, 0x000018u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:386 XBA
    case 0xC484DC: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:387 AND #$00FF
    case 0xC484DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:387 AND #$00FF
    // Overlapping static entry reached from 0xC484DD.
    case 0xC484DF: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:388 TAX
    case 0xC484E0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:389 TYA
    case 0xC484E1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:390 JSL COSINE_SINE
    case 0xC484E2: {
        Instruction step(cpu, 0x22, 0xC0B3EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:391 STA @LOCAL02
    case 0xC484E6: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:392 LDA (@LOCAL03)
    case 0xC484E8: {
        Instruction step(cpu, 0xB2, 0x000018u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:393 XBA
    case 0xC484EA: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:394 AND #$00FF
    case 0xC484EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:394 AND #$00FF
    // Overlapping static entry reached from 0xC484EB.
    case 0xC484ED: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:395 TAX
    case 0xC484EE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:396 LDA (@LOCAL04)
    case 0xC484EF: {
        Instruction step(cpu, 0xB2, 0x00001Au, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:397 JSL COSINE
    case 0xC484F1: {
        Instruction step(cpu, 0x22, 0xC0B3DFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:398 STA @VIRTUAL02
    case 0xC484F5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:399 LDA [@VIRTUAL06]
    case 0xC484F7: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:400 AND #$00FF
    case 0xC484F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:400 AND #$00FF
    // Overlapping static entry reached from 0xC484F9.
    case 0xC484FB: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:401 CLC
    case 0xC484FC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:402 ADC @VIRTUAL02
    case 0xC484FD: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:403 TAY
    case 0xC484FF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:404 LDA [@VIRTUAL0A]
    case 0xC48500: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:405 AND #$00FF
    case 0xC48502: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:405 AND #$00FF
    // Overlapping static entry reached from 0xC48502.
    case 0xC48504: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:406 CLC
    case 0xC48505: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:407 ADC @LOCAL02
    case 0xC48506: {
        Instruction step(cpu, 0x65, 0x000016u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:408 TAX
    case 0xC48508: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:409 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    case 0xC48509: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x00B5C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:409 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    // Overlapping static entry reached from 0xC48509.
    case 0xC4850B: {
        Instruction step(cpu, 0xB5, 0x000022u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:410 JSL UNKNOWN_C08CD5
    case 0xC4850C: {
        Instruction step(cpu, 0x22, 0xC08CC6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:410 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4850B.
    case 0xC4850D: {
        Instruction step(cpu, 0xC6, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:410 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4850D.
    case 0xC4850F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000B2u : 0x0018B2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:411 LDA (@LOCAL03)
    case 0xC48510: {
        Instruction step(cpu, 0xB2, 0x000018u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:411 LDA (@LOCAL03)
    // Overlapping static entry reached from 0xC4850F.
    case 0xC48511: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:412 XBA
    case 0xC48512: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:413 AND #$00FF
    case 0xC48513: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:413 AND #$00FF
    // Overlapping static entry reached from 0xC48513.
    case 0xC48515: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:414 CLC
    case 0xC48516: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:415 ADC #128
    case 0xC48517: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:415 ADC #128
    // Overlapping static entry reached from 0xC48517.
    case 0xC48519: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:416 AND #$00FF
    case 0xC4851A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:416 AND #$00FF
    // Overlapping static entry reached from 0xC4851A.
    case 0xC4851C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:417 TAX
    case 0xC4851D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:418 LDA (@LOCAL04)
    case 0xC4851E: {
        Instruction step(cpu, 0xB2, 0x00001Au, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:419 JSL COSINE_SINE
    case 0xC48520: {
        Instruction step(cpu, 0x22, 0xC0B3EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:420 STA @LOCAL02
    case 0xC48524: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:421 LDA (@LOCAL03)
    case 0xC48526: {
        Instruction step(cpu, 0xB2, 0x000018u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:422 XBA
    case 0xC48528: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:423 AND #$00FF
    case 0xC48529: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:423 AND #$00FF
    // Overlapping static entry reached from 0xC48529.
    case 0xC4852B: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:424 CLC
    case 0xC4852C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:425 ADC #128
    case 0xC4852D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:425 ADC #128
    // Overlapping static entry reached from 0xC4852D.
    case 0xC4852F: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:426 AND #$00FF
    case 0xC48530: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:426 AND #$00FF
    // Overlapping static entry reached from 0xC48530.
    case 0xC48532: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:427 TAX
    case 0xC48533: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:428 LDA (@LOCAL04)
    case 0xC48534: {
        Instruction step(cpu, 0xB2, 0x00001Au, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:429 JSL COSINE
    case 0xC48536: {
        Instruction step(cpu, 0x22, 0xC0B3DFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:430 STA @VIRTUAL02
    case 0xC4853A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:431 LDA [@VIRTUAL06]
    case 0xC4853C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:432 AND #$00FF
    case 0xC4853E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:432 AND #$00FF
    // Overlapping static entry reached from 0xC4853E.
    case 0xC48540: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:433 CLC
    case 0xC48541: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:434 ADC @VIRTUAL02
    case 0xC48542: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:435 TAY
    case 0xC48544: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:436 LDA [@VIRTUAL0A]
    case 0xC48545: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:437 AND #$00FF
    case 0xC48547: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:437 AND #$00FF
    // Overlapping static entry reached from 0xC48547.
    case 0xC48549: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:438 CLC
    case 0xC4854A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:439 ADC @LOCAL02
    case 0xC4854B: {
        Instruction step(cpu, 0x65, 0x000016u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:440 TAX
    case 0xC4854D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:441 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    case 0xC4854E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x00B5C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:441 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    // Overlapping static entry reached from 0xC4854E.
    case 0xC48550: {
        Instruction step(cpu, 0xB5, 0x000022u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:442 JSL UNKNOWN_C08CD5
    case 0xC48551: {
        Instruction step(cpu, 0x22, 0xC08CC6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:442 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC48550.
    case 0xC48552: {
        Instruction step(cpu, 0xC6, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:442 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC48552.
    case 0xC48554: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A6u : 0x001EA6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:444 LDX @LOCAL06
    case 0xC48555: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:444 LDX @LOCAL06
    // Overlapping static entry reached from 0xC48554.
    case 0xC48556: {
        Instruction step(cpu, 0x1E, 0x0020E2u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:445 SEP #PROC_FLAGS::ACCUM8
    case 0xC48557: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:446 LDA f:SOUND_STONE_UNKNOWN3,X
    case 0xC48559: {
        Instruction step(cpu, 0xBF, 0xC480F4u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:447 CLC
    case 0xC4855D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:448 ADC #128
    case 0xC4855E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000080u : 0x008D80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:449 STA SOUND_STONE_SPRITEMAP_1 + spritemap::tile
    case 0xC48560: {
        Instruction step(cpu, 0x8D, 0x00B5C4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:449 STA SOUND_STONE_SPRITEMAP_1 + spritemap::tile
    // Overlapping static entry reached from 0xC4855E.
    case 0xC48561: {
        Instruction step(cpu, 0xC4, 0x0000B5u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:450 LDX @LOCAL06
    case 0xC48563: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:451 LDA f:SOUND_STONE_UNKNOWN4,X
    case 0xC48565: {
        Instruction step(cpu, 0xBF, 0xC480FCu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:452 ASL
    case 0xC48569: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:453 CLC
    case 0xC4856A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:454 ADC #$30
    case 0xC4856B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000030u : 0x008D30u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:455 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    case 0xC4856D: {
        Instruction step(cpu, 0x8D, 0x00B5C5u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:455 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    // Overlapping static entry reached from 0xC4856B.
    case 0xC4856E: {
        Instruction step(cpu, 0xC5, 0x0000B5u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:456 LDX @LOCAL06
    case 0xC48570: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:457 REP #PROC_FLAGS::ACCUM8
    case 0xC48572: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:458 LDA f:SOUND_STONE_UNKNOWN2,X
    case 0xC48574: {
        Instruction step(cpu, 0xBF, 0xC480ECu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:459 AND #$00FF
    case 0xC48578: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:459 AND #$00FF
    // Overlapping static entry reached from 0xC48578.
    case 0xC4857A: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:460 TAY
    case 0xC4857B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:461 LDX @LOCAL06
    case 0xC4857C: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:462 LDA f:SOUND_STONE_UNKNOWN,X
    case 0xC4857E: {
        Instruction step(cpu, 0xBF, 0xC480E4u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:463 AND #$00FF
    case 0xC48582: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:463 AND #$00FF
    // Overlapping static entry reached from 0xC48582.
    case 0xC48584: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:464 TAX
    case 0xC48585: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:465 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    case 0xC48586: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x00B5C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:465 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    // Overlapping static entry reached from 0xC48586.
    case 0xC48588: {
        Instruction step(cpu, 0xB5, 0x000022u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:466 JSL UNKNOWN_C08CD5
    case 0xC48589: {
        Instruction step(cpu, 0x22, 0xC08CC6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:466 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC48588.
    case 0xC4858A: {
        Instruction step(cpu, 0xC6, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:466 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4858A.
    case 0xC4858C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E6u : 0x001EE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:468 INC @LOCAL06
    case 0xC4858D: {
        Instruction step(cpu, 0xE6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:468 INC @LOCAL06
    // Overlapping static entry reached from 0xC4858C.
    case 0xC4858E: {
        Instruction step(cpu, 0x1E, 0x001EA5u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:470 LDA @LOCAL06
    case 0xC4858F: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:471 CMP #8
    case 0xC48591: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:471 CMP #8
    // Overlapping static entry reached from 0xC48591.
    case 0xC48593: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/use_sound_stone.asm:472 BCCL @UNKNOWN20
    case 0xC48594: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/use_sound_stone.asm:472 BCCL @UNKNOWN20
    case 0xC48596: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:472 BCCL @UNKNOWN20
    case 0xC48598: {
        Instruction step(cpu, 0x4C, 0x0083A2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:473 DEC @LOCAL0E
    case 0xC4859B: {
        Instruction step(cpu, 0xC6, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:474 LDA @LOCAL0E
    case 0xC4859D: {
        Instruction step(cpu, 0xA5, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:475 BNE @UNKNOWN29
    case 0xC4859F: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:476 LDA #15
    case 0xC485A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:476 LDA #15
    // Overlapping static entry reached from 0xC485A1.
    case 0xC485A3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:477 STA @LOCAL0E
    case 0xC485A4: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:478 LDA @LOCAL0F
    case 0xC485A6: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:479 INC
    case 0xC485A8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:480 AND #$0003
    case 0xC485A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:480 AND #$0003
    // Overlapping static entry reached from 0xC485A9.
    case 0xC485AB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:481 STA @LOCAL0F
    case 0xC485AC: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:483 LDA @LOCAL0F
    case 0xC485AE: {
        Instruction step(cpu, 0xA5, 0x000030u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:484 SEP #PROC_FLAGS::ACCUM8
    case 0xC485B0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:485 ASL
    case 0xC485B2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:486 CLC
    case 0xC485B3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:487 ADC #64
    case 0xC485B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000040u : 0x008D40u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:488 STA SOUND_STONE_SPRITEMAP_2 + spritemap::tile
    case 0xC485B6: {
        Instruction step(cpu, 0x8D, 0x00B5C9u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:488 STA SOUND_STONE_SPRITEMAP_2 + spritemap::tile
    // Overlapping static entry reached from 0xC485B4.
    case 0xC485B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000B5u : 0x00A9B5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:489 LDA #$3B
    case 0xC485B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Bu : 0x008D3Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:489 LDA #$3B
    // Overlapping static entry reached from 0xC485B7.
    case 0xC485BA: {
        Instruction step(cpu, 0x3B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:490 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    case 0xC485BB: {
        Instruction step(cpu, 0x8D, 0x00B5CAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:490 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    // Overlapping static entry reached from 0xC485B9.
    case 0xC485BC: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:490 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    // Overlapping static entry reached from 0xC485BC.
    case 0xC485BD: {
        Instruction step(cpu, 0xB5, 0x0000A0u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:491 LDY #112
    case 0xC485BE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000070u : 0x000070u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:491 LDY #112
    // Overlapping static entry reached from 0xC485BD.
    case 0xC485BF: {
        Instruction step(cpu, 0x70, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:491 LDY #112
    // Overlapping static entry reached from 0xC485BE.
    case 0xC485C0: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:492 LDX #128
    case 0xC485C1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:492 LDX #128
    // Overlapping static entry reached from 0xC485F0.
    case 0xC485C2: {
        Instruction step(cpu, 0x80, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:492 LDX #128
    // Overlapping static entry reached from 0xC485C1.
    case 0xC485C3: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:493 REP #PROC_FLAGS::ACCUM8
    case 0xC485C4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:494 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    case 0xC485C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x00B5C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:494 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    // Overlapping static entry reached from 0xC485C6.
    case 0xC485C8: {
        Instruction step(cpu, 0xB5, 0x000022u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:495 JSL UNKNOWN_C08CD5
    case 0xC485C9: {
        Instruction step(cpu, 0x22, 0xC08CC6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:495 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC485C8.
    case 0xC485CA: {
        Instruction step(cpu, 0xC6, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:495 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC485CA.
    case 0xC485CC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x001722u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    case 0xC485CD: {
        Instruction step(cpu, 0x22, 0xC08B17u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    // Overlapping static entry reached from 0xC485CC.
    case 0xC485CE: {
        Instruction step(cpu, 0x17, 0x00008Bu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    // Overlapping static entry reached from 0xC485CC.
    case 0xC485CF: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    // Overlapping static entry reached from 0xC485CF.
    case 0xC485D0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A2u : 0x0000A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:497 LDX #0
    case 0xC485D1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:497 LDX #0
    // Overlapping static entry reached from 0xC485D0.
    case 0xC485D2: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:497 LDX #0
    // Overlapping static entry reached from 0xC485D1.
    case 0xC485D3: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:498 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC485D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A9u : 0x00AFA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:498 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC485D4.
    case 0xC485D6: {
        Instruction step(cpu, 0xAF, 0xC8E722u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:499 JSL GENERATE_BATTLEBG_FRAME
    case 0xC485D7: {
        Instruction step(cpu, 0x22, 0xC2C8E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:499 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC485D6.
    case 0xC485DA: {
        Instruction step(cpu, 0xC2, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:500 LDX #1
    case 0xC485DB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:500 LDX #1
    // Overlapping static entry reached from 0xC485DA.
    case 0xC485DC: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:500 LDX #1
    // Overlapping static entry reached from 0xC485DB.
    case 0xC485DD: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:501 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC485DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x00B020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:501 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC485DE.
    case 0xC485E0: {
        Instruction step(cpu, 0xB0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:502 JSL GENERATE_BATTLEBG_FRAME
    case 0xC485E1: {
        Instruction step(cpu, 0x22, 0xC2C8E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:502 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC485E0.
    case 0xC485E2: {
        Instruction step(cpu, 0xE7, 0x0000C8u, 2u, AddressMode::DirectPageIndirectLong);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:502 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC485E2.
    case 0xC485E4: {
        Instruction step(cpu, 0xC2, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:503 LDA @LOCAL11
    case 0xC485E5: {
        Instruction step(cpu, 0xA5, 0x000034u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:503 LDA @LOCAL11
    // Overlapping static entry reached from 0xC485E4.
    case 0xC485E6: {
        Instruction step(cpu, 0x34, 0x0000D0u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    case 0xC485E7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC485E6.
    case 0xC485E8: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    case 0xC485E9: {
        Instruction step(cpu, 0x4C, 0x008270u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC485E8.
    case 0xC485EA: {
        Instruction step(cpu, 0x70, 0x000082u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:505 LDA @LOCAL08
    case 0xC485EC: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:506 AND #$80C0
    case 0xC485EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000C0u : 0x0080C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:506 AND #$80C0
    // Overlapping static entry reached from 0xC485EE.
    case 0xC485F0: {
        Instruction step(cpu, 0x80, 0x0000D0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:507 BEQL @UNKNOWN4
    case 0xC485F1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:507 BEQL @UNKNOWN4
    case 0xC485F3: {
        Instruction step(cpu, 0x4C, 0x008270u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:509 LDX #1
    case 0xC485F6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:509 LDX #1
    // Overlapping static entry reached from 0xC485F6.
    case 0xC485F8: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:510 TXA
    case 0xC485F9: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:511 JSL FADE_OUT
    case 0xC485FA: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:512 BRA @UNKNOWN33
    case 0xC485FE: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:514 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC48600: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:516 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC48604: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:517 AND #$00FF
    case 0xC48607: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:517 AND #$00FF
    // Overlapping static entry reached from 0xC48607.
    case 0xC48609: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:518 BNE @UNKNOWN32
    case 0xC4860A: {
        Instruction step(cpu, 0xD0, 0x0000F4u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:519 JSL UNKNOWN_C08726
    case 0xC4860C: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:520 LDA #1
    case 0xC48610: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:520 LDA #1
    // Overlapping static entry reached from 0xC48610.
    case 0xC48612: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:521 JSL UNKNOWN_C0AFCD
    case 0xC48613: {
        Instruction step(cpu, 0x22, 0xC0AFACu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:522 JSL RELOAD_MAP
    case 0xC48617: {
        Instruction step(cpu, 0x22, 0xC01909u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:523 LDX #1
    case 0xC4861B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:523 LDX #1
    // Overlapping static entry reached from 0xC4861B.
    case 0xC4861D: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:524 TXA
    case 0xC4861E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/use_sound_stone.asm:525 JSL FADE_IN
    case 0xC4861F: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/use_sound_stone.asm:526 END_C_FUNCTION
    case 0xC48623: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/use_sound_stone.asm:526 END_C_FUNCTION
    case 0xC48624: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
