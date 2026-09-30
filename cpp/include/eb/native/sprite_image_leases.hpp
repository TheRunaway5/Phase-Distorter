#pragma once
#include "eb/native/sprite_resources.hpp"

namespace eb::native {
struct SpriteImageLeaseLimits {
  std::size_t images = 4096, image_bytes = 64 * 1024 * 1024;
};
struct SpriteImageLeases {
  std::vector<std::shared_ptr<const SpriteImage>> images;
  std::size_t image_bytes{};
};
// Prepare every declared pose, loader format and surface without selecting an
// actor pose. Existing shared-cache aliases retain one strong lease. The caller
// publishes this complete value only after successful preparation. Byte limits
// count image/vector payloads, excluding allocator and shared catalog overhead.
SpriteImageLeases lease_sprite_images(SpriteResources &resources,
                                      std::span<const unsigned> groups,
                                      SpriteImageLeaseLimits limits = {});
} // namespace eb::native
