// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/gas_station.asm
bool resume_introduction_gas_station(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/gas_station.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0F409: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F40B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F40C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F40D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EDu : 0x00FFEDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F40D.
    case 0xC0F40F: {
        Instruction step(cpu, 0xFF, 0x5E225Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F410: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/intro/gas_station.asm:9 JSL UNKNOWN_C0927C
    case 0xC0F411: {
        Instruction step(cpu, 0x22, 0xC0925Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station.asm:9 JSL UNKNOWN_C0927C
    // Overlapping static entry reached from 0xC0F40F.
    case 0xC0F413: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:10 JSR GAS_STATION_LOAD
    case 0xC0F415: {
        Instruction step(cpu, 0x20, 0x00F19Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/gas_station.asm:11 LDX #11
    case 0xC0F418: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:11 LDX #11
    // Overlapping static entry reached from 0xC0F418.
    case 0xC0F41A: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station.asm:12 LDA #1
    case 0xC0F41B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:12 LDA #1
    // Overlapping static entry reached from 0xC0F41B.
    case 0xC0F41D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station.asm:13 JSL FADE_IN
    case 0xC0F41E: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station.asm:14 JSR UNKNOWN_C0F21E
    case 0xC0F422: {
        Instruction step(cpu, 0x20, 0x00F2EBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/gas_station.asm:15 TAY
    case 0xC0F425: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/gas_station.asm:16 STY @LOCAL02
    case 0xC0F426: {
        Instruction step(cpu, 0x84, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/gas_station.asm:17 BEQ @UNKNOWN0
    case 0xC0F428: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/gas_station.asm:18 LDA #1
    case 0xC0F42A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:18 LDA #1
    // Overlapping static entry reached from 0xC0F42A.
    case 0xC0F42C: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station.asm:19 BRA @UNKNOWN5
    case 0xC0F42D: {
        Instruction step(cpu, 0x80, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/gas_station.asm:21 LDX #0
    case 0xC0F42F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:21 LDX #0
    // Overlapping static entry reached from 0xC0F42F.
    case 0xC0F431: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station.asm:22 STX @LOCAL01
    case 0xC0F432: {
        Instruction step(cpu, 0x86, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:23 BRA @UNKNOWN3
    case 0xC0F434: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/gas_station.asm:25 LDA PAD_PRESS
    case 0xC0F436: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:26 BEQ @UNKNOWN2
    case 0xC0F439: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/gas_station.asm:27 LDA #1
    case 0xC0F43B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:27 LDA #1
    // Overlapping static entry reached from 0xC0F43B.
    case 0xC0F43D: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station.asm:28 BRA @UNKNOWN5
    case 0xC0F43E: {
        Instruction step(cpu, 0x80, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/gas_station.asm:30 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC0F440: {
        Instruction step(cpu, 0x22, 0xC4262Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station.asm:31 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F444: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station.asm:32 LDX @LOCAL01
    case 0xC0F448: {
        Instruction step(cpu, 0xA6, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:33 INX
    case 0xC0F44A: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:34 STX @LOCAL01
    case 0xC0F44B: {
        Instruction step(cpu, 0x86, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:36 CPX #330
    case 0xC0F44D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x00004Au : 0x00014Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:36 CPX #330
    // Overlapping static entry reached from 0xC0F44D.
    case 0xC0F44F: {
        Instruction step(cpu, 0x01, 0x000090u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:37 BCC @UNKNOWN1
    case 0xC0F450: {
        Instruction step(cpu, 0x90, 0x0000E4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/gas_station.asm:37 BCC @UNKNOWN1
    // Overlapping static entry reached from 0xC0F44F.
    case 0xC0F451: {
        Instruction step(cpu, 0xE4, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F452: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/gas_station.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F451.
    case 0xC0F453: {
        Instruction step(cpu, 0x20, 0x001A9Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/gas_station.asm:39 STZ TM_MIRROR
    case 0xC0F454: {
        Instruction step(cpu, 0x9C, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/gas_station.asm:39 STZ TM_MIRROR
    // Overlapping static entry reached from 0xC0F453.
    case 0xC0F456: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/intro/gas_station.asm:40 STZ_BADOPT @LOCAL00
    case 0xC0F457: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/gas_station.asm:40 STZ_BADOPT @LOCAL00
    case 0xC0F459: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/gas_station.asm:40 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC0F457.
    case 0xC0F45A: {
        Instruction step(cpu, 0x0E, 0x0000A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/intro/gas_station.asm:41 LDX #BPP4PALETTE_SIZE * 16
    case 0xC0F45B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station.asm:41 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC0F45B.
    case 0xC0F45D: {
        Instruction step(cpu, 0x02, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/gas_station.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC0F45E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/gas_station.asm:43 LDA #.LOWORD(PALETTES)
    case 0xC0F460: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:43 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0F460.
    case 0xC0F462: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/gas_station.asm:44 JSL MEMSET16
    case 0xC0F463: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F467: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/gas_station.asm:46 LDA #PALETTE_UPLOAD::FULL
    case 0xC0F469: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:47 STA PALETTE_UPLOAD_MODE
    case 0xC0F46B: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:47 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0F469.
    case 0xC0F46C: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/intro/gas_station.asm:48 LDY @LOCAL02
    case 0xC0F46E: {
        Instruction step(cpu, 0xA4, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/gas_station.asm:49 BNE @UNKNOWN4
    case 0xC0F470: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/gas_station.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC0F472: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/gas_station.asm:51 LDA #30
    case 0xC0F474: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station.asm:51 LDA #30
    // Overlapping static entry reached from 0xC0F474.
    case 0xC0F476: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station.asm:52 JSR UNKNOWN_C0EFE1
    case 0xC0F477: {
        Instruction step(cpu, 0x20, 0x00F0AAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/gas_station.asm:54 LDY @LOCAL02
    case 0xC0F47A: {
        Instruction step(cpu, 0xA4, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/gas_station.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC0F47C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/gas_station.asm:56 TYA
    case 0xC0F47E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/gas_station.asm:58 END_C_FUNCTION
    case 0xC0F47F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/gas_station.asm:58 END_C_FUNCTION
    case 0xC0F480: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
