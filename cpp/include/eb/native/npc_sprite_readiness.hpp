#pragma once

#include "eb/native/npc_catalog.hpp"
#include "eb/native/sprite_resources.hpp"

namespace eb::native {
struct NpcSpriteReadinessLimits {
  std::size_t images = 4096;
  std::size_t image_bytes = 64 * 1024 * 1024;
};
struct NpcSpriteReadinessStats {
  std::size_t npcs{}, groups{}, images{}, image_bytes{};
  bool operator==(const NpcSpriteReadinessStats &) const = default;
};

// Strong leases for artwork near a viewport, including moving NPCs. This is
// resource preparation only: it has no actor, position/pose prediction, tick,
// RNG, rendering or activation. Source-active identities keep their leases
// until they leave the footprint, allowing the first authored pose to adopt
// the same shared image after logical creation.
class NpcSpriteReadiness {
public:
  void snapshot_io(SnapshotArchive &archive);
  NpcSpriteReadiness(std::span<const std::uint8_t> assets, GameVersion version,
                     std::shared_ptr<SpriteResources> resources,
                     NpcSpriteReadinessLimits limits = {});
  NpcSpriteReadiness(std::shared_ptr<const NpcCatalog> catalog,
                     std::shared_ptr<SpriteResources> resources,
                     NpcSpriteReadinessLimits limits = {});

  // All declared poses, both loader formats and three surfaces are prepared.
  // Existing cache aliases share one strong lease. A failed query/allocation
  // or budget check leaves the old set intact; successful empty queries evict
  // it. The byte budget counts image objects and their vector payloads, not
  // allocator bookkeeping or immutable catalog/geometry shared by the owner.
  void prepare(NpcRectangle footprint, const NpcVisibility &visibility);
  const NpcSpriteReadinessStats &stats() const { return stats_; }
  std::span<const unsigned> groups() const { return groups_; }
  std::span<const std::shared_ptr<const SpriteImage>> images() const {
    return images_;
  }

private:
  std::shared_ptr<const NpcCatalog> catalog_;
  std::shared_ptr<SpriteResources> resources_;
  NpcSpriteReadinessLimits limits_;
  NpcSpriteReadinessStats stats_;
  std::vector<unsigned> groups_;
  std::vector<std::shared_ptr<const SpriteImage>> images_;
};
} // namespace eb::native
