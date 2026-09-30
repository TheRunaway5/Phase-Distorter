// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/apply_condiment.asm
bool resume_battle_apply_condiment(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/apply_condiment.asm:3 BEGIN_C_FUNCTION
    case 0xC2B126: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B128: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B129: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B12A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B12A.
    case 0xC2B12C: {
        Instruction step(cpu, 0xFF, 0x72AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/apply_condiment.asm:11 END_STACK_VARS
    case 0xC2B12D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:12 LDX CURRENT_ATTACKER
    case 0xC2B12E: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:12 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2B12C.
    case 0xC2B130: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:13 LDA a:battler::current_action_argument,X
    case 0xC2B131: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:14 AND #$00FF
    case 0xC2B134: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC2B134.
    case 0xC2B136: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:15 STA @VIRTUAL04
    case 0xC2B137: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:16 STA @LOCAL04
    case 0xC2B139: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:17 LDA @VIRTUAL04
    case 0xC2B13B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B13D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:19 JSL FIND_CONDIMENT
    case 0xC2B13F: {
        Instruction step(cpu, 0x22, 0xC1D92Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:21 STA @VIRTUAL02
    case 0xC2B143: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:22 CMP #$0000
    case 0xC2B145: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:22 CMP #$0000
    // Overlapping static entry reached from 0xC2B145.
    case 0xC2B147: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/apply_condiment.asm:23 BEQL @UNKNOWN6
    case 0xC2B148: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/apply_condiment.asm:23 BEQL @UNKNOWN6
    case 0xC2B14A: {
        Instruction step(cpu, 0x4C, 0x00B20Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:24 LDX @VIRTUAL02
    case 0xC2B14D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:25 STX @LOCAL03
    case 0xC2B14F: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:26 LDX CURRENT_ATTACKER
    case 0xC2B151: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:27 LDA a:battler::id,X
    case 0xC2B154: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:28 LDX @LOCAL03
    case 0xC2B157: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:29 JSL TAKE_ITEM_FROM_CHARACTER
    case 0xC2B159: {
        Instruction step(cpu, 0x22, 0xC18F56u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:30 LDY #$0000
    case 0xC2B15D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:30 LDY #$0000
    // Overlapping static entry reached from 0xC2B15D.
    case 0xC2B15F: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:31 STY @LOCAL02
    case 0xC2B160: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:32 BRA @UNKNOWN4
    case 0xC2B162: {
        Instruction step(cpu, 0x80, 0x00006Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:34 PHA
    case 0xC2B164: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:35 LDA @LOCAL04
    case 0xC2B165: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:36 STA @VIRTUAL04
    case 0xC2B167: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:37 PLA
    case 0xC2B169: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:38 AND #$00FF
    case 0xC2B16A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC2B16A.
    case 0xC2B16C: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:39 CMP @VIRTUAL04
    case 0xC2B16D: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:40 BNE @UNKNOWN3
    case 0xC2B16F: {
        Instruction step(cpu, 0xD0, 0x00005Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:41 TXA
    case 0xC2B171: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:42 INC
    case 0xC2B172: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B173: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B175: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B177: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/apply_condiment.asm:43 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC2B179: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:44 CLC
    case 0xC2B17B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:45 ADC @VIRTUAL0A
    case 0xC2B17C: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:46 STA @VIRTUAL0A
    case 0xC2B17E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:47 LDA [@VIRTUAL0A]
    case 0xC2B180: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:48 AND #$00FF
    case 0xC2B182: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC2B182.
    case 0xC2B184: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:49 CMP @VIRTUAL02
    case 0xC2B185: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:50 BEQ @UNKNOWN2
    case 0xC2B187: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:51 TXA
    case 0xC2B189: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:52 INC
    case 0xC2B18A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:53 INC
    case 0xC2B18B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:54 CLC
    case 0xC2B18C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:55 ADC @VIRTUAL06
    case 0xC2B18D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:56 STA @VIRTUAL06
    case 0xC2B18F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:57 LDA [@VIRTUAL06]
    case 0xC2B191: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:58 AND #$00FF
    case 0xC2B193: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC2B20D.
    case 0xC2B194: {
        Instruction step(cpu, 0xFF, 0x02C500u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC2B193.
    case 0xC2B195: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:59 CMP @VIRTUAL02
    case 0xC2B196: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:60 BNE @UNKNOWN5
    case 0xC2B198: {
        Instruction step(cpu, 0xD0, 0x000063u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B19A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x00152Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    // Overlapping static entry reached from 0xC2B19A.
    case 0xC2B19C: {
        Instruction step(cpu, 0x15, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B19D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    // Overlapping static entry reached from 0xC2B19C.
    case 0xC2B19E: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B19F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    // Overlapping static entry reached from 0xC2B19F.
    case 0xC2B1A1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B1A2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/apply_condiment.asm:63 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_ATARI
    case 0xC2B1A4: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x00E9D7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1A8.
    case 0xC2B1AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1AB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1AA.
    case 0xC2B1AC: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1AC.
    case 0xC2B1AE: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1AD.
    case 0xC2B1AF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:64 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1B0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:65 LDY @LOCAL02
    case 0xC2B1B2: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:66 TYA
    case 0xC2B1B4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1B5: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1B7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1B8: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1BA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:67 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1BB: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:68 INC
    case 0xC2B1BD: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:69 INC
    case 0xC2B1BE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:70 INC
    case 0xC2B1BF: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:71 CLC
    case 0xC2B1C0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:72 ADC @VIRTUAL06
    case 0xC2B1C1: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:73 STA @VIRTUAL06
    case 0xC2B1C3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:74 STA @RETURNVAL
    case 0xC2B1C5: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:75 LDA @VIRTUAL08
    case 0xC2B1C7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:76 STA @RETURNVAL+2
    case 0xC2B1C9: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:77 BRA @UNKNOWN7
    case 0xC2B1CB: {
        Instruction step(cpu, 0x80, 0x000063u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:79 INY
    case 0xC2B1CD: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:80 STY @LOCAL02
    case 0xC2B1CE: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x00E9D7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1D0.
    case 0xC2B1D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1D3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1D2.
    case 0xC2B1D4: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1D4.
    case 0xC2B1D6: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B1D5.
    case 0xC2B1D7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:82 LOADPTR CONDIMENT_TABLE, @VIRTUAL06
    case 0xC2B1D8: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:83 TYA
    case 0xC2B1DA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1DB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1DD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1DE: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1E0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:84 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2B1E1: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:85 TAX
    case 0xC2B1E3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:86 PHA
    case 0xC2B1E4: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1E5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1E7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1E9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/apply_condiment.asm:87 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B1EB: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:88 PLA
    case 0xC2B1ED: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:89 CLC
    case 0xC2B1EE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:90 ADC @VIRTUAL0A
    case 0xC2B1EF: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:91 STA @VIRTUAL0A
    case 0xC2B1F1: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:92 LDA [@VIRTUAL0A]
    case 0xC2B1F3: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:93 AND #$00FF
    case 0xC2B1F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:93 AND #$00FF
    // Overlapping static entry reached from 0xC2B1F5.
    case 0xC2B1F7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/apply_condiment.asm:94 BNEL @UNKNOWN1
    case 0xC2B1F8: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/apply_condiment.asm:94 BNEL @UNKNOWN1
    case 0xC2B1FA: {
        Instruction step(cpu, 0x4C, 0x00B164u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B1FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000047u : 0x001547u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    // Overlapping static entry reached from 0xC2B1FD.
    case 0xC2B1FF: {
        Instruction step(cpu, 0x15, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B200: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    // Overlapping static entry reached from 0xC2B1FF.
    case 0xC2B201: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B202: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    // Overlapping static entry reached from 0xC2B202.
    case 0xC2B204: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B205: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/apply_condiment.asm:96 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_EAT_SPICE_HAZURE
    case 0xC2B207: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B20B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B20B.
    case 0xC2B20D: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B20E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B20D.
    case 0xC2B20F: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B210: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B20F.
    case 0xC2B211: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B210.
    case 0xC2B212: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/apply_condiment.asm:98 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B213: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:99 LDA @LOCAL04
    case 0xC2B215: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:100 STA @VIRTUAL04
    case 0xC2B217: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B219: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B21B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B21C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B21E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B21F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/apply_condiment.asm:101 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2B220: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:102 CLC
    case 0xC2B221: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:103 ADC #item::params
    case 0xC2B222: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:103 ADC #item::params
    // Overlapping static entry reached from 0xC2B222.
    case 0xC2B224: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:104 CLC
    case 0xC2B225: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:105 ADC @VIRTUAL06
    case 0xC2B226: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:106 STA @VIRTUAL06
    case 0xC2B228: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:107 STA @RETURNVAL
    case 0xC2B22A: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:108 LDA @VIRTUAL08
    case 0xC2B22C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/apply_condiment.asm:109 STA @RETURNVAL+2
    case 0xC2B22E: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/apply_condiment.asm:111 END_C_FUNCTION
    case 0xC2B230: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/apply_condiment.asm:111 END_C_FUNCTION
    case 0xC2B231: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
