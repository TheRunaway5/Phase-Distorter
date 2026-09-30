#pragma once

#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include <tuple>

namespace eb {
// Read-only private-state inspection for differential tests. Explicit fields
// avoid padding, allocator/callback identity, and implementation-owned pointers.
// Presentation caches are checked through completed-frame pixels/metadata.
struct RuntimeStateAudit {
    static auto bus_controls(const SnesBus& b) {
        return std::tie(b.game_version_, b.ppu_registers_, b.cpu_io_registers_, b.dma_registers_,
            b.hdma_active_, b.hdma_transfer_, b.background_scroll_x_, b.background_scroll_y_,
            b.mode7_transform_, b.mode7_scroll_offsets_, b.open_bus_, b.ppu1_bus_, b.ppu2_bus_,
            b.scroll_latch_, b.mode7_latch_, b.oam_latch_, b.cgram_latch_, b.vram_address_,
            b.vram_buffer_, b.oam_address_, b.cgram_address_, b.oam_reload_, b.fixed_color_,
            b.latched_h_, b.latched_v_, b.latch_h_high_, b.latch_v_high_, b.counters_latched_,
            b.wram_address_, b.buttons_, b.joy_latch_, b.joy_result_, b.joy_position_, b.joy_strobe_,
            b.scanline_master_clock_, b.scanline_index_, b.dma_stall_master_clocks_,
            b.autojoy_remaining_clocks_, b.master_clocks_, b.refresh_clock_, b.refresh_done_,
            b.nmi_flag_, b.nmi_pending_, b.irq_flag_, b.multiply_result_, b.divide_result_,
            b.pending_product_, b.pending_quotient_, b.math_remaining_cpu_cycles_,
            b.pending_divide_, b.sprite_status_);
    }
    static auto audio_controls(const Spc700AudioCpu& c) {
        return std::tie(c.control_register_, c.test_register_, c.dsp_register_address_,
            c.timer_clock_dividers_, c.timer_target_counters_, c.timer_target_values_,
            c.timer_output_latches_, c.master_to_audio_clock_balance_);
    }
};
} // namespace eb
