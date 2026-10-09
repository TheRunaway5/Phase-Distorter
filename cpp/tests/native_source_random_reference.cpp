// Independent mapped RAND PHP-to-RTL authority. Caller REP31, retained entry
// producers and the later WindowTick prefix remain outside this component.
#define main eb_embedded_random_screen_reference_main
#include "native_source_screen_reference.cpp"
#undef main
#include "eb/native/story/source_random.hpp"
#include "eb/native/story/source_window_publication.hpp"
#include "eb/native/display/text_tiles.hpp"

namespace eb {
// Existing verification-only friend. No bus reads, timing, mutations or new
// production API are used to inspect the original hardware math owner.
struct RuntimeStateAudit {
  static native::SourceMathState random_math(const SnesBus& b) {
    return {b.cpu_io_registers_[2],b.cpu_io_registers_[3],b.multiply_result_,b.divide_result_,
      b.pending_product_,b.pending_quotient_,b.math_remaining_cpu_cycles_,b.pending_divide_};
  }
};
}
namespace {
void bytes_are(const GameAssets& assets,unsigned pc,std::initializer_list<unsigned> bytes) {
  const auto at=pc&0x3fffff;unsigned i{};
  for(unsigned byte:bytes){require(assets.image[at+i]==byte,"Immutable original RAND byte differs at "+std::to_string(pc+i));++i;}
}
SourceRandomContext random_context(unsigned dp=0x1e00,unsigned flags=4) {
  return {true,true,true,0xc0,0xc1,0x7e,std::uint8_t(flags),std::uint16_t(dp),0x1ffc,0x1234};
}
void random_authority(const GameAssets& assets) {
  const bool jp=assets.version==GameVersion::JP;const unsigned entry=jp?0xc08e8b:0xc08e9a;
  bytes_are(assets,jp?0xc13504:0xc12dd7,{0x22,entry&255,(entry>>8)&255,0xc0});
  bytes_are(assets,(jp?0xc13504:0xc12dd7)-2,{0xc2,0x31});
  bytes_are(assets,entry,{0x08,0xc2,0x20,0xad,0x24,0x00,0xe2,0x20,0xeb,0xad,0x26,0x00,
    0xc2,0x20,0x8f,0x02,0x42,0x00,0x18,0x69,0x6d,0x00,0x8d,0x26,0x00,0xaf,0x16,0x42,0x00,
    0x6a,0x6a,0x48,0x29,0x03,0x00,0x18,0x6d,0x24,0x00,0x6a,0x90,0x03,0x09,0x00,0x80,
    0x8d,0x24,0x00,0x68,0x6a,0x6a,0x29,0xff,0x00,0x28,0x6b});
  bytes_are(assets,jp?0xc08123:0xc08121,{0xa9,0x34,0x12,0x8d,0x24,0x00,0xa9,0x78,0x56,0x8d,0x26,0x00});
  // Known generated presentation overrides are outside these immutable C0
  // RAND and C1 caller blocks; the actual mapped CPU still performs all fetches.
}
struct RandomOriginal : ScreenOriginal {
  unsigned instruction_entry=0xffffffff;
  explicit RandomOriginal(const GameAssets& assets,bool speed):ScreenOriginal(assets,speed) {random_authority(assets);}
  unsigned caller()const{return bus.game_version()==GameVersion::JP?0xc13504:0xc12dd7;}
  unsigned target()const{return bus.game_version()==GameVersion::JP?0xc08e8b:0xc08e9a;}
  unsigned return_pc()const{return caller()+4;}
  void reset_seed() {
    // Execute only this original host's genuine reset seed producer. This
    // producer's clocks are excluded from the fresh measured original bus.
    SnesBus prehistory(bus.cartridge_image(),bus.game_version());MainCpu65816 producer(prehistory);
    producer.set_runtime(MainCpuRuntime::Legacy);producer.emulation_mode=false;producer.status_register=4;
    producer.data_bank=0x7e;producer.program_counter=bus.game_version()==GameVersion::JP?0xc08123:0xc08121;
    for(unsigned i=0;i<4;++i)producer.step_instruction();
    require(producer.program_counter==(bus.game_version()==GameVersion::JP?0xc0812f:0xc0812d),
      "Original actual reset seed producer lost its four source atoms");
    std::copy_n(prehistory.work_ram.begin()+0x24,4,bus.work_ram.begin()+0x24);
  }
  void prior_math(unsigned a,unsigned b) {
    // Independent actual MMIO producer: completed division retains a
    // distinctive quotient, then real operand writes and NOPs finish multiply.
    bus.write_byte(0x4204,0x37);bus.write_byte(0x4205,0x91);bus.write_byte(0x4206,0x2b);
    cpu.program_counter=0xc0ff00;for(unsigned i=0;i<8;++i)cpu.execute_instruction<0xea>(0,1);
    bus.write_byte(0x4202,std::uint8_t(a));bus.write_byte(0x4203,std::uint8_t(b));
    for(unsigned i=0;i<8;++i)cpu.execute_instruction<0xea>(0,1);
    require(!bus.math_pending(),"Original declared prior multiply remained incomplete");
  }
  void step_random(){instruction_entry=cpu.program_counter;step();}
  void drain_random(){
    while(bus.take_nmi()) {
      const unsigned pc=cpu.program_counter,stack=cpu.stack_pointer;interrupted_sites.insert(pc);
      const auto image=bus.cartridge_image();
      require(image[0xffea]==0x47&&image[0xffeb]==0x81&&image[0x8147]==0x5c&&image[0x8148]==0x70&&
        image[0x8149]==0x81&&image[0x814a]==0xc0,"Original RAND native NMI vector differs");
      instruction_entry=0xffffffff;cpu.service_interrupt(true);++interrupts;bool done{};
      for(unsigned i=0;i<2000;++i){if(cpu.program_counter==pc&&cpu.stack_pointer==stack){done=true;break;}step_random();}
      require(done,"Original RAND NMI lost its real interrupted context");
    }
  }
  void instruction_random(){drain_random();require(cpu.program_counter!=return_pc(),"Original RAND ran into the subsequent WindowTick gate");
    step_random();++foreground;drain_random();}
};
struct RandomNative {
  // A real independent RNG owner permits actual destruction while its public
  // Runtime/Scene borrowers still live. The World contains the other genuine
  // session owners; its initial runtime is normally destroyed before this lease.
  std::unique_ptr<RandomState> random=std::make_unique<RandomState>(0x1234,0x5678);
  NativeAudio audio;session::World world;
  std::unique_ptr<WorldRuntime> runtime;
  std::unique_ptr<AudioFrameClock> physical;
  std::unique_ptr<SourceWorkClock> work;
  std::unique_ptr<SourceNmiWork> nmi;
  RandomNative(const GameAssets& assets,const session::Content& content,bool speed,bool interrupt_owner=true,bool physical_owner=true)
      :audio(assets.image,assets.version),world(content,audio,256) {
    audio.initialize();world.clock.interrupt_mask=0;world.bind_actor_graphics(assets.image);
    world.display.transient_memory().configure(assets.version);world.clock.action_scripts_disabled=1;
    world.clock.disabled_transitions=1;
    // The default World Runtime already owns actor movement. Release its
    // idle borrowers in the actual World destructor order before replacing
    // that Runtime through its normal exact-affinity lease destruction.
    world.runtime->require_idle();
    world.command_menu.reset();world.interaction_calls.reset();world.startup.reset();
    world.relocation.reset();world.map_load.reset();world.runtime.reset();
    runtime=std::make_unique<WorldRuntime>(world.windows,world.party,*random,world.meters,world.clock,world.input,
      world.actors,world.activation,world.enemies,content.collision,world.area,world.area_colors,content.map,
      content.palettes,content.animations,world.spawn,NpcStripAdmission::Admitted,ActorRetentionReader{},SceneView{256});
    runtime->bind_presentation(world.presentation);runtime->bind_actor_graphics(*world.actor_graphics);
    runtime->refresh_world_capture();runtime->reset_interrupt_callback();
    for(unsigned b=0;b<2;++b)for(unsigned i=0;i<544;++i)world.actor_object_display_state.buffers[b].bytes[i]=std::uint8_t(i*71+b*113+37);
    for(unsigned round=0;round<2;++round){const unsigned b=1+(round%2);
      for(unsigned i=0;i<4;++i)world.display.staged_scroll[i]={std::uint16_t(0x4100+b*0x211+i*2*0x127),
        std::uint16_t(0x4100+b*0x211+(i*2+1)*0x127)};
      world.frame_display.update_world_screen();}
    physical=std::make_unique<AudioFrameClock>(world.clock,[this]{work->request_nmi();},[]{},0,0,false);
    if(physical_owner)physical->bind_peripherals(world.peripherals);else world.peripherals.bind_clock(*physical);
    work=std::make_unique<SourceWorkClock>(*physical,audio,world.clock,*runtime,world.actor_object_display_state,
      *world.actor_object_display,world.frame_display,speed);audio.bind_clock(*work);
    nmi=std::make_unique<SourceNmiWork>(*runtime,audio,world.clock,world.session,world.frame_display,world.palette,
      world.display,world.scratch,world.fade,world.presentation,world.peripherals,SourceInterruptContext{true,true,true});
    if(interrupt_owner)work->bind_interrupt_work(*nmi);
  }
  std::unique_ptr<WorldRuntime::Operation> suspension(SourceRandomContext ctx=random_context()) {
    auto operation=runtime->begin_source_random_window_tick(*work,ctx);
    for(unsigned i=0;i<100;++i)if(operation->advance(1)==dialogue::Progress::Suspended){
      require(operation->service()==SceneService::SourceRandom,"Actual RAND WindowTick did not suspend before random consumption");return operation;}
    throw std::runtime_error(context+": Actual RAND WindowTick did not reach its source leaf");
  }
};
struct RandomOwners {
  std::array<std::array<std::uint8_t,544>,2> objects{};
  std::array<std::uint8_t,544> displayed_objects{};
  std::array<std::array<battle::PsiScroll,4>,2> scroll{};
  std::array<battle::PsiScroll,4> staged{},hardware{};
  std::array<std::uint8_t,1036> working{};
  std::array<std::uint16_t,5> builder{};
  std::array<std::uint8_t,512> staged_palette{},displayed_palette{};
  std::array<std::array<std::uint8_t,7>,2> dma{};
  std::array<std::uint8_t,65536> vram{};
  std::array<std::uint8_t,256> ring{};
  std::vector<battle::PsiTransfer> pending_transfers;
  std::uint16_t ring_credit{};
  std::uint8_t ring_producer{},ring_consumer{};
  InputState input;
  SourceMathState math;
  std::uint16_t primary{},secondary{},heap{},base{},request{},next{},flag{};
  std::uint8_t pending{},counter{},brightness{},palette{};
  std::uint32_t timer{};
  std::uint64_t clocks{},frames{},interrupts{},polls{},phase{},publications{},scene_frames{};
  bool operator==(const RandomOwners&)const=default;
};
RandomOwners random_owners(RandomOriginal& o) {
  RandomOwners r;const bool jp=o.bus.game_version()==GameVersion::JP;
  for(unsigned b=0;b<2;++b){std::copy_n(o.bus.work_ram.begin()+(b?0x800:0x500),544,r.objects[b].begin());
    for(unsigned i=0;i<4;++i)r.scroll[b][i]={std::uint16_t(o.word(0x41+b*2+i*8)),std::uint16_t(o.word(0x45+b*2+i*8))};}
  std::copy_n(o.bus.work_ram.begin()+(jp?0x2800:0x2400),1036,r.working.begin());
  r.builder={std::uint16_t(o.word(3)),std::uint16_t(o.word(5)),std::uint16_t(o.word(7)),o.bus.work_ram[10],o.bus.work_ram[9]};
  r.displayed_objects=o.bus.object_attributes;const auto view=o.bus.scene_read_view();
  for(unsigned i=0;i<4;++i){r.staged[i]={std::uint16_t(o.word(0x31+i*4)),std::uint16_t(o.word(0x33+i*4))};
    r.hardware[i]={view.background_scroll_x[i],view.background_scroll_y[i]};}
  std::copy_n(o.bus.work_ram.begin()+0x200,512,r.staged_palette.begin());r.displayed_palette=o.bus.palette_ram;
  for(unsigned channel=0;channel<2;++channel)for(unsigned i=0;i<7;++i)r.dma[channel][i]=o.bus.read_byte(0x4300+channel*16+i);
  r.vram=o.bus.video_ram;
  std::copy_n(o.bus.work_ram.begin()+0x400,256,r.ring.begin());
  r.ring_credit=std::uint16_t(o.word(0x99));r.ring_producer=o.bus.work_ram[0];r.ring_consumer=o.bus.work_ram[1];
  // Admitted original compositions have an empty actual raw ring. Native-only
  // rejection snapshots additionally retain every semantic transfer field.
  for(unsigned i=0;i<2;++i){r.input.state[i]=std::uint16_t(o.word(0x65+i*2));r.input.held[i]=std::uint16_t(o.word(0x69+i*2));
    r.input.pressed[i]=std::uint16_t(o.word(0x6d+i*2));r.input.repeat_timer[i]=std::uint16_t(o.word(0x71+i*2));}
  r.input.player_activity=std::uint16_t(o.word(jp?0xa2a:0xa34));r.math=RuntimeStateAudit::random_math(o.bus);
  r.primary=std::uint16_t(o.word(0x24));r.secondary=std::uint16_t(o.word(0x26));r.heap=std::uint16_t(o.word(0xa1));r.base=std::uint16_t(o.word(0xa3));
  r.request=std::uint16_t(o.word(0x2c));r.next=std::uint16_t(o.word(0x2e));r.flag=std::uint16_t(o.word(jp?0xa031:0x9e2b));
  r.pending=o.bus.work_ram[0x2b];r.counter=o.bus.work_ram[2];r.brightness=o.bus.work_ram[0xd];r.palette=o.bus.work_ram[0x30];
  r.timer=o.word(0xa7)|(o.word(0xa9)<<16);r.clocks=o.bus.master_clocks();r.frames=o.bus.completed_frames;r.interrupts=o.interrupts;
  r.phase=AudioFrameClock::physical_phase(o.bus.scanline_index(),o.bus.scanline_clock(),o.bus.completed_frames);
  r.publications=r.scene_frames=o.interrupts;return r;
}
RandomOwners random_owners(const session::World& w,const RandomState* random,
    const SourceWorkClock* work,const AudioFrameClock* physical,const WorldRuntime& runtime) {
  RandomOwners r;
  for(unsigned b=0;b<2;++b){r.objects[b]=w.actor_object_display_state.buffers[b].bytes;r.scroll[b]=w.frame_display.source_buffer(b+1).scroll;}
  if(w.frame_display.screen().raw_objects)r.displayed_objects=w.frame_display.screen().raw_objects->bytes;
  r.working=w.actor_object_display_state.working;const auto&builder=w.actor_object_display_state.builder;
  r.builder={builder.address,builder.end_address,builder.high_address,builder.high_buffer,w.actor_object_display_state.scratch.high_pointer_bank};
  r.staged=w.display.staged_scroll;r.hardware=w.display.source_hardware_scroll();r.vram=w.display.vram();r.input=w.input;
  std::copy(w.display.descriptor_bytes().begin(),w.display.descriptor_bytes().end(),r.ring.begin());
  r.ring_credit=w.display.pending_bytes();r.ring_producer=w.display.producer_index();r.ring_consumer=w.display.consumer_index();
  r.pending_transfers.assign(w.display.pending().begin(),w.display.pending().end());
  for(unsigned i=0;i<256;++i){const auto staged=w.palette.staged_color(i),displayed=w.palette.displayed[i/16][i%16];
    r.staged_palette[i*2]=std::uint8_t(staged);r.staged_palette[i*2+1]=std::uint8_t(staged>>8);
    r.displayed_palette[i*2]=std::uint8_t(displayed);r.displayed_palette[i*2+1]=std::uint8_t(displayed>>8);}
  for(unsigned channel=0;channel<2;++channel)std::copy_n(w.peripherals.dma(channel).begin(),7,r.dma[channel].begin());
  r.math=w.peripherals.source_math_state();
  if(random){r.primary=random->primary_word;r.secondary=random->secondary_word;}
  r.heap=w.display.transient_memory().current_address();r.base=w.display.transient_memory().base_address();r.flag=w.display.dma_transfer_flag();
  r.request=w.frame_display.display_request();r.next=w.frame_display.next_buffer_id();r.pending=w.clock.new_frame_started;r.counter=w.clock.frame_counter;
  r.brightness=w.fade.state().brightness;r.palette=w.palette.upload_mode;r.timer=w.session.elapsed_timer;
  r.clocks=work?work->master_clocks():0;r.frames=physical?physical->physical_frames():0;r.phase=physical?physical->phase():0;
  r.interrupts=work?work->completed_source_interrupts():0;r.polls=w.clock.input_polls;
  r.publications=w.clock.publications;r.scene_frames=runtime.scene().completed_frames();return r;
}
RandomOwners random_owners(const RandomNative& n) {
  return random_owners(n.world,n.random.get(),n.work.get(),n.physical.get(),*n.runtime);
}
void same_random(RandomOriginal& o,const RandomNative& n,const char* where) {
  const auto expected=random_owners(o),actual=random_owners(n);
  if(actual!=expected){std::ostringstream out;out<<where<<" entry="<<std::hex<<o.instruction_entry<<" PC="<<o.cpu.program_counter<<std::dec
    <<" atom="<<o.foreground<<" clocks="<<actual.clocks<<'/'<<expected.clocks<<" RNG="<<actual.primary<<','<<actual.secondary<<'/'<<expected.primary<<','<<expected.secondary
    <<" math="<<(actual.math==expected.math)<<" OAM="<<(actual.objects==expected.objects)<<" builder="<<(actual.builder==expected.builder)
    <<" DMA="<<(actual.dma==expected.dma)<<" ring="<<(actual.ring==expected.ring)
    <<" ring-credit="<<actual.ring_credit<<'/'<<expected.ring_credit
    <<" ring-cursors="<<unsigned(actual.ring_producer)<<','<<unsigned(actual.ring_consumer)<<'/'<<unsigned(expected.ring_producer)<<','<<unsigned(expected.ring_consumer)
    <<" input="<<(actual.input==expected.input)<<" NMI="<<actual.interrupts<<'/'<<expected.interrupts;
    require(false,out.str());}++checks;
}
struct RandomCase {
  bool fast=true,enabled=true;
  unsigned budget=1,direct_page=0x1e00,flags=4,line=40,horizontal=100,seed{},previous_a=0x97,previous_b=0xc3;
};
constexpr std::array<std::array<unsigned,2>,8> random_seeds{{{0x1234,0x5678},{0,0},{0xffff,0xffff},{0x8000,0x7fff},
  {0x7fff,0xff00},{1,0xffff},{0xfeff,0xa501},{0x1357,0xffed}}};
void prepare_random(RandomOriginal& o,RandomNative& n,const RandomCase& c) {
  auto&w=n.world;const bool jp=o.bus.game_version()==GameVersion::JP;
  if(!c.seed)o.reset_seed();else{o.put(0x24,random_seeds[c.seed][0]);o.put(0x26,random_seeds[c.seed][1]);
    n.random->primary_word=std::uint16_t(random_seeds[c.seed][0]);n.random->secondary_word=std::uint16_t(random_seeds[c.seed][1]);}
  o.prior_math(c.previous_a,c.previous_b);w.peripherals.divide_word(0x9137,0x2b);w.peripherals.multiply_byte(std::uint8_t(c.previous_a),std::uint8_t(c.previous_b));
  // Actual predecessor NOPs charged on this native host independently; prior
  // MMIO and native completed-operation setup themselves are excluded inputs.
  for(unsigned i=0;i<16;++i)n.work->retire_source_work({2,1,0,0});
  w.fade.force_blank(true);const auto fade=w.fade.state();o.bus.work_ram[0xd]=fade.brightness;
  o.bus.work_ram[0x28]=fade.step;o.bus.work_ram[0x29]=fade.delay;o.bus.work_ram[0x2a]=fade.remaining;
  w.clock.frame_counter=0xfe;o.bus.work_ram[2]=0xfe;w.clock.new_frame_started=0x7f;o.bus.work_ram[0x2b]=0x7f;
  w.session.elapsed_timer=0x1234ffff;o.put(0xa7,w.session.elapsed_timer);o.put(0xa9,w.session.elapsed_timer>>16);
  w.input.state={0x3000,0x8400};w.input.held={0x1234,0x4321};w.input.pressed={0xabcd,0xefab};w.input.repeat_timer={9,7};w.input.player_activity=0xffff;
  for(unsigned i=0;i<2;++i){o.put(0x65+i*2,w.input.state[i]);o.put(0x69+i*2,w.input.held[i]);o.put(0x6d+i*2,w.input.pressed[i]);o.put(0x71+i*2,w.input.repeat_timer[i]);}
  o.put(jp?0xa2a:0xa34,w.input.player_activity);o.put(0x20,0x851b);o.put(0xa3,w.display.transient_memory().base_address());o.put(0xa1,w.display.transient_memory().current_address());
  w.display.set_source_dma_transfer_flag(0xbeef);o.put(jp?0xa031:0x9e2b,0xbeef);
  w.palette.upload_mode=0;o.bus.work_ram[0x30]=0;for(unsigned i=0;i<256;++i){const auto staged=std::uint16_t(0x8000|((i*113+57)&0x7fff)),displayed=std::uint16_t((i*53+71)&0x7fff);
    w.palette.staged_color(i)=staged;o.put(0x200+i*2,staged);w.palette.displayed[i/16][i%16]=displayed;
    o.bus.palette_ram[i*2]=std::uint8_t(displayed);o.bus.palette_ram[i*2+1]=std::uint8_t(displayed>>8);}
  o.bus.work_ram[jp?0xc9:0xcb]=w.audio.sound_queue_start();o.bus.work_ram[jp?0xc8:0xca]=w.audio.sound_queue_end();
  const auto target=std::uint64_t(262*1364)+c.line*1364+c.horizontal;o.cpu.program_counter=0xc0ff00;
  while(o.bus.master_clocks()<target){o.cpu.execute_instruction<0xea>(0,1);n.work->retire_source_work({2,1,0,0});}
  require(o.bus.master_clocks()==n.work->master_clocks(),"Independent RAND warmup clock epochs differ");
  n.physical->nmi_enabled(c.enabled);w.clock.interrupt_mask=std::uint8_t(c.enabled?0x80:0);w.clock.retained_hardware_interrupt_mask=w.clock.interrupt_mask;
  o.bus.write_byte(0x4200,w.clock.interrupt_mask);o.bus.work_ram[0x1e]=w.clock.interrupt_mask;
  o.cpu.program_counter=o.caller();o.cpu.status_register=std::uint8_t(c.flags);o.cpu.direct_page=std::uint16_t(c.direct_page);
  o.cpu.data_bank=0x7e;o.cpu.stack_pointer=0x1fff;o.cpu.accumulator=0x1234;o.cpu.x_index=0x4567;o.cpu.y_index=0x89ab;
  o.audit();same_random(o,n,"independently prepared RAND component owners");
}
void random_case(const GameAssets& assets,const session::Content& content,const RandomCase& c,std::set<unsigned>& sites) {
  context=assets.title+" RAND fast="+std::to_string(c.fast)+" budget="+std::to_string(c.budget)+" D="+std::to_string(c.direct_page)+
    " flags="+std::to_string(c.flags)+" seed="+std::to_string(c.seed)+" phase="+std::to_string(c.line)+":"+std::to_string(c.horizontal);
  RandomOriginal o(assets,c.fast);RandomNative n(assets,content,c.fast);prepare_random(o,n,c);
  const auto initial=random_owners(n);const auto audio=n.audio.master_clocks(),refresh=n.work->refresh_pauses();
  auto operation=n.suspension(random_context(c.direct_page,c.flags));require(random_owners(n)==initial,"Source tick admission consumed RAND before actual source suspension");
  o.instruction_random();n.work->retire_source_work({8,4,3,0});same_random(o,n,"actual separate RAND external JSL");
  auto leaf=operation->begin_source_random(*n.work,random_context(c.direct_page,c.flags));const auto called=random_owners(n);
  require(!leaf->advance(0)&&leaf->retired_instructions()==0&&random_owners(n)==called,"RAND factory or zero budget mutated its actual owners/time");
  if(c.budget==1){while(!leaf->complete()){
    o.instruction_random();leaf->advance(1);same_random(o,n,"each actual RAND retirement");
    require(leaf->registers()==SourceRandomRegisters{std::uint16_t(o.cpu.accumulator),o.cpu.status_register},"Actual RAND accumulator/status sample differs at retirement");
    require(leaf->retired_instructions()+1==o.foreground,"Source RAND skipped or doubled a literal atom");
    if(o.instruction_entry==0xc08ea8-o.delta()&&o.interrupts==initial.interrupts){const auto math=n.world.peripherals.source_math_state();
      require(math.product==initial.math.product&&math.remaining_cpu_cycles==(c.fast?2u:1u)&&
        math.operand_a==std::uint8_t(random_seeds[c.seed][1])&&math.operand_b==std::uint8_t(random_seeds[c.seed][0]),
        "Actual long multiply store published its new product early or lost the two real operand/debt latches");}
  }}else{while(o.cpu.program_counter!=o.return_pc())o.instruction_random();while(!leaf->advance(c.budget)){}same_random(o,n,"large-budget actual RAND return");}
  require(o.cpu.program_counter==o.return_pc()&&o.cpu.stack_pointer==0x1fff&&o.cpu.direct_page==c.direct_page&&o.cpu.data_bank==0x7e&&
    !o.cpu.emulation_mode&&o.cpu.status_register==c.flags&&o.cpu.x_index==0x4567&&o.cpu.y_index==0x89ab&&o.cpu.accumulator<256&&
    leaf->registers()==SourceRandomRegisters{std::uint16_t(o.cpu.accumulator),o.cpu.status_register}&&leaf->result_byte()==o.cpu.accumulator,
    "Original RAND lost genuine far return, flags, registers or balanced hardware stack");
  require((leaf->retired_instructions()==27||leaf->retired_instructions()==28)&&o.foreground==leaf->retired_instructions()+1,
    "RAND instruction count lost its real conditional ORA path");
  require(n.audio.master_clocks()-audio==n.work->master_clocks()-initial.clocks&&n.work->master_clocks()-initial.clocks==o.bus.master_clocks()-initial.clocks&&
    n.work->refresh_pauses()-refresh==o.refreshes(),"RAND independent elapsed audio/physical or refresh receipt differs");
  require(n.world.clock.input_polls==initial.polls&&n.world.peripherals.quotient()==initial.math.quotient,
    "RAND consumed input or changed the retained division quotient");
  const auto complete=random_owners(n);operation->respond_source_random(*leaf);
  require(random_owners(n)==complete&&!n.random->source_active(),"RAND response replayed time, math, RNG or input instead of releasing exact lease");
  sites.insert(o.interrupted_sites.begin(),o.interrupted_sites.end());
}
struct RandomFixture {
  RandomNative native;
  std::unique_ptr<WorldRuntime::Operation> operation;
  RandomFixture(const GameAssets& assets,const session::Content& content,bool suspend=true,bool irq_owner=true,bool physical_owner=true)
      :native(assets,content,true,irq_owner,physical_owner) {
    native.world.fade.force_blank(true);native.physical->nmi_enabled(true);
    native.world.clock.interrupt_mask=0x80;native.world.clock.retained_hardware_interrupt_mask=0x80;
    if(suspend)operation=native.suspension();
  }
  std::unique_ptr<SourceRandom> begin(SourceRandomContext ctx=random_context()) {return operation->begin_source_random(*native.work,ctx);}
};
struct RandomSnapshot {
  RandomOwners owners;
  std::uint64_t audio{},pending_windows{};
  bool operator==(const RandomSnapshot&)const=default;
};
RandomSnapshot random_snapshot(const RandomFixture& f) {
  return {random_owners(f.native),f.native.audio.master_clocks(),f.native.world.windows.pending_publications()};
}
void random_rejection(const GameAssets& assets,const session::Content& content,unsigned kind) {
  context=assets.title+" RAND pure context/path kind="+std::to_string(kind);RandomFixture f(assets,content);auto ctx=random_context();
  if(kind==0)ctx.native_mode=false;
  if(kind==1)ctx.low_wram_stack=false;
  if(kind==2)ctx.decimal_clear=false;
  if(kind==3)ctx.program_bank=0x80;
  if(kind==4)ctx.caller_bank=0xc0;
  if(kind==5)ctx.data_bank=0x7f;
  if(kind==6)ctx.caller_status|=1;
  if(kind==7)ctx.caller_status|=8;
  if(kind==8)ctx.caller_status|=0x10;
  if(kind==9)ctx.caller_status|=0x20;
  if(kind==10)ctx.direct_page=0x200;
  if(kind==11)ctx.stack_pointer=0x1dfc;
  if(kind==12)ctx.stack_pointer=0xffff;
  if(kind==13){f.native.world.clock.interrupt_mask=0x90;f.native.world.clock.retained_hardware_interrupt_mask=0x90;}
  if(kind==14){for(unsigned i=0;i<255;++i)f.native.world.frame_display.request_retained_screen();
    require(f.native.world.frame_display.pending_display_id()==1,"Genuine retained request did not reach the declared low byte");
    for(unsigned i=0;i<2;++i)f.native.world.frame_display.request_retained_screen();
    require(f.native.world.frame_display.pending_display_id()==3,"Genuine retained producer did not reach invalid pending ID3");}
  if(kind==15)f.native.world.windows.queue_scene();
  if(kind==16)f.native.world.display.queue_frame(0);
  const auto before=random_snapshot(f);const auto picture=f.native.runtime->scene().frame();bool rejected{};
  try{auto leaf=f.begin(ctx);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&random_snapshot(f)==before&&f.native.runtime->scene().frame()==picture&&!f.native.random->source_active()&&!f.native.runtime->failed(),
    "Invalid RAND context/path claimed its real lease or mutated actual owners before admission");
}
void random_tick_rejection(const GameAssets& assets,const session::Content& content,unsigned kind) {
  context=assets.title+" RAND pure public tick kind="+std::to_string(kind);
  if(kind==0) {
    // Use the existing actual World Runtime's healthy walking/transition/
    // scheduler graph solely for this genuine world-callback rejection.
    ScreenNative n(assets,content,true);auto&w=n.world;
    w.fade.force_blank(true);n.physical->nmi_enabled(true);
    w.clock.interrupt_mask=0x80;w.clock.retained_hardware_interrupt_mask=0x80;w.clock.disabled_transitions=1;
    w.runtime->restore_world_interrupt_callback();
    const auto snapshot=[&]{return RandomSnapshot{random_owners(w,&w.random,n.work.get(),n.physical.get(),*w.runtime),
      n.audio.master_clocks(),w.windows.pending_publications()};};
    const auto before=snapshot();const auto picture=w.runtime->scene().frame();bool rejected{};
    try{auto op=w.runtime->begin_source_random_window_tick(*n.work,random_context());}catch(const std::logic_error&){rejected=true;}
    require(rejected&&snapshot()==before&&w.runtime->scene().frame()==picture&&!w.random.source_active()&&!w.runtime->failed(),
      "Unsupported actual RNG/NMI/peripheral/IRQ/callback owner began the source tick or changed state/time");
    return;
  }
  RandomFixture f(assets,content,false,kind!=2,kind!=3);
  if(kind==1){f.native.world.clock.interrupt_mask=0x90;f.native.world.clock.retained_hardware_interrupt_mask=0x90;}
  if(kind==4)f.native.random.reset();
  if(kind==5)f.native.nmi.reset();
  if(kind==6)f.native.world.windows.queue_scene();
  if(kind==7)f.native.world.display.queue_frame(0);
  const auto before=random_snapshot(f);const auto picture=f.native.runtime->scene().frame();bool rejected{};
  try{auto op=f.native.suspension();}catch(const std::logic_error&){rejected=true;}
  require(rejected&&random_snapshot(f)==before&&f.native.runtime->scene().frame()==picture,
    "Unsupported actual RNG/NMI/peripheral/IRQ/callback owner began the source tick or changed state/time");
}
void random_receipts(const GameAssets& assets,const session::Content& content) {
  context=assets.title+" RAND exact single-use receipts and generic bypass";RandomFixture f(assets,content),foreign(assets,content);
  const auto before=random_snapshot(f),other=random_snapshot(foreign);auto leaf=f.begin();
  bool duplicate{},actor{},frame{},publication{},source{},early{},semantic{},assignment{};
  try{f.begin();}catch(const std::logic_error&){duplicate=true;}
  try{f.operation->respond_actor();}catch(const std::logic_error&){actor=true;}
  try{f.operation->complete_frame({0,0});}catch(const std::logic_error&){frame=true;}
  try{f.operation->complete_publication();}catch(const std::logic_error&){publication=true;}
  try{f.operation->respond_source_publication();}catch(const std::logic_error&){source=true;}
  try{f.operation->respond_source_random(*leaf);}catch(const std::logic_error&){early=true;}
  try{next_random(*f.native.random);}catch(const std::logic_error&){semantic=true;}
  try{*f.native.random=RandomState{0x4321,0x8765};}catch(const std::logic_error&){assignment=true;}
  require(duplicate&&actor&&frame&&publication&&source&&early&&semantic&&assignment&&random_snapshot(f)==before&&f.native.random->source_active(),
    "Active RAND allowed duplicate/generic/early/semantic consumption or lost its shared-word lease");
  while(!leaf->advance(1)){}const auto completed=random_snapshot(f);bool wrong{};
  try{foreign.operation->respond_source_random(*leaf);}catch(const std::logic_error&){wrong=true;}
  require(wrong&&random_snapshot(f)==completed&&random_snapshot(foreign)==other,"Foreign RAND receipt consumed another actual continuation");
  f.operation->respond_source_random(*leaf);bool repeated{},stale{};
  try{f.operation->respond_source_random(*leaf);}catch(const std::logic_error&){repeated=true;}
  try{leaf->advance(1);}catch(const std::logic_error&){stale=true;}
  require(repeated&&stale&&random_snapshot(f)==completed&&!f.native.random->source_active(),"Consumed RAND leaf replayed effects or retained the RNG lease");
}
void random_abandon(const GameAssets& assets,const session::Content& content,bool parent,bool complete) {
  context=assets.title+" RAND abandonment parent="+std::to_string(parent)+" complete="+std::to_string(complete);RandomFixture f(assets,content);auto leaf=f.begin();
  if(complete){while(!leaf->advance(1)){}}else require(!leaf->advance(1),"Original PHP alone completed RAND");
  const auto before=random_snapshot(f);bool rejected{};
  if(parent){f.operation.reset();try{leaf->advance(1);}catch(const std::logic_error&){rejected=true;}}
  else{leaf.reset();try{f.begin();}catch(const std::logic_error&){rejected=true;}}
  require(rejected&&random_snapshot(f)==before,"Abandoned partial/completed RAND parent or leaf was reused or changed physical owners");
}
void random_lost_owner(const GameAssets& assets,const session::Content& content,unsigned owner,unsigned stage) {
  context=assets.title+" RAND lost owner="+std::to_string(owner)+" stage="+std::to_string(stage);RandomFixture f(assets,content);
  std::unique_ptr<SourceRandom> leaf;if(stage){leaf=f.begin();if(stage==2){while(!leaf->advance(1)){}}else require(!leaf->advance(1),"RAND first atom completed invocation");}
  if(owner==0)f.native.random.reset();
  if(owner==1)f.native.nmi.reset();
  if(owner==2)f.native.work.reset();
  if(owner==3)f.native.physical.reset();
  const auto before=random_snapshot(f);const auto picture=f.native.runtime->scene().frame();bool rejected{};
  try{if(!stage)leaf=f.begin();else if(stage==1)leaf->advance(1);else f.operation->respond_source_random(*leaf);}
  catch(const std::logic_error&){rejected=true;}
  require(rejected&&random_snapshot(f)==before&&f.native.runtime->scene().frame()==picture,
    "Source RAND borrowed expired actual RNG/NMI/work/physical or advanced any hardware effects");
}
void random_foreign_work(const GameAssets& assets,const session::Content& content) {
  context=assets.title+" RAND foreign actual work identity";RandomFixture f(assets,content),other(assets,content);
  const auto before=random_snapshot(f),foreign=random_snapshot(other);bool rejected{};
  try{auto leaf=f.operation->begin_source_random(*other.native.work,random_context());}catch(const std::logic_error&){rejected=true;}
  require(rejected&&random_snapshot(f)==before&&random_snapshot(other)==foreign&&!f.native.runtime->failed(),
    "Foreign physical/work identity claimed RAND or changed either Scene before admission");
}
void random_wrong_parent(const GameAssets& assets,const session::Content& content) {
  context=assets.title+" RAND actual unrelated ScreenUpdate parent";RandomFixture f(assets,content,false);
  f.operation=f.native.runtime->begin(TickKind::WorldFrame);bool suspended{};
  for(unsigned i=0;i<100;++i)if(f.operation->advance(1)==dialogue::Progress::Suspended){suspended=true;break;}
  require(suspended&&f.operation->service()==SceneService::ScreenUpdate,"Wrong RAND parent did not reach its genuine unrelated ScreenUpdate");
  const auto before=random_snapshot(f);const auto picture=f.native.runtime->scene().frame();bool rejected{};
  try{f.begin();}catch(const std::logic_error&){rejected=true;}
  require(rejected&&random_snapshot(f)==before&&f.native.runtime->scene().frame()==picture&&!f.native.random->source_active()&&!f.native.runtime->failed(),
    "RAND accepted or mutated an actual unrelated Scene continuation");
}
void random_value_copies(const GameAssets& assets,const session::Content& content) {
  context=assets.title+" RAND true per-instance value copy and destination identity";
  RandomState destination{0x1234,0x5678};const auto identity=destination.source_lifetime();std::weak_ptr<const void> source_life;
  std::optional<RandomState> copied,moved;
  {RandomState source{0xfedc,0xba98};source_life=source.source_lifetime();copied.emplace(source);moved.emplace(std::move(source));
    require(*copied==source&&*moved==source&&!source_life.owner_before(source.source_lifetime())&&!source.source_lifetime().owner_before(source_life),
      "Move/value copy unexpectedly transferred or destroyed the source identity");destination=source;}
  require(source_life.expired()&&!copied->source_lifetime().expired()&&!moved->source_lifetime().expired()&&destination==*copied&&
    !identity.expired()&&!identity.owner_before(destination.source_lifetime())&&!destination.source_lifetime().owner_before(identity),
    "RNG copies share a dying token or assignment replaced its destination identity");
  const auto moved_life=moved->source_lifetime();destination=std::move(*moved);moved.reset();
  require(moved_life.expired()&&!destination.source_lifetime().expired()&&destination==*copied,"Move assignment transferred source lifetime into destination");
  RandomFixture f(assets,content);auto leaf=f.begin();RandomState independent=*f.native.random;
  require(independent==*f.native.random&&!independent.source_active(),"Copied RNG inherited a live source lease");
  const auto before=random_snapshot(f);next_random(independent);require(random_snapshot(f)==before,"Independent copied RNG advanced the borrowed live words");
}
void random_next_generation(const GameAssets& assets,const session::Content& content) {
  context=assets.title+" RAND old retained leaf cannot clear a newer exact lease";RandomFixture f(assets,content);auto old=f.begin();
  while(!old->advance(1)){}f.operation->respond_source_random(*old);
  // Genuine WindowTick instant gate completes this actual opted-in parent
  // after its one RAND; no second RAND, publication or physical frame occurs.
  f.native.world.windows.output().policy().instant=true;
  require(f.operation->advance()==dialogue::Progress::Finished,"Actual instant WindowTick did not finish after one RAND");
  f.operation.reset();f.native.world.windows.output().policy().instant=false;f.operation=f.native.suspension();auto fresh=f.begin();
  const auto before=random_snapshot(f);old.reset();bool semantic{};
  try{next_random(*f.native.random);}catch(const std::logic_error&){semantic=true;}
  require(semantic&&f.native.random->source_active()&&random_snapshot(f)==before,"Old completed leaf cleared a newer exact RNG lease");
  while(!fresh->advance(1)){}f.operation->respond_source_random(*fresh);
}
void random_compatibility42(const GameAssets& assets,const session::Content& content) {
  context=assets.title+" RAND unchanged42 semantic prefix opt-in compatibility";
  cutscenes::DisplayState text;ScreenNative n(assets,content,true);n.world.windows.bind_source_text_tiles(text);n.world.windows.initialize_cold_text_tiles();
  n.world.fade.force_blank(true);n.physical->nmi_enabled(true);n.world.clock.interrupt_mask=0x80;n.world.clock.retained_hardware_interrupt_mask=0x80;
  n.world.clock.disabled_transitions=1;
  auto expected=n.world.random;next_random(expected);const auto clock=n.work->master_clocks(),audio=n.audio.master_clocks(),polls=n.world.clock.input_polls;
  auto operation=n.world.runtime->begin_source_window_tick(*n.work,{true,true,true,0xc2,0x7e,0x1e00,0x1ffc});bool suspended{};
  for(unsigned i=0;i<100;++i)if(operation->advance(1)==dialogue::Progress::Suspended){suspended=true;break;}
  require(suspended&&operation->service()==SceneService::WindowPublication&&n.world.random==expected&&!n.world.random.source_active()&&
    n.work->master_clocks()==clock&&n.audio.master_clocks()==audio&&n.world.clock.input_polls==polls,
    "Existing42 opt-in acquired timed RAND, duplicated semantic random or changed its source-publication service");
}
unsigned random_regressions(const GameAssets& assets,const session::Content& content) {
  for(unsigned kind=0;kind<17;++kind)random_rejection(assets,content,kind);
  for(unsigned kind=0;kind<8;++kind)random_tick_rejection(assets,content,kind);
  random_receipts(assets,content);
  for(bool parent:{false,true})for(bool complete:{false,true})random_abandon(assets,content,parent,complete);
  for(unsigned owner=0;owner<4;++owner)for(unsigned stage=0;stage<3;++stage)if(owner!=2||stage)random_lost_owner(assets,content,owner,stage);
  random_foreign_work(assets,content);random_wrong_parent(assets,content);random_value_copies(assets,content);random_next_generation(assets,content);random_compatibility42(assets,content);
  return 46;
}
} // namespace

int main(int argc,char** argv){try{
  if(argc<2)return 77;
  const bool smoke=std::string(argv[1])=="--random-smoke";if(smoke&&argc<3)return 77;
  for(int arg=smoke?2:1;arg<argc;++arg){const auto assets=load_game_assets(argv[arg],asset_profiles());const session::Content content(assets.image,assets.version);
    unsigned cases{};std::set<unsigned> sites;
    for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned dp:{0x1e00u,0x1d12u})for(unsigned flags:{0u,4u,0x42u,0xc4u})
      for(unsigned index=0;index<(smoke?2u:random_seeds.size());++index){RandomCase c;c.fast=fast;c.budget=budget;c.direct_page=dp;c.flags=flags;c.seed=smoke&&index?2:index;
        random_case(assets,content,c,sites);++cases;}
    const auto regressions=random_regressions(assets,content);
    if(!smoke){
      for(bool fast:{false,true})for(unsigned dp:{0x1e00u,0x1d12u})for(unsigned seed:{0u,2u}){
        RandomCase c;c.fast=fast;c.direct_page=dp;c.seed=seed;c.enabled=false;c.line=224;c.horizontal=1300;random_case(assets,content,c,sites);++cases;}
      // The longest RAND+caller useful total736+62 is below one scanline.
      // Two complete adjacent lines, with uniform4-clock slots, cover short
      // literal instructions without fitting or selecting observed phases.
      for(bool fast:{false,true})for(unsigned seed:{0u,2u})for(unsigned line=223;line<=224;++line)for(unsigned h=0;h<1364;h+=4){
        RandomCase c;c.fast=fast;c.seed=seed;c.line=line;c.horizontal=h;random_case(assets,content,c,sites);++cases;}
      const unsigned delta=assets.version==GameVersion::JP?15:0;
      for(unsigned site:{0xc08eacu,0xc08eadu,0xc08eb3u,0xc08eb7u,0xc08ebau,0xc08ecau,0xc08ecbu,0xc08ed0u})
        require(sites.contains(site-delta),"Declared physical matrix missed actual original RAND instruction interruption at "+std::to_string(site-delta));
      require(sites.contains(assets.version==GameVersion::JP?0xc13508u:0xc12ddbu),"Declared RAND physical matrix missed true outer caller after RTL");
    }
    std::cout<<"PASS "<<assets.title<<" original mapped RAND compositions="<<cases<<" regressions="<<regressions<<" checks="<<checks<<'\n';
  }return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
