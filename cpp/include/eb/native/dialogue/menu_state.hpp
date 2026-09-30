#pragma once

#include "eb/native/dialogue/program.hpp"

namespace eb::native::dialogue {
// Source globals shared by construction, printing and selection. WindowHost
// owns one instance alongside its option pool; operations borrow this state.
struct MenuState {
    bool center_next_string{}, force_normal_font{}, restore_backup{}, early_tick_exit{}, force_left_alignment{};
    std::uint16_t backup_first_option=0xffff, backup_selected_option=0xffff, backup_x{}, backup_y{};
    bool operator==(const MenuState&) const = default;
};
// Stable slots owned by WindowHost. The first word is the source allocation
// and result mode: 0 free, 1 ordinal, 2 userdata. Releasing a slot clears only
// that word; the remaining fields survive until their constructor writes them.
struct WindowMenuOption {
    std::uint16_t flags{};
    std::optional<unsigned> next;
    std::optional<unsigned> previous;
    std::uint16_t page{}, x{}, y{}, userdata{};
    std::uint8_t sound_effect{};
    std::optional<Location> selected_text;
    // JP labels have at most 24 bytes before zero. US also permits 25, whose
    // terminating zero occupies the adjacent pixel_align byte in the source.
    // Shorter replacements retain the old suffix and pixel alignment.
    std::array<std::uint8_t, 25> label{};
    std::uint8_t pixel_align{}; // US only; Japanese constructors retain it.
    bool operator==(const WindowMenuOption&) const = default;
};
} // namespace eb::native::dialogue
