#include "eb/native/world_actor_services.hpp"
#include "native_sprite_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
std::shared_ptr<EnemySpawnData> enemy_data(){auto data=std::make_shared<EnemySpawnData>();data->butterfly_battle=0;data->butterfly_enemy=0;data->battles.resize(1);data->enemies.resize(1);return data;}
void check(bool ok,const char *message){if(!ok)throw std::runtime_error(message);}
template<class F>void rejects(F f,const char *message){try{f();}catch(const std::exception&){return;}throw std::runtime_error(message);}
std::shared_ptr<ActionScriptData> content(unsigned sprite=1,eb::GameVersion version=eb::GameVersion::US){
    const unsigned service=version==eb::GameVersion::JP?0xc0a96a:0xc0a98b;
    return std::make_shared<ActionScriptData>(std::vector<ActionScriptBlock>{
        {0,{0x42,std::uint8_t(service),std::uint8_t(service>>8),std::uint8_t(service>>16),std::uint8_t(sprite),std::uint8_t(sprite>>8),1,0,0x1f,0,0x06,1,0x09}},
        {0x20,{0x14,7,2,3,0,0x06,1,0x09}}, {0x30,{0x09}}},std::vector<std::uint32_t>{0,0x20,0x30});
}
PreparedActorState prepared(){PreparedActorState p;p.x=0xaa;p.y=0xbb;p.height=77;p.direction=7;
    for(unsigned i=0;i<8;++i)p.variables[i]=100+i;return p;}
WorldActorSpec parent(){WorldActorSpec s;s.script=0;s.action.position={0x12345678,0xffff1234,0xdead1234};
    s.behavior.direction=3;return s;}
void creation(std::shared_ptr<SpriteResources> sprites,bool has_successor){
    auto data=content();ActorWorld world(sprites,data,eb::GameVersion::US);
    WorldEnemies enemies(enemy_data(),sprites,data);
    const auto caller=*world.create_authored(parent(),{24,25});
    if(has_successor){WorldActorSpec next;next.script=2;world.create_authored(next,{25,26});}
    check(world.advance_tick()==WorldTickResult::NeedsEngine,"Creation was not a typed request");
    const auto request=*world.request();
    check(request.binding.operation==NativeAction::CreateActor&&request.binding.parameter_bytes==4&&
        std::get<CreateActorOperands>(request.binding.payload)==CreateActorOperands{1,1},"Compound creation operands were truncated");
    check(!fulfill_actor_lifecycle(world,enemies)&&world.size()==(has_successor?2:1)&&world.request(),"Missing prepared owner invented creation defaults");
    const auto state=prepared();check(fulfill_actor_lifecycle(world,enemies,nullptr,&state),"Prepared creation did not resolve");
    const auto child=*world.actor_for_role(0);const auto &actor=world.actor(child);
    check(actor.script_style()==1&&actor.appearance.sprite()==1&&actor.action().position==
        std::array<std::uint32_t,3>{0x12348000,0xffff8000,0x004d8000}&&actor.action().variables==state.variables&&
        actor.behavior.direction==0&&actor.action().priority==1&&actor.action().animation==0xffff&&
        actor.tasks()[0].cursor==0x20&&world.actor(caller).tasks()[0].temporary==0,"Creation inherited the wrong parent/prepared fields or returned host ID");
    check(world.advance_tick()==WorldTickResult::Complete&&world.actor(caller).action().variables[0]==0&&
        actor.action().variables[7]==107+(has_successor?3:0),"Creation violated captured-next scheduling");
    world.advance_tick();check(actor.action().variables[7]==110,"New actor did not execute exactly once");
}
void exhaustion(std::shared_ptr<SpriteResources> sprites){
    auto data=content();ActorWorld world(sprites,data,eb::GameVersion::US);WorldEnemies enemies(enemy_data(),sprites,data);
    WorldActorSpec occupied;occupied.script=2;
    for(unsigned i=0;i<22;++i)world.create_authored(occupied);
    const auto caller=*world.create_authored(parent(),{24,25});world.advance_tick();const auto before=world.actors();const auto state=prepared();
    check(!fulfill_actor_lifecycle(world,enemies,nullptr,&state)&&world.request()&&world.actors()==before&&
        world.actor(caller).tasks()[0].cursor==4,"Role exhaustion corrupted an actor or consumed request operands");
    world.erase(*world.actor_for_role(7));check(fulfill_actor_lifecycle(world,enemies,nullptr,&state),"Freed role did not resume retained creation");
    check(world.actor(caller).tasks()[0].temporary==7&&world.actor(*world.actor_for_role(7)).script_style()==1,
        "Creation failed to return/reuse released role");world.advance_tick();
    check(world.actor(caller).action().variables[0]==7,"Authored continuation did not observe numeric role");
    auto invalid=content(0xffff);ActorWorld bad(sprites,invalid,eb::GameVersion::US);WorldEnemies other(enemy_data(),sprites,invalid);
    bad.create(parent());bad.advance_tick();rejects([&]{fulfill_actor_lifecycle(bad,other,nullptr,&state);},"Invalid sprite accepted");
    check(bad.size()==1&&bad.request(),"Invalid creation was not atomic");
}
void operand_boundaries(){
    for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}){
        ActionBindings bindings(version);const unsigned helper=version==eb::GameVersion::JP?0xc0a96a:0xc0a98b;
        for(unsigned at:{0x31234u,0x3fffcu,0x3fffdu,0x3fffeu,0x3ffffu}){
            std::vector<std::uint8_t> bytes(0x20000);bytes[at-0x30000]=0x34;
            auto data=std::make_shared<ActionScriptData>(bytes,0x30000);
            const ActionEngineRequest request{ActionRequestKind::CallEngine,1,helper,0,0,0xdead,at};
            if((at&0xffff)==0xfffd||(at&0xffff)==0xffff)
                rejects([&]{bindings.compile(request,*data);},"Escaping whole-word source read was silently wrapped");
            else {const auto bound=bindings.compile(request,*data);check(std::get<CreateActorOperands>(bound.payload).sprite==0x34&&
                bound.parameter_bytes==4&&bound.temporary_input==ActionTemporaryInput::Independent,"Typed bank-boundary binding differs");}
        }
    }
}
}
int main(){try{native_sprite_test::Fixture fixture;auto sprites=std::make_shared<eb::native::SpriteResources>(fixture.bytes,fixture.layout);
    creation(sprites,false);creation(sprites,true);exhaustion(sprites);operand_boundaries();
    std::cout<<"Native authored actor creation service tests passed\n";
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
