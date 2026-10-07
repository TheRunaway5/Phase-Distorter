#include "eb/native/world_food_status.hpp"
#include <stdexcept>

namespace eb::native {
WorldFoodStatus::WorldFoodStatus(party::State &party, ActorWorld &actors, WorldScheduler &scheduler)
    : party_(party),actors_(actors),scheduler_(scheduler) {
    if(party.version()!=actors.version() || !scheduler.uses(actors.appearance_scene()))
        throw std::invalid_argument("Food status requires actual party/actor/scheduler owners");
    scheduler.bind_food_status(*this);
}
WorldFoodStatus::~WorldFoodStatus() { scheduler_.clear_food_status(*this); }
bool WorldFoodStatus::uses(const party::State &party,const ActorWorld &actors,
                           const WorldScheduler &scheduler) const noexcept {
    return &party==&party_ && &actors==&actors_ && &scheduler==&scheduler_;
}
void WorldFoodStatus::start(std::uint16_t frames) {
    if(party_.party_status==3) return;
    if(scheduler_.failed() || !scheduler_.available_slot())
        throw std::logic_error("Food status requires its source task slot; overflowing writes need adjacent phone/demo owners");
    party_.party_status=3;
    for(unsigned role=24;role<30;++role) actors_.set_authored_variable(role,3,5);
    (void)scheduler_.schedule(frames,WorldScheduledCallback::FoodStatusReset);
}
void WorldFoodStatus::reset() {
    party_.party_status=0;
    for(unsigned role=24;role<30;++role) actors_.set_authored_variable(role,3,8);
}
} // namespace eb::native
