#pragma once

#include <array>
#include <cstdint>

namespace eb::native::battle {
using PackedPalette = std::array<std::uint16_t, 16>;

// The four mutable alternate enemy palette banks (source banks12..15).
// Initial colors come from the caller's actual scene state. These raw words
// retain bit15 and carries between RGB fields; decoding belongs to rendering.
// Effects and the combatant renderer borrow this same stable owner.
struct PaletteBankState {
    PaletteBankState() = default;
    PaletteBankState(const PaletteBankState&) = delete;
    PaletteBankState& operator=(const PaletteBankState&) = delete;
    PaletteBankState(PaletteBankState&&) = delete;
    PaletteBankState& operator=(PaletteBankState&&) = delete;

    PackedPalette& palette(unsigned bank) { return palettes.at(bank); }
    const PackedPalette& palette(unsigned bank) const { return palettes.at(bank); }
    std::array<PackedPalette, 4> palettes{};
    // C0856B's staged publication intent. An active effect bank writes16 even
    // if no color changed. This is not an immediate visible-frame publication;
    // the eventual whole-battle palette compositor must share/adapt this owner.
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

    const PaletteBankState& palette_state() const noexcept { return palettes_; }
    const PaletteEffectState& state() const noexcept { return state_; }
    bool uses(const PaletteBankState&, const PaletteEffectState&) const noexcept;

private:
    PaletteBankState& palettes_;
    PaletteEffectState& state_;
};
} // namespace eb::native::battle
