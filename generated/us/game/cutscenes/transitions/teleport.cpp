// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/teleport.asm
bool resume_overworld_teleport(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/teleport.asm:3 BEGIN_C_FUNCTION
    case 0xC1BCAB: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BCAD: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BCAE: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BCAF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BCB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BCB0.
    case 0xC1BCB2: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BCB3: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BCB4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:11 STA @LOCAL03
    case 0xC1BCB5: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:11 STA @LOCAL03
    // Overlapping static entry reached from 0xC1BCB2.
    case 0xC1BCB6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/teleport.asm:12 LDA OVERWORLD_STATUS_SUPPRESSION
    case 0xC1BCB7: {
        Instruction step(cpu, 0xAD, 0x005D98u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:13 STA @LOCAL02
    case 0xC1BCBA: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:14 LDA #1
    case 0xC1BCBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:14 LDA #1
    // Overlapping static entry reached from 0xC1BCBC.
    case 0xC1BCBE: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:15 STA OVERWORLD_STATUS_SUPPRESSION
    case 0xC1BCBF: {
        Instruction step(cpu, 0x8D, 0x005D98u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    case 0xC1BCC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ABu : 0x00EBABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1BCC2.
    case 0xC1BCC4: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    case 0xC1BCC5: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    case 0xC1BCC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1BCC7.
    case 0xC1BCC9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    case 0xC1BCCA: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:17 LDA @LOCAL03
    case 0xC1BCCC: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/teleport.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC1BCCE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/teleport.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC1BCCF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/teleport.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC1BCD0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/teleport.asm:19 CLC
    case 0xC1BCD1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/teleport.asm:20 ADC @VIRTUAL0A
    case 0xC1BCD2: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/teleport.asm:21 STA @VIRTUAL0A
    case 0xC1BCD4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:22 STA @LOCAL01
    case 0xC1BCD6: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:23 LDA @VIRTUAL0A+2
    case 0xC1BCD8: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:24 STA @LOCAL01+2
    case 0xC1BCDA: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:25 LDY #1
    case 0xC1BCDC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/teleport.asm:25 LDY #1
    // Overlapping static entry reached from 0xC1BCDC.
    case 0xC1BCDE: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:26 STY @LOCAL03
    case 0xC1BCDF: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/teleport.asm:27 BRA @UNKNOWN1
    case 0xC1BCE1: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/teleport.asm:29 LDX #0
    case 0xC1BCE3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/teleport.asm:29 LDX #0
    // Overlapping static entry reached from 0xC1BCE3.
    case 0xC1BCE5: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:30 TYA
    case 0xC1BCE6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:31 JSL SET_EVENT_FLAG
    case 0xC1BCE7: {
        Instruction step(cpu, 0x22, 0xC2165Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:32 LDY @LOCAL03
    case 0xC1BCEB: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/teleport.asm:33 INY
    case 0xC1BCED: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/teleport.asm:34 STY @LOCAL03
    case 0xC1BCEE: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/teleport.asm:36 CPY #10
    case 0xC1BCF0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/teleport.asm:36 CPY #10
    // Overlapping static entry reached from 0xC1BCF0.
    case 0xC1BCF2: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/teleport.asm:37 BLTEQ @UNKNOWN0
    case 0xC1BCF3: {
        Instruction step(cpu, 0x90, 0x0000EEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/teleport.asm:37 BLTEQ @UNKNOWN0
    case 0xC1BCF5: {
        Instruction step(cpu, 0xF0, 0x0000ECu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/teleport.asm:38 JSL UNKNOWN_C06B3D
    case 0xC1BCF7: {
        Instruction step(cpu, 0x22, 0xC06B3Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:39 LDA #teleport_destination::screen_transition
    case 0xC1BCFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:39 LDA #teleport_destination::screen_transition
    // Overlapping static entry reached from 0xC1BCFB.
    case 0xC1BCFD: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/teleport.asm:40 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BCFE: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/teleport.asm:40 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD00: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/teleport.asm:40 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD02: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/teleport.asm:40 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD04: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/teleport.asm:41 CLC
    case 0xC1BD06: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/teleport.asm:42 ADC @VIRTUAL06
    case 0xC1BD07: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/teleport.asm:43 STA @VIRTUAL06
    case 0xC1BD09: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:44 LDX #1
    case 0xC1BD0B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/teleport.asm:44 LDX #1
    // Overlapping static entry reached from 0xC1BD0B.
    case 0xC1BD0D: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:45 LDA [@VIRTUAL06]
    case 0xC1BD0E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:46 AND #$00FF
    case 0xC1BD10: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC1BD10.
    case 0xC1BD12: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:47 JSL GET_SCREEN_TRANSITION_SOUND_EFFECT
    case 0xC1BD13: {
        Instruction step(cpu, 0x22, 0xC068AFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:48 JSL PLAY_SOUND
    case 0xC1BD17: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:49 LDA DISABLED_TRANSITIONS
    case 0xC1BD1B: {
        Instruction step(cpu, 0xAD, 0x00B4B6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:50 BEQ @UNKNOWN2
    case 0xC1BD1E: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/teleport.asm:51 LDX #1
    case 0xC1BD20: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/teleport.asm:51 LDX #1
    // Overlapping static entry reached from 0xC1BD20.
    case 0xC1BD22: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:52 TXA
    case 0xC1BD23: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:53 JSL FADE_OUT
    case 0xC1BD24: {
        Instruction step(cpu, 0x22, 0xC0887Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:54 BRA @UNKNOWN3
    case 0xC1BD28: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/teleport.asm:56 LDX #1
    case 0xC1BD2A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/teleport.asm:56 LDX #1
    // Overlapping static entry reached from 0xC1BD2A.
    case 0xC1BD2C: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:57 LDA [@VIRTUAL06]
    case 0xC1BD2D: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:58 AND #$00FF
    case 0xC1BD2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC1BD2F.
    case 0xC1BD31: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:59 JSL SCREEN_TRANSITION
    case 0xC1BD32: {
        Instruction step(cpu, 0x22, 0xC06662u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:61 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD36: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:61 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD38: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:61 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD3A: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:61 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD3C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:62 LDA [@VIRTUAL06] ;teleport_destination::x_coord
    case 0xC1BD3E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:63 ASL
    case 0xC1BD40: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/teleport.asm:64 ASL
    case 0xC1BD41: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/teleport.asm:65 ASL
    case 0xC1BD42: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/teleport.asm:66 STA @LOCAL03
    case 0xC1BD43: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:67 LDY #teleport_destination::y_coord
    case 0xC1BD45: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/teleport.asm:67 LDY #teleport_destination::y_coord
    // Overlapping static entry reached from 0xC1BD45.
    case 0xC1BD47: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:68 LDA [@VIRTUAL0A],Y
    case 0xC1BD48: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:69 ASL
    case 0xC1BD4A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/teleport.asm:70 ASL
    case 0xC1BD4B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/teleport.asm:71 ASL
    case 0xC1BD4C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/teleport.asm:72 STA @VIRTUAL04
    case 0xC1BD4D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:73 LDA #teleport_destination::direction
    case 0xC1BD4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:73 LDA #teleport_destination::direction
    // Overlapping static entry reached from 0xC1BD4F.
    case 0xC1BD51: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/teleport.asm:74 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD52: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/teleport.asm:74 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD54: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/teleport.asm:74 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD56: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/teleport.asm:74 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD58: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/teleport.asm:75 CLC
    case 0xC1BD5A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/teleport.asm:76 ADC @VIRTUAL06
    case 0xC1BD5B: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/teleport.asm:77 STA @VIRTUAL06
    case 0xC1BD5D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:78 LDA [@VIRTUAL06]
    case 0xC1BD5F: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:79 AND #$00FF
    case 0xC1BD61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC1BD61.
    case 0xC1BD63: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:80 AND #$007F
    case 0xC1BD64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:80 AND #$007F
    // Overlapping static entry reached from 0xC1BD64.
    case 0xC1BD66: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:81 DEC
    case 0xC1BD67: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/teleport.asm:82 STA @VIRTUAL02
    case 0xC1BD68: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:83 LDX @VIRTUAL04
    case 0xC1BD6A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/teleport.asm:84 LDA @LOCAL03
    case 0xC1BD6C: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:85 JSL LOAD_MAP_AT_POSITION
    case 0xC1BD6E: {
        Instruction step(cpu, 0x22, 0xC013F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:86 STZ PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC1BD72: {
        Instruction step(cpu, 0x9C, 0x002890u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/teleport.asm:87 LDY @VIRTUAL02
    case 0xC1BD75: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/teleport.asm:88 LDX @VIRTUAL04
    case 0xC1BD77: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/teleport.asm:89 LDA @LOCAL03
    case 0xC1BD79: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:90 JSL UNKNOWN_C03FA9
    case 0xC1BD7B: {
        Instruction step(cpu, 0x22, 0xC03FA9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:91 LDA [@VIRTUAL06]
    case 0xC1BD7F: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:92 AND #$00FF
    case 0xC1BD81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:92 AND #$00FF
    // Overlapping static entry reached from 0xC1BD81.
    case 0xC1BD83: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:93 AND #$0080
    case 0xC1BD84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:93 AND #$0080
    // Overlapping static entry reached from 0xC1BD84.
    case 0xC1BD86: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:94 BEQ @UNKNOWN4
    case 0xC1BD87: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/teleport.asm:95 LDA @VIRTUAL02
    case 0xC1BD89: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:96 JSL UNKNOWN_C052D4
    case 0xC1BD8B: {
        Instruction step(cpu, 0x22, 0xC052D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:98 LDX @VIRTUAL04
    case 0xC1BD8F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/teleport.asm:99 LDA @LOCAL03
    case 0xC1BD91: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:100 JSL UNKNOWN_C068F4
    case 0xC1BD93: {
        Instruction step(cpu, 0x22, 0xC068F4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:101 JSL UNKNOWN_C069AF
    case 0xC1BD97: {
        Instruction step(cpu, 0x22, 0xC069AFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1BD9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BD9B.
    case 0xC1BD9D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1BD9E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1BDA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BDA0.
    case 0xC1BDA2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1BDA3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BDA5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BDA7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BDA9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BDAB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:104 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1BDAD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:104 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1BDAF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:104 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1BDB1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:104 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1BDB3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:105 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDB5: {
        Instruction step(cpu, 0xAD, 0x009D1Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:105 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDB8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:105 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDBA: {
        Instruction step(cpu, 0xAD, 0x009D1Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:105 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDBD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:106 CMP @VIRTUAL0A+2
    case 0xC1BDBF: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:107 BNE @UNKNOWN5
    case 0xC1BDC1: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/teleport.asm:108 LDA @VIRTUAL06
    case 0xC1BDC3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:109 CMP @VIRTUAL0A
    case 0xC1BDC5: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:111 BEQ @UNKNOWN6
    case 0xC1BDC7: {
        Instruction step(cpu, 0xF0, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:112 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDC9: {
        Instruction step(cpu, 0xAD, 0x009D1Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:112 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDCC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:112 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDCE: {
        Instruction step(cpu, 0xAD, 0x009D1Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:112 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDD1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:113 PHA
    case 0xC1BDD3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:114 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BDD4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:114 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BDD6: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:114 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BDD9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:114 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BDDB: {
        Instruction step(cpu, 0x8D, 0x0000BEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:115 PLA
    case 0xC1BDDE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:116 JSL UNKNOWN_C09279
    case 0xC1BDDF: {
        Instruction step(cpu, 0x22, 0xC09279u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:117 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC1BDE3: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:117 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC1BDE5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:117 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC1BDE7: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:117 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC1BDE9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:118 MOVE_INT @VIRTUAL06, POST_TELEPORT_CALLBACK
    case 0xC1BDEB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:118 MOVE_INT @VIRTUAL06, POST_TELEPORT_CALLBACK
    case 0xC1BDED: {
        Instruction step(cpu, 0x8D, 0x009D1Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:118 MOVE_INT @VIRTUAL06, POST_TELEPORT_CALLBACK
    case 0xC1BDF0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:118 MOVE_INT @VIRTUAL06, POST_TELEPORT_CALLBACK
    case 0xC1BDF2: {
        Instruction step(cpu, 0x8D, 0x009D1Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:120 JSL UNKNOWN_C065A3
    case 0xC1BDF5: {
        Instruction step(cpu, 0x22, 0xC065A3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:121 LDA #teleport_destination::screen_transition
    case 0xC1BDF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:121 LDA #teleport_destination::screen_transition
    // Overlapping static entry reached from 0xC1BDF9.
    case 0xC1BDFB: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/teleport.asm:122 MOVE_INTX @LOCAL01, @VIRTUAL0A
    case 0xC1BDFC: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/teleport.asm:122 MOVE_INTX @LOCAL01, @VIRTUAL0A
    case 0xC1BDFE: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/teleport.asm:122 MOVE_INTX @LOCAL01, @VIRTUAL0A
    case 0xC1BE00: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/teleport.asm:122 MOVE_INTX @LOCAL01, @VIRTUAL0A
    case 0xC1BE02: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/teleport.asm:123 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BE04: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/teleport.asm:123 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BE06: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/teleport.asm:123 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BE08: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/teleport.asm:123 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BE0A: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/teleport.asm:124 CLC
    case 0xC1BE0C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/teleport.asm:125 ADC @VIRTUAL06
    case 0xC1BE0D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/teleport.asm:126 STA @VIRTUAL06
    case 0xC1BE0F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:127 LDX #0
    case 0xC1BE11: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/teleport.asm:127 LDX #0
    // Overlapping static entry reached from 0xC1BE11.
    case 0xC1BE13: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:128 LDA [@VIRTUAL06]
    case 0xC1BE14: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:129 AND #$00FF
    case 0xC1BE16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC1BE16.
    case 0xC1BE18: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:130 JSL GET_SCREEN_TRANSITION_SOUND_EFFECT
    case 0xC1BE19: {
        Instruction step(cpu, 0x22, 0xC068AFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:131 JSL PLAY_SOUND
    case 0xC1BE1D: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:132 LDA DISABLED_TRANSITIONS
    case 0xC1BE21: {
        Instruction step(cpu, 0xAD, 0x00B4B6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:133 BEQ @UNKNOWN7
    case 0xC1BE24: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/teleport.asm:134 LDX #1
    case 0xC1BE26: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/teleport.asm:134 LDX #1
    // Overlapping static entry reached from 0xC1BE26.
    case 0xC1BE28: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:135 TXA
    case 0xC1BE29: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:136 JSL FADE_IN
    case 0xC1BE2A: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:137 BRA @UNKNOWN8
    case 0xC1BE2E: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/teleport.asm:139 LDX #0
    case 0xC1BE30: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/teleport.asm:139 LDX #0
    // Overlapping static entry reached from 0xC1BE30.
    case 0xC1BE32: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:140 LDA [@VIRTUAL06]
    case 0xC1BE33: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:141 AND #$00FF
    case 0xC1BE35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC1BE35.
    case 0xC1BE37: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/teleport.asm:142 JSL SCREEN_TRANSITION
    case 0xC1BE38: {
        Instruction step(cpu, 0x22, 0xC06662u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:144 LDA #.LOWORD(-1)
    case 0xC1BE3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:144 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1BE3C.
    case 0xC1BE3E: {
        Instruction step(cpu, 0xFF, 0x5DC48Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/teleport.asm:145 STA STAIRS_DIRECTION
    case 0xC1BE3F: {
        Instruction step(cpu, 0x8D, 0x005DC4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:146 JSL SPAWN_BUZZ_BUZZ
    case 0xC1BE42: {
        Instruction step(cpu, 0x22, 0xC06B21u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/teleport.asm:147 LDA @LOCAL02
    case 0xC1BE46: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/teleport.asm:148 STA OVERWORLD_STATUS_SUPPRESSION
    case 0xC1BE48: {
        Instruction step(cpu, 0x8D, 0x005D98u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/teleport.asm:149 END_C_FUNCTION
    case 0xC1BE4B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/teleport.asm:149 END_C_FUNCTION
    case 0xC1BE4C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
