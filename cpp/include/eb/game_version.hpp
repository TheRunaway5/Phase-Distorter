#pragma once
#include <cstdint>

namespace eb {
// Selects both translated instructions and ROM-derived layout metadata. Japanese
// support is a separate source program, not a text swap over the US executable.
enum class GameVersion : std::uint8_t { US, JP };
}
