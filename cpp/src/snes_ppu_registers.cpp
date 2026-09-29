#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"

#include <algorithm>
#include <stdexcept>

namespace eb {
// VMAIN can permute word-address bits to support different tile upload
// layouts. The remapping is performed before multiplying by two to index the
// byte array; applying it after byte conversion would scramble plane data.
uint16_t SnesBus::mapped_vram_address() const {
    const unsigned word_address = vram_address_;
    switch ((ppu_registers_[0x15] >> 2) & 3) {
    case 1:
        return (word_address & 0xff00) | ((word_address & 0x1f) << 3) | ((word_address >> 5) & 7);
    case 2:
        return (word_address & 0xfe00) | ((word_address & 0x3f) << 3) | ((word_address >> 6) & 7);
    case 3:
        return (word_address & 0xfc00) | ((word_address & 0x7f) << 3) | ((word_address >> 7) & 7);
    default:
        return word_address;
    }
}

void SnesBus::increment_vram() {
    constexpr unsigned word_increments[] = {1, 32, 128, 128};
    vram_address_ += word_increments[ppu_registers_[0x15] & 3];
}

void SnesBus::prefetch_vram() {
    vram_buffer_ = vram_word(unsigned(mapped_vram_address()) * 2);
}

// PPU ports are stateful byte interfaces to wider values. OAM/CGRAM commit
// paired writes, scroll and Mode 7 share write latches, and VRAM increments
// after the configured low/high port. Do not replace these with flat stores.
void SnesBus::write_ppu_register(uint16_t address, uint8_t value) {
    const unsigned register_index = address & 0x3f;
    if (register_index >= 0x34)
        return;
    ppu_registers_[register_index] = value;
    if (register_index >= 0x0d && register_index <= 0x14) {
        const unsigned background_layer = (register_index - 0x0d) / 2;
        // The first byte temporarily occupies bits 8..15. In particular bit10
        // must survive so the next write can recover all three fine-scroll bits.
        // Rendering applies the ten-bit address mask, not this write latch.
        if (register_index & 1)
            background_scroll_x_[background_layer] =
                (value << 8) | (scroll_latch_ & 0xf8) | ((background_scroll_x_[background_layer] >> 8) & 7);
        else
            background_scroll_y_[background_layer] = ((value << 8) | scroll_latch_) & 0x3ff;
        scroll_latch_ = value;
        if (register_index <= 0x0e) {
            mode7_scroll_offsets_[register_index - 0x0d] = int16_t((value << 8) | mode7_latch_);
            mode7_latch_ = value;
        }
        return;
    }
    switch (register_index) {
    case 0x02:
    case 0x03:
        oam_reload_ = ((ppu_registers_[3] & 1) << 9) | (ppu_registers_[2] << 1);
        oam_address_ = oam_reload_;
        break;
    case 0x04:
        if (oam_address_ & 0x200)
            object_attributes[0x200 + (oam_address_ & 31)] = value;
        else if (oam_address_ & 1) {
            object_attributes[(oam_address_ - 1) & 511] = oam_latch_;
            object_attributes[oam_address_ & 511] = value;
        } else
            oam_latch_ = value;
        oam_address_ = (oam_address_ + 1) & 0x3ff;
        break;
    case 0x16:
        vram_address_ = (vram_address_ & 0xff00) | value;
        prefetch_vram();
        break;
    case 0x17:
        vram_address_ = (vram_address_ & 0x00ff) | (value << 8);
        prefetch_vram();
        break;
    case 0x18:
    case 0x19:
        video_ram[(unsigned(mapped_vram_address()) * 2 + (register_index & 1)) & 0xffff] = value;
        if (bool(register_index & 1) == bool(ppu_registers_[0x15] & 0x80))
            increment_vram();
        break;
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
        mode7_transform_[register_index - 0x1b] = int16_t((value << 8) | mode7_latch_);
        mode7_latch_ = value;
        break;
    case 0x21:
        cgram_address_ = unsigned(value) * 2;
        break;
    case 0x22:
        if (cgram_address_ & 1) {
            palette_ram[cgram_address_ - 1] = cgram_latch_;
            palette_ram[cgram_address_] = value & 0x7f;
        } else
            cgram_latch_ = value;
        cgram_address_ = (cgram_address_ + 1) & 511;
        break;
    case 0x32:
        for (unsigned i = 0; i < 3; ++i)
            if (value & (0x20 << i))
                fixed_color_ = (fixed_color_ & ~(31 << (i * 5))) | ((value & 31) << (i * 5));
        break;
    default:
        break;
    }
}

// Read ports use the appropriate PPU bus latch for undriven bits. VRAM reads
// return a prefetched word, while counter ports alternate low/high halves;
// reading STAT78 resets those counter-half selectors.
uint8_t SnesBus::read_ppu_register(uint16_t address) {
    const unsigned register_index = address & 0x3f;
    uint8_t value = ppu1_bus_;
    switch (register_index) {
    case 0x34:
    case 0x35:
    case 0x36: {
        const int32_t product = int32_t(mode7_transform_[0]) * int8_t(uint16_t(mode7_transform_[1]) >> 8);
        value = uint32_t(product) >> ((register_index - 0x34) * 8);
        break;
    }
    case 0x37:
        if (cpu_io_registers_[1] & 0x80) {
            latched_h_ = scanline_master_clock_ / 4;
            latched_v_ = scanline_index_;
            counters_latched_ = true;
        }
        return open_bus_;
    case 0x38:
        value = object_attributes[(oam_address_ & 0x200) ? 0x200 + (oam_address_ & 31) : oam_address_];
        oam_address_ = (oam_address_ + 1) & 0x3ff;
        break;
    case 0x39:
    case 0x3a:
        value = vram_buffer_ >> ((register_index == 0x3a) ? 8 : 0);
        if ((register_index == 0x3a) == bool(ppu_registers_[0x15] & 0x80)) {
            prefetch_vram();
            increment_vram();
        }
        break;
    case 0x3b:
        value = palette_ram[cgram_address_];
        if (cgram_address_ & 1)
            value = (value & 0x7f) | (ppu2_bus_ & 0x80);
        cgram_address_ = (cgram_address_ + 1) & 511;
        ppu2_bus_ = value;
        return value;
    case 0x3c:
        value = latch_h_high_ ? (ppu2_bus_ & 0xfe) | ((latched_h_ >> 8) & 1) : latched_h_;
        latch_h_high_ = !latch_h_high_;
        ppu2_bus_ = value;
        return value;
    case 0x3d:
        value = latch_v_high_ ? (ppu2_bus_ & 0xfe) | ((latched_v_ >> 8) & 1) : latched_v_;
        latch_v_high_ = !latch_v_high_;
        ppu2_bus_ = value;
        return value;
    case 0x3e:
        value = sprite_status_ | (ppu1_bus_ & 0x10) | 1;
        break;
    case 0x3f:
        value = ((completed_frames & 1) ? 0x80 : 0) | (counters_latched_ ? 0x40 : 0) | (ppu2_bus_ & 0x20) | 3;
        counters_latched_ = false;
        latch_h_high_ = latch_v_high_ = false;
        ppu2_bus_ = value;
        return value;
    default:
        return open_bus_;
    }
    ppu1_bus_ = value;
    return value;
}

} // namespace eb
