#pragma once
#include <cstdint>
#include <memory>
#include <vector>

namespace eb::native {
// A palette-indexed drawing fragment, including authored orientation. These
// pixels are imported content, independent of any graphics transport address.
struct SpriteFragmentPixels {
    unsigned width{}, height{};
    std::vector<std::uint8_t> indices;
};
struct SpriteFragment {
    int left{}, top{};
    unsigned palette{}, priority{};
    std::shared_ptr<const SpriteFragmentPixels> pixels;
};
} // namespace eb::native
