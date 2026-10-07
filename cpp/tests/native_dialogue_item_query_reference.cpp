// Complete original CC19_21 and DISPLAY_TEXT callers, without interception.
#include "native_dialogue_item_query_fixture.hpp"
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/native/battle/action_state.hpp"
#include "eb/native/dialogue/prepared_message.hpp"
namespace {
using namespace item_query_test;
struct Source {
    eb::SnesBus bus;
    eb::MainCpu65816 cpu;
    unsigned record,helper,display;
    std::uint64_t instructions{};
    explicit Source(const eb::GameAssets &assets):bus(assets.image,assets.version),cpu(bus) {
        const bool jp=assets.version==eb::GameVersion::JP;
        record=jp?0x89c2:0x8650;helper=jp?0xc163c2:0xc16143;display=jp?0xc18913:0xc186b1;
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode=false;cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;cpu.data_bank=0x7e;
        bus.work_ram.fill(0);
    }
    void put(unsigned at,unsigned value){bus.work_ram.at(at)=std::uint8_t(value);bus.work_ram.at(at+1)=std::uint8_t(value>>8);}
    void put32(unsigned at,std::uint32_t value){put(at,value);put(at+2,value>>16);}
    unsigned get(unsigned at)const{return unsigned(bus.work_ram.at(at))|unsigned(bus.work_ram.at(at+1))<<8;}
    std::uint32_t get32(unsigned at)const{return std::uint32_t(get(at))|std::uint32_t(get(at+2))<<16;}
    void call(unsigned entry,bool far,unsigned literal=0) {
        cpu.status_register=eb::MainCpu65816::InterruptDisable;
        cpu.accumulator=0;cpu.x_index=literal;cpu.y_index=0;
        cpu.program_counter=(entry&0xff0000)|0xff00;
        const auto stop=cpu.program_counter+(far?4:3);
        if(far)cpu.execute_instruction<0x22>(entry,4);else cpu.execute_instruction<0x20>(entry&65535,3);
        for(unsigned n=0;n<100000;++n) {
            if(cpu.program_counter==stop) {
                check(cpu.stack_pointer==0x1fff && cpu.direct_page==0x1e00 && cpu.data_bank==0x7e,"Original item query changed its caller ABI");
                return;
            }
            cpu.step_instruction();++instructions;
        }
        throw std::runtime_error("Original item query did not return: "+cpu.describe_registers());
    }
};
void run(const eb::GameAssets &assets) {
    Fixture native(assets.version,assets.image);auto source=std::make_unique<Source>(assets);
    unsigned cases{};
    for(unsigned id=0;id<native.catalog->item_count();++id) {
        for(bool fallback:{true,false}) {
            if(!fallback&&!id)continue;
            const auto literal=fallback?0:std::uint8_t(id);
            const std::uint32_t argument=fallback?0xa5b60000u|id:0x89abcdefu;
            source->put32(source->record+23,0xa5b6c7d8);source->put32(source->record+27,argument);
            source->put(source->record+31,0x91a2);source->put32(source->record+33,0x10203040);
            source->put32(source->record+37,0x50607080);source->put(source->record+41,0x90a0);
            source->call(source->helper,false,literal);
            check(query(native,literal,argument)==source->get32(source->record+23),"Complete CC19_21 working value differs");
            check(source->get32(source->record+27)==argument && source->get(source->record+31)==0x91a2 &&
                  source->get32(source->record+33)==0x10203040 && source->get32(source->record+37)==0x50607080 &&
                  source->get(source->record+41)==0x90a0,"Original item query changed another register");
            source->bus.work_ram[0x7000]=0x19;source->bus.work_ram[0x7001]=0x21;
            source->bus.work_ram[0x7002]=literal;source->bus.work_ram[0x7003]=2;
            source->put32(source->record+23,0x12345678);source->put32(source->cpu.direct_page+14,0x7e7000);
            source->call(source->display,true);
            check(source->get32(source->record+23)==native.state.window().active.working,"Complete DISPLAY_TEXT item query differs");
            ++cases;
        }
    }
    std::cout<<(assets.version==eb::GameVersion::JP?"JP":"US")<<" item query: "<<cases
             <<" complete original helpers and DISPLAY_TEXT callers, "<<source->instructions<<" original instructions\n";
    const bool jp=assets.version==eb::GameVersion::JP;
    eb::native::battle::Roster roster(eb::native::battle::EnemyResources::import(assets.image,assets.version));
    eb::native::battle::ActionState action;action.attacker=7;
    native.windows.bind_battle(roster,action);
    const unsigned battlers=jp?0xa1ae:0x9fac,attacker=jp?0xab72:0xa970;
    const unsigned party=jp?0x9c7f:0x99ce,stride=jp?94:95,items=jp?34:35;
    unsigned inventory_cases{};
    for(unsigned character=1;character<=6;++character)for(unsigned slot=1;slot<=14;++slot)
      for(unsigned fallback=0;fallback<4;++fallback) {
        const auto value=std::uint8_t(character*37+slot);
        native.party.character(character).items[slot-1]=value;
        source->bus.work_ram[party+(character-1)*stride+items+slot-1]=value;
        const auto who=std::uint8_t((fallback&1)?0:character);
        const auto position=std::uint8_t((fallback&2)?0:slot);
        const std::uint32_t working=0xabcd0000u|character,argument=0x12340000u|slot;
        source->bus.work_ram[0x7000]=0x19;source->bus.work_ram[0x7001]=0x19;
        source->bus.work_ram[0x7002]=who;source->bus.work_ram[0x7003]=position;source->bus.work_ram[0x7004]=2;
        source->put32(source->record+23,working);source->put32(source->record+27,argument);
        source->put32(source->cpu.direct_page+14,0x7e7000);source->call(source->display,true);
        native.state.window().active={working,argument,0x91a2};
        d::Conversation conversation(program(assets.version,{0x19,0x19,who,position,2}),native.windows);
        conversation.start(d::EntryId{0});
        while(conversation.advance(fallback&1?1:4096)!=d::Progress::Finished)
            check(!conversation.event(),"Inventory item query emitted an external service");
        check(native.state.window().active.working==source->get32(source->record+23) &&
              native.state.window().active.argument==source->get32(source->record+27) &&
              native.state.window().active.secondary==0x91a2 && conversation.snapshot().returned_cursor==d::Location{0,5},
              "Complete CC19_19 DISPLAY_TEXT caller changed operand fallback or register ordering");
        ++inventory_cases;
      }
    std::cout<<(jp?"JP":"US")<<" inventory number query: "<<inventory_cases<<" complete original DISPLAY_TEXT callers\n";
    unsigned price_cases{};
    for(unsigned item=0;item<native.catalog->item_count();++item)for(bool fallback:{false,true}) {
        if(!fallback && !item)continue;
        const auto literal=std::uint8_t(fallback?0:item);
        const auto argument=0xabcd0000u|item;
        source->bus.work_ram[0x7000]=0x1d;source->bus.work_ram[0x7001]=0x0b;
        source->bus.work_ram[0x7002]=literal;source->bus.work_ram[0x7003]=2;
        source->put32(source->record+23,0x87654321);source->put32(source->record+27,argument);
        source->put32(source->cpu.direct_page+14,0x7e7000);source->call(source->display,true);
        native.state.window().active={0x87654321,argument,0x91a2};
        d::Conversation conversation(program(assets.version,{0x1d,0x0b,literal,2}),native.windows);
        conversation.start(d::EntryId{0});
        while(conversation.advance(1)!=d::Progress::Finished)
            check(!conversation.event(),"Item sell-price query emitted an external service");
        check(native.state.window().active.working==source->get32(source->record+23) &&
            native.state.window().active.argument==argument && conversation.snapshot().returned_cursor==d::Location{0,4},
            "Complete CC1D0B sell-price caller differs");
        ++price_cases;
    }
    std::cout<<(jp?"JP":"US")<<" sell-price query: "<<price_cases<<" complete original DISPLAY_TEXT callers\n";
    source->helper=jp?0xc1721e:0xc16f9f;
    unsigned food{},condiment{},other{};
    for(unsigned item=1;item<native.catalog->item_count();++item) {
        const auto type=native.catalog->item_properties(item).type&0x3c;
        if(type==0x20 && !food)food=item;
        if(type==0x28 && !condiment)condiment=item;
        if(type!=0x28 && !other)other=item;
    }
    check(food && condiment && other,"Actual regional item catalog lacks condiment coverage");
    unsigned condiment_cases{};
    for(unsigned character=1;character<=4;++character)for(unsigned mode=0;mode<17;++mode) {
        auto &inventory=native.party.character(character).items;
        inventory.fill(std::uint8_t(other));
        if(mode<14)inventory[mode]=std::uint8_t(condiment);
        else if(mode==14){inventory[0]=0;inventory[1]=std::uint8_t(condiment);}
        else if(mode==15){inventory[12]=std::uint8_t(condiment);inventory[13]=std::uint8_t(condiment);}
        roster.at(7).id=std::uint16_t(character);
        source->put(attacker,battlers+7*78);source->put(battlers+7*78,character);
        std::copy(inventory.begin(),inventory.end(),source->bus.work_ram.begin()+party+(character-1)*stride+items);
        for(bool fallback:{false,true}) {
            const auto literal=fallback?0:std::uint8_t(food);
            const std::uint32_t argument=fallback?0x12340100u|food:0xffffffff;
            source->put32(source->record+23,0xabcdef01);source->put32(source->record+27,argument);
            source->call(source->helper,false,literal);
            check(query(native,literal,argument,mode&1?1:4096,0x25)==source->get32(source->record+23),
                  "Complete CC19_25 lost low-byte truncation, current attacker or inventory order");
            source->bus.work_ram[0x7000]=0x19;source->bus.work_ram[0x7001]=0x25;source->bus.work_ram[0x7002]=literal;
            source->put32(source->cpu.direct_page+14,0x7e7000);source->put32(source->record+23,0xabcdef01);
            source->call(source->display,true);
            check(source->get32(source->record+23)==native.state.window().active.working,"Complete DISPLAY_TEXT condiment query differs");
            ++condiment_cases;
        }
    }
    d::PreparedMessage prepared(assets.version);native.windows.bind_prepared_message(prepared);
    const unsigned target_name=jp?0x9f90:0x9cf5,attacker_name=jp?0x9f82:0x9cd7;
    unsigned name_cases{};
    for(unsigned length=0;length<prepared.name(d::PreparedName::Target).size();++length)for(unsigned mismatch=0;mismatch<3;++mismatch) {
        std::vector<std::uint8_t> target(length,0x83),actor(length,0x83);
        if(mismatch==1 && length)actor[length-1]=0xfe;
        if(mismatch==2)actor.push_back(0x81);
        prepared.copy_name(d::PreparedName::Target,target);prepared.copy_name(d::PreparedName::Attacker,actor);
        const auto target_bytes=prepared.name(d::PreparedName::Target),actor_bytes=prepared.name(d::PreparedName::Attacker);
        std::copy(target_bytes.begin(),target_bytes.end(),source->bus.work_ram.begin()+target_name);
        std::copy(actor_bytes.begin(),actor_bytes.end(),source->bus.work_ram.begin()+attacker_name);
        source->bus.work_ram[0x7000]=0x1d;source->bus.work_ram[0x7001]=0x20;source->bus.work_ram[0x7002]=2;
        source->put32(source->record+23,0xabcdef01);source->put32(source->cpu.direct_page+14,0x7e7000);
        source->call(source->display,true);
        d::Conversation conversation(program(assets.version,{0x1d,0x20,2}),native.windows);conversation.start(d::EntryId{0});
        while(conversation.advance(1)!=d::Progress::Finished)check(!conversation.event(),"Prepared-name comparison emitted an external service");
        check(native.state.window().active.working==source->get32(source->record+23) && conversation.snapshot().returned_cursor==d::Location{0,3},
              "Complete CC1D20 name comparison or operandless routing differs");
        ++name_cases;
    }
    std::cout<<(jp?"JP":"US")<<" condiment/name queries: "<<condiment_cases<<" complete original condiment helpers/callers, "
             <<name_cases<<" complete original name-comparison callers\n";
}
}
int main(int argc,char **argv){if(argc<2)return 77;try{for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));return 0;}
catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}}
