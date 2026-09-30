// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/load_map_at_sector.asm
bool resume_overworld_load_map_at_sector(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_at_sector.asm:4 BEGIN_C_FUNCTION
    case 0xC008C3: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008C5: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008C6: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008C7: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC008C8.
    case 0xC008CA: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008CB: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_at_sector.asm:13 END_STACK_VARS
    case 0xC008CC: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:14 STA @LOCAL04
    case 0xC008CD: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:14 STA @LOCAL04
    // Overlapping static entry reached from 0xC008CA.
    case 0xC008CE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:15 LDA CURRENT_TELEPORT_DESTINATION_X
    case 0xC008CF: {
        Instruction step(cpu, 0xAD, 0x00438Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:16 ORA CURRENT_TELEPORT_DESTINATION_Y
    case 0xC008D2: {
        Instruction step(cpu, 0x0D, 0x00438Cu, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:17 BEQ @UNKNOWN0
    case 0xC008D5: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:18 LDA CURRENT_TELEPORT_DESTINATION_X
    case 0xC008D7: {
        Instruction step(cpu, 0xAD, 0x00438Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:19 LSR
    case 0xC008DA: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:20 LSR
    case 0xC008DB: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:21 LSR
    case 0xC008DC: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:22 LSR
    case 0xC008DD: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:23 LSR
    case 0xC008DE: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:24 STA @LOCAL04
    case 0xC008DF: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:25 LDA CURRENT_TELEPORT_DESTINATION_Y
    case 0xC008E1: {
        Instruction step(cpu, 0xAD, 0x00438Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:26 LSR
    case 0xC008E4: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:27 LSR
    case 0xC008E5: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:28 LSR
    case 0xC008E6: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:29 LSR
    case 0xC008E7: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:30 TAX
    case 0xC008E8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:32 LDA @LOCAL04
    case 0xC008E9: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:33 STA @VIRTUAL02
    case 0xC008EB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:34 TXA
    case 0xC008ED: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:35 ASL
    case 0xC008EE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:36 ASL
    case 0xC008EF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:37 ASL
    case 0xC008F0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:38 ASL
    case 0xC008F1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:39 ASL
    case 0xC008F2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:40 CLC
    case 0xC008F3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:41 ADC @VIRTUAL02
    case 0xC008F4: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:42 TAX
    case 0xC008F6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:43 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC008F7: {
        Instruction step(cpu, 0xBF, 0xD7A800u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:44 AND #$00FF
    case 0xC008FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC008FB.
    case 0xC008FD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:45 STA @LOCAL04
    case 0xC008FE: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:46 AND #$0007
    case 0xC00900: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:46 AND #$0007
    // Overlapping static entry reached from 0xC00900.
    case 0xC00902: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:47 STA @LOCAL03
    case 0xC00903: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:48 LDA @LOCAL04
    case 0xC00905: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:49 LSR
    case 0xC00907: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:50 LSR
    case 0xC00908: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:51 LSR
    case 0xC00909: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:52 STA @VIRTUAL04
    case 0xC0090A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:53 ASL
    case 0xC0090C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:54 TAX
    case 0xC0090D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:55 LDA f:TILESET_TABLE,X
    case 0xC0090E: {
        Instruction step(cpu, 0xBF, 0xEF101Bu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:56 TAY
    case 0xC00912: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:57 STY @LOCAL02
    case 0xC00913: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:58 TYA
    case 0xC00915: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:59 ASL
    case 0xC00916: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:60 ASL
    case 0xC00917: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:61 STA @VIRTUAL02
    case 0xC00918: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC0091A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ABu : 0x0010ABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0091A.
    case 0xC0091C: {
        Instruction step(cpu, 0x10, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC0091D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0091C.
    case 0xC0091E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC0091F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0091F.
    case 0xC00921: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:62 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC00922: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:63 LDA @VIRTUAL02
    case 0xC00924: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:64 CLC
    case 0xC00926: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:65 ADC @VIRTUAL0A
    case 0xC00927: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:66 STA @VIRTUAL0A
    case 0xC00929: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0092B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC0092B.
    case 0xC0092D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0092E: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00930: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00931: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00933: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_map_at_sector.asm:67 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00935: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_at_sector.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00937: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00939: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_at_sector.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0093B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_at_sector.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0093D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    case 0xC0093F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    // Overlapping static entry reached from 0xC0093F.
    case 0xC00941: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    case 0xC00942: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    case 0xC00944: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    // Overlapping static entry reached from 0xC00944.
    case 0xC00946: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:69 LOADPTR BUFFER + $8000, @LOCAL01
    case 0xC00947: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:70 JSL DECOMP
    case 0xC00949: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:71 LDY @LOCAL02
    case 0xC0094D: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:72 TYA
    case 0xC0094F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:73 JSR LOAD_TILE_COLLISION
    case 0xC00950: {
        Instruction step(cpu, 0x20, 0x00062Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:74 LDY @LOCAL02
    case 0xC00953: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:75 TYA
    case 0xC00955: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:76 JSL LOAD_MAP_BLOCK_EVENT_CHANGES
    case 0xC00956: {
        Instruction step(cpu, 0x22, 0xC006F2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:77 JSL PREPARE_AVERAGE_FOR_SPRITE_PALETTES
    case 0xC0095A: {
        Instruction step(cpu, 0x22, 0xC005E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC0095E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0095E.
    case 0xC00960: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC00961: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC00963: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC00963.
    case 0xC00965: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC00966: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:79 LDX #BPP4PALETTE_SIZE * 8
    case 0xC00968: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:79 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC00968.
    case 0xC0096A: {
        Instruction step(cpu, 0x01, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC0096B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0096A.
    case 0xC0096C: {
        Instruction step(cpu, 0x00, 0x000003u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0096B.
    case 0xC0096D: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:81 JSL MEMCPY16
    case 0xC0096E: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:81 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0096D.
    case 0xC0096F: {
        Instruction step(cpu, 0xD2, 0x00008Eu, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:81 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0096F.
    case 0xC00971: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A5u : 0x0004A5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:82 LDA @VIRTUAL04
    case 0xC00972: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:82 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC00971.
    case 0xC00973: {
        Instruction step(cpu, 0x04, 0x0000CDu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:83 CMP LOADED_MAP_TILE_COMBO
    case 0xC00974: {
        Instruction step(cpu, 0xCD, 0x00436Eu, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:83 CMP LOADED_MAP_TILE_COMBO
    // Overlapping static entry reached from 0xC00973.
    case 0xC00975: {
        Instruction step(cpu, 0x6E, 0x00F043u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:84 BEQ @UNKNOWN3
    case 0xC00977: {
        Instruction step(cpu, 0xF0, 0x000075u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:84 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC00975.
    case 0xC00978: {
        Instruction step(cpu, 0x75, 0x0000A4u, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:85 LDY @LOCAL02
    case 0xC00979: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:85 LDY @LOCAL02
    // Overlapping static entry reached from 0xC00978.
    case 0xC0097A: {
        Instruction step(cpu, 0x16, 0x00008Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:86 STY LOADED_MAP_TILESET
    case 0xC0097B: {
        Instruction step(cpu, 0x8C, 0x004372u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:86 STY LOADED_MAP_TILESET
    // Overlapping static entry reached from 0xC0097A.
    case 0xC0097C: {
        Instruction step(cpu, 0x72, 0x000043u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC0097E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Bu : 0x00105Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0097E.
    case 0xC00980: {
        Instruction step(cpu, 0x10, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC00981: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC00980.
    case 0xC00982: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC00983: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC00983.
    case 0xC00985: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:87 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC00986: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:88 LDA @VIRTUAL02
    case 0xC00988: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:89 CLC
    case 0xC0098A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:90 ADC @VIRTUAL0A
    case 0xC0098B: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:91 STA @VIRTUAL0A
    case 0xC0098D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0098F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC0098F.
    case 0xC00991: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00992: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00994: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00995: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00997: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_map_at_sector.asm:92 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC00999: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_at_sector.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0099B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0099D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_at_sector.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0099F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_at_sector.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC009A1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    case 0xC009A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC009A3.
    case 0xC009A5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    case 0xC009A6: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    case 0xC009A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC009A8.
    case 0xC009AA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:94 LOADPTR BUFFER, @LOCAL01
    case 0xC009AB: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:95 JSL DECOMP
    case 0xC009AD: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:97 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC009B1: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:98 AND #$00FF
    case 0xC009B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:98 AND #$00FF
    // Overlapping static entry reached from 0xC009B4.
    case 0xC009B6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:99 BNE @UNKNOWN1
    case 0xC009B7: {
        Instruction step(cpu, 0xD0, 0x0000F8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:100 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC009B9: {
        Instruction step(cpu, 0xAD, 0x00B4EFu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:101 BNE @UNKNOWN2
    case 0xC009BC: {
        Instruction step(cpu, 0xD0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009BE.
    case 0xC009C0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009C1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009C3.
    case 0xC009C5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009C6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009C8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009C8.
    case 0xC009CA: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009CB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009CB.
    case 0xC009CD: {
        Instruction step(cpu, 0x70, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009CE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009CD.
    case 0xC009CF: {
        Instruction step(cpu, 0x20, 0x002298u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1207 TYA
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009D0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    case 0xC009D1: {
        Instruction step(cpu, 0x22, 0xC085B7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009CF.
    case 0xC009D2: {
        Instruction step(cpu, 0xB7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_map_at_sector.asm:102 COPY_TO_VRAM3 BUFFER, $0000, $7000, 0
    // Overlapping static entry reached from 0xC009D2.
    case 0xC009D4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000080u : 0x001780u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:103 BRA @UNKNOWN3
    case 0xC009D5: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:103 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC009D4.
    case 0xC009D6: {
        Instruction step(cpu, 0x17, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009D6.
    case 0xC009D8: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009D7.
    case 0xC009D9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009DA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009DC.
    case 0xC009DE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009DF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009E1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009E1.
    case 0xC009E3: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009E4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    // Overlapping static entry reached from 0xC009E4.
    case 0xC009E6: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009E7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1207 TYA
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009E9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_map_at_sector.asm:106 COPY_TO_VRAM3 BUFFER, $0000, $4000, 0
    case 0xC009EA: {
        Instruction step(cpu, 0x22, 0xC085B7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:109 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC009EE: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:110 AND #$00FF
    case 0xC009F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xC009F1.
    case 0xC009F3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:111 BNE @UNKNOWN3
    case 0xC009F4: {
        Instruction step(cpu, 0xD0, 0x0000F8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:112 LDX @LOCAL03
    case 0xC009F6: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:113 LDA @VIRTUAL04
    case 0xC009F8: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:114 JSL LOAD_MAP_PAL
    case 0xC009FA: {
        Instruction step(cpu, 0x22, 0xC007B6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:115 JSL ADJUST_SPRITE_PALETTES_BY_AVERAGE
    case 0xC009FE: {
        Instruction step(cpu, 0x22, 0xC00480u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:116 JSL LOAD_SPECIAL_SPRITE_PALETTE
    case 0xC00A02: {
        Instruction step(cpu, 0x22, 0xC00778u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:117 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC00A06: {
        Instruction step(cpu, 0xAD, 0x00B4EFu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:118 BNE @UNKNOWN4
    case 0xC00A09: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:119 JSL LOAD_OVERLAY_SPRITES
    case 0xC00A0B: {
        Instruction step(cpu, 0x22, 0xC4B26Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:120 JSR LOAD_TILESET_ANIM
    case 0xC00A0F: {
        Instruction step(cpu, 0x20, 0x000085u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:121 JSR LOAD_PALETTE_ANIM
    case 0xC00A12: {
        Instruction step(cpu, 0x20, 0x00023Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:123 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC00A15: {
        Instruction step(cpu, 0xAD, 0x00B4EFu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:124 BNE @UNKNOWN7
    case 0xC00A18: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:125 LDA DEBUG
    case 0xC00A1A: {
        Instruction step(cpu, 0xAD, 0x00436Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:126 BEQ @UNKNOWN5
    case 0xC00A1D: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:127 JSL UNKNOWN_EFD9F3
    case 0xC00A1F: {
        Instruction step(cpu, 0x22, 0xEFD9F3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:128 BRA @UNKNOWN6
    case 0xC00A23: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:130 JSL UNKNOWN_C47F87
    case 0xC00A25: {
        Instruction step(cpu, 0x22, 0xC47F87u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:132 LDA #0
    case 0xC00A29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:132 LDA #0
    // Overlapping static entry reached from 0xC00A29.
    case 0xC00A2B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:133 JSL UNKNOWN_C0856B
    case 0xC00A2C: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A30: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC00A30.
    case 0xC00A32: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A33: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A35: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A36: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A38: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A39: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/load_map_at_sector.asm:136 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC00A3B: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:137 REP #PROC_FLAGS::ACCUM8
    case 0xC00A3D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:138 LDA #64
    case 0xC00A3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:138 LDA #64
    // Overlapping static entry reached from 0xC00A3F.
    case 0xC00A41: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:139 CLC
    case 0xC00A42: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:140 ADC @VIRTUAL06
    case 0xC00A43: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:141 STA @VIRTUAL06
    case 0xC00A45: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:142 STA @LOCAL00
    case 0xC00A47: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:143 LDA @VIRTUAL06+2
    case 0xC00A49: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:144 STA @LOCAL00+2
    case 0xC00A4B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:145 LDX #BPP4PALETTE_SIZE * 14
    case 0xC00A4D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000C0u : 0x0001C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:145 LDX #BPP4PALETTE_SIZE * 14
    // Overlapping static entry reached from 0xC00A4D.
    case 0xC00A4F: {
        Instruction step(cpu, 0x01, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:146 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    case 0xC00A50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000076u : 0x004476u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:146 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    // Overlapping static entry reached from 0xC00A4F.
    case 0xC00A51: {
        Instruction step(cpu, 0x76, 0x000044u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:146 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    // Overlapping static entry reached from 0xC00A50.
    case 0xC00A52: {
        Instruction step(cpu, 0x44, 0x00D222u, 3u, AddressMode::BlockMove);
        step.move_byte_backward();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:147 JSL MEMCPY16
    case 0xC00A53: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:147 JSL MEMCPY16
    // Overlapping static entry reached from 0xC00A52.
    case 0xC00A55: {
        Instruction step(cpu, 0x8E, 0x00ADC0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:148 LDA WIPE_PALETTES_ON_MAP_LOAD
    case 0xC00A57: {
        Instruction step(cpu, 0xAD, 0x004676u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:148 LDA WIPE_PALETTES_ON_MAP_LOAD
    // Overlapping static entry reached from 0xC00A55.
    case 0xC00A58: {
        Instruction step(cpu, 0x76, 0x000046u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:149 BEQ @UNKNOWN8
    case 0xC00A5A: {
        Instruction step(cpu, 0xF0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:150 JSL UNKNOWN_C496F9
    case 0xC00A5C: {
        Instruction step(cpu, 0x22, 0xC496F9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC00A60: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:152 LDA #$00FF
    case 0xC00A62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0085FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:153 STA @LOCAL00
    case 0xC00A64: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:153 STA @LOCAL00
    // Overlapping static entry reached from 0xC00A62.
    case 0xC00A65: {
        Instruction step(cpu, 0x0E, 0x0000A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:154 LDX #BPP4PALETTE_SIZE * 16
    case 0xC00A66: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:154 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC00A66.
    case 0xC00A68: {
        Instruction step(cpu, 0x02, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:155 REP #PROC_FLAGS::ACCUM8
    case 0xC00A69: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:156 LDA #.LOWORD(PALETTES)
    case 0xC00A6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:156 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC00A6B.
    case 0xC00A6D: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:157 JSL MEMSET16
    case 0xC00A6E: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:158 STZ WIPE_PALETTES_ON_MAP_LOAD
    case 0xC00A72: {
        Instruction step(cpu, 0x9C, 0x004676u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:160 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC00A75: {
        Instruction step(cpu, 0xAD, 0x00B4EFu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:161 BEQ @UNKNOWN9
    case 0xC00A78: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:162 JSL UNKNOWN_C496F9
    case 0xC00A7A: {
        Instruction step(cpu, 0x22, 0xC496F9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:163 SEP #PROC_FLAGS::ACCUM8
    case 0xC00A7E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/overworld/load_map_at_sector.asm:164 STZ_BADOPT @LOCAL00
    case 0xC00A80: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:165 LDX #BPP4PALETTE_SIZE * 15
    case 0xC00A82: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000E0u : 0x0001E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:165 LDX #BPP4PALETTE_SIZE * 15
    // Overlapping static entry reached from 0xC00A82.
    case 0xC00A84: {
        Instruction step(cpu, 0x01, 0x0000C2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:166 REP #PROC_FLAGS::ACCUM8
    case 0xC00A85: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:166 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC00A84.
    case 0xC00A86: {
        Instruction step(cpu, 0x20, 0x0020A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:167 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC00A87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000220u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:167 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC00A87.
    case 0xC00A89: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:168 JSL MEMSET16
    case 0xC00A8A: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:170 LDA #24
    case 0xC00A8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:170 LDA #24
    // Overlapping static entry reached from 0xC00A8E.
    case 0xC00A90: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:171 JSL UNKNOWN_C0856B
    case 0xC00A91: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:172 LDA @VIRTUAL04
    case 0xC00A95: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:173 STA LOADED_MAP_TILE_COMBO
    case 0xC00A97: {
        Instruction step(cpu, 0x8D, 0x00436Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:174 LDA @LOCAL03
    case 0xC00A9A: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_sector.asm:175 STA LOADED_MAP_PALETTE
    case 0xC00A9C: {
        Instruction step(cpu, 0x8D, 0x004370u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_at_sector.asm:176 END_C_FUNCTION
    case 0xC00A9F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_map_at_sector.asm:176 END_C_FUNCTION
    case 0xC00AA0: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
