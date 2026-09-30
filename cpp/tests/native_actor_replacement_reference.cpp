// Original US/JP replacement, role queries and actor scheduler. The fixture's
// engine-call boundary requests replacement of other actors; all task/list
// traversal and both INIT_ENTITY_UNKNOWN entrypoints execute original source.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/actor_world.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_sprite_fixture.hpp"
#include <functional>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
std::string context;
void check(bool ok,const char *message){if(!ok)throw std::runtime_error(std::string(message)+": "+context);}
struct Original {
    std::vector<std::uint8_t> image;
    std::unique_ptr<eb::SnesBus> bus; std::unique_ptr<eb::MainCpu65816> cpu;
    bool jp; unsigned shift;
    Original(const eb::GameAssets &assets,const std::vector<ActionScriptBlock> &blocks)
      :image(assets.image),jp(assets.version==eb::GameVersion::JP),shift(jp?10:0){
        for(const auto &b:blocks)std::copy(b.bytes.begin(),b.bytes.end(),image.begin()+b.offset);
        bus=std::make_unique<eb::SnesBus>(image,assets.version);cpu=std::make_unique<eb::MainCpu65816>(*bus);
        cpu->set_runtime(eb::MainCpuRuntime::Legacy);cpu->emulation_mode=false;
        cpu->status_register=eb::MainCpu65816::InterruptDisable;cpu->data_bank=0x7e;
        cpu->direct_page=0x1e00;cpu->stack_pointer=0x1fff;
        for(unsigned role=0;role<30;++role){put(0xa62 - shift+role*2,0xffff);put(sprite()+role*2,0xffff);put(npc()+role*2,0xffff);}
        put(0xa54 - shift,60); put(0x125a - shift+60,0xffff);
        put(0xa50 - shift,0xffff);put(0xa5e - shift,jp?0x9fcf:0x9ff0);
    }
    unsigned sprite()const{return jp?0x30d4:0x2cd6;} unsigned npc()const{return jp?0x3098:0x2c9a;}
    unsigned word(unsigned at)const{return bus->work_ram.at(at)|unsigned(bus->work_ram.at(at+1))<<8;}
    void put(unsigned at,unsigned value){bus->work_ram.at(at)=value;bus->work_ram.at(at+1)=value>>8;}
    unsigned semantic_pc()const{return cpu->program_counter|0xc00000u;}
    void call(unsigned address,bool far=true,const std::function<bool()> &intercept={}){
        const auto caller=cpu->program_counter=0xc0ff00u; const auto stack=cpu->stack_pointer;
        if(far)cpu->execute_instruction<0x22>(address,4);else cpu->execute_instruction<0x20>(address&0xffff,3);
        run(caller+(far?4:3),stack,intercept);
    }
    void run(unsigned end,unsigned stack,const std::function<bool()> &intercept={}){
        for(unsigned steps=0;cpu->program_counter!=end||cpu->stack_pointer!=stack;++steps){
            check(steps<100000,"Original replacement/scheduler exceeded budget");
            if(!intercept||!intercept())cpu->step_instruction();
        }
    }
    void add(unsigned role,unsigned style,unsigned entry,unsigned sprite_id,unsigned npc_id,unsigned next=0xffff){
        const auto offset=role*2;
        put(0xa62 - shift+offset,style);put(0xa9e - shift+offset,next);put(0xada - shift+offset,offset);
        put(0x125a - shift+offset,0xffff);put(0x13fe - shift+offset,entry);put(0x148a - shift+offset,0xc3);
        put(0x1372 - shift+offset,0);put(0x12e6 - shift+offset,0);put(0x1516 - shift+offset,0);
        put(0x107a - shift+offset,jp?0x941a:0x943b);put(0x10b6 - shift+offset,0xc0);
        put(0x121e - shift+offset,jp?0x9fcf:0x9ff0);put(0x11a6 - shift+offset,jp?0xa018:0xa039);
        put(sprite()+offset,sprite_id);put(npc()+offset,npc_id);
    }
    void replace(unsigned role,unsigned entry,bool numeric=true,bool nested=false){
        cpu->accumulator=entry&0xffff;cpu->x_index=numeric?role:role*2;cpu->y_index=entry>>16|0xc0;
        const unsigned routine=(numeric?0xc093f9:0xc09403)-(jp?0x21:0);
        if(!nested)call(routine);
        else {const unsigned pc=cpu->program_counter,stack=cpu->stack_pointer;cpu->execute_instruction<0x22>(routine,4);run(pc+4,stack);}
        check(cpu->accumulator==role&&!(cpu->status_register&eb::MainCpu65816::Carry),"Replacement role return differs");
    }
    void task_tick(unsigned role){put(0x1e80,0);put(0x1e88,role*2);put(0x1e8a,word(0xada - shift+role*2));
        call(jp?0xc094e5:0xc09506,false);}
    void compare(const ActorWorld &world,ActorId id)const{
        const auto &actor=world.actor(id);const auto role=*actor.authored_role(),offset=role*2;
        const auto task=word(0xada - shift+offset);const auto native=actor.tasks().front();
        check(native.cursor==0x30000+word(0x13fe - shift+task)&&native.sleep_frames==word(0x1372 - shift+task)&&
              native.temporary==word(0x1516 - shift+task)&&native.stack_depth*2==word(0x12e6 - shift+task)&&
              actor.script_style()==word(0xa62 - shift+offset),"Replacement task state/style differs");
        for(unsigned i=0;i<3;++i)check(actor.action().variables[i]==word(0xe5e - shift+i*60+offset),"Actor update ordering/retained temporary differs");
    }
};
std::vector<ActionScriptBlock> blocks(unsigned temporary=0x1234){return {
    {0x38000,{0x1d,std::uint8_t(temporary),std::uint8_t(temporary>>8),0x07,0x30,0x80,0x1a,0x60,0x80,0x09}},
    {0x38030,{0x1d,0x78,0x56,0x06,7,0x09}}, {0x38040,{0x1f,2,0x06,1,0x09}}, {0x38060,{0x06,5,0x1b}},
    {0x38080,{0x14,0,2,1,0,0x06,1,0x19,0x80,0x80}},
    {0x38090,{0x42,0x23,0,0xc4,0x06,1,0x09}},
    {0x380a0,{0x14,1,2,1,0,0x06,1,0x19,0xa0,0x80}},
};}
std::shared_ptr<ActionScriptData> scripts(const std::vector<ActionScriptBlock>& code){return std::make_shared<ActionScriptData>(code,std::vector<std::uint32_t>{0x38000,0x38040,0x38080,0x38090,0x380a0});}
WorldActorSpec spec(unsigned script){WorldActorSpec s;s.script=script;s.behavior.physics=ActorPhysics::Stationary;s.behavior.projection=ActorProjection::Unchanged;return s;}
void replacements(const eb::GameAssets &assets,std::shared_ptr<SpriteResources> graphics,unsigned &count){
    for(unsigned role=0;role<30;++role)for(bool numeric:{false,true})for(unsigned temporary:{0,0x1234,0xffff}){
        context=assets.title+" replacement role="+std::to_string(role)+" temp="+std::to_string(temporary);
        const auto code=blocks(temporary);auto data=scripts(code);ActorWorld world(graphics,data,assets.version);
        const auto id=*world.create_authored(spec(0),{role,role+1});world.advance_tick();
        auto &actor=world.actor(id);actor.behavior.tick=ActorTickCallback::ProjectOffset;
        actor.scripts_and_physics_enabled=false;actor.tick_callback_enabled=false;
        const auto prior=actor.tasks();check(prior.size()==2&&prior[0].stack_depth==1,"Replacement chain fixture is vacuous");
        Original source(assets,code);source.add(role,0,0x8000,0,12);
        const unsigned task=role*2,child=62;
        source.put(0x125a - source.shift+task,child);source.put(0x125a - source.shift+child,0xffff);
        source.put(0x1516 - source.shift+task,temporary);source.put(0x1516 - source.shift+child,0x5678);
        source.put(0x12e6 - source.shift+task,2);source.put(0x1372 - source.shift+task,4);
        source.put(0x107a - source.shift+role*2,0xabcd);source.put(0x10b6 - source.shift+role*2,0xc0c4);
        source.replace(role,0x38040,numeric);world.replace_script(id,0x38040);source.compare(world,id);
        check(actor.tasks().size()==1&&actor.tasks()[0].id==prior[0].id&&actor.behavior.tick==ActorTickCallback::None&&
              actor.tick_callback_enabled&&actor.scripts_and_physics_enabled&&source.word(0x125a - source.shift+task)==0xffff&&
              source.word(0xa54 - source.shift)==child&&source.word(0x125a - source.shift+child)==60&&
              source.word(0x10b6 - source.shift+role*2)==0xc0&&source.word(0x107a - source.shift+role*2)==(source.jp?0x941a:0x943b),
              "Replacement child/callback contract differs");
        source.task_tick(role);world.advance_tick();source.compare(world,id);++count;
    }
}
void ordered_pass(const eb::GameAssets &assets,std::shared_ptr<SpriteResources> graphics,unsigned &count){
    const auto code=blocks();auto data=scripts(code);ActorWorld world(graphics,data,assets.version);Original source(assets,code);
    const auto a=*world.create_authored(spec(2),{8,9}), b=*world.create_authored(spec(3),{2,3}), c=*world.create_authored(spec(2),{6,7});
    source.add(8,2,0x8080,0,12,4);source.add(2,3,0x8090,0,14,12);source.add(6,2,0x8080,0,16);
    source.put(0xa50 - source.shift,16);bool replaced=false;
    context=assets.title+" replace visited and unvisited roles inside another actor's engine request";
    check(world.advance_tick()==WorldTickResult::NeedsEngine&&world.request()->actor==b,"Native ordered pass did not suspend");
    world.replace_script(a,0x380a0);world.replace_script(c,0x380a0);world.respond(6);world.advance_tick();
    source.call(source.jp?0xc09445:0xc09466,true,[&]{
        if(source.semantic_pc()!=0xc40023)return false;
        check(!replaced,"Replacement fixture request repeated");replaced=true;
        source.replace(8,0x380a0,true,true);source.replace(6,0x380a0,false,true);
        source.cpu->execute_instruction<0x6b>(0,1);return true;
    });
    check(replaced,"Original ordered replacement was not exercised");
    for(auto id:{a,b,c})source.compare(world,id);
    world.advance_tick();source.call(source.jp?0xc09445:0xc09466);
    for(auto id:{a,b,c})source.compare(world,id);count+=2;
}
void camera_boundary(const eb::GameAssets &assets,std::shared_ptr<SpriteResources> graphics,unsigned &count){
    const auto code=blocks();auto data=scripts(code);ActorWorld world(graphics,data,assets.version);Original source(assets,code);
    auto view=spec(2);view.behavior.tick=ActorTickCallback::CenterCamera;
    const auto tail=*world.create_authored(view,{8,9});source.add(8,2,0x8080,0,12);source.put(0xa50 - source.shift,16);
    const unsigned callback=source.jp?0xc46275:0xc48c2b;
    source.put(0x107a - source.shift+16,callback);source.put(0x10b6 - source.shift+16,callback>>16);
    context=assets.title+" current actor replacement at committed camera boundary";
    check(world.advance_tick()==WorldTickResult::NeedsCameraRefresh,"Native camera fixture did not suspend");
    const auto newborn=*world.create_authored(spec(2),{2,3});world.replace_script(tail,0x380a0);
    world.respond_camera_refresh();world.advance_tick();bool refreshed=false;
    source.call(source.jp?0xc09445:0xc09466,true,[&]{
        if(source.semantic_pc()!=(source.jp?0xc0156eu:0xc01558u))return false;
        check(!refreshed,"Original camera refresh repeated");refreshed=true;
        // Scene creation's list append is the already-proven INIT_ENTITY
        // boundary; this fixture holds map streaming/artwork out of the test.
        source.add(2,2,0x8080,0,14);source.put(0xa9e - source.shift+16,4);
        source.replace(8,0x380a0,true,true);source.cpu->execute_instruction<0x60>(0,1);return true;
    });
    check(refreshed,"Original camera boundary was not exercised");
    for(auto id:{tail,newborn})source.compare(world,id);
    world.advance_tick();source.call(source.jp?0xc09445:0xc09466);
    for(auto id:{tail,newborn})source.compare(world,id);count+=2;
}
void lookups(const eb::GameAssets &assets,std::shared_ptr<SpriteResources> graphics,unsigned &count){
    const auto code=blocks();auto data=scripts(code);ActorWorld world(graphics,data,assets.version);Original source(assets,code);
    for(unsigned role:{24,9,2,17}){auto s=spec(2);s.sprite=role&1;s.npc=role+100;
        world.create_authored(s,{role,role+1});source.add(role,2,0x8080,s.sprite,*s.npc);}
    for(bool npc:{false,true})for(unsigned query:npc?std::vector<unsigned>{102,109,117,124,500}:std::vector<unsigned>{0,1}){
        context=assets.title+" numeric role query="+std::to_string(query);source.cpu->accumulator=query;
        source.call(npc?(source.jp?0xc43da8:0xc4605a):(source.jp?0xc43d76:0xc46028));
        const auto found=npc?world.first_authored_actor_with_npc(query):world.first_authored_actor_with_sprite(query);
        const auto role=found?*world.actor(*found).authored_role():0xffff;
        check(source.cpu->accumulator==role,"Native lookup used active-list order instead of numeric roles");++count;
    }
}
void run(const eb::GameAssets &assets){native_sprite_test::Fixture fixture;auto graphics=std::make_shared<SpriteResources>(fixture.bytes,fixture.layout);
    unsigned replace=0,pass=0,query=0;replacements(assets,graphics,replace);ordered_pass(assets,graphics,pass);camera_boundary(assets,graphics,pass);lookups(assets,graphics,query);
    std::cout<<"PASS "<<assets.title<<": "<<replace<<" original replacements, "<<pass<<" exact actor passes, "<<query<<" numeric-role lookups\n";}
}
int main(int argc,char **argv){try{check(argc>=2,"native_actor_replacement_reference pack.ebpak ...");
    for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
