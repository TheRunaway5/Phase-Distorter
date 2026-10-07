// The original refresh/load, NPC and enemy selectors, RAND and shape collision
// bodies execute together here. Only artwork/cache publication and CREATE /
// failed DELETE cross explicit test boundaries, already independently checked
// by actor creation/role/map references. This low-level fixture deliberately
// leaves the native retained-window binding absent and supplies a coherent
// full-map collision ring at each source query. Retained session semantics are
// checked by the complete map/camera/Travel callers and retained C05F33 oracle.
#include "eb/native/world_streaming.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <map>
#include <memory>
#include <stdexcept>

namespace {
using namespace eb::native;
std::string context;
void check(bool ok,const char *message){if(!ok)throw std::runtime_error(std::string(message)+": "+context);}
using Event=std::array<unsigned,6>;
struct Layout {
    unsigned refresh,load,map_column,collision_column,draw_column,map_row,collision_row,draw_row;
    unsigned map_sector,clear,vram,npc_row,npc_column,enemy_row,enemy_column,random,create,terrain,erase;
    unsigned origin_x,origin_y,tileset,flags,npc_enabled,enemy_enabled,objects,photo,debug,debug_mode,piracy;
    unsigned first,next,scripts,npc,enemy,sprite,direction,shape,x,y,cell,path,weakness;
    unsigned counter,count,maximum,butterfly,failures,encounter,chance,battle,name,spawn_sprite,remaining;
};
constexpr Layout us{0xc01558,0xc013f6,0xc00bdc,0xc00d7e,0xc00fcb,0xc00ac5,0xc00cf3,0xc00e16,
    0xc008c3,0xc02194,0xc00013,0xc0255c,0xc025cf,0xc02a6b,0xc02b55,0xc08e9a,0xc01e49,0xc05f33,0xc02140,
    0x4374,0x4376,0x436e,0x9c08,0x4a58,0x4a5a,0x4a66,0xb4ef,0x436c,0xb559,0xb539,
    0xa50,0xa9e,0xa62,0x2c9a,0x2d12,0x2cd6,0x2af6,0x2b6e,0xb8e,0xbca,0x2d4e,0x2c5e,0x3186,
    0x4a7a,0x4a5c,0x4a5e,0x4a60,0x4a68,0x4a6c,0x4a70,0x4a72,0x4a76,0x4a74,0x4a6e};
constexpr Layout jp{0xc0156e,0xc0140c,0xc00bee,0xc00d90,0xc00fdd,0xc00ad7,0xc00d05,0xc00e28,
    0xc008d3,0xc021a2,0xc00013,0xc0256a,0xc025dd,0xc02a7b,0xc02b65,0xc08e8b,0xc01e5f,0xc06161,0xc0214e,
    0x46fa,0x46fc,0x46f4,0x9eb3,0x4dde,0x4de0,0x4dec,0xb6b8,0x46f2,0xb70a,0xb6ea,
    0xa46,0xa94,0xa58,0x3098,0x3110,0x30d4,0x2ef4,0x2f6c,0xb84,0xbc0,0x314c,0x305c,0x3584,
    0x4e00,0x4de2,0x4de4,0x4de6,0x4dee,0x4df2,0x4df6,0x4df8,0x4dfc,0x4dfa,0x4df4};
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    Layout l;
    std::span<const std::uint8_t> content;
    const SpriteResources &sprites;
    std::vector<unsigned> active,free;
    std::vector<Event> events;
    unsigned npc_strips{},enemy_strips{};
    Oracle(const eb::GameAssets &assets,const SpriteResources &s)
      :bus(std::make_unique<eb::SnesBus>(assets.image,assets.version)),cpu(*bus),
       l(assets.version==eb::GameVersion::JP?jp:us),content(assets.image),sprites(s) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    }
    unsigned word(unsigned at)const{return bus->work_ram[at]|unsigned(bus->work_ram[at+1])<<8;}
    void put(unsigned at,unsigned value){bus->work_ram[at]=value;bus->work_ram[at+1]=value>>8;}
    void ret(bool far){if(far)cpu.execute_instruction<0x6b>(0,1);else cpu.execute_instruction<0x60>(0,1);}
    void link(){put(l.first,active.empty()?0xffff:active.front()*2);
        for(unsigned i=0;i<active.size();++i)put(l.next+active[i]*2,i+1==active.size()?0xffff:active[i+1]*2);}
    void configure(CameraStreamOrigin origin,std::span<const std::uint8_t> flags,story::RandomState random,
                   const WorldSpawnControls &controls,unsigned tileset,const EnemyPopulation &p) {
        bus->work_ram.fill(0);events.clear();active.clear();free.clear();npc_strips=enemy_strips=0;
        for(unsigned i=0;i<30;++i){put(l.scripts+i*2,0xffff);put(l.npc+i*2,0xffff);put(l.enemy+i*2,0xffff);}
        for(unsigned i=0;i<22;++i)free.push_back(i);
        link();
        put(l.origin_x,std::uint16_t(origin.x));put(l.origin_y,std::uint16_t(origin.y));put(l.tileset,tileset);
        put(l.npc_enabled,controls.npcs==NpcSpawnMode::Disabled?0:controls.npcs==NpcSpawnMode::Initial?1:0xffff);
        put(l.enemy_enabled,controls.enemies);put(l.objects,controls.objects_only);put(l.photo,controls.photograph);
        put(l.piracy,controls.bypass_enemy_chance);put(l.debug,controls.npc_debug.enabled);put(l.debug_mode,controls.npc_debug.mode);
        put(0x65,controls.npc_debug.shoulder_buttons_held?0x30:0);
        std::copy(flags.begin(),flags.end(),bus->work_ram.begin()+l.flags);put(0x24,random.primary_word);put(0x26,random.secondary_word);
        put(l.counter,p.spawn_counter);put(l.count,p.count);put(l.maximum,p.maximum);put(l.butterfly,p.butterfly_spawned);
        put(l.failures,p.capacity_failures);put(l.encounter,p.encounter);put(l.chance,p.chance);put(l.battle,p.battle);
        put(l.name,p.name_initial);put(l.spawn_sprite,p.sprite);put(l.remaining,p.remaining);
    }
    void cache(const WorldMapArea &area,unsigned anchor_x,unsigned anchor_y) {
        for(int dy=-32;dy<32;++dy)for(int dx=-32;dx<32;++dx){
            const unsigned x=(anchor_x/8+dx)&8191,y=(anchor_y/8+dy)&8191;
            bus->work_ram[0xe000+(y&63)*64+(x&63)]=area.collision(x,y);
        }
    }
    void run(CameraPosition target,bool initial,NpcStripAdmission admission,const WorldMapArea &area) {
        cpu.emulation_mode=false;cpu.status_register=eb::MainCpu65816::InterruptDisable;cpu.data_bank=0x7e;
        cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;cpu.program_counter=0xc0ff00;
        cpu.accumulator=target.x;cpu.x_index=target.y;cpu.y_index=0;
        if(initial)cpu.execute_instruction<0x22>(l.load,4);else cpu.execute_instruction<0x20>(l.refresh&0xffff,3);
        for(unsigned steps=0;cpu.program_counter!=0xc0ff00+(initial?4:3)||cpu.stack_pointer!=0x1fff;++steps){
            check(steps<5000000,"Combined source refresh exceeded budget");const auto pc=cpu.program_counter;
            if(pc==l.clear||pc==l.vram){check(initial,"Unexpected load-only publication");ret(true);continue;}
            if(pc==l.map_column||pc==l.collision_column||pc==l.draw_column||pc==l.map_row||pc==l.collision_row||pc==l.draw_row||pc==l.map_sector){ret(false);continue;}
            if(pc==l.npc_row||pc==l.npc_column)++npc_strips;
            if(pc==l.enemy_row||pc==l.enemy_column)++enemy_strips;
            // The leaf wrappers' preexisting stack-local admission is an
            // explicit native input. Supply only that input at its actual read;
            // all list/cell traversal and placement decisions remain source.
            if(pc==l.npc_row+0x16||pc==l.npc_column+0x16){
                const unsigned at=pc-0xc00000,offset=pc==l.npc_row+0x16?0x12:0x10;
                check(content[at]==0xa4&&content[at+1]==offset,"NPC admission read moved");
                put(cpu.direct_page+offset,admission==NpcStripAdmission::Admitted?0:0x8000);
            }
            if(pc==l.random)events.push_back({0,word(0x24),word(0x26),0,0,0});
            if(pc==l.create){
                check(!free.empty(),"Combined fixture exhausted authored roles");const auto role=free.front();free.erase(free.begin());
                const unsigned sprite=cpu.accumulator,script=cpu.x_index,x=word(cpu.direct_page+0xe),y=word(cpu.direct_page+0x10);
                events.push_back({1,sprite,script,role,x,y});active.push_back(role);link();
                put(l.scripts+role*2,script);put(l.npc+role*2,0xffff);put(l.enemy+role*2,0xffff);
                put(l.x+role*2,x);put(l.y+role*2,y);put(l.direction+role*2,0);put(l.sprite+role*2,sprite);
                put(l.shape+role*2,sprites.definition(sprite).shape);cpu.accumulator=role;ret(true);continue;
            }
            if(pc==l.terrain){events.push_back({2,cpu.accumulator,cpu.x_index,cpu.y_index,0,0});cache(area,cpu.accumulator,cpu.x_index);}
            if(pc==l.erase){const auto role=cpu.accumulator;events.push_back({3,role,0,0,0,0});
                const auto at=std::find(active.begin(),active.end(),role);check(at!=active.end(),"Deleting inactive source actor");
                active.erase(at);link();free.insert(free.begin(),role);put(l.scripts+role*2,0xffff);ret(true);continue;}
            cpu.step_instruction();
        }
    }
    void compare(const ActorWorld &world,const WorldEnemies &enemies,story::RandomState random,
                 const WorldActivation &activation,const WorldStreaming &streaming,std::span<const std::uint8_t> flags)const {
        check(word(0x24)==random.primary_word&&word(0x26)==random.secondary_word,"Combined source/native RNG differs");
        check(std::equal(flags.begin(),flags.end(),bus->work_ram.begin()+l.flags),"Streaming changed story flags");
        check(world.scene().camera_x==word(0x31)&&world.scene().camera_y==word(0x33)&&
              std::uint16_t(activation.origin().x)==word(l.origin_x)&&std::uint16_t(activation.origin().y)==word(l.origin_y),"Combined camera commit differs");
        check(streaming.work().npc_strips==npc_strips&&streaming.work().enemy_strips==enemy_strips,"Combined strip counts differ");
        const auto &p=enemies.population();
        const std::array<unsigned,11> actual{p.spawn_counter,p.count,p.maximum,p.butterfly_spawned,p.capacity_failures,
            p.encounter,p.chance,p.battle,p.name_initial,p.sprite,p.remaining};
        const std::array<unsigned,11> expected{word(l.counter),word(l.count),word(l.maximum),word(l.butterfly),word(l.failures),
            word(l.encounter),word(l.chance),word(l.battle),word(l.name),word(l.spawn_sprite),word(l.remaining)};
        if(actual!=expected)for(unsigned i=0;i<actual.size();++i)if(actual[i]!=expected[i])
            throw std::runtime_error("Population field "+std::to_string(i)+" native="+std::to_string(actual[i])+" source="+std::to_string(expected[i])+": "+context);
        check(world.size()==active.size()&&world.ticks()==0,"Combined activation changed actor count or tick");
        const auto ids=world.actors();
        for(unsigned i=0;i<ids.size();++i){const auto &actor=world.actor(ids[i]);check(actor.authored_role()==active[i],"Combined active list/role order differs");
            const auto index=active[i]*2;
            check(actor.action().position[0]>>16==word(l.x+index)&&actor.action().position[1]>>16==word(l.y+index)&&
                  actor.behavior.direction==word(l.direction+index)&&actor.appearance_context.shape==word(l.shape+index),"Combined actor placement/direction/shape differs");
            if(actor.npc())check(*actor.npc()==word(l.npc+index),"Combined NPC identity differs");
        }
        for(const auto &enemy:enemies.actors()){const auto index=*world.actor(enemy.actor).authored_role()*2;
            check(word(l.npc+index)==enemy.battle+0x8000&&word(l.enemy+index)==enemy.enemy&&word(l.cell+index)==enemy.spawn_cell&&
                  word(l.path+index)==world.actor(enemy.actor).behavior.path_state&&word(l.weakness+index)==enemy.weakness,"Combined enemy identity differs");}
    }
};
std::vector<Event> trace(WorldStreaming &streaming,ActorWorld &world,WorldEnemies &enemies,
                         story::RandomState &random,const NpcCatalog &catalog,const WorldSpawnControls &controls) {
    std::vector<Event> events;std::map<ActorId,unsigned> observed;
    for(unsigned steps=0;streaming.busy();++steps){check(steps<100000,"Native combined refresh exceeded budget");
        if(enemies.request()){
            if(std::holds_alternative<EnemyRandomRequest>(*enemies.request()))events.push_back({0,random.primary_word,random.secondary_word,0,0,0});
            else {const auto &q=std::get<EnemyTerrainRequest>(*enemies.request());events.push_back({2,q.x,q.y,*world.actor(q.actor).authored_role(),0,0});}
        }
        streaming.advance(1);const auto ids=world.actors();
        for(auto at=observed.begin();at!=observed.end();)if(std::find(ids.begin(),ids.end(),at->first)==ids.end()){
            events.push_back({3,at->second,0,0,0,0});at=observed.erase(at);
        }else ++at;
        for(const auto id:ids)if(!observed.contains(id)){const auto &actor=world.actor(id);const auto role=*actor.authored_role();observed[id]=role;
            unsigned sprite{},script{};
            if(actor.npc()){const auto &def=catalog.definition(*actor.npc());sprite=def.sprite;script=def.script;
                check(!controls.photograph&&!controls.npc_debug.enabled,"Trace requires ordinary NPC creation");}
            else {const auto creating=enemies.pending_creation();check(creating&&creating->actor==id,"Pending native enemy creation lost");sprite=creating->sprite;script=creating->script;}
            events.push_back({1,sprite,script,role,actor.action().position[0]>>16,actor.action().position[1]>>16});
        }
    }
    return events;
}
void run(const eb::GameAssets &assets) {
    auto sprites=std::make_shared<SpriteResources>(assets.image,sprite_catalog_layout(assets.version));
    auto catalog=std::make_shared<NpcCatalog>(assets.image,npc_catalog_layout(assets.version,false));
    auto program=std::make_shared<CompiledActionProgram>(import_action_scripts(assets.image,assets.version),assets.version);
    auto data=std::make_shared<EnemySpawnData>(import_enemy_spawn_data(assets.image,assets.version));
    WorldMap map(assets.image,world_map_layout(assets.version));WorldCollision collision(assets.image,world_collision_layout(assets.version));
    std::map<std::array<unsigned,3>,CameraPosition> centers;
    for(unsigned y=4;y<76;++y)for(unsigned x=3;x<28;++x)centers.try_emplace(std::array{map.sector(x,y).combination,0u,0u},CameraPosition{std::uint16_t(x*256+128),std::uint16_t(y*128+64)});
    // First-sector samples alone often contain no authored NPCs. Also center
    // on actual placements spanning NPC type, flag policy and map combination.
    for(unsigned y=2;y<38;++y)for(unsigned x=2;x<30;++x)for(const auto &p:catalog->cell(x,y)){
        const auto &d=catalog->definition(p.npc);
        centers.try_emplace(std::array{map.sector(p.x/256,p.y/128).combination,unsigned(d.type),unsigned(d.appearance)},
            CameraPosition{std::uint16_t(p.x),std::uint16_t(p.y)});
    }
    Oracle source(assets,*sprites);unsigned cases=0,randoms=0,creations=0,probes=0,npcs=0;
    for(const auto &[key,center]:centers)for(unsigned variant=0;variant<12;++variant){
        const auto combination=key[0];
        std::array<std::uint8_t,128> flags{};if(variant&1)flags.fill(255);flags[1]&=~4;flags[9]&=~1;
        if(variant==7)flags[1]|=4;
        if(variant==8)flags[9]|=1;
        const auto area=map.prepare(combination,flags);ActorWorld world(sprites,program);world.scene().event_flags=flags;
        const CameraPosition camera{std::uint16_t(center.x-128),std::uint16_t(center.y-112)};
        const auto origin=camera_stream_origin(camera);WorldActivation activation(catalog,sprites,program->scripts(),assets.version,origin);
        const EnemyPopulation population{std::uint16_t(variant==5?15:0),0,4};WorldEnemies enemies(data,sprites,program->scripts(),population);
        story::RandomState random{std::uint16_t(0x1027+variant*109+combination),std::uint16_t(0x7fa3-variant*71)};
        WorldSpawnControls controls;controls.npcs=variant==9?NpcSpawnMode::Disabled:NpcSpawnMode::Streaming;controls.enemies=true;
        WorldStreaming streaming(world,activation,enemies,collision,area,random,controls);
        const bool initial=variant==6||variant==11;
        const CameraPosition target=initial?center:CameraPosition{
            std::uint16_t(camera.x+(variant%3==0?-64:variant%3==1?64:0)),
            std::uint16_t(camera.y+(variant%3==0?0:variant%3==1?64:-64))};
        const auto admission=variant==4?NpcStripAdmission::Rejected:NpcStripAdmission::Admitted;
        context=assets.title+" area="+std::to_string(combination)+" variant="+std::to_string(variant);
        source.configure(origin,flags,random,controls,area.tileset_id(),population);source.run(target,initial,admission,area);
        if(initial)streaming.begin_initial_activation(target,admission);else streaming.begin_refresh(target,admission);
        const auto events=trace(streaming,world,enemies,random,*catalog,controls);
        if(events!=source.events){unsigned i=0;while(i<events.size()&&i<source.events.size()&&events[i]==source.events[i])++i;
            std::cerr<<"event="<<i<<" native/source size="<<events.size()<<'/'<<source.events.size()<<'\n';
            if(i<events.size()){for(auto v:events[i])std::cerr<<v<<' ';std::cerr<<" native\n";}
            if(i<source.events.size()){for(auto v:source.events[i])std::cerr<<v<<' ';std::cerr<<" source\n";}
            check(false,"Combined ordered activation event trace differs");}
        source.compare(world,enemies,random,activation,streaming,flags);++cases;npcs+=streaming.work().npc_creations;
        for(const auto &event:events){randoms+=event[0]==0;creations+=event[0]==1;probes+=event[0]==2;}
    }
    check(randoms&&npcs&&probes,"Vacuous combined NPC/enemy activation reference");
    std::cout<<"PASS "<<assets.title<<": "<<cases<<" complete refresh/load activations, "<<randoms<<" original RAND draws, "
             <<creations<<" ordered creations ("<<npcs<<" NPCs), "<<probes<<" original shape/terrain queries; exact list/role/population/flags/RNG/camera\n";
}
}
int main(int argc,char **argv){try{check(argc>=2,"native_world_streaming_reference pack.ebpak ...");
    for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));
}catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}}
