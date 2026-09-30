#pragma once

#include "eb/native/dialogue/window_resources.hpp"

namespace eb::native::dialogue {
// General SELECTION_MENU art and authored page label. These two frames are
// independent of the four-frame window-border pagination decorations.
class MenuResources {
  public:
    static std::shared_ptr<const MenuResources> import(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const { return version_; }
    const std::array<WindowDecoration, 2> &blink(unsigned frame) const;
    std::span<const std::uint8_t> next_page_label() const { return next_page_label_; }

  private:
    explicit MenuResources(GameVersion version) : version_(version) {}
    GameVersion version_;
    std::array<std::array<WindowDecoration, 2>, 2> blink_{};
    std::vector<std::uint8_t> next_page_label_;
};
} // namespace eb::native::dialogue
