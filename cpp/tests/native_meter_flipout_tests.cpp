#include "eb/native/party/meter_flipout.hpp"
#include <iostream>
#include <stdexcept>
namespace {
unsigned checks{};
void check(bool result,const char *message){++checks;if(!result)throw std::runtime_error(message);}
void run(eb::GameVersion version) {
    eb::native::party::State party(version);
    std::uint16_t mode{};std::uint8_t half=0x81,disabled=0x43;
    eb::native::party::MeterFlipout helper(party,mode,half,disabled);
    check(helper.uses(party,mode,half,disabled),"Flipout lost stable borrowed identity");
    std::uint16_t foreign{};
    check(!helper.uses(party,foreign,half,disabled),"Flipout admitted another clock's mode");
    for(unsigned id=1;id<=6;++id) {
        auto &c=party.character(id);
        c.current_hp=50+id;c.target_hp=100+id;c.current_pp=20+id;c.target_pp=40+id;
        c.hp_fraction=0x1234+id;c.pp_fraction=0x4321+id;c.afflictions[0]=id;
    }
    // All four chosen records participate even when membership is empty.
    helper.apply(1);
    check(mode==1 && !half && !disabled,"Flipout did not resume the actual meter controls");
    for(unsigned id=1;id<=4;++id) {
        const auto &c=party.character(id);
        check(c.current_hp==999 && c.target_hp==999 && !c.current_pp && !c.target_pp,
              "Flipout did not replace chosen HP/PP values");
        check(helper.hp_backups()[id-1]==100+id && helper.pp_backups()[id-1]==40+id,
              "Flipout saved rolling values instead of their targets");
        check(c.hp_fraction==0x1234+id && c.pp_fraction==0x4321+id && c.afflictions[0]==id,
              "Flipout changed fractions or statuses");
        party.character(id).current_hp=700+id;party.character(id).current_pp=10+id;
    }
    helper.apply(0xffff);
    check(mode==0xffff,"Flipout normalized the source mode word");
    for(unsigned id=1;id<=4;++id)
        check(helper.hp_backups()[id-1]==100+id && party.character(id).current_hp==700+id,
              "Repeated enable replaced a live value or retained backup");
    half=disabled=1;helper.apply(0);
    check(!mode && !half && !disabled,"Disable lost meter-control restoration");
    for(unsigned id=1;id<=6;++id) {
        const auto &c=party.character(id);
        check(c.target_hp==100+id && c.target_pp==40+id,"Disable lost saved HP/PP targets");
        check(c.current_hp==(id<=4?700+id:50+id) && c.current_pp==(id<=4?10+id:20+id),
              "Disable reset rolling values or changed a guest");
    }
    party.character(1).target_hp=222;helper.apply(0);
    check(party.character(1).target_hp==222,"Repeated disable restored a stale backup");
}
}
int main(){try{run(eb::GameVersion::US);run(eb::GameVersion::JP);
    std::cout<<"PASS native HP/PP flipout: "<<checks<<" checks\n";
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
