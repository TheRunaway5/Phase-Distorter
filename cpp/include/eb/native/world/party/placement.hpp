#pragma once
#include "eb/native/world_party_following.hpp"
#include "eb/native/world_runtime.hpp"

namespace eb::native::world {
// C07B52 prepares and uploads one real party role before selecting the next.
// The caller drives the same Runtime publication/input owner as its parent.
class PartyPlacement {
public:
  PartyPlacement(WorldPartyFollowing &, ActorWorld &, WorldRuntime &,
                 WorldRuntime::Operation *parent = nullptr);
  ~PartyPlacement();
  PartyPlacement(const PartyPlacement &) = delete;
  PartyPlacement &operator=(const PartyPlacement &) = delete;
  dialogue::Progress advance(unsigned work_budget = 256);
  WorldRuntime::Operation *runtime_operation() noexcept { return publication_.get(); }
private:
  ActorWorld &actors_;
  WorldRuntime &runtime_;
  WorldRuntime::Operation *parent_{};
  std::unique_ptr<WorldPartyFollowing::Placement> placement_;
  std::unique_ptr<entities::graphics::Transport::Operation> upload_;
  std::unique_ptr<WorldRuntime::Operation> publication_;
  bool done_{}, executing_{}, failed_{};
};
}
