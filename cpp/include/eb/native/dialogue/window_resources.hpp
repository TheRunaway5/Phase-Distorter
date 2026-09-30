#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <span>
#include <vector>

namespace eb::native::dialogue {
struct WindowConfiguration {
    // Imported outer rectangle in eight-pixel cells. Source CREATE_WINDOW
    // subtracts two cells from each dimension for its content rectangle.
    std::uint16_t outer_x{}, outer_y{}, outer_width{}, outer_height{};
    bool operator==(const WindowConfiguration&) const = default;
};
using WindowArtwork = std::array<std::uint8_t, 64>; // Unflipped 8x8 two-bit pixels.
enum class WindowBorder { Corner, OverlapCorner, Horizontal, Vertical, TitleJoin };
struct WindowDecoration {
    WindowArtwork pixels{};
    std::uint8_t palette{};
    bool priority{}, flip_horizontal{}, flip_vertical{};
    std::uint16_t artwork_cell{};
    bool operator==(const WindowDecoration&) const = default;
};

// Immutable original configuration and decoration resources. The imported
// bytes are owned/decoded here; no processor, video device or source image
// lifetime is required by the native window host.
class WindowResources {
  public:
    static std::shared_ptr<const WindowResources> import(std::span<const std::uint8_t> image,
                                                         GameVersion version);
    GameVersion version() const { return version_; }
    unsigned configuration_count() const { return unsigned(configurations_.size()); }
    const WindowConfiguration& configuration(unsigned id) const;
    std::span<const WindowConfiguration> configurations() const { return configurations_; }
    // Flavor numbers retain the game's one-based 1..5 selection. Artwork is
    // unflipped: the host retains semantic border role/orientation separately
    // to reproduce source corner intersections, rather than comparing pixels.
    bool uses_flavoured_art(unsigned flavor) const;
    const WindowArtwork& border(WindowBorder, unsigned flavor) const;
    const std::array<WindowDecoration, 4>& pagination(unsigned frame, unsigned flavor) const;
    // CC_13_14's two blinking phases and phase-zero acceptance decoration.
    // These are single cells, distinct from menu markers and pagination.
    const WindowDecoration& prompt(unsigned phase, unsigned flavor) const;
    // C47F87's full 32-color publication. An incapacitated last party member
    // selects the alternate palette only when transitions are enabled. Color
    // zero is forced to zero as in source; entries are imported RGB555 words.
    const std::array<std::uint16_t, 32>& palette(unsigned flavor, bool incapacitated = false,
                                               bool transitions_disabled = false) const;
    // C3E450 is a separate publication and may overwrite palette 5 after a
    // full update. The host preserves this ordering and supplies logical time.
    const std::array<std::uint16_t, 4>& animated_palette5(unsigned flavor,
                                                        std::uint64_t frame_counter) const;
    // C2038B copies this fixed row immediately after the 28 visible rows.
    const std::array<WindowDecoration, 32>& fixed_tail(unsigned flavor) const;
    // JP title characters are single 8x8 cells indexed by encoded byte - 32.
    // US titles use the existing Tiny font and reject this region-specific API.
    const WindowArtwork& japanese_title_glyph(std::uint16_t encoded_character) const;

  private:
    explicit WindowResources(GameVersion version) : version_(version) {}
    GameVersion version_;
    std::vector<WindowConfiguration> configurations_;
    std::array<bool, 5> flavoured_{};
    std::array<std::array<WindowArtwork, 5>, 5> borders_{};
    std::array<std::array<std::array<WindowDecoration, 4>, 4>, 5> pagination_{};
    std::array<std::array<WindowDecoration, 3>, 5> prompts_{};
    std::array<std::array<std::uint16_t, 32>, 5> palettes_{};
    std::array<std::uint16_t, 32> incapacitated_palette_{};
    std::array<std::array<std::array<std::uint16_t, 4>, 2>, 5> animated_palettes_{};
    std::array<WindowArtwork, 224> japanese_titles_{};
    std::array<std::array<WindowDecoration, 32>, 5> fixed_tail_{};
};
} // namespace eb::native::dialogue
