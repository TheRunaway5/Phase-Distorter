#pragma once

#include <array>
#include <cstdint>

namespace eb::native::battle {
using PackedPalette = std::array<std::uint16_t, 16>;

// The actual raw16 staging palettes and independently displayed RGB15 colors.
// All battle palette writers share this stable owner. Publication uses the
// single last-written upload mode; it never merges ranges or advances effects.
struct PaletteBankState {
    PaletteBankState() = default;
    PaletteBankState(const PaletteBankState&) = delete;
    PaletteBankState& operator=(const PaletteBankState&) = delete;
    PaletteBankState(PaletteBankState&&) = delete;
    PaletteBankState& operator=(PaletteBankState&&) = delete;

    // Existing effect-bank identities0..3 are physical alternate banks12..15.
    PackedPalette& palette(unsigned bank);
    const PackedPalette& palette(unsigned bank) const;
    PackedPalette& staged_palette(unsigned bank) { return staged.at(bank); }
    const PackedPalette& staged_palette(unsigned bank) const { return staged.at(bank); }
    const PackedPalette& displayed_palette(unsigned bank) const { return displayed.at(bank); }
    std::uint16_t& staged_color(unsigned color) { return staged.at(color / 16).at(color % 16); }
    const std::uint16_t& staged_color(unsigned color) const { return staged.at(color / 16).at(color % 16); }
    // The real NMI palette operation:0 does nothing;8/16/24 copy lower/upper/
    // all128/128/256 colors, discard bit15 as CGRAM does, and consume the mode.
    // Unsupported table aliases
    // reject before changing either the displayed colors or upload intent.
    bool publish_pending();
    std::array<PackedPalette, 16> staged{}, displayed{};
    std::uint8_t upload_mode{};
};

struct PaletteEffectBank {
    std::uint16_t frames_left{};
    // Three words per color, in red/green/blue order, including color0.
    std::array<std::uint16_t, 48> counters{}, steps{}, deltas{};
    bool operator==(const PaletteEffectBank&) const = default;
};
struct PaletteEffectState {
    std::uint16_t speed{};
    std::array<PaletteEffectBank, 4> banks{};
    bool operator==(const PaletteEffectState&) const = default;
};

// Complete C2FAD8/C2FADE/C2FB35/C2FD99 operations. No clock, rendering or
// callbacks are advanced here. Callers retain the shared state across
// PSI/KO/revive transitions; their full coordinators are separate ports.
// Neither palette colors nor effect counters are copied into a cache.
class PaletteEffects {
public:
    PaletteEffects(PaletteBankState&, PaletteEffectState&);
    PaletteEffects(const PaletteEffects&) = delete;
    PaletteEffects& operator=(const PaletteEffects&) = delete;
    PaletteEffects(PaletteEffects&&) = delete;
    PaletteEffects& operator=(PaletteEffects&&) = delete;

    void set_speed(std::uint16_t);
    void reverse(unsigned bank, std::uint16_t speed);
    // Flat color index0..63; target components deliberately accept raw words,
    // not just RGB5. An equal component retains its previous step word.
    void target(unsigned color, std::uint16_t red, std::uint16_t green,
                std::uint16_t blue);
    // Advances each active bank once, skipping color0. Rejects the original
    // nonterminating domain (speed0 with a processed nonzero delta) before any
    // mutation. Other zero-speed states remain valid.
    void advance();

    PaletteBankState& palette_state() noexcept { return palettes_; }
    const PaletteBankState& palette_state() const noexcept { return palettes_; }
    const PaletteEffectState& state() const noexcept { return state_; }
    bool uses(const PaletteBankState&, const PaletteEffectState&) const noexcept;

private:
    PaletteBankState& palettes_;
    PaletteEffectState& state_;
};
} // namespace eb::native::battle
