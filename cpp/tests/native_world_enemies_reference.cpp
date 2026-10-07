// Differential of the original spawn controllers. RAND, shape terrain and
// CREATE/failed DELETE are explicit domain boundaries shared by both runs;
// all selection, placement arithmetic and population/identity writes execute
// the original authored instructions. Actor creation/lifetime internals have
// their separate native_actor_creation/roles/world_activation references.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_enemies.hpp"
#include "eb/native/action_program.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <stdexcept>

namespace {
using namespace eb::native;
std::string context;
void check(bool ok,const char *message){if(!ok)throw std::runtime_error(std::string(message)+": "+context);}
struct Layout {
    unsigned row,column,select,random,create,terrain,erase,counter,count,maximum,butterfly,tileset,scripts,flags,piracy;
    unsigned width,height,encounter,chance,battle,name,sprite,remaining,failures,npc,enemy,cell,path,weakness,x,y;
    unsigned debug,debug_mode,debug_enemies,enabled;
};
constexpr Layout us{0xc02a6b,0xc02b55,0xc02668,0xc08e9a,0xc01e49,0xc05f33,0xc02140,
    0x4a7a,0x4a5c,0x4a5e,0x4a60,0x436e,0xa62,0x9c08,0xb539,
    0x4a62,0x4a64,0x4a6c,0x4a70,0x4a72,0x4a76,0x4a74,0x4a6e,0x4a68,
    0x2c9a,0x2d12,0x2d4e,0x2c5e,0x3186,0xb8e,0xbca,0x436c,0xb559,0xb575,0x4a5a};
constexpr Layout jp{0xc02a7b,0xc02b65,0xc02676,0xc08e8b,0xc01e5f,0xc06161,0xc0214e,
    0x4e00,0x4de2,0x4de4,0x4de6,0x46f4,0xa58,0x9eb3,0xb6ea,
    0x4de8,0x4dea,0x4df2,0x4df6,0x4df8,0x4dfc,0x4dfa,0x4df4,0x4dee,
    0x3098,0x3110,0x314c,0x305c,0x3584,0xb84,0xbc0,0x46f2,0xb70a,0xb726,0x4de0};
using Event=std::array<unsigned,5>;
struct Inputs {
    unsigned cursor{},seed{},terrain{},probes{},first_draw{};
    std::uint8_t random(){const auto n=cursor++;if(n==0)return first_draw;if(n==1)return seed&7;
        return std::uint8_t(seed+n*73+41);}
    unsigned surface(){++probes;return terrain==0x100?(probes<=2?0xd0:0):terrain;}
};
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;Layout l;unsigned return_pc{};
    std::vector<unsigned> free_roles;std::vector<Event> events;Inputs inputs;
    explicit Oracle(const eb::GameAssets &assets):bus(std::make_unique<eb::SnesBus>(assets.image,assets.version)),cpu(*bus),
        l(assets.version==eb::GameVersion::JP?jp:us){cpu.set_runtime(eb::MainCpuRuntime::Legacy);}
    unsigned word(unsigned at)const{return bus->work_ram[at]|unsigned(bus->work_ram[at+1])<<8;}
    void put(unsigned at,unsigned value){bus->work_ram[at]=value;bus->work_ram[at+1]=value>>8;}
    void configure(const EnemySpawnState &state,const EnemyPopulation &p,Inputs in){
        bus->work_ram.fill(0);events.clear();inputs=in;free_roles.clear();for(unsigned i=0;i<22;++i)free_roles.push_back(i);
        for(unsigned i=0;i<30;++i){put(l.scripts+i*2,0xffff);put(l.npc+i*2,0xffff);put(l.enemy+i*2,0xffff);}
        put(l.counter,p.spawn_counter);put(l.count,p.count);put(l.maximum,p.maximum);put(l.butterfly,p.butterfly_spawned);put(l.failures,p.capacity_failures);
        put(l.encounter,p.encounter);put(l.chance,p.chance);put(l.battle,p.battle);put(l.name,p.name_initial);put(l.sprite,p.sprite);put(l.remaining,p.remaining);
        put(l.tileset,state.tileset);put(l.piracy,state.bypass_chance);put(l.debug,state.debug_forced_encounter);
        put(l.debug_mode,2);put(l.debug_enemies,state.debug_forced_encounter);put(l.enabled,state.enabled);
        std::copy(state.event_flags.begin(),state.event_flags.end(),bus->work_ram.begin()+l.flags);
    }
    void begin(unsigned entry,unsigned a,unsigned x,unsigned y=0,bool near=false){
        cpu.emulation_mode=false;cpu.status_register=eb::MainCpu65816::InterruptDisable;cpu.data_bank=0x7e;
        cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;cpu.program_counter=0xc0ff00;cpu.accumulator=a;cpu.x_index=x;cpu.y_index=y;
        return_pc=near?0xc0ff03:0xc0ff04;
        if(near)cpu.execute_instruction<0x20>(entry&0xffff,3);else cpu.execute_instruction<0x22>(entry,4);
    }
    bool finished()const{return cpu.program_counter==return_pc&&cpu.stack_pointer==0x1fff;}
    void ret(bool far=true){if(far)cpu.execute_instruction<0x6b>(0,1);else cpu.execute_instruction<0x60>(0,1);}
    std::vector<EnemySpawnCell> strip(CameraRefreshIntent intent){
        begin(intent.axis==CameraStripAxis::Row?l.row:l.column,std::uint16_t(intent.x),std::uint16_t(intent.y));
        std::vector<EnemySpawnCell> result;
        for(unsigned steps=0;!finished();++steps){check(steps<10000,"Source strip budget exceeded");
            if(cpu.program_counter==l.select){result.push_back({cpu.accumulator,cpu.x_index,cpu.y_index,word(l.width),word(l.height)});ret(false);}
            else cpu.step_instruction();}
        return result;
    }
    void select(EnemySpawnCell cell){
        put(l.width,cell.width);put(l.height,cell.height);begin(l.select,cell.x,cell.y,cell.encounter,true);
        for(unsigned steps=0;!finished();++steps){check(steps<1000000,"Source spawn budget exceeded");
            const auto pc=cpu.program_counter;
            if(pc==l.random){const auto value=inputs.random();events.push_back({0,value,0,0,0});cpu.accumulator=value;ret();}
            else if(pc==l.create){check(!free_roles.empty(),"Source fixture exhausted authored roles");
                const auto role=free_roles.front();free_roles.erase(free_roles.begin());
                const auto x=word(cpu.direct_page+0xe),y=word(cpu.direct_page+0x10);
                check(x==0&&y==0,"Source initial enemy coordinates differ");
                events.push_back({1,cpu.accumulator,cpu.x_index,role,0});
                put(l.scripts+role*2,cpu.x_index);put(l.npc+role*2,0xffff);put(l.enemy+role*2,0xffff);
                put(l.x+role*2,x);put(l.y+role*2,y);cpu.accumulator=role;ret();}
            else if(pc==l.terrain){const auto flags=inputs.surface();events.push_back({2,cpu.accumulator,cpu.x_index,cpu.y_index,flags});
                cpu.accumulator=flags;ret();}
            else if(pc==l.erase){const auto role=cpu.accumulator;events.push_back({3,role,0,0,0});
                check(word(l.npc+role*2)==0xffff&&word(l.enemy+role*2)==0xffff,"Failed placement unexpectedly published identity");
                put(l.scripts+role*2,0xffff);free_roles.insert(free_roles.begin(),role);ret();}
            else cpu.step_instruction();}
    }
    void compare(const WorldEnemies &owner,const ActorWorld &world)const{
        const auto &p=owner.population();const std::array<unsigned,12> actual{p.spawn_counter,p.count,p.maximum,p.butterfly_spawned,p.capacity_failures,
            p.encounter,p.chance,p.battle,p.name_initial,p.sprite,p.remaining,unsigned(owner.actors().size())};
        unsigned active=0;for(unsigned i=0;i<22;++i)if(word(l.scripts+i*2)!=0xffff)++active;
        const std::array<unsigned,12> expected{word(l.counter),word(l.count),word(l.maximum),word(l.butterfly),word(l.failures),
            word(l.encounter),word(l.chance),word(l.battle),word(l.name),word(l.sprite),word(l.remaining),active};
        if(actual!=expected){for(unsigned i=0;i<actual.size();++i)if(actual[i]!=expected[i])
            throw std::runtime_error("Enemy population field "+std::to_string(i)+" source="+std::to_string(expected[i])+" native="+std::to_string(actual[i])+": "+context);}
        for(const auto &entry:owner.actors()){const auto &actor=world.actor(entry.actor);check(bool(actor.authored_role()),"Enemy lacks authored role");
            const auto index=*actor.authored_role()*2;
            check(entry.npc_identity()==word(l.npc+index),
                  "Native enemy NPC selector identity differs from source encounter group");
            check(word(l.npc+index)==entry.battle+0x8000&&word(l.enemy+index)==entry.enemy&&word(l.cell+index)==entry.spawn_cell&&
                  word(l.path+index)==world.actor(entry.actor).behavior.path_state&&word(l.weakness+index)==entry.weakness&&
                  word(l.x+index)==actor.action().position[0]>>16&&word(l.y+index)==actor.action().position[1]>>16,
                  "Native enemy placement/identity differs");}
    }
};
std::vector<Event> native_select(WorldEnemies &owner,ActorWorld &world,EnemySpawnCell cell,EnemySpawnState state,Inputs input){
    std::vector<Event> result;std::map<ActorId,unsigned> observed;
    auto observe=[&]{const auto active=world.actors();
        for(auto at=observed.begin();at!=observed.end();){if(std::find(active.begin(),active.end(),at->first)==active.end()){
            result.push_back({3,at->second,0,0,0});at=observed.erase(at);}else ++at;}
        for(const auto id:active)if(!observed.contains(id)){
            const auto &actor=world.actor(id);const auto role=*actor.authored_role();observed[id]=role;
            // Every pending creation requests position before any coordinate mutation.
            check(actor.action().position[0]==0x8000&&actor.action().position[1]==0x8000&&actor.behavior.direction==0,"Native initial enemy defaults differ");
            const auto creation=owner.pending_creation();check(creation&&creation->actor==id,"Native pending creation metadata missing");
            result.push_back({1,creation->sprite,creation->script,role,0});
        }};
    owner.begin_cell(world,cell.x,cell.y,cell.encounter,cell.width,cell.height,std::move(state));observe();
    unsigned steps=0;
    while(owner.busy()){check(++steps<10000&&bool(owner.request()),"Native spawn failed to yield");
        if(std::holds_alternative<EnemyRandomRequest>(*owner.request())){const auto value=input.random();result.push_back({0,value,0,0,0});owner.respond_random(world,value);}
        else {const auto request=std::get<EnemyTerrainRequest>(*owner.request());const auto flags=input.surface();
            result.push_back({2,request.x,request.y,*world.actor(request.actor).authored_role(),flags});owner.respond_terrain(world,flags);}
        observe();}
    return result;
}
void run(const eb::GameAssets &assets){
    auto data=std::make_shared<EnemySpawnData>(import_enemy_spawn_data(assets.image,assets.version));
    auto sprites=std::make_shared<SpriteResources>(assets.image,sprite_catalog_layout(assets.version));
    auto program=std::make_shared<CompiledActionProgram>(import_action_scripts(assets.image,assets.version),assets.version);
    Oracle source(assets);EnemySpawnState state;state.event_flags.resize(256);state.prepared.height=17;
    EnemyPopulation population{0,0,100,0,9,11,12,13,14,15,16};
    unsigned strips=0,selectors=0,border_selectors=0,undefined_border_chances=0,creations=0,terrain_probes=0,random_draws=0;
    for(auto axis:{CameraStripAxis::Row,CameraStripAxis::Column})for(int x:{-24,-16,-8,0,8,16,1000,1016,1024,1272,1280,32760})
        for(int y:{-24,-16,-8,0,8,16,1000,1016,1024,1272,1280,32760})for(unsigned gate=0;gate<4;++gate){
            state.enabled=gate!=1;state.monsters_disabled=gate==2;state.final_boss_defeated=gate==3;
            CameraRefreshIntent intent{CameraRefreshService::Enemies,axis,std::int16_t(x),std::int16_t(y)};
            context=assets.title+" strip "+std::to_string(x)+","+std::to_string(y)+" gate="+std::to_string(gate);
            source.configure(state,population,{});
            if(state.monsters_disabled)source.bus->work_ram[source.l.flags+1]|=4;
            if(state.final_boss_defeated)source.bus->work_ram[source.l.flags+9]|=1;
            check(source.strip(intent)==plan_enemy_spawn_strip(*data,intent,state),"Enemy strip traversal differs");++strips;}
    state.enabled=true;state.monsters_disabled=false;state.final_boss_defeated=false;
    std::map<std::array<unsigned,3>,std::array<unsigned,2>> representatives;
    for(unsigned y=0;y<160;++y)for(unsigned x=0;x<128;++x){const auto &sector=data->sectors[(y/2)*32+x/4];
        representatives.try_emplace({data->encounter(x,y),sector.tileset,sector.butterfly_chance},std::array<unsigned,2>{x,y});}
    for(const auto &[key,position]:representatives)for(unsigned variation=0;variation<13;++variation){
        const auto [encounter,tileset,chance]=key;state.tileset=tileset;
        std::fill(state.event_flags.begin(),state.event_flags.end(),variation&1?255:0);
        population.spawn_counter=variation==4||variation==6?15:0;
        population.count=variation==5?100:variation==6||variation==10?1:0;
        population.butterfly_spawned=variation==6;
        state.debug_forced_encounter=variation==7||variation==9;
        state.bypass_chance=variation==8&&data->encounters[encounter].chance[0];
        Inputs input{0,variation*39,variation==2?0xd0u:variation==3?0x100u:variation==11?8u:0u,0,
                     variation==9||variation==12?255u:0u};
        context=assets.title+" cell="+std::to_string(position[0])+","+std::to_string(position[1])+" encounter="+std::to_string(encounter)+" variant="+std::to_string(variation);
        source.configure(state,population,input);EnemySpawnCell cell{position[0],position[1],encounter,24,16};source.select(cell);
        ActorWorld world(sprites,program);WorldEnemies owner(data,sprites,program->scripts(),population);
        auto events=native_select(owner,world,cell,state,input);
        const auto &expected=source.events;
        if(events!=expected){std::size_t i=0;while(i<events.size()&&i<expected.size()&&events[i]==expected[i])++i;
            throw std::runtime_error("Enemy event stream differs at "+std::to_string(i)+" sizes "+std::to_string(events.size())+","+std::to_string(expected.size())+": "+context);}
        source.compare(owner,world);++selectors;
        for(const auto &event:events){random_draws+=event[0]==0;creations+=event[0]==1;terrain_probes+=event[0]==2;}
    }
    // Original16-bit products at left/right/top/bottom camera borders read
    // neighboring declared content. Keep RAND/terrain/creation seams exactly
    // as above, and prove the complete selector against both regional CPUs.
    for(unsigned x:{0u,127u,128u,132u,0xeffcu,0xfffcu,0xfffdu})
      for(unsigned y:{0u,74u,75u,159u,160u,164u,0xfffcu}) {
        if(x<128&&y<160)continue;
        context=assets.title+" border cell="+std::to_string(x)+","+std::to_string(y);
        const unsigned column=std::uint16_t(x*8u)>>5,row=std::uint16_t(y*8u)>>4;
        const auto mode=data->sector_lookups->butterfly_modes[std::uint16_t(row*64u+column*2u)/2];
        if(mode>=6) {
          bool rejected=false;try{(void)data->sector(x,y);}catch(const std::out_of_range&){rejected=true;}
          check(rejected,"Undefined original border chance was invented");++undefined_border_chances;continue;
        }
        population={15,0,100,0,9,11,12,13,14,15,16};
        state.debug_forced_encounter=state.bypass_chance=false;state.tileset=0;
        std::fill(state.event_flags.begin(),state.event_flags.end(),0);
        for(unsigned draw:{0u,255u}) {
          Inputs input{0,39,0x100,0,draw};
          source.configure(state,population,input);EnemySpawnCell cell{x,y,0,8,8};source.select(cell);
          ActorWorld world(sprites,program);WorldEnemies owner(data,sprites,program->scripts(),population);
          const auto events=native_select(owner,world,cell,state,input);
          check(events==source.events,"Wrapped border selector event order differs");
          source.compare(owner,world);++border_selectors;
          for(const auto &event:events){random_draws+=event[0]==0;creations+=event[0]==1;terrain_probes+=event[0]==2;}
        }
      }
    check(creations&&terrain_probes&&random_draws,"Vacuous enemy selector coverage");
    std::cout<<"PASS "<<assets.title<<": "<<strips<<" exact strip traversals, "<<selectors<<" real-content selectors, "
             <<border_selectors<<" defined border selectors, "<<undefined_border_chances<<" explicit undefined chance rejections, "<<random_draws
             <<" ordered RNG draws, "<<creations<<" creations, "<<terrain_probes<<" terrain probes; exact population/identity/placement\n";
}
}
int main(int argc,char **argv){try{check(argc>=2,"native_world_enemies_reference pack.ebpak ...");
    for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
