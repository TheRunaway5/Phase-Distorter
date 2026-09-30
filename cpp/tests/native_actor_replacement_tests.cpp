#include "eb/native/actor_world.hpp"
#include "native_sprite_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool ok, const char *message) { if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F f, const char *message) {
    try { f(); } catch (const std::exception &) { return; }
    throw std::runtime_error(message);
}
std::shared_ptr<ActionScriptData> content() {
    return std::make_shared<ActionScriptData>(std::vector<ActionScriptBlock>{
        {0, {0x14,0,2,1,0,0x06,1,0x19,0,0}},
        {0x10, {0x1e,0x34,0x12,0x09}},
        {0x20, {0x14,1,2,1,0,0x06,1,0x19,0x20,0}},
        {0x30, {0x1d,0x34,0x12,0x07,0x50,0,0x1a,0x60,0,0x09}},
        {0x40, {0x1f,2,0x09}},
        {0x50, {0x1d,0x78,0x56,0x06,7,0x09}},
        {0x60, {0x06,5,0x1b}},
    }, std::vector<std::uint32_t>{0,0x10,0x20,0x30,0x40});
}
WorldActorSpec spec(unsigned script=0) { WorldActorSpec s; s.script=script; return s; }
void task_replacement() {
    const auto data=content(); ActionScripts scripts(data,0x30);
    scripts.actor().variables[7]=99;
    require(scripts.tick()==ActionTickResult::Complete,"Fork fixture did not complete");
    const auto prior=scripts.tasks();
    require(prior.size()==2&&prior[0].temporary==0x1234&&prior[0].stack_depth==1&&
            prior[0].sleep_frames==4&&prior[1].temporary==0x5678,"Fork fixture was vacuous");
    rejects([&]{scripts.replace(0xdead);},"Missing entry accepted");
    require(scripts.tasks().size()==2&&scripts.tasks()[0].cursor==prior[0].cursor,
            "Invalid replacement changed the task chain");
    scripts.replace(0x40); const auto replacement=scripts.tasks();
    require(replacement.size()==1&&replacement[0].id==prior[0].id&&replacement[0].temporary==0x1234&&
            replacement[0].sleep_frames==0&&replacement[0].stack_depth==0&&replacement[0].cursor==0x40&&
            scripts.actor().variables[7]==99,"Replacement reset primary identity or actor state");
    require(scripts.tick()==ActionTickResult::Complete&&scripts.actor().variables[2]==0x1234,
            "Replacement entry did not observe retained TEMP");
    ActionScripts pending(data,0x10); pending.tick(); const auto request=*pending.request();
    rejects([&]{pending.replace(0);},"Executing interpreter replacement was accepted");
    require(pending.request()&&pending.request()->task==request.task&&pending.tasks()[0].cursor==0x13,
            "Rejected replacement consumed the pending request");
}
void world_replacement(std::shared_ptr<SpriteResources> sprites) {
    ActorWorld world(sprites,content(),eb::GameVersion::US);
    const auto a=*world.create_authored(spec(),{8,9});
    const auto b=*world.create_authored(spec(1),{2,3});
    const auto c=*world.create_authored(spec(),{6,7});
    require(world.advance_tick()==WorldTickResult::NeedsEngine,"World did not suspend");
    const auto before=world.actors();
    world.replace_script(a,0x20); world.replace_script(c,0x20);
    const auto pending=*world.request();
    world.actor(b).tick_callback_enabled=false; world.actor(b).scripts_and_physics_enabled=false;
    rejects([&]{world.replace_script(b,0x20);},"Pending actor replacement was accepted");
    require(world.request()&&world.request()->action.task==pending.action.task&&
            !world.actor(b).tick_callback_enabled&&!world.actor(b).scripts_and_physics_enabled,
            "Rejected world replacement was not atomic");
    world.respond(12);
    require(world.advance_tick()==WorldTickResult::Complete&&world.actors()==before&&
            world.actor(a).action().variables[0]==1&&world.actor(a).action().variables[1]==0&&
            world.actor(c).action().variables[0]==0&&world.actor(c).action().variables[1]==1&&
            world.actor(c).script_style()==0,"Replacement changed current-pass actor ordering/style");
    world.advance_tick();
    require(world.actor(a).action().variables[1]==1&&world.actor(c).action().variables[1]==2,
            "Replacement failed to start on the next eligible actor pass");
    world.replace_script(b,0x30);
    require(world.actor(b).tick_callback_enabled&&world.actor(b).scripts_and_physics_enabled&&
            world.actor(b).behavior.tick==ActorTickCallback::None&&world.actor(b).script_style()==1,
            "Replacement failed to clear callback/pause without changing style");
    world.advance_tick(); const auto temp=world.actor(b).tasks()[0].temporary;
    world.replace_script(b,0x40); world.advance_tick();
    require(temp==0x1234&&world.actor(b).action().variables[2]==temp,"Compiled replacement lost primary TEMP");

    ActorWorld cancelled(sprites,content(),eb::GameVersion::US);
    const auto gone=cancelled.create(spec(1)); cancelled.advance_tick(); cancelled.erase(gone);
    rejects([&]{cancelled.replace_script(gone,0);},"Deleted actor replacement was accepted");
    require(!cancelled.request()&&cancelled.advance_tick()==WorldTickResult::Complete,
            "Deletion did not cancel the pending interpreter");

    ActorWorld camera(sprites,content(),eb::GameVersion::US);
    auto view=spec(); view.behavior.tick=ActorTickCallback::CenterCamera;
    const auto tail=camera.create(view);
    require(camera.advance_tick()==WorldTickResult::NeedsCameraRefresh,"Camera fixture did not suspend");
    const auto newborn=camera.create(spec()); camera.replace_script(tail,0x20);
    require(camera.camera_refresh()&&camera.camera_refresh()->actor==tail,"Replacement dropped committed camera work");
    camera.respond_camera_refresh(); camera.advance_tick();
    require(camera.actor(tail).action().variables[1]==0&&camera.actor(newborn).action().variables[0]==0,
            "Replacement violated captured-next tail scheduling");
    camera.advance_tick();
    require(camera.actor(tail).action().variables[1]==1&&camera.actor(newborn).action().variables[0]==1,
            "Camera-boundary replacement did not start next tick");
}
void lookup_order(std::shared_ptr<SpriteResources> sprites) {
    ActorWorld world(sprites,content(),eb::GameVersion::US);
    auto s=spec(); s.sprite=1; s.npc=15;
    const auto high=*world.create_authored(s,{24,25}); s.npc=20;
    const auto low=*world.create_authored(s,{2,3});
    s.npc=35; const auto untagged=world.create(s);
    require(world.first_authored_actor_with_sprite(1)==low&&world.first_authored_actor_with_npc(15)==high&&
            !world.first_authored_actor_with_npc(35),"Lookup used creation order or untagged actors");
    world.release_appearance(low);
    require(world.first_authored_actor_with_sprite(1)==high&&!world.first_authored_actor_with_npc(20),
            "Released appearance remained in authored lookup");
    world.erase(high);
    require(!world.first_authored_actor_with_sprite(1)&&world.actor_for_npc(35)==untagged,
            "Role lookup retained erased identity or mutated native NPC registry");
    rejects([&]{world.first_authored_actor_with_sprite(0xffff);},"Unused source-slot sentinel was treated as a sprite");
}
}
int main(){try{native_sprite_test::Fixture fixture; auto sprites=std::make_shared<eb::native::SpriteResources>(fixture.bytes,fixture.layout);
    task_replacement();world_replacement(sprites);lookup_order(sprites);
    std::cout<<"Native actor replacement and role lookup tests passed\n";
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
