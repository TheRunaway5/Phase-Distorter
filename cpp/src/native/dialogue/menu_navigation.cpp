#include "eb/native/dialogue/menu_navigation.hpp"

namespace eb::native::dialogue {
namespace {
std::optional<TextCursor> search(const TextOutput &output, WindowId id, TextCursor start,
                                 MenuDirection direction) {
    const auto geometry = output.window(id).geometry;
    const auto width = geometry.columns, height = std::uint16_t(geometry.tile_rows / 2);
    const bool vertical = direction == MenuDirection::Up || direction == MenuDirection::Down;
    const std::uint16_t step =
        direction == MenuDirection::Up || direction == MenuDirection::Left ? 0xffff : 1;
    const auto major_start = vertical ? start.line : start.column;
    const auto minor_start = vertical ? start.column : start.line;
    const auto major_limit = vertical ? height : width;
    const auto minor_limit = vertical ? width : height;
    const auto at = [vertical](std::uint16_t major, std::uint16_t minor) {
        return vertical ? TextCursor{minor, major} : TextCursor{major, minor};
    };
    // The source scans the entire aligned ray first, then all preceding-side
    // rows/columns, then all following-side rows/columns. Nearest-distance or
    // row-major search would choose different options in sparse menus.
    for (unsigned pass = 0; pass < 3; ++pass) {
        for (auto major = std::uint16_t(major_start + step); major < major_limit;
             major = std::uint16_t(major + step)) {
            if (!pass) {
                if (output.selection_marker_at(id, at(major, minor_start)))
                    return at(major, minor_start);
            } else {
                const std::uint16_t side = pass == 1 ? 0xffff : 1;
                for (auto minor = std::uint16_t(minor_start + side); minor < minor_limit;
                     minor = std::uint16_t(minor + side))
                    if (output.selection_marker_at(id, at(major, minor)))
                        return at(major, minor);
            }
        }
    }
    return {};
}
} // namespace
std::optional<TextCursor> find_menu_marker(const TextOutput &output, WindowId id, TextCursor start,
                                           MenuDirection direction, std::optional<TextCursor> wrap) {
    if (auto found = search(output, id, start, direction))
        return found;
    if (!wrap)
        return {};
    auto found = search(output, id, *wrap, direction);
    const bool vertical = direction == MenuDirection::Up || direction == MenuDirection::Down;
    if (found && (vertical ? found->column == start.column : found->line == start.line))
        return found;
    return {};
}
} // namespace eb::native::dialogue
