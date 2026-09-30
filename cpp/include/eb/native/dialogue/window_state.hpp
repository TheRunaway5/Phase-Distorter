#pragma once

#include <compare>
#include <cstdint>
#include <optional>

namespace eb::native::dialogue {
struct WindowId {
    std::uint32_t value{};
    auto operator<=>(const WindowId &) const = default;
};
struct Registers {
    std::uint32_t working{}, argument{};
    std::uint16_t secondary{};
    bool operator==(const Registers &) const = default;
};
struct WindowState {
    Registers active, saved;
    bool operator==(const WindowState &) const = default;
};
// Authored windows use eight-pixel columns and eight-pixel tile rows. A text
// line occupies two rows. Position is local to the window's content rectangle.
struct WindowGeometry {
    std::uint16_t columns{}, tile_rows{};
    bool operator==(const WindowGeometry &) const = default;
};
struct TextCursor {
    std::uint16_t column{}, line{};
    bool operator==(const TextCursor &) const = default;
};
struct TextStyle {
    std::uint16_t font{};
    std::uint8_t palette{};
    bool priority = true, flip_horizontal{}, flip_vertical{};
    bool operator==(const TextStyle &) const = default;
};
struct OutputWindow {
    WindowGeometry geometry;
    TextStyle style;
    TextCursor cursor;
    bool operator==(const OutputWindow &) const = default;
};
struct SavedWindowAttributes {
    std::optional<WindowId> id;
    TextCursor cursor;
    std::uint8_t number_padding{};
    TextStyle style;
    bool operator==(const SavedWindowAttributes &) const = default;
};
} // namespace eb::native::dialogue
