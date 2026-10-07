#pragma once

#include "eb/native/sprite_actors.hpp"
#include <array>
#include <memory>
#include <span>

namespace eb::native {
struct WorldPaletteLayout {
    std::uint32_t sprites, groups, groups_end, sectors;
};
WorldPaletteLayout world_palette_layout(GameVersion version);

struct AreaPaletteId {
    unsigned group{}, variant{};
    bool operator==(const AreaPaletteId &) const = default;
};
struct AreaPalettes {
    AreaPaletteId selected;
    // Authored one-based scenery color-animation track; zero means none.
    unsigned animation_id{};
    // Six scenery palettes and eight actor palettes, numeric ARGB. Index zero
    // is transparent; content control words never become visible colors.
    std::array<std::array<std::uint32_t, 16>, 6> scenery{};
    SpritePalettes sprites{};
    // Transparent texels never draw these authored words, but palette backup
    // and restoration must retain them (some scenery zeros are control words).
    std::array<std::uint16_t, 6> scenery_zero{};
    std::array<std::uint16_t, 8> sprite_zero{};
    // Complementary source word bits omitted by RGB projection. Bit zero is
    // unused because each transparent control word is already retained whole.
    std::array<std::uint16_t, 6> scenery_high_bits{};
    std::array<std::uint16_t, 8> sprite_high_bits{};
    std::uint16_t scenery_word(unsigned palette, unsigned color) const;
    std::uint16_t sprite_word(unsigned palette, unsigned color) const;
};

// Owns authored palettes and area selections. Resolves story/day flag branches
// and source ambient sprite tint without CGRAM, processor or mutable game state.
// This supplies steady area colors. Fades, palette animation, UI and photograph
// palettes belong to their explicit native scene owners, not this resolver.
class WorldPalettes {
  public:
    WorldPalettes(std::span<const std::uint8_t> assets, WorldPaletteLayout layout);
    ~WorldPalettes();
    WorldPalettes(WorldPalettes &&) noexcept;
    WorldPalettes &operator=(WorldPalettes &&) noexcept;
    WorldPalettes(const WorldPalettes &) = delete;
    WorldPalettes &operator=(const WorldPalettes &) = delete;

    const SpritePalettes &initial_sprites() const;
    unsigned variants(unsigned group) const;
    // World pixel coordinates; the map is 8192 by 10240 pixels. The caller
    // chooses camera/teleport destination before selecting an area.
    AreaPaletteId area_at(unsigned x, unsigned y) const;
    // Event bits use one-based authored IDs. Only flags used by the selected
    // branch are required; missing storage and cyclic branches are errors.
    AreaPalettes resolve(AreaPaletteId area, std::span<const std::uint8_t> event_flags) const;

  private:
    struct State;
    std::unique_ptr<State> state_;
};
} // namespace eb::native
