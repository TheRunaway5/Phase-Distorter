// Synthetic image/temporal checks, not Nintendo output or medical validation.
#include "eb/photosensitivity_filter.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
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
Image copy(std::span<const std::uint32_t> pixels) { return {pixels.begin(), pixels.end()}; }
std::uint32_t dim(std::uint32_t pixel, unsigned exposure = 64) {
    auto result = pixel & 0xff000000u;
    for (auto shift : {16u, 8u, 0u})
        result |= ((((pixel >> shift) & 255u) * exposure + 128u) / 256u) << shift;
    return result;
}
void expect_dimmed(std::span<const std::uint32_t> output, const Image& input, const char* message) {
    require(output.size() == input.size(), "Filter changed image dimensions");
    for (std::size_t i = 0; i < input.size(); ++i) require(output[i] == dim(input[i]), message);
}

void automatic_first_flash() {
    for (int width : {256, 398, 522, 1024}) {
        eb::PhotosensitivityFilter filter;
        Image dark(width * 224, 0xff203040u), bright(width * 224, 0x7fffffffu);
        const auto original_dark = dark, original_bright = bright;
        require(copy(filter.apply(dark, width, 224, true)) == dark, "First ordinary image acquired a fade");
        expect_dimmed(filter.apply(bright, width, 224, true), bright,
                      "Untagged full-screen flash did not immediately dim the whole picture");
        require(dark == original_dark && bright == original_bright, "Filter changed input storage");
    }
}

void ordinary_and_disabled_identity() {
    for (const auto size : {std::array{1, 1}, std::array{256, 224}, std::array{398, 224},
                           std::array{1024, 224}, std::array{4096, 1}, std::array{1, 4096}}) {
        eb::PhotosensitivityFilter filter;
        const int width = size[0], height = size[1];
        Image input(std::size_t(width) * height);
        constexpr std::array colors{0x00000000u, 0xffffffffu, 0x80ff0000u, 0xff00ffffu};
        for (std::size_t i = 0; i < input.size(); ++i) input[i] = colors[i % colors.size()];
        for (unsigned frame = 0; frame < 80; ++frame)
            require(copy(filter.apply(input, width, height, true)) == input,
                    "Static saturated art or high-contrast patterns were dimmed");
        for (unsigned frame = 0; frame < 20; ++frame) {
            std::fill(input.begin(), input.end(), frame % 2 ? 0xffffffffu : 0xff000000u);
            const auto original = input;
            require(filter.apply(input, width, height, false).data() == input.data(),
                    "Disabled filter did not return the original span");
            require(input == original, "Disabled filter modified input");
        }
    }
    eb::PhotosensitivityFilter filter;
    Image input(256 * 224);
    for (unsigned frame = 0; frame < 256; ++frame) {
        std::fill(input.begin(), input.end(), 0xff000000u | frame * 0x010101u);
        require(copy(filter.apply(input, 256, 224, true)) == input, "Slow fade triggered flash dimming");
    }
    filter.reset();
    for (unsigned frame = 0; frame < 80; ++frame) {
        std::fill(input.begin(), input.end(), 0xff203040u);
        for (unsigned y = 90; y < 106; ++y)
            for (unsigned x = frame; x < frame + 12; ++x) input[y * 256 + x] = 0xffffffffu;
        require(copy(filter.apply(input, 256, 224, true)) == input, "Small sprite movement triggered dimming");
    }
}

void whole_picture_and_widescreen() {
    for (int width : {256, 398, 522, 1024}) {
        eb::PhotosensitivityFilter filter;
        Image input(width * 224, 0x80204060u);
        filter.apply(input, width, 224, true);
        // A narrow native-center bolt burst cannot be diluted by wide margins.
        const int center = width / 2 - 128;
        for (int y = 0; y < 224; ++y)
            for (int x = center + 100; x < center + 116; ++x) input[y * width + x] = 0xffffffffu;
        expect_dimmed(filter.apply(input, width, 224, true), input,
                      "Localized flash did not dim the entire native/wide picture");
        if (width > 256) {
            filter.reset();
            std::fill(input.begin(), input.end(), 0xff203040u);
            filter.apply(input, width, 224, true);
            for (int y = 0; y < 224; ++y)
                for (int x = 0; x < width / 8; ++x) input[y * width + x] = 0xffffffffu;
            expect_dimmed(filter.apply(input, width, 224, true), input, "Margin flash escaped detection");
        }
    }
}

void color_flicker_and_patterns() {
    for (int width : {256, 398, 522}) {
        eb::PhotosensitivityFilter filter;
        // Almost equal luminance, strongly different palette colors.
        const Image red(width * 224, 0xffff0000u), green(width * 224, 0xff008300u);
        filter.apply(red, width, 224, true);
        for (unsigned frame = 0; frame < 80; ++frame) {
            const auto& input = frame % 2 ? red : green;
            expect_dimmed(filter.apply(input, width, 224, true), input,
                          "Equal-luminance palette flicker escaped automatic detection");
        }
        filter.reset();
        Image checker(width * 224);
        for (unsigned frame = 0; frame < 80; ++frame) {
            for (int y = 0; y < 224; ++y)
                for (int x = 0; x < width; ++x)
                    checker[y * width + x] = (x + y + frame) % 2 ? 0xffffffffu : 0xff000000u;
            const auto result = filter.apply(checker, width, 224, true);
            if (frame) expect_dimmed(result, checker, "Constant-mean moving pattern escaped detection");
        }
        // Moderate color reversals must also be detected across held frames.
        const Image low(width * 224, 0xff646464u), high(width * 224, 0xff94644cu);
        for (unsigned period : {2, 4, 12, 24}) {
            filter.reset();
            filter.apply(low, width, 224, true);
            for (unsigned frame = 0; frame < 80; ++frame) {
                const auto& input = frame % period < period / 2 ? high : low;
                const auto result = filter.apply(input, width, 224, true);
                if (frame < period / 2)
                    require(copy(result) == input, "Moderate one-way change was treated as flicker");
                else expect_dimmed(result, input, "Moderate color flicker across a plateau escaped detection");
            }
        }
        filter.reset(); filter.apply(low, width, 224, true);
        for (unsigned frame = 0; frame <= 12; ++frame) filter.apply(high, width, 224, true);
        require(copy(filter.apply(low, width, 224, true)) == low,
                "A reversal after the flicker window inherited a stale direction");
    }
}

void low_amplitude_palette_reversals() {
    // Authored Kraken/Starman/Giygas palette motion includes one SNES color
    // step (about8 image values), below the stronger flash thresholds.
    for (int width : {256, 398, 522, 1024}) {
        eb::PhotosensitivityFilter filter;
        Image low(width * 224, 0xff202040u), high = low;
        for (int y = 0; y < 224; ++y)
            for (int x = width / 2 - 2; x < width / 2 + 2; ++x)
                high[y * width + x] = 0xff282040u;
        filter.apply(low, width, 224, true);
        require(copy(filter.apply(high, width, 224, true)) == high,
                "A small one-way palette adjustment was treated as flicker");
        expect_dimmed(filter.apply(low, width, 224, true), low,
                      "Low-amplitude repeated palette motion escaped detection");
    }
}

void hold_recovery_and_replay() {
    for (unsigned period : {2, 4, 12, 24}) {
        eb::PhotosensitivityFilter filter, replay;
        Image input(256 * 224, 0xff202020u);
        filter.apply(input, 256, 224, true); replay.apply(input, 256, 224, true);
        for (unsigned frame = 0; frame < 240; ++frame) {
            const bool high = frame % period < period / 2;
            std::fill(input.begin(), input.end(), high ? 0xffffffffu : 0xff202020u);
            const auto result = copy(filter.apply(input, 256, 224, true));
            require(result == copy(replay.apply(input, 256, 224, true)), "Deterministic replay diverged");
            expect_dimmed(result, input, "Repeated battle/warp/status pulses escaped the dimmed state");
        }
    }
    eb::PhotosensitivityFilter filter;
    const Image low(256 * 224, 0xff202020u), high(256 * 224, 0xffffffffu);
    filter.apply(low, 256, 224, true);
    expect_dimmed(filter.apply(high, 256, 224, true), high, "Flash attack was delayed");
    for (unsigned quiet = 1; quiet <= 12; ++quiet)
        expect_dimmed(filter.apply(high, 256, 224, true), high, "Dimming hold released too early");
    for (unsigned step = 1; step <= 48; ++step) {
        const auto result = filter.apply(high, 256, 224, true);
        for (std::size_t i = 0; i < high.size(); ++i)
            require(result[i] == dim(high[i], 64 + step * 4), "Quiet recovery was not gradual and frame-based");
    }
    require(copy(filter.apply(high, 256, 224, true)) == high, "Steady picture did not recover fully");
}

void toggles_resize_and_invalid_inputs() {
    eb::PhotosensitivityFilter filter;
    const Image low(256 * 224, 0xff202020u), high(256 * 224, 0xffffffffu);
    filter.apply(low, 256, 224, true); filter.apply(high, 256, 224, true);
    const Image wider(398 * 224, 0xffffffffu);
    expect_dimmed(filter.apply(wider, 398, 224, true), wider, "Resize lost global exposure history");
    expect_dimmed(filter.apply(high, 256, 224, true), high, "Shrinking lost global exposure history");
    filter.reset(); filter.apply(high, 256, 224, true);
    Image expanded(398 * 224, 0xff000000u);
    for (int y = 0; y < 224; ++y) std::fill_n(expanded.begin() + y * 398 + 71, 256, 0xffffffffu);
    require(copy(filter.apply(expanded, 398, 224, true)) == expanded, "New margins falsely triggered dimming");
    filter.apply(low, 256, 224, true); filter.apply(high, 256, 224, true);
    require(filter.apply(high, 256, 224, false).data() == high.data(), "Disabled picture was not exact");
    require(copy(filter.apply(high, 256, 224, true)) == high, "Re-enable retained old flash history");
    filter.apply(low, 256, 224, true); filter.reset();
    require(copy(filter.apply(high, 256, 224, true)) == high, "Reset retained flash history");
    eb::PhotosensitivityFilter expected;
    expected.apply(high, 256, 224, true);
    for (bool enabled : {false, true}) {
        for (const auto size : {std::array{0, 1}, std::array{-1, 1}, std::array{1, -1},
                               std::array{4097, 1}, std::array{1, 4097}, std::array{2, 2},
                               std::array{std::numeric_limits<int>::max(), std::numeric_limits<int>::max()}}) {
            bool rejected = false;
            try { filter.apply(high, size[0], size[1], enabled); }
            catch (const std::invalid_argument&) { rejected = true; }
            require(rejected, "Invalid framebuffer dimensions were accepted");
        }
        bool rejected = false;
        try { filter.apply({}, 1, 1, enabled); }
        catch (const std::invalid_argument&) { rejected = true; }
        require(rejected, "Empty framebuffer was accepted");
    }
    require(copy(filter.apply(low, 256, 224, true)) == copy(expected.apply(low, 256, 224, true)),
            "Rejected input changed detector history");
}
} // namespace

int main() {
    try {
        automatic_first_flash(); ordinary_and_disabled_identity(); whole_picture_and_widescreen();
        color_flicker_and_patterns(); low_amplitude_palette_reversals();
        hold_recovery_and_replay(); toggles_resize_and_invalid_inputs();
        std::cout << "Automatic filter: immediate/global dimming, colors/patterns, hold/recovery, replay, identity and resizing passed\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
