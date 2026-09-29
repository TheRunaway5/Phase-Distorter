#pragma once

namespace eb {
// Bits per pixel for BG1..BG4 in each PPU mode; zero means absent. Mode 7
// bypasses planar decoding and uses its affine map/character organization.
inline constexpr unsigned background_color_depths[8][4] = {{2, 2, 2, 2}, {4, 4, 2, 0}, {4, 4, 0, 0},
                                                           {8, 4, 0, 0}, {8, 2, 0, 0}, {4, 2, 0, 0},
                                                           {4, 0, 0, 0}, {8, 0, 0, 0}};
} // namespace eb
