// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/print_cast_name-jp.asm
bool resume_ending_print_cast_name_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/print_cast_name-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BD19: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/print_cast_name-jp.asm:11 END_STACK_VARS
    case 0xC4BD1B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/print_cast_name-jp.asm:11 END_STACK_VARS
    case 0xC4BD1C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/print_cast_name-jp.asm:11 END_STACK_VARS
    case 0xC4BD1D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name-jp.asm:11 END_STACK_VARS
    case 0xC4BD1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name-jp.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BD1E.
    case 0xC4BD20: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/print_cast_name-jp.asm:11 END_STACK_VARS
    case 0xC4BD21: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/print_cast_name-jp.asm:11 END_STACK_VARS
    case 0xC4BD22: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:12 STY @VIRTUAL04
    case 0xC4BD23: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:12 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC4BD20.
    case 0xC4BD24: {
        Instruction step(cpu, 0x04, 0x000086u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:13 STX @VIRTUAL02
    case 0xC4BD25: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:13 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4BD24.
    case 0xC4BD26: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:14 STA @LOCAL02
    case 0xC4BD27: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BD29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000081u : 0x002381u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BD29.
    case 0xC4BD2B: {
        Instruction step(cpu, 0x23, 0x000085u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BD2C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BD2B.
    case 0xC4BD2D: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BD2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BD2D.
    case 0xC4BD2F: {
        Instruction step(cpu, 0xE1, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BD2E.
    case 0xC4BD30: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BD31: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BD33: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BD35: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BD37: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BD39: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:17 LDA @LOCAL02
    case 0xC4BD3B: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:18 ASL
    case 0xC4BD3D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:19 CLC
    case 0xC4BD3E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:20 ADC @VIRTUAL06
    case 0xC4BD3F: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:21 STA @VIRTUAL06
    case 0xC4BD41: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:22 LDA [@VIRTUAL06]
    case 0xC4BD43: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/ending/print_cast_name-jp.asm:23 STORE_INT1632 @VIRTUAL0A
    case 0xC4BD45: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/ending/print_cast_name-jp.asm:23 STORE_INT1632 @VIRTUAL0A
    case 0xC4BD47: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/ending/print_cast_name-jp.asm:24 PUSH32 @VIRTUAL0A
    case 0xC4BD49: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:918 PHA
    // Macro caller: src/ending/print_cast_name-jp.asm:24 PUSH32 @VIRTUAL0A
    case 0xC4BD4B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:919 LDA val
    // Macro caller: src/ending/print_cast_name-jp.asm:24 PUSH32 @VIRTUAL0A
    case 0xC4BD4C: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:920 PHA
    // Macro caller: src/ending/print_cast_name-jp.asm:24 PUSH32 @VIRTUAL0A
    case 0xC4BD4E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/print_cast_name-jp.asm:25 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BD4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/print_cast_name-jp.asm:25 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4BD4F.
    case 0xC4BD51: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/print_cast_name-jp.asm:25 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BD52: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/print_cast_name-jp.asm:25 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BD54: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/print_cast_name-jp.asm:25 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4BD54.
    case 0xC4BD56: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/ending/print_cast_name-jp.asm:25 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BD57: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name-jp.asm:26 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BD59: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name-jp.asm:26 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BD5B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name-jp.asm:26 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BD5D: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name-jp.asm:26 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BD5F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:968 LDA val1
    // Macro caller: src/ending/print_cast_name-jp.asm:27 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD61: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:969 AND val2
    // Macro caller: src/ending/print_cast_name-jp.asm:27 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD63: {
        Instruction step(cpu, 0x25, 0x00000Au, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:970 STA dest
    // Macro caller: src/ending/print_cast_name-jp.asm:27 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD65: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/ending/print_cast_name-jp.asm:27 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD67: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/ending/print_cast_name-jp.asm:27 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD69: {
        Instruction step(cpu, 0x25, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/ending/print_cast_name-jp.asm:27 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD6B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/ending/print_cast_name-jp.asm:28 PULL32 @VIRTUAL0A
    case 0xC4BD6D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/ending/print_cast_name-jp.asm:28 PULL32 @VIRTUAL0A
    case 0xC4BD6E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/ending/print_cast_name-jp.asm:28 PULL32 @VIRTUAL0A
    case 0xC4BD70: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/ending/print_cast_name-jp.asm:28 PULL32 @VIRTUAL0A
    case 0xC4BD71: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:29 CLC
    case 0xC4BD73: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/ending/print_cast_name-jp.asm:30 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD74: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/ending/print_cast_name-jp.asm:30 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD76: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/ending/print_cast_name-jp.asm:30 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD78: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/ending/print_cast_name-jp.asm:30 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD7A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/ending/print_cast_name-jp.asm:30 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD7C: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/ending/print_cast_name-jp.asm:30 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD7E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name-jp.asm:31 MOVE_INT@VIRTUAL06, @LOCAL00
    case 0xC4BD80: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name-jp.asm:31 MOVE_INT@VIRTUAL06, @LOCAL00
    case 0xC4BD82: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name-jp.asm:31 MOVE_INT@VIRTUAL06, @LOCAL00
    case 0xC4BD84: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name-jp.asm:31 MOVE_INT@VIRTUAL06, @LOCAL00
    case 0xC4BD86: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:32 LDX #32
    case 0xC4BD88: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:32 LDX #32
    // Overlapping static entry reached from 0xC4BD88.
    case 0xC4BD8A: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:33 LDA @VIRTUAL02
    case 0xC4BD8B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:34 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4BD8D: {
        Instruction step(cpu, 0x22, 0xC4BBE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:35 TAX
    case 0xC4BD91: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:36 TXY
    case 0xC4BD92: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:37 LDX @VIRTUAL04
    case 0xC4BD93: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:38 LDA @VIRTUAL02
    case 0xC4BD95: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name-jp.asm:39 JSL COPY_CAST_NAME_TILEMAP
    case 0xC4BD97: {
        Instruction step(cpu, 0x22, 0xC4BC65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/print_cast_name-jp.asm:40 END_C_FUNCTION
    case 0xC4BD9B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/print_cast_name-jp.asm:40 END_C_FUNCTION
    case 0xC4BD9C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
