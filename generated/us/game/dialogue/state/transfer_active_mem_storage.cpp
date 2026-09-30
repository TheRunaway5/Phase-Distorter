// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/transfer_active_mem_storage.asm
bool resume_text_transfer_active_mem_storage(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/transfer_active_mem_storage.asm:3 BEGIN_C_FUNCTION
    case 0xC10324: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    case 0xC10326: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    case 0xC10327: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    case 0xC10328: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC10328.
    case 0xC1032A: {
        Instruction step(cpu, 0xFF, 0x01205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    case 0xC1032B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC1032C: {
        Instruction step(cpu, 0x20, 0x000301u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    // Overlapping static entry reached from 0xC1032A.
    case 0xC1032E: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:8 STA @LOCAL00
    case 0xC1032F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC1032E.
    case 0xC10330: {
        Instruction step(cpu, 0x0E, 0x006918u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:9 CLC
    case 0xC10331: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:10 ADC #window_stats::working_memory
    case 0xC10332: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:10 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10330.
    case 0xC10333: {
        Instruction step(cpu, 0x17, 0x000000u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:10 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10332.
    case 0xC10334: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:11 TAY
    case 0xC10335: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10336: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/transfer_active_mem_storage.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10339: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1033B: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/transfer_active_mem_storage.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1033E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:13 LDA @LOCAL00
    case 0xC10340: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:14 CLC
    case 0xC10342: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:15 ADC #window_stats::working_memory_storage
    case 0xC10343: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:15 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC10343.
    case 0xC10345: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:16 TAY
    case 0xC10346: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/transfer_active_mem_storage.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10347: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10349: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/transfer_active_mem_storage.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1034C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1034E: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:18 LDA @LOCAL00
    case 0xC10351: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:19 CLC
    case 0xC10353: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:20 ADC #window_stats::argument_memory
    case 0xC10354: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:20 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC10354.
    case 0xC10356: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:21 TAY
    case 0xC10357: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10358: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/transfer_active_mem_storage.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1035B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1035D: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/transfer_active_mem_storage.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10360: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:23 LDA @LOCAL00
    case 0xC10362: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:24 CLC
    case 0xC10364: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:25 ADC #window_stats::argument_memory_storage
    case 0xC10365: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:25 ADC #window_stats::argument_memory_storage
    // Overlapping static entry reached from 0xC10365.
    case 0xC10367: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:26 TAY
    case 0xC10368: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/transfer_active_mem_storage.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10369: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1036B: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/transfer_active_mem_storage.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1036E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10370: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:28 LDA @LOCAL00
    case 0xC10373: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:29 PHA
    case 0xC10375: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:30 TAX
    case 0xC10376: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:31 LDA a:window_stats::secondary_memory,X
    case 0xC10377: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:32 PLX
    case 0xC1037A: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/text/transfer_active_mem_storage.asm:33 STA a:window_stats::secondary_memory_storage,X
    case 0xC1037B: {
        Instruction step(cpu, 0x9D, 0x000029u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/transfer_active_mem_storage.asm:34 END_C_FUNCTION
    case 0xC1037E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/transfer_active_mem_storage.asm:34 END_C_FUNCTION
    case 0xC1037F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
