// Original four-byte creation call, CREATE_ENTITY and INIT_ENTITY. Only the two
// graphics allocators are intercepted, as in the separate creation metadata
// oracle. The newly created task is inspected before it first executes.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_actor_services.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
std::shared_ptr<EnemySpawnData> enemy_data(){auto data=std::make_shared<EnemySpawnData>();data->butterfly_battle=0;data->butterfly_enemy=0;data->battles.resize(1);data->enemies.resize(1);return data;}
std::string context;
void check(bool ok,const char *message){if(!ok)throw std::runtime_error(std::string(message)+": "+context);}
struct Original {
    std::vector<std::uint8_t> image;
    std::unique_ptr<eb::SnesBus> bus;std::unique_ptr<eb::MainCpu65816> cpu;bool jp;unsigned shift,calls{};
    Original(const eb::GameAssets& assets,std::span<const std::uint8_t> code)
      :image(assets.image),jp(assets.version==eb::GameVersion::JP),shift(jp?10:0){
        std::copy(code.begin(),code.end(),image.begin()+0x38000);
        bus=std::make_unique<eb::SnesBus>(image,assets.version);cpu=std::make_unique<eb::MainCpu65816>(*bus);
        cpu->set_runtime(eb::MainCpuRuntime::Legacy);cpu->emulation_mode=false;
        cpu->status_register=eb::MainCpu65816::InterruptDisable;cpu->data_bank=0x7e;cpu->direct_page=0x1e00;cpu->stack_pointer=0x1fff;
    }
    void put(unsigned at,unsigned value){bus->work_ram.at(at)=value;bus->work_ram.at(at+1)=value>>8;}
    unsigned word(unsigned at)const{return bus->work_ram.at(at)|unsigned(bus->work_ram.at(at+1))<<8;}
    void seed(unsigned role,const PreparedActorState&p){
        put(0xa50 - shift,48);put(0xa9e - shift+48,0xffff);put(0xa62 - shift+48,0);
        put(0xa52 - shift,role*2);put(0xa9e - shift+role*2,0xffff);
        put(0xa54 - shift,62);put(0x125a - shift+62,0xffff);
        put(0x1e80,0);put(0x1e88,48);put(0x1e8a,0);put(0x13fe - shift,0x8000);put(0x148a - shift,0xc3);
        put(jp?0x1a38:0x1a42,24);put(0xb8e - shift+48,0x1234);put(0xbca - shift+48,0xfffc);
        put(0xa48 - shift,p.height);for(unsigned i=0;i<8;++i)put(0xa38 - shift+i*2,p.variables[i]);
        put(0xa4a - shift,0xdead);
    }
    void tick(){cpu->program_counter=0xc0ff00;cpu->execute_instruction<0x20>(jp?0x94e5:0x9506,3);
        for(unsigned steps=0;cpu->program_counter!=0xc0ff03||cpu->stack_pointer!=0x1fff;++steps){
            check(steps<100000,"Original creation service exceeded budget");const auto pc=cpu->program_counter|0xc00000u;
            if(pc==(jp?0xc01c68u:0xc01c52u)||pc==(jp?0xc01ab3u:0xc01a9du)){
                ++calls;cpu->accumulator=0;cpu->execute_instruction<0x6b>(0,1);
            }else cpu->step_instruction();
        }
    }
    void compare(const ActorWorld& world,ActorId caller,ActorId child)const{
        const auto &actor=world.actor(child);const unsigned role=*actor.authored_role(),offset=role*2;
        check(calls==2&&world.actor(caller).tasks()[0].temporary==word(0x1516 - shift)&&word(0x1516 - shift)==role,
            "Original/native creation result is not the selected authored role");
        check(actor.script_style()==word(0xa62 - shift+offset)&&actor.appearance.sprite()==word((jp?0x30d4:0x2cd6)+offset),"Creation payload differs");
        const unsigned task=word(0xada - shift+offset);const auto native=actor.tasks().front();
        check(native.cursor==(word(0x148a - shift+task)&0x3f)*65536+word(0x13fe - shift+task)&&
            !word(0x1372 - shift+task)&&!word(0x12e6 - shift+task)&&native.sleep_frames==0&&native.stack_depth==0,
            "Created task entry/defaults differ");
        for(unsigned i=0;i<3;++i)check(actor.action().position[i]==(word(0xb8e - shift+i*60+offset)<<16|word(0xc42 - shift+i*60+offset))&&
            actor.action().velocity[i]==(word(0xcf6 - shift+i*60+offset)<<16|word(0xdaa - shift+i*60+offset)),"Prepared position/fraction/velocity differs");
        for(unsigned i=0;i<8;++i)check(actor.action().variables[i]==word(0xe5e - shift+i*60+offset),"Prepared actor variables were not inherited");
        check(actor.action().priority==word(0x103e - shift+offset)&&actor.action().animation==word(0x10f2 - shift+offset)&&
            actor.behavior.direction==word((jp?0x2ef4:0x2af6)+offset)&&actor.behavior.direction==0&&
            word(0xa9e - shift+48)==offset&&word(0xa4a - shift)==1,"Creation priority/direction/list side effects differ");
        check(word(0x13fe - shift)==0x800c&&word(0x1e94)==0x8008,"Original four-byte operand consumption differs");
    }
};
std::vector<std::uint8_t> code(unsigned helper,unsigned sprite,unsigned script){return {0x42,std::uint8_t(helper),std::uint8_t(helper>>8),std::uint8_t(helper>>16),
    std::uint8_t(sprite),std::uint8_t(sprite>>8),std::uint8_t(script),std::uint8_t(script>>8),0x1f,0,0x06,1,0x09};}
void run(const eb::GameAssets&assets){const bool jp=assets.version==eb::GameVersion::JP;const unsigned helper=jp?0xc0a96a:0xc0a98b;
    const auto imported=import_action_scripts(assets.image,assets.version);auto graphics=std::make_shared<SpriteResources>(assets.image,sprite_catalog_layout(assets.version));
    unsigned cases=0;
    // All six imported C0A98B sites; JP's preceding content is six bytes shorter.
    for(unsigned us_at:{0x362b5u,0x363bbu,0x366d1u,0x367dbu,0x36834u,0x369afu}){
        const unsigned at=us_at-(jp?6:0);context=assets.title+" authored creation site="+std::to_string(at);
        check(assets.image[at]==0x42&&(assets.image[at+1]|unsigned(assets.image[at+2])<<8|unsigned(assets.image[at+3])<<16)==helper,"Authored creation instruction changed");
        const unsigned sprite=assets.image[at+4]|unsigned(assets.image[at+5])<<8,script=assets.image[at+6]|unsigned(assets.image[at+7])<<8;
        check(script!=0,"Fixture needs a distinct creator/child directory index");
        for(unsigned role=0;role<22;++role){context=assets.title+" authored creation="+std::to_string(at)+" role="+std::to_string(role);
            const auto bytes=code(helper,sprite,script);const auto child_entry=imported->entry(script);
            std::vector<std::uint32_t> entries(script+1,child_entry);entries[0]=0x38000;
            // Child execution is outside this boundary. Its real imported
            // directory entry is preserved; a wait marker stops the fixture.
            auto data=std::make_shared<ActionScriptData>(std::vector<ActionScriptBlock>{{0x38000,bytes},{child_entry,{0x09}}},entries);
            ActorWorld world(graphics,data,assets.version);WorldEnemies enemies(enemy_data(),graphics,data);
            WorldActorSpec blocker;blocker.script=script;for(unsigned i=0;i<role;++i)world.create_authored(blocker);
            WorldActorSpec parent;parent.script=0;parent.action.position={0x12341234,0xfffc5678,0xbeef8888};parent.behavior.direction=7;
            const auto caller=*world.create_authored(parent,{24,25});check(world.advance_tick()==WorldTickResult::NeedsEngine,"Native creation request was not reached");
            PreparedActorState p;p.x=44;p.y=55;p.direction=6;p.height=std::uint16_t(0x8100+role);
            for(unsigned i=0;i<8;++i)p.variables[i]=std::uint16_t(0x2300+i*31+role);
            Original source(assets,bytes);source.seed(role,p);source.tick();
            check(fulfill_actor_lifecycle(world,enemies,nullptr,&p),"Native creation service stayed pending");
            source.compare(world,caller,*world.actor_for_role(role));++cases;
        }
    }
    // The original exhaustion path is not a failure-result contract: INIT
    // returns0, then CREATE writes resource metadata into role0 without a live
    // script. Native exhaustion is deliberately a retained request, tested by
    // the unit fixture, and never claims parity with this corrupt source state.
    {context=assets.title+" original role exhaustion negative";
        const auto bytes=code(helper,1,35);Original source(assets,bytes);source.seed(0,{});
        source.put(0xa52 - source.shift,0xffff);source.put(0xa62 - source.shift,0xffff);
        const unsigned sprite_table=jp?0x30d4:0x2cd6;source.put(sprite_table,0xa55a);source.tick();
        check(source.calls==2&&source.word(0x1516 - source.shift)==0&&source.word(0xa62 - source.shift)==0xffff&&
            source.word(sprite_table)==1,"Original exhaustion no longer exhibits the audited invalid role-zero write");
    }
    // Actual source word reads cross the bank for their high byte at FFFF;
    // import rejects this dependency explicitly rather than silently wrapping.
    unsigned boundaries=0;
    for(unsigned cursor:{0xfffcu,0xfffdu,0xfffeu,0xffffu}){
        auto image=assets.image;image[0x3ffff]=0x34;image[0x40000]=0x12;image[0x30000]=0x56;
        eb::SnesBus bus(image,assets.version);eb::MainCpu65816 cpu(bus);cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode=false;cpu.status_register=eb::MainCpu65816::InterruptDisable;cpu.data_bank=0x7e;cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;
        bus.work_ram[0x1e82]=0xc3;cpu.y_index=cursor;cpu.program_counter=0xc0ff00;cpu.execute_instruction<0x22>(jp?0xc09d73:0xc09d94,4);
        for(unsigned steps=0;cpu.program_counter!=0xc0ff04;++steps){check(steps<1000,"Original read16 helper exceeded budget");cpu.step_instruction();}
        const unsigned expected=image[0x30000+cursor]|unsigned(image[0x30001+cursor])<<8;
        check(cpu.accumulator==expected&&cpu.y_index==std::uint16_t(cursor+2),"Original whole-word boundary contract differs");
        ++boundaries;
    }
    std::cout<<"PASS "<<assets.title<<": "<<cases<<" actual authored creation calls, "<<boundaries<<" original whole-word bank edges, explicit exhaustion negative\n";
}
}
int main(int argc,char **argv){try{check(argc>=2,"native_actor_creation_service_reference pack.ebpak ...");
    for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
