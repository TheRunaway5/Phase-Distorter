#pragma once
#include "eb/native/world_startup.hpp"
#include "eb/native/world_doors.hpp"
#include "eb/native/world_movement.hpp"
#include "eb/native/world/party/placement.hpp"
namespace eb::native {
struct WorldPartyRelocationOwners {
  WorldStartupOwners world;
  WorldMapLoadState &map_state;
  WorldPartyFollowing &following;
  const WorldMap &map;
  const WorldMapArea &area;
  const WorldCollision &collision;
  const WorldMovement &movement;
  WorldNavigationState &navigation;
  WorldDoors &doors;
  const WorldPartyFollowingData &following_data;
  const WorldBootstrapData &bootstrap_data;
  SpriteResources &sprites;
  const ActorCreationData &creation_data;
};
// Complete C03FA9: actual terrain/sector inspection, C03A94 party recreation,
// collision/door call, C03F1E trail reset and C07B52 placement. No clock is
// owned here and no input or actor pass is invented for a work-budget yield.
class WorldPartyRelocation {
public:
  class Operation {
  public:
    ~Operation();
    bool advance(unsigned work_budget=256);
    bool complete() const noexcept { return done_; }
    WorldRuntime::Operation *runtime_operation() noexcept {
      return placement_?placement_->runtime_operation():publication_.get();
    }
  private:
    friend class WorldPartyRelocation;
    Operation(WorldPartyRelocation &,CameraPosition,std::uint16_t,WorldRuntime::Operation *parent = nullptr);
    WorldPartyRelocation &owner_;
    CameraPosition center_;
    std::uint16_t direction_{};
    std::unique_ptr<WorldDoors::Operation> door_;
    std::unique_ptr<world::PartyPlacement> placement_;
    std::unique_ptr<RawActorCreation::Operation> creation_;
    std::unique_ptr<entities::graphics::Transport::Operation> upload_;
    std::unique_ptr<WorldRuntime::Operation> publication_;
    AuthoredActorPause pause_;
    ActorTickCallback callback_=ActorTickCallback::None;
    ActorId created_actor_{};
    unsigned position_{},role_{},sprite_{};
    bool hidden_{};
    unsigned phase_{};
    bool done_{},executing_{};
    WorldRuntime::Operation *parent_{};
  };
  explicit WorldPartyRelocation(WorldPartyRelocationOwners);
  std::unique_ptr<Operation> begin(CameraPosition,std::uint16_t direction);
  std::unique_ptr<Operation> begin_nested(CameraPosition,std::uint16_t direction,WorldRuntime::Operation &parent);
  bool busy() const noexcept { return active_!=nullptr; }
  bool failed() const noexcept { return failed_; }
  bool uses(const WorldRuntime &,const ActorWorld &,const party::State &) const noexcept;
private:
  WorldPartyRelocationOwners owners_;
  Operation *active_{};
  bool failed_{};
};
}
