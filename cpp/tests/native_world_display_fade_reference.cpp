// Executes original FADE_IN/FADE_OUT and the exact NMI brightness branch in
// both regions. The NMI slice has no intercepted helper or synthetic response.
#include "eb/native/world_display_fade.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <memory>
#include <stdexcept>
namespace {
using namespace eb::native;
std::uint64_t checks{},steps{};
void check(bool ok,const char*s){++checks;if(!ok)throw std::runtime_error(s);}
struct Source {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  bool jp;
  Source(const eb::GameAssets&a):bus(std::make_unique<eb::SnesBus>(a.image,a.version)),cpu(*bus),jp(a.version==eb::GameVersion::JP){cpu.set_runtime(eb::MainCpuRuntime::Legacy);}
  void setup(){cpu.emulation_mode=false;cpu.status_register=eb::MainCpu65816::InterruptDisable;cpu.data_bank=0x7e;cpu.direct_page=0;cpu.stack_pointer=0x1fff;}
  void until(unsigned pc){for(unsigned i=0;i<100;++i){if(cpu.program_counter==pc)return;cpu.step_instruction();++steps;}throw std::runtime_error("Fade source did not reach boundary");}
  void start(bool out,unsigned magnitude,unsigned delay){setup();cpu.program_counter=0xc0ff00;cpu.accumulator=magnitude;cpu.x_index=delay;
    cpu.execute_instruction<0x22>(out?(jp?0xc0886c:0xc0887a):(jp?0xc0885e:0xc0886c),4);until(0xc0ff04);}
  void nmi(){setup();cpu.program_counter=0xc081f7;until(0xc0821f);}
  void seed(WorldDisplayFadeState s){bus->work_ram[13]=s.brightness;bus->work_ram[0x28]=s.step;bus->work_ram[0x29]=s.delay;bus->work_ram[0x2a]=s.remaining;bus->work_ram[0x1f]=0xad;}
  WorldDisplayFadeState state()const{return {bus->work_ram[13],bus->work_ram[0x28],bus->work_ram[0x29],bus->work_ram[0x2a]};}
};
void run(const eb::GameAssets&a){Source source(a);const auto oldchecks=checks,oldsteps=steps;unsigned cases{};
  for(unsigned brightness:{0u,1u,7u,15u,16u,127u,128u,143u,255u})
   for(unsigned step:{0u,1u,2u,15u,16u,127u,128u,129u,240u,255u})
    for(unsigned remaining:{0u,1u,2u,126u,127u,128u,129u,254u,255u})
     for(unsigned delay:{0u,1u,127u,128u,255u}){
      WorldDisplayFade native({std::uint8_t(brightness),std::uint8_t(step),std::uint8_t(delay),std::uint8_t(remaining)});
      source.seed(native.state());
      for(unsigned frame=0;frame<4;++frame){auto preview=native.preview_next_frame();const bool rows=source.bus->work_ram[0x1f]!=0;source.nmi();
       check(source.state()==preview.state(),"Native preview differs from original NMI fade");
       check((rows&&source.bus->work_ram[0x1f]==0)==preview.disables_row_streams(),"Native fade row-disable event differs");
       native.commit_frame(preview);check(native.state()==source.state(),"Fade commit differs");}
      ++cases;
     }
  for(bool out:{false,true})for(unsigned magnitude:{0u,1u,16u,127u,128u,255u,256u,0xffffu})
   for(unsigned delay:{0u,1u,127u,128u,255u,256u,0xffffu}) {
    WorldDisplayFade native({15,3,4,5});source.seed(native.state());source.start(out,magnitude,delay);
    if(out)native.begin_out(magnitude,delay);else native.begin_in(magnitude,delay);
    check(source.state()==native.state(),"FADE_IN/OUT argument semantics differ");++cases;
   }
  std::cout<<"PASS display fade "<<(a.version==eb::GameVersion::US?"US":"JP")<<": "<<cases<<" source cases, "<<checks-oldchecks<<" checks, "<<steps-oldsteps<<" original instructions\n";
}
}
int main(int argc,char**argv){try{check(argc>1,"Expected imported packs");for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
