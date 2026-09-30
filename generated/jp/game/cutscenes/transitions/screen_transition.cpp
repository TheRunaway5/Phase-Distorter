// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/screen_transition.asm
bool resume_overworld_screen_transition(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/screen_transition.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06890: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06892: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06893: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06894: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06895: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DFu : 0x00FFDFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC06895.
    case 0xC06897: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06898: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06899: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:15 TXY
    case 0xC0689A: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:16 STY @LOCAL06
    case 0xC0689B: {
        Instruction step(cpu, 0x84, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:17 STA @LOCAL05
    case 0xC0689D: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC0689F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x001400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0689F.
    case 0xC068A1: {
        Instruction step(cpu, 0x14, 0x000085u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC068A2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC068A1.
    case 0xC068A3: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC068A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC068A3.
    case 0xC068A5: {
        Instruction step(cpu, 0xD0, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC068A4.
    case 0xC068A6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC068A7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:19 LDA @LOCAL05
    case 0xC068A9: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068AB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068AD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068AE: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068B0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068B1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:21 CLC
    case 0xC068B2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:22 ADC @VIRTUAL06
    case 0xC068B3: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:23 STA @VIRTUAL06
    case 0xC068B5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:24 STA @LOCAL04
    case 0xC068B7: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:25 LDA @VIRTUAL06+2
    case 0xC068B9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:26 STA @LOCAL04+2
    case 0xC068BB: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC068BD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC068BF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC068C1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC068C3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:28 LDA [@VIRTUAL0A] ;screen_transition_config::duration
    case 0xC068C5: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:29 AND #$00FF
    case 0xC068C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC068C7.
    case 0xC068C9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:30 STA @VIRTUAL02
    case 0xC068CA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:31 CMP #>-1
    case 0xC068CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:31 CMP #>-1
    // Overlapping static entry reached from 0xC068CC.
    case 0xC068CE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:32 BNE @NOT_MAX_DURATION
    case 0xC068CF: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:33 LDA #900
    case 0xC068D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000084u : 0x000384u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:33 LDA #900
    // Overlapping static entry reached from 0xC068D1.
    case 0xC068D3: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:34 STA @VIRTUAL02
    case 0xC068D4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:34 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC068D3.
    case 0xC068D5: {
        Instruction step(cpu, 0x02, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC068D6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:37 LDY #screen_transition_config::direction
    case 0xC068D8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:37 LDY #screen_transition_config::direction
    // Overlapping static entry reached from 0xC068D8.
    case 0xC068DA: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:38 LDA [@VIRTUAL06],Y
    case 0xC068DB: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC068DD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:40 AND #$00FF
    case 0xC068DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC068DF.
    case 0xC068E1: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:41 ASL
    case 0xC068E2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:42 ASL
    case 0xC068E3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:43 TAX
    case 0xC068E4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:44 LDY #screen_transition_config::unknown5
    case 0xC068E5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:44 LDY #screen_transition_config::unknown5
    // Overlapping static entry reached from 0xC068E5.
    case 0xC068E7: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:45 LDA [@VIRTUAL06],Y
    case 0xC068E8: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:46 JSL UNKNOWN_C42631
    case 0xC068EA: {
        Instruction step(cpu, 0x22, 0xC4256Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:47 LDY @LOCAL06
    case 0xC068EE: {
        Instruction step(cpu, 0xA4, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:48 CPY #1
    case 0xC068F0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:48 CPY #1
    // Overlapping static entry reached from 0xC068F0.
    case 0xC068F2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/screen_transition.asm:49 BNEL @UNKNOWN10
    case 0xC068F3: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/screen_transition.asm:49 BNEL @UNKNOWN10
    case 0xC068F5: {
        Instruction step(cpu, 0x4C, 0x006A00u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:50 JSL UNKNOWN_C0943C
    case 0xC068F8: {
        Instruction step(cpu, 0x22, 0xC0941Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:51 LDA #2
    case 0xC068FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:51 LDA #2
    // Overlapping static entry reached from 0xC068FC.
    case 0xC068FE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:52 JSL UNKNOWN_C0DD2C
    case 0xC068FF: {
        Instruction step(cpu, 0x22, 0xC0DCF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC06903: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:54 LDY #screen_transition_config::animation_id
    case 0xC06905: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:54 LDY #screen_transition_config::animation_id
    // Overlapping static entry reached from 0xC06905.
    case 0xC06907: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:55 LDA [@VIRTUAL06],Y
    case 0xC06908: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:56 STA @LOCAL03
    case 0xC0690A: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC0690C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:58 AND #$00FF
    case 0xC0690E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC0690E.
    case 0xC06910: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:59 BEQ @UNKNOWN2
    case 0xC06911: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC06913: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:61 LDY #screen_transition_config::animation_flags
    case 0xC06915: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:61 LDY #screen_transition_config::animation_flags
    // Overlapping static entry reached from 0xC06915.
    case 0xC06917: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:62 LDA [@VIRTUAL06],Y
    case 0xC06918: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC0691A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:64 AND #$00FF
    case 0xC0691C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC0691C.
    case 0xC0691E: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:65 TAX
    case 0xC0691F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:66 INX
    case 0xC06920: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:67 INX
    case 0xC06921: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:68 LDA @LOCAL03
    case 0xC06922: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:69 AND #$00FF
    case 0xC06924: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC06924.
    case 0xC06926: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:70 JSL UNKNOWN_C4A67E
    case 0xC06927: {
        Instruction step(cpu, 0x22, 0xC47AE7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0692B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0692B.
    case 0xC0692D: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0692E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06930: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06931: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06933: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06934: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06936: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC06938: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0693A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0693C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0693E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC06940: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:75 LDA #^__BSS_START__
    case 0xC06942: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:75 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xC06942.
    case 0xC06944: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:76 STA @LOCAL01+2
    case 0xC06945: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:78 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC06947: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:78 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC06949: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:78 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0694B: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:78 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0694D: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:79 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC0694F: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:79 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC06951: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:79 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC06953: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:79 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC06955: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC06957: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC06959: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0695B: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0695D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC0695F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:86 LDY #screen_transition_config::fade_style
    case 0xC06961: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:86 LDY #screen_transition_config::fade_style
    // Overlapping static entry reached from 0xC06961.
    case 0xC06963: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:87 LDA [@VIRTUAL06],Y
    case 0xC06964: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC06966: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:89 AND #$00FF
    case 0xC06968: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC06968.
    case 0xC0696A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:90 JSL UNKNOWN_C4954C
    case 0xC0696B: {
        Instruction step(cpu, 0x22, 0xC46B96u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:91 LDX #.LOWORD(-1)
    case 0xC0696F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:91 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0696F.
    case 0xC06971: {
        Instruction step(cpu, 0xFF, 0x2202A5u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:92 LDA @VIRTUAL02
    case 0xC06972: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:93 JSL UNKNOWN_C496E7
    case 0xC06974: {
        Instruction step(cpu, 0x22, 0xC46D31u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:93 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC06971.
    case 0xC06975: {
        Instruction step(cpu, 0x31, 0x00006Du, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:93 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC06975.
    case 0xC06977: {
        Instruction step(cpu, 0xC4, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:94 LDA #0
    case 0xC06978: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:94 LDA #0
    // Overlapping static entry reached from 0xC06977.
    case 0xC06979: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:94 LDA #0
    // Overlapping static entry reached from 0xC06978.
    case 0xC0697A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:95 STA @LOCAL02
    case 0xC0697B: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:96 BRA @UNKNOWN5
    case 0xC0697D: {
        Instruction step(cpu, 0x80, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:98 LDA PALETTE_UPLOAD_MODE
    case 0xC0697F: {
        Instruction step(cpu, 0xAD, 0x000030u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:99 AND #$00FF
    case 0xC06982: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC06982.
    case 0xC06984: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:100 BEQ @UNKNOWN4
    case 0xC06985: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:101 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC06987: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:103 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC0698B: {
        Instruction step(cpu, 0x22, 0xC4262Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:104 JSL OAM_CLEAR
    case 0xC0698F: {
        Instruction step(cpu, 0x22, 0xC088A3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:105 JSL UNKNOWN_C4268A
    case 0xC06993: {
        Instruction step(cpu, 0x22, 0xC425C8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:106 JSL UNKNOWN_C426C7
    case 0xC06997: {
        Instruction step(cpu, 0x22, 0xC42605u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:107 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0699B: {
        Instruction step(cpu, 0x22, 0xC09445u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:108 JSL UPDATE_SCREEN
    case 0xC0699F: {
        Instruction step(cpu, 0x22, 0xC08B17u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:109 JSL UNKNOWN_C4A7B0
    case 0xC069A3: {
        Instruction step(cpu, 0x22, 0xC47C19u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:110 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC069A7: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:111 LDA @LOCAL02
    case 0xC069AB: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:112 INC
    case 0xC069AD: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:113 STA @LOCAL02
    case 0xC069AE: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:115 CMP @VIRTUAL02
    case 0xC069B0: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:116 BCC @UNKNOWN3
    case 0xC069B2: {
        Instruction step(cpu, 0x90, 0x0000CBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:117 SEP #PROC_FLAGS::ACCUM8
    case 0xC069B4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:118 LDY #screen_transition_config::fade_style
    case 0xC069B6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:118 LDY #screen_transition_config::fade_style
    // Overlapping static entry reached from 0xC069B6.
    case 0xC069B8: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:119 LDA [@VIRTUAL06],Y
    case 0xC069B9: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:120 REP #PROC_FLAGS::ACCUM8
    case 0xC069BB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:121 AND #>-1
    case 0xC069BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:121 AND #>-1
    // Overlapping static entry reached from 0xC069BD.
    case 0xC069BF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:122 STA @VIRTUAL02
    case 0xC069C0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:123 LDA #50
    case 0xC069C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:123 LDA #50
    // Overlapping static entry reached from 0xC069C2.
    case 0xC069C4: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:124 CLC
    case 0xC069C5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:125 SBC @VIRTUAL02
    case 0xC069C6: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC069C8: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC069CA: {
        Instruction step(cpu, 0x10, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC069CC: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC069CE: {
        Instruction step(cpu, 0x30, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:127 JSL UNKNOWN_C08726
    case 0xC069D0: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:128 BRA @UNKNOWN9
    case 0xC069D4: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC069D6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:131 LDA #>-1
    case 0xC069D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0085FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:132 STA @LOCAL00
    case 0xC069DA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:132 STA @LOCAL00
    // Overlapping static entry reached from 0xC069D8.
    case 0xC069DB: {
        Instruction step(cpu, 0x0E, 0x0000A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:133 LDX #BPP4PALETTE_SIZE * 16
    case 0xC069DC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:133 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC069DC.
    case 0xC069DE: {
        Instruction step(cpu, 0x02, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xC069DF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:135 LDA #.LOWORD(PALETTES)
    case 0xC069E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:135 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC069E1.
    case 0xC069E3: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:136 JSL MEMSET16
    case 0xC069E4: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:137 LDA #24
    case 0xC069E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:137 LDA #24
    // Overlapping static entry reached from 0xC069E8.
    case 0xC069EA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:138 JSL UNKNOWN_C0856B
    case 0xC069EB: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:139 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC069EF: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:140 LDA #1
    case 0xC069F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:140 LDA #1
    // Overlapping static entry reached from 0xC069F3.
    case 0xC069F5: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:141 STA WIPE_PALETTES_ON_MAP_LOAD
    case 0xC069F6: {
        Instruction step(cpu, 0x8D, 0x0049FCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:143 JSL UNKNOWN_C09451
    case 0xC069F9: {
        Instruction step(cpu, 0x22, 0xC09430u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:144 JMP @UNKNOWN22
    case 0xC069FD: {
        Instruction step(cpu, 0x4C, 0x006AC5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:146 LDX #0
    case 0xC06A00: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:146 LDX #0
    // Overlapping static entry reached from 0xC06A00.
    case 0xC06A02: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC06A03: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:148 LDY #screen_transition_config::fade_style
    case 0xC06A05: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:148 LDY #screen_transition_config::fade_style
    // Overlapping static entry reached from 0xC06A05.
    case 0xC06A07: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:149 LDA [@VIRTUAL06],Y
    case 0xC06A08: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC06A0A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:151 AND #$00FF
    case 0xC06A0C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:151 AND #$00FF
    // Overlapping static entry reached from 0xC06A0C.
    case 0xC06A0E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:152 STA @VIRTUAL02
    case 0xC06A0F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:153 LDA #50
    case 0xC06A11: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:153 LDA #50
    // Overlapping static entry reached from 0xC06A11.
    case 0xC06A13: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:154 CLC
    case 0xC06A14: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:155 SBC @VIRTUAL02
    case 0xC06A15: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC06A17: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC06A19: {
        Instruction step(cpu, 0x10, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC06A1B: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC06A1D: {
        Instruction step(cpu, 0x30, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:157 LDX #1
    case 0xC06A1F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:157 LDX #1
    // Overlapping static entry reached from 0xC06A1F.
    case 0xC06A21: {
        Instruction step(cpu, 0x00, 0x00009Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:159 TXY
    case 0xC06A22: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:160 STY @LOCAL05
    case 0xC06A23: {
        Instruction step(cpu, 0x84, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:161 BEQ @UNKNOWN14
    case 0xC06A25: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:162 LDX #1
    case 0xC06A27: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:162 LDX #1
    // Overlapping static entry reached from 0xC06A27.
    case 0xC06A29: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:163 TXA
    case 0xC06A2A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:164 JSL FADE_IN
    case 0xC06A2B: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:165 BRA @UNKNOWN15
    case 0xC06A2F: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:167 LDX #.LOWORD(-1)
    case 0xC06A31: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:167 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC06A31.
    case 0xC06A33: {
        Instruction step(cpu, 0xFF, 0xA020E2u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:168 SEP #PROC_FLAGS::ACCUM8
    case 0xC06A34: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:169 LDY #screen_transition_config::secondary_duration
    case 0xC06A36: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:169 LDY #screen_transition_config::secondary_duration
    // Overlapping static entry reached from 0xC06A33.
    case 0xC06A37: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:169 LDY #screen_transition_config::secondary_duration
    // Overlapping static entry reached from 0xC06A36.
    case 0xC06A38: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:170 LDA [@VIRTUAL06],Y
    case 0xC06A39: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:171 REP #PROC_FLAGS::ACCUM8
    case 0xC06A3B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:172 AND #$00FF
    case 0xC06A3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC06A3D.
    case 0xC06A3F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:173 JSL UNKNOWN_C496E7
    case 0xC06A40: {
        Instruction step(cpu, 0x22, 0xC46D31u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC06A44: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:176 LDY #screen_transition_config::secondary_animation_id
    case 0xC06A46: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:176 LDY #screen_transition_config::secondary_animation_id
    // Overlapping static entry reached from 0xC06A46.
    case 0xC06A48: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:177 LDA [@VIRTUAL06],Y
    case 0xC06A49: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:178 STA @LOCAL03
    case 0xC06A4B: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:179 REP #PROC_FLAGS::ACCUM8
    case 0xC06A4D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:180 AND #$00FF
    case 0xC06A4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:180 AND #$00FF
    // Overlapping static entry reached from 0xC06A4F.
    case 0xC06A51: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:181 BEQ @UNKNOWN16
    case 0xC06A52: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:182 SEP #PROC_FLAGS::ACCUM8
    case 0xC06A54: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:183 LDY #screen_transition_config::secondary_animation_flags
    case 0xC06A56: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:183 LDY #screen_transition_config::secondary_animation_flags
    // Overlapping static entry reached from 0xC06A56.
    case 0xC06A58: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:184 LDA [@VIRTUAL06],Y
    case 0xC06A59: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC06A5B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:186 AND #$00FF
    case 0xC06A5D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:186 AND #$00FF
    // Overlapping static entry reached from 0xC06A5D.
    case 0xC06A5F: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:187 TAX
    case 0xC06A60: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:188 LDA @LOCAL03
    case 0xC06A61: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:189 AND #$00FF
    case 0xC06A63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:189 AND #$00FF
    // Overlapping static entry reached from 0xC06A63.
    case 0xC06A65: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:190 JSL UNKNOWN_C4A67E
    case 0xC06A66: {
        Instruction step(cpu, 0x22, 0xC47AE7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:192 LDA #0
    case 0xC06A6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:192 LDA #0
    // Overlapping static entry reached from 0xC06A6A.
    case 0xC06A6C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:193 STA @LOCAL02
    case 0xC06A6D: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:194 BRA @UNKNOWN21
    case 0xC06A6F: {
        Instruction step(cpu, 0x80, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:196 LDY @LOCAL05
    case 0xC06A71: {
        Instruction step(cpu, 0xA4, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:197 BNE @UNKNOWN19
    case 0xC06A73: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:198 LDA PALETTE_UPLOAD_MODE
    case 0xC06A75: {
        Instruction step(cpu, 0xAD, 0x000030u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:199 AND #$00FF
    case 0xC06A78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:199 AND #$00FF
    // Overlapping static entry reached from 0xC06A78.
    case 0xC06A7A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:200 BEQ @UNKNOWN18
    case 0xC06A7B: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:201 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC06A7D: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:203 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC06A81: {
        Instruction step(cpu, 0x22, 0xC4262Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:205 JSL OAM_CLEAR
    case 0xC06A85: {
        Instruction step(cpu, 0x22, 0xC088A3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:206 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC06A89: {
        Instruction step(cpu, 0x22, 0xC09445u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:207 JSL UNKNOWN_C4A7B0
    case 0xC06A8D: {
        Instruction step(cpu, 0x22, 0xC47C19u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:208 JSL UPDATE_SCREEN
    case 0xC06A91: {
        Instruction step(cpu, 0x22, 0xC08B17u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:209 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC06A95: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:210 LDA @LOCAL02
    case 0xC06A99: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:211 CMP #1
    case 0xC06A9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:211 CMP #1
    // Overlapping static entry reached from 0xC06A9B.
    case 0xC06A9D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:212 BNE @UNKNOWN20
    case 0xC06A9E: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:213 JSL UNKNOWN_C0943C
    case 0xC06AA0: {
        Instruction step(cpu, 0x22, 0xC0941Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:215 LDA @LOCAL02
    case 0xC06AA4: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:216 INC
    case 0xC06AA6: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:217 STA @LOCAL02
    case 0xC06AA7: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:219 SEP #PROC_FLAGS::ACCUM8
    case 0xC06AA9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:220 LDY #screen_transition_config::secondary_duration
    case 0xC06AAB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:220 LDY #screen_transition_config::secondary_duration
    // Overlapping static entry reached from 0xC06AAB.
    case 0xC06AAD: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:221 LDA [@VIRTUAL06],Y
    case 0xC06AAE: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:222 REP #PROC_FLAGS::ACCUM8
    case 0xC06AB0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:223 AND #$00FF
    case 0xC06AB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:223 AND #$00FF
    // Overlapping static entry reached from 0xC06AB2.
    case 0xC06AB4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:224 STA @VIRTUAL02
    case 0xC06AB5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:225 LDA @LOCAL02
    case 0xC06AB7: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:226 CMP @VIRTUAL02
    case 0xC06AB9: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:227 BCC @UNKNOWN17
    case 0xC06ABB: {
        Instruction step(cpu, 0x90, 0x0000B4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:228 LDY @LOCAL05
    case 0xC06ABD: {
        Instruction step(cpu, 0xA4, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:229 BNE @UNKNOWN22
    case 0xC06ABF: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:230 JSL UNKNOWN_C49740
    case 0xC06AC1: {
        Instruction step(cpu, 0x22, 0xC46D8Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:232 LDA GIYGAS_PHASE
    case 0xC06AC5: {
        Instruction step(cpu, 0xAD, 0x00AB7Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:233 CMP #GIYGAS_PHASES::START_PRAYING
    case 0xC06AC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:233 CMP #GIYGAS_PHASES::START_PRAYING
    // Overlapping static entry reached from 0xC06AC8.
    case 0xC06ACA: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:234 BCS @UNKNOWN23
    case 0xC06ACB: {
        Instruction step(cpu, 0xB0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:235 JSL UNKNOWN_C2EAAA
    case 0xC06ACD: {
        Instruction step(cpu, 0x22, 0xC2E9C3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:237 JSL UNKNOWN_C09451
    case 0xC06AD1: {
        Instruction step(cpu, 0x22, 0xC09430u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:238 STZ LADDER_STAIRS_TILE_Y
    case 0xC06AD5: {
        Instruction step(cpu, 0x9C, 0x006130u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:239 STZ LADDER_STAIRS_TILE_X
    case 0xC06AD8: {
        Instruction step(cpu, 0x9C, 0x00612Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/screen_transition.asm:240 END_C_FUNCTION
    case 0xC06ADB: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/screen_transition.asm:240 END_C_FUNCTION
    case 0xC06ADC: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
