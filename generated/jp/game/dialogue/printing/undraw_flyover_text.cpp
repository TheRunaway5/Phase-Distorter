// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/undraw_flyover_text.asm
bool resume_text_undraw_flyover_text(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/undraw_flyover_text.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC45CA2: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/undraw_flyover_text.asm:7 END_STACK_VARS
    case 0xC45CA4: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/undraw_flyover_text.asm:7 END_STACK_VARS
    case 0xC45CA5: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/undraw_flyover_text.asm:7 END_STACK_VARS
    case 0xC45CA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/undraw_flyover_text.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC45CA6.
    case 0xC45CA8: {
        Instruction step(cpu, 0xFF, 0x00A05Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/undraw_flyover_text.asm:7 END_STACK_VARS
    case 0xC45CA9: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:9 LDY #$6000
    case 0xC45CAA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:9 LDY #$6000
    // Overlapping static entry reached from 0xC45CAA.
    case 0xC45CAC: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:10 LDX #$7C00
    case 0xC45CAD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:10 LDX #$7C00
    // Overlapping static entry reached from 0xC45CAD.
    case 0xC45CAF: {
        Instruction step(cpu, 0x7C, 0x0000A9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:11 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC45CB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:11 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC45CB0.
    case 0xC45CB2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:12 JSL SET_BG3_VRAM_LOCATION
    case 0xC45CB3: {
        Instruction step(cpu, 0x22, 0xC08E0Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:13 JSL UNKNOWN_C2038B
    case 0xC45CB7: {
        Instruction step(cpu, 0x22, 0xC2036Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:14 JSL LOAD_WINDOW_GFX
    case 0xC45CBB: {
        Instruction step(cpu, 0x22, 0xC459ABu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CBF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    // Overlapping static entry reached from 0xC45CBF.
    case 0xC45CC1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CC2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CC4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    // Overlapping static entry reached from 0xC45CC4.
    case 0xC45CC6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CC7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CC9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    // Overlapping static entry reached from 0xC45CC9.
    case 0xC45CCB: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CCC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x003800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    // Overlapping static entry reached from 0xC45CCC.
    case 0xC45CCE: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CCF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1209 LDA #unk
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    case 0xC45CD3: {
        Instruction step(cpu, 0x22, 0xC085B7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    // Overlapping static entry reached from 0xC45CD1.
    case 0xC45CD4: {
        Instruction step(cpu, 0xB7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/text/undraw_flyover_text.asm:16 COPY_TO_VRAM3 BUFFER, $6000, $3800, @VIRTUAL00
    // Overlapping static entry reached from 0xC45CD4.
    case 0xC45CD6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x001A22u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:21 JSL UNKNOWN_C47F87
    case 0xC45CD7: {
        Instruction step(cpu, 0x22, 0xC45C1Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:21 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC45CD6.
    case 0xC45CD8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:21 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC45CD6.
    case 0xC45CD9: {
        Instruction step(cpu, 0x5C, 0x20E2C4u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC45CDB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:23 LDA #PALETTE_UPLOAD::FULL
    case 0xC45CDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:24 STA PALETTE_UPLOAD_MODE
    case 0xC45CDF: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:24 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC45CDD.
    case 0xC45CE0: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC45CE2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:27 PLD
    case 0xC45CE4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/text/undraw_flyover_text.asm:29 RTL
    case 0xC45CE5: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
