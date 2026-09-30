#pragma once

#include "eb/native/dialogue/output.hpp"

namespace eb::native::dialogue {
enum class MenuDirection { Up, Left, Down, Right };
// Source C20B65 / MOVE_CURSOR marker search. Wrap origins are supplied by
// SELECTION_MENU's captured window, while marker lookup uses current focus.
std::optional<TextCursor> find_menu_marker(const TextOutput &, WindowId, TextCursor, MenuDirection,
                                           std::optional<TextCursor> wrap_origin = {});
} // namespace eb::native::dialogue
