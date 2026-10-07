// Complete original producer and task helpers; genuine allocation, planar seed
// copying, RAND and forced-blank graphics transfers execute without interception.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_sprite_fade.hpp"
#include "eb/native/action_program.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <set>
#include <stdexcept>
using namespace eb::native;
namespace {
std::string context;
void check(bool v,const char *message) {if(!v)throw std::runtime_error(context+": "+message);}
struct Layout {
  unsigned producer,show,refresh,hide,rows,columns,reset,dissolve,finish,pause,restore;
  unsigned allocated,count,controller,pointer,current,animation,hidden,tick,variables,script,direction;
};
constexpr Layout us{0xc4c91a,0xc4cb4f,0xc4cb8f,0xc4cbe3,0xc4cc2f,0xc4cd44,0xc4ceb0,0xc4ced8,0xc4cc2c,0xc09f43,0xc09f71,
  0xb4a4,0xb4a6,0xb4a8,0xb4aa,0x1a44,0x10f2,0x116a,0x10b6,0xe5e,0xa62,0x2af6};
constexpr Layout jp{0xc49bea,0xc49e1f,0xc49e5f,0xc49eb3,0xc49eff,0xc4a014,0xc4a180,0xc4a1a8,0xc49efc,0xc09f22,0xc09f50,
  0xb678,0xb67a,0xb67c,0xb67e,0x1a3a,0x10e8,0x1160,0x10ac,0xe54,0xa58,0x2ef4};
struct Totals {std::uint64_t instructions{},calls{},producers{},callbacks{},scratch_bytes{},pixels{},trailing_words{};};
struct Source {
  bool japanese;Layout l;std::unique_ptr<eb::SnesBus> bus;eb::MainCpu65816 cpu;Totals &totals;
  Source(const eb::GameAssets &a,Totals &t):japanese(a.version==eb::GameVersion::JP),l(japanese?jp:us),
    bus(std::make_unique<eb::SnesBus>(a.image,a.version)),cpu(*bus),totals(t) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    bus->work_ram[13]=0x80;bus->write_byte(0x2100,0x80);
    call(japanese?0xc0925e:0xc0927c);
    call(japanese?0xc01a9c:0xc01a86);
    call(japanese?0xc01c27:0xc01c11,0x8000,0);
    call(japanese?0xc01a7f:0xc01a69);
    put(l.controller,0xffff);
  }
  void put(unsigned at,unsigned v){bus->work_ram.at(at)=v;bus->work_ram.at(at+1)=v>>8;}
  unsigned word(unsigned at)const{return bus->work_ram.at(at)|(unsigned(bus->work_ram.at(at+1))<<8);}
  void call(unsigned address,unsigned a=0,unsigned x=0,unsigned y=0) {
    cpu.emulation_mode=false;cpu.status_register=eb::MainCpu65816::InterruptDisable;
    cpu.data_bank=0x7e;cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;cpu.program_counter=0xc0ff00;
    cpu.accumulator=a;cpu.x_index=x;cpu.y_index=y;cpu.execute_instruction<0x22>(address,4);
    unsigned count=0;while(cpu.program_counter!=0xc0ff04 || cpu.stack_pointer!=0x1fff) {
      if(++count>3000000)throw std::runtime_error(context+": original helper did not return "+cpu.describe_registers());
      cpu.step_instruction();++totals.instructions;
    }++totals.calls;
  }
  void create(unsigned group,unsigned role) {
    put(0x1e0e,128);put(0x1e10,112);
    call(japanese?0xc01e5f:0xc01e49,group,0,role);
    check(cpu.accumulator==role,"Actual CREATE_ENTITY chose wrong role");
    put(l.animation+2*role,0);put(l.direction+2*role,0);
  }
};
struct Content {
  const eb::GameAssets &assets;std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const CompiledActionProgram> scripts;SpriteEffectContent effects;
  Content(const eb::GameAssets &a):assets(a),sprites(std::make_shared<SpriteResources>(a.image,sprite_catalog_layout(a.version))),
    scripts(std::make_shared<CompiledActionProgram>(import_action_scripts(a.image,a.version),a.version)),
    effects(a.image,sprite_catalog_layout(a.version),sprites) {}
};
void exercise(Content &c,unsigned group,unsigned role,unsigned mode,Totals &totals) {
  context=c.assets.title+" group="+std::to_string(group)+" role="+std::to_string(role)+" mode="+std::to_string(mode);
  Source source(c.assets,totals);ActorWorld actors(c.sprites,c.scripts);
  PreparedActorState prepared;prepared.x=128;prepared.y=112;
  auto spec=actors.prepare_actor(group,0,prepared);const auto id=*actors.create_authored(spec,{role,role+1});
  auto &actor=actors.actor(id);actor.action().animation=0;actor.behavior.direction=0;actor.appearance.select_four(0,0,0);
  source.create(group,role);
  // Explicit shared prepared input after unrelated target creation. The tested
  // producer must preserve it on early return and execute INIT_ENTITY_WIPE on
  // first admitted fade; it is never seeded from the producer's output.
  prepared.height=7;prepared.priority=0x125;
  const unsigned new_height=source.japanese?0xa3e:0xa48;
  const unsigned new_priority=source.japanese?0xa40:0xa4a;
  const unsigned new_variables=source.japanese?0xa2e:0xa38;
  source.put(new_height,prepared.height);source.put(new_priority,prepared.priority);
  for(unsigned i=0;i<8;++i) {
    prepared.variables[i]=std::uint16_t(0x51+i*23);
    source.put(new_variables+i*2,prepared.variables[i]);
  }
  battle::PsiScratch scratch;story::RandomState random{0x1234,0xabcd};
  source.put(0x24,random.primary_word);source.put(0x26,random.secondary_word);
  for(unsigned i=0;i<65536;++i)source.bus->work_ram[65536+i]=scratch.bytes[i]=std::uint8_t(i*37+(i>>8)*11+0x51);
  WorldSpriteFade fade(c.effects,actors,random,prepared,scratch);
  auto compare=[&] {
    const auto start=source.bus->work_ram.begin()+65536;
    if(!std::equal(scratch.bytes.begin(),scratch.bytes.end(),start)) {
      const auto at=unsigned(std::mismatch(scratch.bytes.begin(),scratch.bytes.end(),start).first-scratch.bytes.begin());
      throw std::runtime_error(context+" scratch byte="+std::to_string(at)+" source="+std::to_string(start[at])+" native="+std::to_string(scratch.bytes[at]));
    }
    totals.scratch_bytes+=65536;
    check(source.word(source.l.count)==fade.count()&&source.word(source.l.allocated)==fade.allocated_bytes(),"Fade count/allocation mismatch");
    check(source.word(0x24)==random.primary_word&&source.word(0x26)==random.secondary_word,"Fade RNG mismatch");
    check(source.word(new_height)==prepared.height&&source.word(new_priority)==prepared.priority,"Fade prepared height/priority mismatch");
    for(unsigned i=0;i<8;++i)check(source.word(new_variables+i*2)==prepared.variables[i],"Fade prepared variables mismatch");
    check(source.word(source.l.animation+2*role)==actor.action().animation,"Fade animation mismatch");
    check(bool(source.word(source.l.hidden+2*role)&0x4000)==actor.appearance.fade_hidden(),"Fade hidden bit mismatch");
    if(fade.controller()) {
      const auto controller=*actors.actor(*fade.controller()).authored_role();
      check(source.word(source.l.controller)==controller,"Fade controller allocation mismatch");
      check(source.word(source.l.script+controller*2)==actors.actor(*fade.controller()).script_style(),"Fade controller script mismatch");
      for(unsigned i=0;i<8;++i)check(source.word(source.l.variables+controller*2+i*60)==actors.actor(*fade.controller()).action().variables[i],"Fade controller variables mismatch");
    }
  };
  source.call(source.l.producer,role,mode);fade.apply(std::uint16_t(role),std::uint16_t(mode));++totals.producers;compare();
  if(mode==0||mode==1||mode==6){check(!fade.controller(),"Inactive fade created controller");return;}
  const auto controller=*fade.controller();const auto controller_role=*actors.actor(controller).authored_role();
  source.put(source.l.current,controller_role*2);
  const auto image_compare=[&] {
    const auto image=actor.appearance.image();check(bool(image),"Fade publication has no native image");
    const auto &def=c.sprites->definition(group);const unsigned dest=source.word(65536+0x7c0c);
    for(unsigned y=0;y<def.height;++y)for(unsigned x=0;x<def.width;++x) {
      const auto at=65536+dest+((y/8)*(def.width/8)+x/8)*32+(y&7)*2;unsigned expected=0;
      for(unsigned p=0;p<4;++p)expected|=((source.bus->work_ram.at(at+(p/2)*16+(p&1))>>(7-(x&7)))&1)<<p;
      check(image->canvas->at((y+(def.height&15))*image->layout->canvas_width+x)==expected,"Fade published indexed pixel mismatch");++totals.pixels;
    }
  };
  auto task=[&](unsigned address,WorldSpriteFadeTask kind,bool pixels=false) {
    source.call(address);const auto result=fade.step(kind,controller);++totals.callbacks;
    if(result)check(source.cpu.accumulator==*result,"Fade phase completion count mismatch");
    compare();
    if(pixels)image_compare();
    return result;
  };
  task(source.l.pause,WorldSpriteFadeTask::PauseActors);
  task(source.l.show,WorldSpriteFadeTask::ShowSprites);
  if(mode==2||mode==7) {
    for(unsigned i=0;i<12;++i){task(source.l.hide,WorldSpriteFadeTask::HideBlinkSprites);task(source.l.refresh,WorldSpriteFadeTask::RefreshSprites);}
  } else if(mode==3||mode==8) {
    for(unsigned i=0;i<1000;++i){const auto result=task(source.l.rows,WorldSpriteFadeTask::Rows,true);if(*result==0)break;check(i<999,"Row fade did not finish");}
  } else if(mode==4||mode==9) {
    for(unsigned i=0;i<1000;++i){const auto result=task(source.l.columns,WorldSpriteFadeTask::Columns,true);if(*result==0)break;check(i<999,"Column fade did not finish");}
  } else {
    task(source.l.reset,WorldSpriteFadeTask::ResetDissolve);
    for(unsigned i=0;i<64;++i)task(source.l.dissolve,WorldSpriteFadeTask::Dissolve,true);
  }
  task(source.l.finish,WorldSpriteFadeTask::FinishTask);
  task(source.l.restore,WorldSpriteFadeTask::RestoreActors);
  for(unsigned r=0;r<30;++r) {
    const auto pause=actors.authored_pause(r);const auto raw=source.word(source.l.tick+r*2);
    check(pause.tick_callback_enabled==!(raw&0x8000)&&pause.scripts_and_physics_enabled==!(raw&0x4000),"Fade callback restoration mismatch");
  }
  ++totals.trailing_words;
}
void run(const eb::GameAssets &assets) {
  Content content(assets);Totals totals;std::set<std::pair<unsigned,unsigned>> shapes;std::vector<unsigned> groups;
  for(unsigned g=0;g<content.sprites->size();++g) {
    const auto &d=content.sprites->definition(g);
    if(shapes.emplace(content.effects.fade_width(g),d.height).second)groups.push_back(g);
    if(groups.size()==4)break;
  }
  check(groups.size()==4,"Imported fade geometries missing");
  for(unsigned g:groups)for(unsigned role:{1u,24u})for(unsigned mode:{0u,1u,2u,3u,4u,5u,6u,7u,8u,9u,10u})exercise(content,g,role,mode,totals);
  std::cout<<"PASS "<<assets.title<<" complete fade producers="<<totals.producers<<" callbacks="<<totals.callbacks<<" all_source_calls="<<totals.calls<<" scratch_bytes="<<totals.scratch_bytes<<" indexed_pixels="<<totals.pixels<<" lifetimes="<<totals.trailing_words<<" instructions="<<totals.instructions<<"; task-helper proof, scheduling separately owned\n";
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try{for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));}
  catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}
  return 0;
}
