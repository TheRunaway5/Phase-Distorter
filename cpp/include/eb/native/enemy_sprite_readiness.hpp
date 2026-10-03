#pragma once
#include "eb/native/enemy_sprite_catalog.hpp"
#include "eb/native/sprite_image_leases.hpp"

namespace eb::native {
// Resource leases for possible encounter artwork. Does not spawn, tick, draw,
// choose encounters or invent current positions. Value copies retain
// independent footprints while sharing immutable imported content and selected
// image owners.
class EnemySpriteReadiness {
public:
  void snapshot_io(SnapshotArchive &archive);
  EnemySpriteReadiness(std::shared_ptr<const EnemySpriteCatalog> catalog,
                       std::shared_ptr<SpriteResources> resources,
                       SpriteImageLeaseLimits limits = {});
  void prepare(EnemySpriteRectangle footprint,
               const EnemySpriteEligibility &state);
  std::span<const unsigned> groups() const { return groups_; }
  const SpriteImageLeases &leases() const { return leases_; }

private:
  std::shared_ptr<const EnemySpriteCatalog> catalog_;
  std::shared_ptr<SpriteResources> resources_;
  SpriteImageLeaseLimits limits_;
  std::vector<unsigned> groups_;
  SpriteImageLeases leases_;
};
} // namespace eb::native
