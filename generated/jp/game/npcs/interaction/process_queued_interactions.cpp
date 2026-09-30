// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/process_queued_interactions.asm
bool resume_overworld_process_queued_interactions(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/process_queued_interactions.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0781C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC0781E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC0781F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC07820: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC07820.
    case 0xC07822: {
        Instruction step(cpu, 0xFF, 0x88AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC07823: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:11 LDA CURRENT_QUEUED_INTERACTION
    case 0xC07824: {
        Instruction step(cpu, 0xAD, 0x006188u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:11 LDA CURRENT_QUEUED_INTERACTION
    // Overlapping static entry reached from 0xC07822.
    case 0xC07826: {
        Instruction step(cpu, 0x61, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC07827: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    // Overlapping static entry reached from 0xC07826.
    case 0xC07828: {
        Instruction step(cpu, 0x04, 0x00000Au, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC07829: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC0782A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC0782C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:13 TAX
    case 0xC0782D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:14 LDA QUEUED_INTERACTIONS + queued_interaction::type,X
    case 0xC0782E: {
        Instruction step(cpu, 0xBD, 0x006170u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:15 STA @LOCAL02
    case 0xC07831: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:16 TXA
    case 0xC07833: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:17 CLC
    case 0xC07834: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:18 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    case 0xC07835: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000072u : 0x006172u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:18 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    // Overlapping static entry reached from 0xC07835.
    case 0xC07837: {
        Instruction step(cpu, 0x61, 0x0000A8u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:19 TAY
    case 0xC07838: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC07839: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0783C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0783E: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC07841: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:22 MOVE_INT @VIRTUAL06, @LOCALM2
    case 0xC07843: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:22 MOVE_INT @VIRTUAL06, @LOCALM2
    case 0xC07845: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:22 MOVE_INT @VIRTUAL06, @LOCALM2
    case 0xC07847: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:22 MOVE_INT @VIRTUAL06, @LOCALM2
    case 0xC07849: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:24 LDA @LOCAL02
    case 0xC0784B: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:25 STA CURRENT_QUEUED_INTERACTION_TYPE
    case 0xC0784D: {
        Instruction step(cpu, 0x8D, 0x006146u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:26 LDA CURRENT_QUEUED_INTERACTION
    case 0xC07850: {
        Instruction step(cpu, 0xAD, 0x006188u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:27 INC
    case 0xC07853: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:28 AND #$0003
    case 0xC07854: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:28 AND #$0003
    // Overlapping static entry reached from 0xC07854.
    case 0xC07856: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:29 STA CURRENT_QUEUED_INTERACTION
    case 0xC07857: {
        Instruction step(cpu, 0x8D, 0x006188u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:30 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0785A: {
        Instruction step(cpu, 0xAD, 0x0060DEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:31 AND #$FFFE
    case 0xC0785D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FEu : 0x00FFFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:31 AND #$FFFE
    // Overlapping static entry reached from 0xC0785D.
    case 0xC0785F: {
        Instruction step(cpu, 0xFF, 0x60DE8Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:32 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC07860: {
        Instruction step(cpu, 0x8D, 0x0060DEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:33 JSL UNKNOWN_C07C5B
    case 0xC07863: {
        Instruction step(cpu, 0x22, 0xC07EABu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:34 LDA @LOCAL02
    case 0xC07867: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:35 CMP #2
    case 0xC07869: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:35 CMP #2
    // Overlapping static entry reached from 0xC07869.
    case 0xC0786B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:36 BEQ @UNKNOWN0
    case 0xC0786C: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:37 CMP #10
    case 0xC0786E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:37 CMP #10
    // Overlapping static entry reached from 0xC0786E.
    case 0xC07870: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:38 BEQ @UNKNOWN1
    case 0xC07871: {
        Instruction step(cpu, 0xF0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:39 CMP #0
    case 0xC07873: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:39 CMP #0
    // Overlapping static entry reached from 0xC07873.
    case 0xC07875: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:40 BEQ @UNKNOWN3
    case 0xC07876: {
        Instruction step(cpu, 0xF0, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:41 CMP #8
    case 0xC07878: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:41 CMP #8
    // Overlapping static entry reached from 0xC07878.
    case 0xC0787A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:42 BEQ @UNKNOWN3
    case 0xC0787B: {
        Instruction step(cpu, 0xF0, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:43 CMP #9
    case 0xC0787D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:43 CMP #9
    // Overlapping static entry reached from 0xC0787D.
    case 0xC0787F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:44 BEQ @UNKNOWN3
    case 0xC07880: {
        Instruction step(cpu, 0xF0, 0x000042u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:45 BRA @UNKNOWN4
    case 0xC07882: {
        Instruction step(cpu, 0x80, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07884: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07886: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07888: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0788A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:48 JSR DOOR_TRANSITION
    case 0xC0788C: {
        Instruction step(cpu, 0x20, 0x006E2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:49 BRA @UNKNOWN4
    case 0xC0788F: {
        Instruction step(cpu, 0x80, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07891: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07893: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07895: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07897: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:52 JSL UNKNOWN_C10004
    case 0xC07899: {
        Instruction step(cpu, 0x22, 0xC10000u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    case 0xC0789D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00319Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    // Overlapping static entry reached from 0xC0789D.
    case 0xC0789F: {
        Instruction step(cpu, 0x31, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    case 0xC078A0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    // Overlapping static entry reached from 0xC0789F.
    case 0xC078A1: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    case 0xC078A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    // Overlapping static entry reached from 0xC078A1.
    case 0xC078A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    // Overlapping static entry reached from 0xC078A2.
    case 0xC078A4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    case 0xC078A5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/process_queued_interactions.asm:54 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL06
    // Overlapping static entry reached from 0xC078A3.
    case 0xC078A6: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:55 LDA @VIRTUAL06
    case 0xC078A7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:56 STA @VIRTUAL02
    case 0xC078A9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:57 MOVE_INT @LOCALM2, @VIRTUAL06
    case 0xC078AB: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:57 MOVE_INT @LOCALM2, @VIRTUAL06
    case 0xC078AD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:57 MOVE_INT @LOCALM2, @VIRTUAL06
    case 0xC078AF: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:57 MOVE_INT @LOCALM2, @VIRTUAL06
    case 0xC078B1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:58 LDA @VIRTUAL06
    case 0xC078B3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:59 CMP @VIRTUAL02
    case 0xC078B5: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:64 BNE @UNKNOWN4
    case 0xC078B7: {
        Instruction step(cpu, 0xD0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:65 LDA #1687
    case 0xC078B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000097u : 0x000697u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:65 LDA #1687
    // Overlapping static entry reached from 0xC078B9.
    case 0xC078BB: {
        Instruction step(cpu, 0x06, 0x00008Du, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:66 STA DAD_PHONE_TIMER
    case 0xC078BC: {
        Instruction step(cpu, 0x8D, 0x00A05Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:66 STA DAD_PHONE_TIMER
    // Overlapping static entry reached from 0xC078BB.
    case 0xC078BD: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:66 STA DAD_PHONE_TIMER
    // Overlapping static entry reached from 0xC078BD.
    case 0xC078BE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00009Cu : 0x005C9Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:67 STZ DAD_PHONE_QUEUED
    case 0xC078BF: {
        Instruction step(cpu, 0x9C, 0x00A05Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:67 STZ DAD_PHONE_QUEUED
    // Overlapping static entry reached from 0xC078BE.
    case 0xC078C0: {
        Instruction step(cpu, 0x5C, 0x0C80A0u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:67 STZ DAD_PHONE_QUEUED
    // Overlapping static entry reached from 0xC078BE.
    case 0xC078C1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000080u : 0x000C80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:68 BRA @UNKNOWN4
    case 0xC078C2: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:68 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC078C1.
    case 0xC078C3: {
        Instruction step(cpu, 0x0C, 0x0006A5u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC078C4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC078C6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC078C8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC078CA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:71 JSL UNKNOWN_C10004
    case 0xC078CC: {
        Instruction step(cpu, 0x22, 0xC10000u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:73 LDX #0
    case 0xC078D0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:73 LDX #0
    // Overlapping static entry reached from 0xC078D0.
    case 0xC078D2: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:74 LDA CURRENT_QUEUED_INTERACTION
    case 0xC078D3: {
        Instruction step(cpu, 0xAD, 0x006188u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:75 CMP NEXT_QUEUED_INTERACTION
    case 0xC078D6: {
        Instruction step(cpu, 0xCD, 0x00618Au, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:76 BEQ @UNKNOWN5
    case 0xC078D9: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:77 LDX #1
    case 0xC078DB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:77 LDX #1
    // Overlapping static entry reached from 0xC078DB.
    case 0xC078DD: {
        Instruction step(cpu, 0x00, 0x00008Eu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:79 STX PENDING_INTERACTIONS
    case 0xC078DE: {
        Instruction step(cpu, 0x8E, 0x006120u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:80 LDA #.LOWORD(-1)
    case 0xC078E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:80 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC078E1.
    case 0xC078E3: {
        Instruction step(cpu, 0xFF, 0x61468Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:81 STA CURRENT_QUEUED_INTERACTION_TYPE
    case 0xC078E4: {
        Instruction step(cpu, 0x8D, 0x006146u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/process_queued_interactions.asm:82 END_C_FUNCTION
    case 0xC078E7: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/process_queued_interactions.asm:82 END_C_FUNCTION
    case 0xC078E8: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
