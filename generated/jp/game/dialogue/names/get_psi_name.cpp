// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/get_psi_name.asm
bool resume_text_get_psi_name(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_psi_name.asm:3 BEGIN_C_FUNCTION
    case 0xC1C26D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C26F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C270: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C271: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C272: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C272.
    case 0xC1C274: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C275: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C276: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/get_psi_name.asm:9 STA @LOCAL01
    case 0xC1C277: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_psi_name.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC1C274.
    case 0xC1C278: {
        Instruction step(cpu, 0x12, 0x0000C9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/get_psi_name.asm:10 CMP #1
    case 0xC1C279: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/get_psi_name.asm:10 CMP #1
    // Overlapping static entry reached from 0xC1C278.
    case 0xC1C27A: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/get_psi_name.asm:10 CMP #1
    // Overlapping static entry reached from 0xC1C279.
    case 0xC1C27B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_psi_name.asm:11 BNE @NOT_ROCKIN
    case 0xC1C27C: {
        Instruction step(cpu, 0xD0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C27E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D9u : 0x009AD9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C27E.
    case 0xC1C280: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C281: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C283: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C284: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C286: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C287: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C289: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/get_psi_name.asm:13 BRA @UNKNOWN1
    case 0xC1C28B: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    case 0xC1C28D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000030u : 0x009D30u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C28D.
    case 0xC1C28F: {
        Instruction step(cpu, 0x9D, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    case 0xC1C290: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    case 0xC1C292: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C292.
    case 0xC1C294: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    case 0xC1C295: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_psi_name.asm:17 LDA @LOCAL01
    case 0xC1C297: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_psi_name.asm:18 DEC
    case 0xC1C299: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:555 STA scratch
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C29A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:556 ASL
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C29C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:557 ASL
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C29D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C29E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:559 ASL
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C2A0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/get_psi_name.asm:20 CLC
    case 0xC1C2A1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/get_psi_name.asm:21 ADC @VIRTUAL06
    case 0xC1C2A2: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/get_psi_name.asm:22 STA @VIRTUAL06
    case 0xC1C2A4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_psi_name.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC1C2A6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_psi_name.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C2A8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_psi_name.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C2AA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_psi_name.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C2AC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_psi_name.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C2AE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_psi_name.asm:26 LDA #.LOWORD(-1)
    case 0xC1C2B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_psi_name.asm:26 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1C2B0.
    case 0xC1C2B2: {
        Instruction step(cpu, 0xFF, 0x14DD20u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/get_psi_name.asm:28 JSR PRINT_STRING
    case 0xC1C2B3: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_psi_name.asm:32 END_C_FUNCTION
    case 0xC1C2B6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_psi_name.asm:32 END_C_FUNCTION
    case 0xC1C2B7: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
