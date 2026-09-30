// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/load_gas_station_palette.asm
bool resume_introduction_load_gas_station_palette(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/load_gas_station_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0F3E8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    case 0xC0F3EA: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    case 0xC0F3EB: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    case 0xC0F3EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F3EC.
    case 0xC0F3EE: {
        Instruction step(cpu, 0xFF, 0xB7A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    case 0xC0F3EF: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F3F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B7u : 0x00A9B7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F3F0.
    case 0xC0F3F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F3F3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F3F2.
    case 0xC0F3F4: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F3F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F3F5.
    case 0xC0F3F7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F3F8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F3FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F3FA.
    case 0xC0F3FC: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F3FD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F3FF: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F400: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F402: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F403: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F405: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/load_gas_station_palette.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC0F407: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/load_gas_station_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F409: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/load_gas_station_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F40B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/load_gas_station_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F40D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/load_gas_station_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F40F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/load_gas_station_palette.asm:12 JSL DECOMP
    case 0xC0F411: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/load_gas_station_palette.asm:13 LDA #$18
    case 0xC0F415: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/load_gas_station_palette.asm:13 LDA #$18
    // Overlapping static entry reached from 0xC0F415.
    case 0xC0F417: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/load_gas_station_palette.asm:14 JSL UNKNOWN_C0856B
    case 0xC0F418: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/load_gas_station_palette.asm:15 END_C_FUNCTION
    case 0xC0F41C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/load_gas_station_palette.asm:15 END_C_FUNCTION
    case 0xC0F41D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
