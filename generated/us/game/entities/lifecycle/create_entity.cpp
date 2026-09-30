// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/create_entity.asm
bool resume_overworld_create_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/create_entity.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC01E49: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E4B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E4C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E4D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CFu : 0x00FFCFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    // Overlapping static entry reached from 0xC01E4E.
    case 0xC01E50: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E51: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/create_entity.asm:26 END_STACK_VARS
    case 0xC01E52: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:27 STY @VIRTUAL04
    case 0xC01E53: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:27 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC01E50.
    case 0xC01E54: {
        Instruction step(cpu, 0x04, 0x000048u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:28 PHA
    case 0xC01E55: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:29 LDA @VIRTUAL04
    case 0xC01E56: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:30 STA @LOCAL0D
    case 0xC01E58: {
        Instruction step(cpu, 0x85, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:31 PLA
    case 0xC01E5A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:32 STX @LOCAL0C
    case 0xC01E5B: {
        Instruction step(cpu, 0x86, 0x00002Du, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:33 STA @LOCAL0B
    case 0xC01E5D: {
        Instruction step(cpu, 0x85, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:34 LDY @PARAM04
    case 0xC01E5F: {
        Instruction step(cpu, 0xA4, 0x000041u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:35 STY @LOCAL0A
    case 0xC01E61: {
        Instruction step(cpu, 0x84, 0x000029u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:36 LDX @PARAM03
    case 0xC01E63: {
        Instruction step(cpu, 0xA6, 0x00003Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:37 STX @LOCAL09
    case 0xC01E65: {
        Instruction step(cpu, 0x86, 0x000027u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:38 LDA DEBUG
    case 0xC01E67: {
        Instruction step(cpu, 0xAD, 0x00436Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:39 BEQ @UNKNOWN0
    case 0xC01E6A: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:40 LDA @LOCAL0B
    case 0xC01E6C: {
        Instruction step(cpu, 0xA5, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:41 CMP #$FFFF
    case 0xC01E6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:41 CMP #$FFFF
    // Overlapping static entry reached from 0xC01E6E.
    case 0xC01E70: {
        Instruction step(cpu, 0xFF, 0xA906D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_entity.asm:42 BNE @UNKNOWN0
    case 0xC01E71: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:43 LDA #0
    case 0xC01E73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:43 LDA #0
    // Overlapping static entry reached from 0xC01E70.
    case 0xC01E74: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:43 LDA #0
    // Overlapping static entry reached from 0xC01E73.
    case 0xC01E75: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:44 JMP @UNKNOWN8
    case 0xC01E76: {
        Instruction step(cpu, 0x4C, 0x0020EFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Fu : 0x00133Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E79.
    case 0xC01E7B: {
        Instruction step(cpu, 0x13, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E7C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E7B.
    case 0xC01E7D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01E7E.
    case 0xC01E80: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_entity.asm:46 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC01E81: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:47 LDA @LOCAL0B
    case 0xC01E83: {
        Instruction step(cpu, 0xA5, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/create_entity.asm:48 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01E85: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/create_entity.asm:48 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01E86: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:49 CLC
    case 0xC01E87: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:50 ADC @VIRTUAL0A
    case 0xC01E88: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:51 STA @VIRTUAL0A
    case 0xC01E8A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E8C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC01E8C.
    case 0xC01E8E: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E8F: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E91: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E92: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E94: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/create_entity.asm:52 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC01E96: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01E98: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01E9A: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01E9C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:53 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC01E9E: {
        Instruction step(cpu, 0x85, 0x000025u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:54 LDA @LOCAL0B
    case 0xC01EA0: {
        Instruction step(cpu, 0xA5, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:55 JSR UNKNOWN_C01DED
    case 0xC01EA2: {
        Instruction step(cpu, 0x20, 0x001DEDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/create_entity.asm:56 STA @VIRTUAL02
    case 0xC01EA5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:57 LDY @VIRTUAL04
    case 0xC01EA7: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:58 LDX NEW_SPRITE_TILE_HEIGHT
    case 0xC01EA9: {
        Instruction step(cpu, 0xAE, 0x00467Cu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:59 LDA NEW_SPRITE_TILE_WIDTH
    case 0xC01EAC: {
        Instruction step(cpu, 0xAD, 0x00467Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:60 JSL UNKNOWN_C01C52
    case 0xC01EAF: {
        Instruction step(cpu, 0x22, 0xC01C52u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/create_entity.asm:61 STA @LOCAL07
    case 0xC01EB3: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:63 LDA @LOCAL07
    case 0xC01EB5: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:64 CMP #$7FFF
    case 0xC01EB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x007FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:64 CMP #$7FFF
    // Overlapping static entry reached from 0xC01EB7.
    case 0xC01EB9: {
        Instruction step(cpu, 0x7F, 0xB002F0u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/overworld/create_entity.asm:65 BGT @UNKNOWN1
    case 0xC01EBA: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:65 BGT @UNKNOWN1
    case 0xC01EBC: {
        Instruction step(cpu, 0xB0, 0x0000F7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:65 BGT @UNKNOWN1
    // Overlapping static entry reached from 0xC01EB9.
    case 0xC01EBD: {
        Instruction step(cpu, 0xF7, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01EBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Du : 0x002B0Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01EBD.
    case 0xC01EBF: {
        Instruction step(cpu, 0x0D, 0x00852Bu, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01EBE.
    case 0xC01EC0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01EC1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01EBF.
    case 0xC01EC2: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01EC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01EC2.
    case 0xC01EC4: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    // Overlapping static entry reached from 0xC01EC3.
    case 0xC01EC5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_entity.asm:66 LOADPTR UNKNOWN_C42B0D, @VIRTUAL06
    case 0xC01EC6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:67 LDA @VIRTUAL02
    case 0xC01EC8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/create_entity.asm:68 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01ECA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/create_entity.asm:68 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01ECB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:69 CLC
    case 0xC01ECC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:70 ADC @VIRTUAL06
    case 0xC01ECD: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:71 STA @VIRTUAL06
    case 0xC01ECF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01ED1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC01ED1.
    case 0xC01ED3: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01ED4: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01ED6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01ED7: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01ED9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/create_entity.asm:72 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC01EDB: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:73 LDA [@VIRTUAL0A]
    case 0xC01EDD: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:74 AND #$00FF
    case 0xC01EDF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC01EDF.
    case 0xC01EE1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:555 STA scratch
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EE2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:556 ASL
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EE4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:557 ASL
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EE5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EE6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:559 ASL
    // Macro caller: src/overworld/create_entity.asm:75 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap) * 2
    case 0xC01EE8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:76 JSL FIND_FREE_7E4682
    case 0xC01EE9: {
        Instruction step(cpu, 0x22, 0xC01A9Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/create_entity.asm:77 STA @LOCAL06
    case 0xC01EED: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:79 LDA @LOCAL06
    case 0xC01EEF: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:79 LDA @LOCAL06
    // Overlapping static entry reached from 0xC0E651.
    case 0xC01EF0: {
        Instruction step(cpu, 0x1F, 0x7FFFC9u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:80 CMP #$7FFF
    case 0xC01EF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x007FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:80 CMP #$7FFF
    // Overlapping static entry reached from 0xC01EF1.
    case 0xC01EF3: {
        Instruction step(cpu, 0x7F, 0xB002F0u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/overworld/create_entity.asm:81 BGT @UNKNOWN3
    case 0xC01EF4: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:81 BGT @UNKNOWN3
    case 0xC01EF6: {
        Instruction step(cpu, 0xB0, 0x0000F7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/create_entity.asm:81 BGT @UNKNOWN3
    // Overlapping static entry reached from 0xC01EF3.
    case 0xC01EF7: {
        Instruction step(cpu, 0xF7, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_entity.asm:82 LDA #1
    case 0xC01EF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:82 LDA #1
    // Overlapping static entry reached from 0xC01EF7.
    case 0xC01EF9: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:82 LDA #1
    // Overlapping static entry reached from 0xC01EF8.
    case 0xC01EFA: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:83 STA NEW_ENTITY_PRIORITY
    case 0xC01EFB: {
        Instruction step(cpu, 0x8D, 0x000A4Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:87 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC01EFE: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:87 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC01F00: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:87 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC01F02: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:87 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC01F04: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:88 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01F06: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:88 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01F08: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:88 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01F0A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:88 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC01F0C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F0E: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F10: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F12: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:90 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01F14: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:91 SEP #PROC_FLAGS::ACCUM8
    case 0xC01F16: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:92 LDY #3
    case 0xC01F18: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:92 LDY #3
    // Overlapping static entry reached from 0xC01F18.
    case 0xC01F1A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:93 LDA [@VIRTUAL06],Y
    case 0xC01F1B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:94 REP #PROC_FLAGS::ACCUM8
    case 0xC01F1D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:95 AND #$00FF
    case 0xC01F1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:95 AND #$00FF
    // Overlapping static entry reached from 0xC01F1F.
    case 0xC01F21: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:96 TAY
    case 0xC01F22: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:97 LDX @LOCAL07
    case 0xC01F23: {
        Instruction step(cpu, 0xA6, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:98 LDA @LOCAL06
    case 0xC01F25: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:99 JSR UNKNOWN_C01D38
    case 0xC01F27: {
        Instruction step(cpu, 0x20, 0x001D38u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/create_entity.asm:100 LDA @LOCAL0D
    case 0xC01F2A: {
        Instruction step(cpu, 0xA5, 0x00002Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:101 STA @VIRTUAL04
    case 0xC01F2C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:102 CMP #$FFFF
    case 0xC01F2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:102 CMP #$FFFF
    // Overlapping static entry reached from 0xC01F2E.
    case 0xC01F30: {
        Instruction step(cpu, 0xFF, 0xA519F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_entity.asm:103 BEQ @UNKNOWN5
    case 0xC01F31: {
        Instruction step(cpu, 0xF0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:104 LDA @VIRTUAL04
    case 0xC01F33: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:104 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC01F30.
    case 0xC01F34: {
        Instruction step(cpu, 0x04, 0x00008Du, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:105 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC01F35: {
        Instruction step(cpu, 0x8D, 0x000A4Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:105 STA ENTITY_ALLOCATION_MIN_SLOT
    // Overlapping static entry reached from 0xC01F34.
    case 0xC01F36: {
        Instruction step(cpu, 0x4C, 0x00A50Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/create_entity.asm:106 LDA @VIRTUAL04
    case 0xC01F38: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:107 INC
    case 0xC01F3A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/create_entity.asm:108 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC01F3B: {
        Instruction step(cpu, 0x8D, 0x000A4Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:109 LDY @LOCAL0A
    case 0xC01F3E: {
        Instruction step(cpu, 0xA4, 0x000029u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:110 LDX @LOCAL09
    case 0xC01F40: {
        Instruction step(cpu, 0xA6, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:111 LDA @LOCAL0C
    case 0xC01F42: {
        Instruction step(cpu, 0xA5, 0x00002Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:112 JSL INIT_ENTITY
    case 0xC01F44: {
        Instruction step(cpu, 0x22, 0xC09321u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/create_entity.asm:113 STA @VIRTUAL02
    case 0xC01F48: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:114 BRA @UNKNOWN6
    case 0xC01F4A: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/create_entity.asm:116 STZ ENTITY_ALLOCATION_MIN_SLOT
    case 0xC01F4C: {
        Instruction step(cpu, 0x9C, 0x000A4Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:117 LDA #22
    case 0xC01F4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:117 LDA #22
    // Overlapping static entry reached from 0xC01F4F.
    case 0xC01F51: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:118 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC01F52: {
        Instruction step(cpu, 0x8D, 0x000A4Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:119 LDY @LOCAL0A
    case 0xC01F55: {
        Instruction step(cpu, 0xA4, 0x000029u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:120 LDX @LOCAL09
    case 0xC01F57: {
        Instruction step(cpu, 0xA6, 0x000027u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:121 LDA @LOCAL0C
    case 0xC01F59: {
        Instruction step(cpu, 0xA5, 0x00002Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:122 JSL INIT_ENTITY
    case 0xC01F5B: {
        Instruction step(cpu, 0x22, 0xC09321u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/create_entity.asm:123 STA @VIRTUAL02
    case 0xC01F5F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:124 ORA #$0080
    case 0xC01F61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:124 ORA #$0080
    // Overlapping static entry reached from 0xC01F61.
    case 0xC01F63: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:125 TAX
    case 0xC01F64: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:126 LDA #$FFFF
    case 0xC01F65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:126 LDA #$FFFF
    // Overlapping static entry reached from 0xC01F65.
    case 0xC01F67: {
        Instruction step(cpu, 0xFF, 0x1C1122u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_entity.asm:127 JSL ALLOC_SPRITE_MEM
    case 0xC01F68: {
        Instruction step(cpu, 0x22, 0xC01C11u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/create_entity.asm:127 JSL ALLOC_SPRITE_MEM
    // Overlapping static entry reached from 0xC01F67.
    case 0xC01F6B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A5u : 0x0002A5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:129 LDA @VIRTUAL02
    case 0xC01F6C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:129 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC01F6B.
    case 0xC01F6D: {
        Instruction step(cpu, 0x02, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/create_entity.asm:130 ASL
    case 0xC01F6E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:131 TAY
    case 0xC01F6F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:132 STY @LOCAL05
    case 0xC01F70: {
        Instruction step(cpu, 0x84, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:133 LDA @LOCAL06
    case 0xC01F72: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:134 CLC
    case 0xC01F74: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:135 ADC #.LOWORD(OVERWORLD_SPRITEMAPS)
    case 0xC01F75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Eu : 0x00467Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:135 ADC #.LOWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01F75.
    case 0xC01F77: {
        Instruction step(cpu, 0x46, 0x000099u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/create_entity.asm:136 STA ENTITY_SPRITEMAP_POINTER_LOW,Y
    case 0xC01F78: {
        Instruction step(cpu, 0x99, 0x00112Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:136 STA ENTITY_SPRITEMAP_POINTER_LOW,Y
    // Overlapping static entry reached from 0xC01F77.
    case 0xC01F79: {
        Instruction step(cpu, 0x2E, 0x00A911u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:137 LDA #.HIWORD(OVERWORLD_SPRITEMAPS)
    case 0xC01F7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:137 LDA #.HIWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01F79.
    case 0xC01F7C: {
        Instruction step(cpu, 0x7E, 0x009900u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/overworld/create_entity.asm:137 LDA #.HIWORD(OVERWORLD_SPRITEMAPS)
    // Overlapping static entry reached from 0xC01F7B.
    case 0xC01F7D: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:138 STA ENTITY_SPRITEMAP_POINTER_HIGH,Y
    case 0xC01F7E: {
        Instruction step(cpu, 0x99, 0x00116Au, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:138 STA ENTITY_SPRITEMAP_POINTER_HIGH,Y
    // Overlapping static entry reached from 0xC01F7C.
    case 0xC01F7F: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // src/overworld/create_entity.asm:138 STA ENTITY_SPRITEMAP_POINTER_HIGH,Y
    // Overlapping static entry reached from 0xC01F7F.
    case 0xC01F80: {
        Instruction step(cpu, 0x11, 0x0000A7u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:139 LDA [@VIRTUAL0A]
    case 0xC01F81: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:139 LDA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC01F80.
    case 0xC01F82: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:140 AND #$00FF
    case 0xC01F83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:140 AND #$00FF
    // Overlapping static entry reached from 0xC01F83.
    case 0xC01F85: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F86: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F88: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F89: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/create_entity.asm:141 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(spritemap)
    case 0xC01F8A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:142 STA ENTITY_SPRITEMAP_SIZES,Y
    case 0xC01F8C: {
        Instruction step(cpu, 0x99, 0x002916u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:143 LDA @LOCAL07
    case 0xC01F8F: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:144 STA ENTITY_SPRITEMAP_BEGINNING_INDICES,Y
    case 0xC01F91: {
        Instruction step(cpu, 0x99, 0x002952u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:145 TYA
    case 0xC01F94: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:146 CLC
    case 0xC01F95: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:147 ADC #.LOWORD(ENTITY_VRAM_ADDRESS)
    case 0xC01F96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00008Eu : 0x00298Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:147 ADC #.LOWORD(ENTITY_VRAM_ADDRESS)
    // Overlapping static entry reached from 0xC01F96.
    case 0xC01F98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000AAu : 0x0086AAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:148 TAX
    case 0xC01F99: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:149 STX @LOCAL04
    case 0xC01F9A: {
        Instruction step(cpu, 0x86, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:149 STX @LOCAL04
    // Overlapping static entry reached from 0xC01F98.
    case 0xC01F9B: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/overworld/create_entity.asm:150 LDA @LOCAL07
    case 0xC01F9C: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:151 ASL
    case 0xC01F9E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:152 TAX
    case 0xC01F9F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:153 LDA f:UNKNOWN_C42F8C,X
    case 0xC01FA0: {
        Instruction step(cpu, 0xBF, 0xC42F8Cu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:154 CLC
    case 0xC01FA4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:155 ADC #$4000
    case 0xC01FA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:155 ADC #$4000
    // Overlapping static entry reached from 0xC01FA5.
    case 0xC01FA7: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/overworld/create_entity.asm:156 LDX @LOCAL04
    case 0xC01FA8: {
        Instruction step(cpu, 0xA6, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:157 STA __BSS_START__,X
    case 0xC01FAA: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC01FAD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:159 LDY #sprite_grouping::width
    case 0xC01FAF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:159 LDY #sprite_grouping::width
    // Overlapping static entry reached from 0xC01FAF.
    case 0xC01FB1: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:160 LDA [@VIRTUAL06],Y
    case 0xC01FB2: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:161 REP #PROC_FLAGS::ACCUM8
    case 0xC01FB4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:162 AND #$00FF
    case 0xC01FB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC01FB6.
    case 0xC01FB8: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:163 ASL
    case 0xC01FB9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:164 LDY @LOCAL05
    case 0xC01FBA: {
        Instruction step(cpu, 0xA4, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:165 STA ENTITY_BYTE_WIDTHS,Y
    case 0xC01FBC: {
        Instruction step(cpu, 0x99, 0x002A7Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:166 LDA [@VIRTUAL06]
    case 0xC01FBF: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:167 AND #$00FF
    case 0xC01FC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:167 AND #$00FF
    // Overlapping static entry reached from 0xC01FC1.
    case 0xC01FC3: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:168 STA ENTITY_TILE_HEIGHTS,Y
    case 0xC01FC4: {
        Instruction step(cpu, 0x99, 0x002ABAu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FC7: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FC9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FCB: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:169 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC01FCD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:170 SEP #PROC_FLAGS::ACCUM8
    case 0xC01FCF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:171 LDY #sprite_grouping::spritebank
    case 0xC01FD1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:171 LDY #sprite_grouping::spritebank
    // Overlapping static entry reached from 0xC01FD1.
    case 0xC01FD3: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:172 LDA [@VIRTUAL06],Y
    case 0xC01FD4: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:173 REP #PROC_FLAGS::ACCUM8
    case 0xC01FD6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:174 AND #$00FF
    case 0xC01FD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:174 AND #$00FF
    // Overlapping static entry reached from 0xC01FD8.
    case 0xC01FDA: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:175 LDY @LOCAL05
    case 0xC01FDB: {
        Instruction step(cpu, 0xA4, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:176 STA ENTITY_GRAPHICS_SPRITE_BANK,Y
    case 0xC01FDD: {
        Instruction step(cpu, 0x99, 0x002A42u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FE0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Fu : 0x00133Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FE0.
    case 0xC01FE2: {
        Instruction step(cpu, 0x13, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FE3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FE2.
    case 0xC01FE4: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FE4.
    case 0xC01FE6: {
        Instruction step(cpu, 0xEF, 0x088500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FE5.
    case 0xC01FE7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_entity.asm:177 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL06
    case 0xC01FE8: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:178 LDA @LOCAL0B
    case 0xC01FEA: {
        Instruction step(cpu, 0xA5, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/create_entity.asm:179 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01FEC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/create_entity.asm:179 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC01FED: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:180 CLC
    case 0xC01FEE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:181 ADC @VIRTUAL06
    case 0xC01FEF: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:182 STA @VIRTUAL06
    case 0xC01FF1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC01FF3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC01FF3.
    case 0xC01FF5: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC01FF6: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC01FF8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC01FF9: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC01FFB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/create_entity.asm:183 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC01FFD: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC01FFF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02001: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02003: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:184 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC02005: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:185 LDA @LOCAL0B
    case 0xC02007: {
        Instruction step(cpu, 0xA5, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:186 LDY @LOCAL05
    case 0xC02009: {
        Instruction step(cpu, 0xA4, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:187 STA ENTITY_SPRITE_IDS,Y
    case 0xC0200B: {
        Instruction step(cpu, 0x99, 0x002CD6u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:188 LDA @LOCAL01+2
    case 0xC0200E: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:189 STA ENTITY_GRAPHICS_PTR_HIGH,Y
    case 0xC02010: {
        Instruction step(cpu, 0x99, 0x002A06u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:190 LDA @LOCAL01
    case 0xC02013: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:191 CLC
    case 0xC02015: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:192 ADC #sprite_grouping::spritepointerarray
    case 0xC02016: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:192 ADC #sprite_grouping::spritepointerarray
    // Overlapping static entry reached from 0xC02016.
    case 0xC02018: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:193 STA ENTITY_GRAPHICS_PTR_LOW,Y
    case 0xC02019: {
        Instruction step(cpu, 0x99, 0x0029CAu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:194 LDA NEW_SPRITE_TILE_HEIGHT
    case 0xC0201C: {
        Instruction step(cpu, 0xAD, 0x00467Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:195 AND #$0001
    case 0xC0201F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:195 AND #$0001
    // Overlapping static entry reached from 0xC0201F.
    case 0xC02021: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:196 BEQ @UNKNOWN7
    case 0xC02022: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:197 LDA __BSS_START__,X
    case 0xC02024: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:198 CLC
    case 0xC02027: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:199 ADC #$0100
    case 0xC02028: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:199 ADC #$0100
    // Overlapping static entry reached from 0xC02028.
    case 0xC0202A: {
        Instruction step(cpu, 0x01, 0x00009Du, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:200 STA __BSS_START__,X
    case 0xC0202B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:200 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0202A.
    case 0xC0202C: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:202 LDA @VIRTUAL02
    case 0xC0202E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:203 ASL
    case 0xC02030: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:204 TAX
    case 0xC02031: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:205 STX @LOCAL04
    case 0xC02032: {
        Instruction step(cpu, 0x86, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02034: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02036: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02038: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:206 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC0203A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:207 INC @VIRTUAL06
    case 0xC0203C: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/create_entity.asm:208 INC @VIRTUAL06
    case 0xC0203E: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC02040: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC02042: {
        Instruction step(cpu, 0x85, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC02044: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:209 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC02046: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:210 LDA [@LOCAL03]
    case 0xC02048: {
        Instruction step(cpu, 0xA7, 0x000017u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:211 AND #$00FF
    case 0xC0204A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:211 AND #$00FF
    // Overlapping static entry reached from 0xC0204A.
    case 0xC0204C: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:212 STA ENTITY_SIZES,X
    case 0xC0204D: {
        Instruction step(cpu, 0x9D, 0x002B6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02050: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02052: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02054: {
        Instruction step(cpu, 0xA5, 0x000025u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/create_entity.asm:213 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC02056: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:214 SEP #PROC_FLAGS::ACCUM8
    case 0xC02058: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:215 LDY #sprite_grouping::hitbox_width_ud
    case 0xC0205A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:215 LDY #sprite_grouping::hitbox_width_ud
    // Overlapping static entry reached from 0xC0205A.
    case 0xC0205C: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:216 LDA [@VIRTUAL06],Y
    case 0xC0205D: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:217 REP #PROC_FLAGS::ACCUM8
    case 0xC0205F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:218 AND #$00FF
    case 0xC02061: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:218 AND #$00FF
    // Overlapping static entry reached from 0xC02061.
    case 0xC02063: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:219 STA ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC02064: {
        Instruction step(cpu, 0x9D, 0x003366u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:220 SEP #PROC_FLAGS::ACCUM8
    case 0xC02067: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:221 LDY #sprite_grouping::hitbox_height_ud
    case 0xC02069: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:221 LDY #sprite_grouping::hitbox_height_ud
    // Overlapping static entry reached from 0xC02069.
    case 0xC0206B: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:222 LDA [@VIRTUAL06],Y
    case 0xC0206C: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC0206E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:224 AND #$00FF
    case 0xC02070: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:224 AND #$00FF
    // Overlapping static entry reached from 0xC02070.
    case 0xC02072: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:225 STA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC02073: {
        Instruction step(cpu, 0x9D, 0x0033A2u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:226 SEP #PROC_FLAGS::ACCUM8
    case 0xC02076: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:227 LDY #sprite_grouping::hitbox_width_lr
    case 0xC02078: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:227 LDY #sprite_grouping::hitbox_width_lr
    // Overlapping static entry reached from 0xC02078.
    case 0xC0207A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:228 LDA [@VIRTUAL06],Y
    case 0xC0207B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:229 REP #PROC_FLAGS::ACCUM8
    case 0xC0207D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:230 AND #$00FF
    case 0xC0207F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:230 AND #$00FF
    // Overlapping static entry reached from 0xC0207F.
    case 0xC02081: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:231 STA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC02082: {
        Instruction step(cpu, 0x9D, 0x0033DEu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:232 SEP #PROC_FLAGS::ACCUM8
    case 0xC02085: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:233 LDY #sprite_grouping::hitbox_height_lr
    case 0xC02087: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:233 LDY #sprite_grouping::hitbox_height_lr
    // Overlapping static entry reached from 0xC02087.
    case 0xC02089: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:234 LDA [@VIRTUAL06],Y
    case 0xC0208A: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:235 REP #PROC_FLAGS::ACCUM8
    case 0xC0208C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:236 AND #$00FF
    case 0xC0208E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:236 AND #$00FF
    // Overlapping static entry reached from 0xC0208E.
    case 0xC02090: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:237 STA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC02091: {
        Instruction step(cpu, 0x9D, 0x001A4Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:238 LDA [@LOCAL03]
    case 0xC02094: {
        Instruction step(cpu, 0xA7, 0x000017u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:239 AND #$00FF
    case 0xC02096: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:239 AND #$00FF
    // Overlapping static entry reached from 0xC02096.
    case 0xC02098: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:240 ASL
    case 0xC02099: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_entity.asm:241 TAX
    case 0xC0209A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:242 LDA f:UNKNOWN_C42AEB,X
    case 0xC0209B: {
        Instruction step(cpu, 0xBF, 0xC42AEBu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:243 LDX @LOCAL04
    case 0xC0209F: {
        Instruction step(cpu, 0xA6, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/create_entity.asm:244 STA ENTITY_HITBOX_ENABLED,X
    case 0xC020A1: {
        Instruction step(cpu, 0x9D, 0x00332Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:245 SEP #PROC_FLAGS::ACCUM8
    case 0xC020A4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:246 LDY #sprite_grouping::width
    case 0xC020A6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_entity.asm:246 LDY #sprite_grouping::width
    // Overlapping static entry reached from 0xC020A6.
    case 0xC020A8: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:247 LDA [@VIRTUAL0A],Y
    case 0xC020A9: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:248 STA @LOCAL02
    case 0xC020AB: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:249 STA @VIRTUAL00
    case 0xC020AD: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:250 LDA [@VIRTUAL0A]
    case 0xC020AF: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:251 SEC
    case 0xC020B1: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/create_entity.asm:252 SBC @VIRTUAL00
    case 0xC020B2: {
        Instruction step(cpu, 0xE5, 0x000000u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_entity.asm:253 REP #PROC_FLAGS::ACCUM8
    case 0xC020B4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/create_entity.asm:254 AND #$00FF
    case 0xC020B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:254 AND #$00FF
    // Overlapping static entry reached from 0xC020B6.
    case 0xC020B8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:255 STA @VIRTUAL04
    case 0xC020B9: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:256 LDA @LOCAL02
    case 0xC020BB: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:257 AND #$00FF
    case 0xC020BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:257 AND #$00FF
    // Overlapping static entry reached from 0xC020BD.
    case 0xC020BF: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_entity.asm:258 XBA
    case 0xC020C0: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/create_entity.asm:259 AND #$FF00
    case 0xC020C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:259 AND #$FF00
    // Overlapping static entry reached from 0xC020C1.
    case 0xC020C3: {
        Instruction step(cpu, 0xFF, 0x9D0405u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_entity.asm:260 ORA @VIRTUAL04
    case 0xC020C4: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:261 STA ENTITY_UPPER_LOWER_BODY_DIVIDES,X
    case 0xC020C6: {
        Instruction step(cpu, 0x9D, 0x002BE6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:261 STA ENTITY_UPPER_LOWER_BODY_DIVIDES,X
    // Overlapping static entry reached from 0xC020C3.
    case 0xC020C7: {
        Instruction step(cpu, 0xE6, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/create_entity.asm:262 LDA #$FFFF
    case 0xC020C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:262 LDA #$FFFF
    // Overlapping static entry reached from 0xC020C9.
    case 0xC020CB: {
        Instruction step(cpu, 0xFF, 0x2D4E9Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_entity.asm:263 STA ENTITY_ENEMY_SPAWN_TILES,X
    case 0xC020CC: {
        Instruction step(cpu, 0x9D, 0x002D4Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:264 STA ENTITY_ENEMY_IDS,X
    case 0xC020CF: {
        Instruction step(cpu, 0x9D, 0x002D12u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:265 STA ENTITY_NPC_IDS,X
    case 0xC020D2: {
        Instruction step(cpu, 0x9D, 0x002C9Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:266 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC020D5: {
        Instruction step(cpu, 0x9D, 0x00289Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:267 STZ ENTITY_SURFACE_FLAGS,X
    case 0xC020D8: {
        Instruction step(cpu, 0x9E, 0x002BAAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:268 STZ ENTITY_UNKNOWN_2DC6,X
    case 0xC020DB: {
        Instruction step(cpu, 0x9E, 0x002DC6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:269 STZ ENTITY_UNUSED,X
    case 0xC020DE: {
        Instruction step(cpu, 0x9E, 0x002D8Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:270 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC020E1: {
        Instruction step(cpu, 0x9E, 0x002C5Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:271 STZ ENTITY_MOVEMENT_SPEEDS,X
    case 0xC020E4: {
        Instruction step(cpu, 0x9E, 0x002B32u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:272 STZ ENTITY_DIRECTIONS,X
    case 0xC020E7: {
        Instruction step(cpu, 0x9E, 0x002AF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:273 STZ ENTITY_OBSTACLE_FLAGS,X
    case 0xC020EA: {
        Instruction step(cpu, 0x9E, 0x0028DAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/create_entity.asm:274 LDA @VIRTUAL02
    case 0xC020ED: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_entity.asm:274 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC0211C.
    case 0xC020EE: {
        Instruction step(cpu, 0x02, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/create_entity.asm:276 PLD
    case 0xC020EF: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/overworld/create_entity.asm:277 RTL
    case 0xC020F0: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
