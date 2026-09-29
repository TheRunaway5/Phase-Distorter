#pragma once

#include "eb/game_version.hpp"

#include <cstdint>
#include <span>

namespace eb {
struct SourceProfile;
class GameSceneRenderer;

// A transparent candidate has negative priority; layer 5 is the backdrop.
// Direct-color pixels have no palette entry. Palette identity allows a scene
// reference picture to suppress a known effect without changing CGRAM.
struct PpuPixel {
    uint16_t color = 0;
    int priority = -1;
    unsigned layer = 5;
    bool math = true;
    unsigned palette_index = 256;
};

// Borrowed only for one synchronous rendering/upload operation. These spans
// cannot write hardware memory or invoke CPU-visible, side-effecting I/O.
// Neither GameSceneRenderer nor SnesBus retains a view: a copied bus constructs
// fresh spans into its own memory at the next scanline or OAM upload.
struct SceneReadView {
    std::span<const uint8_t, 0x20000> work_ram;
    std::span<const uint8_t, 0x10000> video_ram;
    std::span<const uint8_t, 512> palette_ram;
    std::span<const uint8_t, 544> object_attributes;
    std::span<const uint8_t> cartridge_rom;
    std::span<const uint8_t, 0x40> ppu_registers;
    std::span<const uint16_t, 4> background_scroll_x, background_scroll_y;
    std::span<const int16_t, 6> mode7_transform;
    std::span<const int16_t, 2> mode7_scroll_offsets;
    std::span<const uint32_t, 256 * 224> native_framebuffer;
    const SourceProfile &source_profile;
    GameVersion game_version;
    uint64_t completed_frames;
    uint16_t fixed_color, oam_reload;

    uint16_t vram_word(unsigned address) const {
        return video_ram[address & 0xffff] | video_ram[(address + 1) & 0xffff] << 8;
    }
    uint16_t palette(unsigned index) const {
        index = (index & 255) * 2;
        return (palette_ram[index] | palette_ram[index + 1] << 8) & 0x7fff;
    }
    PpuPixel sample_background_pixel(unsigned layer, int x, unsigned y,
                                     const GameSceneRenderer *scene = nullptr) const;
    PpuPixel sample_mode7_pixel(unsigned layer, int x, unsigned y) const;
    bool layer_window_contains(unsigned layer, unsigned x) const;
    // Returns overflow bits. Only the bus's native pass may commit them.
    uint8_t sample_sprite_pixels(unsigned y, std::span<PpuPixel> result, int origin) const;
};
} // namespace eb
