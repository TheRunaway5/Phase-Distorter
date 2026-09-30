// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/gas_station.asm
bool resume_introduction_gas_station(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/gas_station.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0F33C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F33E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F33F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F340: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EDu : 0x00FFEDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F340.
    case 0xC0F342: {
        Instruction step(cpu, 0xFF, 0x7C225Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F343: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/intro/gas_station.asm:9 JSL UNKNOWN_C0927C
    case 0xC0F344: {
        Instruction step(cpu, 0x22, 0xC0927Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station.asm:9 JSL UNKNOWN_C0927C
    // Overlapping static entry reached from 0xC0F342.
    case 0xC0F346: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:10 JSR GAS_STATION_LOAD
    case 0xC0F348: {
        Instruction step(cpu, 0x20, 0x00F0D2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/gas_station.asm:11 LDX #11
    case 0xC0F34B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:11 LDX #11
    // Overlapping static entry reached from 0xC0F34B.
    case 0xC0F34D: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station.asm:12 LDA #1
    case 0xC0F34E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:12 LDA #1
    // Overlapping static entry reached from 0xC0F34E.
    case 0xC0F350: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station.asm:13 JSL FADE_IN
    case 0xC0F351: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station.asm:14 JSR UNKNOWN_C0F21E
    case 0xC0F355: {
        Instruction step(cpu, 0x20, 0x00F21Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/gas_station.asm:15 TAY
    case 0xC0F358: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/gas_station.asm:16 STY @LOCAL02
    case 0xC0F359: {
        Instruction step(cpu, 0x84, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/gas_station.asm:17 BEQ @UNKNOWN0
    case 0xC0F35B: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/gas_station.asm:18 LDA #1
    case 0xC0F35D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:18 LDA #1
    // Overlapping static entry reached from 0xC0F35D.
    case 0xC0F35F: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station.asm:19 BRA @UNKNOWN5
    case 0xC0F360: {
        Instruction step(cpu, 0x80, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/gas_station.asm:21 LDX #0
    case 0xC0F362: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:21 LDX #0
    // Overlapping static entry reached from 0xC0F362.
    case 0xC0F364: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station.asm:22 STX @LOCAL01
    case 0xC0F365: {
        Instruction step(cpu, 0x86, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:23 BRA @UNKNOWN3
    case 0xC0F367: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/gas_station.asm:25 LDA PAD_PRESS
    case 0xC0F369: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:26 BEQ @UNKNOWN2
    case 0xC0F36C: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/gas_station.asm:27 LDA #1
    case 0xC0F36E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:27 LDA #1
    // Overlapping static entry reached from 0xC0F36E.
    case 0xC0F370: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station.asm:28 BRA @UNKNOWN5
    case 0xC0F371: {
        Instruction step(cpu, 0x80, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/gas_station.asm:30 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC0F373: {
        Instruction step(cpu, 0x22, 0xC426EDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station.asm:31 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F377: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station.asm:32 LDX @LOCAL01
    case 0xC0F37B: {
        Instruction step(cpu, 0xA6, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:33 INX
    case 0xC0F37D: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:34 STX @LOCAL01
    case 0xC0F37E: {
        Instruction step(cpu, 0x86, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:36 CPX #330
    case 0xC0F380: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x00004Au : 0x00014Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:36 CPX #330
    // Overlapping static entry reached from 0xC0F380.
    case 0xC0F382: {
        Instruction step(cpu, 0x01, 0x000090u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:37 BCC @UNKNOWN1
    case 0xC0F383: {
        Instruction step(cpu, 0x90, 0x0000E4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/gas_station.asm:37 BCC @UNKNOWN1
    // Overlapping static entry reached from 0xC0F382.
    case 0xC0F384: {
        Instruction step(cpu, 0xE4, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F385: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/gas_station.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F384.
    case 0xC0F386: {
        Instruction step(cpu, 0x20, 0x001A9Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/gas_station.asm:39 STZ TM_MIRROR
    case 0xC0F387: {
        Instruction step(cpu, 0x9C, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/gas_station.asm:39 STZ TM_MIRROR
    // Overlapping static entry reached from 0xC0F386.
    case 0xC0F389: {
        Instruction step(cpu, 0x00, 0x000064u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/intro/gas_station.asm:40 STZ_BADOPT @LOCAL00
    case 0xC0F38A: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/gas_station.asm:41 LDX #BPP4PALETTE_SIZE * 16
    case 0xC0F38C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:41 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC0F38C.
    case 0xC0F38E: {
        Instruction step(cpu, 0x02, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/gas_station.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC0F38F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/gas_station.asm:43 LDA #.LOWORD(PALETTES)
    case 0xC0F391: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:43 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0F391.
    case 0xC0F393: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/gas_station.asm:44 JSL MEMSET16
    case 0xC0F394: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F398: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/gas_station.asm:46 LDA #PALETTE_UPLOAD::FULL
    case 0xC0F39A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:47 STA PALETTE_UPLOAD_MODE
    case 0xC0F39C: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:47 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0F39A.
    case 0xC0F39D: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/intro/gas_station.asm:48 LDY @LOCAL02
    case 0xC0F39F: {
        Instruction step(cpu, 0xA4, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/gas_station.asm:49 BNE @UNKNOWN4
    case 0xC0F3A1: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/gas_station.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC0F3A3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/gas_station.asm:51 LDA #30
    case 0xC0F3A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:51 LDA #30
    // Overlapping static entry reached from 0xC0F3A5.
    case 0xC0F3A7: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station.asm:52 JSR UNKNOWN_C0EFE1
    case 0xC0F3A8: {
        Instruction step(cpu, 0x20, 0x00EFE1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/gas_station.asm:54 LDY @LOCAL02
    case 0xC0F3AB: {
        Instruction step(cpu, 0xA4, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/gas_station.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC0F3AD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/gas_station.asm:56 TYA
    case 0xC0F3AF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/gas_station.asm:58 END_C_FUNCTION
    case 0xC0F3B0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/gas_station.asm:58 END_C_FUNCTION
    case 0xC0F3B1: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
