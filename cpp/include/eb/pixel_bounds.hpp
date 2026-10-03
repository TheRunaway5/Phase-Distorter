#pragma once

namespace eb {
// Integer pixel coordinates: inclusive left/top, exclusive right/bottom.
struct PixelBounds {
    int left{}, top{}, right{}, bottom{};
};
} // namespace eb
