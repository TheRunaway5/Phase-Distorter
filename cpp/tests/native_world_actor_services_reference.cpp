// Actual authored interpreter and lifecycle helpers. Only graphics freeing,
// image upload and final actor-list unlink are intercepted domain boundaries;
// their native implementations have independent allocation/appearance/role
// references. Task sleep, return values and release bookkeeping run as source.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_actor_services.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
using namespace eb::native;
std::string context;
void check(bool ok,const char *message){if(!ok)throw std::runtime_error(std::string(message)+": "+context);}
struct Layout {unsigned tick,current,cursor,bank,sleep,temp,animation,script,npc,enemy,sprite,count,butterfly,release,free_map,free_art,unlink,select,retention,speed;};
constexpr Layout us{0xc09506,0x1a42,0x13fe,0x148a,0x1372,0x1516,0x10f2,0xa62,0x2c9a,0x2d12,0x2cd6,0x4a5c,0x4a60,
    0xc020f1,0xc01b15,0xc01c11,0xc09c3b,0xc0a4c4,0xc0c6b6,0x9f47};
constexpr Layout jp{0xc094e5,0x1a38,0x13f4,0x1480,0x1368,0x150c,0x10e8,0xa58,0x3098,0x3110,0x30d4,0x4de2,0x4de6,
    0xc020ff,0xc01b2b,0xc01c27,0xc09c1a,0xc0a4a3,0xc0c698,0xa149};
struct Oracle {
    std::vector<std::uint8_t> image;
    std::unique_ptr<eb::SnesBus> bus;std::unique_ptr<eb::MainCpu65816> cpu;Layout l;unsigned role{};
    bool ended{};unsigned uploads{},releases{},upload_direction{},upload_phase{};
    Oracle(const eb::GameAssets &assets,std::span<const std::uint8_t> bytes,unsigned actor_role,bool enemy=false)
      :image(assets.image),l(assets.version==eb::GameVersion::JP?jp:us),role(actor_role){
        std::copy(bytes.begin(),bytes.end(),image.begin()+0x38000);bus=std::make_unique<eb::SnesBus>(image,assets.version);cpu=std::make_unique<eb::MainCpu65816>(*bus);
        cpu->set_runtime(eb::MainCpuRuntime::Legacy);cpu->emulation_mode=false;cpu->status_register=eb::MainCpu65816::InterruptDisable;
        cpu->data_bank=0x7e;cpu->direct_page=0x1e00;cpu->stack_pointer=0x1fff;
        put(l.cursor,0x8000);put(l.bank,0xc3);put(l.animation+role*2,0xffff);put(l.current,role);put(l.script+role*2,0);
        put(l.npc+role*2,enemy?0x8000:42);put(l.enemy+role*2,enemy?225:0xffff);put(l.sprite+role*2,1);
        put(l.count,enemy);put(l.butterfly,enemy);
    }
    unsigned word(unsigned at)const{return bus->work_ram[at]|unsigned(bus->work_ram[at+1])<<8;}
    void put(unsigned at,unsigned value){bus->work_ram[at]=value;bus->work_ram[at+1]=value>>8;}
    void position(unsigned x,unsigned y,ActorRetentionArea area){const auto &p=eb::source_profile(bus->game_version());
        put(p.wram_entity_world_coordinates.x+role*2,x);put(p.wram_entity_world_coordinates.y+role*2,y);
        put(p.party_state.leader_x,area.leader_x);put(p.party_state.leader_y,area.leader_y);put(l.speed,area.teleport_speed);}
    void tick(){put(0x1e80,0);put(0x1e88,role*2);put(0x1e8a,0);
        cpu->program_counter=0xc0ff00;cpu->execute_instruction<0x20>(l.tick&0xffff,3);
        for(unsigned steps=0;cpu->program_counter!=0xc0ff03||cpu->stack_pointer!=0x1fff;++steps){
            check(steps<100000,"Source lifecycle tick exceeded budget");
            const auto pc=cpu->program_counter|0xc00000u;const auto offset=pc-l.retention;
            if(pc==l.free_map||pc==l.free_art){++releases;cpu->execute_instruction<0x6b>(0,1);}
            else if(pc==l.unlink){ended=true;put(l.script+role*2,0xffff);cpu->execute_instruction<0x60>(0,1);}
            else if(pc==l.select){++uploads;
                const bool jp=bus->game_version()==eb::GameVersion::JP;
                upload_direction=word((jp?0x2ef4:0x2af6)+cpu->y_index);upload_phase=word(jp?0x2c90:0x2892);
                cpu->accumulator=0x4321;cpu->execute_instruction<0x6b>(0,1);}
            else if(offset==0x3d||offset==0x42||offset==0x47||offset==0x4c){
                const auto at=pc-0xc00000;const auto opcode=offset<0x47?0xc9u:0xe0u;
                const auto operand=offset==0x3d||offset==0x47?0xffc0u:320u;
                check(image[at]==opcode&&(image[at+1]|unsigned(image[at+2])<<8)==operand,"Authored retention instruction changed");
                if(opcode==0xc9)cpu->execute_instruction<0xc9>(operand,3);else cpu->execute_instruction<0xe0>(operand,3);
            }else cpu->step_instruction();
        }
    }
    void compare(const ActorWorld &world,ActorId id)const{
        const auto &actor=world.actor(id);const auto task=actor.tasks().at(0);
        check(task.cursor==0x30000+word(l.cursor)&&task.sleep_frames==word(l.sleep)&&task.temporary==word(l.temp)&&
              actor.action().animation==word(l.animation+role*2),"Native lifecycle task/animation state differs");
    }
};
std::shared_ptr<EnemySpawnData> enemy_data(){auto data=std::make_shared<EnemySpawnData>();
    data->enemies.resize(226);data->enemies[225]={1,0,7,0};data->butterfly_enemy=225;data->butterfly_battle=0;
    data->battles={{{1,225}}};data->encounters={EnemySpawnEncounter{},EnemySpawnEncounter{0,{100,0},std::vector<unsigned>(8,0)}};return data;}
void native_tick(ActorWorld &world,WorldEnemies &enemies,const ActorRetentionArea *area=nullptr){
    for(unsigned calls=0;;++calls){check(calls<10,"Native lifecycle request loop exceeded budget");
        const auto result=world.advance_tick();if(result==WorldTickResult::Complete)return;
        check(result==WorldTickResult::NeedsEngine&&fulfill_actor_lifecycle(world,enemies,area),"Native lifecycle request was not fulfilled");}
}
void run(const eb::GameAssets &assets){auto sprites=std::make_shared<SpriteResources>(assets.image,sprite_catalog_layout(assets.version));
    const auto l=assets.version==eb::GameVersion::JP?jp:us;unsigned ticks=0,retention=0;
    for(unsigned role=0;role<30;++role)for(unsigned opcode:{0x42,0xf5})for(bool prefix:{false,true}){
        std::vector<std::uint8_t> code;if(prefix)code={0x06,2};
        code.insert(code.end(),{std::uint8_t(opcode),0x23,0,0xc4,0x3b,0x5a,0x06,1,0x09});
        auto scripts=std::make_shared<ActionScriptData>(code,0x38000,std::vector<std::uint32_t>{0x38000});
        ActorWorld world(sprites,scripts,assets.version);WorldEnemies enemies(enemy_data(),sprites,scripts);
        const auto id=*world.create_authored(make_actor_spec(1,0,{},*sprites,*scripts),{role,role+1});Oracle source(assets,code,role);
        for(unsigned tick=0;tick<20;++tick){context=assets.title+" stagger role="+std::to_string(role)+" opcode="+std::to_string(opcode)+" prefix="+std::to_string(prefix)+" tick="+std::to_string(tick);
            source.tick();native_tick(world,enemies);source.compare(world,id);++ticks;}
    }
    for(unsigned call:{l.retention,0xc40015u})for(unsigned role:{0,17,29})for(unsigned speed:{0,4})
        for(int delta:{-65,-64,0,319,320}){
            std::vector<std::uint8_t> code{0x42,std::uint8_t(call),std::uint8_t(call>>8),std::uint8_t(call>>16),0x06,1,0x09};
            auto scripts=std::make_shared<ActionScriptData>(code,0x38000,std::vector<std::uint32_t>{0x38000});
            ActorWorld world(sprites,scripts,assets.version);WorldEnemies enemies(enemy_data(),sprites,scripts);
            PreparedActorState prepared;prepared.x=std::uint16_t(1000-128+delta);prepared.y=1000;prepared.direction=6;
            const auto id=*world.create_authored(make_actor_spec(1,0,prepared,*sprites,*scripts),{role,role+1});
            world.actor(id).action().animation=1;ActorRetentionArea area{1000,1000,std::uint16_t(speed)};
            Oracle source(assets,code,role);source.position(prepared.x,prepared.y,area);source.put(l.animation+role*2,1);source.put((assets.version==eb::GameVersion::JP?0x2ef4:0x2af6)+role*2,6);
            context=assets.title+" retention helper="+std::to_string(call)+" delta="+std::to_string(delta);
            source.tick();native_tick(world,enemies,&area);source.compare(world,id);
            if(call==0xc40015)check(source.uploads==1&&source.upload_direction==6&&source.upload_phase==0&&world.actor(id).appearance.displayed()->pose==four_direction_pose(source.upload_direction,source.upload_phase),"Refresh/retention pose stage differs");
            ++retention;
        }
    {const auto imported=import_action_scripts(assets.image,assets.version);const auto start=imported->entry(35);
        std::vector<std::uint8_t> code;for(unsigned i=0;i<5;++i)code.push_back(imported->byte(start+i));
        check(code==std::vector<std::uint8_t>({0x42,std::uint8_t(l.release),std::uint8_t(l.release>>8),std::uint8_t(l.release>>16),0}),"Authored EVENT35 changed");
        auto scripts=std::make_shared<ActionScriptData>(code,0x38000,std::vector<std::uint32_t>{0x38000});
        ActorWorld world(sprites,scripts,assets.version);WorldEnemies enemies(enemy_data(),sprites,scripts,{0,0,10});
        enemies.begin_cell(world,1,1,1,8,8,{});while(enemies.busy()){
            if(std::holds_alternative<EnemyRandomRequest>(*enemies.request()))enemies.respond_random(world,0);else enemies.respond_terrain(world,0);}
        Oracle source(assets,code,0,true);context=assets.title+" actual EVENT35";source.tick();native_tick(world,enemies);
        check(source.ended&&source.releases==2&&source.word(l.npc)==0xffff&&source.word(l.sprite)==0xffff&&
              !source.word(l.count)&&!source.word(l.butterfly)&&world.size()==0&&!enemies.population().count&&!enemies.population().butterfly_spawned,
              "EVENT35 lifecycle/accounting differs");enemies.synchronize_lifetimes(world);check(enemies.actors().empty(),"EVENT35 left stale native metadata");}
    std::cout<<"PASS "<<assets.title<<": "<<ticks<<" exact interpreter stagger ticks, "<<retention<<" retention/refresh calls, actual enemy EVENT35 release+End\n";
}
}
int main(int argc,char **argv){try{check(argc>=2,"native_world_actor_services_reference pack.ebpak ...");
    for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
