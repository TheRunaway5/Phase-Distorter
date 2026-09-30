#pragma once

#include "eb/native/dialogue/runtime.hpp"
#include "eb/native/world_walking.hpp"
#include <functional>

namespace eb::native {
// Executes an ordered effect intent through the existing sound adapter. A
// throwing or absent adapter cannot acknowledge an effect it did not accept.
using WorldBicycleSound =
    std::function<void(const dialogue::ScriptSoundRequest &)>;

// C048D3 movement only. WorldControl owns previous movement and the subsequent
// trail/camera phase; mount/dismount remain with their actor lifecycle owner.
// All borrowed owners and the sound sink outlive this service. No input poll,
// actor pass, frame, hotspot or door operation belongs in this reducer.
class WorldBicycle {
public:
  WorldBicycle(const WalkingData &, ActorWorld &, const WorldEnemies &,
               npcs::InteractionState &, WorldControlState &, WorldPartyState &,
               dialogue::PromptState &, story::InputState &,
               WorldNavigationState &, WorldInteractionQueue &,
               const WorldCollision &, const WorldMapArea &, WorldBicycleSound);
  WorldBicycle(const WorldBicycle &) = delete;
  WorldBicycle &operator=(const WorldBicycle &) = delete;
  void execute(std::uint16_t previous_movement);
  bool failed() const noexcept { return failed_ || queue_.failed(); }
  bool busy() const noexcept { return executing_; }
  bool uses(const WorldControl &, const WorldWalking &, const WorldEnemies &,
            const story::InputState &, const WorldInteractionQueue &,
            const WorldCollision &, const WorldMapArea &) const noexcept;

private:
  void check() const;
  const WalkingData &data_;
  ActorWorld &actors_;
  const WorldEnemies &enemies_;
  npcs::InteractionState &leader_;
  WorldControlState &control_;
  WorldPartyState &formation_;
  dialogue::PromptState &prompt_;
  story::InputState &input_;
  WorldNavigationState &navigation_;
  WorldInteractionQueue &queue_;
  const WorldCollision &collision_;
  const WorldMapArea &area_;
  WorldBicycleSound sound_;
  bool executing_{}, failed_{};
};
} // namespace eb::native
