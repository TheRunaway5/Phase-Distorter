#pragma once

#include "eb/game_version.hpp"
#include "eb/game_scene_renderer.hpp"

#include <array>
#include <cstdint>
#include <functional>
#include <span>
#include <vector>

namespace eb {
struct SourceProfile;

// HiROM cartridge and the CPU-visible SNES hardware. Pixel words are 0xAARRGGBB.
class SnesBus {
  public:
    // The cartridge image is copied into the bus; the caller may release its
    // import buffer. The version chooses immutable source-address metadata for
    // presentation helpers, while memory accesses share the hardware model.
    explicit SnesBus(std::span<const uint8_t> rom, GameVersion version = GameVersion::US);
    GameVersion game_version() const { return game_version_; }
    // Reads and writes are observable hardware operations, not inspection APIs:
    // reads can acknowledge interrupts, advance ports, and update open bus.
    uint8_t read_byte(uint32_t address);
    void write_byte(uint32_t address, uint8_t value);
    // Empty during ordinary play. Explicit debug cheats may override WRAM
    // accesses, including mirrors and DMA, without modifying cartridge code.
    std::function<uint8_t(unsigned, uint8_t)> debug_read_wram, debug_write_wram;
    std::function<uint8_t(unsigned, uint8_t)> debug_read_rom;
    void advance_cpu_cycles(unsigned cpu_cycles); // advance hardware by this many six-clock units
    void advance_master_clocks_with_refresh(unsigned master_clocks); // include WRAM refresh pauses
    unsigned access_clocks(uint32_t address) const;
    // Source math helpers wait a fixed number of CPU instructions before
    // reading results. Extra gameplay capacity must preserve that latency.
    bool math_pending() const { return math_remaining_cpu_cycles_ != 0; }
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
    void set_presentation_width(unsigned width) {
        scene_renderer_.set_presentation_width(scene_view(), width);
    }
    unsigned presentation_width() const { return scene_renderer_.presentation_width(); }
    std::span<const uint32_t> presentation_pixels() const {
        return scene_renderer_.presentation_pixels(native_framebuffer);
    }
    // The authored gas-station/title card is a fixed composition. Its canvas is
    // native-width and the frontend letterboxes it at 4:3. This hint is latched
    // with the picture, not read from next-frame registers; zero means the
    // user's ordinary presentation aspect applies again.
    double presentation_fixed_aspect() const { return scene_renderer_.presentation_fixed_aspect(); }
    // Optional, read-only effect metadata follows the same scanline timing as
    // the presented image. A nonzero mask marks a visible, source-identified
    // flashing effect; its reference pixel is the current scene without that
    // effect, not an older frame. Unmarked reference pixels equal the image.
    // Both spans match the presentation canvas, or are empty while disabled.
    // Consume them inside on_presentation_frame before another frame starts.
    void set_presentation_effects_enabled(bool enabled) {
        scene_renderer_.set_presentation_effects_enabled(scene_view(), enabled);
    }
    std::span<const uint8_t> presentation_effect_mask() const {
        return scene_renderer_.presentation_effect_mask();
    }
    std::span<const uint32_t> presentation_effect_reference() const {
        return scene_renderer_.presentation_effect_reference();
    }
    // Optional host observer for each completed hardware frame, including every
    // frame crossed by one long DMA stall. The pixels are borrowed until this
    // callback returns; consume/copy them here rather than retaining the span.
    // Observers may update their own presentation state, but must not mutate or
    // re-enter the SnesBus. No callback means no additional picture processing.
    std::function<void(std::span<const uint32_t> pixels, unsigned width, uint64_t frame)>
        on_presentation_frame;

    // Public byte arrays hold emulated storage for source execution and state
    // comparisons. Their units match hardware bytes (VRAM register addresses,
    // in contrast, are words). CPU-visible access must still go through read_byte/
    // write_byte whenever an address can select an I/O port.
    std::array<uint8_t, 0x20000> work_ram{};
    std::array<uint8_t, 0x10000> video_ram{};
    std::array<uint8_t, 512> palette_ram{};
    std::array<uint8_t, 544> object_attributes{};
    std::array<uint8_t, 8192> save_ram{};
    // CPU/APU ports are directional latches, not a shared four-byte mailbox.
    // Each processor reads the other processor's most recently written side.
    std::array<uint8_t, 4> audio_to_main_ports{};
    std::array<uint8_t, 4> main_to_audio_ports{};
    std::function<void(unsigned master_clocks)> advance_audio_master_clocks;
    std::array<uint32_t, 256 * 224> native_framebuffer{};
    uint64_t completed_frames = 0;
    unsigned scanline_index() const { return scanline_index_; }
    unsigned scanline_clock() const { return scanline_master_clock_; }
    uint64_t master_clocks() const { return master_clocks_; }
    std::span<const uint8_t, 0x40> ppu_registers() const { return ppu_registers_; }

  private:
    const GameVersion game_version_;
    const SourceProfile *source_profile_;
    std::vector<uint8_t> cartridge_rom_;
    std::array<uint8_t, 0x40> ppu_registers_{};
    std::array<uint8_t, 0x20> cpu_io_registers_{};
    std::array<std::array<uint8_t, 16>, 8> dma_registers_{};
    std::array<bool, 8> hdma_active_{}, hdma_transfer_{};
    std::array<uint16_t, 4> background_scroll_x_{}, background_scroll_y_{};
    std::array<int16_t, 6> mode7_transform_{};
    std::array<int16_t, 2> mode7_scroll_offsets_{};
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
    unsigned scanline_master_clock_ = 0, scanline_index_ = 0, dma_stall_master_clocks_ = 0,
             autojoy_remaining_clocks_ = 0;
    uint64_t master_clocks_ = 0;
    unsigned refresh_clock_ = 538;
    bool refresh_done_ = false;
    bool nmi_flag_ = false, nmi_pending_ = false, irq_flag_ = false;
    uint16_t multiply_result_ = 0, divide_result_ = 0;
    uint16_t pending_product_ = 0, pending_quotient_ = 0;
    unsigned math_remaining_cpu_cycles_ = 0;
    bool pending_divide_ = false;
    uint8_t sprite_status_ = 0;
    GameSceneRenderer scene_renderer_;
    SceneReadView scene_view() const;

    uint8_t read_io_register(uint16_t address);
    void write_io_register(uint16_t address, uint8_t value);
    void write_ppu_register(uint16_t address, uint8_t value);
    uint8_t read_ppu_register(uint16_t address);
    uint16_t mapped_vram_address() const;
    void increment_vram();
    void prefetch_vram();
    uint16_t vram_word(unsigned address) const {
        return video_ram[address & 0xffff] | video_ram[(address + 1) & 0xffff] << 8;
    }
    void dma_transfer(unsigned channels);
    void hdma_init();
    void hdma_line();
    void hdma_reload(unsigned channel);
    void advance_clocks(unsigned clocks, bool pause_for_refresh);
    void render_scanline(unsigned y);

};

} // namespace eb
