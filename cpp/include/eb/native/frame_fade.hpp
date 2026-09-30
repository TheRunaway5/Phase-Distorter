#pragma once
#include <cstdint>

namespace eb::native {
// Authored byte-state, independent of display hardware and update scheduling.
struct FrameFade {
    std::uint8_t brightness{}, step{}, delay{}, remaining{}, hdma{};
    bool operator==(const FrameFade &) const = default;
};
// One authored countdown tick. Delay and addition intentionally wrap as bytes;
// negative encoded counters and brightness sums use the source sign-bit rule.
FrameFade advance_frame_fade(FrameFade state);
} // namespace eb::native
