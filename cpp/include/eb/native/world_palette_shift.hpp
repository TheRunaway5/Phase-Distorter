#pragma once
#include <array>
#include <cstdint>
#include <span>
namespace eb::native {
// Complete C4746B arithmetic. The actual 256-word backup remains retained.
// Results0..223 write staged colors32..255; results224..255 write the adjacent
// 64-byte DMA descriptor prefix. The caller must own both destinations.
std::array<std::uint16_t,256> shift_map_palette(
    std::span<const std::uint16_t,256> backup,std::uint16_t delta) noexcept;
}
