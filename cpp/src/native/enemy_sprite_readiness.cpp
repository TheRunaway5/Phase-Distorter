#include "eb/native/enemy_sprite_readiness.hpp"
#include <stdexcept>

namespace eb::native {
EnemySpriteReadiness::EnemySpriteReadiness(
    std::shared_ptr<const EnemySpriteCatalog> catalog,
    std::shared_ptr<SpriteResources> resources, SpriteImageLeaseLimits limits)
    : catalog_(std::move(catalog)), resources_(std::move(resources)),
      limits_(limits) {
  if (!catalog_ || !resources_ || !limits.images || !limits.image_bytes)
    throw std::invalid_argument(
        "Enemy sprite readiness requires content and positive limits");
}
void EnemySpriteReadiness::prepare(EnemySpriteRectangle footprint,
                                   const EnemySpriteEligibility &state) {
  auto groups = catalog_->query(footprint, state);
  if (groups == groups_)
    return;
  auto leases = lease_sprite_images(*resources_, groups, limits_);
  groups_.swap(groups);
  leases_.images.swap(leases.images);
  leases_.image_bytes = leases.image_bytes;
}
} // namespace eb::native
