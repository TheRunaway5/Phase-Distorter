#include "eb/native/world_actor_movement.hpp"
#include "native_sprite_fixture.hpp"
#include "native_world_movement_fixture.hpp"
#include <iostream>
#include <stdexcept>
using namespace eb::native;
namespace {
void require(bool ok,const char *message){if(!ok)throw std::runtime_error(message);}
template<class F> void rejects(F f,const char *message){try{f();}catch(const std::exception&){return;}throw std::runtime_error(message);}
struct Fixture {
    native_sprite_test::Fixture graphics;
    movement_test::Fixture terrain;
    std::shared_ptr<SpriteResources> sprites;
    std::shared_ptr<const ActionScriptData> scripts;
    WorldCollision collision;
    WorldMapArea area;
    WorldActorMovement movement;
    Fixture():collision(terrain.bytes,terrain.collision_layout),area(terrain.area()),movement(collision,area){
        graphics.bytes[36]=3;graphics.bytes[37]=5;graphics.bytes[38]=7;graphics.bytes[39]=9;
        sprites=std::make_shared<SpriteResources>(graphics.bytes,graphics.layout);
        // Increment once/tick; explicit surface call; prospective collision call.
        const std::vector<std::uint8_t> bytes{0x14,0,2,1,0,0x06,1,0x19,0,0,
            0x42,0xdb,0xc7,0xc0,0x09,0x42,0x78,0x64,0xc0,0x09};
        scripts=std::make_shared<ActionScriptData>(bytes,0,std::vector<std::uint32_t>{0,10,15});
    }
    ActorWorld world(){return ActorWorld(sprites,scripts,eb::GameVersion::US);}
};
WorldActorSpec spec(unsigned script=0,unsigned x=100,unsigned y=100){
    WorldActorSpec s;s.script=script;
    s.action.position={x*65536u+0x8000,y*65536u+0x8000,0x8000};
    s.action.velocity={0x10000,0x8000,0x18000};
    s.behavior.collision_object=-1;return s;
}
ActorId role(ActorWorld&w,unsigned r,WorldActorSpec s=spec()){
    if(!s.npc)s.npc=r+1;const auto id=w.create_authored(s,{r,r+1});require(bool(id),"Role unavailable");return *id;
}
BoundAction call(NativeAction action){BoundAction b;b.operation=action;return b;}
void binding_and_failure(Fixture&f){
    auto world=f.world();auto s=spec();s.behavior.physics=ActorPhysics::PlanarSurface;
    const auto first=world.create(spec()),second=world.create(s);
    rejects([&]{world.advance_tick();},"Missing native terrain owner was silently accepted");
    require(world.actor(first).action().position[0]==100u*65536+0x8000 &&
        world.actor(first).action().variables[0]==1 && world.ticks()==0,"Missing owner partially integrated actors");
    world.bind_movement(f.movement);
    require(world.actor(first).hitbox==ActorHitbox{10,{3,5},{7,9}},"Creation hitbox import differs");
    require(world.advance_tick()==WorldTickResult::Complete&&world.ticks()==1&&
        world.actor(first).action().position[0]==101u*65536+0x8000&&world.actor(second).action().position[0]==101u*65536+0x8000&&
        world.actor(first).action().variables[0]==1,"Retry integrated or scripted an actor twice");
    WorldActorMovement other(f.collision,f.area);
    rejects([&]{world.bind_movement(other);},"World accepted a competing movement owner");
    world.clear_movement(other);require(world.advance_tick()==WorldTickResult::Complete,"Foreign clear detached movement");
    world.clear_movement(f.movement);rejects([&]{world.advance_tick();},"Detached movement was still used");
    world.bind_movement(f.movement);require(world.advance_tick()==WorldTickResult::Complete,"Rebound movement did not resume");
    const auto made=world.create(spec());require(world.actor(made).hitbox.has_value(),"Bound creation omitted hitbox");

    // Failure in the middle of the physics pass is retryable without moving an
    // earlier actor a second time or replaying authored script increments.
    auto partial=f.world();partial.bind_movement(f.movement);
    const auto a=partial.create(s),b=partial.create(s);partial.actor(b).appearance_context.shape=17;
    rejects([&]{partial.advance_tick();},"Invalid surface geometry was accepted");
    require(partial.actor(a).action().position[0]==101u*65536+0x8000&&
        partial.actor(b).action().position[0]==100u*65536+0x8000,"Failed terrain work committed partial actor motion");
    partial.actor(b).appearance_context.shape=0;
    require(partial.advance_tick()==WorldTickResult::Complete&&partial.actor(a).action().position[0]==101u*65536+0x8000&&
        partial.actor(b).action().position[0]==101u*65536+0x8000&&partial.actor(a).action().variables[0]==1,
        "Mid-pass recovery repeated an earlier actor");
}
void callbacks(Fixture&f){
    auto world=f.world();world.bind_movement(f.movement);const auto id=world.create(spec());auto &a=world.actor(id);
    for(auto mode:{ActorPhysics::PlanarSurface,ActorPhysics::SpatialSurface,ActorPhysics::CollisionSurface,ActorPhysics::Collision})
    for(unsigned path:{0u,1u,0x8000u,0xffffu})for(unsigned obstacle:{0u,0x10u,0x40u,0x80u,0xd0u})for(int collided:{-1,-32768,0,29}){
        a.action()=spec().action;a.behavior.physics=mode;a.behavior.path_state=path;a.behavior.obstacle_flags=obstacle;
        a.behavior.collision_object=collided;a.behavior.surface_flags=0xbeef;
        const bool gated=mode==ActorPhysics::CollisionSurface||mode==ActorPhysics::Collision;
        const bool clear=gated&&!(path&0x8000)&&(obstacle&0xd0),blocked=gated&&!(path&0x8000)&&collided>=0;
        const auto before=a.action();f.movement.advance(a);
        if(clear||blocked)require(a.action().position==before.position&&a.behavior.surface_flags==0xbeef&&
            a.action().velocity==(clear?std::array<std::uint32_t,3>{}:before.velocity),"Collision callback gate changed motion or surface");
        else require(a.action().position[0]==before.position[0]+before.velocity[0]&&
            a.action().position[1]==before.position[1]+before.velocity[1]&&
            a.action().position[2]==before.position[2]+(mode==ActorPhysics::SpatialSurface?before.velocity[2]:0)&&
            (mode!=ActorPhysics::Collision||a.behavior.surface_flags==0xbeef),"Callback integrated wrong axes");
    }
    a.behavior.physics=ActorPhysics::SpatialSurface;a.scripts_and_physics_enabled=false;
    const auto before=a.action();require(world.advance_tick()==WorldTickResult::Complete&&a.action().position==before.position,
        "Paused actor was integrated by movement owner");
    // A service bound after a pending authored terrain call resumes that exact
    // call, records the result, and integrates only in the subsequent pass.
    auto pending=f.world();const auto p=pending.create(spec(1));
    require(pending.advance_tick()==WorldTickResult::NeedsEngine&&
        pending.request()->binding.operation==NativeAction::SurfaceAtCurrentPosition,"Unbound surface call did not suspend");
    const auto expected=f.collision.vertical_surfaces([&](CollisionCell c){return f.area.collision(c.x,c.y);},{100,100},0);
    pending.bind_movement(f.movement);require(pending.advance_tick()==WorldTickResult::Complete&&
        pending.actor(p).tasks()[0].temporary==expected&&pending.actor(p).behavior.surface_flags==expected&&
        pending.actor(p).action().position[0]==101u*65536+0x8000,"Surface service call moved out of script order");
}
void actor_collision(Fixture&f){
    auto world=f.world();world.bind_movement(f.movement);auto s=spec();s.action.velocity={};
    const auto moving=role(world,0,s),npc=role(world,2,s),party=role(world,24,s);
    const auto collision=call(NativeAction::CheckProspectiveActorCollision);
    require(f.movement.execute(collision,world,moving)==24&&world.actor(moving).behavior.collision_object==24,
        "Party role did not win numeric collision traversal");
    world.appearance_scene().intangibility_ticks=1;
    require(f.movement.execute(collision,world,moving)==2,"Intangibility did not omit party collision pass");
    world.actor(npc).behavior.collision_object=-32768;
    require(f.movement.execute(collision,world,moving)==0xffff&&world.actor(moving).behavior.collision_object==-1,
        "Disabled collision candidate remained eligible");
    world.actor(moving).behavior.collision_object=-32768;
    require(f.movement.execute(collision,world,moving)==0x8000&&world.actor(moving).behavior.collision_object==-32768,
        "Disabled moving actor lost sentinel");
    world.actor(moving).behavior.collision_object=-1;world.actor(npc).behavior.collision_object=-1;
    world.actor(npc).hitbox->enabled=0;require(f.movement.execute(collision,world,moving)==0xffff,"Disabled hitbox collided");
    world.actor(npc).hitbox->enabled=10;world.release_appearance(npc);
    require(f.movement.execute(collision,world,moving)==0xffff,"Released NPC identity remained eligible");
    world.appearance_scene().intangibility_ticks=0;
    require(f.movement.execute(collision,world,party)==24,"Party pass incorrectly excluded its moving role");
    const auto untagged=world.create(spec(2));
    require(!f.movement.execute(collision,world,untagged),"Untagged actor fabricated an authored collision role");
    world.actor(moving).scripts_and_physics_enabled=false;world.actor(party).scripts_and_physics_enabled=false;
    require(world.advance_tick()==WorldTickResult::NeedsEngine&&world.request()->actor==untagged,
        "Unsupported untagged collision call did not remain pending");
}
void free_role_order(Fixture&f){
    auto w=f.world();const auto a=role(w,0),b=role(w,1);w.erase(a);w.erase(b);
    w.order_free_authored_roles();require(*w.create_authored(spec())!=0,"Host identity unexpectedly zero");
    require(w.actor_for_role(0).has_value()&&!w.actor_for_role(1),"Free role sorting did not restore ascending allocation");
}
}
int main(){try{Fixture f;binding_and_failure(f);callbacks(f);actor_collision(f);free_role_order(f);
    std::cout<<"Native world actor movement tests passed\n";
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
