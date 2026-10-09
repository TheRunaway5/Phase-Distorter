#pragma once
#include "eb/scene_read_view.hpp"
#include <optional>

namespace eb {
struct SourceTaskContentProof {
  bool movement{}, contextual{};
  friend bool operator==(SourceTaskContentProof, SourceTaskContentProof) = default;
};
// Derived once by the immutable compatibility content owner, never archived.
SourceTaskContentProof verify_source_task_content(std::span<const std::uint8_t> assets,
                                                 GameVersion version);
// Read-only admission proof for the source's shared22-role/70-task pools.
// Account for workers which real CREATE has queued but has not yet started.
class SourceEntityAdmission {
public:
  static bool ordinary_world(const SceneReadView &view);
  static std::optional<SourceEntityAdmission> inspect(const SceneReadView &view);
  // Extra NPC simulation admits verified walking and passive traffic families.
  // Other programs keep their original source activation until their task
  // lifetime is proven; no generic script interpreter or dormant pose is used.
  static std::optional<unsigned> moving_npc_tasks(const SceneReadView &view, unsigned npc);
  static std::optional<unsigned> script_task_demand(const SceneReadView &view, unsigned script);
  bool has_capacity() const { return free_roles_ && free_tasks_; }
  bool can_admit_extra_npc(unsigned total_tasks) const;
  bool can_admit_enemy_group(unsigned roles, unsigned total_tasks) const;
  unsigned remaining_enemies() const { return remaining_enemies_; }
private:
  unsigned free_roles_{}, free_tasks_{}, pending_workers_{};
  unsigned canonical_roles_{}, canonical_tasks_{}, remaining_enemies_{}, enemy_tasks_{};
};
} // namespace eb
