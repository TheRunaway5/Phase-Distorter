#pragma once

#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/window_resources.hpp"

namespace eb::native::dialogue {
// Immutable inputs to LOAD_WINDOW_GFX. The initializer owns retained artwork,
// composition history and publication: these resources contain no staged or
// generated party-name images, and retain no borrowed source-image memory.
class WindowInitializationResources {
  public:
    static std::shared_ptr<const WindowInitializationResources>
    import(std::span<const std::uint8_t> image, GameVersion version);
    GameVersion version() const { return version_; }
    // Decoded asset cells in original order, before relocation/flavour/name
    // operations. US has416 cells and JP672; neither implies zeroed remaining
    // staging artwork. The seven-cell patch replaces source cells16..22.
    std::span<const WindowArtwork> base_artwork() const { return base_; }
    std::span<const WindowArtwork, 7> flavour_patch() const { return patch_; }
    bool uses_flavoured_art(unsigned flavor) const;
    // Full-word source codes before the first terminator in the declared
    // 49-word table. Spaces remain present; the initializer owns their skip
    // semantics and resolves all characters against its live staged artwork.
    std::span<const std::uint16_t> status_characters() const { return status_; }
    // US-only raw Battle-font path: all128 masked records, including the
    // source's adjacent continuation bytes, with fixed6-pixel name advance.
    // No ordinary-print fixed-code routing or metric lookup is performed.
    const FontGlyph& battle_name_glyph(std::uint8_t encoded_character) const;

  private:
    explicit WindowInitializationResources(GameVersion version) : version_(version) {}
    GameVersion version_;
    std::vector<WindowArtwork> base_;
    std::array<WindowArtwork, 7> patch_{};
    std::array<bool, 5> flavoured_{};
    std::vector<std::uint16_t> status_;
    std::array<FontGlyph, 128> battle_{};
};
} // namespace eb::native::dialogue
