// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/trigger_battle.asm
bool resume_text_ccs_trigger_battle(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/trigger_battle.asm:3 BEGIN_C_FUNCTION
    case 0xC16FD1: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC16FD3: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC16FD4: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC16FD5: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC16FD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16FD6.
    case 0xC16FD8: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC16FD9: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/trigger_battle.asm:10 END_STACK_VARS
    case 0xC16FDA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:11 TXA
    case 0xC16FDB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:12 STA @LOCAL01
    case 0xC16FDC: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:13 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FDE: {
        Instruction step(cpu, 0xAD, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:14 BNE @UNKNOWN0
    case 0xC16FE1: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:15 LDA @LOCAL01
    case 0xC16FE3: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC16FE5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FE7: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC16FEA: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC16FED: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FEF: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:21 LDA #.LOWORD(CC_1F_23)
    case 0xC16FF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D1u : 0x006FD1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:21 LDA #.LOWORD(CC_1F_23)
    // Overlapping static entry reached from 0xC16FF2.
    case 0xC16FF4: {
        Instruction step(cpu, 0x6F, 0xE23E80u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:22 BRA @UNKNOWN4
    case 0xC16FF5: {
        Instruction step(cpu, 0x80, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC16FF7: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:24 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16FF4.
    case 0xC16FF8: {
        Instruction step(cpu, 0x10, 0x0000A0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:25 LDY #8
    case 0xC16FF9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00A508u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:25 LDY #8
    // Overlapping static entry reached from 0xC16FF8.
    case 0xC16FFA: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:26 LDA @LOCAL01
    case 0xC16FFB: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:26 LDA @LOCAL01
    // Overlapping static entry reached from 0xC16FF9.
    case 0xC16FFC: {
        Instruction step(cpu, 0x12, 0x000022u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:27 JSL ASL16_ENTRY2
    case 0xC16FFD: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:27 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16FFC.
    case 0xC16FFE: {
        Instruction step(cpu, 0x3E, 0x00C092u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:28 STA @VIRTUAL02
    case 0xC17001: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC17003: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:30 AND #$00FF
    case 0xC17006: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC17006.
    case 0xC17008: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:31 ORA @VIRTUAL02
    case 0xC17009: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:32 BEQ @UNKNOWN1
    case 0xC1700B: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/trigger_battle.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC1700D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/trigger_battle.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC1700F: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:34 BRA @UNKNOWN2
    case 0xC17011: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:36 JSR GET_ARGUMENT_MEMORY
    case 0xC17013: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:38 LDA @VIRTUAL06
    case 0xC17016: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:39 JSL INIT_BATTLE_SCRIPTED
    case 0xC17018: {
        Instruction step(cpu, 0x22, 0xC22F38u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1701C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC1701C.
    case 0xC1701E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1701F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17021: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17023: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/trigger_battle.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17025: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/trigger_battle.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17027: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/trigger_battle.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17029: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/trigger_battle.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1702B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/trigger_battle.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1702D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:42 JSR SET_WORKING_MEMORY
    case 0xC1702F: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:43 LDA #NULL
    case 0xC17032: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/trigger_battle.asm:43 LDA #NULL
    // Overlapping static entry reached from 0xC17032.
    case 0xC17034: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/trigger_battle.asm:45 END_C_FUNCTION
    case 0xC17035: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/trigger_battle.asm:45 END_C_FUNCTION
    case 0xC17036: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
