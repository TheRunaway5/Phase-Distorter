#include "eb/native/sprite_image_leases.hpp"
#include <set>
#include <stdexcept>

namespace eb::native {
SpriteImageLeases lease_sprite_images(SpriteResources &resources,
                                      std::span<const unsigned> groups,
                                      SpriteImageLeaseLimits limits) {
  if (!limits.images || !limits.image_bytes)
    throw std::invalid_argument("Sprite image leases require positive limits");
  SpriteImageLeases result;
  std::set<const SpriteImage *> unique;
  for (const auto group : groups)
    for (unsigned frame = 0; frame < resources.definition(group).frames;
         ++frame)
      for (auto format : {SpriteFrameFormat::FourDirection,
                          SpriteFrameFormat::EightDirection})
        for (auto surface : {SpriteSurface::Normal, SpriteSurface::Shallow,
                             SpriteSurface::Deep}) {
          auto image = resources.acquire(group, frame, surface, format);
          if (!unique.insert(image.get()).second)
            continue;
          const auto bytes =
              sizeof(SpriteImage) + image->indices.capacity() +
              image->parts.capacity() * sizeof(SpriteImage::Part) +
              image->canvas->capacity();
          if (result.images.size() >= limits.images ||
              bytes > limits.image_bytes - result.image_bytes)
            throw std::length_error(
                "Sprite image readiness exceeds its budget");
          result.image_bytes += bytes;
          result.images.push_back(std::move(image));
        }
  return result;
}
} // namespace eb::native
