#include "native_interaction_test_assets.hpp"
#include "eb/native/world_food_status.hpp"
#include "eb/native/world_maintenance.hpp"
#include <iostream>
#include <stdexcept>
namespace {
using namespace eb::native;
using interaction_test_assets::check;
void test(eb::GameVersion version) {
    interaction_test_assets::Fixture f(version);
    npcs::DadPhoneState phone;
    WorldMaintenanceState maintenance;
    WorldScheduler scheduler(f.windows,f.clock,phone,f.actors.appearance_scene(),maintenance);
    WorldFoodStatus food(f.party,f.actors,scheduler);
    check(food.uses(f.party,f.actors,scheduler),"Food lost actual owners");
    f.party.party_status=1;
    for(unsigned role=0;role<30;++role) f.actors.set_authored_variable(role,3,std::uint16_t(0x8000+role));
    food.start(2);
    check(f.party.party_status==3,"Food status not installed");
    for(unsigned role=0;role<30;++role)
        check(f.actors.authored_variable(role,3)==(role<24?0x8000+role:5),"Food changed wrong role var");
    check(scheduler.tasks()[0]==WorldScheduledTask{2,WorldScheduledCallback::FoodStatusReset},"Food task not scheduled in actual owner");
    const auto retained=scheduler.tasks();
    food.start(999);
    check(scheduler.tasks()==retained,"Repeated food restarted expiry");
    f.windows.prompt_state().battle_mode=1;
    scheduler.process_frame();
    check(scheduler.tasks()==retained,"Battle failed to pause food task");
    f.windows.prompt_state().battle_mode=0;
    scheduler.process_frame();
    check(f.party.party_status==3 && scheduler.tasks()[0].frames_left==1,"Food expired early");
    scheduler.process_frame();
    check(f.party.party_status==0,"Food expiry did not clear status");
    for(unsigned role=0;role<30;++role)
        check(f.actors.authored_variable(role,3)==(role<24?0x8000+role:8),"Food reset changed wrong retained role");
    food.start(0);
    scheduler.process_frame();
    check(f.party.party_status==3 && scheduler.tasks()[0].frames_left==0,"Zero-delay source task became active");
    check(f.clock.publications==0 && f.clock.input_polls==0,"Food consumed simulation input/frame");
}
}
int main() {
    try { for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}) test(version);
        std::cout<<"PASS native shared food-status timer\n";
    } catch(const std::exception &error) { std::cerr<<error.what()<<'\n'; return 1; }
}
