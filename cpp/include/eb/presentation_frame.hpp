#pragma once

#include <cstdint>
#include <span>
#include <memory>
#include "eb/photosensitivity_filter.hpp"

namespace eb {
struct DirectSceneFrame;
struct DirectScenePicture;
// A borrowed 224-line hardware canvas. Completed-frame callbacks must consume
// this view before returning; the producer can immediately start another frame.
// The same descriptor can describe a partial canvas for diagnostic captures.
struct PresentationFrame {
    std::span<const std::uint32_t> pixels;
    unsigned width{};
    double fixed_aspect{};
    std::uint64_t frame{};
    std::span<const std::uint8_t> effect_mask;
    std::span<const std::uint32_t> effect_reference;
    std::shared_ptr<const DirectSceneFrame> scene;
    FlashFilterContext flashing;
    // Visible battle OBJ and source windows, including fill/border/indicators.
    // These pixels retain their authored colors when reducing flashes.
    std::span<const std::uint8_t> unfiltered_mask;
};

// Host-facing pixels with the aspect hint captured alongside that picture.
struct PresentationPicture {
    std::span<const std::uint32_t> pixels;
    unsigned width{};
    double fixed_aspect{};
    const DirectScenePicture* scene{};
};
} // namespace eb
