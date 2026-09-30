// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/create_entity.asm
bool resume_overworld_create_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/create_entity.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC01E5F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E61: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E62: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E63: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CFu : 0x00FFCFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    // Overlapping static entry reached from 0xC01E64.
    case 0xC01E66: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E67: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E68: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:27 STY @VIRTUAL04
    case 0xC01E69: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:27 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC01E66.
    case 0xC01E6A: {
        Instruction step(cpu, 0x04, 0x000048u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:28 PHA
    case 0xC01E6B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:29 LDA @VIRTUAL04
    case 0xC01E6C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:30 STA @LOCAL0D
    case 0xC01E6E: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:31 PLA
    case 0xC01E70: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:32 STX @LOCAL0C
    case 0xC01E71: {
        Instruction step(cpu, 0x86, 0x00002Du, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:33 STA @LOCAL0B
    case 0xC01E73: {
        Instruction step(cpu, 0x85, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:34 LDY @PARAM04
    case 0xC01E75: {
        Instruction step(cpu, 0xA4, 0x000041u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:35 STY @LOCAL0A
    case 0xC01E77: {
        Instruction step(cpu, 0x84, 0x000029u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:36 LDX @PARAM03
    case 0xC01E79: {
        Instruction step(cpu, 0xA6, 0x00003Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:37 STX @LOCAL09
    case 0xC01E7B: {
        Instruction step(cpu, 0x86, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:38 LDA DEBUG
    case 0xC01E7D: {
        Instruction step(cpu, 0xAD, 0x0046F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:39 BEQ @UNKNOWN0
    case 0xC01E80: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:40 LDA @LOCAL0B
    case 0xC01E82: {
        Instruction step(cpu, 0xA5, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:41 CMP #$FFFF
    case 0xC01E84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:41 CMP #$FFFF
    // Overlapping static entry reached from 0xC01E84.
    case 0xC01E86: {
        Instruction step(cpu, 0xFF, 0xA906D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_entity.asm:42 BNE @UNKNOWN0
    case 0xC01E87: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:43 LDA #0
    case 0xC01E89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:43 LDA #0
    // Overlapping static entry reached from 0xC01E86.
    case 0xC01E8A: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:43 LDA #0
    // Overlapping static entry reached from 0xC01E89.
    case 0xC01E8B: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:44 JMP @UNKNOWN8
    case 0xC01E8C: {
        Instruction step(cpu, 0x4C, 0x0020FDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000041u : 0x006541u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E8F.
    case 0xC01E91: {
        Instruction step(cpu, 0x65, 0x000085u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E92: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E91.
    case 0xC01E93: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E94.
    case 0xC01E96: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E97: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:47 LDA @LOCAL0B
    case 0xC01E99: {
        Instruction step(cpu, 0xA5, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/create_entity.asm:48 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01E9B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/create_entity.asm:48 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01E9C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:49 CLC
    case 0xC01E9D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:50 ADC @VIRTUAL0A
    case 0xC01E9E: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:51 STA @VIRTUAL0A
    case 0xC01EA0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01EA2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC01EA2.
    case 0xC01EA4: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01EA5: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01EA7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01EA8: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01EAA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01EAC: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01EAE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01EB0: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01EB2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01EB4: {
        Instruction step(cpu, 0x85, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:54 LDA @LOCAL0B
    case 0xC01EB6: {
        Instruction step(cpu, 0xA5, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:55 JSR UNKNOWN_C01DED
    case 0xC01EB8: {
        Instruction step(cpu, 0x20, 0x001E03u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/create_entity.asm:56 STA @VIRTUAL02
    case 0xC01EBB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:57 LDY @VIRTUAL04
    case 0xC01EBD: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:58 LDX NEW_SPRITE_TILE_HEIGHT
    case 0xC01EBF: {
        Instruction step(cpu, 0xAE, 0x004A02u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:59 LDA NEW_SPRITE_TILE_WIDTH
    case 0xC01EC2: {
        Instruction step(cpu, 0xAD, 0x004A00u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:60 JSL UNKNOWN_C01C52
    case 0xC01EC5: {
        Instruction step(cpu, 0x22, 0xC01C68u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/create_entity.asm:61 STA @LOCAL07
    case 0xC01EC9: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:63 LDA @LOCAL07
    case 0xC01ECB: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:64 CMP #$7FFF
    case 0xC01ECD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x007FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:64 CMP #$7FFF
    // Overlapping static entry reached from 0xC01ECD.
    case 0xC01ECF: {
        Instruction step(cpu, 0x7F, 0xB002F0u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/overworld/create_entity.asm:65 BGT @UNKNOWN1
    case 0xC01ED0: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:65 BGT @UNKNOWN1
    case 0xC01ED2: {
        Instruction step(cpu, 0xB0, 0x0000F7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:65 BGT @UNKNOWN1
    // Overlapping static entry reached from 0xC01ECF.
    case 0xC01ED3: {
        Instruction step(cpu, 0xF7, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01ED4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Bu : 0x002A4Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01ED3.
    case 0xC01ED5: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01ED4.
    case 0xC01ED6: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01ED7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01ED9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01ED9.
    case 0xC01EDB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01EDC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:67 LDA @VIRTUAL02
    case 0xC01EDE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/create_entity.asm:68 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01EE0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/create_entity.asm:68 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01EE1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:69 CLC
    case 0xC01EE2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:70 ADC @VIRTUAL06
    case 0xC01EE3: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:71 STA @VIRTUAL06
    case 0xC01EE5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01EE7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01EE7.
    case 0xC01EE9: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01EEA: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01EEC: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01EED: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01EEF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0E616.
    case 0xC01EF0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01EF1: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:73 LDA [@VIRTUAL0A]
    case 0xC01EF3: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:74 AND #$00FF
    case 0xC01EF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC01EF5.
    case 0xC01EF7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:555 STA scratch
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EF8: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:556 ASL
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EFA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:557 ASL
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EFB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EFC: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:559 ASL
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EFE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:76 JSL FIND_FREE_7E4682
    case 0xC01EFF: {
        Instruction step(cpu, 0x22, 0xC01AB3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/create_entity.asm:77 STA @LOCAL06
    case 0xC01F03: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:79 LDA @LOCAL06
    case 0xC01F05: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:80 CMP #$7FFF
    case 0xC01F07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x007FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:80 CMP #$7FFF
    // Overlapping static entry reached from 0xC01F07.
    case 0xC01F09: {
        Instruction step(cpu, 0x7F, 0xB002F0u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/overworld/create_entity.asm:81 BGT @UNKNOWN3
    case 0xC01F0A: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:81 BGT @UNKNOWN3
    case 0xC01F0C: {
        Instruction step(cpu, 0xB0, 0x0000F7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:81 BGT @UNKNOWN3
    // Overlapping static entry reached from 0xC01F09.
    case 0xC01F0D: {
        Instruction step(cpu, 0xF7, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_entity.asm:82 LDA #1
    case 0xC01F0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:82 LDA #1
    // Overlapping static entry reached from 0xC01F0D.
    case 0xC01F0F: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:82 LDA #1
    // Overlapping static entry reached from 0xC01F0E.
    case 0xC01F10: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:83 STA NEW_ENTITY_PRIORITY
    case 0xC01F11: {
        Instruction step(cpu, 0x8D, 0x000A40u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:85 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC01F14: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:85 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC01F16: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:85 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC01F18: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:85 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC01F1A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F1C: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F1E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F20: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F22: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:91 SEP #PROC_FLAGS::ACCUM8
    case 0xC01F24: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:92 LDY #3
    case 0xC01F26: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:92 LDY #3
    // Overlapping static entry reached from 0xC01F26.
    case 0xC01F28: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:93 LDA [@VIRTUAL06],Y
    case 0xC01F29: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:94 REP #PROC_FLAGS::ACCUM8
    case 0xC01F2B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:95 AND #$00FF
    case 0xC01F2D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:95 AND #$00FF
    // Overlapping static entry reached from 0xC01F2D.
    case 0xC01F2F: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:96 TAY
    case 0xC01F30: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:97 LDX @LOCAL07
    case 0xC01F31: {
        Instruction step(cpu, 0xA6, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:98 LDA @LOCAL06
    case 0xC01F33: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:99 JSR UNKNOWN_C01D38
    case 0xC01F35: {
        Instruction step(cpu, 0x20, 0x001D4Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/create_entity.asm:100 LDA @LOCAL0D
    case 0xC01F38: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:101 STA @VIRTUAL04
    case 0xC01F3A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:102 CMP #$FFFF
    case 0xC01F3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:102 CMP #$FFFF
    // Overlapping static entry reached from 0xC01F3C.
    case 0xC01F3E: {
        Instruction step(cpu, 0xFF, 0xA519F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_entity.asm:103 BEQ @UNKNOWN5
    case 0xC01F3F: {
        Instruction step(cpu, 0xF0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:104 LDA @VIRTUAL04
    case 0xC01F41: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:104 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC01F3E.
    case 0xC01F42: {
        Instruction step(cpu, 0x04, 0x00008Du, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:105 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC01F43: {
        Instruction step(cpu, 0x8D, 0x000A42u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:105 STA ENTITY_ALLOCATION_MIN_SLOT
    // Overlapping static entry reached from 0xC01F42.
    case 0xC01F44: {
        Instruction step(cpu, 0x42, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.reserved_no_operation();
        return step.finish();
    }
    // src/overworld/create_entity.asm:106 LDA @VIRTUAL04
    case 0xC01F46: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:107 INC
    case 0xC01F48: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/create_entity.asm:108 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC01F49: {
        Instruction step(cpu, 0x8D, 0x000A44u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:109 LDY @LOCAL0A
    case 0xC01F4C: {
        Instruction step(cpu, 0xA4, 0x000029u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:110 LDX @LOCAL09
    case 0xC01F4E: {
        Instruction step(cpu, 0xA6, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:111 LDA @LOCAL0C
    case 0xC01F50: {
        Instruction step(cpu, 0xA5, 0x00002Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:112 JSL INIT_ENTITY
    case 0xC01F52: {
        Instruction step(cpu, 0x22, 0xC09300u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/create_entity.asm:113 STA @VIRTUAL02
    case 0xC01F56: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:114 BRA @UNKNOWN6
    case 0xC01F58: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/create_entity.asm:116 STZ ENTITY_ALLOCATION_MIN_SLOT
    case 0xC01F5A: {
        Instruction step(cpu, 0x9C, 0x000A42u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:117 LDA #22
    case 0xC01F5D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:117 LDA #22
    // Overlapping static entry reached from 0xC01F5D.
    case 0xC01F5F: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:118 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC01F60: {
        Instruction step(cpu, 0x8D, 0x000A44u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:119 LDY @LOCAL0A
    case 0xC01F63: {
        Instruction step(cpu, 0xA4, 0x000029u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:120 LDX @LOCAL09
    case 0xC01F65: {
        Instruction step(cpu, 0xA6, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:121 LDA @LOCAL0C
    case 0xC01F67: {
        Instruction step(cpu, 0xA5, 0x00002Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:122 JSL INIT_ENTITY
    case 0xC01F69: {
        Instruction step(cpu, 0x22, 0xC09300u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/create_entity.asm:123 STA @VIRTUAL02
    case 0xC01F6D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:124 ORA #$0080
    case 0xC01F6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:124 ORA #$0080
    // Overlapping static entry reached from 0xC01F6F.
    case 0xC01F71: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:125 TAX
    case 0xC01F72: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:126 LDA #$FFFF
    case 0xC01F73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:126 LDA #$FFFF
    // Overlapping static entry reached from 0xC01F73.
    case 0xC01F75: {
        Instruction step(cpu, 0xFF, 0x1C2722u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_entity.asm:127 JSL ALLOC_SPRITE_MEM
    case 0xC01F76: {
        Instruction step(cpu, 0x22, 0xC01C27u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/create_entity.asm:127 JSL ALLOC_SPRITE_MEM
    // Overlapping static entry reached from 0xC01F75.
    case 0xC01F79: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A5u : 0x0002A5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:129 LDA @VIRTUAL02
    case 0xC01F7A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:129 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC01F79.
    case 0xC01F7B: {
        Instruction step(cpu, 0x02, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/create_entity.asm:130 ASL
    case 0xC01F7C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:131 TAY
    case 0xC01F7D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:132 STY @LOCAL05
    case 0xC01F7E: {
        Instruction step(cpu, 0x84, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:133 LDA @LOCAL06
    case 0xC01F80: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:134 CLC
    case 0xC01F82: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:135 ADC #.LOWORD(OVERWORLD_SPRITEMAPS)
    case 0xC01F83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000004u : 0x004A04u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:135 ADC #.LOWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01F83.
    case 0xC01F85: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/create_entity.asm:136 STA ENTITY_SPRITEMAP_POINTER_LOW,Y
    case 0xC01F86: {
        Instruction step(cpu, 0x99, 0x001124u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:137 LDA #.HIWORD(OVERWORLD_SPRITEMAPS)
    case 0xC01F89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:137 LDA #.HIWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01F89.
    case 0xC01F8B: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:138 STA ENTITY_SPRITEMAP_POINTER_HIGH,Y
    case 0xC01F8C: {
        Instruction step(cpu, 0x99, 0x001160u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:139 LDA [@VIRTUAL0A]
    case 0xC01F8F: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:140 AND #$00FF
    case 0xC01F91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:140 AND #$00FF
    // Overlapping static entry reached from 0xC01F91.
    case 0xC01F93: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F94: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F96: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F97: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F98: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:142 STA ENTITY_SPRITEMAP_SIZES,Y
    case 0xC01F9A: {
        Instruction step(cpu, 0x99, 0x002D14u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:143 LDA @LOCAL07
    case 0xC01F9D: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:144 STA ENTITY_SPRITEMAP_BEGINNING_INDICES,Y
    case 0xC01F9F: {
        Instruction step(cpu, 0x99, 0x002D50u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:145 TYA
    case 0xC01FA2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:146 CLC
    case 0xC01FA3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:147 ADC #.LOWORD(ENTITY_VRAM_ADDRESS)
    case 0xC01FA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00008Cu : 0x002D8Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:147 ADC #.LOWORD(ENTITY_VRAM_ADDRESS)
    // Overlapping static entry reached from 0xC01FA4.
    case 0xC01FA6: {
        Instruction step(cpu, 0x2D, 0x0086AAu, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:148 TAX
    case 0xC01FA7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:149 STX @LOCAL04
    case 0xC01FA8: {
        Instruction step(cpu, 0x86, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:149 STX @LOCAL04
    // Overlapping static entry reached from 0xC01FA6.
    case 0xC01FA9: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/overworld/create_entity.asm:150 LDA @LOCAL07
    case 0xC01FAA: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:151 ASL
    case 0xC01FAC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:152 TAX
    case 0xC01FAD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:153 LDA f:UNKNOWN_C42F8C,X
    case 0xC01FAE: {
        Instruction step(cpu, 0xBF, 0xC42ECAu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:154 CLC
    case 0xC01FB2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:155 ADC #$4000
    case 0xC01FB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:155 ADC #$4000
    // Overlapping static entry reached from 0xC01FB3.
    case 0xC01FB5: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/overworld/create_entity.asm:156 LDX @LOCAL04
    case 0xC01FB6: {
        Instruction step(cpu, 0xA6, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:157 STA __BSS_START__,X
    case 0xC01FB8: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC01FBB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:159 LDY #sprite_grouping::width
    case 0xC01FBD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:159 LDY #sprite_grouping::width
    // Overlapping static entry reached from 0xC01FBD.
    case 0xC01FBF: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:160 LDA [@VIRTUAL06],Y
    case 0xC01FC0: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:161 REP #PROC_FLAGS::ACCUM8
    case 0xC01FC2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:162 AND #$00FF
    case 0xC01FC4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC01FC4.
    case 0xC01FC6: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:163 ASL
    case 0xC01FC7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:164 LDY @LOCAL05
    case 0xC01FC8: {
        Instruction step(cpu, 0xA4, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:165 STA ENTITY_BYTE_WIDTHS,Y
    case 0xC01FCA: {
        Instruction step(cpu, 0x99, 0x002E7Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:166 LDA [@VIRTUAL06]
    case 0xC01FCD: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:167 AND #$00FF
    case 0xC01FCF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:167 AND #$00FF
    // Overlapping static entry reached from 0xC01FCF.
    case 0xC01FD1: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:168 STA ENTITY_TILE_HEIGHTS,Y
    case 0xC01FD2: {
        Instruction step(cpu, 0x99, 0x002EB8u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FD5: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FD7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FD9: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FDB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:170 SEP #PROC_FLAGS::ACCUM8
    case 0xC01FDD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:171 LDY #sprite_grouping::spritebank
    case 0xC01FDF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:171 LDY #sprite_grouping::spritebank
    // Overlapping static entry reached from 0xC01FDF.
    case 0xC01FE1: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:172 LDA [@VIRTUAL06],Y
    case 0xC01FE2: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:173 REP #PROC_FLAGS::ACCUM8
    case 0xC01FE4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:174 AND #$00FF
    case 0xC01FE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:174 AND #$00FF
    // Overlapping static entry reached from 0xC01FE6.
    case 0xC01FE8: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:175 LDY @LOCAL05
    case 0xC01FE9: {
        Instruction step(cpu, 0xA4, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:176 STA ENTITY_GRAPHICS_SPRITE_BANK,Y
    case 0xC01FEB: {
        Instruction step(cpu, 0x99, 0x002E40u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000041u : 0x006541u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FEE.
    case 0xC01FF0: {
        Instruction step(cpu, 0x65, 0x000085u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FF1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FF0.
    case 0xC01FF2: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FF2.
    case 0xC01FF4: {
        Instruction step(cpu, 0xEF, 0x088500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FF3.
    case 0xC01FF5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FF6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:178 LDA @LOCAL0B
    case 0xC01FF8: {
        Instruction step(cpu, 0xA5, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/create_entity.asm:179 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01FFA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/create_entity.asm:179 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01FFB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:180 CLC
    case 0xC01FFC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:181 ADC @VIRTUAL06
    case 0xC01FFD: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:182 STA @VIRTUAL06
    case 0xC01FFF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:182 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC017A9.
    case 0xC02000: {
        Instruction step(cpu, 0x06, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC02001: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC02000.
    case 0xC02002: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC02001.
    case 0xC02003: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC02004: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC02006: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC02007: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC02009: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC0200B: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0200D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0200F: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02011: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02013: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:185 LDA @LOCAL0B
    case 0xC02015: {
        Instruction step(cpu, 0xA5, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:186 LDY @LOCAL05
    case 0xC02017: {
        Instruction step(cpu, 0xA4, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:187 STA ENTITY_SPRITE_IDS,Y
    case 0xC02019: {
        Instruction step(cpu, 0x99, 0x0030D4u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:188 LDA @LOCAL01+2
    case 0xC0201C: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:189 STA ENTITY_GRAPHICS_PTR_HIGH,Y
    case 0xC0201E: {
        Instruction step(cpu, 0x99, 0x002E04u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:190 LDA @LOCAL01
    case 0xC02021: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:191 CLC
    case 0xC02023: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:192 ADC #sprite_grouping::spritepointerarray
    case 0xC02024: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:192 ADC #sprite_grouping::spritepointerarray
    // Overlapping static entry reached from 0xC02024.
    case 0xC02026: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:193 STA ENTITY_GRAPHICS_PTR_LOW,Y
    case 0xC02027: {
        Instruction step(cpu, 0x99, 0x002DC8u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:194 LDA NEW_SPRITE_TILE_HEIGHT
    case 0xC0202A: {
        Instruction step(cpu, 0xAD, 0x004A02u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:195 AND #$0001
    case 0xC0202D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:195 AND #$0001
    // Overlapping static entry reached from 0xC0202D.
    case 0xC0202F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:196 BEQ @UNKNOWN7
    case 0xC02030: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:197 LDA __BSS_START__,X
    case 0xC02032: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:198 CLC
    case 0xC02035: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:199 ADC #$0100
    case 0xC02036: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:199 ADC #$0100
    // Overlapping static entry reached from 0xC02036.
    case 0xC02038: {
        Instruction step(cpu, 0x01, 0x00009Du, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:200 STA __BSS_START__,X
    case 0xC02039: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:200 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC02038.
    case 0xC0203A: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:202 LDA @VIRTUAL02
    case 0xC0203C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:203 ASL
    case 0xC0203E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:204 TAX
    case 0xC0203F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:205 STX @LOCAL04
    case 0xC02040: {
        Instruction step(cpu, 0x86, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02042: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02044: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02046: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02048: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:207 INC @VIRTUAL06
    case 0xC0204A: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/create_entity.asm:208 INC @VIRTUAL06
    case 0xC0204C: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0204E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC02050: {
        Instruction step(cpu, 0x85, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC02052: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC02054: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:210 LDA [@LOCAL03]
    case 0xC02056: {
        Instruction step(cpu, 0xA7, 0x000017u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:211 AND #$00FF
    case 0xC02058: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:211 AND #$00FF
    // Overlapping static entry reached from 0xC02058.
    case 0xC0205A: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:212 STA ENTITY_SIZES,X
    case 0xC0205B: {
        Instruction step(cpu, 0x9D, 0x002F6Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC0205E: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02060: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02062: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02064: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:214 SEP #PROC_FLAGS::ACCUM8
    case 0xC02066: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:215 LDY #sprite_grouping::hitbox_width_ud
    case 0xC02068: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:215 LDY #sprite_grouping::hitbox_width_ud
    // Overlapping static entry reached from 0xC02068.
    case 0xC0206A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:216 LDA [@VIRTUAL06],Y
    case 0xC0206B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:217 REP #PROC_FLAGS::ACCUM8
    case 0xC0206D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:218 AND #$00FF
    case 0xC0206F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:218 AND #$00FF
    // Overlapping static entry reached from 0xC0206F.
    case 0xC02071: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:219 STA ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC02072: {
        Instruction step(cpu, 0x9D, 0x003764u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:220 SEP #PROC_FLAGS::ACCUM8
    case 0xC02075: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:221 LDY #sprite_grouping::hitbox_height_ud
    case 0xC02077: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:221 LDY #sprite_grouping::hitbox_height_ud
    // Overlapping static entry reached from 0xC02077.
    case 0xC02079: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:222 LDA [@VIRTUAL06],Y
    case 0xC0207A: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC0207C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:224 AND #$00FF
    case 0xC0207E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:224 AND #$00FF
    // Overlapping static entry reached from 0xC0207E.
    case 0xC02080: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:225 STA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC02081: {
        Instruction step(cpu, 0x9D, 0x0037A0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:226 SEP #PROC_FLAGS::ACCUM8
    case 0xC02084: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:227 LDY #sprite_grouping::hitbox_width_lr
    case 0xC02086: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:227 LDY #sprite_grouping::hitbox_width_lr
    // Overlapping static entry reached from 0xC02086.
    case 0xC02088: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:228 LDA [@VIRTUAL06],Y
    case 0xC02089: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:229 REP #PROC_FLAGS::ACCUM8
    case 0xC0208B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:230 AND #$00FF
    case 0xC0208D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:230 AND #$00FF
    // Overlapping static entry reached from 0xC0208D.
    case 0xC0208F: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:231 STA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC02090: {
        Instruction step(cpu, 0x9D, 0x0037DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:232 SEP #PROC_FLAGS::ACCUM8
    case 0xC02093: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:233 LDY #sprite_grouping::hitbox_height_lr
    case 0xC02095: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:233 LDY #sprite_grouping::hitbox_height_lr
    // Overlapping static entry reached from 0xC02095.
    case 0xC02097: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:234 LDA [@VIRTUAL06],Y
    case 0xC02098: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:235 REP #PROC_FLAGS::ACCUM8
    case 0xC0209A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:236 AND #$00FF
    case 0xC0209C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:236 AND #$00FF
    // Overlapping static entry reached from 0xC0209C.
    case 0xC0209E: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:237 STA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC0209F: {
        Instruction step(cpu, 0x9D, 0x001A40u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:238 LDA [@LOCAL03]
    case 0xC020A2: {
        Instruction step(cpu, 0xA7, 0x000017u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:239 AND #$00FF
    case 0xC020A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:239 AND #$00FF
    // Overlapping static entry reached from 0xC020A4.
    case 0xC020A6: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:240 ASL
    case 0xC020A7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:241 TAX
    case 0xC020A8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:242 LDA f:UNKNOWN_C42AEB,X
    case 0xC020A9: {
        Instruction step(cpu, 0xBF, 0xC42A29u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:243 LDX @LOCAL04
    case 0xC020AD: {
        Instruction step(cpu, 0xA6, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:244 STA ENTITY_HITBOX_ENABLED,X
    case 0xC020AF: {
        Instruction step(cpu, 0x9D, 0x003728u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:245 SEP #PROC_FLAGS::ACCUM8
    case 0xC020B2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:246 LDY #sprite_grouping::width
    case 0xC020B4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:246 LDY #sprite_grouping::width
    // Overlapping static entry reached from 0xC020B4.
    case 0xC020B6: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:247 LDA [@VIRTUAL0A],Y
    case 0xC020B7: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:248 STA @LOCAL02
    case 0xC020B9: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:249 STA @VIRTUAL00
    case 0xC020BB: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:250 LDA [@VIRTUAL0A]
    case 0xC020BD: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:251 SEC
    case 0xC020BF: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:252 SBC @VIRTUAL00
    case 0xC020C0: {
        Instruction step(cpu, 0xE5, 0x000000u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_entity.asm:253 REP #PROC_FLAGS::ACCUM8
    case 0xC020C2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:254 AND #$00FF
    case 0xC020C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:254 AND #$00FF
    // Overlapping static entry reached from 0xC020C4.
    case 0xC020C6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:255 STA @VIRTUAL04
    case 0xC020C7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:256 LDA @LOCAL02
    case 0xC020C9: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:257 AND #$00FF
    case 0xC020CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:257 AND #$00FF
    // Overlapping static entry reached from 0xC020CB.
    case 0xC020CD: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:258 XBA
    case 0xC020CE: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/create_entity.asm:259 AND #$FF00
    case 0xC020CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:259 AND #$FF00
    // Overlapping static entry reached from 0xC020CF.
    case 0xC020D1: {
        Instruction step(cpu, 0xFF, 0x9D0405u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_entity.asm:260 ORA @VIRTUAL04
    case 0xC020D2: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:261 STA ENTITY_UPPER_LOWER_BODY_DIVIDES,X
    case 0xC020D4: {
        Instruction step(cpu, 0x9D, 0x002FE4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:261 STA ENTITY_UPPER_LOWER_BODY_DIVIDES,X
    // Overlapping static entry reached from 0xC020D1.
    case 0xC020D5: {
        Instruction step(cpu, 0xE4, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:262 LDA #$FFFF
    case 0xC020D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:262 LDA #$FFFF
    // Overlapping static entry reached from 0xC020D7.
    case 0xC020D9: {
        Instruction step(cpu, 0xFF, 0x314C9Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_entity.asm:263 STA ENTITY_ENEMY_SPAWN_TILES,X
    case 0xC020DA: {
        Instruction step(cpu, 0x9D, 0x00314Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:264 STA ENTITY_ENEMY_IDS,X
    case 0xC020DD: {
        Instruction step(cpu, 0x9D, 0x003110u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:265 STA ENTITY_NPC_IDS,X
    case 0xC020E0: {
        Instruction step(cpu, 0x9D, 0x003098u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:265 STA ENTITY_NPC_IDS,X
    // Overlapping static entry reached from 0xC0EC55.
    case 0xC020E2: {
        Instruction step(cpu, 0x30, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/create_entity.asm:266 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC020E3: {
        Instruction step(cpu, 0x9D, 0x002C9Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:266 STA ENTITY_COLLIDED_OBJECTS,X
    // Overlapping static entry reached from 0xC020E2.
    case 0xC020E4: {
        Instruction step(cpu, 0x9C, 0x009E2Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:267 STZ ENTITY_SURFACE_FLAGS,X
    case 0xC020E6: {
        Instruction step(cpu, 0x9E, 0x002FA8u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:267 STZ ENTITY_SURFACE_FLAGS,X
    // Overlapping static entry reached from 0xC020E4.
    case 0xC020E7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:267 STZ ENTITY_SURFACE_FLAGS,X
    // Overlapping static entry reached from 0xC020E7.
    case 0xC020E8: {
        Instruction step(cpu, 0x2F, 0x31C49Eu, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:268 STZ ENTITY_UNKNOWN_2DC6,X
    case 0xC020E9: {
        Instruction step(cpu, 0x9E, 0x0031C4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:269 STZ ENTITY_UNUSED,X
    case 0xC020EC: {
        Instruction step(cpu, 0x9E, 0x003188u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:270 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC020EF: {
        Instruction step(cpu, 0x9E, 0x00305Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:271 STZ ENTITY_MOVEMENT_SPEEDS,X
    case 0xC020F2: {
        Instruction step(cpu, 0x9E, 0x002F30u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:272 STZ ENTITY_DIRECTIONS,X
    case 0xC020F5: {
        Instruction step(cpu, 0x9E, 0x002EF4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:273 STZ ENTITY_OBSTACLE_FLAGS,X
    case 0xC020F8: {
        Instruction step(cpu, 0x9E, 0x002CD8u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:274 LDA @VIRTUAL02
    case 0xC020FB: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:274 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC0212A.
    case 0xC020FC: {
        Instruction step(cpu, 0x02, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/create_entity.asm:276 PLD
    case 0xC020FD: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/overworld/create_entity.asm:277 RTL
    case 0xC020FE: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
