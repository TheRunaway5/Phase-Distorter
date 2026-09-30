#pragma once

#include "eb/native/dialogue/output.hpp"
#include <stdexcept>

namespace eb::native::dialogue::detail {
struct CanvasImage : TextImage {
    std::optional<std::size_t> reusable_identity;
};
struct CanvasCell {
    std::shared_ptr<CanvasImage> artwork;
    TextStyle style;
    std::optional<std::uint16_t> fixed_character;
    bool lower_half{};
};
// A canvas has one owner, whether its physical window is open or retained.
// Sampled cell membership keeps live artwork aliases; sampled frames copy
// pixels. Closing/reusing a slot never mutates an already sampled frame.
struct TextCanvas {
    OutputWindow state;
    std::vector<CanvasCell> cells;

    void require_storage() const {
        const auto &g = state.geometry;
        if (!g.columns || g.tile_rows < 2 || (g.tile_rows & 1) ||
            cells.size() != std::size_t(g.columns) * g.tile_rows)
            throw std::invalid_argument("Dialogue physical slot has no defined canvas storage");
    }
    TextCellGrid sample_cells() const {
        require_storage();
        TextCellGrid result{state.geometry, {}};
        result.cells.reserve(cells.size());
        for (const auto &cell : cells)
            result.cells.push_back({cell.artwork, cell.style, cell.fixed_character, cell.lower_half});
        return result;
    }
    std::shared_ptr<const TextFrame> sample_frame() const {
        require_storage();
        auto result = std::make_shared<TextFrame>();
        result->width = state.geometry.columns * 8;
        result->height = state.geometry.tile_rows * 8;
        result->pixels.resize(result->width * result->height);
        result->priority.resize(result->pixels.size());
        for (unsigned y = 0; y < result->height; ++y)
            for (unsigned x = 0; x < result->width; ++x) {
                const auto &cell = cells[(y / 8) * state.geometry.columns + x / 8];
                const auto sx = cell.style.flip_horizontal ? 7 - (x & 7) : x & 7;
                const auto sy = cell.style.flip_vertical ? 7 - (y & 7) : y & 7;
                const auto pixel = cell.artwork->pixels[sy * 8 + sx];
                result->pixels[y * result->width + x] = pixel ? pixel + cell.style.palette * 4 : 0;
                result->priority[y * result->width + x] = pixel ? cell.style.priority : false;
            }
        return result;
    }
};
} // namespace eb::native::dialogue::detail
