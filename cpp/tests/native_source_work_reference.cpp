// Original OAM_CLEAR and every instruction's clock come from the actual
// regional image. Native work uses source cycle/access costs and actual
// session owners, never a compatibility gameplay CPU in production.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/story/work_clock.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "../src/native/session/world.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb;
using namespace eb::native;
using namespace eb::native::story;
unsigned checks{};
void require(bool value, const std::string &message) {
  ++checks; if (!value) throw std::runtime_error(message);
}
struct Original {
  SnesBus bus;
  MainCpu65816 cpu;
  Original(const GameAssets &a, unsigned preceding, bool fast)
      : bus(a.image,a.version), cpu(bus) {
    cpu.set_runtime(MainCpuRuntime::Legacy); cpu.emulation_mode=false;
    cpu.status_register=4; cpu.data_bank=0x7e; cpu.direct_page=0;
    cpu.stack_pointer=0x1fff;
    bus.write_byte(0x4200,0); bus.write_byte(0x420d,fast?1:0);
    bus.advance_master_clocks_with_refresh(preceding);
  }
  void put(unsigned at,unsigned value) {
    bus.work_ram[at]=std::uint8_t(value); bus.work_ram[at+1]=std::uint8_t(value>>8);
  }
  void clear(bool jp) {
    cpu.program_counter=0xc0ff00;
    cpu.execute_instruction<0x22>(jp?0xc088a3:0xc088b1,4);
    unsigned count{};
    while(cpu.program_counter!=0xc0ff04 || cpu.stack_pointer!=0x1fff) {
      if(++count>200) throw std::runtime_error("Original OAM_CLEAR did not return");
      cpu.step_instruction();
    }
  }
};
struct Native {
  NativeAudio audio;
  session::World world;
  std::unique_ptr<AudioFrameClock> physical;
  std::unique_ptr<SourceWorkClock> work;
  unsigned physical_frames{}, nmi_edges{};
  Native(const GameAssets &a,const session::Content &content,const Original &source,bool fast)
      :audio(a.image,a.version),world(content,audio,256) {
    audio.initialize();
    world.clock.interrupt_mask=0;
    world.bind_actor_graphics(a.image);
    world.runtime->refresh_world_capture();
    physical=std::make_unique<AudioFrameClock>(world.clock,[this]{
      ++nmi_edges; work->request_nmi();
    },[this]{++physical_frames;},
      AudioFrameClock::physical_phase(source.bus.scanline_index(),source.bus.scanline_clock(),
                                      source.bus.completed_frames),source.bus.completed_frames);
    physical->bind_peripherals(world.peripherals);
    work=std::make_unique<SourceWorkClock>(*physical,audio,world.clock,*world.runtime,
      world.actor_object_display_state,*world.actor_object_display,world.frame_display,fast);
    audio.bind_clock(*work);
  }
};
void run_case(const GameAssets &assets,const session::Content &content,
              unsigned preceding,unsigned selected,bool fast) {
  const bool jp=assets.version==GameVersion::JP;
  Original source(assets,preceding,fast);
  Native native(assets,content,source,fast);
  const auto label=assets.title+" preceding="+std::to_string(preceding)+
      " buffer="+std::to_string(selected)+" fast="+std::to_string(fast);
  if(selected==2) native.world.frame_display.update_world_screen();
  require(native.world.frame_display.next_buffer_id()==selected,label+" entry next buffer");
  source.put(0x2e,selected);
  const unsigned oam=selected==1?0x500:0x800;
  auto &objects=native.world.actor_object_display_state;
  for(unsigned buffer=0;buffer!=2;++buffer) {
    const unsigned origin=buffer?0x800:0x500;
    for(unsigned i=0;i<544;++i) {
      const auto byte=std::uint8_t(i*73+91+buffer*17);
      objects.buffers[buffer].bytes[i]=byte; source.bus.work_ram[origin+i]=byte;
    }
  }
  const auto retained=objects.buffers[(selected^3)-1].bytes;
  for(unsigned i=0;i<objects.working.size();++i) {
    objects.working[i]=std::uint8_t(i*29+57);
    source.bus.work_ram[(jp?0x2800:0x2400)+i]=objects.working[i];
  }
  const auto pending=native.world.frame_display.pending_display_id();
  const auto before_audio=native.audio.master_clocks();
  const auto before_source=source.bus.master_clocks();
  const auto random=native.world.random;
  const auto input=native.world.input.state;
  const auto counter=native.world.clock.frame_counter;
  source.clear(jp); native.work->clear_objects();
  require(native.audio.master_clocks()-before_audio==source.bus.master_clocks()-before_source,
          label+" literal elapsed audio/source clocks native="+
          std::to_string(native.audio.master_clocks()-before_audio)+" source="+
          std::to_string(source.bus.master_clocks()-before_source));
  require(native.work->master_clocks()==source.bus.master_clocks(),label+" absolute master phase");
  require(native.physical->physical_frames()==source.bus.completed_frames &&
          native.physical->phase()==AudioFrameClock::physical_phase(source.bus.scanline_index(),
            source.bus.scanline_clock(),source.bus.completed_frames),label+" actual raster phase");
  for(unsigned i=0;i<544;++i)
    require(objects.buffers[selected-1].bytes[i]==source.bus.work_ram[oam+i],
            label+" raw OAM byte="+std::to_string(i));
  for(unsigned i=0;i<objects.working.size();++i)
    require(objects.working[i]==source.bus.work_ram[(jp?0x2800:0x2400)+i],
            label+" four working queues byte="+std::to_string(i));
  require(objects.buffers[(selected^3)-1].bytes==retained,label+" retained OAM changed");
  require(native.world.frame_display.pending_display_id()==pending &&
          native.world.frame_display.next_buffer_id()==selected,label+" buffer gate changed");
  require(!native.nmi_edges && !native.work->pending_nmi() && !native.work->failed(),
          label+" masked work invented an NMI");
  require(native.world.clock.frame_counter==counter && !native.world.clock.publications &&
          !native.world.clock.input_polls && native.world.input.state==input &&
          native.world.random.primary_word==random.primary_word &&
          native.world.random.secondary_word==random.secondary_word,
          label+" work advanced logical input/RNG/publication");
}
void run_admission(const GameAssets &assets,const session::Content &content) {
  Original source(assets,0,true); Native native(assets,content,source,true);
  native.world.frame_display.update_world_screen();
  native.world.frame_display.request_retained_screen();
  const auto bytes=native.world.actor_object_display_state.buffers[1].bytes;
  const auto before=native.audio.master_clocks(); bool rejected{};
  try { native.work->clear_objects(); } catch(const std::logic_error &) { rejected=true; }
  require(rejected && bytes==native.world.actor_object_display_state.buffers[1].bytes &&
          before==native.audio.master_clocks(),"Actual pending/working OAM alias was mutated");

  Original edge_source(assets,0,true); Native edge(assets,content,edge_source,true);
  edge.physical->nmi_enabled(true);
  bool effect{}, subsequent{};
  rejected=false;
  try {
    edge.work->retire_source_work({225*1364/6+1,0,0,0},[&]{effect=true;});
  } catch(const std::logic_error &) { rejected=true; }
  require(rejected && effect && edge.nmi_edges==1 && edge.work->failed() &&
          edge.work->pending_nmi() && !edge.world.clock.publications && !edge.world.clock.input_polls,
          "Unowned NMI was acknowledged or serviced before source atom retirement");
  try { edge.work->retire_source_work({2,1,0,0},[&]{subsequent=true;}); }
  catch(const std::logic_error &) {}
  require(!subsequent,"Failed source NMI permitted a later effect");
}
void run(const GameAssets &assets) {
  const session::Content content(assets.image,assets.version);
  // Genuine preceding source work, not a fitted delay. The resulting origin
  // is captured from the original clock and supplied unchanged to the native
  // physical owner; include all eight alignment residues and short odd lines.
  constexpr std::array<unsigned,23> preceding{0,1,2,3,4,5,6,7,496,510,537,538,539,
    1349,1350,1363,225*1364-1000,225*1364-64,225*1364,262*1364-1000,
    262*1364+240*1364-1000,262*1364+241*1364-20,2*262*1364-2000};
  unsigned cases{};
  for(const auto phase:preceding) for(unsigned buffer:{1u,2u}) for(bool fast:{false,true}) {
    run_case(assets,content,phase,buffer,fast); ++cases;
  }
  run_admission(assets,content);
  std::cout<<"PASS "<<assets.title<<" source OAM_CLEAR work: "<<cases
           <<" complete varied phase/FastROM/buffer cases; masked source parity; actual alias/unknown-NMI rejection\n";
}
}
int main(int argc,char **argv) { try {
  if(argc<2) return 77;
  for(int i=1;i<argc;++i) run(load_game_assets(argv[i],asset_profiles()));
  std::cout<<"PASS source work owner checks="<<checks<<'\n';
} catch(const std::exception &e) { std::cerr<<e.what()<<'\n'; return 1; } }
