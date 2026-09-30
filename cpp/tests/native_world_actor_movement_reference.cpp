// Actual source callbacks and numeric-role collision traversal are the oracle.
// No source runtime, actor table or processor is linked into the native owner.
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
void require(bool ok,const char*message){if(!ok)throw std::runtime_error(std::string(message)+": "+context);}
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
unsigned callback(const Layout&l,ActorPhysics mode){switch(mode){
    case ActorPhysics::PlanarSurface:return l.planar_surface;case ActorPhysics::SpatialSurface:return l.spatial_surface;
    case ActorPhysics::CollisionSurface:return l.collision_surface;case ActorPhysics::Collision:return l.collision;
    default:throw std::runtime_error("Unexpected reference callback");}}
BoundAction call(NativeAction op){BoundAction b;b.operation=op;return b;}
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;eb::MainCpu65816 cpu;Layout l;
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
        put(l.current,role);put(0x1e88,role*2);
        if(far)cpu.execute_instruction<0x22>(entry,4);else cpu.execute_instruction<0x20>(entry,3);
        unsigned steps=0;while(cpu.program_counter!=0xc0ff00u+(far?4:3)||cpu.stack_pointer!=0x1fff){
            if(++steps>1000000)throw std::runtime_error("Movement source did not return "+context+" "+cpu.describe_registers());cpu.step_instruction();}
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
void physics_reference(const eb::GameAssets&assets,Counts&counts){
    auto sprites=std::make_shared<SpriteResources>(assets.image,sprite_catalog_layout(assets.version));
    const WorldCollision collision(assets.image,world_collision_layout(assets.version));
    const movement_test::Fixture map;const auto area=map.area();WorldActorMovement movement(collision,area);
    ActorWorld world(sprites,inert(),assets.version);world.bind_movement(movement);
    const auto id=*world.create_authored(spec(),{23,24});auto &actor=world.actor(id);Oracle oracle(assets);
    // Imported CREATE metadata must initialize the same full-word profile and
    // all four extents for every authored sprite, not just a boolean hitbox.
    const auto creation=import_actor_creation_data(assets.image,assets.version);
    for(unsigned group=0;group<sprites->size();++group){const auto &def=sprites->definition(group);const auto box=movement.prepare_hitbox(def);
        require(box.enabled==creation.collision_profiles.at(def.shape)&&box.vertical==ActorHitbox::Extent{def.hitbox[0],def.hitbox[1]}&&
            box.lateral==ActorHitbox::Extent{def.hitbox[2],def.hitbox[3]},"Creation geometry differs");++counts.geometry;}
    for(auto mode:{ActorPhysics::PlanarSurface,ActorPhysics::SpatialSurface,ActorPhysics::CollisionSurface,ActorPhysics::Collision})
    for(unsigned shape=0;shape<17;++shape)for(unsigned path:{0u,1u,0x8000u,0xffffu})for(unsigned obstacle:{0u,0x10u,0x40u,0x80u,0xd0u})for(int collided:{-1,-32768,0,29}){
        context=assets.title+" callback="+std::to_string(unsigned(mode))+" shape="+std::to_string(shape)+" path="+std::to_string(path)+" obstacle="+std::to_string(obstacle)+" collider="+std::to_string(collided);
        actor.action()=spec().action;actor.behavior.physics=mode;actor.behavior.path_state=path;actor.behavior.obstacle_flags=obstacle;
        actor.behavior.collision_object=collided;actor.behavior.surface_flags=0xa53f;actor.appearance_context.shape=shape;
        oracle.seed(23,actor);oracle.cache(area,{128,128});oracle.invoke(callback(oracle.l,mode),23,false);movement.advance(actor);oracle.compare(23,actor);++counts.physics;
    }
    for(unsigned shape=0;shape<17;++shape)for(unsigned coordinate:{0u,1u,7u,8u,32760u,32767u,32768u,65520u,65527u,65534u,65535u}){
        context=assets.title+" surface shape="+std::to_string(shape)+" coordinate="+std::to_string(coordinate);
        actor.action()=spec().action;actor.action().position={coordinate<<16|0xffff,coordinate<<16|1,0xffff8000};
        actor.appearance_context.shape=shape;actor.behavior.surface_flags=0xabcd;oracle.seed(23,actor);
        oracle.cache(area,{std::uint16_t(coordinate),std::uint16_t(coordinate)});oracle.invoke(oracle.l.surface_call,23,true);
        const auto result=movement.execute(call(NativeAction::SurfaceAtCurrentPosition),world,id);
        require(result==oracle.cpu.accumulator,"Explicit surface return differs");oracle.compare(23,actor);++counts.surfaces;
    }
}
void collision_reference(const eb::GameAssets&assets,Counts&counts){
    auto sprites=std::make_shared<SpriteResources>(assets.image,sprite_catalog_layout(assets.version));
    const WorldCollision collision(assets.image,world_collision_layout(assets.version));const movement_test::Fixture map;const auto area=map.area();
    WorldActorMovement movement(collision,area);ActorWorld world(sprites,inert(),assets.version);world.bind_movement(movement);Oracle oracle(assets);
    std::array<ActorId,30> ids{};for(unsigned r=0;r<30;++r){auto s=spec();s.npc=r%4==0?std::optional<NpcId>(0x8000+r):r%4==1?std::nullopt:std::optional<NpcId>(r+1);ids[r]=*world.create_authored(s,{r,r+1});}
    unsigned random=0x91234567;const auto next=[&](){random=random*1664525u+1013904223u;return random;};
    for(unsigned trial=0;trial<5000;++trial){const unsigned moving_role=std::array<unsigned,4>{0,23,24,29}[trial%4];
        const unsigned center=trial%13==0?0:trial%13==1?65535:trial%13==2?32768:128;
        context=assets.title+" collision trial="+std::to_string(trial)+" moving="+std::to_string(moving_role);
        world.appearance_scene().intangibility_ticks=trial&1;oracle.put(oracle.l.intangible,trial&1);
        for(unsigned r=0;r<30;++r){auto&a=world.actor(ids[r]);a.action()=spec().action;
            a.action().position={std::uint16_t(center+int(next()%41)-20)*65536u+(next()&0xffff),
                std::uint16_t(center+int(next()%41)-20)*65536u+(next()&0xffff),next()};
            a.action().velocity={next(),next(),next()};if(r==moving_role){a.action().position[0]=center*65536u+(next()&0xffff);
                a.action().position[1]=center*65536u+(next()&0xffff);a.action().velocity[0]=std::uint32_t(int(next()%0x40000)-0x20000);
                a.action().velocity[1]=std::uint32_t(int(next()%0x40000)-0x20000);}
            a.behavior.direction=next()%8;a.behavior.collision_object=(next()%7==0)?-32768:-1;
            a.behavior.path_state=next();a.behavior.obstacle_flags=next();a.behavior.surface_flags=next();
            a.hitbox=ActorHitbox{std::uint16_t(next()%9?10:0),{std::uint16_t(next()%12),std::uint16_t(next()%18)},
                {std::uint16_t(next()%16),std::uint16_t(next()%20)}};
            oracle.seed(r,a);
        }
        oracle.invoke(oracle.l.collision_call,moving_role,true);
        require(movement.execute(call(NativeAction::CheckProspectiveActorCollision),world,ids[moving_role])==oracle.cpu.accumulator,"Prospective collision return differs");
        for(unsigned r=0;r<30;++r)oracle.compare(r,world.actor(ids[r]));++counts.collisions;
    }
    // Enumerate exact near/far equality boundaries separately, including the
    // ordinary pass's one-pixel shrink and party self-inclusion.
    for(unsigned selected:{2u,22u,24u,29u})for(unsigned direction:{0u,2u,6u,7u})for(int dx=-17;dx<=17;++dx)for(int dy=-17;dy<=17;++dy){
        context=assets.title+" edge role="+std::to_string(selected)+" dir="+std::to_string(direction)+" dxdy="+std::to_string(dx)+","+std::to_string(dy);
        for(unsigned r=0;r<30;++r){auto&a=world.actor(ids[r]);a.behavior.collision_object=-32768;}
        auto&a=world.actor(ids[23]);auto&b=world.actor(ids[selected]);
        a.action().position={128u<<16,128u<<16,0};a.action().velocity={};b.action().position={unsigned(128+dx)<<16,unsigned(128+dy)<<16,0};
        a.behavior.direction=direction;b.behavior.direction=(direction+2)%8;a.behavior.collision_object=b.behavior.collision_object=-1;
        a.hitbox=ActorHitbox{10,{3,5},{7,9}};b.hitbox=ActorHitbox{10,{4,6},{8,10}};
        oracle.put(oracle.l.intangible,0);world.appearance_scene().intangibility_ticks=0;
        for(unsigned r=0;r<30;++r)oracle.seed(r,world.actor(ids[r]));oracle.invoke(oracle.l.collision_call,23,true);
        require(movement.execute(call(NativeAction::CheckProspectiveActorCollision),world,ids[23])==oracle.cpu.accumulator,"Collision edge differs");
        oracle.compare(23,a);++counts.collisions;
    }
}
void pass_reference(eb::GameAssets assets,Counts&counts){
    const auto l=assets.version==eb::GameVersion::JP?jp:us;
    // All scripts run before any callback-selected physics. The first actor's
    // prospective collision sees the later actor's pre-movement coordinates.
    std::vector<std::uint8_t> bytes;std::vector<std::uint32_t> roots;
    const std::array<ActorPhysics,4> modes{ActorPhysics::CollisionSurface,ActorPhysics::SpatialSurface,ActorPhysics::PlanarSurface,ActorPhysics::Collision};
    for(auto mode:modes){const unsigned at=0x38000+bytes.size();roots.push_back(at);const unsigned physics=callback(l,mode);
        bytes.insert(bytes.end(),{0x25,std::uint8_t(physics),std::uint8_t(physics>>8),0x42,std::uint8_t(l.collision_call),std::uint8_t(l.collision_call>>8),0xc0,
            0x1f,1,0x14,0,2,1,0,0x06,1,0x19,std::uint8_t(at),std::uint8_t(at>>8)});}
    std::copy(bytes.begin(),bytes.end(),assets.image.begin()+0x38000);
    auto scripts=std::make_shared<ActionScriptData>(bytes,0x38000,roots);
    auto sprites=std::make_shared<SpriteResources>(assets.image,sprite_catalog_layout(assets.version));
    const WorldCollision collision(assets.image,world_collision_layout(assets.version));const movement_test::Fixture map;const auto area=map.area();
    WorldActorMovement movement(collision,area);ActorWorld world(sprites,scripts,assets.version);world.bind_movement(movement);Oracle oracle(assets);
    oracle.put(l.first,0);oracle.put(l.draw,l.none);std::array<ActorId,4> ids{};
    for(unsigned r=0;r<4;++r){auto s=spec();s.script=r;s.npc=r+1;s.action.position[0]+=r*0x70000;s.behavior.physics=modes[r];
        s.action.velocity={std::uint32_t((r+1)*0x8000),0xffffc000,std::uint32_t((r+1)*0x1000)};
        ids[r]=*world.create_authored(s,{r,r+1});auto&a=world.actor(ids[r]);oracle.seed(r,a);
        const unsigned i=r*2;oracle.put(l.next+i,r==3?0xffff:i+2);oracle.put(l.task+i,i);oracle.put(l.next_task+i,0xffff);
        oracle.put(l.cursor+i,roots[r]);oracle.put(l.bank+i,0xc3);oracle.put(l.sleep+i,0);oracle.put(l.stack+i,0);oracle.put(l.temp+i,0);
        oracle.put(l.tick_low+i,l.tick_none);oracle.put(l.tick_high+i,l.tick_none>>16);oracle.put(l.physics+i,callback(l,modes[r]));
        oracle.put(l.projection+i,l.project);oracle.put(l.animation+i,0);oracle.put(l.priority+i,1);
    }
    for(unsigned tick=0;tick<96;++tick){context=assets.title+" complete actor pass="+std::to_string(tick);
        for(unsigned r=0;r<4;++r){auto&a=world.actor(ids[r]);a.scripts_and_physics_enabled=!(tick%11==0&&r==2);
            a.behavior.path_state=tick%7==0?0x8000:0;a.behavior.obstacle_flags=tick%9==0?0x10:0;
            oracle.put(l.tick_high+r*2,(l.tick_none>>16)|(a.scripts_and_physics_enabled?0:0x4000));
            oracle.put(l.path+r*2,a.behavior.path_state);oracle.put(l.obstacle+r*2,a.behavior.obstacle_flags);}
        oracle.cache(area,{128,128});oracle.invoke(l.run,0,true);
        require(world.advance_tick()==WorldTickResult::Complete,"Native complete actor pass requested an unsupported service");
        for(unsigned r=0;r<4;++r){const auto&a=world.actor(ids[r]);oracle.compare(r,a);
            require(a.behavior.projected_x==std::int16_t(oracle.word(l.screen_x+r*2))&&a.behavior.projected_y==std::int16_t(oracle.word(l.screen_y+r*2)),"Post-movement projection differs");
            require(a.tasks()[0].temporary==oracle.word(l.temp+r*2)&&a.tasks()[0].sleep_frames==oracle.word(l.sleep+r*2),"Source call return/sleep differs");}
        require(world.ticks()==tick+1,"Movement service added an extra world tick");++counts.passes;
    }
}
}
int main(int argc,char**argv){try{require(argc>=2,"native_world_actor_movement_reference pack.ebpak ...");
    for(int i=1;i<argc;++i){auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());Counts c;
        physics_reference(assets,c);collision_reference(assets,c);pass_reference(assets,c);
        std::cout<<"PASS "<<assets.title<<": "<<c.geometry<<" imported hitboxes, "<<c.physics<<" physics callbacks, "<<c.surfaces
            <<" direct surfaces, "<<c.collisions<<" actor collision calls, "<<c.passes<<" full source passes\n";}
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
