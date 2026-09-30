// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/run_actionscript_frame.asm
bool resume_overworld_actionscript_run_actionscript_frame(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/run_actionscript_frame.asm:3 LDA DISABLE_ACTIONSCRIPT
    case 0xC09445: {
        Instruction step(cpu, 0xAD, 0x000A56u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:4 BEQ @UNKNOWN0
    case 0xC09448: {
        Instruction step(cpu, 0xF0, 0x000001u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:5 RTL
    case 0xC0944A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:7 JMP $800000 | .LOWORD(@UNKNOWN1)
    case 0xC0944B: {
        Instruction step(cpu, 0x5C, 0x80944Fu, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:9 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0944F: {
        Instruction step(cpu, 0xC2, 0x000030u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC09451: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:11 PHD
    case 0xC09453: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:12 PHA
    case 0xC09454: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:13 TDC
    case 0xC09455: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:14 SEC
    case 0xC09456: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:15 SBC #$00A0
    case 0xC09457: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:15 SBC #$00A0
    // Overlapping static entry reached from 0xC09457.
    case 0xC09459: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:16 AND #$FF00
    case 0xC0945A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:16 AND #$FF00
    // Overlapping static entry reached from 0xC0945A.
    case 0xC0945C: {
        Instruction step(cpu, 0xFF, 0xEE685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:17 TCD
    case 0xC0945D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:18 PLA
    case 0xC0945E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:19 INC DISABLE_ACTIONSCRIPT
    case 0xC0945F: {
        Instruction step(cpu, 0xEE, 0x000A56u, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:19 INC DISABLE_ACTIONSCRIPT
    // Overlapping static entry reached from 0xC0945C.
    case 0xC09460: {
        Instruction step(cpu, 0x56, 0x00000Au, 2u, AddressMode::DirectPageIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:20 LDX FIRST_ENTITY
    case 0xC09462: {
        Instruction step(cpu, 0xAE, 0x000A46u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:21 BMI @UNKNOWN5
    case 0xC09465: {
        Instruction step(cpu, 0x30, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:22 STZ $80
    case 0xC09467: {
        Instruction step(cpu, 0x64, 0x000080u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:23 STZ $86
    case 0xC09469: {
        Instruction step(cpu, 0x64, 0x000086u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:25 STX $88
    case 0xC0946B: {
        Instruction step(cpu, 0x86, 0x000088u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:26 STX CURRENT_ENTITY_OFFSET
    case 0xC0946D: {
        Instruction step(cpu, 0x8E, 0x001A3Au, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:27 STX CURRENT_ENTITY_SLOT
    case 0xC09470: {
        Instruction step(cpu, 0x8E, 0x001A38u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:28 LSR CURRENT_ENTITY_SLOT
    case 0xC09473: {
        Instruction step(cpu, 0x4E, 0x001A38u, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:29 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09476: {
        Instruction step(cpu, 0xBD, 0x000A94u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:30 STA NEXT_ACTIVE_ENTITY
    case 0xC09479: {
        Instruction step(cpu, 0x8D, 0x000A4Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:31 JSR UNKNOWN_C094D0
    case 0xC0947C: {
        Instruction step(cpu, 0x20, 0x0094AFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:32 LDX NEXT_ACTIVE_ENTITY
    case 0xC0947F: {
        Instruction step(cpu, 0xAE, 0x000A4Cu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:33 BPL @UNKNOWN2
    case 0xC09482: {
        Instruction step(cpu, 0x10, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:34 LDX FIRST_ENTITY
    case 0xC09484: {
        Instruction step(cpu, 0xAE, 0x000A46u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:35 BMI @UNKNOWN5
    case 0xC09487: {
        Instruction step(cpu, 0x30, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:37 STX CURRENT_ENTITY_SLOT
    case 0xC09489: {
        Instruction step(cpu, 0x8E, 0x001A38u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:38 LSR CURRENT_ENTITY_SLOT
    case 0xC0948C: {
        Instruction step(cpu, 0x4E, 0x001A38u, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:39 STX $88
    case 0xC0948F: {
        Instruction step(cpu, 0x86, 0x000088u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:40 BIT ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09491: {
        Instruction step(cpu, 0x3C, 0x0010ACu, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:41 BVS @UNKNOWN4
    case 0xC09494: {
        Instruction step(cpu, 0x70, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:42 JSR (.LOWORD(ENTITY_MOVE_CALLBACK),X)
    case 0xC09496: {
        Instruction step(cpu, 0xFC, 0x001214u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:44 JSR (.LOWORD(ENTITY_SCREEN_POSITION_CALLBACK),X)
    case 0xC09499: {
        Instruction step(cpu, 0xFC, 0x00119Cu, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:45 LDX $88
    case 0xC0949C: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:46 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC0949E: {
        Instruction step(cpu, 0xBD, 0x000A94u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:47 TAX
    case 0xC094A1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:48 BPL @UNKNOWN3
    case 0xC094A2: {
        Instruction step(cpu, 0x10, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:49 LDX #$0000
    case 0xC094A4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:49 LDX #$0000
    // Overlapping static entry reached from 0xC094A4.
    case 0xC094A6: {
        Instruction step(cpu, 0x00, 0x0000FCu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:50 JSR (.LOWORD(CURRENT_ENTITY_DRAW_CALLBACK),X)
    case 0xC094A7: {
        Instruction step(cpu, 0xFC, 0x000A54u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:52 PLD
    case 0xC094AA: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:53 STZ DISABLE_ACTIONSCRIPT
    case 0xC094AB: {
        Instruction step(cpu, 0x9C, 0x000A56u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/run_actionscript_frame.asm:54 RTL
    case 0xC094AE: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
