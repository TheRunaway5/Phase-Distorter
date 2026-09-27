// These asset-free tests measure selective picture processing, not medical risk.
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
using Mask = std::vector<std::uint8_t>;
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
int channel(std::uint32_t pixel, unsigned shift) { return int((pixel >> shift) & 255); }
Image copy(std::span<const std::uint32_t> pixels) { return {pixels.begin(), pixels.end()}; }

void ordinary_picture_identity() {
    eb::PhotosensitivityFilter filter;
    for (const auto size : {std::array{1, 1}, std::array{256, 224}, std::array{398, 224},
                           std::array{522, 224}, std::array{1024, 224},
                           std::array{4096, 1}, std::array{1, 4096}}) {
        const int width = size[0], height = size[1];
        Image input(std::size_t(width) * height);
        Mask inactive(input.size());
        // Moving high-contrast stripes, red/white sprites and text-like edges
        // must stay exact from the first enabled frame. No settling allowance.
        for (int frame = 0; frame < 12; ++frame) {
            for (std::size_t i = 0; i < input.size(); ++i) {
                constexpr std::array colors{0x00000000u, 0xffffffffu, 0x80ff0000u, 0xff00ffffu};
                input[i] = colors[(i + frame) % colors.size()];
            }
            const auto before = input;
            const auto off = filter.apply(input, width, height, false);
            require(off.data() == input.data(), "Disabled path must return the original span");
            require(copy(filter.apply(input, width, height, true)) == before, "No-metadata picture changed");
            require(copy(filter.apply(input, width, height, true, inactive, input)) == before,
                    "Unmarked ordinary art, text or motion changed");
            require(input == before, "Filter modified its input");
        }
    }
}

void first_flash_and_locality() {
    constexpr int width = 16, height = 8;
    Image scene(width * height, 0xff203040u), flash = scene;
    Mask mask(scene.size());
    for (int y = 1; y < 7; ++y) {
        const int i = y * width + 7;
        mask[i] = 1;
        flash[i] = 0x7fffffffu;
    }
    const auto original = flash, original_scene = scene;
    eb::PhotosensitivityFilter filter;
    const auto first = copy(filter.apply(flash, width, height, true, mask, scene));
    for (std::size_t i = 0; i < scene.size(); ++i) {
        if (!mask[i]) require(first[i] == scene[i], "Effect altered a pixel outside its mask");
        else {
            require((first[i] >> 24) == (flash[i] >> 24), "Effect changed source alpha");
            for (const auto shift : {16u, 8u, 0u})
                require(channel(first[i], shift) == channel(scene[i], shift) + 8,
                        "First lightning pulse was not moderated against the current clean scene");
        }
    }
    require(flash == original && scene == original_scene, "An effect input/reference was modified");
    // When an effect ends, ordinary pixels recover immediately without ghosts.
    const Mask empty(mask.size());
    require(copy(filter.apply(scene, width, height, true, empty, scene)) == scene,
            "Finished effect left trails on ordinary pixels");
}

void flash_sequences() {
    // Exercise bright/dark and saturated color pulses at several cadences and
    // duty cycles. Bounds concern the effect residual, not unrelated motion.
    for (int period : {2, 4, 12, 24}) {
        eb::PhotosensitivityFilter filter, replay;
        Image scene(6, 0xff808080u), input(6), previous = scene;
        const Mask mask(6, 1);
        for (int frame = 0; frame < 180; ++frame) {
            const bool high = frame % period < period / 2;
            input = {high ? 0xffffffffu : 0xff000000u, high ? 0xffff0000u : 0xff00ffffu,
                     0xffffffffu, 0xff000000u, high ? 0xffff0000u : scene[4], scene[5]};
            const auto result = copy(filter.apply(input, 3, 2, true, mask, scene));
            require(result == copy(replay.apply(input, 3, 2, true, mask, scene)), "Replay diverged");
            for (std::size_t i = 0; i < result.size(); ++i)
                for (auto shift : {16u, 8u, 0u}) {
                    require(std::abs(channel(result[i], shift) - channel(scene[i], shift)) <= 32,
                            "Effect contrast exceeded one quarter of its original range");
                    require(std::abs(channel(result[i], shift) - channel(previous[i], shift)) <= 8,
                            "Effect residual changed by more than eight channel values");
                }
            previous = result;
        }
    }
}

void moving_reference() {
    eb::PhotosensitivityFilter filter;
    const Mask mask{1, 0};
    // Constant +80 flash contribution over a sharply moving background. Once
    // settled, its reduced +20 must follow that background without lagging it.
    for (int frame = 0; frame < 80; ++frame) {
        const int base = frame % 2 ? 20 : 150;
        const Image reference{0xff000000u | std::uint32_t(base * 0x010101), 0xffff0000u};
        const Image input{0xff000000u | std::uint32_t((base + 80) * 0x010101), 0xffff0000u};
        const auto result = filter.apply(input, 2, 1, true, mask, reference);
        require(result[1] == input[1], "Unmarked sprite was desaturated");
        if (frame > 30)
            require(channel(result[0], 16) == base + 20, "Underlying scene motion was smoothed");
    }
}

void toggles_and_resize() {
    eb::PhotosensitivityFilter filter, fresh;
    const Image black(4, 0xff000000u), white(4, 0xffffffffu);
    const Mask active(4, 1);
    for (int i = 0; i < 40; ++i) filter.apply(white, 4, 1, true, active, black);
    require(filter.apply(white, 4, 1, false).data() == white.data(), "Disable did not restore exact picture");
    require(copy(filter.apply(white, 4, 1, true, active, black)) ==
            copy(fresh.apply(white, 4, 1, true, active, black)), "Re-enable retained old effect history");
    filter.reset(); fresh.reset();
    require(copy(filter.apply(white, 4, 1, true, active, black)) ==
            copy(fresh.apply(white, 4, 1, true, active, black)), "Reset retained effect history");
    for (int i = 0; i < 40; ++i) filter.apply(white, 4, 1, true, active, black);
    const auto wide = copy(filter.apply(Image(8, 0xffffffffu), 8, 1, true, Mask(8, 1), Image(8, 0xff000000u)));
    for (int x = 0; x < 8; ++x)
        require(channel(wide[x], 16) == (x >= 2 && x < 6 ? 64 : 8), "Resize stretched history instead of centering it");
    require(copy(filter.apply(white, 4, 1, true, active, black)) == Image(4, 0xff404040u),
            "Shrinking lost the native-center effect history");
    require(copy(filter.apply(Image(8, 0xffffffffu), 8, 1, true)) == Image(8, 0xffffffffu),
            "Ordinary resized art acquired a neutral fade");
}

void invalid_inputs() {
    eb::PhotosensitivityFilter filter, reference;
    const Image input{0xffffffffu}, base{0xff000000u};
    const Mask mask{1};
    filter.apply(input, 1, 1, true, mask, base);
    reference.apply(input, 1, 1, true, mask, base);
    const auto rejects = [](auto operation) {
        bool rejected = false;
        try { operation(); } catch (const std::invalid_argument&) { rejected = true; }
        require(rejected, "Invalid input was accepted");
    };
    for (bool enabled : {false, true}) {
        for (const auto size : {std::array{0, 1}, std::array{-1, 1}, std::array{1, -1},
                               std::array{2, 1}, std::array{4097, 1}, std::array{1, 4097},
                               std::array{std::numeric_limits<int>::max(), std::numeric_limits<int>::max()}})
            rejects([&] { filter.apply(input, size[0], size[1], enabled); });
        rejects([&] { filter.apply({}, 1, 1, enabled); });
        rejects([&] { filter.apply(input, 1, 1, enabled, mask); });
        rejects([&] { filter.apply(input, 1, 1, enabled, {}, base); });
        rejects([&] { filter.apply(input, 1, 1, enabled, Mask{1, 1}, base); });
    }
    require(copy(filter.apply(input, 1, 1, true, mask, base)) ==
            copy(reference.apply(input, 1, 1, true, mask, base)), "Rejected input changed history");
}
} // namespace

int main() {
    try {
        ordinary_picture_identity(); first_flash_and_locality(); flash_sequences();
        moving_reference(); toggles_and_resize(); invalid_inputs();
        std::cout << "Selective filter: ordinary identity, effect locality, flashes, moving reference, resizing and validation passed\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
