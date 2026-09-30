#pragma once

#include <cstdint>

namespace eb::native::story {
// The two source RAND words. The native story owner supplies/persists them;
// no clock, global singleton, authored seed or host random generator is used.
struct RandomState {
    std::uint16_t primary_word{}, secondary_word{};
    bool operator==(const RandomState&) const = default;
};

// Source RAND return byte and both updated words. Its8x8 product is ordinary
// native integer arithmetic; no emulated hardware or CPU flags are retained.
std::uint8_t next_random(RandomState&);
} // namespace eb::native::story
