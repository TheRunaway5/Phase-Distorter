// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/reload_map_at_position.asm
bool resume_overworld_reload_map_at_position(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/reload_map_at_position.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01303: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC01305: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC01306: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC01307: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC01308: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC01308.
    case 0xC0130A: {
        Instruction step(cpu, 0xFF, 0x8D685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC0130B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC0130C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:12 STA SCREEN_X_PIXELS
    case 0xC0130D: {
        Instruction step(cpu, 0x8D, 0x004706u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:12 STA SCREEN_X_PIXELS
    // Overlapping static entry reached from 0xC0130A.
    case 0xC0130E: {
        Instruction step(cpu, 0x06, 0x000047u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:13 STA SCREEN_X_PIXELS_COPY
    case 0xC01310: {
        Instruction step(cpu, 0x8D, 0x004702u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:14 STX SCREEN_Y_PIXELS
    case 0xC01313: {
        Instruction step(cpu, 0x8E, 0x004708u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:15 STX SCREEN_Y_PIXELS_COPY
    case 0xC01316: {
        Instruction step(cpu, 0x8E, 0x004704u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:16 LSR
    case 0xC01319: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:17 LSR
    case 0xC0131A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:18 LSR
    case 0xC0131B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:19 TAY
    case 0xC0131C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:20 STY @LOCAL03
    case 0xC0131D: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:21 TXA
    case 0xC0131F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:22 LSR
    case 0xC01320: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:23 LSR
    case 0xC01321: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:24 LSR
    case 0xC01322: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:25 STA @VIRTUAL02
    case 0xC01323: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:26 LDA #.LOWORD(-1)
    case 0xC01325: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:26 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC01325.
    case 0xC01327: {
        Instruction step(cpu, 0xFF, 0x46F68Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:27 STA LOADED_MAP_PALETTE
    case 0xC01328: {
        Instruction step(cpu, 0x8D, 0x0046F6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:28 STA LOADED_MAP_TILE_COMBO
    case 0xC0132B: {
        Instruction step(cpu, 0x8D, 0x0046F4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:29 LDA @VIRTUAL02
    case 0xC0132E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:30 LSR
    case 0xC01330: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:31 LSR
    case 0xC01331: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:32 LSR
    case 0xC01332: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:33 LSR
    case 0xC01333: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:34 TAX
    case 0xC01334: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:35 TYA
    case 0xC01335: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:36 LSR
    case 0xC01336: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:37 LSR
    case 0xC01337: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:38 LSR
    case 0xC01338: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:39 LSR
    case 0xC01339: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:40 LSR
    case 0xC0133A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:41 JSR LOAD_MAP_AT_SECTOR
    case 0xC0133B: {
        Instruction step(cpu, 0x20, 0x0008D3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:42 LDY @LOCAL03
    case 0xC0133E: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:43 TYA
    case 0xC01340: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:44 SEC
    case 0xC01341: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:45 SBC #16
    case 0xC01342: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:45 SBC #16
    // Overlapping static entry reached from 0xC01342.
    case 0xC01344: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:46 STA @LOCAL02
    case 0xC01345: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:47 LDA @VIRTUAL02
    case 0xC01347: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:48 SEC
    case 0xC01349: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:49 SBC #14
    case 0xC0134A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:49 SBC #14
    // Overlapping static entry reached from 0xC0134A.
    case 0xC0134C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:50 STA @LOCAL01
    case 0xC0134D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:51 TYA
    case 0xC0134F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:52 SEC
    case 0xC01350: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:53 SBC #32
    case 0xC01351: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:53 SBC #32
    // Overlapping static entry reached from 0xC01351.
    case 0xC01353: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:54 STA @VIRTUAL04
    case 0xC01354: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:55 LDA @VIRTUAL02
    case 0xC01356: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:56 SEC
    case 0xC01358: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:57 SBC #32
    case 0xC01359: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:57 SBC #32
    // Overlapping static entry reached from 0xC01359.
    case 0xC0135B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:58 STA @VIRTUAL02
    case 0xC0135C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:59 STA @LOCAL00
    case 0xC0135E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:60 LDX #0
    case 0xC01360: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:60 LDX #0
    // Overlapping static entry reached from 0xC01360.
    case 0xC01362: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:61 BRA @UNKNOWN1
    case 0xC01363: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC01365: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:64 LDA #>-1
    case 0xC01367: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x009DFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:65 STA LOADED_COLUMNS_Y,X
    case 0xC01369: {
        Instruction step(cpu, 0x9D, 0x004746u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:65 STA LOADED_COLUMNS_Y,X
    // Overlapping static entry reached from 0xC01367.
    case 0xC0136A: {
        Instruction step(cpu, 0x46, 0x000047u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:66 STA LOADED_COLUMNS_X,X
    case 0xC0136C: {
        Instruction step(cpu, 0x9D, 0x004736u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:67 STA LOADED_ROWS_Y,X
    case 0xC0136F: {
        Instruction step(cpu, 0x9D, 0x004726u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:68 STA LOADED_ROWS_X,X
    case 0xC01372: {
        Instruction step(cpu, 0x9D, 0x004716u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:69 INX
    case 0xC01375: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:71 CPX #16
    case 0xC01376: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:71 CPX #16
    // Overlapping static entry reached from 0xC01376.
    case 0xC01378: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:72 BCC @UNKNOWN0
    case 0xC01379: {
        Instruction step(cpu, 0x90, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:73 LDY #0
    case 0xC0137B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:73 LDY #0
    // Overlapping static entry reached from 0xC0137B.
    case 0xC0137D: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:74 STY @LOCAL03
    case 0xC0137E: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:75 BRA @UNKNOWN3
    case 0xC01380: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC01382: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:78 LDA @LOCAL00
    case 0xC01384: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:79 STA @VIRTUAL02
    case 0xC01386: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:80 STY @VIRTUAL02
    case 0xC01388: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:81 CLC
    case 0xC0138A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:82 ADC @VIRTUAL02
    case 0xC0138B: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:83 TAX
    case 0xC0138D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:84 LDA @VIRTUAL04
    case 0xC0138E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:85 JSR LOAD_MAP_ROW
    case 0xC01390: {
        Instruction step(cpu, 0x20, 0x000AD7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:86 LDY @LOCAL03
    case 0xC01393: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:87 INY
    case 0xC01395: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:88 STY @LOCAL03
    case 0xC01396: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:90 CPY #60
    case 0xC01398: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:90 CPY #60
    // Overlapping static entry reached from 0xC01398.
    case 0xC0139A: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:91 BCC @UNKNOWN2
    case 0xC0139B: {
        Instruction step(cpu, 0x90, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:92 LDY #0
    case 0xC0139D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:92 LDY #0
    // Overlapping static entry reached from 0xC0139D.
    case 0xC0139F: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:93 STY @LOCAL03
    case 0xC013A0: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:94 BRA @UNKNOWN5
    case 0xC013A2: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:96 REP #PROC_FLAGS::ACCUM8
    case 0xC013A4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:97 LDA @LOCAL00
    case 0xC013A6: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:98 STA @VIRTUAL02
    case 0xC013A8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:99 STY @VIRTUAL02
    case 0xC013AA: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:100 CLC
    case 0xC013AC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:101 ADC @VIRTUAL02
    case 0xC013AD: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:102 TAX
    case 0xC013AF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:103 LDA @VIRTUAL04
    case 0xC013B0: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:104 JSR LOAD_COLLISION_ROW
    case 0xC013B2: {
        Instruction step(cpu, 0x20, 0x000D05u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:105 LDY @LOCAL03
    case 0xC013B5: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:106 INY
    case 0xC013B7: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:107 STY @LOCAL03
    case 0xC013B8: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:109 CPY #60
    case 0xC013BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:109 CPY #60
    // Overlapping static entry reached from 0xC013BA.
    case 0xC013BC: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:110 BCC @UNKNOWN4
    case 0xC013BD: {
        Instruction step(cpu, 0x90, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:111 LDY #.LOWORD(-1)
    case 0xC013BF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:111 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC013BF.
    case 0xC013C1: {
        Instruction step(cpu, 0xFF, 0x801484u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:112 STY @LOCAL03
    case 0xC013C2: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:113 BRA @UNKNOWN7
    case 0xC013C4: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:113 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC013C1.
    case 0xC013C5: {
        Instruction step(cpu, 0x11, 0x0000C2u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC013C6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:115 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC013C5.
    case 0xC013C7: {
        Instruction step(cpu, 0x20, 0x001898u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:116 TYA
    case 0xC013C8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:117 CLC
    case 0xC013C9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:118 ADC @LOCAL01
    case 0xC013CA: {
        Instruction step(cpu, 0x65, 0x000010u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:119 TAX
    case 0xC013CC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:120 LDA @LOCAL02
    case 0xC013CD: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:121 JSR UNKNOWN_C00E16
    case 0xC013CF: {
        Instruction step(cpu, 0x20, 0x000E28u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:122 LDY @LOCAL03
    case 0xC013D2: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:123 INY
    case 0xC013D4: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:124 STY @LOCAL03
    case 0xC013D5: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:126 CPY #31
    case 0xC013D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:126 CPY #31
    // Overlapping static entry reached from 0xC013D7.
    case 0xC013D9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:127 BNE @UNKNOWN6
    case 0xC013DA: {
        Instruction step(cpu, 0xD0, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:129 REP #PROC_FLAGS::ACCUM8
    case 0xC013DC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:130 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC013DE: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:131 AND #$00FF
    case 0xC013E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:131 AND #$00FF
    // Overlapping static entry reached from 0xC013E1.
    case 0xC013E3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:132 BNE @UNKNOWN8
    case 0xC013E4: {
        Instruction step(cpu, 0xD0, 0x0000F6u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:133 LDA SCREEN_X_PIXELS
    case 0xC013E6: {
        Instruction step(cpu, 0xAD, 0x004706u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:134 SEC
    case 0xC013E9: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:135 SBC #128
    case 0xC013EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:135 SBC #128
    // Overlapping static entry reached from 0xC013EA.
    case 0xC013EC: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:136 STA BG2_X_POS
    case 0xC013ED: {
        Instruction step(cpu, 0x8D, 0x000035u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:137 STA BG1_X_POS
    case 0xC013F0: {
        Instruction step(cpu, 0x8D, 0x000031u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:138 LDA SCREEN_Y_PIXELS
    case 0xC013F3: {
        Instruction step(cpu, 0xAD, 0x004708u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:139 SEC
    case 0xC013F6: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:140 SBC #112
    case 0xC013F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000070u : 0x000070u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:140 SBC #112
    // Overlapping static entry reached from 0xC013F7.
    case 0xC013F9: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:141 STA BG2_Y_POS
    case 0xC013FA: {
        Instruction step(cpu, 0x8D, 0x000037u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:142 STA BG1_Y_POS
    case 0xC013FD: {
        Instruction step(cpu, 0x8D, 0x000033u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:143 LDA @LOCAL02
    case 0xC01400: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:144 STA SCREEN_LEFT_X
    case 0xC01402: {
        Instruction step(cpu, 0x8D, 0x0046FAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:145 LDA @LOCAL01
    case 0xC01405: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/reload_map_at_position.asm:146 STA SCREEN_TOP_Y
    case 0xC01407: {
        Instruction step(cpu, 0x8D, 0x0046FCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/reload_map_at_position.asm:147 END_C_FUNCTION
    case 0xC0140A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/reload_map_at_position.asm:147 END_C_FUNCTION
    case 0xC0140B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
