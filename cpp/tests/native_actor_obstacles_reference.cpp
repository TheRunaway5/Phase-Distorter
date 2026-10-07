// Complete original C05E76/C064A6 calls are an optional test-only oracle.
// Declared caller actor words and collision-cache bytes are input fixtures.
// Native producers use actual WorldActorMovement/WorldCollision owners; no
// callee completion interception, changed source instructions or cycle compensation.
// This proves helper state and edge traversal, not scene/interrupt timing.
#include "eb/native/world_actor_movement.hpp"
#include "native_world_movement_fixture.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
using namespace eb::native;
namespace {
std::string context;
std::uint64_t checks{},calls{},instructions{};
void require(bool ok,const char*message){++checks;if(!ok)throw std::runtime_error(std::string(message)+": "+context);}
struct Layout {
    unsigned run,first,next,script,task,next_task,cursor,bank,sleep,stack,temp;
    unsigned tick_low,tick_high,physics,projection,draw,position,fraction,velocity,velocity_fraction,vars,screen_x,screen_y,animation,priority;
    unsigned current,shape,direction,surface,collider,path,obstacle,npc,enabled,width,height,lateral_width,lateral_height,intangible;
    unsigned planar_surface,spatial_surface,collision_surface,collision,surface_call,collision_call,project,none,tick_none;
};
constexpr Layout us{0xc09466,0xa50,0xa9e,0xa62,0xada,0x125a,0x13fe,0x148a,0x1372,0x12e6,0x1516,
 0x107a,0x10b6,0x121e,0x11a6,0xa5e,0xb8e,0xc42,0xcf6,0xdaa,0xe5e,0xb16,0xb52,0x10f2,0x103e,
 0x1a42,0x2b6e,0x2af6,0x2baa,0x289e,0x2c5e,0x28da,0x2c9a,0x332a,0x3366,0x33a2,0x33de,0x1a4a,0x5d58,
 0xa37a,0x9ff1,0xa360,0xa384,0xc0c7db,0xc06478,0xa023,0xa039,0xc0943b};
constexpr Layout jp{0xc09445,0xa46,0xa94,0xa58,0xad0,0x1250,0x13f4,0x1480,0x1368,0x12dc,0x150c,
 0x1070,0x10ac,0x1214,0x119c,0xa54,0xb84,0xc38,0xcec,0xda0,0xe54,0xb0c,0xb48,0x10e8,0x1034,
 0x1a38,0x2f6c,0x2ef4,0x2fa8,0x2c9c,0x305c,0x2cd8,0x3098,0x3728,0x3764,0x37a0,0x37dc,0x1a40,0x60de,
 0xa359,0x9fd0,0xa33f,0xa363,0xc0c7bd,0xc066a6,0xa002,0xa018,0xc0941a};
BoundAction call(NativeAction op){BoundAction b;b.operation=op;return b;}
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;eb::MainCpu65816 cpu;Layout l;
    std::vector<std::pair<unsigned,unsigned>> collision_reads;
    Oracle(const eb::GameAssets&assets):bus(std::make_unique<eb::SnesBus>(assets.image,assets.version)),cpu(*bus),l(assets.version==eb::GameVersion::JP?jp:us){
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);cpu.emulation_mode=false;cpu.data_bank=0x7e;bus->work_ram[0x0d]=0x80;
        for(unsigned role=0;role<30;++role)put(l.script+role*2,0xffff);
    }
    void put(unsigned at,unsigned value){bus->work_ram.at(at)=value;bus->work_ram.at(at+1)=value>>8;}
    std::uint16_t word(unsigned at)const{return bus->work_ram.at(at)|unsigned(bus->work_ram.at(at+1))<<8;}
    void cache(const WorldMapArea&area,CollisionPoint anchor){for(int dy=-32;dy<32;++dy)for(int dx=-32;dx<32;++dx){
        const unsigned x=(unsigned(anchor.x/8)+dx)&8191,y=(unsigned(anchor.y/8)+dy)&8191;
        bus->work_ram[0xe000+(y&63)*64+(x&63)]=area.collision(x,y);
    }}
    void seed(unsigned role,const WorldActor&actor){const unsigned i=role*2;
        put(l.script+i,0);put(l.shape+i,actor.appearance_context.shape);put(l.direction+i,actor.behavior.direction);
        put(l.surface+i,actor.behavior.surface_flags);put(l.collider+i,actor.behavior.collision_object);
        put(l.path+i,actor.behavior.path_state);put(l.obstacle+i,actor.behavior.obstacle_flags);
        put(l.npc+i,actor.npc().value_or(0xffff));const auto&box=*actor.hitbox;
        put(l.enabled+i,box.enabled);put(l.width+i,box.vertical.half_width);put(l.height+i,box.vertical.height);
        put(l.lateral_width+i,box.lateral.half_width);put(l.lateral_height+i,box.lateral.height);
        for(unsigned axis=0;axis<3;++axis){put(l.position+axis*60+i,actor.action().position[axis]>>16);
            put(l.fraction+axis*60+i,actor.action().position[axis]);put(l.velocity+axis*60+i,actor.action().velocity[axis]>>16);
            put(l.velocity_fraction+axis*60+i,actor.action().velocity[axis]);}
        for(unsigned v=0;v<8;++v)put(l.vars+v*60+i,actor.action().variables[v]);
    }
    void invoke(unsigned entry,unsigned role,bool far){
        cpu.status_register=eb::MainCpu65816::InterruptDisable;cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;
        cpu.program_counter=0xc0ff00;cpu.accumulator=0;cpu.x_index=role*2;cpu.y_index=0;
        put(l.current,role);put(l.current+2,role*2);put(0x1e88,role*2);
        collision_reads.clear();
        bus->debug_read_wram=[&](unsigned address,std::uint8_t value) {
            if(address>=0xe000&&address<0xf000)collision_reads.emplace_back(address,value);
            return value; // Passive trace: preserve the actual original byte.
        };
        if(far)cpu.execute_instruction<0x22>(entry,4);else cpu.execute_instruction<0x20>(entry,3);
        unsigned steps=0;while(cpu.program_counter!=0xc0ff00u+(far?4:3)||cpu.stack_pointer!=0x1fff){
            if(++steps>1000000)
                throw std::runtime_error("Movement source did not return "+context+" "+cpu.describe_registers());
            cpu.step_instruction();++instructions;
        }
        ++calls;
        bus->debug_read_wram={};
    }
    void compare(unsigned role,const WorldActor&actor)const{const unsigned i=role*2;
        for(unsigned axis=0;axis<3;++axis){require(actor.action().position[axis]==(unsigned(word(l.position+axis*60+i))<<16|word(l.fraction+axis*60+i)),"Actor position/fraction differs");
            require(actor.action().velocity[axis]==(unsigned(word(l.velocity+axis*60+i))<<16|word(l.velocity_fraction+axis*60+i)),"Actor velocity/fraction differs");}
        require(actor.behavior.surface_flags==word(l.surface+i),"Actor surface differs");
        require(std::uint16_t(actor.behavior.collision_object)==word(l.collider+i),"Actor collided role differs");
        require(actor.behavior.path_state==word(l.path+i)&&actor.behavior.obstacle_flags==word(l.obstacle+i),"Path/obstacle state differs");
        for(unsigned v=0;v<8;++v)require(actor.action().variables[v]==word(l.vars+v*60+i),"Actor variables differ");
    }
};
WorldActorSpec spec(){WorldActorSpec s;s.sprite=1;s.npc=1;s.action.position={0x00808000,0x00808000,0x8000};
    s.action.velocity={0x00018000,0xffff4000,0x8000};s.behavior.collision_object=-1;return s;}
std::shared_ptr<ActionScriptData> inert(){return std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{0x09},0,std::vector<std::uint32_t>{0});}
struct Counts{unsigned physics{},surfaces{},collisions{},passes{},geometry{};};
struct Fixture {
    std::shared_ptr<SpriteResources> sprites;
    WorldCollision collision;
    movement_test::Fixture map;
    WorldMapArea area;
    WorldActorMovement movement;
    ActorWorld world;
    Oracle original;
    std::array<ActorId,30> ids{};
    Fixture(const eb::GameAssets &assets)
        : sprites(std::make_shared<SpriteResources>(assets.image,sprite_catalog_layout(assets.version))),
          collision(assets.image,world_collision_layout(assets.version)), area(map.area()),
          movement(collision,area),world(sprites,inert(),assets.version),original(assets) {
        world.bind_movement(movement);
        for(unsigned role=0;role<30;++role) {
            auto input=spec();
            input.npc=role%4==0?std::optional<NpcId>(0x8000+role):
                      role%4==1?std::nullopt:std::optional<NpcId>(0x1234+role);
            const auto created=world.create_authored(input,{role,role+1});
            require(bool(created),"Actual authored role allocation failed");ids[role]=*created;
        }
    }
    unsigned scratch_x()const{return original.l.current==0x1a38?0x2c48:0x2848;}
    unsigned scratch_y()const{return scratch_x()+2;}
    unsigned entry(bool terrain)const{return original.l.current==0x1a38?
        (terrain?0xc060a4:0xc066d4):(terrain?0xc05e76:0xc064a6);}
    void invoke(unsigned moving,bool terrain,bool every_actor=true) {
        for(unsigned role=0;role<30;++role)original.seed(role,world.actor(ids[role]));
        original.put(original.l.intangible,world.appearance_scene().intangibility_ticks);
        original.invoke(entry(terrain),moving,true);
        const auto result=movement.execute(call(terrain?NativeAction::CheckProspectiveTerrain:
                                                        NativeAction::CheckProspectiveNpcCollision),world,ids[moving]);
        const auto &actor=world.actor(ids[moving]);
        if(terrain&&actor.appearance_context.shape==14&&actor.behavior.direction==1&&
           actor.action().position[0]==0x8000&&actor.action().position[1]==0x8000&&
           actor.action().velocity[0]==0x10000&&actor.action().velocity[1]==0) {
            const auto anchor=movement.prospective_position();const auto origin=collision.origin(anchor,14);
            const auto &shape=collision.shape(14);
            std::cout<<"seam_witness "<<context<<" source="<<original.cpu.accumulator<<" native="
                <<(result?std::to_string(*result):"missing")<<" origin="<<origin.x<<","<<origin.y
                <<" extent_cells="<<shape.width_cells<<","<<shape.height_cells<<'\n';
            for(const auto &read:original.collision_reads)
                std::cout<<"original_cache_read offset="<<read.first<<" flags="<<read.second<<'\n';
            const CollisionSampler sampler=[&](CollisionCell cell) {
                const auto flags=area.collision(cell.x,cell.y);
                const auto index=0xe000+(cell.y&63)*64+(cell.x&63);
                std::cout<<"native_edge_cell x="<<cell.x<<" y="<<cell.y<<" flags="<<unsigned(flags)
                    <<" original_cache_offset="<<index<<" cache_flags="
                    <<unsigned(original.bus->work_ram[index])<<'\n';
                require(flags==original.bus->work_ram[index],"Seam caller cache disagrees with actual logical map cell");
                return flags;
            };
            const auto right_flags=collision.edge(sampler,origin,14,CollisionEdge::Right);
            const auto top_flags=collision.edge(sampler,origin,14,CollisionEdge::Top);
            std::cout<<"native_seam_right="<<right_flags<<" top="<<top_flags<<'\n'<<std::flush;
        }
        if(result!=original.cpu.accumulator)
            throw std::runtime_error("Actual producer return differs source="+std::to_string(original.cpu.accumulator)+
                " native="+(result?std::to_string(*result):"missing")+" scratch="+
                std::to_string(original.word(scratch_x()))+","+std::to_string(original.word(scratch_y()))+": "+context);
        ++checks;
        const auto prospective=movement.prospective_position();
        require(prospective.x==original.word(scratch_x())&&prospective.y==original.word(scratch_y()),
                "Actual prospective scratch differs or was overwritten on disabled branch");
        if(every_actor)for(unsigned role=0;role<30;++role)original.compare(role,world.actor(ids[role]));
        else original.compare(moving,world.actor(ids[moving]));
        require(world.ticks()==0,"Producer advanced the actual actor clock");
    }
};
void bodies(const eb::GameAssets &assets) {
    Fixture f(assets);
    const auto setup=[&](unsigned moving,unsigned selected,int dx,int dy,unsigned direction) {
        for(unsigned role=0;role<30;++role) {
            auto &actor=f.world.actor(f.ids[role]);actor.action()=spec().action;
            actor.action().position={128u<<16,128u<<16,0x87654321};actor.action().velocity={};
            actor.behavior.direction=direction;actor.behavior.collision_object=-32768;
            actor.hitbox=ActorHitbox{10,{3,5},{7,9}};
        }
        auto &actor=f.world.actor(f.ids[moving]);actor.behavior.collision_object=-1;
        auto &candidate=f.world.actor(f.ids[selected]);candidate.behavior.collision_object=-1;
        candidate.action().position={std::uint32_t(128+dx)<<16,std::uint32_t(128+dy)<<16,0x01234567};
        candidate.hitbox=ActorHitbox{10,{4,6},{8,10}};candidate.behavior.direction=direction;
        f.world.appearance_scene().intangibility_ticks=100;
    };
    for(unsigned selected=0;selected<30;++selected) {
        const unsigned moving=selected==29?0:29;
        context=assets.title+" all-role actual NPC producer candidate="+std::to_string(selected);
        setup(moving,selected,0,0,0);f.world.actor(f.ids[selected]).scripts_and_physics_enabled=false;
        f.invoke(moving,false);
        require(f.world.actor(f.ids[moving]).behavior.collision_object==(selected==23?-1:int(selected)),
                "All30 scan applied an NPC id/intangibility/pause filter or admitted controller23");
    }
    unsigned random=0x71923456;
    const auto next=[&](){random=random*1664525u+1013904223u;return random;};
    constexpr std::array<unsigned,12> directions{0,1,2,3,4,5,6,7,8,0x102,0x8000,0xffff};
    for(unsigned trial=0;trial<4000;++trial) {
        const unsigned moving=trial%30;
        const unsigned center=trial%13==0?0:trial%13==1?65535:trial%13==2?32768:128;
        context=assets.title+" original C064A6 randomized trial="+std::to_string(trial)+" role="+std::to_string(moving);
        f.world.appearance_scene().intangibility_ticks=trial&1;
        for(unsigned role=0;role<30;++role) {
            auto &actor=f.world.actor(f.ids[role]);actor.action()=spec().action;
            actor.action().position={std::uint16_t(center+int(next()%41)-20)*65536u+(next()&65535),
                std::uint16_t(center+int(next()%41)-20)*65536u+(next()&65535),next()};
            actor.action().velocity={next(),next(),next()};
            if(role==moving) {
                actor.action().position[0]=center*65536u+(next()&65535);
                actor.action().position[1]=center*65536u+(next()&65535);
                actor.action().velocity[0]=std::uint32_t(int(next()%0x40000)-0x20000);
                actor.action().velocity[1]=std::uint32_t(int(next()%0x40000)-0x20000);
            }
            actor.behavior.direction=std::uint16_t(directions[next()%directions.size()]);
            actor.behavior.collision_object=(next()%7==0)?-32768:-1;
            actor.behavior.path_state=std::uint16_t(next());actor.behavior.obstacle_flags=std::uint16_t(next());
            actor.behavior.surface_flags=std::uint16_t(next());actor.scripts_and_physics_enabled=(next()&1)!=0;
            actor.hitbox=ActorHitbox{std::uint16_t(next()%9?10:0),
                {std::uint16_t(next()%12),std::uint16_t(next()%18)},
                {std::uint16_t(next()%16),std::uint16_t(next()%20)}};
            for(unsigned v=0;v<8;++v)actor.action().variables[v]=std::uint16_t(next());
        }
        f.invoke(moving,false);
    }
    constexpr std::array<int,25> edges{-18,-17,-16,-15,-14,-11,-10,-9,-8,-7,-6,-5,-4,0,4,5,6,7,8,9,10,11,14,15,16};
    for(unsigned selected:{2u,24u})for(unsigned direction:{0u,2u,6u,7u})
      for(int dx:edges)for(int dy:edges) {
        context=assets.title+" strict original NPC edge role="+std::to_string(selected)+
            " direction="+std::to_string(direction)+" dx="+std::to_string(dx)+" dy="+std::to_string(dy);
        setup(29,selected,dx,dy,direction);f.invoke(29,false,false);
    }
    // Prime the real scratch, then check the actual disabled caller branch.
    setup(29,23,0,0,0);auto &moving=f.world.actor(f.ids[29]);
    moving.action().position={0x12345678,0xabcd4321,0x87654321};moving.action().velocity={};
    context=assets.title+" disabled source caller retains scratch and collision sentinel";
    f.invoke(29,false);const auto scratch=f.movement.prospective_position();
    moving.behavior.collision_object=-32768;moving.action().velocity={0x10000,0x20000,0x13579bdf};
    f.invoke(29,false);
    require(f.movement.prospective_position()==scratch&&moving.behavior.collision_object==-32768,
            "Disabled branch discarded actual retained scratch/collider");
}
void terrain(const eb::GameAssets &assets) {
    Fixture f(assets);auto &actor=f.world.actor(f.ids[23]);
    constexpr std::array<unsigned,12> directions{0,1,2,3,4,5,6,7,8,0x102,0x8000,0xffff};
    constexpr std::array<unsigned,11> coordinates{0,1,7,8,32760,32767,32768,65520,65527,65534,65535};
    constexpr std::array<std::array<std::uint32_t,2>,7> velocities{{
        {0,0},{1,0x1000},{0x1000,0xffffc000},{0x10000,0},
        {0xffff0000,0xffff0000},{0x18000,0xffff4000},{0x20000,0x18000}}};
    for(unsigned coordinate:coordinates) {
      // Caller-provided collision cache contains the same declared map bytes;
      // the original helper still runs its real geometry and edge traversal.
      f.original.cache(f.area,{std::uint16_t(coordinate),std::uint16_t(coordinate)});
      for(unsigned shape=0;shape<17;++shape)for(unsigned direction:directions)
        for(const auto velocity:velocities) {
        context=assets.title+" original C05E76 shape="+std::to_string(shape)+
            " direction="+std::to_string(direction)+" coordinate="+std::to_string(coordinate)+
            " vx="+std::to_string(velocity[0])+" vy="+std::to_string(velocity[1]);
        actor.action()=spec().action;
        actor.action().position={coordinate*65536u+0x8000,coordinate*65536u+0x8000,0xfedc1234};
        actor.action().velocity={velocity[0],velocity[1],0x12345678};
        actor.appearance_context.shape=shape;actor.behavior.direction=std::uint16_t(direction);
        actor.behavior.obstacle_flags=0xbeef;actor.behavior.surface_flags=0x5a5a;
        actor.behavior.collision_object=-32768;actor.behavior.path_state=0x8000;
        const auto position=actor.action().position,retained_velocity=actor.action().velocity;
        f.invoke(23,true,false);
        require(actor.action().position==position&&actor.action().velocity==retained_velocity,
                "Terrain query moved actor or changed its live velocity");
        const auto at=f.movement.prospective_position();
        if(at.x==coordinate&&at.y==coordinate)
            require(actor.behavior.obstacle_flags==0xbeef,
                    "Fraction-only/no integer motion overwrote retained obstacle word");
        else require(!(actor.behavior.obstacle_flags&~0xd0u),"Terrain result lost D0 mask");
      }
    }
}
}
int main(int argc,char **argv) {
    try {
        if(argc==1) {
            std::cout<<"SKIP native actor obstacles source reference: provide pack.ebpak ...\n";
            return 77;
        }
        for(int i=1;i<argc;++i) {
            const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
            const auto before_calls=calls,before_checks=checks,before_instructions=instructions;
            bodies(assets);terrain(assets);
            std::cout<<assets.title<<" complete original/native C064A6/C05E76 calls="<<calls-before_calls
                <<" checks="<<checks-before_checks<<" actual_instructions="<<instructions-before_instructions<<'\n'<<std::flush;
        }
    } catch(const std::exception &error) {std::cerr<<error.what()<<'\n';return 1;}
}
