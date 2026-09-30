// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/screen_transition.asm
bool resume_overworld_screen_transition(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/screen_transition.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06662: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06664: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06665: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06666: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06667: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DFu : 0x00FFDFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC06667.
    case 0xC06669: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC0666A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC0666B: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:15 TXY
    case 0xC0666C: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:16 STY @LOCAL06
    case 0xC0666D: {
        Instruction step(cpu, 0x84, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:17 STA @LOCAL05
    case 0xC0666F: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06671: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x001400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06671.
    case 0xC06673: {
        Instruction step(cpu, 0x14, 0x000085u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06674: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06673.
    case 0xC06675: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06676: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06675.
    case 0xC06677: {
        Instruction step(cpu, 0xD0, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06676.
    case 0xC06678: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06679: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:19 LDA @LOCAL05
    case 0xC0667B: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC0667D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC0667F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06680: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06682: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06683: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:21 CLC
    case 0xC06684: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:22 ADC @VIRTUAL06
    case 0xC06685: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:23 STA @VIRTUAL06
    case 0xC06687: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:24 STA @LOCAL04
    case 0xC06689: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:25 LDA @VIRTUAL06+2
    case 0xC0668B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:26 STA @LOCAL04+2
    case 0xC0668D: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0668F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC06691: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC06693: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC06695: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:28 LDA [@VIRTUAL0A] ;screen_transition_config::duration
    case 0xC06697: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:29 AND #$00FF
    case 0xC06699: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC06699.
    case 0xC0669B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:30 STA @VIRTUAL02
    case 0xC0669C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:31 CMP #>-1
    case 0xC0669E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:31 CMP #>-1
    // Overlapping static entry reached from 0xC0669E.
    case 0xC066A0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:32 BNE @NOT_MAX_DURATION
    case 0xC066A1: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:33 LDA #900
    case 0xC066A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000084u : 0x000384u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:33 LDA #900
    // Overlapping static entry reached from 0xC066A3.
    case 0xC066A5: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:34 STA @VIRTUAL02
    case 0xC066A6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:34 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC066A5.
    case 0xC066A7: {
        Instruction step(cpu, 0x02, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC066A8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:37 LDY #screen_transition_config::direction
    case 0xC066AA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:37 LDY #screen_transition_config::direction
    // Overlapping static entry reached from 0xC066AA.
    case 0xC066AC: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:38 LDA [@VIRTUAL06],Y
    case 0xC066AD: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC066AF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:40 AND #$00FF
    case 0xC066B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC066B1.
    case 0xC066B3: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:41 ASL
    case 0xC066B4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:42 ASL
    case 0xC066B5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:43 TAX
    case 0xC066B6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:44 LDY #screen_transition_config::unknown5
    case 0xC066B7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:44 LDY #screen_transition_config::unknown5
    // Overlapping static entry reached from 0xC066B7.
    case 0xC066B9: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:45 LDA [@VIRTUAL06],Y
    case 0xC066BA: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:46 JSL UNKNOWN_C42631
    case 0xC066BC: {
        Instruction step(cpu, 0x22, 0xC42631u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:47 LDY @LOCAL06
    case 0xC066C0: {
        Instruction step(cpu, 0xA4, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:48 CPY #1
    case 0xC066C2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:48 CPY #1
    // Overlapping static entry reached from 0xC066C2.
    case 0xC066C4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/screen_transition.asm:49 BNEL @UNKNOWN10
    case 0xC066C5: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/screen_transition.asm:49 BNEL @UNKNOWN10
    case 0xC066C7: {
        Instruction step(cpu, 0x4C, 0x0067D2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:50 JSL UNKNOWN_C0943C
    case 0xC066CA: {
        Instruction step(cpu, 0x22, 0xC0943Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:51 LDA #2
    case 0xC066CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:51 LDA #2
    // Overlapping static entry reached from 0xC066CE.
    case 0xC066D0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:52 JSL UNKNOWN_C0DD2C
    case 0xC066D1: {
        Instruction step(cpu, 0x22, 0xC0DD2Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC066D5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:54 LDY #screen_transition_config::animation_id
    case 0xC066D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:54 LDY #screen_transition_config::animation_id
    // Overlapping static entry reached from 0xC066D7.
    case 0xC066D9: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:55 LDA [@VIRTUAL06],Y
    case 0xC066DA: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:56 STA @LOCAL03
    case 0xC066DC: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC066DE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:58 AND #$00FF
    case 0xC066E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC066E0.
    case 0xC066E2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:59 BEQ @UNKNOWN2
    case 0xC066E3: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC066E5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:61 LDY #screen_transition_config::animation_flags
    case 0xC066E7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:61 LDY #screen_transition_config::animation_flags
    // Overlapping static entry reached from 0xC066E7.
    case 0xC066E9: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:62 LDA [@VIRTUAL06],Y
    case 0xC066EA: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC066EC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:64 AND #$00FF
    case 0xC066EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC066EE.
    case 0xC066F0: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:65 TAX
    case 0xC066F1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:66 INX
    case 0xC066F2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:67 INX
    case 0xC066F3: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:68 LDA @LOCAL03
    case 0xC066F4: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:69 AND #$00FF
    case 0xC066F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC066F6.
    case 0xC066F8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:70 JSL UNKNOWN_C4A67E
    case 0xC066F9: {
        Instruction step(cpu, 0x22, 0xC4A67Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC066FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC066FD.
    case 0xC066FF: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06700: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06702: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06703: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06705: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06706: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06708: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC0670A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0670C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0670E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC06710: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC06712: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:75 LDA #^__BSS_START__
    case 0xC06714: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:75 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xC06714.
    case 0xC06716: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:76 STA @LOCAL01+2
    case 0xC06717: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:81 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC06719: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:81 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0671B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:81 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0671D: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:81 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0671F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06721: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06723: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06725: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06727: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC06729: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0672B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0672D: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0672F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC06731: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:86 LDY #screen_transition_config::fade_style
    case 0xC06733: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:86 LDY #screen_transition_config::fade_style
    // Overlapping static entry reached from 0xC06733.
    case 0xC06735: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:87 LDA [@VIRTUAL06],Y
    case 0xC06736: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC06738: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:89 AND #$00FF
    case 0xC0673A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC0673A.
    case 0xC0673C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:90 JSL UNKNOWN_C4954C
    case 0xC0673D: {
        Instruction step(cpu, 0x22, 0xC4954Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:91 LDX #.LOWORD(-1)
    case 0xC06741: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:91 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC06741.
    case 0xC06743: {
        Instruction step(cpu, 0xFF, 0x2202A5u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:92 LDA @VIRTUAL02
    case 0xC06744: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:93 JSL UNKNOWN_C496E7
    case 0xC06746: {
        Instruction step(cpu, 0x22, 0xC496E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:93 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC06743.
    case 0xC06747: {
        Instruction step(cpu, 0xE7, 0x000096u, 2u, AddressMode::DirectPageIndirectLong);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:93 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC06747.
    case 0xC06749: {
        Instruction step(cpu, 0xC4, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:94 LDA #0
    case 0xC0674A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:94 LDA #0
    // Overlapping static entry reached from 0xC06749.
    case 0xC0674B: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:94 LDA #0
    // Overlapping static entry reached from 0xC0674A.
    case 0xC0674C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:95 STA @LOCAL02
    case 0xC0674D: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:96 BRA @UNKNOWN5
    case 0xC0674F: {
        Instruction step(cpu, 0x80, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:98 LDA PALETTE_UPLOAD_MODE
    case 0xC06751: {
        Instruction step(cpu, 0xAD, 0x000030u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:99 AND #$00FF
    case 0xC06754: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC06754.
    case 0xC06756: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:100 BEQ @UNKNOWN4
    case 0xC06757: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:101 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC06759: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:103 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC0675D: {
        Instruction step(cpu, 0x22, 0xC426EDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:104 JSL OAM_CLEAR
    case 0xC06761: {
        Instruction step(cpu, 0x22, 0xC088B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:105 JSL UNKNOWN_C4268A
    case 0xC06765: {
        Instruction step(cpu, 0x22, 0xC4268Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:106 JSL UNKNOWN_C426C7
    case 0xC06769: {
        Instruction step(cpu, 0x22, 0xC426C7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:107 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0676D: {
        Instruction step(cpu, 0x22, 0xC09466u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:108 JSL UPDATE_SCREEN
    case 0xC06771: {
        Instruction step(cpu, 0x22, 0xC08B26u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:109 JSL UNKNOWN_C4A7B0
    case 0xC06775: {
        Instruction step(cpu, 0x22, 0xC4A7B0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:110 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC06779: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:111 LDA @LOCAL02
    case 0xC0677D: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:112 INC
    case 0xC0677F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:113 STA @LOCAL02
    case 0xC06780: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:115 CMP @VIRTUAL02
    case 0xC06782: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:116 BCC @UNKNOWN3
    case 0xC06784: {
        Instruction step(cpu, 0x90, 0x0000CBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:117 SEP #PROC_FLAGS::ACCUM8
    case 0xC06786: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:118 LDY #screen_transition_config::fade_style
    case 0xC06788: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:118 LDY #screen_transition_config::fade_style
    // Overlapping static entry reached from 0xC06788.
    case 0xC0678A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:119 LDA [@VIRTUAL06],Y
    case 0xC0678B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:120 REP #PROC_FLAGS::ACCUM8
    case 0xC0678D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:121 AND #>-1
    case 0xC0678F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:121 AND #>-1
    // Overlapping static entry reached from 0xC0678F.
    case 0xC06791: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:122 STA @VIRTUAL02
    case 0xC06792: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:123 LDA #50
    case 0xC06794: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:123 LDA #50
    // Overlapping static entry reached from 0xC06794.
    case 0xC06796: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:124 CLC
    case 0xC06797: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:125 SBC @VIRTUAL02
    case 0xC06798: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC0679A: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC0679C: {
        Instruction step(cpu, 0x10, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC0679E: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC067A0: {
        Instruction step(cpu, 0x30, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:127 JSL UNKNOWN_C08726
    case 0xC067A2: {
        Instruction step(cpu, 0x22, 0xC08726u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:128 BRA @UNKNOWN9
    case 0xC067A6: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC067A8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:131 LDA #>-1
    case 0xC067AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0085FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:132 STA @LOCAL00
    case 0xC067AC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:132 STA @LOCAL00
    // Overlapping static entry reached from 0xC067AA.
    case 0xC067AD: {
        Instruction step(cpu, 0x0E, 0x0000A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:133 LDX #BPP4PALETTE_SIZE * 16
    case 0xC067AE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:133 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC067AE.
    case 0xC067B0: {
        Instruction step(cpu, 0x02, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xC067B1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:135 LDA #.LOWORD(PALETTES)
    case 0xC067B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:135 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC067B3.
    case 0xC067B5: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:136 JSL MEMSET16
    case 0xC067B6: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:137 LDA #24
    case 0xC067BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:137 LDA #24
    // Overlapping static entry reached from 0xC067BA.
    case 0xC067BC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:138 JSL UNKNOWN_C0856B
    case 0xC067BD: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:139 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC067C1: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:140 LDA #1
    case 0xC067C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:140 LDA #1
    // Overlapping static entry reached from 0xC067C5.
    case 0xC067C7: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:141 STA WIPE_PALETTES_ON_MAP_LOAD
    case 0xC067C8: {
        Instruction step(cpu, 0x8D, 0x004676u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:143 JSL UNKNOWN_C09451
    case 0xC067CB: {
        Instruction step(cpu, 0x22, 0xC09451u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:144 JMP @UNKNOWN22
    case 0xC067CF: {
        Instruction step(cpu, 0x4C, 0x006897u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:146 LDX #0
    case 0xC067D2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:146 LDX #0
    // Overlapping static entry reached from 0xC067D2.
    case 0xC067D4: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC067D5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:148 LDY #screen_transition_config::fade_style
    case 0xC067D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:148 LDY #screen_transition_config::fade_style
    // Overlapping static entry reached from 0xC067D7.
    case 0xC067D9: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:149 LDA [@VIRTUAL06],Y
    case 0xC067DA: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC067DC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:151 AND #$00FF
    case 0xC067DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:151 AND #$00FF
    // Overlapping static entry reached from 0xC067DE.
    case 0xC067E0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:152 STA @VIRTUAL02
    case 0xC067E1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:153 LDA #50
    case 0xC067E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:153 LDA #50
    // Overlapping static entry reached from 0xC067E3.
    case 0xC067E5: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:154 CLC
    case 0xC067E6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:155 SBC @VIRTUAL02
    case 0xC067E7: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC067E9: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC067EB: {
        Instruction step(cpu, 0x10, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC067ED: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC067EF: {
        Instruction step(cpu, 0x30, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:157 LDX #1
    case 0xC067F1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:157 LDX #1
    // Overlapping static entry reached from 0xC067F1.
    case 0xC067F3: {
        Instruction step(cpu, 0x00, 0x00009Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:159 TXY
    case 0xC067F4: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:160 STY @LOCAL05
    case 0xC067F5: {
        Instruction step(cpu, 0x84, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:161 BEQ @UNKNOWN14
    case 0xC067F7: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:162 LDX #1
    case 0xC067F9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:162 LDX #1
    // Overlapping static entry reached from 0xC067F9.
    case 0xC067FB: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:163 TXA
    case 0xC067FC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:164 JSL FADE_IN
    case 0xC067FD: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:165 BRA @UNKNOWN15
    case 0xC06801: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:167 LDX #.LOWORD(-1)
    case 0xC06803: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:167 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC06803.
    case 0xC06805: {
        Instruction step(cpu, 0xFF, 0xA020E2u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:168 SEP #PROC_FLAGS::ACCUM8
    case 0xC06806: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:169 LDY #screen_transition_config::secondary_duration
    case 0xC06808: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:169 LDY #screen_transition_config::secondary_duration
    // Overlapping static entry reached from 0xC06805.
    case 0xC06809: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:169 LDY #screen_transition_config::secondary_duration
    // Overlapping static entry reached from 0xC06808.
    case 0xC0680A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:170 LDA [@VIRTUAL06],Y
    case 0xC0680B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:171 REP #PROC_FLAGS::ACCUM8
    case 0xC0680D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:172 AND #$00FF
    case 0xC0680F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC0680F.
    case 0xC06811: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:173 JSL UNKNOWN_C496E7
    case 0xC06812: {
        Instruction step(cpu, 0x22, 0xC496E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC06816: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:176 LDY #screen_transition_config::secondary_animation_id
    case 0xC06818: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:176 LDY #screen_transition_config::secondary_animation_id
    // Overlapping static entry reached from 0xC06818.
    case 0xC0681A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:177 LDA [@VIRTUAL06],Y
    case 0xC0681B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:178 STA @LOCAL03
    case 0xC0681D: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:179 REP #PROC_FLAGS::ACCUM8
    case 0xC0681F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:180 AND #$00FF
    case 0xC06821: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:180 AND #$00FF
    // Overlapping static entry reached from 0xC06821.
    case 0xC06823: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:181 BEQ @UNKNOWN16
    case 0xC06824: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:182 SEP #PROC_FLAGS::ACCUM8
    case 0xC06826: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:183 LDY #screen_transition_config::secondary_animation_flags
    case 0xC06828: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:183 LDY #screen_transition_config::secondary_animation_flags
    // Overlapping static entry reached from 0xC06828.
    case 0xC0682A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:184 LDA [@VIRTUAL06],Y
    case 0xC0682B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC0682D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:186 AND #$00FF
    case 0xC0682F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:186 AND #$00FF
    // Overlapping static entry reached from 0xC0682F.
    case 0xC06831: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:187 TAX
    case 0xC06832: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:188 LDA @LOCAL03
    case 0xC06833: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:189 AND #$00FF
    case 0xC06835: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:189 AND #$00FF
    // Overlapping static entry reached from 0xC06835.
    case 0xC06837: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:190 JSL UNKNOWN_C4A67E
    case 0xC06838: {
        Instruction step(cpu, 0x22, 0xC4A67Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:192 LDA #0
    case 0xC0683C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:192 LDA #0
    // Overlapping static entry reached from 0xC0683C.
    case 0xC0683E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:193 STA @LOCAL02
    case 0xC0683F: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:194 BRA @UNKNOWN21
    case 0xC06841: {
        Instruction step(cpu, 0x80, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:196 LDY @LOCAL05
    case 0xC06843: {
        Instruction step(cpu, 0xA4, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:197 BNE @UNKNOWN19
    case 0xC06845: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:198 LDA PALETTE_UPLOAD_MODE
    case 0xC06847: {
        Instruction step(cpu, 0xAD, 0x000030u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:199 AND #$00FF
    case 0xC0684A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:199 AND #$00FF
    // Overlapping static entry reached from 0xC0684A.
    case 0xC0684C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:200 BEQ @UNKNOWN18
    case 0xC0684D: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:201 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0684F: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:203 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC06853: {
        Instruction step(cpu, 0x22, 0xC426EDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:205 JSL OAM_CLEAR
    case 0xC06857: {
        Instruction step(cpu, 0x22, 0xC088B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:206 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0685B: {
        Instruction step(cpu, 0x22, 0xC09466u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:207 JSL UNKNOWN_C4A7B0
    case 0xC0685F: {
        Instruction step(cpu, 0x22, 0xC4A7B0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:208 JSL UPDATE_SCREEN
    case 0xC06863: {
        Instruction step(cpu, 0x22, 0xC08B26u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:209 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC06867: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:210 LDA @LOCAL02
    case 0xC0686B: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:211 CMP #1
    case 0xC0686D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:211 CMP #1
    // Overlapping static entry reached from 0xC0686D.
    case 0xC0686F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:212 BNE @UNKNOWN20
    case 0xC06870: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:213 JSL UNKNOWN_C0943C
    case 0xC06872: {
        Instruction step(cpu, 0x22, 0xC0943Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:215 LDA @LOCAL02
    case 0xC06876: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:216 INC
    case 0xC06878: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:217 STA @LOCAL02
    case 0xC06879: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:219 SEP #PROC_FLAGS::ACCUM8
    case 0xC0687B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:220 LDY #screen_transition_config::secondary_duration
    case 0xC0687D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:220 LDY #screen_transition_config::secondary_duration
    // Overlapping static entry reached from 0xC0687D.
    case 0xC0687F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:221 LDA [@VIRTUAL06],Y
    case 0xC06880: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:222 REP #PROC_FLAGS::ACCUM8
    case 0xC06882: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:223 AND #$00FF
    case 0xC06884: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:223 AND #$00FF
    // Overlapping static entry reached from 0xC06884.
    case 0xC06886: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:224 STA @VIRTUAL02
    case 0xC06887: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:225 LDA @LOCAL02
    case 0xC06889: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:226 CMP @VIRTUAL02
    case 0xC0688B: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:227 BCC @UNKNOWN17
    case 0xC0688D: {
        Instruction step(cpu, 0x90, 0x0000B4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:228 LDY @LOCAL05
    case 0xC0688F: {
        Instruction step(cpu, 0xA4, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:229 BNE @UNKNOWN22
    case 0xC06891: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:230 JSL UNKNOWN_C49740
    case 0xC06893: {
        Instruction step(cpu, 0x22, 0xC49740u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:232 LDA GIYGAS_PHASE
    case 0xC06897: {
        Instruction step(cpu, 0xAD, 0x00A97Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:233 CMP #GIYGAS_PHASES::START_PRAYING
    case 0xC0689A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:233 CMP #GIYGAS_PHASES::START_PRAYING
    // Overlapping static entry reached from 0xC0689A.
    case 0xC0689C: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:234 BCS @UNKNOWN23
    case 0xC0689D: {
        Instruction step(cpu, 0xB0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:235 JSL UNKNOWN_C2EAAA
    case 0xC0689F: {
        Instruction step(cpu, 0x22, 0xC2EAAAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:237 JSL UNKNOWN_C09451
    case 0xC068A3: {
        Instruction step(cpu, 0x22, 0xC09451u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:238 STZ LADDER_STAIRS_TILE_Y
    case 0xC068A7: {
        Instruction step(cpu, 0x9C, 0x005DAAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/screen_transition.asm:239 STZ LADDER_STAIRS_TILE_X
    case 0xC068AA: {
        Instruction step(cpu, 0x9C, 0x005DA8u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/screen_transition.asm:240 END_C_FUNCTION
    case 0xC068AD: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/screen_transition.asm:240 END_C_FUNCTION
    case 0xC068AE: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
