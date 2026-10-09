// Full original DECOMP/PREPARE_VRAM_COPY bodies are verification authority.
// Production retires named native effects; no gameplay instruction engine.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "eb/native/cutscenes/ending/asset_work.hpp"
#include "generated_assets.hpp"
#include "../src/native/session/world.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
namespace {
using namespace eb;
using namespace eb::native;
using namespace eb::native::story;
using namespace eb::native::cutscenes::ending;
unsigned checks{},cases{};
void require(bool ok,const std::string &s) {++checks;if(!ok)throw std::runtime_error(s);}
unsigned word(std::span<const std::uint8_t> b,unsigned at) {return b[at]|unsigned(b[at+1])<<8;}
struct Original {
  SnesBus bus;
  MainCpu65816 cpu;
  std::vector<std::pair<unsigned,std::uint8_t>> stores;
  const bool jp;
  unsigned last_pc{};
  Original(const GameAssets &a,std::span<const std::uint8_t> image,unsigned preceding,bool fast,bool unaligned)
      :bus(image,a.version),cpu(bus),jp(a.version==GameVersion::JP) {
    cpu.set_runtime(MainCpuRuntime::Legacy);cpu.set_gameplay_timing(false);
    cpu.emulation_mode=false;cpu.status_register=4;cpu.data_bank=0x7e;
    cpu.direct_page=unaligned?0x1dd4:0x1e00;cpu.stack_pointer=0x1fff;
    bus.write_byte(0x4200,0);bus.write_byte(0x420c,0);bus.write_byte(0x420d,fast?1:0);
    bus.advance_master_clocks_with_refresh(preceding);
    cpu.observe_memory_write=[this](unsigned at,std::uint8_t value) {
      if(at>=0x7f0000&&at<=0x7fffff)stores.push_back({at-0x7f0000,value});
    };
  }
  void put(unsigned at,unsigned value) {bus.work_ram[at]=std::uint8_t(value);bus.work_ram[at+1]=std::uint8_t(value>>8);}
  void start(unsigned entry,unsigned a=0,unsigned x=0,unsigned y=0) {
    cpu.program_counter=0xc0ff00;cpu.accumulator=std::uint16_t(a);cpu.x_index=std::uint16_t(x);cpu.y_index=std::uint16_t(y);
    last_pc=cpu.program_counter;cpu.execute_instruction<0x22>(entry,4);
  }
  void step() {last_pc=cpu.program_counter;cpu.step_instruction();}
  bool returned() const {return cpu.program_counter==0xc0ff04&&cpu.stack_pointer==0x1fff;}
  unsigned source_at() const {return jp?0xca:0xcc;}
  unsigned destination_at() const {return jp?0xcd:0xcf;}
  unsigned remaining_at() const {return jp?0xcf:0xd1;}
  unsigned command_at() const {return jp?0xd1:0xd3;}
  unsigned flag_at() const {return jp?0xa031:0x9e2b;}
};
struct Native {
  NativeAudio audio;
  session::World world;
  DecodeWorkState state;
  std::unique_ptr<AudioFrameClock> physical;
  std::unique_ptr<SourceWorkClock> clock;
  std::unique_ptr<AssetWork> assets;
  unsigned edges{};
  Native(const GameAssets &a,const session::Content &content,const Original &source,bool fast)
      :audio(a.image,a.version),world(content,audio,256) {
    audio.initialize();world.clock.interrupt_mask=0;world.bind_actor_graphics(a.image);
    world.runtime->refresh_world_capture();world.display.transient_memory().configure(a.version);
    physical=std::make_unique<AudioFrameClock>(world.clock,[this]{++edges;clock->request_nmi();},[]{},
      AudioFrameClock::physical_phase(source.bus.scanline_index(),source.bus.scanline_clock(),source.bus.completed_frames),
      source.bus.completed_frames);
    physical->bind_peripherals(world.peripherals);
    clock=std::make_unique<SourceWorkClock>(*physical,audio,world.clock,*world.runtime,
      world.actor_object_display_state,*world.actor_object_display,world.frame_display,fast);
    audio.bind_clock(*clock);
    assets=std::make_unique<AssetWork>(a.version,*clock,state,world.scratch,world.display,world.fade);
  }
};
void phase(const Original &o,const Native &n,const std::string &label,unsigned line,unsigned atom) {
  const auto context=label+" pc="+std::to_string(o.last_pc)+" line="+std::to_string(line)+" atom="+std::to_string(atom);
  require(n.clock->master_clocks()==o.bus.master_clocks(),context+" elapsed native="+
    std::to_string(n.clock->master_clocks())+" source="+std::to_string(o.bus.master_clocks()));
  require(n.physical->phase()==AudioFrameClock::physical_phase(o.bus.scanline_index(),o.bus.scanline_clock(),o.bus.completed_frames)
    &&n.physical->physical_frames()==o.bus.completed_frames,context+" physical raster");
}
void decode_state(const Original &o,const Native &n,const std::string &label) {
  require(n.state.source==(word(o.bus.work_ram,o.source_at())|unsigned(o.bus.work_ram[o.source_at()+2])<<16)
      &&n.state.destination==word(o.bus.work_ram,o.destination_at())
      &&n.state.remaining==word(o.bus.work_ram,o.remaining_at())
      &&n.state.command==o.bus.work_ram[o.command_at()],label+" actual DECOMP globals");
}
void compare_stores(Original &o,const Native &n,const std::string &label) {
  for(const auto &[at,value]:o.stores)require(n.world.scratch.bytes[at]==value,label+" interrupted BUFFER store="+std::to_string(at));
  o.stores.clear();
}
void decode_case(const GameAssets &a,const session::Content &content,CompressedAsset stream,
    std::span<const std::uint8_t> original_image,unsigned preceding,bool fast,bool unaligned,unsigned destination,bool unknown_nmi=false) {
  Original o(a,original_image,preceding,fast,unaligned);Native n(a,content,o,fast);
  const auto label=a.title+" DECOMP source="+std::to_string(stream.source_identity)+" phase="+std::to_string(preceding)+
      " fast="+std::to_string(fast)+" unaligned="+std::to_string(unaligned);
  n.state={0x123456,0x789a,0x1357,0xc5};
  o.put(o.source_at(),0x3456);o.bus.work_ram[o.source_at()+2]=0x12;o.put(o.destination_at(),0x789a);
  o.put(o.remaining_at(),0x1357);o.bus.work_ram[o.command_at()]=0xc5;
  for(unsigned i=0;i<65536;++i)o.bus.work_ram[0x10000+i]=n.world.scratch.bytes[i]=std::uint8_t(i*73+91);
  const auto d=o.cpu.direct_page;o.put(d+0xe,stream.source_identity);o.put(d+0x10,stream.source_identity>>16);
  o.put(d+0x12,destination);o.put(d+0x14,0x7f);
  if(unknown_nmi) {
    require(o.bus.master_clocks()<225*1364,label+" unknown-NMI fixture must enter before actual vblank");
    o.bus.write_byte(0x4200,0x80);n.physical->nmi_enabled(true);
  }
  auto op=n.assets->begin_decode(stream,{unaligned,std::uint16_t(destination)});
  bool first=true,rejected{};unsigned atoms{};
  while(!op->complete()) {
    const auto line=op->source_line();
    if(first) {o.start(o.jp?0xc419ea:0xc41a9e);first=false;}else o.step();
    try {op->advance(1);}catch(const std::logic_error &) {if(!unknown_nmi)throw;rejected=true;}
    phase(o,n,label,line,++atoms);decode_state(o,n,label);compare_stores(o,n,label);
    require(atoms<3000000,label+" bounded helper");
    if(rejected)break;
  }
  require(std::equal(n.world.scratch.bytes.begin(),n.world.scratch.bytes.end(),o.bus.work_ram.begin()+0x10000),label+" all retained BUFFER bytes");
  if(unknown_nmi) {
    require(rejected&&!op->complete()&&n.clock->failed()&&n.assets->failed()&&n.clock->pending_nmi()&&n.edges==1,
      label+" unowned source NMI admission");
    require(!n.world.clock.publications&&!n.world.clock.input_polls,label+" rejected NMI fabricated publication");
  }else require(o.returned()&&!n.clock->failed()&&!n.assets->busy()&&!n.edges,label+" full masked helper return");
  ++cases;
}
void copy_state(const Original &o,const Native &n,const std::string &label) {
  const auto p=n.world.display.source_copy_parameters();
  require(p.mode==o.bus.work_ram[0x91]&&p.byte_count==word(o.bus.work_ram,0x92)&&p.source_offset==word(o.bus.work_ram,0x94)
      &&(p.source_identity>>16)==o.bus.work_ram[0x96]&&p.destination==word(o.bus.work_ram,0x97),label+" actual COPY parameter prefix");
  const auto &regs=n.world.peripherals.dma(1);
  for(unsigned i=0;i<=6;++i)require(regs[i]==const_cast<SnesBus &>(o.bus).read_byte(0x4310+i),label+" DMA1 field="+std::to_string(i));
  require(n.world.display.source_vmain()==o.bus.ppu_registers()[0x15]&&
      n.world.display.source_vmadd()==word(o.bus.ppu_registers(),0x16),label+" VMAIN/VMADD setup");
  require(n.world.display.transient_memory().current_address()==word(o.bus.work_ram,0xa1)&&
      n.world.display.transient_memory().base_address()==word(o.bus.work_ram,0xa3),label+" heap pointer prefix");
  require(n.world.display.dma_transfer_flag()==word(o.bus.work_ram,o.flag_at()),label+" shared DMA transfer flag");
}
void copy_case(const GameAssets &a,const session::Content &content,unsigned preceding,bool fast,bool unaligned,unsigned mode,unsigned count) {
  Original o(a,a.image,preceding,fast,unaligned);Native n(a,content,o,fast);
  const auto label=a.title+" COPY phase="+std::to_string(preceding)+" fast="+std::to_string(fast)+
    " unaligned="+std::to_string(unaligned)+" mode="+std::to_string(mode)+" count="+std::to_string(count);
  for(unsigned i=0;i<65536;++i) {
    o.bus.work_ram[0x10000+i]=n.world.scratch.bytes[i]=std::uint8_t(i*71+33);
    // Source VRAM begins zero, as does its native physical owner.
  }
  const battle::PsiTransfer retained{battle::PsiTransferKind::Vram,0x5678,0xbcde,0x2468,15,{},0x340000};
  n.world.display.set_source_copy_parameters(retained);
  o.bus.work_ram[0x91]=15;o.put(0x92,0xbcde);o.put(0x94,0x5678);o.bus.work_ram[0x96]=0x34;o.put(0x97,0x2468);
  o.put(0xa3,0x2000);o.put(0xa1,0x2011);n.world.display.transient_memory().set_source_current_address(0x2011);
  o.put(o.flag_at(),0xbeef);n.world.display.set_source_dma_transfer_flag(0xbeef);o.bus.work_ram[0xd]=0x80;
  const auto d=o.cpu.direct_page;o.put(d+0xe,0x1234);o.put(d+0x10,0x7f);
  o.cpu.status_register|=MainCpu65816::Accumulator8Bit;
  const battle::PsiTransfer transfer{battle::PsiTransferKind::Vram,0x1234,std::uint16_t(count),0x3ff7,std::uint8_t(mode)};
  auto op=n.assets->begin_copy(transfer,{unaligned,0});
  bool first=true;unsigned atoms{};
  while(!op->complete()) {
    const auto line=op->source_line();
    if(first) {o.start(0xc08616,mode,count,0x3ff7);first=false;}else o.step();
    op->advance(1);phase(o,n,label,line,++atoms);copy_state(o,n,label);
    require(atoms<200,label+" bounded forced blank helper");
  }
  require(o.returned()&&n.world.display.vram()==o.bus.video_ram,label+" full return/65536 VRAM bytes");
  require(n.world.display.pending_bytes()==0&&n.world.display.pending().empty()&&!n.edges,label+" direct transfer queued work");
  require(n.world.display.dma_transfer_flag()==(o.jp?0xbeef:0),label+" regional actual tail");
  ++cases;
}
void heap_case(const GameAssets &a,bool upper_old) {
  Original o(a,a.image,0,true,false);
  display::TransientMemory heap;heap.configure(a.version);
  if(upper_old)heap.after_interrupt();
  const auto old=heap.base_address();heap.after_interrupt();heap.set_source_current_address(old);
  o.put(0xa1,old);o.put(0xa3,heap.base_address());o.start(o.jp?0xc086d7:0xc086de,1);
  const auto wait=o.jp?0xc086f3u:0xc086fau;
  for(unsigned i=0;i<40&&!o.returned()&&o.cpu.program_counter!=wait;++i)o.step();
  const auto allocation=heap.allocate(1);
  require(bool(allocation)==o.returned(),a.title+" stale heap literal SBRK branch");
  if(allocation)require(allocation->identity+allocation->offset==0x7e0000u+o.cpu.accumulator,
    a.title+" stale heap actual allocation bank");
  require(heap.current_address()==word(o.bus.work_ram,0xa1),a.title+" stale heap exact CURRENT");
  ++cases;
}
void run(const GameAssets &a) {
  const session::Content content(a.image,a.version);const Resources resources(a.image,a.version);
  {
    Original source(a,a.image,0,true,false);Native native(a,content,source,true);
    battle::PsiDisplayState unrelated;bool rejected{};const auto before=native.clock->master_clocks();
    try {AssetWork wrong(a.version,*native.clock,native.state,native.world.scratch,unrelated,native.world.fade);}
    catch(const std::logic_error &) {rejected=true;}
    require(rejected&&before==native.clock->master_clocks()&&!native.clock->failed()&&!unrelated.failed(),
      a.title+" unrelated source clock/video constructor admission");
    auto &heap=native.world.display.transient_memory();const auto allocation=heap.allocate(11);
    require(bool(allocation),a.title+" preceding actual SBRK owner allocation");
    const battle::PsiTransfer borrowed{battle::PsiTransferKind::Vram,3,8,0x2345,0,
      allocation->bank,allocation->identity};
    auto previous=native.world.display.begin_transfer(borrowed,native.world.scratch,native.world.fade);
    require(previous->advance(),a.title+" preceding real forced blank borrowed-span transfer");
    const auto raw=native.world.display.source_copy_parameters();
    require(raw.source.empty()&&raw.source_identity==0x7e0000&&raw.source_offset==0x2003&&
        raw.byte_count==8&&raw.destination==0x2345&&raw.mode==0&&
        native.world.display.copy_parameters()==borrowed,
      a.title+" actual preceding SBRK pointer raw projection retained its borrowed transport");
  }
  for(bool fast:{false,true})for(bool unaligned:{false,true})for(unsigned before:{0u,516u,306876u}) {
    for(const auto stream:{resources.compressed_frame(),resources.compressed_font(),resources.compressed_photo_palettes()})
      decode_case(a,content,stream,a.image,before,fast,unaligned,0x321);
    for(unsigned mode:{0u,3u,6u,9u,12u,15u})copy_case(a,content,before,fast,unaligned,mode,mode?37:0);
  }
  // Genuine DECOMP effects cross the first unowned NMI. The gate must stop at
  // that exact source retirement with all prior stores, not acknowledge it.
  decode_case(a,content,resources.compressed_font(),a.image,297000,true,true,0,true);
  heap_case(a,false);heap_case(a,true);
  // Cover every command and extended headers using a bounded synthetic donor
  // stream while executing the complete unchanged original DECOMP body.
  std::vector<std::uint8_t> encoded{3,0x12,0x80,0x3c,0x55,0x22,0xa9,0x41,0x34,0x12,
    0x63,0xfe,0x83,0,0,0xa3,0,0,0xc2,0,3,0xec,32,0x30,0xe0,32};
  for(unsigned i=0;i<33;++i)encoded.push_back(std::uint8_t(i*13));
  encoded.insert(encoded.end(),{0xf4,33,0,0,255});
  auto image=a.image;std::copy(encoded.begin(),encoded.end(),image.begin()+0x21ff00);
  decode_case(a,content,{encoded,0xe1ff00,126},image,516,true,true,0x678);
  std::cout<<"PASS "<<a.title<<" asset work: literal per-instruction retirements/full BUFFER and VRAM, regional DMA tail, stale heap and unknown-NMI gate\n";
}
}
int main(int argc,char **argv) {try {
  if(argc<2)return 77;
  for(int i=1;i<argc;++i)run(load_game_assets(argv[i],asset_profiles()));
  std::cout<<"PASS Ending asset work cases="<<cases<<" checks="<<checks<<'\n';
}catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}}
