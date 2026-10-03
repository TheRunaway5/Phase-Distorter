#include "eb/native/enemy_sprite_readiness.hpp"
#include "eb/snapshot_archive.hpp"
#include <algorithm>
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
void EnemySpriteReadiness::snapshot_io(SnapshotArchive &archive) {
  archive(limits_.images, limits_.image_bytes, groups_, leases_.image_bytes);
  if (archive.loading()) {
    if (!std::is_sorted(groups_.begin(), groups_.end()) ||
        std::adjacent_find(groups_.begin(), groups_.end()) != groups_.end())
      throw std::runtime_error("Invalid snapshot enemy readiness groups");
    auto leases = lease_sprite_images(*resources_, groups_, limits_);
    if (leases.image_bytes != leases_.image_bytes)
      throw std::runtime_error("Invalid snapshot enemy readiness statistics");
    leases_.images = std::move(leases.images);
  }
}
} // namespace eb::native
