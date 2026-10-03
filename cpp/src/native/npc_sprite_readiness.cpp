#include "eb/native/npc_sprite_readiness.hpp"
#include "eb/native/sprite_image_leases.hpp"
#include "eb/snapshot_archive.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
NpcSpriteReadiness::NpcSpriteReadiness(
    std::span<const std::uint8_t> assets, GameVersion version,
    std::shared_ptr<SpriteResources> resources, NpcSpriteReadinessLimits limits)
    : NpcSpriteReadiness(std::make_shared<const NpcCatalog>(
                             assets, npc_catalog_layout(version)),
                         std::move(resources), limits) {}
NpcSpriteReadiness::NpcSpriteReadiness(
    std::shared_ptr<const NpcCatalog> catalog,
    std::shared_ptr<SpriteResources> resources, NpcSpriteReadinessLimits limits)
    : catalog_(std::move(catalog)), resources_(std::move(resources)),
      limits_(limits) {
  if (!catalog_ || !resources_ || !limits_.images || !limits_.image_bytes)
    throw std::invalid_argument(
        "NPC sprite readiness requires content and positive limits");
}
void NpcSpriteReadiness::prepare(NpcRectangle footprint,
                                 const NpcVisibility &visibility) {
  auto eligibility = visibility;
  // Active IDs suppress graphical previews, not shared resource readiness.
  eligibility.active_npcs = {};
  const auto candidates = catalog_->query(footprint, eligibility);
  std::vector<unsigned> groups;
  groups.reserve(candidates.size());
  for (const auto &candidate : candidates)
    groups.push_back(catalog_->definition(candidate.placement.npc).sprite);
  std::sort(groups.begin(), groups.end());
  groups.erase(std::unique(groups.begin(), groups.end()), groups.end());
  if (groups == groups_) {
    stats_.npcs = candidates.size();
    return;
  }
  NpcSpriteReadinessStats next{candidates.size(), groups.size()};
  auto leases = lease_sprite_images(*resources_, groups,
                                    {limits_.images, limits_.image_bytes});
  next.images = leases.images.size();
  next.image_bytes = leases.image_bytes;
  // No live readiness mutation precedes this nonthrowing commit.
  groups_.swap(groups);
  images_.swap(leases.images);
  stats_ = next;
}
void NpcSpriteReadiness::snapshot_io(SnapshotArchive &archive) {
  archive(limits_.images, limits_.image_bytes, stats_.npcs, stats_.groups,
          stats_.images, stats_.image_bytes, groups_);
  if (archive.loading()) {
    if (!std::is_sorted(groups_.begin(), groups_.end()) ||
        std::adjacent_find(groups_.begin(), groups_.end()) != groups_.end())
      throw std::runtime_error("Invalid snapshot NPC readiness groups");
    auto leases = lease_sprite_images(*resources_, groups_, {limits_.images, limits_.image_bytes});
    if (stats_.groups != groups_.size() || stats_.images != leases.images.size() ||
        stats_.image_bytes != leases.image_bytes)
      throw std::runtime_error("Invalid snapshot NPC readiness statistics");
    images_ = std::move(leases.images);
  }
}
} // namespace eb::native
