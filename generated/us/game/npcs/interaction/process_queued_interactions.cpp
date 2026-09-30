// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/process_queued_interactions.asm
bool resume_overworld_process_queued_interactions(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/process_queued_interactions.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC075DD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC075DF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC075E0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC075E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC075E1.
    case 0xC075E3: {
        Instruction step(cpu, 0xFF, 0x02AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/process_queued_interactions.asm:10 END_STACK_VARS
    case 0xC075E4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:11 LDA CURRENT_QUEUED_INTERACTION
    case 0xC075E5: {
        Instruction step(cpu, 0xAD, 0x005E02u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:11 LDA CURRENT_QUEUED_INTERACTION
    // Overlapping static entry reached from 0xC075E3.
    case 0xC075E7: {
        Instruction step(cpu, 0x5E, 0x000485u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC075E8: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC075EA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC075EB: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/overworld/process_queued_interactions.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC075ED: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:13 TAX
    case 0xC075EE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:14 LDA QUEUED_INTERACTIONS + queued_interaction::type,X
    case 0xC075EF: {
        Instruction step(cpu, 0xBD, 0x005DEAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:15 STA @LOCAL02
    case 0xC075F2: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:16 TXA
    case 0xC075F4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:17 CLC
    case 0xC075F5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:18 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    case 0xC075F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x005DECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:18 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    // Overlapping static entry reached from 0xC075F6.
    case 0xC075F8: {
        Instruction step(cpu, 0x5D, 0x00B9A8u, 3u, AddressMode::AbsoluteIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:19 TAY
    case 0xC075F9: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC075FA: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC075F8.
    case 0xC075FB: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC075FD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC075FF: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:20 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC07602: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:24 LDA @LOCAL02
    case 0xC07604: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:25 STA CURRENT_QUEUED_INTERACTION_TYPE
    case 0xC07606: {
        Instruction step(cpu, 0x8D, 0x005DC0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:26 LDA CURRENT_QUEUED_INTERACTION
    case 0xC07609: {
        Instruction step(cpu, 0xAD, 0x005E02u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:27 INC
    case 0xC0760C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:28 AND #$0003
    case 0xC0760D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:28 AND #$0003
    // Overlapping static entry reached from 0xC0760D.
    case 0xC0760F: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:29 STA CURRENT_QUEUED_INTERACTION
    case 0xC07610: {
        Instruction step(cpu, 0x8D, 0x005E02u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:30 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC07613: {
        Instruction step(cpu, 0xAD, 0x005D58u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:31 AND #$FFFE
    case 0xC07616: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FEu : 0x00FFFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:31 AND #$FFFE
    // Overlapping static entry reached from 0xC07616.
    case 0xC07618: {
        Instruction step(cpu, 0xFF, 0x5D588Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:32 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC07619: {
        Instruction step(cpu, 0x8D, 0x005D58u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:33 JSL UNKNOWN_C07C5B
    case 0xC0761C: {
        Instruction step(cpu, 0x22, 0xC07C5Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:34 LDA @LOCAL02
    case 0xC07620: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:35 CMP #2
    case 0xC07622: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:35 CMP #2
    // Overlapping static entry reached from 0xC07622.
    case 0xC07624: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:36 BEQ @UNKNOWN0
    case 0xC07625: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:37 CMP #10
    case 0xC07627: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:37 CMP #10
    // Overlapping static entry reached from 0xC07627.
    case 0xC07629: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:38 BEQ @UNKNOWN1
    case 0xC0762A: {
        Instruction step(cpu, 0xF0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:39 CMP #0
    case 0xC0762C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:39 CMP #0
    // Overlapping static entry reached from 0xC0762C.
    case 0xC0762E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:40 BEQ @UNKNOWN3
    case 0xC0762F: {
        Instruction step(cpu, 0xF0, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:41 CMP #8
    case 0xC07631: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:41 CMP #8
    // Overlapping static entry reached from 0xC07631.
    case 0xC07633: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:42 BEQ @UNKNOWN3
    case 0xC07634: {
        Instruction step(cpu, 0xF0, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:43 CMP #9
    case 0xC07636: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:43 CMP #9
    // Overlapping static entry reached from 0xC07636.
    case 0xC07638: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:44 BEQ @UNKNOWN3
    case 0xC07639: {
        Instruction step(cpu, 0xF0, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:45 BRA @UNKNOWN4
    case 0xC0763B: {
        Instruction step(cpu, 0x80, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0763D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0763F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07641: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07643: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:48 JSR DOOR_TRANSITION
    case 0xC07645: {
        Instruction step(cpu, 0x20, 0x006BFFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:49 BRA @UNKNOWN4
    case 0xC07648: {
        Instruction step(cpu, 0x80, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0764A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0764C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0764E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07650: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:52 JSL UNKNOWN_C10004
    case 0xC07652: {
        Instruction step(cpu, 0x22, 0xC10004u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:61 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL0A
    case 0xC07656: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Eu : 0x00D33Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:61 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL0A
    // Overlapping static entry reached from 0xC07656.
    case 0xC07658: {
        Instruction step(cpu, 0xD3, 0x000085u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/process_queued_interactions.asm:61 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL0A
    case 0xC07659: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/process_queued_interactions.asm:61 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL0A
    // Overlapping static entry reached from 0xC07658.
    case 0xC0765A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:61 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL0A
    case 0xC0765B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_queued_interactions.asm:61 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0765B.
    case 0xC0765D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/process_queued_interactions.asm:61 LOADPTR MSG_SYS_PAPA_2H, @VIRTUAL0A
    case 0xC0765E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/process_queued_interactions.asm:62 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC07660: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/process_queued_interactions.asm:62 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC07662: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/process_queued_interactions.asm:62 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC07664: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:62 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC07666: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/process_queued_interactions.asm:62 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC07668: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:64 BNE @UNKNOWN4
    case 0xC0766A: {
        Instruction step(cpu, 0xD0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:65 LDA #1687
    case 0xC0766C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000097u : 0x000697u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:65 LDA #1687
    // Overlapping static entry reached from 0xC0766C.
    case 0xC0766E: {
        Instruction step(cpu, 0x06, 0x00008Du, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:66 STA DAD_PHONE_TIMER
    case 0xC0766F: {
        Instruction step(cpu, 0x8D, 0x009E54u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:66 STA DAD_PHONE_TIMER
    // Overlapping static entry reached from 0xC0766E.
    case 0xC07670: {
        Instruction step(cpu, 0x54, 0x009C9Eu, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:67 STZ DAD_PHONE_QUEUED
    case 0xC07672: {
        Instruction step(cpu, 0x9C, 0x009E56u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:67 STZ DAD_PHONE_QUEUED
    // Overlapping static entry reached from 0xC07670.
    case 0xC07673: {
        Instruction step(cpu, 0x56, 0x00009Eu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:68 BRA @UNKNOWN4
    case 0xC07675: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07677: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07679: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0767B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/process_queued_interactions.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0767D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:71 JSL UNKNOWN_C10004
    case 0xC0767F: {
        Instruction step(cpu, 0x22, 0xC10004u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:73 LDX #0
    case 0xC07683: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:73 LDX #0
    // Overlapping static entry reached from 0xC07683.
    case 0xC07685: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:74 LDA CURRENT_QUEUED_INTERACTION
    case 0xC07686: {
        Instruction step(cpu, 0xAD, 0x005E02u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:75 CMP NEXT_QUEUED_INTERACTION
    case 0xC07689: {
        Instruction step(cpu, 0xCD, 0x005E04u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:76 BEQ @UNKNOWN5
    case 0xC0768C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:77 LDX #1
    case 0xC0768E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:77 LDX #1
    // Overlapping static entry reached from 0xC0768E.
    case 0xC07690: {
        Instruction step(cpu, 0x00, 0x00008Eu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:79 STX PENDING_INTERACTIONS
    case 0xC07691: {
        Instruction step(cpu, 0x8E, 0x005D9Au, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:80 LDA #.LOWORD(-1)
    case 0xC07694: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:80 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC07694.
    case 0xC07696: {
        Instruction step(cpu, 0xFF, 0x5DC08Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/process_queued_interactions.asm:81 STA CURRENT_QUEUED_INTERACTION_TYPE
    case 0xC07697: {
        Instruction step(cpu, 0x8D, 0x005DC0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/process_queued_interactions.asm:82 END_C_FUNCTION
    case 0xC0769A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/process_queued_interactions.asm:82 END_C_FUNCTION
    case 0xC0769B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
