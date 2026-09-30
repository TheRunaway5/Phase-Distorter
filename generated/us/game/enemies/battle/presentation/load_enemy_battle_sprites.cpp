// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/load_enemy_battle_sprites.asm
bool resume_battle_load_enemy_battle_sprites(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C8C8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    case 0xC2C8CA: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    case 0xC2C8CB: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    case 0xC2C8CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C8CC.
    case 0xC2C8CE: {
        Instruction step(cpu, 0xFF, 0x09A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    case 0xC2C8CF: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:7 LDA #9
    case 0xC2C8D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:7 LDA #9
    // Overlapping static entry reached from 0xC2C8D0.
    case 0xC2C8D2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:8 JSL UNKNOWN_C08D79
    case 0xC2C8D3: {
        Instruction step(cpu, 0x22, 0xC08D79u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:9 LDY #$0000
    case 0xC2C8D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:9 LDY #$0000
    // Overlapping static entry reached from 0xC2C8D7.
    case 0xC2C8D9: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:10 LDX #$5800
    case 0xC2C8DA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x005800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:10 LDX #$5800
    // Overlapping static entry reached from 0xC2C8DA.
    case 0xC2C8DC: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:11 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC2C8DD: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:12 JSL SET_BG1_VRAM_LOCATION
    case 0xC2C8DE: {
        Instruction step(cpu, 0x22, 0xC08D9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:13 LDY #$1000
    case 0xC2C8E2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:13 LDY #$1000
    // Overlapping static entry reached from 0xC2C8E2.
    case 0xC2C8E4: {
        Instruction step(cpu, 0x10, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:14 LDX #$5C00
    case 0xC2C8E5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x005C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:14 LDX #$5C00
    // Overlapping static entry reached from 0xC2C8E4.
    case 0xC2C8E6: {
        Instruction step(cpu, 0x00, 0x00005Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:14 LDX #$5C00
    // Overlapping static entry reached from 0xC2C8E5.
    case 0xC2C8E7: {
        Instruction step(cpu, 0x5C, 0x0000A9u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:15 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2C8E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:15 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2C8E8.
    case 0xC2C8EA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:16 JSL SET_BG2_VRAM_LOCATION
    case 0xC2C8EB: {
        Instruction step(cpu, 0x22, 0xC08DDEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:17 LDY #$6000
    case 0xC2C8EF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:17 LDY #$6000
    // Overlapping static entry reached from 0xC2C8EF.
    case 0xC2C8F1: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:18 LDX #$7C00
    case 0xC2C8F2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:18 LDX #$7C00
    // Overlapping static entry reached from 0xC2C8F2.
    case 0xC2C8F4: {
        Instruction step(cpu, 0x7C, 0x0000A9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:19 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2C8F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:19 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2C8F5.
    case 0xC2C8F7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:20 JSL SET_BG3_VRAM_LOCATION
    case 0xC2C8F8: {
        Instruction step(cpu, 0x22, 0xC08E1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:21 LDA #$0061
    case 0xC2C8FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000061u : 0x000061u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:21 LDA #$0061
    // Overlapping static entry reached from 0xC2C8FC.
    case 0xC2C8FE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:22 JSL SET_OAM_SIZE
    case 0xC2C8FF: {
        Instruction step(cpu, 0x22, 0xC08D92u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2C903: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2C903.
    case 0xC2C905: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2C906: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2C908: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2C908.
    case 0xC2C90A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2C90B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C90D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:25 LDA #0
    case 0xC2C90F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008700u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:26 STA [@VIRTUAL06]
    case 0xC2C911: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:26 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2C90F.
    case 0xC2C912: {
        Instruction step(cpu, 0x06, 0x0000C2u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC2C913: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/load_enemy_battle_sprites.asm:27 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2C912.
    case 0xC2C914: {
        Instruction step(cpu, 0x20, 0x0006A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C915: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C917: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C919: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C91B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C91D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    // Overlapping static entry reached from 0xC2C91D.
    case 0xC2C91F: {
        Instruction step(cpu, 0x7C, 0x0000A2u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C920: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    // Overlapping static entry reached from 0xC2C920.
    case 0xC2C922: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C923: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C925: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C927: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    // Overlapping static entry reached from 0xC2C925.
    case 0xC2C928: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    // Overlapping static entry reached from 0xC2C928.
    case 0xC2C92A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00002Bu : 0x006B2Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:29 END_C_FUNCTION
    case 0xC2C92B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:29 END_C_FUNCTION
    case 0xC2C92C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
