// Original machine execution is confined to this optional reference. CREATE's
// service boundary is recorded and linked immediately; native creation runs in
// ActorWorld. INIT_ENTITY/CREATE defaults have their own creation reference.
#include "eb/native/world_activation.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native;
std::string context;
void check(bool ok,const char *message) {
    if(!ok) throw std::runtime_error(std::string(message)+": "+context);
}
struct Creation {
    unsigned npc{},sprite{},script{},x{},y{},direction{};
    bool operator==(const Creation &) const=default;
};
struct Layout {
    unsigned cell,row,column,create,first,next,npc,direction,flags,tileset,enabled,objects,photo;
    unsigned debug,debug_mode,retention,speed,current;
    unsigned load,clear,map_sector,vram,map_row,collision_row,draw_row,enemy_row,origin_x,origin_y;
};
constexpr Layout us{0xc0222b,0xc0255c,0xc025cf,0xc01e49,0xa50,0xa9e,0x2c9a,0x2af6,0x9c08,0x436e,
    0x4a58,0x4a66,0xb4ef,0x436c,0xb559,0xc0c6b6,0x9f45,0x1a42,
    0xc013f6,0xc02194,0xc008c3,0xc00013,0xc00ac5,0xc00cf3,0xc00e16,0xc02a6b,0x4374,0x4376};
constexpr Layout jp{0xc02239,0xc0256a,0xc025dd,0xc01e5f,0xa46,0xa94,0x3098,0x2ef4,0x9eb3,0x46f4,
    0x4dde,0x4dec,0xb6b8,0x46f2,0xb70a,0xc0c698,0xa147,0x1a38,
    0xc0140c,0xc021a2,0xc008d3,0xc00013,0xc00ad7,0xc00d05,0xc00e28,0xc02a7b,0x46fa,0x46fc};
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    Layout l;
    std::span<const std::uint8_t> content;
    unsigned active{};
    std::uint64_t calls{},creations{};
    explicit Oracle(const eb::GameAssets &assets):bus(std::make_unique<eb::SnesBus>(assets.image,assets.version)),
        cpu(*bus),l(assets.version==eb::GameVersion::JP?jp:us),content(assets.image) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    }
    unsigned word(unsigned at) const {return bus->work_ram[at]|unsigned(bus->work_ram[at+1])<<8;}
    void put(unsigned at,unsigned value){bus->work_ram[at]=value;bus->work_ram[at+1]=value>>8;}
    void begin(unsigned entry,unsigned a,unsigned x=0) {
        cpu.emulation_mode=false; cpu.status_register=eb::MainCpu65816::InterruptDisable;
        cpu.data_bank=0x7e;cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;cpu.program_counter=0xc0ff00;
        cpu.accumulator=a;cpu.x_index=x;cpu.y_index=0;
        cpu.execute_instruction<0x22>(entry,4);
    }
    bool returned()const{return cpu.program_counter==0xc0ff04&&cpu.stack_pointer==0x1fff;}
    void end(bool far=true){if(far)cpu.execute_instruction<0x6b>(0,1);else cpu.execute_instruction<0x60>(0,1);}
    void configure(const NpcActivationState &state,std::span<const NpcId> existing={}) {
        bus->work_ram.fill(0); active=existing.size();
        put(0x31,state.camera.x);put(0x33,state.camera.y);put(l.tileset,state.tileset);
        put(l.enabled,state.mode==NpcSpawnMode::Disabled?0:state.mode==NpcSpawnMode::Initial?1:0xffff);
        put(l.objects,state.objects_only);put(l.photo,state.photograph);
        put(l.debug,state.debug.enabled);put(l.debug_mode,state.debug.mode);
        put(0x65,state.debug.shoulder_buttons_held?0x30:0);
        std::copy(state.event_flags.begin(),state.event_flags.end(),bus->work_ram.begin()+l.flags);
        put(l.first,existing.empty()?0xffff:0);
        for(unsigned i=0;i<existing.size();++i){put(l.npc+i*2,existing[i]);put(l.next+i*2,i+1==existing.size()?0xffff:(i+1)*2);}
    }
    std::vector<Creation> select(unsigned entry,unsigned x,unsigned y,
                                 NpcStripAdmission admission=NpcStripAdmission::Admitted) {
        if(admission==NpcStripAdmission::Rejected)
            std::fill(bus->work_ram.begin()+0x1d00,bus->work_ram.begin()+0x2000,0x80);
        begin(entry,x,y);
        std::vector<Creation> result;
        const unsigned initial=active;
        for(unsigned steps=0;!returned();++steps){
            check(steps<2000000,"Source NPC activation exceeded budget");
            if(cpu.program_counter==l.create){
                check(active<30,"Source fixture exhausted logical actor roles");
                result.push_back({word(cpu.direct_page+0x20),cpu.accumulator,cpu.x_index,
                                  word(cpu.direct_page+0x0e),word(cpu.direct_page+0x10),0});
                // Commit active identity/list before returning, exactly when a
                // successful CREATE becomes visible to later placements.
                if(!active)put(l.first,0);else put(l.next+(active-1)*2,active*2);
                put(l.next+active*2,0xffff);put(l.npc+active*2,0xffff);
                cpu.accumulator=active++;++creations;end();
            }else cpu.step_instruction();
        }
        for(unsigned i=0;i<result.size();++i){
            check(word(l.npc+(initial+i)*2)==result[i].npc,"Source NPC identity commit differs");
            result[i].direction=word(l.direction+(initial+i)*2);
        }
        ++calls;return result;
    }
    bool retention(std::uint16_t x,std::uint16_t y,std::uint16_t leader_x,std::uint16_t leader_y,
                   std::uint16_t speed) {
        bus->work_ram.fill(0);
        const auto &profile=eb::source_profile(bus->game_version());
        put(profile.wram_entity_world_coordinates.x,x);put(profile.wram_entity_world_coordinates.y,y);
        put(profile.party_state.leader_x,leader_x);put(profile.party_state.leader_y,leader_y);
        put(l.speed+2,speed);put(l.current,0);
        begin(l.retention,0);
        for(unsigned steps=0;!returned();++steps){
            check(steps<1000,"Source retention exceeded budget");
            // The generated legacy dispatcher retains the older widescreen
            // [-128,384) presentation patch at these four instructions. This
            // oracle tests the authored C0C6B6 gameplay predicate [-64,320).
            const auto offset=cpu.program_counter-l.retention;
            if(offset==0x3d||offset==0x42||offset==0x47||offset==0x4c){
                const auto at=cpu.program_counter-0xc00000;
                const auto opcode=offset<0x47?0xc9u:0xe0u;
                const auto operand=offset==0x3d||offset==0x47?0xffc0u:320u;
                check(content[at]==opcode&&(content[at+1]|unsigned(content[at+2])<<8)==operand,
                      "Authored retention instruction layout changed");
                if(opcode==0xc9)cpu.execute_instruction<0xc9>(operand,3);
                else cpu.execute_instruction<0xe0>(operand,3);
            }
            else cpu.step_instruction();
        }
        check(cpu.accumulator==0||cpu.accumulator==0xffff,"Source retention result is not a predicate");
        return cpu.accumulator!=0;
    }
    CameraRefreshPlan initial_load(CameraPosition center) {
        bus->work_ram.fill(0);put(l.enabled,0xffff);begin(l.load,center.x,center.y);
        CameraRefreshPlan result;
        for(unsigned steps=0;!returned();++steps){
            check(steps<50000,"Source initial-load planner exceeded budget");
            const auto pc=cpu.program_counter;
            if(pc==l.clear||pc==l.vram)end();
            else if(pc==l.map_sector||pc==l.map_row||pc==l.collision_row||pc==l.draw_row)end(false);
            else if(pc==l.row||pc==l.enemy_row){
                result.intents.push_back({pc==l.row?CameraRefreshService::Npcs:CameraRefreshService::Enemies,
                    CameraStripAxis::Row,std::int16_t(cpu.accumulator),std::int16_t(cpu.x_index)});end();
            }else cpu.step_instruction();
        }
        result.origin={std::int16_t(word(l.origin_x)),std::int16_t(word(l.origin_y))};
        check(word(l.enabled)==0xffff&&word(0x31)==std::uint16_t(center.x-128)&&
              word(0x33)==std::uint16_t(center.y-112),"Source initial-load camera/mode differs");
        return result;
    }
    void release(unsigned role,bool full) {
        const bool japanese=bus->game_version()==eb::GameVersion::JP;
        begin(full?(japanese?0xc0214e:0xc02140):(japanese?0xc020ff:0xc020f1),full?role:0xa55a);
        put(l.current,role);
        unsigned releases=0;
        for(unsigned steps=0;!returned();++steps){
            check(steps<10000,"Source NPC release exceeded budget");
            const auto pc=cpu.program_counter;
            if(pc==(japanese?0xc01b2b:0xc01b15)||pc==(japanese?0xc01c27:0xc01c11)){
                ++releases;cpu.accumulator=0;end();
            }else cpu.step_instruction();
        }
        check(releases==2,"Source NPC release did not release both resource domains");
    }
};
std::vector<Creation> native_events(const std::vector<NpcActivation>&events, const ActorWorld &world,
                                    const NpcActivationState &state){
    std::vector<Creation> result;
    for(const auto &event:events){
        const auto &p=event.candidate.placement;const auto &actor=world.actor(event.actor);
        check(actor.action().position==std::array<std::uint32_t,3>{p.x<<16|0x8000,p.y<<16|0x8000,
                    std::uint32_t(state.prepared.height)<<16|0x8000}&&
              actor.action().variables==state.prepared.variables&&actor.action().animation==0xffff&&
              actor.behavior.direction==event.direction&&!actor.appearance.displayed()&&world.ticks()==0,
              "Native activation changed prepared state or executed actor behavior");
        result.push_back({p.npc,event.sprite,event.candidate.script,p.x,p.y,event.direction});
    }
    return result;
}
void run(const eb::GameAssets &assets){
    const auto catalog=std::make_shared<NpcCatalog>(assets.image,npc_catalog_layout(assets.version,false));
    const auto sprites=std::make_shared<SpriteResources>(assets.image,sprite_catalog_layout(assets.version));
    const auto program=std::make_shared<CompiledActionProgram>(import_action_scripts(assets.image,assets.version),assets.version);
    WorldActivation activation(catalog,sprites,program->scripts(),assets.version);
    Oracle oracle(assets);std::array<std::uint8_t,128> flags{};
    NpcActivationState state;state.mode=NpcSpawnMode::Initial;state.event_flags=flags;
    state.prepared.height=0x1234;state.prepared.variables={2,3,5,7,11,13,17,19};
    unsigned cells=0,strips=0,retention_cases=0,initials=0;
    // Every actual placement cell, both flag polarities and original list order.
    for(unsigned y=0;y<40;++y)for(unsigned x=0;x<32;++x){
        const auto placements=catalog->cell(x,y);if(placements.empty())continue;
        std::array<bool,32> tilesets{};
        for(const auto&p:placements){check(p.npc!=0,"Authored placement uses ambiguous zero NPC identity");tilesets[p.tileset]=true;}
        for(unsigned t=0;t<32;++t)if(tilesets[t])for(unsigned pattern=0;pattern<2;++pattern){
            std::fill(flags.begin(),flags.end(),pattern?255:0);state.tileset=t;state.camera={std::uint16_t(x*256),std::uint16_t(y*256)};
            context=assets.title+" cell="+std::to_string(x)+","+std::to_string(y)+" tileset="+std::to_string(t);
            oracle.configure(state);const auto expected=oracle.select(oracle.l.cell,x,y);
            ActorWorld world(sprites,program);
            check(native_events(activation.activate_cell(world,x,y,state),world,state)==expected,"NPC cell activation differs");
            ++cells;
        }
    }
    // Actual edge NPCs, all control gates, repeats and prior active identities.
    const auto anchors=catalog->cell(29,28);
    for(const auto &anchor:anchors){
        if(anchor.npc!=227&&anchor.npc!=229&&anchor.npc!=230)continue;
        for(unsigned bits=0;bits<64;++bits)for(int edge:{-65,-64,0,255,256,319,320}){
            state.mode=(bits&1)?NpcSpawnMode::Streaming:NpcSpawnMode::Initial;
            state.objects_only=bits&2;state.photograph=bits&4;
            state.debug={bool(bits&8),bool(bits&16),std::uint16_t((bits&32)?1:0)};
            state.tileset=anchor.tileset;state.camera={std::uint16_t(anchor.x-edge),std::uint16_t(anchor.y-112)};
            for(auto axis:{CameraStripAxis::Row,CameraStripAxis::Column}){
                const CameraRefreshIntent intent{CameraRefreshService::Npcs,axis,
                    std::int16_t(anchor.x/8),std::int16_t(anchor.y/8)};
                context=assets.title+" strip npc="+std::to_string(anchor.npc)+" gates="+std::to_string(bits)+" edge="+std::to_string(edge);
                oracle.configure(state);
                const auto expected=oracle.select(axis==CameraStripAxis::Row?oracle.l.row:oracle.l.column,
                                                  std::uint16_t(intent.x),std::uint16_t(intent.y));
                ActorWorld world(sprites,program);
                check(native_events(activation.activate_strip(world,intent,state,NpcStripAdmission::Admitted),world,state)==expected,
                      "NPC strip gates/order differ");
                check(activation.activate_strip(world,intent,state,NpcStripAdmission::Admitted).empty(),
                      "Repeated native strip recreated an active NPC");
                ++strips;
            }
        }
    }
    check(strips!=0,"Actual NPC edge/gate reference was vacuous");
    // Explicit rejected legacy workspace domain: both helpers must return
    // before any cell query. Production receives an admission decision, not RAM.
    state.mode=NpcSpawnMode::Initial;state.camera={0,0};state.tileset=0;
    for(auto axis:{CameraStripAxis::Row,CameraStripAxis::Column}){
        oracle.configure(state);const CameraRefreshIntent intent{CameraRefreshService::Npcs,axis,40,56};
        check(oracle.select(axis==CameraStripAxis::Row?oracle.l.row:oracle.l.column,40,56,NpcStripAdmission::Rejected).empty(),
              "Rejected source strip admitted a candidate");
        ActorWorld world(sprites,program);
        check(activation.activate_strip(world,intent,state,NpcStripAdmission::Rejected).empty(),"Rejected native strip admitted a candidate");
    }
    for(unsigned leader:{0,128,0x7fff,0x8000,0xffff})for(unsigned speed:{0,3,4,0xffff})
        for(int dx:{-65,-64,-1,0,319,320,32767})for(int dy:{-65,-64,0,319,320}){
            const auto x=std::uint16_t(leader-128+dx),y=std::uint16_t(leader-112+dy);
            context=assets.title+" retention leader="+std::to_string(leader)+" speed="+std::to_string(speed)+" delta="+std::to_string(dx)+","+std::to_string(dy);
            const auto source_retained=oracle.retention(x,y,leader,leader,speed);
            context += " source="+std::to_string(source_retained);
            check(npc_within_retention_area(x,y,leader,leader,speed)==source_retained,
                  "Native NPC retention predicate differs");++retention_cases;
        }
    for(CameraPosition center: {CameraPosition{128,112},CameraPosition{0,0},CameraPosition{7615,7320},
                                CameraPosition{32768,32767},CameraPosition{65535,65535}}){
        const auto expected=oracle.initial_load(center);activation.begin_initial_load(center);
        std::vector<CameraRefreshIntent> actual;
        ActorWorld world(sprites,program);state.mode=NpcSpawnMode::Disabled;state.camera=activation.target_camera();
        while(activation.request()){
            actual.push_back(*activation.request());
            if(activation.request()->service==CameraRefreshService::Npcs)
                activation.activate_next(world,state,NpcStripAdmission::Admitted);
            else activation.complete_enemy_request();
        }
        check(actual==expected.intents&&activation.origin()==expected.origin,"Initial activation traversal differs");++initials;
    }
    // Execute the real graphics-only and full deletion routines. Resource
    // helpers alone are intercepted; task/list cleanup remains original code.
    const bool japanese=assets.version==eb::GameVersion::JP;
    const unsigned script=japanese?0xa58:0xa62,script_index=japanese?0xad0:0xada,
        task_next=japanese?0x1250:0x125a,free_actor=japanese?0xa48:0xa52,
        free_task=japanese?0xa4a:0xa54,sprite=japanese?0x30d4:0x2cd6,
        enemy=japanese?0x3110:0x2d12,enemy_count=japanese?0x4de2:0x4a5c,
        butterfly=japanese?0x4de6:0x4a60;
    unsigned cleanup_cases=0;
    for(bool full:{false,true})for(unsigned role=0;role<3;++role){
        context=assets.title+" lifecycle role="+std::to_string(role)+" full="+std::to_string(full);
        oracle.bus->work_ram.fill(0);oracle.put(oracle.l.first,0);oracle.put(free_actor,6);
        oracle.put(free_task,6);oracle.put(enemy_count,3);oracle.put(butterfly,1);
        ActorWorld world(sprites,program);std::array<ActorId,3> actors{};
        for(unsigned i=0;i<3;++i){
            const auto npc=NpcId(i+1);const auto &definition=catalog->definition(npc);
            PreparedActorState prepared;prepared.x=1000+i;prepared.y=2000+i;prepared.height=30+i;
            prepared.variables={3,5,7,11,13,17,19,23};
            actors[i]=*world.create_authored(make_actor_spec(definition.sprite,8,prepared,*sprites,*program->scripts(),npc));
            auto &actor=world.actor(actors[i]);actor.appearance.select_four(0,0);
            oracle.put(script+i*2,8);oracle.put(script_index+i*2,i*2);oracle.put(task_next+i*2,0xffff);
            oracle.put(oracle.l.next+i*2,i==2?0xffff:(i+1)*2);oracle.put(oracle.l.npc+i*2,npc);
            oracle.put(sprite+i*2,definition.sprite);oracle.put(enemy+i*2,0xffff);
        }
        const auto before=world.actor(actors[role]).action();const auto order=world.actors();
        const auto before_ram=oracle.bus->work_ram;
        oracle.release(role,full);
        check(oracle.word(oracle.l.npc+role*2)==0xffff&&oracle.word(sprite+role*2)==0xffff&&
              oracle.word(enemy_count)==3&&oracle.word(butterfly)==1,
              "Ordinary NPC release changed enemy bookkeeping or kept identity");
        if(full){
            check(world.erase(actors[role])&&!world.actor_for_role(role)&&!world.actor_for_npc(NpcId(role+1)),
                  "Native NPC full deletion retained role/identity");
            check(oracle.word(script+role*2)==0xffff&&oracle.word(free_actor)==role*2&&
                  oracle.word(free_task)==role*2,"Source full deletion did not recycle actor/task roles");
            std::vector<unsigned> source_roles;
            for(unsigned slot=oracle.word(oracle.l.first);slot<60;slot=oracle.word(oracle.l.next+slot))source_roles.push_back(slot/2);
            std::vector<unsigned> native_roles;for(auto id:world.actors())native_roles.push_back(*world.actor(id).authored_role());
            check(native_roles==source_roles,"Full deletion reordered remaining native actors");
        }else{
            check(world.release_appearance(actors[role]),"Native graphics-only release failed");
            const auto &actor=world.actor(actors[role]);
            check(!actor.npc()&&!actor.has_appearance()&&actor.authored_role()==role&&world.actors()==order&&
                  actor.action().position==before.position&&actor.action().variables==before.variables&&
                  actor.action().velocity==before.velocity&&actor.action().animation==before.animation,
                  "Native graphics release altered logical actor/task state");
            for(unsigned i=0;i<3;++i)for(unsigned base:{script,script_index,task_next,oracle.l.next})
                check(oracle.word(base+i*2)==unsigned(before_ram[base+i*2]|unsigned(before_ram[base+i*2+1])<<8),
                      "Source graphics release changed live task/list state");
            check(oracle.word(free_actor)==6&&oracle.word(free_task)==6,"Graphics release recycled a live logical role");
        }
        ++cleanup_cases;
    }
    std::cout<<"PASS "<<assets.title<<": "<<cells<<" actual placement cell cases, "<<strips<<" source strip/gate cases, "
             <<oracle.creations<<" ordered creation requests, "<<retention_cases<<" retention cases, "<<initials
             <<" initial-load traversals, "<<cleanup_cases<<" source lifecycle cases; native actors created without script/RNG execution\n";
}
}
int main(int argc,char**argv){
    try{check(argc>=2,"native_world_activation_reference pack.ebpak ...");
        for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));
    }catch(const std::exception&error){std::cerr<<error.what()<<'\n';return 1;}
}
