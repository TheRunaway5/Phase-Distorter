#pragma once

#include "eb/game_version.hpp"

#include <array>
#include <cstdint>
#include <functional>
#include <span>
#include <vector>

namespace eb {
struct SourceProfile;

// HiROM cartridge and the CPU-visible SNES hardware. Pixel words are 0xAARRGGBB.
class Bus {
public:
    // The cartridge image is copied into the bus; the caller may release its
    // import buffer. The version chooses immutable source-address metadata for
    // presentation helpers, while memory accesses share the hardware model.
    explicit Bus(std::span<const uint8_t> rom, GameVersion version = GameVersion::US);
    GameVersion game_version() const { return version_; }
    // Reads and writes are observable hardware operations, not inspection APIs:
    // reads can acknowledge interrupts, advance ports, and update open bus.
    uint8_t read(uint32_t address);
    void write(uint32_t address, uint8_t value);
    void tick(unsigned cpu_cycles); // advance hardware by this many six-clock units
    void run_cpu(unsigned master_clocks); // include WRAM refresh pauses
    unsigned access_clocks(uint32_t address) const;
    // NMI is consumed as an edge. IRQ is a level that stays asserted until the
    // game's register access acknowledges it. DMA clocks are CPU stall debt.
    bool take_nmi();
    bool irq_pending() const { return irq_flag_; }
    unsigned take_dma_clocks();
    void set_buttons(uint16_t buttons) { buttons_ = buttons & 0xfff0; }
    // Presentation only: the original framebuffer and all emulated state stay
    // native-sized. Requested width is even, 256..1024. A fixed title card
    // temporarily uses 256; its first visible row restores the requested width
    // on exit. Authored map sector boundaries
    // constrain the displayed scenery; window/HUD layers remain centered.
    void set_presentation_width(unsigned width);
    unsigned presentation_width() const { return presentation_width_; }
    std::span<const uint32_t> presentation_pixels() const;
    // The authored gas-station/title card is a fixed composition. Its canvas is
    // native-width and the frontend letterboxes it at 4:3. This hint is latched
    // with the picture, not read from next-frame registers; zero means the
    // user's ordinary presentation aspect applies again.
    double presentation_fixed_aspect() const;
    // Optional, read-only effect metadata follows the same scanline timing as
    // the presented image. A nonzero mask marks a visible, source-identified
    // flashing effect; its reference pixel is the current scene without that
    // effect, not an older frame. Unmarked reference pixels equal the image.
    // Both spans match the presentation canvas, or are empty while disabled.
    // Consume them inside on_presentation_frame before another frame starts.
    void set_presentation_effects_enabled(bool enabled);
    std::span<const uint8_t> presentation_effect_mask() const { return presentation_effect_mask_; }
    std::span<const uint32_t> presentation_effect_reference() const { return presentation_effect_reference_; }
    // Optional host observer for each completed hardware frame, including every
    // frame crossed by one long DMA stall. The pixels are borrowed until this
    // callback returns; consume/copy them here rather than retaining the span.
    // Observers may update their own presentation state, but must not mutate or
    // re-enter the Bus. No callback means no additional picture processing.
    std::function<void(std::span<const uint32_t> pixels, unsigned width, uint64_t frame)> on_presentation_frame;

    // Public byte arrays hold emulated storage for source execution and state
    // comparisons. Their units match hardware bytes (VRAM register addresses,
    // in contrast, are words). CPU-visible access must still go through read/
    // write whenever an address can select an I/O port.
    std::array<uint8_t, 0x20000> wram{};
    std::array<uint8_t, 0x10000> vram{};
    std::array<uint8_t, 512> cgram{};
    std::array<uint8_t, 544> oam{};
    std::array<uint8_t, 8192> sram{};
    // CPU/APU ports are directional latches, not a shared four-byte mailbox.
    // Each processor reads the other processor's most recently written side.
    std::array<uint8_t, 4> apu_to_cpu{};
    std::array<uint8_t, 4> cpu_to_apu{};
    std::function<void(unsigned master_clocks)> apu_tick;
    std::array<uint32_t, 256 * 224> framebuffer{};
    uint64_t frames = 0;
    unsigned scanline() const { return line_; }
    unsigned hclock() const { return hclock_; }
    uint64_t master_clocks() const { return master_clocks_; }
    std::span<const uint8_t, 0x40> ppu_registers() const { return ppu_; }

private:
    // Negative priority denotes a transparent candidate. Layer 5 is the
    // backdrop; math records whether this pixel permits PPU color arithmetic.
    struct Pixel {
        uint16_t color = 0;
        int priority = -1;
        unsigned layer = 5;
        bool math = true;
        // Direct-color pixels have no palette entry. Retaining this identity
        // lets the presentation reference undo a flash without changing CGRAM.
        unsigned palette_index = 256;
    };
    const GameVersion version_;
    const SourceProfile* profile_;
    std::vector<uint8_t> rom_;
    std::array<uint8_t, 0x40> ppu_{};
    std::array<uint8_t, 0x20> cpu_io_{};
    std::array<std::array<uint8_t, 16>, 8> dma_{};
    std::array<bool, 8> hdma_active_{}, hdma_transfer_{};
    std::array<uint16_t, 4> bg_x_{}, bg_y_{};
    std::array<int16_t, 6> mode7_{};
    std::array<int16_t, 2> mode7_scroll_{};
    // Undriven register bits retain their bus value. PPU1 and PPU2 have separate
    // latches, and multi-byte ports have independent write/read sequencing.
    uint8_t open_bus_ = 0, ppu1_bus_ = 0, ppu2_bus_ = 0;
    uint8_t scroll_latch_ = 0, mode7_latch_ = 0, oam_latch_ = 0, cgram_latch_ = 0;
    uint16_t vram_address_ = 0, vram_buffer_ = 0, oam_address_ = 0, cgram_address_ = 0;
    uint16_t oam_reload_ = 0, fixed_color_ = 0, latched_h_ = 0, latched_v_ = 0;
    bool latch_h_high_ = false, latch_v_high_ = false, counters_latched_ = false;
    uint32_t wram_address_ = 0;
    uint16_t buttons_ = 0, joy_latch_ = 0, joy_result_ = 0;
    unsigned joy_position_ = 0;
    bool joy_strobe_ = false;
    unsigned hclock_ = 0, line_ = 0, dma_clocks_ = 0, autojoy_clocks_ = 0;
    uint64_t master_clocks_ = 0;
    unsigned refresh_clock_ = 538;
    bool refresh_done_ = false;
    bool nmi_flag_ = false, nmi_pending_ = false, irq_flag_ = false;
    uint16_t multiply_result_ = 0, divide_result_ = 0;
    uint16_t pending_product_ = 0, pending_quotient_ = 0;
    unsigned math_cycles_ = 0;
    bool pending_divide_ = false;
    uint8_t sprite_status_ = 0;
    // Host presentation cache only. These fields must never feed CPU timing,
    // emulated register values, map loading, collision, or entity spawning.
    // The native framebuffer above remains the canonical game picture.
    unsigned presentation_width_ = 256;
    unsigned requested_presentation_width_ = 256;
    double presentation_frame_aspect_ = 0;
    std::vector<uint32_t> presentation_framebuffer_;
    bool presentation_effects_enabled_ = false;
    std::vector<uint8_t> presentation_effect_mask_;
    std::vector<uint32_t> presentation_effect_reference_;
    // Per-scanline reference policy. Palette entries retain the current scene's
    // coordinates; only known transient effect contributions are replaced.
    std::array<uint16_t, 256> presentation_reference_palette_{};
    unsigned presentation_effect_layers_ = 0;
    unsigned presentation_psi_layer_ = 0, presentation_psi_palette_first_ = 256, presentation_psi_palette_last_ = 256;
    uint8_t presentation_reference_cgwsel_ = 0, presentation_reference_cgadsub_ = 0;
    uint16_t presentation_reference_fixed_ = 0;
    bool presentation_gas_palettes_loaded_ = false, presentation_gas_palettes_valid_ = false;
    std::array<std::array<uint16_t, 256>, 2> presentation_gas_palettes_{};
    uint8_t presentation_layer_mask_ = 0x13;
    int presentation_lumine_phase_ = -1;
    unsigned presentation_lumine_columns_ = 0;
    bool presentation_world_map_ = false;
    bool presentation_jp_title_ = false;
    std::array<int, 2> presentation_world_x_{}, presentation_world_y_{};
    uint64_t presentation_boundary_frame_ = UINT64_MAX;
    int presentation_shift_x_ = 0, presentation_clip_left_ = -384, presentation_clip_right_ = 640;

    uint8_t read_io(uint16_t address);
    void write_io(uint16_t address, uint8_t value);
    void write_ppu(uint16_t address, uint8_t value);
    uint8_t read_ppu(uint16_t address);
    uint16_t mapped_vram_address() const;
    void increment_vram();
    void prefetch_vram();
    uint16_t vram_word(unsigned address) const;
    uint16_t palette(unsigned index) const;
    void dma_transfer(unsigned channels);
    void hdma_init();
    void hdma_line();
    void hdma_reload(unsigned channel);
    void advance_clocks(unsigned clocks, bool pause_for_refresh);
    void render_line(unsigned y);
    Pixel background(unsigned bg, int x, unsigned y, bool margin = false) const;
    Pixel mode7_pixel(unsigned bg, int x, unsigned y) const;
    bool window(unsigned layer, unsigned x) const;
    void sprites(unsigned y, std::array<Pixel, 256>& result);
    // Pure sprite sampling returns overflow bits; only sprites() commits them.
    uint8_t sprite_pixels(unsigned y, std::span<Pixel> result, int origin) const;
    uint32_t compose_pixel(int x, unsigned y, const Pixel& object, bool margin,
                           uint32_t* effect_reference = nullptr) const;
    void prepare_presentation_effects();
    uint32_t compose_presentation_pixel(int x, unsigned y, const Pixel& object, bool margin);
    void resize_presentation_width(unsigned width);
    void render_presentation_margins(unsigned y);
    void prepare_presentation_scene();
    void prepare_presentation_boundary();
    uint16_t presentation_tile(unsigned bg, int x, unsigned y, uint16_t original) const;
    uint16_t presentation_map_tile(int tile_x, int tile_y, unsigned bg) const;
};

} // namespace eb
