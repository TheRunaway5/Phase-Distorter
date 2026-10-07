#include "eb/native/world_actor_movement.hpp"
#include "native_sprite_fixture.hpp"
#include "native_world_movement_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool value,const char *message) { ++checks;if(!value)throw std::runtime_error(message); }
std::optional<std::uint16_t> execute(WorldActorMovement &movement,ActorWorld &world,ActorId id,NativeAction operation) {
    BoundAction request{};request.operation=operation;
    return movement.execute(request,world,id);
}
struct Fixture {
    native_sprite_test::Fixture artwork;
    std::shared_ptr<SpriteResources> sprites=std::make_shared<SpriteResources>(artwork.bytes,artwork.layout);
    std::shared_ptr<const ActionScriptData> scripts=std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{9},0,std::vector<std::uint32_t>{0});
    ActorWorld actors{sprites,scripts,eb::GameVersion::US,AppearanceData{}};
    movement_test::Fixture terrain;
    WorldCollision collision{terrain.bytes,terrain.collision_layout};
    WorldMapArea area=terrain.area();
    WorldActorMovement movement{collision,area};
    Fixture() { actors.bind_movement(movement); }
    ActorId create(unsigned role,unsigned x=100,unsigned y=100) {
        WorldActorSpec spec;spec.npc=NpcId(std::uint16_t(0x1234+role));spec.action.position={x<<16,y<<16,0x12345678};
        spec.hitbox=ActorHitbox{1,{8,8},{8,8}};
        const auto id=actors.create_authored(spec,{role,role+1});check(bool(id),"Fixture role allocation failed");return *id;
    }
};
void terrain() {
    Fixture f;const auto id=f.create(0);auto &actor=f.actors.actor(id);
    actor.action().position[0]|=0x8000;actor.action().velocity[0]=0x1000;
    actor.behavior.obstacle_flags=0xbeef;actor.behavior.surface_flags=0x1234;
    actor.behavior.direction=0xabcd;actor.appearance_context.shape=17;
    const auto pose=actor.action().position,velocity=actor.action().velocity;
    check(execute(f.movement,f.actors,id,NativeAction::CheckProspectiveTerrain)==0,
          "Fraction-only motion did not return the source low-byte zero");
    check(f.movement.prospective_position()==CollisionPoint{100,100}&&actor.behavior.obstacle_flags==0xbeef,
          "No integer motion lost prospective coordinates or retained obstacles");
    actor.action().velocity[0]=0x10000;
    const auto retained=f.movement.prospective_position();bool rejected=false;
    try {(void)execute(f.movement,f.actors,id,NativeAction::CheckProspectiveTerrain);}catch(const std::exception&){rejected=true;}
    check(rejected&&f.movement.prospective_position()==retained&&actor.behavior.obstacle_flags==0xbeef,
          "Unowned moving shape mutated the producer before rejection");
    actor.appearance_context.shape=0;
    check(execute(f.movement,f.actors,id,NativeAction::CheckProspectiveTerrain)==0&&actor.behavior.obstacle_flags==0,
          "Unmatched source direction sampled a fictitious edge");
    actor.behavior.direction=0;actor.action().velocity={0xffff0000,0xffff0000,0x789abcde};
    (void)execute(f.movement,f.actors,id,NativeAction::CheckProspectiveTerrain);
    check(f.movement.prospective_position()==CollisionPoint{99,99}&&!(actor.behavior.obstacle_flags&~0xd0u),
          "Negative prospective motion or source D0 mask changed");
    check(actor.action().position==pose&&actor.action().velocity[2]==0x789abcde&&
          actor.behavior.surface_flags==0x1234&&f.actors.ticks()==0&&velocity[0]==0x1000,
          "Obstacle query moved an actor, refreshed its surface or ran a tick");
}
void bodies() {
    Fixture f;const auto moving=f.create(29);auto &actor=f.actors.actor(moving);
    (void)f.create(23);const auto later=f.create(3,85,100);const auto first=f.create(2,85,100);
    f.actors.appearance_scene().intangibility_ticks=100;
    f.actors.actor(first).scripts_and_physics_enabled=false;
    check(execute(f.movement,f.actors,moving,NativeAction::CheckProspectiveNpcCollision)==2,
          "NPC collision lost numeric order, paused roles or high NPC selectors");
    f.actors.erase(first);
    check(execute(f.movement,f.actors,moving,NativeAction::CheckProspectiveNpcCollision)==3,
          "Retired role shadowed an occupied later collider");
    f.actors.actor(later).action().position[0]=84u<<16;
    check(execute(f.movement,f.actors,moving,NativeAction::CheckProspectiveNpcCollision)==0xffff,
          "Exact far-edge contact or controller23 was treated as overlap");
    const auto party=f.create(24);f.actors.actor(party).hitbox->enabled=false;
    check(execute(f.movement,f.actors,moving,NativeAction::CheckProspectiveNpcCollision)==0xffff,
          "Disabled candidate hitbox was inspected as a collider");
    f.actors.actor(party).hitbox->enabled=true;
    check(execute(f.movement,f.actors,moving,NativeAction::CheckProspectiveNpcCollision)==24,
          "Ordinary collision incorrectly applies the party-intangibility filter");
    const auto saved=f.movement.prospective_position();actor.behavior.collision_object=-32768;
    actor.action().velocity={0x10000,0x20000,0};
    check(execute(f.movement,f.actors,moving,NativeAction::CheckProspectiveNpcCollision)==0x8000&&
          f.movement.prospective_position()==saved&&actor.behavior.collision_object==-32768,
          "Disabled collision changed retained prospective scratch or the actor");
    check(f.actors.ticks()==0,"Collision query advanced the actual scheduler");
}
}
int main() { try {terrain();bodies();std::cout<<"PASS native actor obstacles "<<checks<<" checks\n";}
catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;} }
