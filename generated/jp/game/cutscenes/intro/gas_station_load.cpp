// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/gas_station_load.asm
bool resume_introduction_gas_station_load(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/gas_station_load.asm:3 BEGIN_C_FUNCTION
    case 0xC0F19B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F19D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F19E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F19F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F19F.
    case 0xC0F1A1: {
        Instruction step(cpu, 0xFF, 0x379C5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F1A2: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:8 STZ BG2_Y_POS
    case 0xC0F1A3: {
        Instruction step(cpu, 0x9C, 0x000037u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:8 STZ BG2_Y_POS
    // Overlapping static entry reached from 0xC0F1A1.
    case 0xC0F1A5: {
        Instruction step(cpu, 0x00, 0x00009Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:9 STZ BG2_X_POS
    case 0xC0F1A6: {
        Instruction step(cpu, 0x9C, 0x000035u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:10 STZ BG1_Y_POS
    case 0xC0F1A9: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:11 STZ BG1_X_POS
    case 0xC0F1AC: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F1AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F1AF.
    case 0xC0F1B1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F1B2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F1B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F1B4.
    case 0xC0F1B6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F1B7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F1B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Eu : 0x004F4Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F1B9.
    case 0xC0F1BB: {
        Instruction step(cpu, 0x4F, 0xA90E85u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F1BC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F1BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F1BB.
    case 0xC0F1BF: {
        Instruction step(cpu, 0xE1, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F1BE.
    case 0xC0F1C0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F1C1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1C3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1C5: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1C7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1C9: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:15 JSL DECOMP
    case 0xC0F1CB: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1CF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1D1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1D3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1D5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F1D7.
    case 0xC0F1D9: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1DA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x00C000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F1DA.
    case 0xC0F1DC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1DD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F1DC.
    case 0xC0F1DE: {
        Instruction step(cpu, 0x20, 0x002298u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1161 TYA
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1DF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1E0: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F1DE.
    case 0xC0F1E1: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F1E1.
    case 0xC0F1E3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00FCA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F1E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FCu : 0x0049FCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F1E3.
    case 0xC0F1E5: {
        Instruction step(cpu, 0xFC, 0x008549u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F1E4.
    case 0xC0F1E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F1E7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F1E6.
    case 0xC0F1E8: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F1E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F1E9.
    case 0xC0F1EB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F1EC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1EE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1F0: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1F2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1F4: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:20 JSL DECOMP
    case 0xC0F1F6: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F1FA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F1FC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F1FE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F200: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F202: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x007800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F202.
    case 0xC0F204: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F205: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F205.
    case 0xC0F207: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F208: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F20A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F20C: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F20A.
    case 0xC0F20D: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F20D.
    case 0xC0F20F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00B9A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F210: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B9u : 0x009CB9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F20F.
    case 0xC0F211: {
        Instruction step(cpu, 0xB9, 0x00859Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F210.
    case 0xC0F212: {
        Instruction step(cpu, 0x9C, 0x000E85u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F213: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F211.
    case 0xC0F214: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F215: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F215.
    case 0xC0F217: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F218: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F21A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    // Overlapping static entry reached from 0xC0F21A.
    case 0xC0F21C: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F21D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F21F: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F220: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F222: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F223: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F225: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC0F227: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F229: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F22B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F22D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F22F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:27 JSL DECOMP
    case 0xC0F231: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:28 JSL UNKNOWN_C4A377
    case 0xC0F235: {
        Instruction step(cpu, 0x22, 0xC477E4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:29 JSL UNKNOWN_C496F9
    case 0xC0F239: {
        Instruction step(cpu, 0x22, 0xC46D43u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F23D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    // Overlapping static entry reached from 0xC0F23D.
    case 0xC0F23F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F240: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F242: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    // Overlapping static entry reached from 0xC0F242.
    case 0xC0F244: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F245: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:31 LDX #BPP4PALETTE_SIZE
    case 0xC0F247: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:31 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F247.
    case 0xC0F249: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F24A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:33 LDA #0
    case 0xC0F24C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:34 JSL MEMSET24
    case 0xC0F24E: {
        Instruction step(cpu, 0x22, 0xC08F06u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:34 JSL MEMSET24
    // Overlapping static entry reached from 0xC0F24C.
    case 0xC0F24F: {
        Instruction step(cpu, 0x06, 0x00008Fu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:34 JSL MEMSET24
    // Overlapping static entry reached from 0xC0F24F.
    case 0xC0F251: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F252: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:35 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F251.
    case 0xC0F253: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/intro/gas_station_load.asm:36 STZ_BADOPT @LOCAL00
    case 0xC0F254: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/gas_station_load.asm:36 STZ_BADOPT @LOCAL00
    case 0xC0F256: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/gas_station_load.asm:36 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC0F254.
    case 0xC0F257: {
        Instruction step(cpu, 0x0E, 0x0040A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:37 LDX #BPP4PALETTE_SIZE * 2
    case 0xC0F258: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:37 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC0F258.
    case 0xC0F25A: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC0F25B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:39 LDA #.LOWORD(PALETTES)
    case 0xC0F25D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:39 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0F25D.
    case 0xC0F25F: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:40 JSL MEMSET16
    case 0xC0F260: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F264: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/intro/gas_station_load.asm:42 STZ_BADOPT @LOCAL00
    case 0xC0F266: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/gas_station_load.asm:42 STZ_BADOPT @LOCAL00
    case 0xC0F268: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/gas_station_load.asm:42 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC0F266.
    case 0xC0F269: {
        Instruction step(cpu, 0x0E, 0x00A0A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:43 LDX #13 * BPP4PALETTE_SIZE
    case 0xC0F26A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000A0u : 0x0001A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:43 LDX #13 * BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F26A.
    case 0xC0F26C: {
        Instruction step(cpu, 0x01, 0x0000C2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC0F26D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:44 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F26C.
    case 0xC0F26E: {
        Instruction step(cpu, 0x20, 0x0060A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:45 LDA #.LOWORD(PALETTES) + 3 * BPP4PALETTE_SIZE
    case 0xC0F26F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000060u : 0x000260u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:45 LDA #.LOWORD(PALETTES) + 3 * BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F26F.
    case 0xC0F271: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:46 JSL MEMSET16
    case 0xC0F272: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:47 LDX #$FFFF
    case 0xC0F276: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:47 LDX #$FFFF
    // Overlapping static entry reached from 0xC0F276.
    case 0xC0F278: {
        Instruction step(cpu, 0xFF, 0x01E0A9u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:48 LDA #RGBVAL 0,15,0
    case 0xC0F279: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0001E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:48 LDA #RGBVAL 0,15,0
    // Overlapping static entry reached from 0xC0F279.
    case 0xC0F27B: {
        Instruction step(cpu, 0x01, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:49 JSL UNKNOWN_C496E7
    case 0xC0F27C: {
        Instruction step(cpu, 0x22, 0xC46D31u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:49 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC0F27B.
    case 0xC0F27D: {
        Instruction step(cpu, 0x31, 0x00006Du, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:49 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC0F27D.
    case 0xC0F27F: {
        Instruction step(cpu, 0xC4, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F280: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:50 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F27F.
    case 0xC0F281: {
        Instruction step(cpu, 0x20, 0x0001A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:51 LDA #$01
    case 0xC0F282: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:52 STA TM_MIRROR
    case 0xC0F284: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:52 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0F282.
    case 0xC0F285: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:52 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0F285.
    case 0xC0F286: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:53 LDA #$02
    case 0xC0F287: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x008D02u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:54 STA TD_MIRROR
    case 0xC0F289: {
        Instruction step(cpu, 0x8D, 0x00001Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:54 STA TD_MIRROR
    // Overlapping static entry reached from 0xC0F287.
    case 0xC0F28A: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:54 STA TD_MIRROR
    // Overlapping static entry reached from 0xC0F28A.
    case 0xC0F28B: {
        Instruction step(cpu, 0x00, 0x00008Fu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:55 STA f:CGWSEL
    case 0xC0F28C: {
        Instruction step(cpu, 0x8F, 0x002130u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:56 LDA #$03
    case 0xC0F290: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x008F03u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:57 STA f:CGADSUB
    case 0xC0F292: {
        Instruction step(cpu, 0x8F, 0x002131u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:57 STA f:CGADSUB
    // Overlapping static entry reached from 0xC0F290.
    case 0xC0F293: {
        Instruction step(cpu, 0x31, 0x000021u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:57 STA f:CGADSUB
    // Overlapping static entry reached from 0xC0F293.
    case 0xC0F295: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:58 LDA #PALETTE_UPLOAD::FULL
    case 0xC0F296: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:59 STA PALETTE_UPLOAD_MODE
    case 0xC0F298: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:59 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0F296.
    case 0xC0F299: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/intro/gas_station_load.asm:60 REP #PROC_FLAGS::ACCUM8
    case 0xC0F29B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/gas_station_load.asm:61 END_C_FUNCTION
    case 0xC0F29D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/gas_station_load.asm:61 END_C_FUNCTION
    case 0xC0F29E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
