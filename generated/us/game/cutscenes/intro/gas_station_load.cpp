// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/gas_station_load.asm
bool resume_introduction_gas_station_load(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/gas_station_load.asm:3 BEGIN_C_FUNCTION
    case 0xC0F0D2: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F0D4: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F0D5: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F0D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F0D6.
    case 0xC0F0D8: {
        Instruction step(cpu, 0xFF, 0x379C5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F0D9: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:8 STZ BG2_Y_POS
    case 0xC0F0DA: {
        Instruction step(cpu, 0x9C, 0x000037u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:8 STZ BG2_Y_POS
    // Overlapping static entry reached from 0xC0F0D8.
    case 0xC0F0DC: {
        Instruction step(cpu, 0x00, 0x00009Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:9 STZ BG2_X_POS
    case 0xC0F0DD: {
        Instruction step(cpu, 0x9C, 0x000035u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:10 STZ BG1_Y_POS
    case 0xC0F0E0: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:11 STZ BG1_X_POS
    case 0xC0F0E3: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F0E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F0E6.
    case 0xC0F0E8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F0E9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F0EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F0EB.
    case 0xC0F0ED: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F0EE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F0F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000033u : 0x005B33u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F0F0.
    case 0xC0F0F2: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F0F3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F0F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F0F5.
    case 0xC0F0F7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F0F8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F0FA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F0FC: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F0FE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F100: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:15 JSL DECOMP
    case 0xC0F102: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F106: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F108: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F10A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F10C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F10E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F10E.
    case 0xC0F110: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F111: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x00C000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F111.
    case 0xC0F113: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F114: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F113.
    case 0xC0F115: {
        Instruction step(cpu, 0x20, 0x002298u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1161 TYA
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F116: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F117: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F115.
    case 0xC0F118: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F118.
    case 0xC0F11A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00D3A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F11B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D3u : 0x0055D3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F11A.
    case 0xC0F11C: {
        Instruction step(cpu, 0xD3, 0x000055u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F11B.
    case 0xC0F11D: {
        Instruction step(cpu, 0x55, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F11E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F11D.
    case 0xC0F11F: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F120: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F120.
    case 0xC0F122: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F123: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F125: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F127: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F129: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F12B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:20 JSL DECOMP
    case 0xC0F12D: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F131: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F133: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F135: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F137: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F139: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x007800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F139.
    case 0xC0F13B: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F13C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F13C.
    case 0xC0F13E: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F13F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F141: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F143: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F141.
    case 0xC0F144: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F144.
    case 0xC0F146: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00B7A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F147: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B7u : 0x00A9B7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F146.
    case 0xC0F148: {
        Instruction step(cpu, 0xB7, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F147.
    case 0xC0F149: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F14A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F149.
    case 0xC0F14B: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F14C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F14C.
    case 0xC0F14E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F14F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F151: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    // Overlapping static entry reached from 0xC0F151.
    case 0xC0F153: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F154: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F156: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F157: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F159: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F15A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F15C: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC0F15E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F160: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F162: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F164: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F166: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:27 JSL DECOMP
    case 0xC0F168: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:28 JSL UNKNOWN_C4A377
    case 0xC0F16C: {
        Instruction step(cpu, 0x22, 0xC4A377u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:29 JSL UNKNOWN_C496F9
    case 0xC0F170: {
        Instruction step(cpu, 0x22, 0xC496F9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F174: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    // Overlapping static entry reached from 0xC0F174.
    case 0xC0F176: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F177: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F179: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    // Overlapping static entry reached from 0xC0F179.
    case 0xC0F17B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F17C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:31 LDX #BPP4PALETTE_SIZE
    case 0xC0F17E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:31 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F17E.
    case 0xC0F180: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F181: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:33 LDA #0
    case 0xC0F183: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:34 JSL MEMSET24
    case 0xC0F185: {
        Instruction step(cpu, 0x22, 0xC08F15u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:34 JSL MEMSET24
    // Overlapping static entry reached from 0xC0F183.
    case 0xC0F186: {
        Instruction step(cpu, 0x15, 0x00008Fu, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:34 JSL MEMSET24
    // Overlapping static entry reached from 0xC0F186.
    case 0xC0F188: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F189: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:35 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F188.
    case 0xC0F18A: {
        Instruction step(cpu, 0x20, 0x000E64u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/intro/gas_station_load.asm:36 STZ_BADOPT @LOCAL00
    case 0xC0F18B: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:37 LDX #BPP4PALETTE_SIZE * 2
    case 0xC0F18D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:37 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC0F18D.
    case 0xC0F18F: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC0F190: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:39 LDA #.LOWORD(PALETTES)
    case 0xC0F192: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:39 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0F192.
    case 0xC0F194: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:40 JSL MEMSET16
    case 0xC0F195: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F199: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/intro/gas_station_load.asm:42 STZ_BADOPT @LOCAL00
    case 0xC0F19B: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:43 LDX #13 * BPP4PALETTE_SIZE
    case 0xC0F19D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000A0u : 0x0001A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:43 LDX #13 * BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F19D.
    case 0xC0F19F: {
        Instruction step(cpu, 0x01, 0x0000C2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC0F1A0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:44 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F19F.
    case 0xC0F1A1: {
        Instruction step(cpu, 0x20, 0x0060A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:45 LDA #.LOWORD(PALETTES) + 3 * BPP4PALETTE_SIZE
    case 0xC0F1A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000060u : 0x000260u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:45 LDA #.LOWORD(PALETTES) + 3 * BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F1A2.
    case 0xC0F1A4: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:46 JSL MEMSET16
    case 0xC0F1A5: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:47 LDX #$FFFF
    case 0xC0F1A9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:47 LDX #$FFFF
    // Overlapping static entry reached from 0xC0F1A9.
    case 0xC0F1AB: {
        Instruction step(cpu, 0xFF, 0x01E0A9u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:48 LDA #RGBVAL 0,15,0
    case 0xC0F1AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0001E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:48 LDA #RGBVAL 0,15,0
    // Overlapping static entry reached from 0xC0F1AC.
    case 0xC0F1AE: {
        Instruction step(cpu, 0x01, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:49 JSL UNKNOWN_C496E7
    case 0xC0F1AF: {
        Instruction step(cpu, 0x22, 0xC496E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:49 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC0F1AE.
    case 0xC0F1B0: {
        Instruction step(cpu, 0xE7, 0x000096u, 2u, AddressMode::DirectPageIndirectLong);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:49 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC0F1B0.
    case 0xC0F1B2: {
        Instruction step(cpu, 0xC4, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F1B3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:50 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F1B2.
    case 0xC0F1B4: {
        Instruction step(cpu, 0x20, 0x0001A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:51 LDA #$01
    case 0xC0F1B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:52 STA TM_MIRROR
    case 0xC0F1B7: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:52 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0F1B5.
    case 0xC0F1B8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:52 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0F1B8.
    case 0xC0F1B9: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:53 LDA #$02
    case 0xC0F1BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x008D02u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:54 STA TD_MIRROR
    case 0xC0F1BC: {
        Instruction step(cpu, 0x8D, 0x00001Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:54 STA TD_MIRROR
    // Overlapping static entry reached from 0xC0F1BA.
    case 0xC0F1BD: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:54 STA TD_MIRROR
    // Overlapping static entry reached from 0xC0F1BD.
    case 0xC0F1BE: {
        Instruction step(cpu, 0x00, 0x00008Fu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:55 STA f:CGWSEL
    case 0xC0F1BF: {
        Instruction step(cpu, 0x8F, 0x002130u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:56 LDA #$03
    case 0xC0F1C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x008F03u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:57 STA f:CGADSUB
    case 0xC0F1C5: {
        Instruction step(cpu, 0x8F, 0x002131u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:57 STA f:CGADSUB
    // Overlapping static entry reached from 0xC0F1C3.
    case 0xC0F1C6: {
        Instruction step(cpu, 0x31, 0x000021u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:57 STA f:CGADSUB
    // Overlapping static entry reached from 0xC0F1C6.
    case 0xC0F1C8: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:58 LDA #PALETTE_UPLOAD::FULL
    case 0xC0F1C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:59 STA PALETTE_UPLOAD_MODE
    case 0xC0F1CB: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:59 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0F1C9.
    case 0xC0F1CC: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:60 REP #PROC_FLAGS::ACCUM8
    case 0xC0F1CE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/gas_station_load.asm:61 END_C_FUNCTION
    case 0xC0F1D0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/gas_station_load.asm:61 END_C_FUNCTION
    case 0xC0F1D1: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
