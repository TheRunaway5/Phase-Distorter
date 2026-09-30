#pragma once

#include "eb/native/dialogue/menu_state.hpp"
#include <functional>

namespace eb::native::dialogue {
class WindowHost;
class FontResources;
struct MenuLayout {
    std::uint16_t columns = 1, gap{};
    bool centered{}, force_normal_font{};
};

// Source menu construction/layout over WindowHost's sole authoritative pool.
// This object retains no option, window, layout or selection copy. Host and
// font resources must outlive it. It performs no printing or host callbacks.
// Sources: C11354/C113D1/C114B1/C1153B/C1138D/C451FA/C1181B/C11887.
class MenuModel {
  public:
    MenuModel(WindowHost&, const FontResources&);
    std::optional<unsigned> first_free() const;
    unsigned append(std::span<const std::uint8_t> label, std::optional<Location> selected_text = {});
    unsigned append_at(std::span<const std::uint8_t> label, std::optional<Location> selected_text,
                       std::uint16_t x, std::uint16_t y, bool pixel_coordinates = false);
    unsigned append_value(std::span<const std::uint8_t> label, std::optional<Location> selected_text,
                          std::uint16_t userdata, std::uint16_t x, std::uint16_t y,
                          bool pixel_coordinates = false);
    // append's source no-focus/full-pool fallback is slot69, not a new slot or
    // a failure sentinel. Coordinate/userdata wrappers still update that slot.
    std::vector<unsigned> chain(std::optional<unsigned> first) const;
    unsigned count(std::optional<unsigned> first) const;
    unsigned index_at(std::optional<unsigned> first, unsigned ordinal) const;
    // US: C43E31's 16-bit pixel sum, with live font/padding and optional normal
    // font override. JP: C117E2's bounded encoded-character count.
    std::uint16_t label_width(std::span<const std::uint8_t>, unsigned maximum = 30,
                              bool force_normal_font = false) const;
    // The page-control label comes from imported MenuResources. No original
    // authored label or artwork is embedded in this domain module.
    void layout(MenuLayout, std::span<const std::uint8_t> next_page_label);
    void select_initial(std::uint16_t ordinal); // ffff retains selection/page
    void prepare_selection(std::uint16_t columns, bool centered, std::uint16_t ordinal,
                           std::span<const std::uint8_t> next_page_label,
                           bool force_normal_font = false);

  private:
    friend class MenuCommands;
    // Only the authored-command coordinator supplies a read-only Program
    // lookup here. It must not run host callbacks or mutate the selected pool.
    // Resolve after the source no-focus/full-pool exits and record bounds.
    unsigned append_resolving(std::span<const std::uint8_t> label,
                             const std::function<std::optional<Location>()> &selected_text);
    WindowHost& host_;
    const FontResources& fonts_;
};
} // namespace eb::native::dialogue
