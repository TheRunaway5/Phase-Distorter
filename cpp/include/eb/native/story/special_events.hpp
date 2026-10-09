#pragma once
#include "eb/native/story/scene.hpp"
#include "eb/native/story/party_formation.hpp"
#include "eb/native/battle/action_state.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/native/world_party_following.hpp"
#include "eb/native/world_startup.hpp"
#include "eb/native/party/meter_flipout.hpp"
#include "eb/native/world_maintenance.hpp"
#include "eb/native/world/townmap/scene.hpp"
#include "eb/native/cutscenes/services.hpp"
#include "eb/native/world/party/placement.hpp"

namespace eb::native::story {
struct SpecialEventOwners {
  party::State &party;
  RandomState &random;
  std::span<std::uint8_t> event_flags;
  battle::Roster &roster;
  battle::ActionState &action;
  PartyFormation &formation;
  WorldPartyFollowing &following;
  npcs::Interactions &interactions;
  WorldSessionState &session;
  ActorWorld &actors;
  Scene &scene;
  TickState &clock;
  party::MeterFlipout &meter_flipout;
  WorldMaintenanceState &maintenance;
};
// C1BEFC dispatcher with actual non-cinematic callers. Other authored scene
// IDs reject at admission until their dedicated scene owner is supplied.
// The suspended parent and every borrowed owner outlive the operation.
class SpecialEvents {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    dialogue::Progress advance(unsigned work_budget=4096);
    Scene::Operation *scene() noexcept { return scene_.get(); }
    WorldRuntime::Operation *runtime_operation() noexcept {
      return placement_?placement_->runtime_operation():nullptr;
    }
    PartyFormation::Operation *party_update() noexcept { return party_.get(); }
    cutscenes::Services::Operation *cinematic() noexcept { return cinematic_.get(); }
    world::townmap::Scene::Operation *town_map() noexcept { return town_map_.get(); }
    bool bicycle_dismount_pending() const noexcept { return bicycle_; }
    void respond_bicycle_dismount();
    bool complete() const noexcept { return done_; }
    std::uint16_t result() const;
  private:
    friend class SpecialEvents;
    Operation(SpecialEvents &,std::uint8_t,Scene::Operation &,WorldRuntime::Operation *);
    SpecialEvents &owner_;
    Scene::Operation &parent_;
    std::uint8_t event_{};
    std::uint16_t result_{};
    unsigned phase_{};
    bool done_{},executing_{},bicycle_{};
    std::unique_ptr<Scene::Operation> scene_;
    std::unique_ptr<PartyFormation::Operation> party_;
    std::unique_ptr<world::PartyPlacement> placement_;
    WorldRuntime::Operation *runtime_parent_{};
    std::unique_ptr<world::townmap::Scene::Operation> town_map_;
    std::unique_ptr<cutscenes::Services::Operation> cinematic_;
  };
  SpecialEvents(std::span<const std::uint8_t> image,GameVersion,SpecialEventOwners);
  void bind_town_map(world::townmap::Scene &);
  void bind_cinematics(cutscenes::Services &);
  std::unique_ptr<Operation> begin(std::uint8_t event,Scene::Operation &parent,
                                 WorldRuntime::Operation *runtime_parent=nullptr);
  bool busy() const noexcept { return active_!=nullptr; }
  bool failed() const noexcept { return failed_; }
private:
  SpecialEventOwners owners_;
  std::array<std::uint8_t,6> probabilities_{};
  world::townmap::Scene *town_map_{};
  cutscenes::Services *cinematics_{};
  Operation *active_{};
  bool failed_{};
};
}
