// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/copy_mirror_data.asm
bool resume_battle_copy_mirror_data(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/copy_mirror_data.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AED3: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    case 0xC2AED5: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    case 0xC2AED6: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    case 0xC2AED7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00FFAEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AED7.
    case 0xC2AED9: {
        Instruction step(cpu, 0xFF, 0x64A55Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/copy_mirror_data.asm:28 END_STACK_VARS
    case 0xC2AEDA: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:29 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC2AEDB: {
        Instruction step(cpu, 0xA5, 0x000064u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:29 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC2AEDD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:29 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC2AEDF: {
        Instruction step(cpu, 0xA5, 0x000066u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:29 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC2AEE1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:30 MOVE_INT @VIRTUAL06, @LOCAL14
    case 0xC2AEE3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:30 MOVE_INT @VIRTUAL06, @LOCAL14
    case 0xC2AEE5: {
        Instruction step(cpu, 0x85, 0x00004Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:30 MOVE_INT @VIRTUAL06, @LOCAL14
    case 0xC2AEE7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:30 MOVE_INT @VIRTUAL06, @LOCAL14
    case 0xC2AEE9: {
        Instruction step(cpu, 0x85, 0x000050u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:31 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2AEEB: {
        Instruction step(cpu, 0xA5, 0x000060u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:31 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2AEED: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:31 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2AEEF: {
        Instruction step(cpu, 0xA5, 0x000062u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:31 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2AEF1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL13
    case 0xC2AEF3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL13
    case 0xC2AEF5: {
        Instruction step(cpu, 0x85, 0x00004Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL13
    case 0xC2AEF7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL13
    case 0xC2AEF9: {
        Instruction step(cpu, 0x85, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:33 LDA #battler::hp
    case 0xC2AEFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:33 LDA #battler::hp
    // Overlapping static entry reached from 0xC2AEFB.
    case 0xC2AEFD: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:34 CLC
    case 0xC2AEFE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:35 ADC @VIRTUAL06
    case 0xC2AEFF: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:36 STA @VIRTUAL06
    case 0xC2AF01: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:37 STA @LOCAL12
    case 0xC2AF03: {
        Instruction step(cpu, 0x85, 0x000046u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:38 LDA @VIRTUAL06+2
    case 0xC2AF05: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:39 STA @LOCAL12+2
    case 0xC2AF07: {
        Instruction step(cpu, 0x85, 0x000048u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:40 LDA [@LOCAL12]
    case 0xC2AF09: {
        Instruction step(cpu, 0xA7, 0x000046u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:41 STA @LOCAL11
    case 0xC2AF0B: {
        Instruction step(cpu, 0x85, 0x000044u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:42 LDA #battler::pp
    case 0xC2AF0D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:42 LDA #battler::pp
    // Overlapping static entry reached from 0xC2AF0D.
    case 0xC2AF0F: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:43 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF10: {
        Instruction step(cpu, 0xA6, 0x00004Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:43 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF12: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:43 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF14: {
        Instruction step(cpu, 0xA6, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:43 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF16: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:44 CLC
    case 0xC2AF18: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:45 ADC @VIRTUAL06
    case 0xC2AF19: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:46 STA @VIRTUAL06
    case 0xC2AF1B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:47 STA @LOCAL10
    case 0xC2AF1D: {
        Instruction step(cpu, 0x85, 0x000040u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:48 LDA @VIRTUAL06+2
    case 0xC2AF1F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:49 STA @LOCAL10+2
    case 0xC2AF21: {
        Instruction step(cpu, 0x85, 0x000042u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:50 LDA [@LOCAL10]
    case 0xC2AF23: {
        Instruction step(cpu, 0xA7, 0x000040u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:51 STA @LOCAL0F
    case 0xC2AF25: {
        Instruction step(cpu, 0x85, 0x00003Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:52 LDA #battler::hp_target
    case 0xC2AF27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:52 LDA #battler::hp_target
    // Overlapping static entry reached from 0xC2AF27.
    case 0xC2AF29: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:53 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF2A: {
        Instruction step(cpu, 0xA6, 0x00004Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:53 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF2C: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:53 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF2E: {
        Instruction step(cpu, 0xA6, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:53 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF30: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:54 CLC
    case 0xC2AF32: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:55 ADC @VIRTUAL06
    case 0xC2AF33: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:56 STA @VIRTUAL06
    case 0xC2AF35: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:57 STA @LOCAL0E
    case 0xC2AF37: {
        Instruction step(cpu, 0x85, 0x00003Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:58 LDA @VIRTUAL06+2
    case 0xC2AF39: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:59 STA @LOCAL0E+2
    case 0xC2AF3B: {
        Instruction step(cpu, 0x85, 0x00003Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:60 LDA [@LOCAL0E]
    case 0xC2AF3D: {
        Instruction step(cpu, 0xA7, 0x00003Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:61 STA @LOCAL0D
    case 0xC2AF3F: {
        Instruction step(cpu, 0x85, 0x000038u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:62 LDA #battler::pp_target
    case 0xC2AF41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:62 LDA #battler::pp_target
    // Overlapping static entry reached from 0xC2AF41.
    case 0xC2AF43: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:63 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF44: {
        Instruction step(cpu, 0xA6, 0x00004Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:63 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF46: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:63 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF48: {
        Instruction step(cpu, 0xA6, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:63 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF4A: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:64 CLC
    case 0xC2AF4C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:65 ADC @VIRTUAL06
    case 0xC2AF4D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:66 STA @VIRTUAL06
    case 0xC2AF4F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:67 STA @LOCAL0C
    case 0xC2AF51: {
        Instruction step(cpu, 0x85, 0x000034u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:68 LDA @VIRTUAL06+2
    case 0xC2AF53: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:69 STA @LOCAL0C+2
    case 0xC2AF55: {
        Instruction step(cpu, 0x85, 0x000036u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:70 LDA [@LOCAL0C]
    case 0xC2AF57: {
        Instruction step(cpu, 0xA7, 0x000034u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:71 STA @LOCAL0B
    case 0xC2AF59: {
        Instruction step(cpu, 0x85, 0x000032u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:72 LDA #battler::hp_max
    case 0xC2AF5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000015u : 0x000015u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:72 LDA #battler::hp_max
    // Overlapping static entry reached from 0xC2AF5B.
    case 0xC2AF5D: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:73 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF5E: {
        Instruction step(cpu, 0xA6, 0x00004Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:73 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF60: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:73 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF62: {
        Instruction step(cpu, 0xA6, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:73 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF64: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:74 CLC
    case 0xC2AF66: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:75 ADC @VIRTUAL06
    case 0xC2AF67: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:76 STA @VIRTUAL06
    case 0xC2AF69: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:77 STA @LOCAL0A
    case 0xC2AF6B: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:78 LDA @VIRTUAL06+2
    case 0xC2AF6D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:79 STA @LOCAL0A+2
    case 0xC2AF6F: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:80 LDA [@LOCAL0A]
    case 0xC2AF71: {
        Instruction step(cpu, 0xA7, 0x00002Eu, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:81 STA @LOCAL09
    case 0xC2AF73: {
        Instruction step(cpu, 0x85, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:82 LDA #battler::pp_max
    case 0xC2AF75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:82 LDA #battler::pp_max
    // Overlapping static entry reached from 0xC2AF75.
    case 0xC2AF77: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:83 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF78: {
        Instruction step(cpu, 0xA6, 0x00004Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:83 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF7A: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:83 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF7C: {
        Instruction step(cpu, 0xA6, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:83 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF7E: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:84 CLC
    case 0xC2AF80: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:85 ADC @VIRTUAL06
    case 0xC2AF81: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:86 STA @VIRTUAL06
    case 0xC2AF83: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:87 STA @LOCAL08
    case 0xC2AF85: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:88 LDA @VIRTUAL06+2
    case 0xC2AF87: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:89 STA @LOCAL08+2
    case 0xC2AF89: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:90 LDA [@LOCAL08]
    case 0xC2AF8B: {
        Instruction step(cpu, 0xA7, 0x000028u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:91 STA @LOCAL07
    case 0xC2AF8D: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:92 LDA #battler::ally_or_enemy
    case 0xC2AF8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:92 LDA #battler::ally_or_enemy
    // Overlapping static entry reached from 0xC2AF8F.
    case 0xC2AF91: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:93 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF92: {
        Instruction step(cpu, 0xA6, 0x00004Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:93 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF94: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:93 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF96: {
        Instruction step(cpu, 0xA6, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:93 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AF98: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:94 CLC
    case 0xC2AF9A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:95 ADC @VIRTUAL06
    case 0xC2AF9B: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:96 STA @VIRTUAL06
    case 0xC2AF9D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:97 STA @LOCAL06
    case 0xC2AF9F: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:98 LDA @VIRTUAL06+2
    case 0xC2AFA1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:99 STA @LOCAL06+2
    case 0xC2AFA3: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:100 LDA [@LOCAL06]
    case 0xC2AFA5: {
        Instruction step(cpu, 0xA7, 0x000022u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:101 AND #$00FF
    case 0xC2AFA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC2AFA7.
    case 0xC2AFA9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:102 STA @VIRTUAL04
    case 0xC2AFAA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:103 LDA #battler::row
    case 0xC2AFAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:103 LDA #battler::row
    // Overlapping static entry reached from 0xC2AFAC.
    case 0xC2AFAE: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:104 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFAF: {
        Instruction step(cpu, 0xA6, 0x00004Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:104 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFB1: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:104 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFB3: {
        Instruction step(cpu, 0xA6, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:104 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFB5: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:105 CLC
    case 0xC2AFB7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:106 ADC @VIRTUAL06
    case 0xC2AFB8: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:107 STA @VIRTUAL06
    case 0xC2AFBA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:108 STA @LOCAL05
    case 0xC2AFBC: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:109 LDA @VIRTUAL06+2
    case 0xC2AFBE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:110 STA @LOCAL05+2
    case 0xC2AFC0: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:111 LDA [@LOCAL05]
    case 0xC2AFC2: {
        Instruction step(cpu, 0xA7, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:112 AND #$00FF
    case 0xC2AFC4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:112 AND #$00FF
    // Overlapping static entry reached from 0xC2AFC4.
    case 0xC2AFC6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:113 STA @VIRTUAL02
    case 0xC2AFC7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:114 MOVE_INT @LOCAL13, @VIRTUAL06
    case 0xC2AFC9: {
        Instruction step(cpu, 0xA5, 0x00004Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:114 MOVE_INT @LOCAL13, @VIRTUAL06
    case 0xC2AFCB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:114 MOVE_INT @LOCAL13, @VIRTUAL06
    case 0xC2AFCD: {
        Instruction step(cpu, 0xA5, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:114 MOVE_INT @LOCAL13, @VIRTUAL06
    case 0xC2AFCF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:115 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2AFD1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:115 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2AFD3: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:115 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2AFD5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:115 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC2AFD7: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:116 LDA [@LOCAL04]
    case 0xC2AFD9: {
        Instruction step(cpu, 0xA7, 0x00001Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:117 TAY
    case 0xC2AFDB: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:118 STY @LOCAL03
    case 0xC2AFDC: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:119 LDA #battler::has_taken_turn
    case 0xC2AFDE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:119 LDA #battler::has_taken_turn
    // Overlapping static entry reached from 0xC2AFDE.
    case 0xC2AFE0: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:120 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFE1: {
        Instruction step(cpu, 0xA6, 0x00004Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:120 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFE3: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:120 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFE5: {
        Instruction step(cpu, 0xA6, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:120 MOVE_INTX @LOCAL13, @VIRTUAL06
    case 0xC2AFE7: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/copy_mirror_data.asm:121 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2AFE9: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/copy_mirror_data.asm:121 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2AFEB: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/copy_mirror_data.asm:121 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2AFED: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:121 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2AFEF: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:122 CLC
    case 0xC2AFF1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:123 ADC @VIRTUAL0A
    case 0xC2AFF2: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:124 STA @VIRTUAL0A
    case 0xC2AFF4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:125 LDA [@VIRTUAL0A]
    case 0xC2AFF6: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:126 AND #$00FF
    case 0xC2AFF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:126 AND #$00FF
    // Overlapping static entry reached from 0xC2AFF8.
    case 0xC2AFFA: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:127 TAX
    case 0xC2AFFB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:128 STX @LOCAL02
    case 0xC2AFFC: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:129 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2AFFE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:129 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B000: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:129 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B002: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:129 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B004: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:130 MOVE_INT @LOCAL14, @VIRTUAL06
    case 0xC2B006: {
        Instruction step(cpu, 0xA5, 0x00004Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:130 MOVE_INT @LOCAL14, @VIRTUAL06
    case 0xC2B008: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:130 MOVE_INT @LOCAL14, @VIRTUAL06
    case 0xC2B00A: {
        Instruction step(cpu, 0xA5, 0x000050u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:130 MOVE_INT @LOCAL14, @VIRTUAL06
    case 0xC2B00C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/copy_mirror_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B00E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/copy_mirror_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B010: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/copy_mirror_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B012: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/copy_mirror_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B014: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:132 LDA #.SIZEOF(battler)
    case 0xC2B016: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:132 LDA #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2B016.
    case 0xC2B018: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:133 JSL MEMCPY24
    case 0xC2B019: {
        Instruction step(cpu, 0x22, 0xC08EDEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:134 LDA @LOCAL11
    case 0xC2B01D: {
        Instruction step(cpu, 0xA5, 0x000044u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:135 STA [@LOCAL12]
    case 0xC2B01F: {
        Instruction step(cpu, 0x87, 0x000046u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:136 LDA @LOCAL0F
    case 0xC2B021: {
        Instruction step(cpu, 0xA5, 0x00003Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:137 STA [@LOCAL10]
    case 0xC2B023: {
        Instruction step(cpu, 0x87, 0x000040u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:138 LDA @LOCAL0D
    case 0xC2B025: {
        Instruction step(cpu, 0xA5, 0x000038u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:139 STA [@LOCAL0E]
    case 0xC2B027: {
        Instruction step(cpu, 0x87, 0x00003Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:140 LDA @LOCAL0B
    case 0xC2B029: {
        Instruction step(cpu, 0xA5, 0x000032u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:141 STA [@LOCAL0C]
    case 0xC2B02B: {
        Instruction step(cpu, 0x87, 0x000034u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:142 LDA @LOCAL09
    case 0xC2B02D: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:143 STA [@LOCAL0A]
    case 0xC2B02F: {
        Instruction step(cpu, 0x87, 0x00002Eu, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:144 LDA @LOCAL07
    case 0xC2B031: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:145 STA [@LOCAL08]
    case 0xC2B033: {
        Instruction step(cpu, 0x87, 0x000028u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:146 LDA @VIRTUAL04
    case 0xC2B035: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B037: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:148 STA [@LOCAL06]
    case 0xC2B039: {
        Instruction step(cpu, 0x87, 0x000022u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:149 REP #PROC_FLAGS::ACCUM8
    case 0xC2B03B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:150 LDA @VIRTUAL02
    case 0xC2B03D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B03F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:152 STA [@LOCAL05]
    case 0xC2B041: {
        Instruction step(cpu, 0x87, 0x00001Eu, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:153 LDY @LOCAL03
    case 0xC2B043: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:154 REP #PROC_FLAGS::ACCUM8
    case 0xC2B045: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:155 TYA
    case 0xC2B047: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:156 STA [@LOCAL04]
    case 0xC2B048: {
        Instruction step(cpu, 0x87, 0x00001Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:157 LDX @LOCAL02
    case 0xC2B04A: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:158 TXA
    case 0xC2B04C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:159 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B04D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:160 STA [@VIRTUAL0A]
    case 0xC2B04F: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:161 REP #PROC_FLAGS::ACCUM8
    case 0xC2B051: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:162 PLD
    case 0xC2B053: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/battle/copy_mirror_data.asm:163 RTL
    case 0xC2B054: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
