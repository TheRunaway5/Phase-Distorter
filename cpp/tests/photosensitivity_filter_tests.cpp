// Synthetic picture tests bound actual output changes, not clinical risk. They
// need no game assets, SDL, wall clock or emulated game state.
#include "eb/photosensitivity_filter.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <span>
#include <stdexcept>
#include <vector>

namespace {
using Image = std::vector<std::uint32_t>;
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
int channel(std::uint32_t pixel, unsigned shift) { return int((pixel >> shift) & 255); }
int luma(std::uint32_t pixel) {
    return (54 * channel(pixel, 16) + 183 * channel(pixel, 8) + 19 * channel(pixel, 0) + 128) / 256;
}
Image copy(std::span<const std::uint32_t> pixels) { return {pixels.begin(), pixels.end()}; }
Image settle(eb::PhotosensitivityFilter& filter, const Image& pixels, int width, int height) {
    for (int frame = 0; frame < 80; ++frame) filter.apply(pixels, width, height, true);
    return copy(filter.apply(pixels, width, height, true));
}
void bounded_step(std::uint32_t previous, std::uint32_t current) {
    for (const unsigned shift : {16u, 8u, 0u})
        require(std::abs(channel(previous, shift) - channel(current, shift)) <= 8,
                "An RGB channel changed by more than eight levels in one game frame");
}

void bypass_and_sizes() {
    eb::PhotosensitivityFilter filter;
    const std::array sizes{std::array{1, 1}, std::array{256, 224}, std::array{398, 224},
        std::array{522, 224}, std::array{1024, 224}, std::array{4096, 1}, std::array{1, 4096}};
    for (const auto size : sizes) {
        Image input(static_cast<std::size_t>(size[0]) * size[1]);
        for (std::size_t index = 0; index < input.size(); ++index)
            input[index] = std::uint32_t(index * 2654435761u); // Exercise alpha as well as RGB.
        const auto original = input;
        const auto bypass = filter.apply(input, size[0], size[1], false);
        require(bypass.data() == input.data() && copy(bypass) == input, "Disabled filter did not return exact input");
        const auto enabled = filter.apply(input, size[0], size[1], true);
        require(enabled.data() != input.data() && enabled.size() == input.size(), "Enabled filter did not own its output");
        require(input == original, "Enabled filter modified the source framebuffer");
        for (std::size_t index = 0; index < input.size(); ++index) {
            require((enabled[index] & 0xff000000u) == (input[index] & 0xff000000u), "Alpha changed");
            bounded_step(0xff6c6c6cu, enabled[index]);
        }
    }
}

void alternating_flashes(std::uint32_t first, std::uint32_t second, int maximum_luma_range) {
    eb::PhotosensitivityFilter filter;
    Image input(6), previous(6, 0xff6c6c6cu);
    int lowest = 255, highest = 0;
    for (int frame = 0; frame < 240; ++frame) {
        std::fill(input.begin(), input.end(), frame % 2 ? second : first);
        const auto before = input;
        const auto result = filter.apply(input, 3, 2, true);
        require(input == before, "Flashing sequence modified its input");
        for (std::size_t index = 0; index < input.size(); ++index) {
            bounded_step(previous[index], result[index]);
            lowest = std::min(lowest, luma(result[index]));
            highest = std::max(highest, luma(result[index]));
        }
        previous = copy(result);
    }
    require(highest - lowest <= maximum_luma_range, "Alternating flashes retained excessive output amplitude from startup");
}

void palette_sequence() {
    eb::PhotosensitivityFilter filter, replay;
    Image input(8 * 7), previous(input.size(), 0xff6c6c6cu);
    std::uint32_t random = 0x193a5271;
    for (int frame = 0; frame < 96; ++frame) {
        for (auto& pixel : input) {
            random ^= random << 13;
            random ^= random >> 17;
            random ^= random << 5;
            pixel = 0xff000000u | (random & 0x00ffffffu);
        }
        const auto before = input;
        const auto result = filter.apply(input, 8, 7, true);
        require(copy(result) == copy(replay.apply(input, 8, 7, true)), "Identical frame sequences diverged");
        require(input == before, "Palette filtering modified input");
        for (std::size_t index = 0; index < input.size(); ++index) bounded_step(previous[index], result[index]);
        previous = copy(result);
    }
}

void tone_and_red() {
    eb::PhotosensitivityFilter filter;
    const auto white = settle(filter, Image(1, 0xffffffffu), 1, 1)[0];
    require(channel(white, 16) <= 208 && channel(white, 16) >= 195, "Highlight compression is absent or excessive");
    const auto black = settle(filter, Image(1, 0xff000000u), 1, 1)[0];
    require(channel(black, 16) >= 8 && channel(black, 16) <= 20, "Black floor is outside the intended contrast reduction");
    require(channel(white, 16) - channel(black, 16) < 200, "Full-range contrast was not reduced");
    const auto red = settle(filter, Image(1, 0xffff0000u), 1, 1)[0];
    require(channel(red, 16) <= 128 && channel(red, 8) >= 32, "Saturated red was not strongly attenuated");
    require(channel(red, 16) - channel(red, 8) <= 64 && channel(red, 8) == channel(red, 0),
            "Red retained excessive saturation or acquired an unrelated hue");
    require(channel(red, 16) > channel(red, 8), "Red identity was completely removed");
    const auto gray = settle(filter, Image(1, 0xff808080u), 1, 1)[0];
    require(channel(gray, 16) == channel(gray, 8) && channel(gray, 8) == channel(gray, 0), "Neutral gray acquired a color cast");
}

void spatial_patterns_and_text() {
    constexpr int width = 32, height = 16;
    Image input(width * height);
    eb::PhotosensitivityFilter filter;
    for (int y = 0; y < height; ++y)
        for (int x = 0; x < width; ++x) input[y * width + x] = x % 2 ? 0xffffffffu : 0xff000000u;
    auto result = settle(filter, input, width, height);
    require(std::abs(luma(result[5 * width + 10]) - luma(result[5 * width + 11])) <= 100,
            "High-contrast alternating lines were not spatially softened");
    for (int y = 0; y < height; ++y)
        for (int x = 0; x < width; ++x) input[y * width + x] = (x + y) % 2 ? 0xffffffffu : 0xff000000u;
    result = settle(filter, input, width, height);
    require(std::abs(luma(result[5 * width + 10]) - luma(result[5 * width + 11])) <= 1,
            "Single-pixel checkerboard retained high interior contrast");

    // A two-pixel text stroke should remain visibly distinct and settle without
    // temporal oscillation, despite the intended softening of its outer edges.
    std::fill(input.begin(), input.end(), 0xff000000u);
    for (int y = 3; y < 13; ++y)
        for (int x = 6; x < 23; ++x)
            if (y < 5 || x == 14 || x == 15) input[y * width + x] = 0xffffffffu;
    result = settle(filter, input, width, height);
    require(luma(result[8 * width + 14]) - luma(result[8 * width + 3]) >= 100, "Steady text lost its readable stroke contrast");
    for (int frame = 0; frame < 24; ++frame)
        require(copy(filter.apply(input, width, height, true)) == result, "Steady text never stabilized");
}

void toggles_and_resize() {
    eb::PhotosensitivityFilter filter, fresh;
    const Image black(4, 0xff000000u), white(4, 0xffffffffu);
    settle(filter, white, 2, 2);
    require(filter.apply(black, 2, 2, false).data() == black.data(), "Disable did not restore original picture immediately");
    require(copy(filter.apply(black, 2, 2, true)) == copy(fresh.apply(black, 2, 2, true)), "Re-enable retained the prior scene");
    settle(filter, white, 2, 2);
    filter.reset();
    fresh.reset();
    require(copy(filter.apply(black, 2, 2, true)) == copy(fresh.apply(black, 2, 2, true)), "Explicit reset retained history");

    // A stable scene must not jump to startup gray when the canvas gets wider,
    // taller, smaller, or changes shape without changing its total pixel count.
    for (const auto color : {0xff000000u, 0xffffffffu}) {
        const auto stable = settle(filter, Image(4, color), 2, 2)[0];
        for (const auto size : {std::array{7, 3}, std::array{3, 7}, std::array{1, 1}, std::array{398, 224}}) {
            const auto resized = filter.apply(Image(size[0] * size[1], color), size[0], size[1], true);
            require(std::all_of(resized.begin(), resized.end(), [&](auto pixel) { return pixel == stable; }),
                    "Resizing a stable enabled scene introduced a flash");
        }
    }
    const auto dark = settle(filter, black, 2, 2)[0];
    const auto transition = filter.apply(Image(7 * 3, 0xffffffffu), 7, 3, true);
    for (const auto pixel : transition) bounded_step(dark, pixel);

    // Verify spatial history survives a resize too, rather than only retaining
    // a scene-wide average. This low-contrast gradient avoids edge-blur changes.
    const Image gradient{0xff404040u, 0xff505050u, 0xff606060u, 0xff707070u};
    const auto old = settle(filter, gradient, 4, 1);
    Image doubled;
    for (const auto pixel : gradient) { doubled.push_back(pixel); doubled.push_back(pixel); }
    const auto expanded = filter.apply(doubled, 8, 1, true);
    for (std::size_t index = 0; index < old.size(); ++index)
        require(expanded[index * 2] == old[index] && expanded[index * 2 + 1] == old[index], "Resize lost localized history");
}

void invalid_dimensions() {
    eb::PhotosensitivityFilter filter, reference;
    const Image pixel(1, 0xff223344u);
    filter.apply(pixel, 1, 1, true);
    reference.apply(pixel, 1, 1, true);
    for (const auto enabled : {false, true}) {
        for (const auto size : {std::array{0, 1}, std::array{-1, 1}, std::array{1, -1},
                               std::array{2, 1}, std::array{4097, 1}, std::array{1, 4097},
                               std::array{std::numeric_limits<int>::max(), std::numeric_limits<int>::max()}}) {
            bool rejected = false;
            try { filter.apply(pixel, size[0], size[1], enabled); }
            catch (const std::invalid_argument&) { rejected = true; }
            require(rejected, "Invalid dimensions or mismatched span were accepted");
        }
        bool rejected = false;
        try { filter.apply({}, 1, 1, enabled); }
        catch (const std::invalid_argument&) { rejected = true; }
        require(rejected, "Empty framebuffer was accepted");
    }
    require(copy(filter.apply(pixel, 1, 1, true)) == copy(reference.apply(pixel, 1, 1, true)), "Rejected input changed filter history");
}
} // namespace

int main() {
    try {
        bypass_and_sizes();
        alternating_flashes(0xff000000u, 0xffffffffu, 8);
        alternating_flashes(0xffffffffu, 0xff000000u, 8);
        alternating_flashes(0xffff0000u, 0xff00ffffu, 32);
        alternating_flashes(0xff00ffffu, 0xffff0000u, 32);
        palette_sequence();
        tone_and_red();
        spatial_patterns_and_text();
        toggles_and_resize();
        invalid_dimensions();
        std::cout << "Photosensitivity filter: bypass, flashes, palettes, patterns, text, resizing and validation passed\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
