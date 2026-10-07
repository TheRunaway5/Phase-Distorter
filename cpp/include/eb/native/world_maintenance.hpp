#pragma once

#include "eb/native/actor_creation.hpp"
#include "eb/native/party/inventory.hpp"
#include "eb/native/world_control.hpp"
#include "eb/native/world_interaction_queue.hpp"
#include "eb/native/world_palette_animation.hpp"

namespace eb::native {
class WorldScenePresentation;
struct WorldMaintenanceState {
  std::uint16_t possessed_players{};
  std::optional<ActorId> possession_actor;
  std::uint16_t enemy_touched{};
  std::uint16_t last_sector_x{}, last_sector_y{}, auto_sector_music{};
  std::uint16_t overworld_status_suppression{};
  // CURRENT_PARTY_MEMBER_TICK: selected CHOSEN_FOUR_PTRS record, retained
  // even when its current affliction suppresses the random status check.
  std::optional<unsigned> current_party_member_tick;
};
// Complete INFLICT_SUNSTROKE_CHECK, including its retained accumulator result.
std::uint16_t inflict_sunstroke_check(party::State &, const WorldControlState &,
                                     WorldMaintenanceState &, story::RandomState &);

struct PossessionActorContent {
  unsigned sprite = 264, script = 786;
};
enum class WorldMaintenanceService {
  ItemTransformations,
  Control,
  SectorMusic
};
struct WorldMaintenanceRequest {
  WorldMaintenanceService kind{};
  std::optional<WorldControlRequest> control;
  bool operator==(const WorldMaintenanceRequest &) const = default;
};

// The source EVENT1/C05200 maintenance callback. The actual scene invokes it
// once in the actor tick phase; display frames and budget yields never do.
// Animation, possession actor lifecycle, shared control/trail work, sector
// tracking, phone queueing and cached follower inputs retain source order.
// Item transformations, control modes and sector-music transitions are explicit
// services; music playback stays in the existing audio adapter.
class WorldMaintenance {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    bool advance(unsigned work_budget = 256);
    const std::optional<WorldMaintenanceRequest> &request() const {
      return request_;
    }
    void respond();
    bool complete() const { return complete_; }

  private:
    friend class WorldMaintenance;
    explicit Operation(WorldMaintenance &);
    WorldMaintenance &owner_;
    std::unique_ptr<WorldControl::Operation> control_;
    std::optional<WorldMaintenanceRequest> request_;
    unsigned phase_{};
    bool complete_{};
  };
  WorldMaintenance(dialogue::WindowHost &, WorldControl &,
                   WorldMaintenanceState &, party::ItemTransformationState &,
                   WorldInteractionQueue &, WorldMapArea &, AreaPalettes &,
                   AreaPaletteAnimation &, PreparedActorState &,
                   PossessionActorContent = {});
  WorldMaintenance(const WorldMaintenance &) = delete;
  WorldMaintenance &operator=(const WorldMaintenance &) = delete;
  std::unique_ptr<Operation> begin();
  void bind_presentation(WorldScenePresentation &);
  bool busy() const { return active_ != nullptr || control_.busy(); }
  bool failed() const {
    return failed_ || control_.failed() || queue_.failed();
  }

private:
  void check() const;
  void possession();
  void phone();
  dialogue::WindowHost &windows_;
  WorldControl &control_;
  WorldMaintenanceState &state_;
  party::ItemTransformationState &items_;
  npcs::InteractionQueue &queue_;
  npcs::DadPhoneState &phone_;
  const dialogue::ReferenceKey dad_message_;
  WorldMapArea &area_;
  AreaPalettes &palettes_;
  AreaPaletteAnimation &animation_;
  WorldScenePresentation *presentation_{};
  PreparedActorState &prepared_;
  PossessionActorContent possession_content_;
  Operation *active_{};
  bool failed_{};
};
} // namespace eb::native
