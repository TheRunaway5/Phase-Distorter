#pragma once
#include "eb/native/actor_world.hpp"
#include "eb/native/party/state.hpp"
#include "eb/native/world_scheduler.hpp"

namespace eb::native {
// C076C8/C0769C. Its actual task remains in the shared four-entry scheduler;
// battle/windows/swirl pause gates and source scan ordering still apply.
class WorldFoodStatus {
public:
    WorldFoodStatus(party::State &, ActorWorld &, WorldScheduler &);
    ~WorldFoodStatus();
    WorldFoodStatus(const WorldFoodStatus &) = delete;
    WorldFoodStatus &operator=(const WorldFoodStatus &) = delete;
    void start(std::uint16_t frames);
    bool uses(const party::State &, const ActorWorld &, const WorldScheduler &) const noexcept;
private:
    friend class WorldScheduler;
    void reset();
    party::State &party_;
    ActorWorld &actors_;
    WorldScheduler &scheduler_;
};
} // namespace eb::native
